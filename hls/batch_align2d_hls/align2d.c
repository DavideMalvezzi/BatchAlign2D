
#include "align2d.h"

#define PAR_BATCH
#define OPT_LOOP


void compute_inverse_hessian(PatchBorder ref_patch_with_border, Matrix3f H_inv, float* ref_patch_dx, float* ref_patch_dy){
	#pragma HLS INLINE off
	//#pragma HLS FUNCTION_INSTANTIATE variable=ref_patch_with_border

	// Jacobian vectors and Hessian matrix
	Matrix3f H = {0};

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=H complete dim=1

	// Compute Jacobians and Hessian
	compute_hessian: for(int i = 0; i < PATCH_AREA; i++){
		#ifdef OPT_LOOP
			#pragma HLS PIPELINE
		#endif

		// Get pixel position
		int y = i / PATCH_SIZE;
		int x = i % PATCH_SIZE;

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
	// reduces the number of floating point multiplication operations
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
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

void gauss_newton_optim(const uint8* img, const uint16 img_w, const uint16 img_h,
		const Matrix3f H_inv, const float* dx, const float* dy,
		const PatchBorder patch, Vector2f cur_px_estimate, const int n_iter){
	#pragma HLS INLINE off

	bool converged = false;
	float mean_diff = 0;

	// Compute pixel location in new image:
	float u = cur_px_estimate[0];
	float v = cur_px_estimate[1];

	// Update vector
	Vector3f update = {0};
	Vector3f Jres;

	int u_r, v_r;
	float subpix_x, subpix_y;
	float wTL, wTR, wBL, wBR;
	uint8_t* it;
	float search_pixel, res;

	gn_iter: for(int iter = 0; iter < 10; iter++){

		// Get integer coordinates
		u_r = floorf(u);
		v_r = floorf(v);

		// Check if patch is still inside the image
		if(u_r < HALF_PATCH_SIZE || v_r < HALF_PATCH_SIZE || u_r >= img_w - HALF_PATCH_SIZE || v_r >= img_h - HALF_PATCH_SIZE){
			//break;
		}

		// Check valid coordinates
		if(isnan(u) || isnan(v)) {
			//break;
		}

		// Compute interpolation weights
		subpix_x = u - u_r;
		subpix_y = v - v_r;
		wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
		wTR = subpix_x * (1.0 - subpix_y);
		wBL = (1.0 - subpix_x) * subpix_y;
		wBR = subpix_x * subpix_y;

		// Reset
		Jres[0] = 0;
		Jres[1] = 0;
		Jres[2] = 0;

		// Compute current error
		compute_err: for(int y = 0; y < PATCH_SIZE; y++){
			it = (uint8_t*) img + (v_r + y - HALF_PATCH_SIZE) * img_w + u_r - HALF_PATCH_SIZE;
			for(int x = 0; x < PATCH_SIZE; x++, it++){
				search_pixel = wTL * it[0] + wTR * it[1] + wBL * it[img_w] + wBR * it[img_w + 1];
				res = search_pixel - patch[(y + 1) * REF_STEP + x + 1] + mean_diff;

				Jres[0] -= res * dx[y * PATCH_SIZE + x];
				Jres[1] -= res * dy[y * PATCH_SIZE + x];
				Jres[2] -= res;
			}
		}

		// Compute the update
		matrix_vector_mul(H_inv, Jres, update);

		// Update the position
		u += update[0] / 2;
		v += update[1] / 2;
		mean_diff += update[2];

		// Check for convergence
		if(update[0] * update[0] + update[1] * update[1] < MIN_SQUARED_UPDATE) {
			converged = true;
			break;
		}
	}

	// Save final result
	cur_px_estimate[0] = u;
	cur_px_estimate[1] = v;


	//printf("Final pos %f %f \n", u, v);
}

// Read write test for axi master protocol
void batch_align2D(
			volatile const uint8* pyr_data_ptr,
			const uint16 img_w,
			const uint16 img_h,
			volatile const PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			const uint128 levels,
			uint64* converged,
			const int n_iter,
			bool transfer_pyr,
			Matrix3f* inv_out
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=64 port=pyr_data_ptr offset=slave bundle=pyr num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=ref_patch_with_border_ptr offset=slave bundle=patches num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=cur_px_estimate_ptr offset=slave bundle=pos
	#pragma HLS INTERFACE m_axi depth=64 port=inv_out offset=slave bundle=debug

	// Define control signals
	#pragma HLS INTERFACE s_axilite port=img_w bundle=param
	#pragma HLS INTERFACE s_axilite port=img_h bundle=param
	#pragma HLS INTERFACE s_axilite port=levels bundle=param
	#pragma HLS INTERFACE s_axilite port=converged bundle=param
	#pragma HLS INTERFACE s_axilite port=n_iter bundle=param
	#pragma HLS INTERFACE s_axilite port=transfer_pyr bundle=param
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	// Temp buffer
	static uint8 pyr_data[PYR_SIZE];
	static PatchBorder ref_patch_with_border[BATCH_SIZE];
	static Vector2f cur_px_estimate[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=ref_patch_with_border complete dim=0
	#pragma HLS ARRAY_PARTITION variable=cur_px_estimate complete dim=1

	// Burst copy data from RAM to FPGA
	// The pyramid is copied only if the pointer is not NULL, so we can copy only once per set of patch
	// then it will be stored into a static variable
	if(transfer_pyr){
		memcpy(pyr_data, 			(const uint8*)pyr_data_ptr, 					PYR_SIZE);
	}
	memcpy(ref_patch_with_border, 	(const PatchBorder*)ref_patch_with_border_ptr, 	sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)cur_px_estimate_ptr, 			sizeof(cur_px_estimate));

	// Reset flag
	(*converged) = 0;

	//Jacobians
	float ref_patch_dx[BATCH_SIZE][PATCH_AREA];
	float ref_patch_dy[BATCH_SIZE][PATCH_AREA];

	// Inverse hessians
	Matrix3f H_inv[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dx complete dim=0
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dy complete dim=0
	#pragma HLS ARRAY_PARTITION variable=Hinv complete dim=0

	int k;
	// Apply align2D to each element in the batch
	init_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif

		// Compute the inverse Hessian matrix for the patch
		compute_inverse_hessian(ref_patch_with_border[k], H_inv[k], ref_patch_dx[k], ref_patch_dy[k]);
	}

	optim_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
			#pragma HLS DEPENDENCE variable=pyr_data inter false
			#pragma HLS DEPENDENCE variable=img_w inter false
			#pragma HLS DEPENDENCE variable=img_h inter false
			#pragma HLS DEPENDENCE variable=n_iter inter false
		#endif

		// Get image level pointer
		int offset = 0;
		int level = apint_get_range(levels, k+1, k);
		get_pyr_level: for(int l = 0; l < level; l++){
			offset += (img_w * img_h) / ((1 << l) * (1 << l));
		}
		uint8* cur_img = pyr_data + offset;

		// Get image pyramid level size
		uint16 cur_img_cols = img_w / (1 << level);
		uint16 cur_img_rows = img_h / (1 << level);

		// Run Gauss-Newton optimization
		gauss_newton_optim(cur_img, img_w, img_h,
				H_inv[k], ref_patch_dx[k], ref_patch_dx[k],
				ref_patch_with_border[k], cur_px_estimate[k],
				n_iter
		);
	}

	memcpy((Matrix3f*)inv_out, H_inv, sizeof(H_inv));

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	return;
}

