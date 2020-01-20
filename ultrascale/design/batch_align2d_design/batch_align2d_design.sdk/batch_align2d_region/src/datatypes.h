/*
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

//#include <ap_cint.h>


// Images max size

#define MAX_IMG_W 752
#define MAX_IMG_H 480
#define IMG_LEN	(MAX_IMG_H * MAX_IMG_W)
#define PYR_SIZE  ((int)(MAX_IMG_H * MAX_IMG_W * (1 + 0.25f + 0.0625)))
typedef struct PyrImage{
	uint8_t data[PYR_SIZE];
	int cols;
	int rows;
	int step;
}PyrImage;

#define REGION_SIZE 64
typedef struct PyrRegion{
	uint8_t data[REGION_SIZE*REGION_SIZE];
	uint8_t cols;
	uint8_t rows;
	uint8_t fcoord_x;
	uint8_t fcoord_y;
	// int step; // pretty useless
}PyrRegion;

// Patch size
#define HALF_PATCH_SIZE	4
#define PATCH_SIZE		8
#define PATCH_AREA		64
#define REF_STEP		(PATCH_SIZE + 2)
// Patch
typedef uint8_t		Patch[PATCH_SIZE * PATCH_SIZE];
typedef uint8_t 		PatchBorder[REF_STEP * REF_STEP];

// Vectors and matrix
typedef uint8_t	Vector2d[2];
typedef float 	Vector2f[2];
typedef float 	Vector3f[3];
typedef float 	Matrix3f[9];

// Test
typedef struct Test{
	int test_id; // mi ero scordato di aggiungere questo

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
	uint8_t converged; // dovrebbe essere un booleano, ma suppongo sia 8 byte e lo metto a uint8
}Test;



#endif /* DATATYPES_H_ */
