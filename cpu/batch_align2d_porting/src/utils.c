
#include "utils.h"
#include <stdlib.h>

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

void save_img(char* filename, Image img){
	FILE* pgmimg;
	pgmimg = fopen(filename, "wb");

	// Writing Magic Number to the File
	fprintf(pgmimg, "P2\n");

	// Writing Width and Height
	fprintf(pgmimg, "%d %d\n", img.cols, img.rows);

	// Writing the maximum gray value
	fprintf(pgmimg, "255\n");
	for (int i = 0; i < img.rows; i++) {
		for (int j = 0; j < img.cols; j++) {

			// Writing the gray values in the 2D array to the file
			fprintf(pgmimg, "%d ", img.data[j + i * img.cols]);
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}

void save_patch(char* filename, Patch img){
	FILE* pgmimg;
	pgmimg = fopen(filename, "wb");

	// Writing Magic Number to the File
	fprintf(pgmimg, "P2\n");

	// Writing Width and Height
	fprintf(pgmimg, "%d %d\n", PATCH_SIZE, PATCH_SIZE);

	// Writing the maximum gray value
	fprintf(pgmimg, "255\n");
	for (int i = 0; i < PATCH_SIZE; i++) {
		for (int j = 0; j < PATCH_SIZE; j++) {

			// Writing the gray values in the 2D array to the file
			fprintf(pgmimg, "%d ", img[j + i * PATCH_SIZE]);
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}

void save_patch_with_border(char* filename, PatchBorder img){
	FILE* pgmimg;
	pgmimg = fopen(filename, "wb");

	// Writing Magic Number to the File
	fprintf(pgmimg, "P2\n");

	// Writing Width and Height
	fprintf(pgmimg, "%d %d\n", PATCH_SIZE+2, PATCH_SIZE+2);

	// Writing the maximum gray value
	fprintf(pgmimg, "255\n");
	for (int i = 0; i < PATCH_SIZE+2; i++) {
		for (int j = 0; j < PATCH_SIZE+2; j++) {

			// Writing the gray values in the 2D array to the file
			fprintf(pgmimg, "%d ", img[j + i * (PATCH_SIZE+2)]);
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}

void print_matrix(Matrix3f m){
  for(int y = 0; y < 3; y++){
	  for(int x= 0; x < 3; x++){
		  printf("%f ", m[x + y * 3]);
	  }
	  printf("\n");
  }
}

void print_vector(Vector2f a) {
	printf("Vector2f v1:%f v2:%f\n", a[0], a[1]);
}

int matrix3f_areEqual(Matrix3f a, Matrix3f b, float tol) {
	for(int y = 0; y < 3; y++){
  	  for(int x= 0; x < 3; x++){
  		  if (abs(a[x + y * 3] - b[x + y * 3]) > tol)
		  	return 0;
  	  }
    }
	return 1;
}

int vector2f_areEqual(Vector2f a, Vector2f b, float tol) {
	if (abs(a[0] - b[0]) > tol ||
		abs(a[1] - b[1]) > tol	)
		return 0;
	return 1;
}
