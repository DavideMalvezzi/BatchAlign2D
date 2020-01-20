############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project batch_align2d_hls
set_top batch_align2D_region
add_files batch_align2d_hls/datatypes.h
add_files batch_align2d_hls/align2d.h
add_files batch_align2d_hls/align2d.c
add_files -tb batch_align2d_hls/solution1/test.c -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu9eg-ffvb1156-2-i} -tool vivado
create_clock -period 5 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_interface -clock_enable=0 -expose_global=0 -m_axi_addr64=0 -m_axi_offset slave -register_io off -trim_dangling_port=0
config_schedule -effort medium -enable_dsp_full_reg=0 -relax_ii_for_timing=0 -verbose=0
config_export -format ip_catalog -rtl verilog -vivado_phys_opt place -vivado_report_level 0
config_bind -effort medium
config_sdx -optimization_level none -target none
set_clock_uncertainty 12.5%
#source "./batch_align2d_hls/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
