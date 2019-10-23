# ==============================================================
# File generated on Wed Oct 23 09:13:26 CEST 2019
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XBatch_align2d" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_CTRL_BASEADDR" \
        "C_S_AXI_CTRL_HIGHADDR" \
        "C_S_AXI_PARAM_BASEADDR" \
        "C_S_AXI_PARAM_HIGHADDR"

    xdefine_config_file $drv_handle "xbatch_align2d_g.c" "XBatch_align2d" \
        "DEVICE_ID" \
        "C_S_AXI_CTRL_BASEADDR" \
        "C_S_AXI_PARAM_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XBatch_align2d" \
        "DEVICE_ID" \
        "C_S_AXI_CTRL_BASEADDR" \
        "C_S_AXI_CTRL_HIGHADDR" \
        "C_S_AXI_PARAM_BASEADDR" \
        "C_S_AXI_PARAM_HIGHADDR"
}

