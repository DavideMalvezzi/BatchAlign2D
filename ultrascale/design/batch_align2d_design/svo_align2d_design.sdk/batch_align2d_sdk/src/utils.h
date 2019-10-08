/*
 * utils.h
 *
 *  Created on: Oct 4, 2019
 *      Author: davide
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include "ff.h"
#include "sleep.h"
#include "xil_printf.h"
#include "xtime_l.h"

#define ERROR(msg)				while(1){xil_printf(msg); sleep(1);}
#define ERRORF(msg, params)		while(1){xil_printf(msg, params); sleep(1);}

void mount_drive(FATFS* fs, const char* drive);
void file_open(FIL* fp, const char* file_name);
void file_close(FIL* fp);
void file_read(FIL* fp, void* buffer, UINT size);

XTime time_get();
double time_elapsed(XTime timer);
void time_print(const char* msg, double time);


#endif /* SRC_UTILS_H_ */
