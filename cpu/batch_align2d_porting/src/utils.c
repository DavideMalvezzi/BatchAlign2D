
#include "utils.h"
#include "align2d.h"
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


void check_correctness(Test* tests, int num_tests) {
	for (int i = 0 ; i < num_tests ; i++) {
		// checking correctness
		// se e' corretto per il singolo, e' corretto per tutto il batch, anche se cosi' facendo
		// escludo parallelizzazioni che avvengono a livello di batch (quindi tra piu' patch dello stesso batch)
		align2D_debug(tests[i].pyr,  tests[i].level, tests[i].ref_patch_with_border,
		 	tests[i].ref_patch, tests[i].cur_px_estimate, tests[i].n_iter, tests[i]);
	}
}

// Si controlla il massimo spostamento tra pixel corrente e pixel finale
// per avere un idea di quanto grande prender le finestre
void check_max_distance(Test* tests, int num_tests) {

	double max_distance = 0;
	float max_dist_ip_x, max_dist_ip_y;
	float max_dist_fp_x, max_dist_fp_y;
	for (int i = 0 ; i < num_tests ; i++) {
		float ip_x = tests[i].cur_px_estimate[0]; // initial pixel
		float ip_y = tests[i].cur_px_estimate[1];
		float fp_x = tests[i].final_cur_px_estimate[0];	// final pixel
		float fp_y = tests[i].final_cur_px_estimate[1];
		// per farlo calcolo la distanza tra punto finale e punto corrente
		double distance = sqrt( (ip_x-fp_x)*(ip_x-fp_x) + (ip_y-fp_y)*(ip_y-fp_y) );
		if (distance > max_distance) {
			max_distance = distance;
			max_dist_ip_x = ip_x;
			max_dist_ip_y = ip_y;
			max_dist_fp_x = fp_x;
			max_dist_fp_y = fp_y;
		}
	}

	printf("La massima distanza è %f e i punti sono:\n", max_distance);
	printf("Punto iniziale (%f, %f)\n", max_dist_ip_x, max_dist_ip_y );
	printf("Punto finale (%f, %f):\n", max_dist_fp_x, max_dist_fp_y );
}

void check_max_distance_by_levels(Test* tests, int num_tests) {

	// numero di livelli
	int NUM_PYR_LEVELS = 3;

	double max_distance[NUM_PYR_LEVELS];
	float max_dist_ip_x[NUM_PYR_LEVELS], max_dist_ip_y[NUM_PYR_LEVELS];
	float max_dist_fp_x[NUM_PYR_LEVELS], max_dist_fp_y[NUM_PYR_LEVELS];
	for (int i = 0 ; i < NUM_PYR_LEVELS; i ++) {
		max_distance[i] = 0.0f;
		max_dist_ip_x[i] = -1.f; max_dist_ip_y[i] = -1.f;
		max_dist_fp_x[i] = -1.f; max_dist_fp_y[i] = -1.f;
	}
	for (int i = 0 ; i < num_tests ; i++) {
		int level = tests[i].level; // il livello di piramide a cui e' associato tale patch
		float ip_x = tests[i].cur_px_estimate[0]; // initial pixel
		float ip_y = tests[i].cur_px_estimate[1];
		float fp_x = tests[i].final_cur_px_estimate[0];	// final pixel
		float fp_y = tests[i].final_cur_px_estimate[1];
		// per farlo calcolo la distanza tra punto finale e punto corrente
		double distance = sqrt( (ip_x-fp_x)*(ip_x-fp_x) + (ip_y-fp_y)*(ip_y-fp_y) );
		if (distance > max_distance[level]) {
			max_distance[level] = distance;
			max_dist_ip_x[level] = ip_x;
			max_dist_ip_y[level] = ip_y;
			max_dist_fp_x[level] = fp_x;
			max_dist_fp_y[level] = fp_y;
		}
	}

	for (int level = 0 ; level <  NUM_PYR_LEVELS ; level++) {
		printf("Livello della piramide %d\n", level);
		printf("La massima distanza è %f e i punti sono:\n", max_distance[level]);
		printf("Punto iniziale (%f, %f)\n", max_dist_ip_x[level], max_dist_ip_y[level] );
		printf("Punto finale (%f, %f):\n", max_dist_fp_x[level], max_dist_fp_y[level] );
	}
}

