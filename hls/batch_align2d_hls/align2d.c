
#include "align2d.h"

#define PAR_BATCH
#define OPT_LOOP


void compute_inverse_hessian(PatchBorder ref_patch_with_border, Matrix3f H_inv){
	#pragma HLS INLINE off
	//#pragma HLS FUNCTION_INSTANTIATE variable=ref_patch_with_border

	// Jacobian vectors and Hessian matrix
	int ref_patch_dx[PATCH_AREA];
	int ref_patch_dy[PATCH_AREA];
	Matrix3f H = {0};

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dx complete dim=1
	#pragma HLS ARRAY_PARTITION variable=ref_patch_dy complete dim=1
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
		memcpy(pyr_data, 			(const uint8*)pyr_data_ptr, 					sizeof(pyr_data));
	}
	memcpy(ref_patch_with_border, 	(const PatchBorder*)ref_patch_with_border_ptr, 	sizeof(ref_patch_with_border));
	memcpy(cur_px_estimate, 		(const Vector2f*)cur_px_estimate_ptr, 			sizeof(cur_px_estimate));

	// Reset flag
	(*converged) = 0;

	// Inverse hessians
	Matrix3f H_inv[BATCH_SIZE];

	// Partition variable to increase the throughput
	#pragma HLS ARRAY_PARTITION variable=Hinv complete dim=0

	int k;
	// Apply align2D to each element in the batch
	batch_loop: for(k = 0; k < BATCH_SIZE; k++){
		#ifdef PAR_BATCH
			#pragma HLS UNROLL
		#endif

		// Compute the inverse Hessian matrix for the patch
		compute_inverse_hessian(ref_patch_with_border[k], H_inv[k]);

		// Get image level pointer
		/*
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


	}

	for(k = 0; k < BATCH_SIZE; k++){
		// Just to not remove useless code
		cur_px_estimate_ptr[k][0] = H_inv[k][0] + pyr_data[k];
	}

	memcpy((Matrix3f*)inv_out, H_inv, sizeof(H_inv));

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)cur_px_estimate_ptr, cur_px_estimate, sizeof(cur_px_estimate));

	return;
}

