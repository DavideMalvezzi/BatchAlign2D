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
#include "sleep.h"
#include "xil_cache.h"
#include "xil_printf.h"
#include "xtime_l.h"

#include "datatypes.h"
#include "utils.h"
#include "xbatch_align2d.h"

#define BATCH_SIZE 64



int main()
{
	// Init PS
    init_platform();

    // Check if the PS is started
    print("Hello World \n\r");

    // Read test
    FATFS fs;
    FIL fp;
    mount_drive(&fs, "0:");
    file_open(&fp, "0:/test.bin");

    Test t[4];
    file_read(&fp, &t, 4 * sizeof(Test));

    // Input vector
    PyrImage pyr = t[0].pyr;
    PatchBorder ref_patch_with_border[BATCH_SIZE];
    Vector2f cur_px_estimate[BATCH_SIZE];
    XBatch_align2d_Levels levels;
    u64 converged = 0;

    for(int i = 0; i < 4; i++){
    	memcpy(ref_patch_with_border[i], t[i].ref_patch_with_border, sizeof(PatchBorder));
    	memcpy(cur_px_estimate[i], t[i].cur_px_estimate, sizeof(Vector2f));
    }

    //FPGA instance
	XBatch_align2d XBA;

	// Init FPGA
	int res = XBatch_align2d_Initialize(&XBA, 0);
	// Check for success
	if(res != XST_SUCCESS){
		ERROR("XBA not init \n\r");
	}

	// Timer
	XTime timer;

	double elapsed_pyr = 0;
	double elapsed_wo_pyr = 0;
	double elapsed;
	int count_pyr = 0;
	int count_wo_pyr = 0;

	int it = 0;
	while(it < 10) {

		// Send data to the FPGA which has to be sent only once
		XBatch_align2d_Set_pyr_data_ptr(&XBA, (u64)pyr.data);
		XBatch_align2d_Set_img_h(&XBA, pyr.rows);
		XBatch_align2d_Set_img_w(&XBA, pyr.cols);
		XBatch_align2d_Set_n_iter(&XBA, 10);

		// Test H and Hinv
		Matrix3f H[4] = {0};
		Matrix3f inv[4] = {0};
		XBatch_align2d_Set_H_out(&XBA, (u64)H);
		XBatch_align2d_Set_inv_out(&XBA, (u64)inv);

		for(int i = 0; i < 10; i++){
			// Init data
			converged = 0;
			for(int k = 0; k < BATCH_SIZE; k++){
				cur_px_estimate[k][0] = 0;
				cur_px_estimate[k][1] = 0;
			}
			//xil_printf("conv %x pos %d %d \n\r", converged, (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);


			// Start timer
			XTime_GetTime(&timer);

			// Send the batch data to the FPGA
			XBatch_align2d_Set_ref_patch_with_border_ptr(&XBA, (u64)ref_patch_with_border);
			XBatch_align2d_Set_cur_px_estimate_ptr(&XBA, (u64)cur_px_estimate);
			XBatch_align2d_Set_levels(&XBA, levels);
			XBatch_align2d_Set_transfer_pyr(&XBA, i == 0);

			// Flush cache so the data into the RAM is updated
			Xil_DCacheFlush();

			// Start and wait for FPGA to finish
			XBatch_align2d_Start(&XBA);
			while(!XBatch_align2d_IsDone(&XBA));

			// Invalidate the cache so the data is read from the RAM
			Xil_DCacheInvalidate();

			// Get results
			converged = XBatch_align2d_Get_converged(&XBA);

			// Get time
			elapsed = time_elapsed(timer) * 1000 * 1000;

			if(i == 0){
				elapsed_pyr += elapsed;
				count_pyr++;
			}
			else{
				elapsed_wo_pyr += elapsed;
				count_wo_pyr++;
			}

			// Print elapsed time
			printf("Elapsed %f us \n\r", elapsed);

			// Print result
			xil_printf("%lu \n\r", converged);

			for(int k = 0; k < 4; k++){
				matrix_print("GT h \n\r", t[k].hessian);
				matrix_print("FPGA \n\r", H[k]);
				matrix_print("GT inv \n\r", t[k].inverse_hessian);
				matrix_print("FPGA \n\r", inv[k]);
				printf("\n\r");
			}

		}

		//sleep(10);
		it++;
	}

	time_print("Time pyr %d.%d us \n\r", elapsed_pyr / count_pyr);
	time_print("Time w/ pyr %d.%d us \n\r", elapsed_wo_pyr / count_wo_pyr);


	// Clean
    cleanup_platform();

    return 0;
}
