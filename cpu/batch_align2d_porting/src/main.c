
/**
 * Copyright 1993-2012 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 */

 // compilazione:
 // gcc align2d.c  main.c  utils.c -lm

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 	// sqrt

#include "align2d.h"

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

int main(int argc, char **argv)
{
	const int MAX_NUM_TESTS = 100;
	Test* tests = (Test*)malloc(sizeof(Test)*MAX_NUM_TESTS);
	//Test tests[MAX_NUM_TESTS];
	char buff[32];

	PyrImage pyr;
	int levels[BATCH_SIZE];
	PatchBorder ref_patch_with_border[BATCH_SIZE];
	Patch ref_patch[BATCH_SIZE];
	Vector2f cur_px_estimate[BATCH_SIZE];
	int n_iter = 10;
	bool converged[BATCH_SIZE];

	printf("Starting main program\n");

	// Load the whole dataset before
	load_tests("../../machine_hall_tests/100_tests_easy_machine_hall_01.bin", tests, MAX_NUM_TESTS, 0);

	//check_correctness(tests, MAX_NUM_TESTS);
	check_max_distance(tests, MAX_NUM_TESTS);

	for(int k = 0; k < 1; k++){
		// Load test extracted from the svo
		//load_tests("/home/davide/svo-workspace/rpg_svo/svo/bin/test.bin", tests, BATCH_SIZE, BATCH_SIZE * k);

		//Save img pyramid on file to test if the image is correctly saved into the pyramid structure
		/*
		for(int i = 0; i < 10; i++){
			Image im;
			int offset = 0;
			for(int j = 0; j < 3; j++){
				im.cols = tests[i].pyr.cols / (1 << j);
				im.rows = tests[i].pyr.rows / (1 << j);

				printf("size level %d (%d %d) \n", j, im.cols, im.rows);


				memcpy(im.data, tests[i].pyr.data + offset, im.cols * im.rows);
				offset +=im.cols * im.rows;

				sprintf(buff, "img%d_%d.pgm", k * 10 + i, j);
				save_img(buff, im);
			}
		}
		*/


		// Run test to see if the result of the batch_align2D function are the same as the one
		// extracted from the original svo
		// testo per tutti quelli all'interno di una batch


		for(int i = 0; i < BATCH_SIZE; i++) {
			/*
			// Print test data
			printf("id %d rows %d  cols %d step %d level %d ", tests[i].id, tests[i].pyr.rows, tests[i].pyr.cols, tests[i].pyr.step, tests[i].level);
			printf("max_it %d computed %d converged %d ", tests[i].n_iter, tests[i].last_iter+1, tests[i].converged);
			printf("\nfinal_pos %f %f \n", tests[i].final_cur_px_estimate,  tests[i].final_cur_px_estimate[1]);

			// Copy the test date into the input structures
			pyr = tests[i].pyr;
			levels[i] = tests[i].level;
			memcpy(ref_patch_with_border[i], tests[i].ref_patch_with_border, sizeof(PatchBorder));
			memcpy(ref_patch[i], tests[i].ref_patch, sizeof(Patch));
			memcpy(cur_px_estimate[i], tests[i].cur_px_estimate, sizeof(Vector2f));

			// Run the batch_align2D
			// batch_align2D(pyr, levels, ref_patch_with_border, ref_patch, cur_px_estimate, n_iter, converged);

			*/
		}
		printf("\n");

	}


	free(tests);

	return 0;
}












//
