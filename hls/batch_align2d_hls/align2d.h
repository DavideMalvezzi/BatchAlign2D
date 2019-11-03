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
#define MIN_SQUARED_UPDATE (0.03 * 0.03)

void batch_align2D(
			volatile const uint8* pyr_data_ptr,
			const uint16 img_w,
			const uint16 img_h,
			volatile const PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			const uint128 levels,
			uint64* converged,
			const int n_iter,
			bool transfer_pyr,
			Matrix3f* inv_out
);

#endif
