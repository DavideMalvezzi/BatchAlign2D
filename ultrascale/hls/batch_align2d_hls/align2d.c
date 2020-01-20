
#include "align2d.h"

#define PAR_BATCH
#define OPT_LOOP
#define OPT_GAUSS_NEWTON
#define OPT_MM

// Compute the hessian matrix inverse
void compute_inverse_hessian(const PatchBorder ref_patch_with_border, Matrix3f H_inv, float ref_patch_dx[PATCH_AREA], float ref_patch_dy[PATCH_AREA]){
	#pragma HLS INLINE

	// Hessian matrix
	Matrix3f H = {0};

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=H complete dim=1

	int x, y;
	// Compute Jacobians and Hessian
	compute_hessian: for(int i = 0; i < PATCH_AREA; i++){
		#ifdef OPT_LOOP
			#pragma HLS PIPELINE II=1
		#endif

		// Get pixel position
		y = i / PATCH_SIZE;
		x = i % PATCH_SIZE;

		// Compute Jacobians
		ref_patch_dx[i] = (ref_patch_with_border[(y + 1) * REF_STEP + x + 2] - ref_patch_with_border[(y + 1) * REF_STEP + x]);
		ref_patch_dy[i] = (ref_patch_with_border[(y + 2) * REF_STEP + x + 1] - ref_patch_with_border[y * REF_STEP + x + 1]);

		// Compute the Hessian matrix from the Jacobian vectors using the new formulation.
		// H = sum JJ^T with J=(dx, dy, 1)
		// so the Hessian can be expressed as H = sum [[dx^2, dx*dy, dx], [dx*dy, dy^2, dy], [dx, dy, 1]]
		// The matrix is symmetric so compute only the upper half
		H[0] += ref_patch_dx[i] * ref_patch_dx[i];
		H[1] += ref_patch_dx[i] * ref_patch_dy[i];
		H[2] += ref_patch_dx[i];
		H[4] += ref_patch_dy[i] * ref_patch_dy[i];
		H[5] += ref_patch_dy[i];
	}

	// Each Jacobians values should be multiplied by 0.5
	// Gathering the 0.5 value and applying it only on the final Hessian
	// reduces the number of total floating point multiplication operations
	H[0] *= 0.25f;
	H[1] *= 0.25f;
	H[2] *= 0.5f;
	H[4] *= 0.25f;
	H[5] *= 0.5f;
	H[8] = PATCH_AREA;

	// Complete the Hessian lower half
	H[3] = H[1];
	H[6] = H[2];
	H[7] = H[5];

	// Compute the inverse of the Hessian matrix with the minors cofactors method
	float det = H[0] * H[4] * H[8] +
				H[1] * H[5] * H[6] +
				H[2] * H[3] * H[7] -
				H[2] * H[4] * H[6] -
				H[1] * H[3] * H[8] -
				H[0] * H[5] * H[7];

	H_inv[0]= (H[4] * H[8] - H[5] * H[7]) / det;
	H_inv[1]= -(H[3] * H[8] - H[5] * H[6]) / det;
	H_inv[2]= (H[3] * H[7] - H[4] * H[6]) / det;

	H_inv[3]= -(H[1] * H[8] - H[2] * H[7]) / det;
	H_inv[4]= (H[0] * H[8] - H[2] * H[6]) / det;
	H_inv[5]= -(H[0] * H[7] - H[1] * H[6]) / det;

	H_inv[6]= (H[1] * H[5] - H[2] * H[4]) / det;
	H_inv[7]= -(H[0] * H[5] - H[2] * H[3]) / det;
	H_inv[8]= (H[0] * H[4] - H[1] * H[3]) / det;
}

