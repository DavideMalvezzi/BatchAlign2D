############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project batch_align2d_hls
set_top batch_align2D
add_files batch_align2d_hls/align2d.cpp
add_files batch_align2d_hls/align2d.h
add_files batch_align2d_hls/datatypes.h
open_solution "solution1"
set_part {xczu9eg-ffvb1156-2-e} -tool vivado
create_clock -period 10 -name default
#source "./batch_align2d_hls/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
