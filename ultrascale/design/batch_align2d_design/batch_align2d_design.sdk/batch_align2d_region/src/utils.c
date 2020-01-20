/*
 * utils.c
 *
 *  Created on: Oct 4, 2019
 *      Author: davide
 */

#include "math.h"
#include "utils.h"

#define REGION_CREATION_FAILED -1
#define REGION_CREATION_SUCCEED 1
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

	printf("Creato la ragione... credo\n");

	pyrRegion->cols = requested_region_cols;
	pyrRegion->rows = requested_region_rows;
	//pyrRegion->region_offset_x = offset_copy_x;
	//pyrRegion->region_offset_y = offset_copy_y;
	pyrRegion->fcoord_x = pixel_center[0] - offset_copy_x;
	pyrRegion->fcoord_y = pixel_center[1] - offset_copy_y;

	return REGION_CREATION_SUCCEED;
}


int prepareBatches(PyrRegion* batch_pyrRegion,
	Test* tests, int num_tests,
	int index_test_start, int index_test_end) {

	if (index_test_end < index_test_start ||
		index_test_start < 0 || index_test_end > num_tests)
		return -1;

	for (int i = index_test_start, k = 0 ; i < index_test_end ; i++, k++) {

		int requested_region_cols = REGION_SIZE;
		int requested_region_rows = REGION_SIZE;

		createPyrRegion(tests[i].pyr, tests[i].level, tests[i].cur_px_estimate,
			4, // patch_size è fissato a 8
			&batch_pyrRegion[k],
			requested_region_cols, requested_region_rows);
	}

	return 0;
}



int createPyrRegionFPGA(PyrImage* pyr,
		int pyrLevel,
        Vector2f pixel_center, int half_patch_size,

		uint8_t* region_data, // DEvo copiarli così!
		Vector2d fcoord,

		int requested_region_rows, int requested_region_cols) {

	// Get image pyramid level size
	int cur_img_cols = pyr->cols / (1 << pyrLevel);
	int cur_img_rows = pyr->rows / (1 << pyrLevel);
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
		offset += (pyr->cols * pyr->rows) / ((1 << l) * (1 << l));
	}

	// Compute pixel location in new image:
	float px = pixel_center[0];
	float py = pixel_center[1];
	int px_r = floor(px);
	int py_r = floor(py);

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

	/*
	for (int y = 0 ; y < requested_region_rows ; y++) {
		for (int x = 0 ; x < requested_region_cols ; x++) {
			region_data[ y*requested_region_cols + x ] =
				pyr->data[ offset +
				 	(offset_copy_y + y)*cur_img_cols +
					(offset_copy_x + x) ];
		}
	}
	*/
	for (int y = 0 ; y < requested_region_rows ; y++) {
		memcpy(&region_data[y * requested_region_cols], &pyr->data[offset + (offset_copy_y + y) * cur_img_cols + offset_copy_x], requested_region_cols);
	}


	fcoord[0] = pixel_center[0] - offset_copy_x;
	fcoord[1] = pixel_center[1] - offset_copy_y;

	return REGION_CREATION_SUCCEED;
}

int prepareBatchesFPGA(
	uint8_t* region_data,
	Vector2d* fcoord,
	Test* tests, int num_tests,
	int index_test_start, int index_test_end) {

	if (index_test_end < index_test_start ||
		index_test_start < 0 || index_test_end > num_tests)
		return -1;

	for (int i = index_test_start, k = 0 ; i < index_test_end ; i++, k++) {

		createPyrRegionFPGA(
			&tests[i].pyr, tests[i].level, tests[i].cur_px_estimate,
			4, // patch_size è fissato a 8
			&region_data[k * REGION_SIZE*REGION_SIZE], fcoord[k],
			REGION_SIZE, REGION_SIZE);
	}

	return 0;
}




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

int file_read(FIL* fp, void* buffer, UINT size){
	FRESULT rc;
	UINT readed;

	if((rc = f_read(fp, buffer, size, &readed)) != FR_OK) {
		ERRORF("ERROR: f_read failed with code %d\n\r", rc);
	}

	if(readed != size){
		ERROR("ERROR : readed less byte than requested \n\r");
	}
	return readed;
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