void check_max_horizontal_vertical_distance_by_levels(Test* tests, int num_tests) {

	// numero di livelli
	int NUM_PYR_LEVELS = 3;

	double max_distance_x[NUM_PYR_LEVELS];
	double max_distance_y[NUM_PYR_LEVELS];
	float max_dist_ip_x[NUM_PYR_LEVELS], max_dist_ip_y[NUM_PYR_LEVELS];
	float max_dist_fp_x[NUM_PYR_LEVELS], max_dist_fp_y[NUM_PYR_LEVELS];
	for (int i = 0 ; i < NUM_PYR_LEVELS; i ++) {
		max_distance_x[i] = 0.0f;
		max_distance_y[i] = 0.0f;
		max_dist_ip_x[i] = -1.f; max_dist_ip_y[i] = -1.f;
		max_dist_fp_x[i] = -1.f; max_dist_fp_y[i] = -1.f;
	}
	for (int i = 0 ; i < num_tests ; i++) {
		int level = tests[i].level; // il livello di piramide a cui e' associato tale patch
		float ip_x = tests[i].cur_px_estimate[0]; // initial pixel
		float ip_y = tests[i].cur_px_estimate[1];
		float fp_x = tests[i].final_cur_px_estimate[0];	// final pixel
		float fp_y = tests[i].final_cur_px_estimate[1];
		// per farlo calcolo la distanza tra punto finale e punto corrente
		double distance_x = abs( (ip_x - fp_x) );
		double distance_y = abs( (ip_y - fp_y) );
		if (distance_x > max_distance_x[level]) {
			max_distance_x[level] = distance_x;
			max_dist_ip_x[level] = ip_x;
			max_dist_fp_x[level] = fp_x;
		}
		if (distance_y > max_distance_y[level]) {
			max_distance_y[level] = distance_y;
			max_dist_ip_y[level] = ip_y;
			max_dist_fp_y[level] = fp_y;
		}
	}

	for (int level = 0 ; level <  NUM_PYR_LEVELS ; level++) {
		printf("Livello della piramide %d\n", level);
		printf("Distanza massima X %f\n", max_distance_x[level] );
		printf("Distanza massima Y %f\n", max_distance_y[level] );
	}
}

