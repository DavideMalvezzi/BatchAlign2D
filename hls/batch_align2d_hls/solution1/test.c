
#include "../align2d.h"

// Test
typedef struct Test{
	// Input params
	int id;
	int level;
	PyrImage pyr;
	PatchBorder ref_patch_with_border;
	Patch ref_patch;
	int n_iter;
	Vector2f cur_px_estimate;

	// Outputs
	Matrix3f hessian;
	Matrix3f inverse_hessian;
	Vector2f final_cur_px_estimate;
	int last_iter;
	Vector3f iter_jacobians[10];
	Vector2f iter_pos[10];
	bool converged;
}Test;


void load_tests(char* filename, Test* tests, int n, int skip){
	FILE* f = fopen(filename, "rb");

	if(f == NULL){
		printf("File not opened \n");
		return;
	}

	fseek(f, skip * sizeof(Test), SEEK_SET);
	fread(tests, sizeof(Test), n, f);
	fclose(f);
}

void print_matrix(Matrix3f m){
  for(int y = 0; y < 3; y++){
	  for(int x= 0; x < 3; x++){
		  printf("%f ", m[x + y * 3]);
	  }
	  printf("\n");
  }
}


int main(){
	PyrImage pyr;
	int levels[BATCH_SIZE];
	PatchBorder ref_patch_with_border[BATCH_SIZE];
	Vector2f cur_px_estimate[BATCH_SIZE];
	int n_iter = 10;
	uint64 converged;

	Matrix3f H_inv[BATCH_SIZE];


	Test tests[BATCH_SIZE];
	load_tests("/home/dmalvezzi/batch_align2d/hls/batch_align2d_hls/test_red.bin", tests, BATCH_SIZE, 0);

	int i;
	for(i = 0; i < BATCH_SIZE; i++){
		pyr = tests[i].pyr;
		//levels[i] = tests[i].level;
		memcpy(ref_patch_with_border[i], tests[i].ref_patch_with_border, sizeof(PatchBorder));
		memcpy(cur_px_estimate[i], tests[i].cur_px_estimate, sizeof(Vector2f));

		for(int k = 0; k < 10; k++){
			printf("%d ", ref_patch_with_border[i][k]);
		}
		printf("\n");
	}

	batch_align2D(pyr.data, MAX_IMG_W, MAX_IMG_H, ref_patch_with_border, cur_px_estimate, 0, &converged, n_iter, 1, H_inv);

	for(i = 0; i < BATCH_SIZE; i++){
			//printf("hessian \n"); print_matrix(tests[i].hessian);
			printf("inv_hessian \n"); print_matrix(tests[i].inverse_hessian);
			printf("inv_hessian \n"); print_matrix(H_inv[i]);
			printf("\n");
	}

	return 0;
}
