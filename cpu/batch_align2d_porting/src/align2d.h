/*
 * align2d.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef ALIGN2D_H_
#define ALIGN2D_H_

#include "datatypes.h"
#include "utils.h"

// Patches batch size
#define BATCH_SIZE	1

void compute_hessian(Matrix3f H, float* dx, float* dy, int N);
void compute_inverse(Matrix3f inv, Matrix3f m);

void batch_align2D(
			PyrImage pyr,
			int levels[BATCH_SIZE],
			PatchBorder ref_patch_with_border[BATCH_SIZE],
			Patch ref_patch_[BATCH_SIZE],
			Vector2f cur_px_estimate[BATCH_SIZE],
			int n_iter,
			bool converged[BATCH_SIZE]
);

void align2D_debug(
			PyrImage pyr,						// Image pyramid
			int levels,							// Patch level of the pyramid
			PatchBorder ref_patch_with_border,	// Patch with exterior border
			Patch ref_patch,					// Patch
			Vector2f cur_px_estimate,			// Initial position of the patch
			int n_iter,							// Max number of iterations
			Test groundTruth
);

//Batch
typedef struct Batch{
	PyrImage pyr;
	int levels[BATCH_SIZE];
	PatchBorder ref_patch_with_border[BATCH_SIZE];
	Patch ref_patch[BATCH_SIZE];
	Vector2f cur_px_estimate[BATCH_SIZE];
}Batch;




#endif /* ALIGN2D_H_ */
