
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

int main(int argc, char **argv)
{
	// L'allocazione su ARM è permessa (Xilinx SDK)

	// Il numero di num tests possiamo far finta sia il numero di feature
	// trovate all'interno di un frame

	const int num_tests = 100; // Possiamo anche per convenienteza fare un multiplo di batch
	Test* tests = (Test*)malloc(sizeof(Test)*num_tests);

	PyrRegion batch_pyrRegion[BATCH_SIZE];

	printf("Starting main program\n");

	// Load the whole dataset before
	load_tests("../../machine_hall_tests/100_tests_easy_machine_hall_01.bin", tests, num_tests, 0);

	//check_correctness(tests, num_tests);
	//check_max_distance(tests, num_tests);
	//check_max_distance_by_levels(tests, num_tests);
	//check_max_horizontal_vertical_distance_by_levels(tests, num_tests);

	// Qui stiamo praticamente facendo finta che il dataset appartenga allo stesso FRAME
	// la cosa ci interessa solamente a livello computazionale quindi non ha importanza

	//check_correctness(tests, 1);
	check_correctness_pyrRegion(tests, num_tests);	

	/*
	int num_batches = ceil(num_tests / BATCH_SIZE);
	int last_batch = num_tests % BATCH_SIZE;
	for (int i = 0 ; i < num_batches ; i++) {
		if (i != (num_batches - 1)) {
			// Prepare batches
			prepareBatches(batch_pyrRegion, tests, num_tests, i*BATCH_SIZE, (i+1)*BATCH_SIZE);

		} else { // nel caso sia l'ultimo batch
			if (last_batch == 0) // se non ci sono dei rimanenti esco
				break;
			// altrimenti processo gli ultimi
			prepareBatches(batch_pyrRegion, tests, num_tests, i*BATCH_SIZE, num_tests);

		}

	}
	*/

	free(tests);

	return 0;
}

#ifdef ROBA_DI_MALVEZ_CANCELLAMI_SE_NON_TI_SERVO

void roba_di_malvez_cancellami_se_non_ti_servo() {

	PyrRegion pyrRegion[BATCH_SIZE];
	int levels[BATCH_SIZE];
	PatchBorder ref_patch_with_border[BATCH_SIZE];
	Patch ref_patch[BATCH_SIZE];
	Vector2f cur_px_estimate[BATCH_SIZE];
	int n_iter = 10;
	bool converged[BATCH_SIZE];

	char buff[32];
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
}

#endif











//
