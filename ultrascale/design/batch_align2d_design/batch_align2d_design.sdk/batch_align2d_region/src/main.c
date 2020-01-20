/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include <stdlib.h>
#include "platform.h"
#include "xil_printf.h"

#include "utils.h"
#include "align2d_cpu.h"
#include "datatypes.h"
#include "xbatch_align2d_region.h"


#define DEBUG_ARRAY_LENGTH 100

#define BATCH_SIZE 16

//#define NUM_TESTS 8
//#define NUM_TESTS 96
#define NUM_TESTS 640

void testing_fpga(Test* tests);
void batch_align_region_fpga(Test* tests);

int main()
{
	// Init PS
    init_platform();
	xil_printf("Hello world Xil \n");

    // Mount SD card
    FATFS fs;
    FIL fp;
    mount_drive(&fs, "0:");
    file_open(&fp, "0:/1024.bin");
    xil_printf("Test file opened \n");

    // Read tests
    Test* tests = (Test*) malloc (sizeof(Test) * NUM_TESTS);
    int readed = file_read(&fp, tests, sizeof(Test) * NUM_TESTS);
    print("Tests read \n");

    XTime timer;
    double elapsed;

    // ---------------------------- TEST SU ARM ----------------------------------------------------

    print("Start CPU measurements\n");
    XTime_GetTime(&timer);
    for (int i = 0 ; i < NUM_TESTS ; i++) {
    	align2D_cpu(
    		&tests[i].pyr, tests[i].level, tests[i].ref_patch_with_border,
    	 	tests[i].ref_patch, tests[i].cur_px_estimate, tests[i].n_iter, 0, &tests[i]);
    }
    elapsed = time_elapsed(timer) * 1000;
    printf("Elapsed CPU %f ms \n", elapsed);

    // ---------------------------- TEST SU FPGA ---------------------------------------------------

    //testing_fpga(tests); // test on single batch
    batch_align_region_fpga(tests);

    // Clean
	free(tests);
    cleanup_platform();

    return 0;
}


void testing_fpga(Test* tests) {

    XBatch_align2d_region XBA;
    int res = XBatch_align2d_region_Initialize(&XBA, 0);

    // Check for success
    if(res != XST_SUCCESS){
    	ERROR("XBA not init \n");
    } else {
        print("XBA ready \n");
    }

    uint8_t region_data[BATCH_SIZE * REGION_SIZE * REGION_SIZE];
    Vector2d region_fcoord[BATCH_SIZE];

    PatchBorder ref_patch_with_border[BATCH_SIZE];
    Vector2f cur_px_estimate[BATCH_SIZE];
    u64 converged;

    print("Transferring data to FPGA \n");

    XBatch_align2d_region_Set_myRegion_data_ptr(&XBA, (u64)region_data);
    XBatch_align2d_region_Set_myRegion_fcoord_ptr(&XBA, (u64)region_fcoord);
    XBatch_align2d_region_Set_my_ref_patch_with_border_ptr(&XBA, (u64)ref_patch_with_border);
    XBatch_align2d_region_Set_my_cur_px_estimate_ptr(&XBA, (u64)cur_px_estimate);
    int num_iter = 10;
    XBatch_align2d_region_Set_n_iter(&XBA, (u32)num_iter);

    print("FPGA Measurements\n");
    // Start timer
    XTime timer;
    XTime_GetTime(&timer);

    prepareBatchesFPGA(region_data, region_fcoord, tests, NUM_TESTS, 0, BATCH_SIZE);
    for (int k = 0 ; k < BATCH_SIZE ; k++) {
        memcpy(ref_patch_with_border[k], tests[k].ref_patch_with_border, sizeof(PatchBorder));
        memcpy(cur_px_estimate[k], tests[k].cur_px_estimate, sizeof(Vector2f));
    }

    // Flush cache so the data into the RAM is updated
    Xil_DCacheFlush();

    // Start and wait for FPGA to finish
    XBatch_align2d_region_Start(&XBA);
    while(!XBatch_align2d_region_IsDone(&XBA));

    // Invalidate the cache so the data is read from the RAM
    Xil_DCacheInvalidate();

    double elapsed = time_elapsed(timer) * 1000;
    printf("Elapsed FPGA %f ms \n", elapsed);
    //time_print("Elapsed FPGA %d.%d ms \n\r", elapsed/1000);

    for(int k = 0; k < BATCH_SIZE; k++) {
        printf("test id %d conv %d pos res:(%f, %f) gt:(%f, %f), start:(%f, %f)\n\r",
              k,
              1,
              cur_px_estimate[k][0],
              cur_px_estimate[k][1],
              tests[k].final_cur_px_estimate[0],
              tests[k].final_cur_px_estimate[1],
              tests[k].cur_px_estimate[0],
              tests[k].cur_px_estimate[1]
       );
    }

}

