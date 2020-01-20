#include "align2d_cpu.h"
#include "utils.h"
#include <math.h>

#define DEBUG

// matrix operations for cpu
void matrix3f_dot_inc(Matrix3f res, Matrix3f inc) {
    for(int y = 0; y < 3; y++) {
		for(int x = 0; x < 3; x++) {
            int index = y * 3 + x;
			res[index] += inc[index];
		}
	}
}

// multiply (3x1) vec with (1x3) vec
void vector3f_mult_3x3(Vector3f v1, Vector3f v2_transposed, Matrix3f res) {
    for(int y = 0; y < 3; y++) {
        for(int x = 0; x < 3; x++) {
            res[y * 3 + x] = v1[y]*v2_transposed[x];
        }
    }

}

// Simple matrix multiplication between 3x3 matrix and 3x1 vector
void matrix_vector_mul_cpu(Matrix3f m, Vector3f v, Vector3f res){
	for(int i = 0; i < 3; i++){
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

// copiato da malvez - thx
void compute_inverse_cpu(Matrix3f inv, Matrix3f m){
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


void align2D_cpu(
	PyrImage* pyr,
    int level,
    PatchBorder ref_patch_with_border,
    Patch ref_patch,
    Vector2f cur_px_estimate,
    int n_iter,

    uint8_t debug, // mettere vero se si vuole fare il debug
    Test* groundTruth)
{

	if (debug) {
		printf("debug align2D_cpu Started!\n");
	}

    const int halfpatch_size_ = 4;
    const int patch_size_ = 8;
    const int patch_area_ = 64;

    uint8_t converged = 0;//false

    // compute derivative of template and prepare inverse compositional
    float __attribute__((__aligned__(16))) ref_patch_dx[patch_area_];
    float __attribute__((__aligned__(16))) ref_patch_dy[patch_area_];
    Matrix3f H = {0};

    if (debug) {
    	print("debug align2d_cpu_pre_init\n");
    }

    // compute gradient and hessian
    const int ref_step = patch_size_ + 2;

    // Time
    double init_time = 0;
    double iter_time = 0;
    int it_cont = 0;
    XTime timer;

    // ---------- INITIALIZATION -------------
    XTime_GetTime(&timer);
    float* it_dx = ref_patch_dx;
    float* it_dy = ref_patch_dy;
    for(int y = 0 ; y < patch_size_ ; ++y) {
        uint8_t* it = ref_patch_with_border + (y+1)*ref_step + 1;
        for(int x = 0 ; x < patch_size_ ; ++x, ++it, ++it_dx, ++it_dy) {
            Vector3f J;
            J[0] = 0.5 * (it[1] - it[-1]);
            J[1] = 0.5 * (it[ref_step] - it[-ref_step]);
            J[2] = 1;
            *it_dx = J[0];
            *it_dy = J[1];
            Matrix3f J_mult_J_t;
            vector3f_mult_3x3(J, J, J_mult_J_t);
            matrix3f_dot_inc(H, J_mult_J_t);
        }
    }

    Matrix3f Hinv;
    compute_inverse_cpu(Hinv, H);

    // -------------- GAUSS NEWTON -------------------

    if (debug) {
    	print("debug Initialization complete -- Gaussnewton start...\n");
    }

    int offset = 0;
    for(int k = 0; k < level; k++){
  	  offset += (pyr->cols * pyr->rows)/((1 << k)*(1 << k));
    }
    uint8_t* cur_img = pyr->data + offset;

    // Get image pyramid level size
    int cur_img_cols = pyr->cols / (1 << level);
    int cur_img_rows = pyr->rows / (1 << level);

    float mean_diff = 0;

    // Compute pixel location in new image:
    float u = cur_px_estimate[0];
    float v = cur_px_estimate[1];

    // termination condition
    const float min_update_squared = 0.03*0.03;
    const int cur_step = cur_img_cols;

    Vector3f update = {0};
    int iter;
    init_time += time_elapsed(timer) * 1000;

    for(iter = 0; iter < n_iter ; ++iter) {
        XTime_GetTime(&timer);

    	int u_r = floor(u);
        int v_r = floor(v);
        //printf("iter %d \n", iter);
        //printf("u_r %d v_r %d \n", u_r, v_r);
        if(u_r < halfpatch_size_ || v_r < halfpatch_size_ || u_r >= cur_img_cols-halfpatch_size_ || v_r >= cur_img_rows-halfpatch_size_)
            break;

        if(isnan(u) || isnan(v)) // TODO very rarely this can happen, maybe H is singular? should not be at corner.. check
            return;

        // compute interpolation weights
        float subpix_x = u-u_r;
        float subpix_y = v-v_r;
        float wTL = (1.0-subpix_x)*(1.0-subpix_y);
        float wTR = subpix_x * (1.0-subpix_y);
        float wBL = (1.0-subpix_x)*subpix_y;
        float wBR = subpix_x * subpix_y;

        //printf("w %f %f %f %f\n", wTL, wTR, wBL, wBR);

        // loop through search_patch, interpolate
        uint8_t* it_ref = ref_patch;
        float* it_ref_dx = ref_patch_dx;
        float* it_ref_dy = ref_patch_dy;
        //    float new_chi2 = 0.0;
        Vector3f Jres = {0};
        for(int y=0; y<patch_size_; ++y) {
            uint8_t* it = (uint8_t*) cur_img + (v_r+y-halfpatch_size_)*cur_step + u_r-halfpatch_size_;
            for(int x=0; x<patch_size_; ++x, ++it, ++it_ref, ++it_ref_dx, ++it_ref_dy) {
                float search_pixel = wTL*it[0] + wTR*it[1] + wBL*it[cur_step] + wBR*it[cur_step+1];
                float res = search_pixel - *it_ref + mean_diff;
                Jres[0] -= res*(*it_ref_dx);
                Jres[1] -= res*(*it_ref_dy);
                Jres[2] -= res;
                //printf("pixel %f  res %f   dx %f   dy %f \n", search_pixel, res, (*it_ref_dx), (*it_ref_dy));

                //        new_chi2 += res*res;
            }
        }

        matrix_vector_mul_cpu(Hinv, Jres, update);
        u += update[0];
        v += update[1];
        mean_diff += update[2];

        if(update[0]*update[0]+update[1]*update[1] < min_update_squared) {
            converged = 1;
            break;
        }

        iter_time += time_elapsed(timer) * 1000;
        it_cont++;
    }

    //printf("%f, %f\n", init_time, iter_time / it_cont);

    Vector2f final_px = {0};
    if (converged || iter >= n_iter ){
        final_px[0] = u;
        final_px[1] = v;
    }

    if (debug) {
    	printf("debug Initialization complete -- Gaussnewton finished...\n");
    }

    if (!debug)
        return;


    /*
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
	if (groundTruth.last_iter != iter) {
		printf("last iter not equal, it should be %d, instead it's %d\n",
			groundTruth.last_iter, iter);
	}
	if (!vector2f_areEqual(groundTruth.final_cur_px_estimate, final_px,tol)) {
		printf("Final cur px estimate not equal\n");
		print_vector(groundTruth.final_cur_px_estimate);
		printf("instead it's:\n");
		print_vector(final_px);
	}
	printf("\n");
	*/
}