// Simple matrix multiplication between 3x3 matrix and 3x1 vector
void matrix_vector_mul(const Matrix3f m, const Vector3f v, Vector3f res){
	#pragma HLS INLINE
	mv_mul:for(int i = 0; i < 3; i++){
		#ifdef OPT_MM
			#pragma HLS UNROLL factor=3
			#pragma HLS ARRAY_PARTITION variable=m complete dim=0
			#pragma HLS ARRAY_PARTITION variable=v complete dim=0
		#endif
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

#define HALFPATCH_SIZE_ 4
#define PATCH_SIZE 8

void gauss_newton_optim_region(
		const uint8 pyr_region_data[REGION_AREA],
		const Vector2d f_coord,
		const Matrix3f Hinv,
		const float ref_patch_dx[PATCH_AREA],
		const float ref_patch_dy[PATCH_AREA],
		const PatchBorder ref_patch_with_border,
		Vector2f cur_px_estimate,
		const int n_iter
		){
	int i;

	bool converged = false;
	float mean_diff = 0;

	// Compute pixel location in new image:
	float px = f_coord[0] + (cur_px_estimate[0] - (int)cur_px_estimate[0]);
	float py = f_coord[1] + (cur_px_estimate[1] - (int)cur_px_estimate[1]);
	uint8 px_r;
	uint8 py_r;

	// Tracking differences
	float dx = 0;
	float dy = 0;

	// Update vector
	Vector3f update;
	update[0] = 0;
	update[1] = 0;
	update[2] = 0;

	Vector3f Jres;

	int pos;
	float search_pixel, res;
	float subpix_x, subpix_y;
	float wTL, wTR, wBL, wBR;
	uint8* it;

	int iter = 0;
	gn_iter: for(iter = 0; iter < 10; iter++){

		// Get integer coordinates
		px_r = floorf(px);
		py_r = floorf(py);

		// Check if position is inside the region
		if(px_r < HALFPATCH_SIZE_ || py_r < HALFPATCH_SIZE_||
				px_r >= REGION_SIZE - HALFPATCH_SIZE_ || py_r >= REGION_SIZE - HALFPATCH_SIZE_){
			break;
		}

		if(isnan(px) || isnan(py)) {
			converged = false;
			break;
		}

		// Compute interpolation weights
		subpix_x = px - px_r;
		subpix_y = py - py_r;
		wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
		wTR = subpix_x * (1.0 - subpix_y);
		wBL = (1.0 - subpix_x) * subpix_y;
		wBR = subpix_x * subpix_y;

		// Reset
		Jres[0] = 0;
		Jres[1] = 0;
		Jres[2] = 0;
		pos = 0;

		// Compute current error
		compute_err: for(int y = 0; y < PATCH_SIZE; ++y) {
			it = (uint8*) pyr_region_data + (py_r + y - HALFPATCH_SIZE_ ) * REGION_SIZE + px_r - HALFPATCH_SIZE_;
			#ifdef OPT_GAUSS_NEWTON
				#pragma HLS PIPELINE II=1
			#endif
			for(int x = 0; x < PATCH_SIZE; ++x, ++it, ++pos){
				#ifdef OPT_GAUSS_NEWTON
					#pragma HLS PIPELINE II=1
				#endif
				search_pixel = wTL * it[0] + wTR * it[1] + wBL * it[REGION_SIZE] + wBR * it[REGION_SIZE + 1];
				res = search_pixel - ref_patch_with_border[(y + 1) * (PATCH_SIZE + 2) + 1 + x] + mean_diff;

				Jres[0] -= res * ref_patch_dx[pos];
				Jres[1] -= res * ref_patch_dy[pos];
				Jres[2] -= res;
			}
		}

		Jres[0] /= 2;
		Jres[1] /= 2;

		matrix_vector_mul(Hinv, Jres, update);

		px += update[0];
		py += update[1];

		// Apply differences
		dx += update[0];
		dy += update[1];
		mean_diff += update[2];

		// Check for convergence
		if(update[0] * update[0] + update[1] * update[1] < MIN_SQUARED_UPDATE) {
		  converged = true;
		  break;
		}

	}

	// Apply optimization result to initial position
	cur_px_estimate[0] += dx;
	cur_px_estimate[1] += dy;
}

void batch_align2D_region(
			volatile const uint8* myRegion_data_ptr,
			volatile const Vector2d* myRegion_fcoord_ptr,
			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged,
			const int n_iter
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=64 port=myRegion_data_ptr offset=slave bundle=my_region_data num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=myRegion_fcoord_ptr offset=slave bundle=my_region_fcoord num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=my_ref_patch_with_border_ptr offset=slave bundle=my_patches num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=my_cur_px_estimate_ptr offset=slave bundle=my_pos
	#pragma HLS INTERFACE m_axi depth=64 port=my_inv_out offset=slave bundle=my_debug

	// Define control signals
	#pragma HLS INTERFACE s_axilite port=converged bundle=param
	#pragma HLS INTERFACE s_axilite port=n_iter bundle=param
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	// Temp buffers
	static uint8 pyr_region_data[BATCH_SIZE][REGION_AREA];
	static Vector2d pyr_region_fcoord[BATCH_SIZE];
	static PatchBorder ref_patch_with_border[BATCH_SIZE];
	static Vector2f cur_px_estimate[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=pyr_region_data complete dim=1
	#pragma HLS ARRAY_PARTITION variable=pyr_region_fcoord complete dim=1
	#pragma HLS ARRAY_PARTITION variable=ref_patch_with_border complete dim=1
	#pragma HLS ARRAY_PARTITION variable=cur_px_estimate complete dim=1

	int k = 0;

	// Transfer data from RAM to temp buffers
	memcpy(pyr_region_data, 		(const uint8*)myRegion_data_ptr, 					sizeof(pyr_region_data));
	memcpy(pyr_region_fcoord, 		(const Vector2d*)myRegion_fcoord_ptr,				sizeof(pyr_region_fcoord));
	memcpy(ref_patch_with_border, 	(const PatchBorder*)my_ref_patch_with_border_ptr, 	sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)my_cur_px_estimate_ptr, 			sizeof(cur_px_estimate));

	// Reset converged flag
	(*my_converged) = 0;

	// Jacobians
	float ref_patch_dx[BATCH_SIZE][PATCH_AREA];
	float ref_patch_dy[BATCH_SIZE][PATCH_AREA];

	// Inverse hessian
	Matrix3f H_inv[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dx complete dim=0
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dy complete dim=0
	#pragma HLS ARRAY_PARTITION variable=Hinv complete dim=0


	// Apply align2D to each element in the batch
	// -------------- Initialization ---------------------------
	init_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS PIPELINE II=1
		#endif

		// Compute the inverse Hessian matrix for the patch
		compute_inverse_hessian(ref_patch_with_border[k], H_inv[k], ref_patch_dx[k], ref_patch_dy[k]);
	}

	// --------------- Gauss-Newton Optimization ----------------
	optim_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif
		// Run Gauss-Newton optimization
		gauss_newton_optim_region(
				pyr_region_data[k], pyr_region_fcoord[k],
				H_inv[k], ref_patch_dx[k], ref_patch_dy[k],
				ref_patch_with_border[k], cur_px_estimate[k],
				n_iter
		);
	}

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)my_cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	return;
}

