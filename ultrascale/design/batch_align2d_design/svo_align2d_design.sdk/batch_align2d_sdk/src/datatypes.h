/*
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
#include <math.h>

// Images max size
#define MAX_IMG_W	752
#define MAX_IMG_H	480
#define IMG_LEN	(MAX_IMG_H * MAX_IMG_W)

// Image struct
typedef struct Image{
	uint8_t data[IMG_LEN];
	int cols;
	int rows;
	int step;
}Image;

// Pyramid struct
#define PYR_SIZE  (int)(MAX_IMG_H * MAX_IMG_W * (1 + 0.25f + 0.0625))
typedef struct PyrImage{
	uint8_t data[PYR_SIZE];
	int cols;
	int rows;
	int step;
}PyrImage;

// Patch size
#define PATCH_SIZE	8
// Patchess
typedef uint8_t		Patch[PATCH_SIZE * PATCH_SIZE];
typedef uint8_t		PatchBorder[(PATCH_SIZE + 2) * (PATCH_SIZE + 2)];

// Vectors and matrix
typedef float 	Vector2f[2];
typedef float 	Vector3f[3];
typedef float 	Matrix3f[9];

// Test
typedef struct Test{
	// Input params
	int id;
	int level;
	PyrImage pyr;
	PatchBorder ref_patch_with_border;
	Patch ref_patch;
	int n_iter;
	Vector2f cur_px_estimate;

	// Outputs
	Matrix3f hessian;
	Matrix3f inverse_hessian;
	Vector2f final_cur_px_estimate;
	int last_iter;
	Vector3f iter_jacobians[10];
	Vector2f iter_pos[10];
	bool converged;
}Test;



#endif /* DATATYPES_H_ */
