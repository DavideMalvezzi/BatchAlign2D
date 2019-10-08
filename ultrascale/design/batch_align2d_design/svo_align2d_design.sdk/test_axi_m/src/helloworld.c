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
#include "xil_printf.h"
#include "sleep.h"
#include "xil_cache.h"
#include "xtime_l.h"

#include "datatypes.h"
#include "xbatch_align2d.h"

#define BATCH_SIZE 10

void time_print(const char* msg, double time){
	int whole = time;
	int thousandths = (time - whole) * 1000;
	xil_printf(msg, whole, thousandths);
}


int main()
{
    init_platform();

    print("Hello World\n\r");

    Vector2f cur_px_estimate[BATCH_SIZE];
	bool converged[BATCH_SIZE];

    //FPGA
	XBatch_align2d XBA;
	int res = XBatch_align2d_Initialize(&XBA, 0);
	if(res != XST_SUCCESS){
		xil_printf("XBA not init \n\r");
	}

	while(!XBatch_align2d_IsReady(&XBA)){
		xil_printf("XBA not ready \n\r");
	}

	converged[0]=1;
	cur_px_estimate[0][0]=1;
	cur_px_estimate[0][1]=2;
	xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);

	XTime start, end;
	XTime_GetTime(&start);

    Xil_DCacheFlush();
	XBatch_align2d_Set_cur_px_estimate(&XBA, (u64)cur_px_estimate);
	XBatch_align2d_Set_converged(&XBA, (u64)converged);
	XBatch_align2d_Start(&XBA);
	while(!XBatch_align2d_IsDone(&XBA));
	Xil_DCacheInvalidate();

	XTime_GetTime(&end);

	double elapsed = (double)(end - start) / COUNTS_PER_SECOND;
	time_print("Elapsed %d.%d us \n\r", elapsed * 1000 * 1000);

	xil_printf("conv %d pos %d %d \n\r", converged[0], (int)cur_px_estimate[0][0], (int)cur_px_estimate[0][1]);


    cleanup_platform();
    return 0;
}
