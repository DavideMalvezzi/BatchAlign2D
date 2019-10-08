/*
 * datatypes.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef ALIGN2D_H_
#define ALIGN2D_H_

#include "datatypes.h"

// Patches batch size
#define BATCH_SIZE	1

//Batch
typedef struct Batch{
	uint2 level;
	PatchBorder ref_patch_with_border;
	Patch ref_patch;
	Vector2f cur_px_estimate;
}Batch;

//Results
typedef struct Result{
	uint8 converged;
	Vector2f px_estimate;
}Result;


void compute_hessian(Matrix3f H, float* dx, float* dy, int N);
void compute_inverse(Matrix3f inv, Matrix3f m);


void batch_align2D(
		volatile Vector2f* cur_px_estimate,
		volatile bool* converged
		/*
			PyrImage* pyr,
			int levels[BATCH_SIZE],
			PatchBorder ref_patch_with_border[BATCH_SIZE],
			Patch ref_patch_[BATCH_SIZE],
			Vector2f cur_px_estimate[BATCH_SIZE],
			int n_iter,
			bool converged[BATCH_SIZE]*/
);


#endif
