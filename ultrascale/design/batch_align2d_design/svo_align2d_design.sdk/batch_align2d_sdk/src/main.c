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

#define BATCH_SIZE 10


int main()
{
	// Init PS
    init_platform();

    // Check if the PS is started
    print("Hello World \n\r");

    // Input vector
    Vector2f cur_px_estimate[BATCH_SIZE];
	bool converged[BATCH_SIZE];

    //FPGA instance
	XBatch_align2d XBA;

	// Init FPGA
	int res = XBatch_align2d_Initialize(&XBA, 0);
	// Check for success
	if(res != XST_SUCCESS){
		ERROR("XBA not init \n\r");
	}

	// Init data
	converged[0]=1;
	cur_px_estimate[0][0]=1;
	cur_px_estimate[0][1]=2;
	xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);

	// Timer
	XTime timer;
	XTime_GetTime(&timer);

	// Flush cache so the data into the RAM is updated
    Xil_DCacheFlush();

    // Send data to the FPGA
	XBatch_align2d_Set_cur_px_estimate(&XBA, (u64)cur_px_estimate);
	XBatch_align2d_Set_converged(&XBA, (u64)converged);

	// Start and wait for FPGA to finish
	XBatch_align2d_Start(&XBA);
	while(!XBatch_align2d_IsDone(&XBA));

	// Invalidate the cache so the data is read from the RAM
	Xil_DCacheInvalidate();

	// Print elapsed time
	time_print("Elapsed %d.%d us \n\r", time_elapsed(timer));

	// Print result
	xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);

	// Clean
    cleanup_platform();

    return 0;
}
