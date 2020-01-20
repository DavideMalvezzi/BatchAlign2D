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
#define BATCH_SIZE	16
#define MIN_SQUARED_UPDATE (0.03 * 0.03)

void batch_align2D_region(
			volatile const uint8* myRegion_data_ptr,
			volatile const Vector2d* myReagion_fcoord_ptr,
			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged,
			const int n_iter
);


#endif
