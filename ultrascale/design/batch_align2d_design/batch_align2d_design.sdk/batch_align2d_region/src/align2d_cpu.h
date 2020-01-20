#ifndef ALIGN2D_CPU_H_
#define ALIGN2D_CPU_H_

#include "datatypes.h"

void align2D_cpu(
	PyrImage* pyr,
    int level,
    PatchBorder ref_patch_with_border,
    Patch ref_patch,
    Vector2f cur_px_estimate,
    int n_iter,

    uint8_t debug, // mettere vero se si vuole fare il debug
    Test* groundTruth);

#endif
