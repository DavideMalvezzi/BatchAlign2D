
#include "align2d.h"

//#define PAR_BATCH
#define OPT_LOOP
#define OPT_MEM

// Compute the Hessian matrix from the Jacobian vectors
// using the new formulation. H = sum JJ^T with J=(dx, dy, 1)
// so the Hessian can be expressed as H = sum [[dx^2, dxdy, dx], [dxdy, dy^2, dy], [dx, dy, 1]]
void compute_hessian(Matrix3f H, float* dx, float* dy, int N){
	//#pragma HLS inline
	compute_hessian: for(int i = 0; i < N; i++){
		#ifdef OPT_LOOP
			#pragma HLS UNROLL
		#endif

		H[0] += dx[i] * dx[i];
		H[1] += dx[i] * dy[i];
		H[2] += dx[i];
		H[4] += dy[i] * dy[i];
		H[5] += dy[i];
	}

	H[3] = H[1];
	H[6] = H[2];
	H[7] = H[5];
	H[8] = N;
}

// Compute the invese of the Hessian matrix with the minors cofactors method
void compute_inverse(Matrix3f inv, Matrix3f m){
	//#pragma HLS inline
	float det = m[0] * m[4] * m[8] +
				m[1] * m[5] * m[6] +
				m[2] * m[3] * m[7] -
				m[2] * m[4] * m[6] -
				m[1] * m[3] * m[8] -
				m[0] * m[5] * m[7];

	inv[0]= (m[4] * m[8] - m[5] * m[7]) / det;
	inv[1]= -(m[3] * m[8] - m[5] * m[6]) / det;
	inv[2]= (m[3] * m[7] - m[4] * m[6]) / det;

	inv[3]= -(m[1] * m[8] - m[2] * m[7]) / det;
	inv[4]= (m[0] * m[8] - m[2] * m[6]) / det;
	inv[5]= -(m[0] * m[7] - m[1] * m[6]) / det;

	inv[6]= (m[1] * m[5] - m[2] * m[4]) / det;
	inv[7]= -(m[0] * m[5] - m[2] * m[3]) / det;
	inv[8]= (m[0] * m[4] - m[1] * m[3]) / det;
}

// Simple matrix multiplication between 3x3 matrix and 3x1 vector
void matrix_vector_mul(Matrix3f m, Vector3f v, Vector3f res){
	for(int i = 0; i < 3; i++){
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

// Read write test for axi master protocol
void batch_align2D(
			volatile uint8* pyr_data_ptr,
			uint16 img_w,
			uint16 img_h,
			volatile PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			uint128 levels,
			uint64* converged,
			int n_iter,
			bool transfer_pyr,
			Matrix3f* H_out,
			Matrix3f* inv_out
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=1 port=pyr_data_ptr offset=slave
	#pragma HLS INTERFACE m_axi depth=64 port=ref_patch_with_border_ptr offset=slave
	#pragma HLS INTERFACE m_axi depth=64 port=cur_px_estimate_ptr offset=slave
	#pragma HLS INTERFACE m_axi depth=64 port=H_out offset=slave
	#pragma HLS INTERFACE m_axi depth=64 port=inv_out offset=slave

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

	// Burst copy data from RAM to FPGA
	// The pyramid is copied only if the pointer is not NULL, so we can copy only once per set of patch
	// then it will be stored into a static variable
	if(transfer_pyr){
		memcpy(pyr_data, 			(const uint8*)pyr_data_ptr, 					sizeof(pyr_data));
	}
	memcpy(ref_patch_with_border, 	(const PatchBorder*)ref_patch_with_border_ptr, 	sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)cur_px_estimate_ptr, 			sizeof(cur_px_estimate));

	// Reset flag
	(*converged) = 0;

	// Partition variable to increase the throughput
	#pragma ARRAY_PARTITION variable=ref_patch_with_border complete
	#pragma ARRAY_PARTITION variable=cur_px_estimate complete dim=1

	// Apply align2D to each element in the batch
	batch_loop: for(int k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif
		// Compute derivative of template and prepare inverse compositional
		float ref_patch_dx[PATCH_AREA];
		float ref_patch_dy[PATCH_AREA];
		Matrix3f H = {0};
		Matrix3f Hinv;

		// Partition variable to increase the throughput
		#pragma HLS ARRAY_PARTITION variable=ref_patch_dx complete
		#pragma HLS ARRAY_PARTITION variable=ref_patch_dy complete
		#pragma HLS ARRAY_PARTITION variable=H complete
		#pragma HLS ARRAY_PARTITION variable=Hinv complete

		// Compute the jacobians

		init_jacobian_y: for(int y = 0; y < PATCH_SIZE; y++) {
			#ifdef OPT_LOOP
				//#pragma HLS UNROLL
			#endif

			init_jacobian_dx: for(int x = 0; x < PATCH_SIZE; x++) {
				#ifdef OPT_LOOP
					#pragma HLS UNROLL
				#endif
				//#pragma HLS DEPENDENCE variable=it inter false
				uint8* it = ref_patch_with_border[k] + (y + 1) * REF_STEP + 1;
				ref_patch_dx[y * PATCH_SIZE + x] = 0.5 * (it[x + 1] - it[x - 1]);
			}

			init_jacobian_dy: for(int x2 = 0; x2 < PATCH_SIZE; x2++) {
				#ifdef OPT_LOOP
					#pragma HLS UNROLL
				#endif
				uint8* it = ref_patch_with_border[k] + (y + 1) * REF_STEP + 1;
				ref_patch_dy[y * PATCH_SIZE + x2] = 0.5 * (it[x2 + REF_STEP] - it[x2 - REF_STEP]);
			}
		}

		// Compute the hessian from jacobians
		compute_hessian(H, ref_patch_dx, ref_patch_dy, PATCH_AREA);

		// Compute the hessian inverse
		compute_inverse(Hinv, H);

		memcpy((Matrix3f*)H_out[k], H, sizeof(Matrix3f));
		memcpy((Matrix3f*)inv_out[k], Hinv, sizeof(Matrix3f));

		/*
		// Get image level pointer
		int offset = 0;
		int level = apint_get_range(levels, k+1, k);
		for(int l = 0; l < level; l++){
			offset += (img_w * img_h) / ((1 << l) * (1 << l));
		}
		uint8* cur_img = pyr_data + offset;

		// Get image pyramid level size
		uint16 cur_img_cols = img_w / (1 << level);
		uint16 cur_img_rows = img_h / (1 << level);
		*/

		// Just to not remove useless code
		cur_px_estimate_ptr[k][0] = Hinv[0] + ref_patch_dx[0] + ref_patch_dy[0] + pyr_data[k];
	}

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	return;
}

