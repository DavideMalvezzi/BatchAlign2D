
#include "align2d.h"

// Compute the Hessian matrix from the Jacobian vectors
// using the new formulation. H = sum JJ^T with J=(dx, dy, 1)
// so the Hessian can be expressed as H = sum [[dx^2, dxdy, dx], [dxdy, dy^2, dy], [dx, dy, 1]]
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

// Compute the invese of the Hessian matrix with the minors cofactors method
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

// Simple matrix multiplication between 3x3 matrix and 3x1 vector
void matrix_vector_mul(Matrix3f m, Vector3f v, Vector3f res){
	for(int i = 0; i < 3; i++){
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

void batch_align2D(
			PyrImage pyr,									// Image pyramid
			int levels[BATCH_SIZE],							// Patch level of the pyramid
			PatchBorder ref_patch_with_border[BATCH_SIZE],	// Patch with exterior border
			Patch ref_patch[BATCH_SIZE],					// Patch
			Vector2f cur_px_estimate[BATCH_SIZE],			// Initial position of the patch
			int n_iter,										// Max number of iterations
			bool converged[BATCH_SIZE]						// Converged flag
)
{

	const int halfpatch_size_ = 4;
	const int patch_size_ = 8;
	const int patch_area_ = 64;

	// Apply align2D to each element in the patch
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

		// Print Hessian and inverse
		//printf("hessian \n"); print_matrix(H);
		//printf("inv_hessian \n"); print_matrix(Hinv);

		// Get image level pointer
		int offset = 0;
		for(int l = 0; l < levels[k]; l++){
			offset += (pyr.cols * pyr.rows) / ((1 << l) * (1 << l));
		}
		uint8_t* cur_img = pyr.data + offset;

		// Get image pyramid level size
		int cur_img_cols = pyr.cols / (1 << levels[k]);
		int cur_img_rows = pyr.rows / (1 << levels[k]);

		/************TO PORT*****************/
		/*
		float mean_diff = 0;

		// Compute pixel location in new image:
		float u = cur_px_estimate[k][0];
		float v = cur_px_estimate[k][1];
		//printf("u %f v %f \n", u, v);

		// termination condition
		const float min_update_squared = 0.03 * 0.03;
		const int cur_step = cur_img_cols;

		Vector3f update = {0};

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

		printf("final_pos %f %f converged %d\n", cur_px_estimate[k][0],  cur_px_estimate[k][1], converged[k]);
		*/
	}

	return;
}

void batch_align2D_region(
			PyrRegion pyrRegion[BATCH_SIZE],
			// int region_offset_x[BATCH_SIZE],
			// int region_offset_y[BATCH_SIZE],
			PatchBorder ref_patch_with_border[BATCH_SIZE],	// Patch with exterior border
			Patch ref_patch[BATCH_SIZE],					// Patch
			Vector2f cur_px_estimate[BATCH_SIZE],			// Initial position of the patch
			int n_iter,										// Max number of iterations
			bool converged[BATCH_SIZE]						// Converged flag
){

	const int halfpatch_size_ = 4;
	const int patch_size_ = 8;
	const int patch_area_ = 64;

	// Apply align2D to each element in the patch
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

		// Print Hessian and inverse
		//printf("hessian \n"); print_matrix(H);
		//printf("inv_hessian \n"); print_matrix(Hinv);

		// GAUSS NEWTON ITERATION ---------------------------------------------

		uint8_t* cur_img = pyrRegion[k].data;
		// Get image pyramid level size
		int cur_img_cols = pyrRegion[k].cols;
		int cur_img_rows = pyrRegion[k].rows;

		/************ WORK IN PROGRESS *****************/

		float mean_diff = 0;

		// Compute pixel location in new image:
		//float px = cur_px_estimate[0] - pyrRegion.region_offset_x;
		//float py = cur_px_estimate[1] - pyrRegion.region_offset_y;
		float px = pyrRegion[k].fcoord_x;
		float py = pyrRegion[k].fcoord_y;

		// termination condition
		const float min_update_squared = 0.03 * 0.03;
		const int cur_step = cur_img_cols;

		Vector3f update = {0};

		int iter;
		for(iter = 0; iter < n_iter; ++iter){

			/* qui sta il sostanziale cambiamento, la py_r è la coordinata rispetto
			l'immagine vera, mentre io devo "adattarlo" alla porzione di immagine passata
			la py_r deve assolutamente cambiare. Infatti devo risalire alla posizione
			corrispondente a quella sulla piramide... E' qui che vengono usati gli offset
			*/
			int px_r = floor(px);
			int py_r = floor(py);


			if(px_r < halfpatch_size_ || py_r < halfpatch_size_
			|| px_r >= cur_img_cols - halfpatch_size_ || py_r >= cur_img_rows - halfpatch_size_){
				break;
			}

			if(isnan(px) || isnan(py)) {
				converged = false;
				break;
			}

			// compute interpolation weights
			float subpix_x = px - px_r;
			float subpix_y = py - py_r;
			float wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
			float wTR = subpix_x * (1.0 - subpix_y);
			float wBL = (1.0 - subpix_x) * subpix_y;
			float wBR = subpix_x * subpix_y;

		    //printf("w %f %f %f %f\n", wTL, wTR, wBL, wBR);
			// loop through search_patch, interpolate
			uint8_t* it_ref = ref_patch;
			float* it_ref_dx = ref_patch_dx;
			float* it_ref_dy = ref_patch_dy;

			Vector3f Jres = {0};
			for(int y = 0; y < patch_size_; ++y){
				uint8_t* it = (uint8_t*) cur_img + (py_r + y - halfpatch_size_ ) * cur_step +
						px_r - halfpatch_size_;

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

			px += update[0];
			py += update[1];
			mean_diff += update[2];
			//printf("iter %d jacobian %f %f %f  u %f v %f \n", iter, Jres[0], Jres[1], Jres[2], u, v);

			if(update[0] * update[0] + update[1] * update[1] < min_update_squared) {
			  converged = true;
			  break;
			}

		}

		// If converged or max iter reached set new coords
		if (converged || iter >= n_iter ){
			//cur_px_estimate[0] = px;
			//cur_px_estimate[1] = py;
		}

		// Re-apply offset
		//cur_px_estimate[0] += (float)pyrRegion[k].region_offset_x;
		//cur_px_estimate[1] += (float)pyrRegion[k].region_offset_y;

		printf("final_pos %f %f converged %d\n", cur_px_estimate[k][0],  cur_px_estimate[k][1], converged[k]);
	}

	return;
}


// copycat function to check the outputs
void align2D_debug(
			PyrImage pyr,						// Image pyramid
			int levels,							// Patch level of the pyramid
			PatchBorder ref_patch_with_border,	// Patch with exterior border
			Patch ref_patch,					// Patch
			Vector2f cur_px_estimate,			// Initial position of the patch
			int n_iter,							// Max number of iterations
			Test groundTruth
){

	const int halfpatch_size_ = 4;
	const int patch_size_ = 8;
	const int patch_area_ = 64;

	bool converged = false;

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
			uint8_t* it = ref_patch_with_border + (y + 1) * ref_step + x + 1;

			ref_patch_dx[y * patch_size_ + x] = 0.5 * (it[1] - it[-1]);
			ref_patch_dy[y * patch_size_ + x] = 0.5 * (it[ref_step] - it[-ref_step]);
		}
	}
	// Compute the hessian from jacobians
	compute_hessian(H, ref_patch_dx, ref_patch_dy, patch_area_);

	// Compute the hessian inverse
	Matrix3f Hinv;
	compute_inverse(Hinv, H);

	// Print Hessian and inverse
	//printf("hessian \n"); print_matrix(H);
	//printf("inv_hessian \n"); print_matrix(Hinv);

	// Get image level pointer
	int offset = 0;
	for(int l = 0; l < levels; l++){
							// moltiplicazione in potenza, di 2, 4, 8 ecc..
		offset += (pyr.cols * pyr.rows) / ((1 << l) * (1 << l));
	}
	uint8_t* cur_img = pyr.data + offset;

	// Get image pyramid level size
	int cur_img_cols = pyr.cols / (1 << levels);
	int cur_img_rows = pyr.rows / (1 << levels);

	/************ WORK IN PROGRESS *****************/

	float mean_diff = 0;

	// Compute pixel location in new image:
	float u = cur_px_estimate[0];
	float v = cur_px_estimate[1];
	//printf("u %f v %f \n", u, v);

	// termination condition
	const float min_update_squared = 0.03 * 0.03;
	const int cur_step = cur_img_cols;

	Vector3f update = {0};

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
			converged = false;
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
		uint8_t* it_ref = ref_patch;
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
		  converged = true;
		  break;
		}
	}

	// If converged or max iter reached set new coords
	if (converged || iter >= n_iter ){
		cur_px_estimate[0] = u;
		cur_px_estimate[1] = v;
	}

	// Test

	float tol = 1e-10;
	printf("Checking test %d\n", groundTruth.test_id);
	if (!matrix3f_areEqual(groundTruth.hessian, H, tol)) {
		printf("hessian not equal, it should be:\n");
		print_matrix(groundTruth.hessian);
		printf(" instead it's:\n");
		print_matrix(H);
	}
	if (!matrix3f_areEqual(groundTruth.inverse_hessian, Hinv, tol)) {
		printf(" inverse hessian not equal, it should be:\n");
		print_matrix(groundTruth.inverse_hessian);
		printf(" instead it's:\n");
		print_matrix(Hinv);
	}
	if (!vector2f_areEqual(groundTruth.final_cur_px_estimate, cur_px_estimate,tol)) {
		printf("final cur px estimate not equal\n");
		print_vector(groundTruth.final_cur_px_estimate);
		printf(" instead it's:\n");
		print_vector(cur_px_estimate);
	}
	if (groundTruth.last_iter != iter) {
		printf(" last iter not equal, it should be %d, instead it's %d\n",
			groundTruth.last_iter, iter);
	}

	return;
}

