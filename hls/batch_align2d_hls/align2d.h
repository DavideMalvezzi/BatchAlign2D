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
#define BATCH_SIZE	8
#define MIN_SQUARED_UPDATE (0.03 * 0.03)

void batch_align2D_region(
			//volatile const PyrRegion* pyr_region_ptr,
			volatile const uint8* myRegion_data_ptr,
			//volatile const uint8* myRegion_cols_ptr,
			//volatile const uint8* myRegion_rows_ptr,
			//volatile const uint8* myRegion_fcoord_x_ptr,
			//volatile const uint8* myRegion_fcoord_y_ptr,
			volatile const Vector2d* myReagion_fcoord_ptr,

			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,

			Matrix3f* my_inv_out,
			float* my_debug_array_ptr
);
/*
void batch_align2D_region(
			//volatile const PyrRegion* pyr_region_ptr,
			volatile const uint8* myRegion_data_ptr,
			volatile const uint8* myRegion_cols_ptr,
			volatile const uint8* myRegion_rows_ptr,
			volatile const uint8* myRegion_fcoord_x_ptr,
			volatile const uint8* myRegion_fcoord_y_ptr,

			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,
			Matrix3f* my_inv_out,

			float* my_debug_array_ptr
);
*/
/*
void batch_align2D_region(
			//volatile const PyrRegion* pyr_region_ptr,
			volatile const uint8* myRegion_data_ptr,
			volatile const uint8* myRegion_cols_ptr,
			volatile const uint8* myRegion_rows_ptr,
			volatile const uint8* myRegion_fcoord_x_ptr,
			volatile const uint8* myRegion_fcoord_y_ptr,

			volatile const PatchBorder* my_ref_patch_with_border_ptr,
			volatile Vector2f* my_cur_px_estimate_ptr,
			uint64* my_converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,
			Matrix3f* my_inv_out
); */

/*
void batch_align2D_region(
			volatile const struct PyrRegion* pyr_region_ptr,
			volatile const PatchBorder* ref_patch_with_border_ptr,
			volatile Vector2f* cur_px_estimate_ptr,
			uint64* converged, // consideriamo fino a 64 batchsize, quindi 64 bit
			const int n_iter,
			Matrix3f* inv_out
);*/

/*
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
*/

#endif
