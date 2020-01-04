# ==============================================================
# File generated on Sat Jan 04 20:14:06 CET 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../solution1/test.c -cflags { -Wno-unknown-pragmas}
add_files batch_align2d_hls/align2d.c
add_files batch_align2d_hls/align2d.h
add_files batch_align2d_hls/datatypes.h
set_part xczu9eg-ffvb1156-2-i
create_clock -name default -period 5
set_clock_uncertainty 12.5% default
config_compile -no_signed_zeros=0
config_compile -unsafe_math_optimizations=0
config_interface -clock_enable=0
config_interface -expose_global=0
config_interface -m_axi_addr64=0
config_interface -m_axi_offset=slave
config_interface -register_io=off
config_interface -trim_dangling_port=0
config_schedule -effort=medium
config_schedule -enable_dsp_full_reg=0
config_schedule -relax_ii_for_timing=0
config_schedule -verbose=0
config_export -format=ip_catalog
config_export -rtl=verilog
config_export -vivado_phys_opt=place
config_export -vivado_report_level=0
config_bind -effort=medium
config_sdx -optimization_level=none
config_sdx -target=none
