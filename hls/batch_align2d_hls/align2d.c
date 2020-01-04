
#include "align2d.h"

#define PAR_BATCH
#define OPT_LOOP
#define OPT_GAUSS_NEWTON
#define OPT_MM

//#define USE_DEBUG_ARRAY
#define DEBUG_ARRAY_LENGTH 100

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

	bool converged = false;
	float mean_diff = 0;

	// Compute pixel location in new image:
	float px = f_coord[0] /*fcoord_x*/ + (cur_px_estimate[0] - (int)cur_px_estimate[0]);
	float py = f_coord[1] /*fcoord_y*/ + (cur_px_estimate[1] - (int)cur_px_estimate[1]);

	uint8 px_r;
	uint8 py_r;

	// Update vector
	Vector3f update;
	update[0] = 0;
	update[1] = 0;
	update[2] = 0;
	Vector3f Jres;

	uint8* it;
	int pos;
	float search_pixel, res;
	float subpix_x, subpix_y;
	float wTL, wTR, wBL, wBR;

	#ifdef USE_DEBUG_ARRAY
		int i;
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
	gn_iter: for(iter = 0; iter < n_iter; iter++){
		#ifdef OPT_GAUSS_NEWTON
			//#pragma HLS PIPELINE II=1
			//#pragma HLS DEPENDENCE variable=px inter true
			//#pragma HLS DEPENDENCE variable=py inter true
		#endif

		#ifdef USE_DEBUG_ARRAY
			debug_array[7] += 1; // se passa di qui incremento
		#endif

		// Get integer coordinates
		px_r = floorf(px);
		py_r = floorf(py);

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
		subpix_x = px - px_r;
		subpix_y = py - py_r;
		wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
		wTR = subpix_x * (1.0 - subpix_y);
		wBL = (1.0 - subpix_x) * subpix_y;
		wBR = subpix_x * subpix_y;

		// Reset
		pos = 0;
		Jres[0] = 0;
		Jres[1] = 0;
		Jres[2] = 0;

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
				res = search_pixel - ref_patch_with_border[(y + 1) * (PATCH_SIZE +2) + 1 + x] + mean_diff;

				Jres[0] -= res * ref_patch_dx[pos];
				Jres[1] -= res * ref_patch_dy[pos];
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

		// apply differences
		px += update[0];
		py += update[1];
		mean_diff += update[2];

		if(update[0] * update[0] + update[1] * update[1] < MIN_SQUARED_UPDATE) {
		  converged = true;
		  break;
		}

		#ifdef USE_DEBUG_ARRAY
			debug_array[1] += 1; // se passa di qui incremento
		#endif
	}

	cur_px_estimate[0] += px;
	cur_px_estimate[1] += py;

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
	memcpy(my_inv_out, H_inv, sizeof(H_inv));

	#ifdef USE_DEBUG_ARRAY
		for (k = 0 ; k < BATCH_SIZE ; k++)
			memcpy((float*)&my_debug_array_ptr[k*DEBUG_ARRAY_LENGTH], debug_array[k], sizeof(float)*DEBUG_ARRAY_LENGTH);
	#endif

	return;
}


