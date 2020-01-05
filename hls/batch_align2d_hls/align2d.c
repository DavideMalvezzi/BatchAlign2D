
#include "align2d.h"

#define PAR_BATCH
#define OPT_LOOP
#define OPT_GAUSS_NEWTON
#define OPT_MM

//#define USE_DEBUG_ARRAY
#define DEBUG_ARRAY_LENGTH 100

// Compute the hessian matrix inverse
void compute_inverse_hessian(const PatchBorder ref_patch_with_border, Matrix3f H_inv, float* ref_patch_dx, float* ref_patch_dy){
	#pragma HLS INLINE
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


// Trick di ottimizzazione, usare il define
#define HALFPATCH_SIZE_ 4
#define PATCH_SIZE 8

void gauss_newton_optim_region(
		const uint8* pyr_region_data,
		const Vector2d f_coord,
		const Matrix3f Hinv,
		const float* ref_patch_dx,
		const float* ref_patch_dy,
		const  PatchBorder ref_patch_with_border,
		Vector2f cur_px_estimate,
		const int n_iter
		){
	#pragma HLS INLINE

	int i;

	bool converged = false;
	float mean_diff = 0;

	// Compute pixel location in new image:
	float px = f_coord[0] /*fcoord_x*/ + (cur_px_estimate[0] - (int)cur_px_estimate[0]);
	float py = f_coord[1] /*fcoord_y*/ + (cur_px_estimate[1] - (int)cur_px_estimate[1]);
	// tracking differences
	float dx = 0;
	float dy = 0;

	// termination condition
	const int cur_step = REGION_SIZE; //pyr_region_cols;

	// Update vector
	Vector3f update;
	update[0] = 0;
	update[1] = 0;
	update[2] = 0;
	Vector3f Jres;

	#ifdef USE_DEBUG_ARRAY
	for (i = 0 ; i < DEBUG_ARRAY_LENGTH ; i++) {
			debug_array[i] = 0;
	}
	#endif

	#ifdef USE_DEBUG_ARRAY
			debug_array[8] += px; // se passa di qui incremento
			for (i = 0 ; i < 5; i++) {
				debug_array[10 + i] = ref_patch_dx[i];
				debug_array[20 + i] = ref_patch_dy[i];
			}
	#endif

	int iter = 0;
	gn_iter: for(iter = 0; iter < 5; iter++){
		#ifdef OPT_GAUSS_NEWTON
			//#pragma HLS PIPELINE II=1
			//#pragma HLS DEPENDENCE variable=px inter true
			//#pragma HLS DEPENDENCE variable=py inter true
		#endif

		#ifdef USE_DEBUG_ARRAY
			debug_array[7] += 1; // se passa di qui incremento
		#endif

		// Get integer coordinates
		uint8 px_r;
		uint8 py_r;
		if (iter != 0) {
			px_r = floorf(px);
			py_r = floorf(py);
		} else {
			px_r = f_coord[0]/*fcoord_x*/;
			py_r = f_coord[0]/*fcoord_y*/;
		}

		if(px_r < HALFPATCH_SIZE_ || py_r < HALFPATCH_SIZE_||
				px_r >= REGION_SIZE/*pyr_region_cols*/ - HALFPATCH_SIZE_ || py_r >= REGION_SIZE/*pyr_region_rows*/ - HALFPATCH_SIZE_){
			break;
		}

		if(isnan(px) || isnan(py)) {
			converged = false;
			break;
		}

		#ifdef USE_DEBUG_ARRAY
			debug_array[0] += 1; // se passa di qui incremento
		#endif

		// compute interpolation weights
		float subpix_x = px - px_r;
		float subpix_y = py - py_r;
		float wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
		float wTR = subpix_x * (1.0 - subpix_y);
		float wBL = (1.0 - subpix_x) * subpix_y;
		float wBR = subpix_x * subpix_y;

		// loop through search_patch, interpolate
		//uint8* it_ref = ref_patch;
		float* it_ref_dx = ref_patch_dx;
		float* it_ref_dy = ref_patch_dy;

		// Reset
		Jres[0] = 0;
		Jres[1] = 0;
		Jres[2] = 0;
		// Compute current error
		compute_err: for(int y = 0; y < PATCH_SIZE; ++y) {
			uint8* it = (uint8*) pyr_region_data + (py_r + y - HALFPATCH_SIZE_ ) * cur_step +
						px_r - HALFPATCH_SIZE_;
			#ifdef OPT_GAUSS_NEWTON
				#pragma HLS PIPELINE II=1
				//#pragma HLS DEPENDENCE variable = Jres inter true
			#endif
			for(int x = 0; x < PATCH_SIZE; ++x, ++it,
								//++it_ref,
								++it_ref_dx, ++it_ref_dy){
				#ifdef OPT_GAUSS_NEWTON
					#pragma HLS PIPELINE II=1
					//#pragma HLS DEPENDENCE variable = Jres inter true
				#endif
				float search_pixel = wTL * it[0] + wTR * it[1] + wBL * it[cur_step] + wBR * it[cur_step + 1];
				float res = search_pixel - ref_patch_with_border[(y + 1) * (PATCH_SIZE +2) + 1 + x] + mean_diff;

				Jres[0] -= res * (*it_ref_dx);
				Jres[1] -= res * (*it_ref_dy);
				Jres[2] -= res;
			}

			#ifdef USE_DEBUG_ARRAY
				debug_array[1] += 1; // se passa di qui incremento
			#endif
		}

		Jres[0] /= 2;
		Jres[1] /= 2;

		matrix_vector_mul(Hinv, Jres, update);

		#ifdef USE_DEBUG_ARRAY
			debug_array[2] += 1; // se passa di qui incremento

			if (iter == 0) {
				for (i = 0 ; i < 3; i++) {
					debug_array[30 + i] = Jres[i];
					debug_array[40 + i] = update[i];
				}
			}
			if (iter == 10) {
				for (i = 0 ; i < 3; i++) {
					debug_array[50 + i] = Jres[i];
					debug_array[60 + i] = update[i];
				}
			}
		#endif

		px += update[0];
		py += update[1];

		// apply differences
		dx += update[0];
		dy += update[1];
		mean_diff += update[2];

		if(update[0] * update[0] + update[1] * update[1] < MIN_SQUARED_UPDATE) {
		  converged = true;
		  break;
		}

		#ifdef USE_DEBUG_ARRAY
			debug_array[1] += 1; // se passa di qui incremento
		#endif
	}

	cur_px_estimate[0] += dx;
	cur_px_estimate[1] += dy;

	#ifdef USE_DEBUG_ARRAY
		// #Hinv[2] = dx;
		debug_array[3] = update[1];
		debug_array[4] = px;
		debug_array[70] = cur_px_estimate[0];
		debug_array[71] = cur_px_estimate[1];
		debug_array[72] = dx;
		debug_array[73] = dy;
		debug_array[99] = iter;
		//Hinv[6] = cur_px_estimate[1];
	#endif

}

void batch_align2D_region(
			volatile const uint8* myRegion_data_ptr,
			volatile const Vector2d* myRegion_fcoord_ptr,

			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,

			Matrix3f* my_inv_out,
			float* my_debug_array_ptr
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=64 port=myRegion_data_ptr offset=slave bundle=my_region_data num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=myRegion_fcoord_ptr offset=slave bundle=my_region_fcoord num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=my_ref_patch_with_border_ptr offset=slave bundle=my_patches num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=my_cur_px_estimate_ptr offset=slave bundle=my_pos
	#pragma HLS INTERFACE m_axi depth=64 port=my_inv_out offset=slave bundle=my_debug
	#pragma HLS INTERFACE m_axi depth=64 port=my_debug_array_ptr offset=slave bundle=my_debug_array

	// Define control signals
	#pragma HLS INTERFACE s_axilite port=converged bundle=param
	#pragma HLS INTERFACE s_axilite port=n_iter bundle=param
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	// Debug buffer
	static float debug_array[BATCH_SIZE][DEBUG_ARRAY_LENGTH];

	// Temp buffers
	static uint8 pyr_region_data[BATCH_SIZE][REGION_SIZE*REGION_SIZE];
	static Vector2d pyr_region_fcoord[BATCH_SIZE];
	static PatchBorder ref_patch_with_border[BATCH_SIZE];
	static Vector2f cur_px_estimate[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=pyr_region_data complete dim=1
	#pragma HLS ARRAY_PARTITION variable=pyr_region_fcoord complete dim=0
	#pragma HLS ARRAY_PARTITION variable=ref_patch_with_border complete dim=1
	#pragma HLS ARRAY_PARTITION variable=cur_px_estimate complete dim=0

	// Transfer data from RAM to temp buffers
	memcpy(pyr_region_data, 		(const uint8*)myRegion_data_ptr, 					sizeof(pyr_region_data));
	memcpy(pyr_region_fcoord, 		(const Vector2d*)myRegion_fcoord_ptr,				sizeof(pyr_region_fcoord));
	memcpy(ref_patch_with_border, 	(const PatchBorder*)my_ref_patch_with_border_ptr, 	sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)my_cur_px_estimate_ptr, 			sizeof(cur_px_estimate));

	// Reset converged flag
	(*my_converged) = 0;

	//Jacobians
	float ref_patch_dx[BATCH_SIZE][PATCH_AREA];
	float ref_patch_dy[BATCH_SIZE][PATCH_AREA];

	// Inverse hessians
	Matrix3f H_inv[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dx complete dim=0
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dy complete dim=0
	#pragma HLS ARRAY_PARTITION variable=Hinv complete dim=0

	#ifdef USE_DEBUG_ARRAY
		debug_array[2][0] = pyr_region_data[0][0];
		debug_array[2][1] = pyr_region_fcoord_x[0];
		debug_array[2][5] = cur_px_estimate[0][0];
		debug_array[2][6] = cur_px_estimate[0][1];
	#endif


	// Apply align2D to each element in the batch
	int k = 0;

	// -------------- Initialization ---------------------------
	init_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif

		// Compute the inverse Hessian matrix for the patch
		compute_inverse_hessian(ref_patch_with_border[k], H_inv[k], ref_patch_dx[k], ref_patch_dy[k]);
		/*
	}

	// --------------- Gauss Newton ---------------------------
	optim_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif
*/
		// Run Gauss-Newton optimization
		gauss_newton_optim_region(
				pyr_region_data[k], pyr_region_fcoord[k],
				H_inv[k], ref_patch_dx[k], ref_patch_dy[k],
				ref_patch_with_border[k], cur_px_estimate[k],
				10
		);
	}


	#ifdef USE_DEBUG_ARRAY
		debug_array[2][3] = pyr_region_data[0][0];
		debug_array[2][4] = pyr_region_fcoord_x[0];

		memcpy((Matrix3f*)my_inv_out, H_inv, sizeof(H_inv));
	#endif

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)my_cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	// Debug
	//memcpy(my_inv_out, H_inv, sizeof(H_inv));

	#ifdef USE_DEBUG_ARRAY
		for (k = 0 ; k < BATCH_SIZE ; k++)
			memcpy((float*)&my_debug_array_ptr[k*DEBUG_ARRAY_LENGTH], debug_array[k], sizeof(float)*DEBUG_ARRAY_LENGTH);
	#endif

	return;
}