int createPyrRegion(PyrImage pyr, int pyrLevel,
        Vector2f pixel_center, int half_patch_size,
		PyrRegion* pyrRegion, int requested_region_rows, int requested_region_cols) {

	// Get image pyramid level size
	int cur_img_cols = pyr.cols / (1 << pyrLevel);
	int cur_img_rows = pyr.rows / (1 << pyrLevel);
	// controlli stupidi, le regioni non devono essere maggiori di quello
	// considerato ad un certo livello
	if ( requested_region_cols > cur_img_cols  || requested_region_rows > cur_img_rows )
		return REGION_CREATION_FAILED;

	// get half region size
	int not_even = ( requested_region_cols % 2 != 0 || requested_region_rows % 2 != 0);
	if (not_even)
		return REGION_CREATION_FAILED;
	int half_region_cols = requested_region_cols/2;
	int half_region_rows = requested_region_rows/2;

	// move to the pyramid corresponding to a certain level
	int offset = 0;
	for(int l = 0; l < pyrLevel; l++){
		offset += (pyr.cols * pyr.rows) / ((1 << l) * (1 << l));
	}

	// Compute pixel location in new image:
	float px = pixel_center[0];
	float py = pixel_center[1];
	int px_r = floor(px);
	int py_r = floor(py);

	int region_rows = requested_region_rows;
	int region_cols = requested_region_cols;

	int offset_copy_x = px_r - half_region_cols;
	int offset_copy_y = py_r - half_region_rows;

	/* ----- Check if it goes out or not -----

	If it goes out of region then we compensate, adding the remaining part
	in a direction where region can be still expanded
	 ________    ________		________
	|  ___   |  |	   	x|	   |	|  x|
	| | x |	 |	|		 | --> |	| 	|
	|__---___|	|________|	   |____----| */
	int region_out_of_bounds_x_right = (px_r + half_region_cols > cur_img_cols);
	int region_out_of_bounds_x_left = (px_r - half_region_cols < 0);
	int region_out_of_bounds_y_bottom = (py_r - half_region_rows < 0);
	int region_out_of_bounds_y_up = (py_r + half_region_rows > cur_img_rows);
	// qui assumo che la y vada verso il basso, ma non ha importanza in verita',
	// il risultato e' lo stesso
	if (region_out_of_bounds_x_right) {
		int gap = (px_r + half_region_cols) -  cur_img_cols;
		// if that's the case, subtract the offset_copy_x to the left
		offset_copy_x -= gap;
	}
	if (region_out_of_bounds_x_left) {
		//int gap = half_region_cols - px_r ;
		offset_copy_x = 0; // just start from 0, assuming that I won't overflow
						   // in the opposite direction
	}
	if (region_out_of_bounds_y_up) {
		int gap = (py_r + half_region_rows) - cur_img_rows;
		offset_copy_y -= gap;
	}
	if (region_out_of_bounds_y_bottom) {
		//int gap = half_region_rows - py_r;
		offset_copy_y = 0;
	}

	for (int y = 0 ; y < requested_region_rows ; y++) {
		for (int x = 0 ; x < requested_region_cols ; x++) {
			pyrRegion->data[ y*requested_region_cols + x ] =
				pyr.data[ offset +
				 	(offset_copy_y + y)*cur_img_cols +
					(offset_copy_x + x) ];
		}
	}

	pyrRegion->cols = requested_region_cols;
	pyrRegion->rows = requested_region_rows;
	//pyrRegion->region_offset_x = offset_copy_x;
	//pyrRegion->region_offset_y = offset_copy_y;
	pyrRegion->fcoord_x = pixel_center[0] - offset_copy_x;
	pyrRegion->fcoord_y = pixel_center[1] - offset_copy_y;

	// FUnzione di debugging per vedere se estrapola correttamente l'img
	// Vector2f v1:58.825382 v2:65.001884
	/*
	if (0 && pyrLevel == 2) {
		// Test
		printf("Stampa della piramide vera:\n");
		for (int i = 0 ; i < cur_img_rows ; i++) {
			for (int j = 0 ; j < cur_img_cols ; j++) {
				printf("%d ", pyr.data[offset + i*cur_img_cols + j]);
			}
			printf("\n");
		}

		printf("posizione del feature\n");
		print_vector(pixel_center);
		printf("Stampa della regione\n");
		for (int i = 0 ; i < pyrRegion->rows ; i++) {
			for (int j = 0 ; j < pyrRegion->cols ; j++) {
				printf("%d ", pyrRegion->data[i*pyrRegion->cols + j]);
			}
			printf("\n");
		}

		printf("offsets x %d, %d\n", pyrRegion->region_offset_x, pyrRegion->region_offset_y);
		exit(-1);
	}
	*/


	return REGION_CREATION_SUCCEED;
}

int prepareBatches(PyrRegion* batch_pyrRegion,
	Test* tests, int num_tests,
	int index_test_start, int index_test_end) {

	if (index_test_end < index_test_start ||
		index_test_start < 0 || index_test_end > num_tests)
		return -1;

	for (int i = index_test_start, k = 0 ; i < index_test_end ; i++, k++) {

		int requested_region_cols = MAX_REGION_SIZE;
		int requested_region_rows = MAX_REGION_SIZE;

		createPyrRegion(tests[i].pyr, tests[i].level, tests[i].cur_px_estimate,
			4, // patch_size è fissato a 8
			&batch_pyrRegion[k],
			requested_region_cols, requested_region_rows);
	}

	return 0;
}

int check_correctness_pyrRegion(Test* tests, int num_tests) {
	PyrRegion *pyrRegion = (PyrRegion*)malloc(sizeof(PyrRegion)*num_tests);
	prepareBatches(pyrRegion, tests, num_tests, 0, num_tests);
	for (int i = 0 ; i < num_tests ; i++) {
		// checking correctness
		// se e' corretto per il singolo, e' corretto per tutto il batch, anche se cosi' facendo
		// escludo parallelizzazioni che avvengono a livello di batch (quindi tra piu' patch dello stesso batch)
		align2D_region_debug(pyrRegion[i], tests[i].ref_patch_with_border,
		 	tests[i].ref_patch, tests[i].cur_px_estimate, tests[i].n_iter, tests[i]);
	}

	free(pyrRegion);
}
