
#include "align2d.h"

void compute_hessian(Matrix3f H, float* dx, float* dy, int N){
	for(int i = 0; i < N; i++){
		//#pragma HLS DATAFLOW
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

void compute_inverse(Matrix3f inv, Matrix3f m){
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

void matrix_vector_mul(Matrix3f m, Vector3f v, Vector3f res){
	for(int i = 0; i < 3; i++){
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

double init_time = 0;
double iter_time = 0;

void batch_align2D(
			PyrImage* pyr,
			int levels[BATCH_SIZE],
			PatchBorder ref_patch_with_border[BATCH_SIZE],
			Patch ref_patch[BATCH_SIZE],
			Vector2f cur_px_estimate[BATCH_SIZE],
			int n_iter,
			bool converged[BATCH_SIZE]
){
	XTime time = time_get();

	const int halfpatch_size_ = 4;
	const int patch_size_ = 8;
	const int patch_area_ = 64;

	for(int k = 0; k < BATCH_SIZE; k++){
		//#pragma HLS UNROLL

		converged[k] = false;

		// Compute derivative of template and prepare inverse compositional
		float __attribute__((__aligned__(16))) ref_patch_dx[patch_area_];
		float __attribute__((__aligned__(16))) ref_patch_dy[patch_area_];
		Matrix3f H = {0};

		// Compute gradient and hessian
		const int ref_step = patch_size_ + 2;

		// Compute the jacobians
		for(int y = 0; y < patch_size_; y++) {
			for(int x = 0; x < patch_size_; x++) {
				//#pragma HLS LOOP_FLATTEN
				//#pragma HLS UNROLL factor=<N>
				uint8_t* it = ref_patch_with_border[k] + (y + 1) * ref_step + x + 1;

				ref_patch_dx[y * patch_size_ + x] = 0.5 * (it[1] - it[-1]);
				ref_patch_dy[y * patch_size_ + x] = 0.5 * (it[ref_step] - it[-ref_step]);
			}
		}
		// Compute the hessian from jacobians
		compute_hessian(H, ref_patch_dx, ref_patch_dy, patch_area_);

		// Compute the hessian inverse
		Matrix3f Hinv;
		compute_inverse(Hinv, H);

		//printf("hessian \n"); print_matrix(H);
		//printf("inv_hessian \n"); print_matrix(Hinv);

		// Get image level pointer
		int offset = 0;
		for(int l = 0; l < levels[k]; l++){
			offset += (pyr->cols * pyr->rows) / ((1 << l) * (1 << l));
		}
		uint8_t* cur_img = pyr->data + offset;
		int cur_img_cols = pyr->cols / (1 << levels[k]);
		int cur_img_rows = pyr->rows / (1 << levels[k]);


		float mean_diff = 0;

		// Compute pixel location in new image:
		float u = cur_px_estimate[k][0];
		float v = cur_px_estimate[k][1];
		//printf("u %f v %f \n", u, v);

		// termination condition
		const float min_update_squared = 0.03 * 0.03;
		const int cur_step = cur_img_cols;

		Vector3f update = {0};

		init_time += time_elapsed(time);
		time = time_get();

		int iter;
		for(iter = 0; iter < n_iter; ++iter){

			int u_r = floor(u);
			int v_r = floor(v);

			//printf("iter %d \n", iter);
			//printf("u_r %d v_r %d \n", u_r, v_r);

			if(u_r < halfpatch_size_ || v_r < halfpatch_size_ || u_r >= cur_img_cols - halfpatch_size_ || v_r >= cur_img_rows - halfpatch_size_){
				break;
			}

			if(isnan(u) || isnan(v)) {
				converged[k] = false;
				break;
			}

			// compute interpolation weights
			float subpix_x = u - u_r;
			float subpix_y = v - v_r;
			float wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
			float wTR = subpix_x * (1.0 - subpix_y);
			float wBL = (1.0 - subpix_x) * subpix_y;
			float wBR = subpix_x * subpix_y;
		    //printf("w %f %f %f %f\n", wTL, wTR, wBL, wBR);

			// loop through search_patch, interpolate
			uint8_t* it_ref = ref_patch[k];
			float* it_ref_dx = ref_patch_dx;
			float* it_ref_dy = ref_patch_dy;

			Vector3f Jres = {0};
			for(int y = 0; y < patch_size_; ++y){
				uint8_t* it = (uint8_t*) cur_img + (v_r + y - halfpatch_size_) * cur_step + u_r - halfpatch_size_;

				for(int x = 0; x < patch_size_; ++x, ++it, ++it_ref, ++it_ref_dx, ++it_ref_dy){
					float search_pixel = wTL * it[0] + wTR * it[1] + wBL * it[cur_step] + wBR * it[cur_step + 1];
					float res = search_pixel - *it_ref + mean_diff;
					Jres[0] -= res * (*it_ref_dx);
					Jres[1] -= res * (*it_ref_dy);
					Jres[2] -= res;
			        //printf("pixel %f  res %f   dx %f   dy %f \n", search_pixel, res, (*it_ref_dx), (*it_ref_dy));
				}
			}

			matrix_vector_mul(Hinv, Jres, update);

			u += update[0];
			v += update[1];
			mean_diff += update[2];
			//printf("iter %d jacobian %f %f %f  u %f v %f \n", iter, Jres[0], Jres[1], Jres[2], u, v);

			if(update[0] * update[0] + update[1] * update[1] < min_update_squared) {
			  converged[k] = true;
			  break;
			}
		}

		// If converged or max iter reached set new coords
		if (converged[k] || iter >= n_iter ){
			cur_px_estimate[k][0] = u;
			cur_px_estimate[k][1] = v;
		}

		iter_time += time_elapsed(time) / iter;

		//printf("final_pos %f %f converged %d\n", cur_px_estimate[k][0],  cur_px_estimate[k][1], converged[k]);
	}

	return;
}