void batch_align_region_fpga(Test* tests) {
    XBatch_align2d_region XBA;

    // Init FPGA instances
	int res = XBatch_align2d_region_Initialize(&XBA, 0);

	// Check for success
	if(res != XST_SUCCESS){
		ERROR("XBA not init \n");
	} else {
		print("XBA ready \n");
	}

    uint8_t region_data[BATCH_SIZE * REGION_SIZE*REGION_SIZE];
    Vector2d region_fcoord[BATCH_SIZE];
    PatchBorder ref_patch_with_border[BATCH_SIZE];
    Vector2f cur_px_estimate[BATCH_SIZE];

    u64 converged;
    int num_iter = 10;


    // Make connections
	XBatch_align2d_region_Set_myRegion_data_ptr(&XBA, (u64)region_data);
	XBatch_align2d_region_Set_myRegion_fcoord_ptr(&XBA, (u64)region_fcoord);
	XBatch_align2d_region_Set_my_ref_patch_with_border_ptr(&XBA, (u64)ref_patch_with_border);
	XBatch_align2d_region_Set_my_cur_px_estimate_ptr(&XBA, (u64)cur_px_estimate);
	XBatch_align2d_region_Set_n_iter(&XBA, (u32)num_iter);

	// Time stats
	double t;
    double elapsed_mean = 0, elapsed_var=0;
    double prepare_mean = 0, prepare_var=0;
    XTime timer, prepare_timer;

    int repeatition_for_statistics = 100;
    int num_batches = ceil(NUM_TESTS / BATCH_SIZE);
    for (int stat_i = 0 ; stat_i < repeatition_for_statistics ; stat_i++) {

        // Start timer per l'iterazione stat_i
        XTime_GetTime(&timer);

        for (int i = 0 ; i < num_batches ; i++) {

            // Prepare batch and copy data for the current iteration...
            XTime_GetTime(&prepare_timer);
            prepareBatchesFPGA(region_data, region_fcoord, tests, NUM_TESTS, i*BATCH_SIZE, (i+1)*BATCH_SIZE);
            t = time_elapsed(prepare_timer) * 1000;
            prepare_mean += t;
            prepare_var += t * t;

            // Copy to transfer buffers
            for (int k = 0 ; k < BATCH_SIZE ; k++) {
                memcpy(ref_patch_with_border[k], tests[i*BATCH_SIZE + k].ref_patch_with_border, sizeof(PatchBorder));
                memcpy(cur_px_estimate[k], tests[i*BATCH_SIZE + k].cur_px_estimate, sizeof(Vector2f));
            }

            int not_first_iteration = i != 0;
            if (not_first_iteration) {
                // Wait for the precedent to finish
                while(!XBatch_align2d_region_IsDone(&XBA));
            }

            // Flush cache so the data into the RAM is updated
            Xil_DCacheFlush();

            // Start and wait for FPGA to finish
            XBatch_align2d_region_Start(&XBA);

            int last_iteration = i == (num_batches-1);
            if (last_iteration) {
                // Wait for the precedent to finish
                while(!XBatch_align2d_region_IsDone(&XBA));
            }
        }

        t = time_elapsed(timer) * 1000;
        elapsed_mean += t;
        elapsed_var += t*t;
    }

    elapsed_mean /= repeatition_for_statistics;
    elapsed_var = elapsed_var / repeatition_for_statistics - elapsed_mean * elapsed_mean;
    prepare_mean /= repeatition_for_statistics;
    prepare_var = prepare_var / repeatition_for_statistics - prepare_mean * prepare_mean;

    printf("Elapsed FPGA Align %f ms +- %f ms \n", elapsed_mean, sqrt(elapsed_var));
    printf("    of %f ms +- %f for prepare \n", prepare_mean, sqrtf(elapsed_var));
}

