// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
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
// 0x10 : Data signal of cur_px_estimate
//        bit 31~0 - cur_px_estimate[31:0] (Read/Write)
// 0x14 : Data signal of cur_px_estimate
//        bit 31~0 - cur_px_estimate[63:32] (Read/Write)
// 0x18 : reserved
// 0x1c : Data signal of converged
//        bit 31~0 - converged[31:0] (Read/Write)
// 0x20 : Data signal of converged
//        bit 31~0 - converged[63:32] (Read/Write)
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL              0x00
#define XBATCH_ALIGN2D_CTRL_ADDR_GIE                  0x04
#define XBATCH_ALIGN2D_CTRL_ADDR_IER                  0x08
#define XBATCH_ALIGN2D_CTRL_ADDR_ISR                  0x0c
#define XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_DATA 0x10
#define XBATCH_ALIGN2D_CTRL_BITS_CUR_PX_ESTIMATE_DATA 64
#define XBATCH_ALIGN2D_CTRL_ADDR_CONVERGED_DATA       0x1c
#define XBATCH_ALIGN2D_CTRL_BITS_CONVERGED_DATA       64

