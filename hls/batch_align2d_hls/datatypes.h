/*#include <ap_cint.h>
 *
 * datatypes.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef DATATYPES_H_
#define DATATYPES_H_

//#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include <ap_cint.h>


#define REGION_SIZE 32
typedef struct PyrRegion{
	uint8 data[REGION_SIZE*REGION_SIZE];
	uint8 cols;
	uint8 rows;
	uint8 fcoord_x;
	uint8 fcoord_y;
}PyrRegion;

// Patch size
#define HALF_PATCH_SIZE	4
#define PATCH_SIZE		8
#define PATCH_AREA		64
#define REF_STEP		(PATCH_SIZE + 2)

// Patch
typedef uint8 		PatchBorder[REF_STEP * REF_STEP];

// Vectors and matrix
typedef uint8 	Vector2d[2];
typedef float 	Vector2f[2];
typedef float 	Vector3f[3];
typedef float 	Matrix3f[9];

#endif /* DATATYPES_H_ */