void align2D_region_debug(
			PyrRegion pyrRegion,
			PatchBorder ref_patch_with_border,	// Patch with exterior border
			Patch ref_patch,					// Patch
			Vector2f cur_px_estimate,			// Initial position of the patch
			int n_iter,							// Max number of iterations
			Test groundTruth
){

	const int halfpatch_size_ = 4;
	const int patch_size_ = 8;
	const int patch_area_ = 64;

	bool converged = false;

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
			uint8_t* it = ref_patch_with_border + (y + 1) * ref_step + x + 1;

			ref_patch_dx[y * patch_size_ + x] = 0.5 * (it[1] - it[-1]);
			ref_patch_dy[y * patch_size_ + x] = 0.5 * (it[ref_step] - it[-ref_step]);
		}
	}
	// Compute the hessian from jacobians
	compute_hessian(H, ref_patch_dx, ref_patch_dy, patch_area_);

	// Compute the hessian inverse
	Matrix3f Hinv;
	compute_inverse(Hinv, H);

	// Print Hessian and inverse
	//printf("hessian \n"); print_matrix(H);
	//printf("inv_hessian \n"); print_matrix(Hinv);

	uint8_t* cur_img = pyrRegion.data;
	// Get image pyramid level size
	int cur_img_cols = pyrRegion.cols;
	int cur_img_rows = pyrRegion.rows;

	/************ WORK IN PROGRESS *****************/

	float mean_diff = 0;

	// Compute pixel location in new image:
	//float px = cur_px_estimate[0] - pyrRegion.region_offset_x;
	//float py = cur_px_estimate[1] - pyrRegion.region_offset_y;

	// Approfitto del fatto che il casting mi butta sempre via per troncamento
	// per appiccicarci le cifre decimali mancanti
	float px = pyrRegion.fcoord_x + (cur_px_estimate[0] - (int)cur_px_estimate[0]);
	float py = pyrRegion.fcoord_y + (cur_px_estimate[1] - (int)cur_px_estimate[1]);
	// tracking differences
	float dx = 0;
	float dy = 0;

	// termination condition
	const float min_update_squared = 0.03 * 0.03;
	const int cur_step = cur_img_cols;

	Vector3f update = {0};

	int iter;
	for(iter = 0; iter < n_iter; ++iter){

		int px_r;
		int py_r;
		if (iter != 0) {
			px_r = floor(px);
			py_r = floor(py);
		} else {
			px_r = pyrRegion.fcoord_x;
			py_r = pyrRegion.fcoord_y;
		}

		if(px_r < halfpatch_size_ || py_r < halfpatch_size_
		|| px_r >= cur_img_cols - halfpatch_size_ || py_r >= cur_img_rows - halfpatch_size_){
			break;
		}

		if(isnan(px) || isnan(py)) {
			converged = false;
			break;
		}

		// compute interpolation weights
		float subpix_x = px - px_r;
		float subpix_y = py - py_r;
		float wTL = (1.0 - subpix_x) * (1.0 - subpix_y);
		float wTR = subpix_x * (1.0 - subpix_y);
		float wBL = (1.0 - subpix_x) * subpix_y;
		float wBR = subpix_x * subpix_y;

	    //printf("w %f %f %f %f\n", wTL, wTR, wBL, wBR);
		// loop through search_patch, interpolate
		uint8_t* it_ref = ref_patch;
		float* it_ref_dx = ref_patch_dx;
		float* it_ref_dy = ref_patch_dy;

		Vector3f Jres = {0};
		for(int y = 0; y < patch_size_; ++y){
			uint8_t* it = (uint8_t*) cur_img + (py_r + y - halfpatch_size_ ) * cur_step +
					px_r - halfpatch_size_;

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

		px += update[0];
		py += update[1];
		// apply differences
		dx += update[0];
		dy += update[1];
		//cur_px_estimate[0] += update[0];
		//cur_px_estimate[1] += update[1];
		mean_diff += update[2];
		//printf("iter %d jacobian %f %f %f  u %f v %f \n", iter, Jres[0], Jres[1], Jres[2], u, v);

		if(update[0] * update[0] + update[1] * update[1] < min_update_squared) {
		  converged = true;
		  break;
		}

	}

	// If converged or max iter reached set new coords
	if (converged || iter >= n_iter ){
		cur_px_estimate[0] += dx;
		cur_px_estimate[1] += dy;
	}

	// Re-apply offset
	//cur_px_estimate[0] += (float)pyrRegion.region_offset_x;
	//cur_px_estimate[1] += (float)pyrRegion.region_offset_y;

	// Test

	float tol = 1e-10;
	printf("Checking test %d\n", groundTruth.test_id);
	if (!matrix3f_areEqual(groundTruth.hessian, H, tol)) {
		printf("hessian not equal, it should be:\n");
		print_matrix(groundTruth.hessian);
		printf("instead it's:\n");
		print_matrix(H);
	}
	if (!matrix3f_areEqual(groundTruth.inverse_hessian, Hinv, tol)) {
		printf("inverse hessian not equal, it should be:\n");
		print_matrix(groundTruth.inverse_hessian);
		printf("instead it's:\n");
		print_matrix(Hinv);
	}
	if (!vector2f_areEqual(groundTruth.final_cur_px_estimate, cur_px_estimate,tol)) {
		printf("Final cur px estimate not equal\n");
		print_vector(groundTruth.final_cur_px_estimate);
		printf("instead it's:\n");
		print_vector(cur_px_estimate);
	}
	if (groundTruth.last_iter != iter) {
		printf("last iter not equal, it should be %d, instead it's %d\n",
			groundTruth.last_iter, iter);
	}
	printf("\n");

	return;
}