/*void batch_align2D_region(
			//volatile const PyrRegion* pyr_region_ptr,
			volatile const uint8** pyr_region_data,
			volatile const uint8* region_cols,
			volatile const uint8* region_rows,
			volatile const uint8* fcoord_x,
			volatile const uint8* fcoord_y,

			volatile const PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			uint64* converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,
			Matrix3f* inv_out
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=64 port=pyr_region_ptr offset=slave bundle=pyr num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=ref_patch_with_border_ptr offset=slave bundle=patches num_write_outstanding=0
	#pragma HLS INTERFACE m_axi depth=64 port=cur_px_estimate_ptr offset=slave bundle=pos
	#pragma HLS INTERFACE m_axi depth=64 port=inv_out offset=slave bundle=debug

	// Define control signals
	#pragma HLS INTERFACE s_axilite port=converged bundle=param
	#pragma HLS INTERFACE s_axilite port=n_iter bundle=param
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	// Temp buffer
	static uint8 pyr_region_data[BATCH_SIZE][REGION_SIZE*REGION_SIZE];
	static uint8 pyr_region_cols, pyr_region_rows;
	static uint8 pyr_region_fcoord_x[BATCH_SIZE], pyr_region_fcoord_y[BATCH_SIZE];
	static PatchBorder ref_patch_with_border[BATCH_SIZE];
	static Vector2f cur_px_estimate[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=pyr_region_data complete dim=1
	#pragma HLS ARRAY_PARTITION variable=pyr_region_fcoord_x complete dim=1
	#pragma HLS ARRAY_PARTITION variable=pyr_region_fcoord_y complete dim=1
	#pragma HLS ARRAY_PARTITION variable=ref_patch_with_border complete dim=0
	#pragma HLS ARRAY_PARTITION variable=cur_px_estimate complete dim=1

	// Burst copy data from RAM to FPGA
	memcpy(&pyr_region_cols, 	(const uint8*)&pyr_region_ptr[0].cols, sizeof(uint8));
	memcpy(&pyr_region_rows, 	(const uint8*)&pyr_region_ptr[0].rows, sizeof(uint8));
	int i;
	for (i = 0 ; i < BATCH_SIZE ; i++) {
		memcpy(&pyr_region_data[i], 	(const uint8*)&pyr_region_ptr[i].data, sizeof(uint8)*REGION_SIZE*REGION_SIZE);
		memcpy(&pyr_region_fcoord_x[i], (const uint8*)&pyr_region_ptr[i].fcoord_x, sizeof(uint8));
		memcpy(&pyr_region_fcoord_y[i], (const uint8*)&pyr_region_ptr[i].fcoord_y, sizeof(uint8));
	}
	//sizeof(pyr_region);
	memcpy(ref_patch_with_border, 	(const PatchBorder*)ref_patch_with_border_ptr, sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)cur_px_estimate_ptr, sizeof(cur_px_estimate));

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

	// Apply align2D to each element in the batch
	int k = 0;
	batch_align2d_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif

		// -------------- Initialization ---------------------------

		//initialization:
		// Compute the inverse Hessian matrix for the patch
		compute_inverse_hessian(ref_patch_with_border[k], H_inv[k], ref_patch_dx[k], ref_patch_dy[k]);

		// --------------- Gauss Newton ---------------------------

		//gn_step:

		#ifdef PAR_BATCH
			#pragma HLS DEPENDENCE variable=pyr_region_data inter false
			#pragma HLS DEPENDENCE variable=pyr_region_cols inter false
			#pragma HLS DEPENDENCE variable=pyr_region_rows inter false
			#pragma HLS DEPENDENCE variable=pyr_region_fcoord_y inter false
			#pragma HLS DEPENDENCE variable=pyr_region_fcoord_x inter false
			#pragma HLS DEPENDENCE variable=n_iter inter false
		#endif

		// Get image pyramid level size
		// Run Gauss-Newton optimization
		// COMMENTO LA GAUSS NEWTON PER MOTIVI DI TEST
		gauss_newton_optim_region(pyr_region_data[k],
				pyr_region_cols, pyr_region_rows,
				pyr_region_fcoord_x[k], pyr_region_fcoord_y[k],
				H_inv[k], ref_patch_dx[k], ref_patch_dx[k],
				ref_patch_with_border[k], cur_px_estimate[k],
				n_iter
		);
	}

	memcpy((Matrix3f*)inv_out, H_inv, sizeof(H_inv));

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	return;
} */


/* Te la commento per non doverci fare il design block

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
	uint8* it;
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
			it = (uint8*) img + (v_r + y - HALF_PATCH_SIZE) * img_w + u_r - HALF_PATCH_SIZE;
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
*/
