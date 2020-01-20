// ==============================================================
// File generated on Sat Jan 18 10:32:44 CET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// ctrl
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of myRegion_data_ptr
//        bit 31~0 - myRegion_data_ptr[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of myRegion_fcoord_ptr
//        bit 31~0 - myRegion_fcoord_ptr[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of my_ref_patch_with_border_ptr
//        bit 31~0 - my_ref_patch_with_border_ptr[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of my_cur_px_estimate_ptr
//        bit 31~0 - my_cur_px_estimate_ptr[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of my_inv_out
//        bit 31~0 - my_inv_out[31:0] (Read/Write)
// 0x34 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL                           0x00
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_GIE                               0x04
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER                               0x08
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_ISR                               0x0c
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_DATA_PTR_DATA            0x10
#define XBATCH_ALIGN2D_REGION_CTRL_BITS_MYREGION_DATA_PTR_DATA            32
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_FCOORD_PTR_DATA          0x18
#define XBATCH_ALIGN2D_REGION_CTRL_BITS_MYREGION_FCOORD_PTR_DATA          32
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_REF_PATCH_WITH_BORDER_PTR_DATA 0x20
#define XBATCH_ALIGN2D_REGION_CTRL_BITS_MY_REF_PATCH_WITH_BORDER_PTR_DATA 32
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_CUR_PX_ESTIMATE_PTR_DATA       0x28
#define XBATCH_ALIGN2D_REGION_CTRL_BITS_MY_CUR_PX_ESTIMATE_PTR_DATA       32
#define XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_INV_OUT_DATA                   0x30
#define XBATCH_ALIGN2D_REGION_CTRL_BITS_MY_INV_OUT_DATA                   32

// param
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of my_converged
//        bit 31~0 - my_converged[31:0] (Read)
// 0x14 : Data signal of my_converged
//        bit 31~0 - my_converged[63:32] (Read)
// 0x18 : Control signal of my_converged
//        bit 0  - my_converged_ap_vld (Read/COR)
//        others - reserved
// 0x1c : Data signal of n_iter
//        bit 31~0 - n_iter[31:0] (Read/Write)
// 0x20 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBATCH_ALIGN2D_REGION_PARAM_ADDR_MY_CONVERGED_DATA 0x10
#define XBATCH_ALIGN2D_REGION_PARAM_BITS_MY_CONVERGED_DATA 64
#define XBATCH_ALIGN2D_REGION_PARAM_ADDR_MY_CONVERGED_CTRL 0x18
#define XBATCH_ALIGN2D_REGION_PARAM_ADDR_N_ITER_DATA       0x1c
#define XBATCH_ALIGN2D_REGION_PARAM_BITS_N_ITER_DATA       32

