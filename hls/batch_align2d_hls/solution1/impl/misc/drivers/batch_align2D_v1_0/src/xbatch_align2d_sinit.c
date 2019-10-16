// ==============================================================
// File generated on Wed Oct 16 14:22:18 CEST 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xbatch_align2d.h"

extern XBatch_align2d_Config XBatch_align2d_ConfigTable[];

XBatch_align2d_Config *XBatch_align2d_LookupConfig(u16 DeviceId) {
	XBatch_align2d_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XBATCH_ALIGN2D_NUM_INSTANCES; Index++) {
		if (XBatch_align2d_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XBatch_align2d_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XBatch_align2d_Initialize(XBatch_align2d *InstancePtr, u16 DeviceId) {
	XBatch_align2d_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XBatch_align2d_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XBatch_align2d_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

