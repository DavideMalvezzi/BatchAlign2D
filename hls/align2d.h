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
#define BATCH_SIZE	4


void compute_hessian(Matrix3f H, float* dx, float* dy, int N);
void compute_inverse(Matrix3f inv, Matrix3f m);

/*
void batch_align2D(
		volatile PyrImage* pyr_ptr,
		volatile int* levels_ptr,
		volatile PatchBorder* ref_patch_with_border_ptr,
		volatile Patch* ref_patch_ptr,
		volatile Vector2f* cur_px_estimate_ptr,
		int n_iter,
		volatile bool* converged_ptr
);
*/

#endif
