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

#include "platform.h"

#include "datatypes.h"
#include "xbatch_align2d.h"
#include "utils.h"

#include "align2d.h"

#define N_TEST	100

int main() {
	// FS
	FATFS fs;

	// File
	FIL fp;

	// Tests
	Test tests[N_TEST];

	// Init the processor
    init_platform();

	// Mount the SD card
	mount_drive(&fs, "0:");

	// Open the test file
	file_open(&fp, "0:/test.bin");

	// Read some tests
	file_read(&fp, tests, N_TEST * sizeof(Test));

	// Batch data
	PyrImage pyr;
	int levels[BATCH_SIZE];
	PatchBorder ref_patch_with_border[BATCH_SIZE];
	Patch ref_patch[BATCH_SIZE];
	Vector2f cur_px_estimate[BATCH_SIZE];
	int n_iter = 10;
	bool converged[BATCH_SIZE];

	// Time
	XTime time = time_get();
	double timer = 0;

	xil_printf("Starting... \n\r");

	//FPGA
	XBatch_align2d XBA;
	int res = XBatch_align2d_Initialize(&XBA, 0);

	if(res != XST_SUCCESS){
		ERROR("XBA not init \n\r");
	}

	xil_printf("XBA initialized \n\r");


	// Print test data
	for(int i = 0; i < N_TEST; i++){
		/*
		xil_printf("test %d  img (%d %d) iter %d/%d  conv %d \n\r",
				i,
				tests[i].pyr.rows, tests[i].pyr.cols,
				tests[i].last_iter+1, tests[i].n_iter,
				tests[i].converged
		);
		*/
		xil_printf("iter i=%d \n\r", i);

		for(int k = 0; k < BATCH_SIZE; k++){
			xil_printf("iter k=%d \n\r", k);

			// Create batch
			pyr = tests[i].pyr;
			levels[k] = tests[i].level;
			memcpy(ref_patch_with_border[k], tests[i].ref_patch_with_border, sizeof(PatchBorder));
			memcpy(ref_patch[k], tests[i].ref_patch, sizeof(Patch));
			memcpy(cur_px_estimate[k], tests[i].cur_px_estimate, sizeof(Vector2f));
			converged[k] = 0;
		}
		xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);

		// Run batch
		//time = time_get();
		//batch_align2D(&pyr, levels, ref_patch_with_border, ref_patch, cur_px_estimate, n_iter, converged);

		/*
		XBatch_align2d_Set_pyr_data_V(&XBA, (u64)pyr.data);
		XBatch_align2d_Set_pyr_rows_V(&XBA, (u64)&pyr.rows);
		XBatch_align2d_Set_pyr_cols_V(&XBA, (u64)&pyr.cols);
		XBatch_align2d_Set_pyr_step_V(&XBA, (u64)&pyr.step);
		XBatch_align2d_Set_levels(&XBA, (u64)levels);
		XBatch_align2d_Set_ref_patch_V(&XBA, (u64)ref_patch);
		XBatch_align2d_Set_ref_patch_with_border_V(&XBA, (u64)ref_patch_with_border);
		*/
		XBatch_align2d_Set_cur_px_estimate(&XBA, (u64)cur_px_estimate);
		XBatch_align2d_Set_n_iter(&XBA, n_iter);
		XBatch_align2d_Set_converged(&XBA, (u64)converged);
		XBatch_align2d_Start(&XBA);
		while(!XBatch_align2d_IsDone(&XBA)){
			xil_printf("Waiting...\n\r");
			sleep(1);
		}


		xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);

		//timer += time_elapsed(time);
	}

	// Print time
	time_print("Init time %d.%d us \n\r",  init_time * 1000 * 1000 / N_TEST);
	time_print("Iter time %d.%d us \n\r",  iter_time * 1000 * 1000 / N_TEST);
	time_print("Time elapsed %d.%d us \n\r",  timer * 1000 * 1000 / N_TEST);

	// Close file
	file_close(&fp);

    /*
    XAlign2d xal;
    XAlign2d_Initialize(&xal, 0);

    int v = 1;

    while(1){
    	print("Hello World\n\r");

    	XAlign2d_Set_value_r_i(&xal, v);
    	XAlign2d_Start(&xal);
    	while(!XAlign2d_IsDone(&xal)){
    		xil_printf("Waiting IP... \n\r");
    		sleep(1);
    	}
    	v = XAlign2d_Get_value_r_o(&xal);
		xil_printf("value is %d \n\r", v);

    	sleep(1);
    }
    */

	// Clean the processor
    cleanup_platform();

    return 0;
}
