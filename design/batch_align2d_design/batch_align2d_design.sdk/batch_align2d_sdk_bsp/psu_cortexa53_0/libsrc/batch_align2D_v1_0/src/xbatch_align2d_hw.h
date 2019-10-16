// ==============================================================
// File generated on Wed Oct 16 17:44:45 CEST 2019
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
// 0x10 : Data signal of pyr_data_ptr
//        bit 31~0 - pyr_data_ptr[31:0] (Read/Write)
// 0x14 : Data signal of pyr_data_ptr
//        bit 31~0 - pyr_data_ptr[63:32] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of ref_patch_with_border_ptr
//        bit 31~0 - ref_patch_with_border_ptr[31:0] (Read/Write)
// 0x20 : Data signal of ref_patch_with_border_ptr
//        bit 31~0 - ref_patch_with_border_ptr[63:32] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of cur_px_estimate_ptr
//        bit 31~0 - cur_px_estimate_ptr[31:0] (Read/Write)
// 0x2c : Data signal of cur_px_estimate_ptr
//        bit 31~0 - cur_px_estimate_ptr[63:32] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of inv_out
//        bit 31~0 - inv_out[31:0] (Read/Write)
// 0x38 : Data signal of inv_out
//        bit 31~0 - inv_out[63:32] (Read/Write)
// 0x3c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL                        0x00
#define XBATCH_ALIGN2D_CTRL_ADDR_GIE                            0x04
#define XBATCH_ALIGN2D_CTRL_ADDR_IER                            0x08
#define XBATCH_ALIGN2D_CTRL_ADDR_ISR                            0x0c
#define XBATCH_ALIGN2D_CTRL_ADDR_PYR_DATA_PTR_DATA              0x10
#define XBATCH_ALIGN2D_CTRL_BITS_PYR_DATA_PTR_DATA              64
#define XBATCH_ALIGN2D_CTRL_ADDR_REF_PATCH_WITH_BORDER_PTR_DATA 0x1c
#define XBATCH_ALIGN2D_CTRL_BITS_REF_PATCH_WITH_BORDER_PTR_DATA 64
#define XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_PTR_DATA       0x28
#define XBATCH_ALIGN2D_CTRL_BITS_CUR_PX_ESTIMATE_PTR_DATA       64
#define XBATCH_ALIGN2D_CTRL_ADDR_INV_OUT_DATA                   0x34
#define XBATCH_ALIGN2D_CTRL_BITS_INV_OUT_DATA                   64

// param
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of img_w
//        bit 15~0 - img_w[15:0] (Read/Write)
//        others   - reserved
// 0x14 : reserved
// 0x18 : Data signal of img_h
//        bit 15~0 - img_h[15:0] (Read/Write)
//        others   - reserved
// 0x1c : reserved
// 0x20 : Data signal of levels
//        bit 31~0 - levels[31:0] (Read/Write)
// 0x24 : Data signal of levels
//        bit 31~0 - levels[63:32] (Read/Write)
// 0x28 : Data signal of levels
//        bit 31~0 - levels[95:64] (Read/Write)
// 0x2c : Data signal of levels
//        bit 31~0 - levels[127:96] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of converged
//        bit 31~0 - converged[31:0] (Read)
// 0x38 : Data signal of converged
//        bit 31~0 - converged[63:32] (Read)
// 0x3c : Control signal of converged
//        bit 0  - converged_ap_vld (Read/COR)
//        others - reserved
// 0x40 : Data signal of n_iter
//        bit 31~0 - n_iter[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of transfer_pyr
//        bit 0  - transfer_pyr[0] (Read/Write)
//        others - reserved
// 0x4c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBATCH_ALIGN2D_PARAM_ADDR_IMG_W_DATA        0x10
#define XBATCH_ALIGN2D_PARAM_BITS_IMG_W_DATA        16
#define XBATCH_ALIGN2D_PARAM_ADDR_IMG_H_DATA        0x18
#define XBATCH_ALIGN2D_PARAM_BITS_IMG_H_DATA        16
#define XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA       0x20
#define XBATCH_ALIGN2D_PARAM_BITS_LEVELS_DATA       128
#define XBATCH_ALIGN2D_PARAM_ADDR_CONVERGED_DATA    0x34
#define XBATCH_ALIGN2D_PARAM_BITS_CONVERGED_DATA    64
#define XBATCH_ALIGN2D_PARAM_ADDR_CONVERGED_CTRL    0x3c
#define XBATCH_ALIGN2D_PARAM_ADDR_N_ITER_DATA       0x40
#define XBATCH_ALIGN2D_PARAM_BITS_N_ITER_DATA       32
#define XBATCH_ALIGN2D_PARAM_ADDR_TRANSFER_PYR_DATA 0x48
#define XBATCH_ALIGN2D_PARAM_BITS_TRANSFER_PYR_DATA 1

