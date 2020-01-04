// ==============================================================
// File generated on Sat Jan 04 20:14:03 CET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xbatch_align2d_region.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XBatch_align2d_region_CfgInitialize(XBatch_align2d_region *InstancePtr, XBatch_align2d_region_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->Param_BaseAddress = ConfigPtr->Param_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XBatch_align2d_region_Start(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL) & 0x80;
    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XBatch_align2d_region_IsDone(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XBatch_align2d_region_IsIdle(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XBatch_align2d_region_IsReady(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XBatch_align2d_region_EnableAutoRestart(XBatch_align2d_region *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL, 0x80);
}

void XBatch_align2d_region_DisableAutoRestart(XBatch_align2d_region *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_AP_CTRL, 0);
}

void XBatch_align2d_region_Set_myRegion_data_ptr(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_DATA_PTR_DATA, Data);
}

u32 XBatch_align2d_region_Get_myRegion_data_ptr(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_DATA_PTR_DATA);
    return Data;
}

void XBatch_align2d_region_Set_myRegion_fcoord_ptr(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_FCOORD_PTR_DATA, Data);
}

u32 XBatch_align2d_region_Get_myRegion_fcoord_ptr(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MYREGION_FCOORD_PTR_DATA);
    return Data;
}

void XBatch_align2d_region_Set_my_ref_patch_with_border_ptr(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_REF_PATCH_WITH_BORDER_PTR_DATA, Data);
}

u32 XBatch_align2d_region_Get_my_ref_patch_with_border_ptr(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_REF_PATCH_WITH_BORDER_PTR_DATA);
    return Data;
}

void XBatch_align2d_region_Set_my_cur_px_estimate_ptr(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_CUR_PX_ESTIMATE_PTR_DATA, Data);
}

u32 XBatch_align2d_region_Get_my_cur_px_estimate_ptr(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_CUR_PX_ESTIMATE_PTR_DATA);
    return Data;
}

void XBatch_align2d_region_Set_my_inv_out(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_INV_OUT_DATA, Data);
}

u32 XBatch_align2d_region_Get_my_inv_out(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_INV_OUT_DATA);
    return Data;
}

void XBatch_align2d_region_Set_my_debug_array_ptr(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_DEBUG_ARRAY_PTR_DATA, Data);
}

u32 XBatch_align2d_region_Get_my_debug_array_ptr(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_MY_DEBUG_ARRAY_PTR_DATA);
    return Data;
}

u64 XBatch_align2d_region_Get_my_converged(XBatch_align2d_region *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_REGION_PARAM_ADDR_MY_CONVERGED_DATA);
    Data += (u64)XBatch_align2d_region_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_REGION_PARAM_ADDR_MY_CONVERGED_DATA + 4) << 32;
    return Data;
}

u32 XBatch_align2d_region_Get_my_converged_vld(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_REGION_PARAM_ADDR_MY_CONVERGED_CTRL);
    return Data & 0x1;
}

void XBatch_align2d_region_Set_n_iter(XBatch_align2d_region *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_REGION_PARAM_ADDR_N_ITER_DATA, Data);
}

u32 XBatch_align2d_region_Get_n_iter(XBatch_align2d_region *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBatch_align2d_region_ReadReg(InstancePtr->Param_BaseAddress, XBATCH_ALIGN2D_REGION_PARAM_ADDR_N_ITER_DATA);
    return Data;
}

void XBatch_align2d_region_InterruptGlobalEnable(XBatch_align2d_region *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_GIE, 1);
}

void XBatch_align2d_region_InterruptGlobalDisable(XBatch_align2d_region *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_GIE, 0);
}

void XBatch_align2d_region_InterruptEnable(XBatch_align2d_region *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER);
    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER, Register | Mask);
}

void XBatch_align2d_region_InterruptDisable(XBatch_align2d_region *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER);
    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER, Register & (~Mask));
}

void XBatch_align2d_region_InterruptClear(XBatch_align2d_region *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBatch_align2d_region_WriteReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_ISR, Mask);
}

u32 XBatch_align2d_region_InterruptGetEnabled(XBatch_align2d_region *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_IER);
}

u32 XBatch_align2d_region_InterruptGetStatus(XBatch_align2d_region *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBatch_align2d_region_ReadReg(InstancePtr->Ctrl_BaseAddress, XBATCH_ALIGN2D_REGION_CTRL_ADDR_ISR);
}

