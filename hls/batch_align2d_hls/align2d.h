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

void batch_align2D(
			volatile uint8* pyr_data_ptr,
			uint16 img_w,
			uint16 img_h,
			volatile PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			uint128 levels,
			uint64* converged,
			int n_iter,
			bool transfer_pyr,
			Matrix3f* inv_out
);

#endif
