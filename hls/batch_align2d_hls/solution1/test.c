


int main(){
	uint8 pyr_data_ptr[32];
	uint16 img_w = 0;
	uint16 img_h = 0;
	PatchBorder ref_patch_with_border_ptr[64];
	Vector2f cur_px_estimate_ptr[64];
	uint128 levels;
	uint64 converged=0;
	int n_iter = 10;
	int transfer_pyr = 1;


	//batch_align2D(pyr_data_ptr, img_w, img_h, ref_patch_with_border_ptr, cur_px_estimate_ptr, levels, converged, n_iter, transfer_pyr);


	for(int k = 0; k < 64; k++){
		converged |= (1 << k) * (k % 2);
	}

	printf("%lu \n\r", converged);

	return 0;
}
