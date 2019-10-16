/*#include <ap_cint.h>
 *
 * datatypes.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include <ap_cint.h>


// Images max size
#define MAX_IMG_W	752
#define MAX_IMG_H	480
#define IMG_LEN	(MAX_IMG_H * MAX_IMG_W)
#define PYR_SIZE  (int)(MAX_IMG_H * MAX_IMG_W * (1 + 0.25f + 0.0625f))
typedef struct PyrImage{
	uint8 data[PYR_SIZE];
	uint16 cols;
	uint16 rows;
	uint16 step;
}PyrImage;

// Patch size
#define HALF_PATCH_SIZE	4
#define PATCH_SIZE		8
#define PATCH_AREA		64
#define REF_STEP		(PATCH_SIZE + 2)
// Patch
typedef uint8		Patch[PATCH_SIZE * PATCH_SIZE];
typedef uint8 		PatchBorder[REF_STEP * REF_STEP];

// Vectors and matrix
typedef float 	Vector2f[2];
typedef float 	Vector3f[3];
typedef float 	Matrix3f[9];

#endif /* DATATYPES_H_ */
