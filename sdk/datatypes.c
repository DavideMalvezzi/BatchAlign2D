/*
 * datatypes.c
 *
 *  Created on: Oct 13, 2019
 *      Author: davide
 */

#include "datatypes.h"

void matrix_print(const char* msg, Matrix3f m){
	printf(msg);
	for(int y = 0; y < 3; y++){
		for(int x= 0; x < 3; x++){
		  printf("%f ", m[x + y * 3]);
		}
		printf("\n");
	}
}
