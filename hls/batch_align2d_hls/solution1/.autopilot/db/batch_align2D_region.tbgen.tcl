set moduleName batch_align2D_region
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {batch_align2D_region}
set C_modelType { void 0 }
set C_modelArgList {
	{ my_region_data int 8 regular {axi_master 0}  }
	{ my_region_fcoord int 8 regular {axi_master 0}  }
	{ my_patches int 8 regular {axi_master 0}  }
	{ my_pos float 32 regular {axi_master 2}  }
	{ my_debug float 32 unused {axi_master 0}  }
	{ my_debug_array float 32 unused {axi_master 0}  }
	{ myRegion_data_ptr int 32 regular {axi_slave 0}  }
	{ myRegion_fcoord_ptr int 32 regular {axi_slave 0}  }
	{ my_ref_patch_with_border_ptr int 32 regular {axi_slave 0}  }
	{ my_cur_px_estimate_ptr int 32 regular {axi_slave 0}  }
	{ my_converged int 64 regular {axi_slave 1}  }
	{ n_iter int 32 unused {axi_slave 0}  }
	{ my_inv_out int 32 unused {axi_slave 0}  }
	{ my_debug_array_ptr int 32 unused {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "my_region_data", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "myRegion_data_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "myRegion_data_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 63,"step" : 1}]}]}]} , 
 	{ "Name" : "my_region_fcoord", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "myRegion_fcoord_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "myRegion_fcoord_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "my_patches", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "my_ref_patch_with_border_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "my_ref_patch_with_border_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "my_pos", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "my_cur_px_estimate_ptr","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "my_cur_px_estimate_ptr","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "my_debug", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "my_inv_out","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "my_inv_out","bundle": "AXILiteS"},"cArray": [{"low" : 0,"up" : 8,"step" : 1}]}]}]} , 
 	{ "Name" : "my_debug_array", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "my_debug_array_ptr","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "my_debug_array_ptr","bundle": "AXILiteS"},"cArray": [{"low" : 0,"up" : 63,"step" : 1}]}]}]} , 
 	{ "Name" : "myRegion_data_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "myRegion_fcoord_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "my_ref_patch_with_border_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "my_cur_px_estimate_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "my_converged", "interface" : "axi_slave", "bundle":"param","type":"ap_vld","bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "my_converged","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : {"out":16}, "offset_end" : {"out":27}} , 
 	{ "Name" : "n_iter", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "n_iter","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":28}, "offset_end" : {"in":35}} , 
 	{ "Name" : "my_inv_out", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "my_debug_array_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":56}, "offset_end" : {"in":63}} ]}
