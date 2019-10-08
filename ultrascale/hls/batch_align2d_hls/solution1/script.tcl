############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project batch_align2d_hls
set_top batch_align2D
add_files batch_align2d_hls/datatypes.h
add_files batch_align2d_hls/align2d.h
add_files batch_align2d_hls/align2d.cpp
open_solution "solution1"
set_part {xczu9eg-ffvb1156-2-e} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
config_interface   -m_axi_addr64 -m_axi_offset slave -register_io off -trim_dangling_port=0
#source "./batch_align2d_hls/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
