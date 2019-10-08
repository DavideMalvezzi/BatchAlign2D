#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/davide/Desktop/svo_batch_align2d/ultrascale/hls/batch_align2d_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