# RTL Port declarations: 
set portNum 307
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_my_region_data_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_my_region_data_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_my_region_data_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_my_region_data_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_my_region_data_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_my_region_data_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_my_region_data_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_my_region_data_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_my_region_data_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_my_region_data_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_my_region_data_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_my_region_data_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_my_region_data_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_my_region_data_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_my_region_data_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_my_region_fcoord_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_my_region_fcoord_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_my_region_fcoord_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_my_region_fcoord_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_my_region_fcoord_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_my_region_fcoord_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_my_region_fcoord_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_my_region_fcoord_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_my_region_fcoord_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_my_region_fcoord_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_my_region_fcoord_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_my_region_fcoord_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_my_region_fcoord_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_my_region_fcoord_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_my_region_fcoord_BUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_my_patches_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_my_patches_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_AWLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_my_patches_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_my_patches_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_my_patches_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_my_patches_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_my_patches_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_WDATA sc_out sc_lv 32 signal 2 } 
	{ m_axi_my_patches_WSTRB sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_my_patches_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_ARLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_my_patches_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_my_patches_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_my_patches_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_my_patches_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_my_patches_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_my_patches_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_my_patches_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_RDATA sc_in sc_lv 32 signal 2 } 
	{ m_axi_my_patches_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_my_patches_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_my_patches_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_my_patches_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_my_patches_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_my_patches_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_my_patches_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_my_patches_BUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_my_pos_AWVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_AWREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_AWADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_my_pos_AWID sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_AWLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_my_pos_AWSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_my_pos_AWBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_my_pos_AWLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_my_pos_AWCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_AWPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_my_pos_AWQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_AWREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_AWUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_WVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_WREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_WDATA sc_out sc_lv 32 signal 3 } 
	{ m_axi_my_pos_WSTRB sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_WLAST sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_WID sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_WUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_ARVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_ARREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_ARADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_my_pos_ARID sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_ARLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_my_pos_ARSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_my_pos_ARBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_my_pos_ARLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_my_pos_ARCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_ARPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_my_pos_ARQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_ARREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_my_pos_ARUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_my_pos_RVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_RREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_RDATA sc_in sc_lv 32 signal 3 } 
	{ m_axi_my_pos_RLAST sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_RID sc_in sc_lv 1 signal 3 } 
	{ m_axi_my_pos_RUSER sc_in sc_lv 1 signal 3 } 
	{ m_axi_my_pos_RRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_my_pos_BVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_my_pos_BREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_my_pos_BRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_my_pos_BID sc_in sc_lv 1 signal 3 } 
	{ m_axi_my_pos_BUSER sc_in sc_lv 1 signal 3 } 
	{ m_axi_my_debug_AWVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_AWREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_AWADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_my_debug_AWID sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_AWLEN sc_out sc_lv 8 signal 4 } 
	{ m_axi_my_debug_AWSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_my_debug_AWBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_my_debug_AWLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_my_debug_AWCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_AWPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_my_debug_AWQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_AWREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_AWUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_WVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_WREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_WDATA sc_out sc_lv 32 signal 4 } 
	{ m_axi_my_debug_WSTRB sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_WLAST sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_WID sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_WUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_ARVALID sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_ARREADY sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_ARADDR sc_out sc_lv 32 signal 4 } 
	{ m_axi_my_debug_ARID sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_ARLEN sc_out sc_lv 8 signal 4 } 
	{ m_axi_my_debug_ARSIZE sc_out sc_lv 3 signal 4 } 
	{ m_axi_my_debug_ARBURST sc_out sc_lv 2 signal 4 } 
	{ m_axi_my_debug_ARLOCK sc_out sc_lv 2 signal 4 } 
	{ m_axi_my_debug_ARCACHE sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_ARPROT sc_out sc_lv 3 signal 4 } 
	{ m_axi_my_debug_ARQOS sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_ARREGION sc_out sc_lv 4 signal 4 } 
	{ m_axi_my_debug_ARUSER sc_out sc_lv 1 signal 4 } 
	{ m_axi_my_debug_RVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_RREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_RDATA sc_in sc_lv 32 signal 4 } 
	{ m_axi_my_debug_RLAST sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_RID sc_in sc_lv 1 signal 4 } 
	{ m_axi_my_debug_RUSER sc_in sc_lv 1 signal 4 } 
	{ m_axi_my_debug_RRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_my_debug_BVALID sc_in sc_logic 1 signal 4 } 
	{ m_axi_my_debug_BREADY sc_out sc_logic 1 signal 4 } 
	{ m_axi_my_debug_BRESP sc_in sc_lv 2 signal 4 } 
	{ m_axi_my_debug_BID sc_in sc_lv 1 signal 4 } 
	{ m_axi_my_debug_BUSER sc_in sc_lv 1 signal 4 } 
	{ m_axi_my_debug_array_AWVALID sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_AWREADY sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_AWADDR sc_out sc_lv 32 signal 5 } 
	{ m_axi_my_debug_array_AWID sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_AWLEN sc_out sc_lv 8 signal 5 } 
	{ m_axi_my_debug_array_AWSIZE sc_out sc_lv 3 signal 5 } 
	{ m_axi_my_debug_array_AWBURST sc_out sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_AWLOCK sc_out sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_AWCACHE sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_AWPROT sc_out sc_lv 3 signal 5 } 
	{ m_axi_my_debug_array_AWQOS sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_AWREGION sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_AWUSER sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_WVALID sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_WREADY sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_WDATA sc_out sc_lv 32 signal 5 } 
	{ m_axi_my_debug_array_WSTRB sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_WLAST sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_WID sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_WUSER sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_ARVALID sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_ARREADY sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_ARADDR sc_out sc_lv 32 signal 5 } 
	{ m_axi_my_debug_array_ARID sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_ARLEN sc_out sc_lv 8 signal 5 } 
	{ m_axi_my_debug_array_ARSIZE sc_out sc_lv 3 signal 5 } 
	{ m_axi_my_debug_array_ARBURST sc_out sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_ARLOCK sc_out sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_ARCACHE sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_ARPROT sc_out sc_lv 3 signal 5 } 
	{ m_axi_my_debug_array_ARQOS sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_ARREGION sc_out sc_lv 4 signal 5 } 
	{ m_axi_my_debug_array_ARUSER sc_out sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_RVALID sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_RREADY sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_RDATA sc_in sc_lv 32 signal 5 } 
	{ m_axi_my_debug_array_RLAST sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_RID sc_in sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_RUSER sc_in sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_RRESP sc_in sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_BVALID sc_in sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_BREADY sc_out sc_logic 1 signal 5 } 
	{ m_axi_my_debug_array_BRESP sc_in sc_lv 2 signal 5 } 
	{ m_axi_my_debug_array_BID sc_in sc_lv 1 signal 5 } 
	{ m_axi_my_debug_array_BUSER sc_in sc_lv 1 signal 5 } 
	{ s_axi_ctrl_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_ctrl_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_ctrl_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_ctrl_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_ctrl_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_ctrl_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_ctrl_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_ctrl_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_ctrl_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_param_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_param_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_param_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_param_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_param_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_param_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_BRESP sc_out sc_lv 2 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_ctrl_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl", "role": "AWADDR" },"address":[{"name":"batch_align2D_region","role":"start","value":"0","valid_bit":"0"},{"name":"batch_align2D_region","role":"continue","value":"0","valid_bit":"4"},{"name":"batch_align2D_region","role":"auto_start","value":"0","valid_bit":"7"},{"name":"myRegion_data_ptr","role":"data","value":"16"},{"name":"myRegion_fcoord_ptr","role":"data","value":"24"},{"name":"my_ref_patch_with_border_ptr","role":"data","value":"32"},{"name":"my_cur_px_estimate_ptr","role":"data","value":"40"},{"name":"my_inv_out","role":"data","value":"48"},{"name":"my_debug_array_ptr","role":"data","value":"56"}] },
	{ "name": "s_axi_ctrl_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "AWVALID" } },
	{ "name": "s_axi_ctrl_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "AWREADY" } },
	{ "name": "s_axi_ctrl_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "WVALID" } },
	{ "name": "s_axi_ctrl_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "WREADY" } },
	{ "name": "s_axi_ctrl_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctrl", "role": "WDATA" } },
	{ "name": "s_axi_ctrl_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctrl", "role": "WSTRB" } },
	{ "name": "s_axi_ctrl_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl", "role": "ARADDR" },"address":[{"name":"batch_align2D_region","role":"start","value":"0","valid_bit":"0"},{"name":"batch_align2D_region","role":"done","value":"0","valid_bit":"1"},{"name":"batch_align2D_region","role":"idle","value":"0","valid_bit":"2"},{"name":"batch_align2D_region","role":"ready","value":"0","valid_bit":"3"},{"name":"batch_align2D_region","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_ctrl_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "ARVALID" } },
	{ "name": "s_axi_ctrl_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "ARREADY" } },
	{ "name": "s_axi_ctrl_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "RVALID" } },
	{ "name": "s_axi_ctrl_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "RREADY" } },
	{ "name": "s_axi_ctrl_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctrl", "role": "RDATA" } },
	{ "name": "s_axi_ctrl_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ctrl", "role": "RRESP" } },
	{ "name": "s_axi_ctrl_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "BVALID" } },
	{ "name": "s_axi_ctrl_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "BREADY" } },
	{ "name": "s_axi_ctrl_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "ctrl", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "interrupt" } },
	{ "name": "s_axi_param_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "param", "role": "AWADDR" },"address":[{"name":"n_iter","role":"data","value":"28"}] },
	{ "name": "s_axi_param_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "AWVALID" } },
	{ "name": "s_axi_param_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "AWREADY" } },
	{ "name": "s_axi_param_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "WVALID" } },
	{ "name": "s_axi_param_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "WREADY" } },
	{ "name": "s_axi_param_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "param", "role": "WDATA" } },
	{ "name": "s_axi_param_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "param", "role": "WSTRB" } },
	{ "name": "s_axi_param_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "param", "role": "ARADDR" },"address":[{"name":"my_converged","role":"data","value":"16"}, {"name":"my_converged","role":"valid","value":"24","valid_bit":"0"}] },
	{ "name": "s_axi_param_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "ARVALID" } },
	{ "name": "s_axi_param_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "ARREADY" } },
	{ "name": "s_axi_param_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "RVALID" } },
	{ "name": "s_axi_param_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "RREADY" } },
	{ "name": "s_axi_param_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "param", "role": "RDATA" } },
	{ "name": "s_axi_param_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "param", "role": "RRESP" } },
	{ "name": "s_axi_param_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "BVALID" } },
	{ "name": "s_axi_param_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "BREADY" } },
	{ "name": "s_axi_param_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "param", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_my_region_data_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_region_data_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_region_data_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_region_data_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWID" }} , 
 	{ "name": "m_axi_my_region_data_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_region_data_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_region_data_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_region_data_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_region_data_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_region_data_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_region_data_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_region_data_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_region_data_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_region_data_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_region_data_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_region_data_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_data", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_region_data_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_region_data_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_region_data_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "WID" }} , 
 	{ "name": "m_axi_my_region_data_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_region_data_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_region_data_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_region_data_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_region_data_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARID" }} , 
 	{ "name": "m_axi_my_region_data_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_region_data_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_region_data_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_region_data_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_region_data_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_region_data_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_region_data_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_region_data_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_region_data_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_region_data_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_region_data_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_region_data_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_data", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_region_data_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_region_data_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "RID" }} , 
 	{ "name": "m_axi_my_region_data_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_region_data_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_region_data_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_region_data_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_region_data_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_data", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_region_data_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "BID" }} , 
 	{ "name": "m_axi_my_region_data_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_data", "role": "BUSER" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWID" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_region_fcoord_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_region_fcoord_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_region_fcoord_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_region_fcoord_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_region_fcoord_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_region_fcoord_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_region_fcoord_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WID" }} , 
 	{ "name": "m_axi_my_region_fcoord_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARID" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_region_fcoord_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_region_fcoord_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_region_fcoord_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_region_fcoord_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_region_fcoord_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_region_fcoord_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RID" }} , 
 	{ "name": "m_axi_my_region_fcoord_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_region_fcoord_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_region_fcoord_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_region_fcoord_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_region_fcoord_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_region_fcoord_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "BID" }} , 
 	{ "name": "m_axi_my_region_fcoord_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_region_fcoord", "role": "BUSER" }} , 
 	{ "name": "m_axi_my_patches_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_patches_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_patches_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_patches", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_patches_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "AWID" }} , 
 	{ "name": "m_axi_my_patches_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_patches", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_patches_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_patches", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_patches_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_patches_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_patches_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_patches_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_patches", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_patches_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_patches_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_patches_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_patches_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_patches_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_patches_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_patches", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_patches_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_patches_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_patches_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "WID" }} , 
 	{ "name": "m_axi_my_patches_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_patches_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_patches_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_patches_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_patches", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_patches_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "ARID" }} , 
 	{ "name": "m_axi_my_patches_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_patches", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_patches_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_patches", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_patches_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_patches_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_patches_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_patches_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_patches", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_patches_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_patches_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_patches", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_patches_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_patches_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_patches_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_patches_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_patches", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_patches_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_patches_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "RID" }} , 
 	{ "name": "m_axi_my_patches_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_patches_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_patches_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_patches_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_patches_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_patches", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_patches_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "BID" }} , 
 	{ "name": "m_axi_my_patches_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_patches", "role": "BUSER" }} , 
 	{ "name": "m_axi_my_pos_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_pos_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_pos_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_pos", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_pos_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "AWID" }} , 
 	{ "name": "m_axi_my_pos_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_pos", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_pos_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_pos", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_pos_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_pos_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_pos_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_pos_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_pos", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_pos_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_pos_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_pos_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_pos_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_pos_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_pos_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_pos", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_pos_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_pos_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_pos_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "WID" }} , 
 	{ "name": "m_axi_my_pos_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_pos_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_pos_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_pos_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_pos", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_pos_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "ARID" }} , 
 	{ "name": "m_axi_my_pos_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_pos", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_pos_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_pos", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_pos_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_pos_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_pos_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_pos_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_pos", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_pos_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_pos_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_pos", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_pos_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_pos_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_pos_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_pos_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_pos", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_pos_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_pos_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "RID" }} , 
 	{ "name": "m_axi_my_pos_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_pos_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_pos_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_pos_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_pos_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_pos", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_pos_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "BID" }} , 
 	{ "name": "m_axi_my_pos_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_pos", "role": "BUSER" }} , 
 	{ "name": "m_axi_my_debug_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_debug_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_debug_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_debug_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "AWID" }} , 
 	{ "name": "m_axi_my_debug_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_debug", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_debug_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_debug_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_debug_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_debug_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_debug_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_debug_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_debug_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_debug_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_debug_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_debug_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_debug_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_debug_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_debug_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_debug_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "WID" }} , 
 	{ "name": "m_axi_my_debug_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_debug_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_debug_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_debug_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_debug_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "ARID" }} , 
 	{ "name": "m_axi_my_debug_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_debug", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_debug_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_debug_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_debug_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_debug_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_debug_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_debug_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_debug_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_debug_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_debug_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_debug_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_debug_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_debug_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_debug_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "RID" }} , 
 	{ "name": "m_axi_my_debug_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_debug_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_debug_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_debug_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_debug_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_debug_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "BID" }} , 
 	{ "name": "m_axi_my_debug_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "BUSER" }} , 
 	{ "name": "m_axi_my_debug_array_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWVALID" }} , 
 	{ "name": "m_axi_my_debug_array_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWREADY" }} , 
 	{ "name": "m_axi_my_debug_array_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWADDR" }} , 
 	{ "name": "m_axi_my_debug_array_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWID" }} , 
 	{ "name": "m_axi_my_debug_array_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWLEN" }} , 
 	{ "name": "m_axi_my_debug_array_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_my_debug_array_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWBURST" }} , 
 	{ "name": "m_axi_my_debug_array_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_my_debug_array_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_my_debug_array_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWPROT" }} , 
 	{ "name": "m_axi_my_debug_array_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWQOS" }} , 
 	{ "name": "m_axi_my_debug_array_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWREGION" }} , 
 	{ "name": "m_axi_my_debug_array_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "AWUSER" }} , 
 	{ "name": "m_axi_my_debug_array_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WVALID" }} , 
 	{ "name": "m_axi_my_debug_array_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WREADY" }} , 
 	{ "name": "m_axi_my_debug_array_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WDATA" }} , 
 	{ "name": "m_axi_my_debug_array_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WSTRB" }} , 
 	{ "name": "m_axi_my_debug_array_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WLAST" }} , 
 	{ "name": "m_axi_my_debug_array_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WID" }} , 
 	{ "name": "m_axi_my_debug_array_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "WUSER" }} , 
 	{ "name": "m_axi_my_debug_array_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARVALID" }} , 
 	{ "name": "m_axi_my_debug_array_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARREADY" }} , 
 	{ "name": "m_axi_my_debug_array_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARADDR" }} , 
 	{ "name": "m_axi_my_debug_array_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARID" }} , 
 	{ "name": "m_axi_my_debug_array_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARLEN" }} , 
 	{ "name": "m_axi_my_debug_array_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_my_debug_array_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARBURST" }} , 
 	{ "name": "m_axi_my_debug_array_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_my_debug_array_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_my_debug_array_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARPROT" }} , 
 	{ "name": "m_axi_my_debug_array_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARQOS" }} , 
 	{ "name": "m_axi_my_debug_array_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARREGION" }} , 
 	{ "name": "m_axi_my_debug_array_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "ARUSER" }} , 
 	{ "name": "m_axi_my_debug_array_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RVALID" }} , 
 	{ "name": "m_axi_my_debug_array_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RREADY" }} , 
 	{ "name": "m_axi_my_debug_array_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RDATA" }} , 
 	{ "name": "m_axi_my_debug_array_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RLAST" }} , 
 	{ "name": "m_axi_my_debug_array_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RID" }} , 
 	{ "name": "m_axi_my_debug_array_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RUSER" }} , 
 	{ "name": "m_axi_my_debug_array_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "RRESP" }} , 
 	{ "name": "m_axi_my_debug_array_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "BVALID" }} , 
 	{ "name": "m_axi_my_debug_array_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "BREADY" }} , 
 	{ "name": "m_axi_my_debug_array_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "my_debug_array", "role": "BRESP" }} , 
 	{ "name": "m_axi_my_debug_array_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "BID" }} , 
 	{ "name": "m_axi_my_debug_array_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug_array", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "25", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84"],
		"CDFG" : "batch_align2D_region",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41660", "EstimateLatencyMax" : "57244",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state124", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state385", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state646", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state907", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state1168", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state1429", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state1690", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state1951", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10386"},
			{"State" : "ap_ST_fsm_state124", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state385", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state646", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state907", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state1168", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state1429", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state1690", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"},
			{"State" : "ap_ST_fsm_state1951", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_floor_float_s_fu_10394"}],
		"Port" : [
			{"Name" : "my_region_data", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "my_region_data_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "my_region_data_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "my_region_fcoord", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "my_region_fcoord_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "my_region_fcoord_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "my_patches", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "my_patches_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "my_patches_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "my_pos", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "my_pos_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "my_pos_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "my_pos_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "my_pos_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "my_pos_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "my_debug", "Type" : "MAXI", "Direction" : "I"},
			{"Name" : "my_debug_array", "Type" : "MAXI", "Direction" : "I"},
			{"Name" : "myRegion_data_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "myRegion_fcoord_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_ref_patch_with_border_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_cur_px_estimate_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_converged", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "n_iter", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_inv_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_debug_array_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "pyr_region_fcoord_0_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_1_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_2_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_3_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_4_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_5_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_6_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_7_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_generic_floor_float_s_fu_10386", "Port" : "mask_table1"},
					{"ID" : "25", "SubInstance" : "grp_generic_floor_float_s_fu_10394", "Port" : "mask_table1"}]},
			{"Name" : "pyr_region_data_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_4_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_4_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_4_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_5_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_5_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_5_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_6_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_6_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_6_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_7_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_7_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_7_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pyr_region_data_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_7_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_6_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_4_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_3_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_4_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_5_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_6_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_ctrl_s_axi_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_param_s_axi_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_region_data_m_axi_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_region_fcoord_m_axi_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_patches_m_axi_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_pos_m_axi_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_generic_floor_float_s_fu_10386", "Parent" : "0", "Child" : ["24"],
		"CDFG" : "generic_floor_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_floor_float_s_fu_10386.mask_table1_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_generic_floor_float_s_fu_10394", "Parent" : "0", "Child" : ["26"],
		"CDFG" : "generic_floor_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_floor_float_s_fu_10394.mask_table1_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptosi_float_i_fu_10416", "Parent" : "0",
		"CDFG" : "p_hls_fptosi_float_i",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptosi_float_i_fu_10421", "Parent" : "0",
		"CDFG" : "p_hls_fptosi_float_i",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptoui_float_i_fu_10426", "Parent" : "0",
		"CDFG" : "p_hls_fptoui_float_i",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_p_hls_fptoui_float_i_fu_10431", "Parent" : "0",
		"CDFG" : "p_hls_fptoui_float_i",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U5", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U6", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U7", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U8", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fsub_32ns_32ns_32_7_full_dsp_1_U9", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U10", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U11", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U12", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U13", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U14", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U15", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U16", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U17", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U18", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U19", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U20", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U21", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_sitofp_32s_32_6_1_U22", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_sitofp_32ns_32_6_1_U23", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fptrunc_64ns_32_1_1_U24", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fptrunc_64ns_32_1_1_U25", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fptrunc_64ns_32_1_1_U26", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fpext_32ns_64_1_1_U27", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fpext_32ns_64_1_1_U28", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U29", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U30", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U31", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U32", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U33", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U34", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U35", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U36", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U38", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U40", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U42", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U43", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U44", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U45", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U46", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U47", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U48", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U49", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U50", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U51", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U52", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U53", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U54", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U55", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U56", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U57", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_32_32_1_1_U58", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	batch_align2D_region {
		my_region_data {Type I LastRead 9 FirstWrite -1}
		my_region_fcoord {Type I LastRead 17 FirstWrite -1}
		my_patches {Type I LastRead 27 FirstWrite -1}
		my_pos {Type IO LastRead 1021 FirstWrite 1021}
		my_debug {Type I LastRead -1 FirstWrite -1}
		my_debug_array {Type I LastRead -1 FirstWrite -1}
		myRegion_data_ptr {Type I LastRead 0 FirstWrite -1}
		myRegion_fcoord_ptr {Type I LastRead 0 FirstWrite -1}
		my_ref_patch_with_border_ptr {Type I LastRead 0 FirstWrite -1}
		my_cur_px_estimate_ptr {Type I LastRead 0 FirstWrite -1}
		my_converged {Type O LastRead -1 FirstWrite 35}
		n_iter {Type I LastRead -1 FirstWrite -1}
		my_inv_out {Type I LastRead -1 FirstWrite -1}
		my_debug_array_ptr {Type I LastRead -1 FirstWrite -1}
		pyr_region_fcoord_0_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_1_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_2_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_3_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_4_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_5_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_6_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_7_s {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_0_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_7 {Type IO LastRead -1 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		pyr_region_data_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_1_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_6 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_2_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_5 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_2 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_3_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_4 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_3 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_4_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_4_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_4_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_3 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_4 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_5_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_5_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_5_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_2 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_5 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_6_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_6_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_6_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_6 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_7_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_7_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_7_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_7 {Type IO LastRead -1 FirstWrite -1}}
	generic_floor_float_s {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	generic_floor_float_s {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	p_hls_fptosi_float_i {
		x {Type I LastRead 0 FirstWrite -1}}
	p_hls_fptosi_float_i {
		x {Type I LastRead 0 FirstWrite -1}}
	p_hls_fptoui_float_i {
		x {Type I LastRead 0 FirstWrite -1}}
	p_hls_fptoui_float_i {
		x {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "41660", "Max" : "57244"}
	, {"Name" : "Interval", "Min" : "41661", "Max" : "57245"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "9", "EnableSignal" : "ap_enable_pp9"}
	{"Pipeline" : "10", "EnableSignal" : "ap_enable_pp10"}
	{"Pipeline" : "11", "EnableSignal" : "ap_enable_pp11"}
	{"Pipeline" : "12", "EnableSignal" : "ap_enable_pp12"}
	{"Pipeline" : "13", "EnableSignal" : "ap_enable_pp13"}
	{"Pipeline" : "14", "EnableSignal" : "ap_enable_pp14"}
	{"Pipeline" : "15", "EnableSignal" : "ap_enable_pp15"}
	{"Pipeline" : "16", "EnableSignal" : "ap_enable_pp16"}
	{"Pipeline" : "17", "EnableSignal" : "ap_enable_pp17"}
	{"Pipeline" : "18", "EnableSignal" : "ap_enable_pp18"}
	{"Pipeline" : "19", "EnableSignal" : "ap_enable_pp19"}
	{"Pipeline" : "20", "EnableSignal" : "ap_enable_pp20"}
]}

set Spec2ImplPortList { 
	my_region_data { m_axi {  { m_axi_my_region_data_AWVALID VALID 1 1 }  { m_axi_my_region_data_AWREADY READY 0 1 }  { m_axi_my_region_data_AWADDR ADDR 1 32 }  { m_axi_my_region_data_AWID ID 1 1 }  { m_axi_my_region_data_AWLEN LEN 1 8 }  { m_axi_my_region_data_AWSIZE SIZE 1 3 }  { m_axi_my_region_data_AWBURST BURST 1 2 }  { m_axi_my_region_data_AWLOCK LOCK 1 2 }  { m_axi_my_region_data_AWCACHE CACHE 1 4 }  { m_axi_my_region_data_AWPROT PROT 1 3 }  { m_axi_my_region_data_AWQOS QOS 1 4 }  { m_axi_my_region_data_AWREGION REGION 1 4 }  { m_axi_my_region_data_AWUSER USER 1 1 }  { m_axi_my_region_data_WVALID VALID 1 1 }  { m_axi_my_region_data_WREADY READY 0 1 }  { m_axi_my_region_data_WDATA DATA 1 32 }  { m_axi_my_region_data_WSTRB STRB 1 4 }  { m_axi_my_region_data_WLAST LAST 1 1 }  { m_axi_my_region_data_WID ID 1 1 }  { m_axi_my_region_data_WUSER USER 1 1 }  { m_axi_my_region_data_ARVALID VALID 1 1 }  { m_axi_my_region_data_ARREADY READY 0 1 }  { m_axi_my_region_data_ARADDR ADDR 1 32 }  { m_axi_my_region_data_ARID ID 1 1 }  { m_axi_my_region_data_ARLEN LEN 1 8 }  { m_axi_my_region_data_ARSIZE SIZE 1 3 }  { m_axi_my_region_data_ARBURST BURST 1 2 }  { m_axi_my_region_data_ARLOCK LOCK 1 2 }  { m_axi_my_region_data_ARCACHE CACHE 1 4 }  { m_axi_my_region_data_ARPROT PROT 1 3 }  { m_axi_my_region_data_ARQOS QOS 1 4 }  { m_axi_my_region_data_ARREGION REGION 1 4 }  { m_axi_my_region_data_ARUSER USER 1 1 }  { m_axi_my_region_data_RVALID VALID 0 1 }  { m_axi_my_region_data_RREADY READY 1 1 }  { m_axi_my_region_data_RDATA DATA 0 32 }  { m_axi_my_region_data_RLAST LAST 0 1 }  { m_axi_my_region_data_RID ID 0 1 }  { m_axi_my_region_data_RUSER USER 0 1 }  { m_axi_my_region_data_RRESP RESP 0 2 }  { m_axi_my_region_data_BVALID VALID 0 1 }  { m_axi_my_region_data_BREADY READY 1 1 }  { m_axi_my_region_data_BRESP RESP 0 2 }  { m_axi_my_region_data_BID ID 0 1 }  { m_axi_my_region_data_BUSER USER 0 1 } } }
	my_region_fcoord { m_axi {  { m_axi_my_region_fcoord_AWVALID VALID 1 1 }  { m_axi_my_region_fcoord_AWREADY READY 0 1 }  { m_axi_my_region_fcoord_AWADDR ADDR 1 32 }  { m_axi_my_region_fcoord_AWID ID 1 1 }  { m_axi_my_region_fcoord_AWLEN LEN 1 8 }  { m_axi_my_region_fcoord_AWSIZE SIZE 1 3 }  { m_axi_my_region_fcoord_AWBURST BURST 1 2 }  { m_axi_my_region_fcoord_AWLOCK LOCK 1 2 }  { m_axi_my_region_fcoord_AWCACHE CACHE 1 4 }  { m_axi_my_region_fcoord_AWPROT PROT 1 3 }  { m_axi_my_region_fcoord_AWQOS QOS 1 4 }  { m_axi_my_region_fcoord_AWREGION REGION 1 4 }  { m_axi_my_region_fcoord_AWUSER USER 1 1 }  { m_axi_my_region_fcoord_WVALID VALID 1 1 }  { m_axi_my_region_fcoord_WREADY READY 0 1 }  { m_axi_my_region_fcoord_WDATA DATA 1 32 }  { m_axi_my_region_fcoord_WSTRB STRB 1 4 }  { m_axi_my_region_fcoord_WLAST LAST 1 1 }  { m_axi_my_region_fcoord_WID ID 1 1 }  { m_axi_my_region_fcoord_WUSER USER 1 1 }  { m_axi_my_region_fcoord_ARVALID VALID 1 1 }  { m_axi_my_region_fcoord_ARREADY READY 0 1 }  { m_axi_my_region_fcoord_ARADDR ADDR 1 32 }  { m_axi_my_region_fcoord_ARID ID 1 1 }  { m_axi_my_region_fcoord_ARLEN LEN 1 8 }  { m_axi_my_region_fcoord_ARSIZE SIZE 1 3 }  { m_axi_my_region_fcoord_ARBURST BURST 1 2 }  { m_axi_my_region_fcoord_ARLOCK LOCK 1 2 }  { m_axi_my_region_fcoord_ARCACHE CACHE 1 4 }  { m_axi_my_region_fcoord_ARPROT PROT 1 3 }  { m_axi_my_region_fcoord_ARQOS QOS 1 4 }  { m_axi_my_region_fcoord_ARREGION REGION 1 4 }  { m_axi_my_region_fcoord_ARUSER USER 1 1 }  { m_axi_my_region_fcoord_RVALID VALID 0 1 }  { m_axi_my_region_fcoord_RREADY READY 1 1 }  { m_axi_my_region_fcoord_RDATA DATA 0 32 }  { m_axi_my_region_fcoord_RLAST LAST 0 1 }  { m_axi_my_region_fcoord_RID ID 0 1 }  { m_axi_my_region_fcoord_RUSER USER 0 1 }  { m_axi_my_region_fcoord_RRESP RESP 0 2 }  { m_axi_my_region_fcoord_BVALID VALID 0 1 }  { m_axi_my_region_fcoord_BREADY READY 1 1 }  { m_axi_my_region_fcoord_BRESP RESP 0 2 }  { m_axi_my_region_fcoord_BID ID 0 1 }  { m_axi_my_region_fcoord_BUSER USER 0 1 } } }
	my_patches { m_axi {  { m_axi_my_patches_AWVALID VALID 1 1 }  { m_axi_my_patches_AWREADY READY 0 1 }  { m_axi_my_patches_AWADDR ADDR 1 32 }  { m_axi_my_patches_AWID ID 1 1 }  { m_axi_my_patches_AWLEN LEN 1 8 }  { m_axi_my_patches_AWSIZE SIZE 1 3 }  { m_axi_my_patches_AWBURST BURST 1 2 }  { m_axi_my_patches_AWLOCK LOCK 1 2 }  { m_axi_my_patches_AWCACHE CACHE 1 4 }  { m_axi_my_patches_AWPROT PROT 1 3 }  { m_axi_my_patches_AWQOS QOS 1 4 }  { m_axi_my_patches_AWREGION REGION 1 4 }  { m_axi_my_patches_AWUSER USER 1 1 }  { m_axi_my_patches_WVALID VALID 1 1 }  { m_axi_my_patches_WREADY READY 0 1 }  { m_axi_my_patches_WDATA DATA 1 32 }  { m_axi_my_patches_WSTRB STRB 1 4 }  { m_axi_my_patches_WLAST LAST 1 1 }  { m_axi_my_patches_WID ID 1 1 }  { m_axi_my_patches_WUSER USER 1 1 }  { m_axi_my_patches_ARVALID VALID 1 1 }  { m_axi_my_patches_ARREADY READY 0 1 }  { m_axi_my_patches_ARADDR ADDR 1 32 }  { m_axi_my_patches_ARID ID 1 1 }  { m_axi_my_patches_ARLEN LEN 1 8 }  { m_axi_my_patches_ARSIZE SIZE 1 3 }  { m_axi_my_patches_ARBURST BURST 1 2 }  { m_axi_my_patches_ARLOCK LOCK 1 2 }  { m_axi_my_patches_ARCACHE CACHE 1 4 }  { m_axi_my_patches_ARPROT PROT 1 3 }  { m_axi_my_patches_ARQOS QOS 1 4 }  { m_axi_my_patches_ARREGION REGION 1 4 }  { m_axi_my_patches_ARUSER USER 1 1 }  { m_axi_my_patches_RVALID VALID 0 1 }  { m_axi_my_patches_RREADY READY 1 1 }  { m_axi_my_patches_RDATA DATA 0 32 }  { m_axi_my_patches_RLAST LAST 0 1 }  { m_axi_my_patches_RID ID 0 1 }  { m_axi_my_patches_RUSER USER 0 1 }  { m_axi_my_patches_RRESP RESP 0 2 }  { m_axi_my_patches_BVALID VALID 0 1 }  { m_axi_my_patches_BREADY READY 1 1 }  { m_axi_my_patches_BRESP RESP 0 2 }  { m_axi_my_patches_BID ID 0 1 }  { m_axi_my_patches_BUSER USER 0 1 } } }
	my_pos { m_axi {  { m_axi_my_pos_AWVALID VALID 1 1 }  { m_axi_my_pos_AWREADY READY 0 1 }  { m_axi_my_pos_AWADDR ADDR 1 32 }  { m_axi_my_pos_AWID ID 1 1 }  { m_axi_my_pos_AWLEN LEN 1 8 }  { m_axi_my_pos_AWSIZE SIZE 1 3 }  { m_axi_my_pos_AWBURST BURST 1 2 }  { m_axi_my_pos_AWLOCK LOCK 1 2 }  { m_axi_my_pos_AWCACHE CACHE 1 4 }  { m_axi_my_pos_AWPROT PROT 1 3 }  { m_axi_my_pos_AWQOS QOS 1 4 }  { m_axi_my_pos_AWREGION REGION 1 4 }  { m_axi_my_pos_AWUSER USER 1 1 }  { m_axi_my_pos_WVALID VALID 1 1 }  { m_axi_my_pos_WREADY READY 0 1 }  { m_axi_my_pos_WDATA DATA 1 32 }  { m_axi_my_pos_WSTRB STRB 1 4 }  { m_axi_my_pos_WLAST LAST 1 1 }  { m_axi_my_pos_WID ID 1 1 }  { m_axi_my_pos_WUSER USER 1 1 }  { m_axi_my_pos_ARVALID VALID 1 1 }  { m_axi_my_pos_ARREADY READY 0 1 }  { m_axi_my_pos_ARADDR ADDR 1 32 }  { m_axi_my_pos_ARID ID 1 1 }  { m_axi_my_pos_ARLEN LEN 1 8 }  { m_axi_my_pos_ARSIZE SIZE 1 3 }  { m_axi_my_pos_ARBURST BURST 1 2 }  { m_axi_my_pos_ARLOCK LOCK 1 2 }  { m_axi_my_pos_ARCACHE CACHE 1 4 }  { m_axi_my_pos_ARPROT PROT 1 3 }  { m_axi_my_pos_ARQOS QOS 1 4 }  { m_axi_my_pos_ARREGION REGION 1 4 }  { m_axi_my_pos_ARUSER USER 1 1 }  { m_axi_my_pos_RVALID VALID 0 1 }  { m_axi_my_pos_RREADY READY 1 1 }  { m_axi_my_pos_RDATA DATA 0 32 }  { m_axi_my_pos_RLAST LAST 0 1 }  { m_axi_my_pos_RID ID 0 1 }  { m_axi_my_pos_RUSER USER 0 1 }  { m_axi_my_pos_RRESP RESP 0 2 }  { m_axi_my_pos_BVALID VALID 0 1 }  { m_axi_my_pos_BREADY READY 1 1 }  { m_axi_my_pos_BRESP RESP 0 2 }  { m_axi_my_pos_BID ID 0 1 }  { m_axi_my_pos_BUSER USER 0 1 } } }
	my_debug { m_axi {  { m_axi_my_debug_AWVALID VALID 1 1 }  { m_axi_my_debug_AWREADY READY 0 1 }  { m_axi_my_debug_AWADDR ADDR 1 32 }  { m_axi_my_debug_AWID ID 1 1 }  { m_axi_my_debug_AWLEN LEN 1 8 }  { m_axi_my_debug_AWSIZE SIZE 1 3 }  { m_axi_my_debug_AWBURST BURST 1 2 }  { m_axi_my_debug_AWLOCK LOCK 1 2 }  { m_axi_my_debug_AWCACHE CACHE 1 4 }  { m_axi_my_debug_AWPROT PROT 1 3 }  { m_axi_my_debug_AWQOS QOS 1 4 }  { m_axi_my_debug_AWREGION REGION 1 4 }  { m_axi_my_debug_AWUSER USER 1 1 }  { m_axi_my_debug_WVALID VALID 1 1 }  { m_axi_my_debug_WREADY READY 0 1 }  { m_axi_my_debug_WDATA DATA 1 32 }  { m_axi_my_debug_WSTRB STRB 1 4 }  { m_axi_my_debug_WLAST LAST 1 1 }  { m_axi_my_debug_WID ID 1 1 }  { m_axi_my_debug_WUSER USER 1 1 }  { m_axi_my_debug_ARVALID VALID 1 1 }  { m_axi_my_debug_ARREADY READY 0 1 }  { m_axi_my_debug_ARADDR ADDR 1 32 }  { m_axi_my_debug_ARID ID 1 1 }  { m_axi_my_debug_ARLEN LEN 1 8 }  { m_axi_my_debug_ARSIZE SIZE 1 3 }  { m_axi_my_debug_ARBURST BURST 1 2 }  { m_axi_my_debug_ARLOCK LOCK 1 2 }  { m_axi_my_debug_ARCACHE CACHE 1 4 }  { m_axi_my_debug_ARPROT PROT 1 3 }  { m_axi_my_debug_ARQOS QOS 1 4 }  { m_axi_my_debug_ARREGION REGION 1 4 }  { m_axi_my_debug_ARUSER USER 1 1 }  { m_axi_my_debug_RVALID VALID 0 1 }  { m_axi_my_debug_RREADY READY 1 1 }  { m_axi_my_debug_RDATA DATA 0 32 }  { m_axi_my_debug_RLAST LAST 0 1 }  { m_axi_my_debug_RID ID 0 1 }  { m_axi_my_debug_RUSER USER 0 1 }  { m_axi_my_debug_RRESP RESP 0 2 }  { m_axi_my_debug_BVALID VALID 0 1 }  { m_axi_my_debug_BREADY READY 1 1 }  { m_axi_my_debug_BRESP RESP 0 2 }  { m_axi_my_debug_BID ID 0 1 }  { m_axi_my_debug_BUSER USER 0 1 } } }
	my_debug_array { m_axi {  { m_axi_my_debug_array_AWVALID VALID 1 1 }  { m_axi_my_debug_array_AWREADY READY 0 1 }  { m_axi_my_debug_array_AWADDR ADDR 1 32 }  { m_axi_my_debug_array_AWID ID 1 1 }  { m_axi_my_debug_array_AWLEN LEN 1 8 }  { m_axi_my_debug_array_AWSIZE SIZE 1 3 }  { m_axi_my_debug_array_AWBURST BURST 1 2 }  { m_axi_my_debug_array_AWLOCK LOCK 1 2 }  { m_axi_my_debug_array_AWCACHE CACHE 1 4 }  { m_axi_my_debug_array_AWPROT PROT 1 3 }  { m_axi_my_debug_array_AWQOS QOS 1 4 }  { m_axi_my_debug_array_AWREGION REGION 1 4 }  { m_axi_my_debug_array_AWUSER USER 1 1 }  { m_axi_my_debug_array_WVALID VALID 1 1 }  { m_axi_my_debug_array_WREADY READY 0 1 }  { m_axi_my_debug_array_WDATA DATA 1 32 }  { m_axi_my_debug_array_WSTRB STRB 1 4 }  { m_axi_my_debug_array_WLAST LAST 1 1 }  { m_axi_my_debug_array_WID ID 1 1 }  { m_axi_my_debug_array_WUSER USER 1 1 }  { m_axi_my_debug_array_ARVALID VALID 1 1 }  { m_axi_my_debug_array_ARREADY READY 0 1 }  { m_axi_my_debug_array_ARADDR ADDR 1 32 }  { m_axi_my_debug_array_ARID ID 1 1 }  { m_axi_my_debug_array_ARLEN LEN 1 8 }  { m_axi_my_debug_array_ARSIZE SIZE 1 3 }  { m_axi_my_debug_array_ARBURST BURST 1 2 }  { m_axi_my_debug_array_ARLOCK LOCK 1 2 }  { m_axi_my_debug_array_ARCACHE CACHE 1 4 }  { m_axi_my_debug_array_ARPROT PROT 1 3 }  { m_axi_my_debug_array_ARQOS QOS 1 4 }  { m_axi_my_debug_array_ARREGION REGION 1 4 }  { m_axi_my_debug_array_ARUSER USER 1 1 }  { m_axi_my_debug_array_RVALID VALID 0 1 }  { m_axi_my_debug_array_RREADY READY 1 1 }  { m_axi_my_debug_array_RDATA DATA 0 32 }  { m_axi_my_debug_array_RLAST LAST 0 1 }  { m_axi_my_debug_array_RID ID 0 1 }  { m_axi_my_debug_array_RUSER USER 0 1 }  { m_axi_my_debug_array_RRESP RESP 0 2 }  { m_axi_my_debug_array_BVALID VALID 0 1 }  { m_axi_my_debug_array_BREADY READY 1 1 }  { m_axi_my_debug_array_BRESP RESP 0 2 }  { m_axi_my_debug_array_BID ID 0 1 }  { m_axi_my_debug_array_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ my_region_data { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_region_fcoord { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_patches { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_pos { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_debug { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_debug_array { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ my_region_data 1 }
	{ my_region_fcoord 1 }
	{ my_patches 1 }
	{ my_pos 1 }
	{ my_debug 1 }
	{ my_debug_array 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ my_region_data 1 }
	{ my_region_fcoord 1 }
	{ my_patches 1 }
	{ my_pos 1 }
	{ my_debug 1 }
	{ my_debug_array 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
