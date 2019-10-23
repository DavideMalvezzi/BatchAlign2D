// ==============================================================
// File generated on Wed Oct 23 10:37:58 CEST 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xbatch_align2d.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XBatch_align2d_CfgInitialize(XBatch_align2d *InstancePtr, XBatch_align2d_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->Param_BaseAddress = ConfigPtr->Param_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XBatch_align2d_Start(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL) & 0x80;
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XBatch_align2d_IsDone(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XBatch_align2d_IsIdle(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XBatch_align2d_IsReady(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XBatch_align2d_EnableAutoRestart(XBatch_align2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL, 0x80);
}

void XBatch_align2d_DisableAutoRestart(XBatch_align2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_AP_CTRL, 0);
}

void XBatch_align2d_Set_pyr_data_ptr(XBatch_align2d *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_PYR_DATA_PTR_DATA, (u32)(Data));
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_PYR_DATA_PTR_DATA + 4, (u32)(Data >> 32));
}

u64 XBatch_align2d_Get_pyr_data_ptr(XBatch_align2d *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_PYR_DATA_PTR_DATA);
    Data += (u64)XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_PYR_DATA_PTR_DATA + 4) << 32;
    return Data;
}

void XBatch_align2d_Set_ref_patch_with_border_ptr(XBatch_align2d *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_REF_PATCH_WITH_BORDER_PTR_DATA, (u32)(Data));
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_REF_PATCH_WITH_BORDER_PTR_DATA + 4, (u32)(Data >> 32));
}

u64 XBatch_align2d_Get_ref_patch_with_border_ptr(XBatch_align2d *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_REF_PATCH_WITH_BORDER_PTR_DATA);
    Data += (u64)XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_REF_PATCH_WITH_BORDER_PTR_DATA + 4) << 32;
    return Data;
}

void XBatch_align2d_Set_cur_px_estimate_ptr(XBatch_align2d *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_PTR_DATA, (u32)(Data));
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_PTR_DATA + 4, (u32)(Data >> 32));
}

u64 XBatch_align2d_Get_cur_px_estimate_ptr(XBatch_align2d *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_PTR_DATA);
    Data += (u64)XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_CUR_PX_ESTIMATE_PTR_DATA + 4) << 32;
    return Data;
}

void XBatch_align2d_Set_inv_out(XBatch_align2d *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_INV_OUT_DATA, (u32)(Data));
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_INV_OUT_DATA + 4, (u32)(Data >> 32));
}

u64 XBatch_align2d_Get_inv_out(XBatch_align2d *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_INV_OUT_DATA);
    Data += (u64)XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_INV_OUT_DATA + 4) << 32;
    return Data;
}

void XBatch_align2d_Set_img_w(XBatch_align2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_IMG_W_DATA, Data);
}

u32 XBatch_align2d_Get_img_w(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_IMG_W_DATA);
    return Data;
}

void XBatch_align2d_Set_img_h(XBatch_align2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_IMG_H_DATA, Data);
}

u32 XBatch_align2d_Get_img_h(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_IMG_H_DATA);
    return Data;
}

void XBatch_align2d_Set_levels(XBatch_align2d *InstancePtr, XBatch_align2d_Levels Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 0, Data.word_0);
    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 4, Data.word_1);
    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 8, Data.word_2);
    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 12, Data.word_3);
}

XBatch_align2d_Levels XBatch_align2d_Get_levels(XBatch_align2d *InstancePtr) {
    XBatch_align2d_Levels Data;

    Data.word_0 = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 0);
    Data.word_1 = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 4);
    Data.word_2 = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 8);
    Data.word_3 = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_LEVELS_DATA + 12);
    return Data;
}

u64 XBatch_align2d_Get_converged(XBatch_align2d *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_CONVERGED_DATA);
    Data += (u64)XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_CONVERGED_DATA + 4) << 32;
    return Data;
}

u32 XBatch_align2d_Get_converged_vld(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_CONVERGED_CTRL);
    return Data & 0x1;
}

void XBatch_align2d_Set_n_iter(XBatch_align2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_N_ITER_DATA, Data);
}

u32 XBatch_align2d_Get_n_iter(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_N_ITER_DATA);
    return Data;
}

void XBatch_align2d_Set_transfer_pyr(XBatch_align2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_TRANSFER_PYR_DATA, Data);
}

u32 XBatch_align2d_Get_transfer_pyr(XBatch_align2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_PARAM_ADDR_TRANSFER_PYR_DATA);
    return Data;
}

void XBatch_align2d_InterruptGlobalEnable(XBatch_align2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_GIE, 1);
}

void XBatch_align2d_InterruptGlobalDisable(XBatch_align2d *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_GIE, 0);
}

void XBatch_align2d_InterruptEnable(XBatch_align2d *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_IER);
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_IER, Register | Mask);
}

void XBatch_align2d_InterruptDisable(XBatch_align2d *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_IER);
    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_IER, Register & (~Mask));
}

void XBatch_align2d_InterruptClear(XBatch_align2d *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_ISR, Mask);
}

u32 XBatch_align2d_InterruptGetEnabled(XBatch_align2d *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_IER);
}

u32 XBatch_align2d_InterruptGetStatus(XBatch_align2d *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBatch_align2d_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_CTRL_ADDR_ISR);
}

