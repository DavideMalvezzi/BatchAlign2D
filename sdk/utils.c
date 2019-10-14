/*
 * utils.c
 *
 *  Created on: Oct 4, 2019
 *      Author: davide
 */

#include "utils.h"

void mount_drive(FATFS* fs, const char* drive){
	FRESULT rc;

	if((rc = f_mount(fs, drive, 1)) != FR_OK) {
		ERRORF("ERROR: f_mount failed with code %d\n\r", rc);
	}
}

void file_open(FIL* fp, const char* file_name){
	FRESULT rc;

	if((rc = f_open(fp, file_name, FA_OPEN_EXISTING | FA_READ)) != FR_OK){
		ERRORF("ERROR: f_open failed with code %d\n\r", rc);
	}
}

void file_close(FIL* fp){
	FRESULT rc;

	if((rc = f_close(fp)) != FR_OK) {
		ERRORF("ERROR: f_close failed with code %d\n\r", rc);
	}
}

void file_read(FIL* fp, void* buffer, UINT size){
	FRESULT rc;
	UINT readed;

	if((rc = f_read(fp, buffer, size, &readed)) != FR_OK) {
		ERRORF("ERROR: f_read failed with code %d\n\r", rc);
	}

	if(readed != size){
		ERROR("ERROR : readed less byte than requested \n\r");
	}
}

XTime time_get(){
	XTime time;
	XTime_GetTime(&time);

	return time;
}

double time_elapsed(XTime time){
	XTime end;
	XTime_GetTime(&end);

	return (double)(end - time) / COUNTS_PER_SECOND;
}

void time_print(const char* msg, double time){
	int whole = time;
	int thousandths = (time - whole) * 1000;
	xil_printf(msg, whole, thousandths);
}

