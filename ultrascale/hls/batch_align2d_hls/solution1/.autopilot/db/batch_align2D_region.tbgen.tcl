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
	{ myRegion_data_ptr int 32 regular {axi_slave 0}  }
	{ myRegion_fcoord_ptr int 32 regular {axi_slave 0}  }
	{ my_ref_patch_with_border_ptr int 32 regular {axi_slave 0}  }
	{ my_cur_px_estimate_ptr int 32 regular {axi_slave 0}  }
	{ my_converged int 64 regular {axi_slave 1}  }
	{ n_iter int 32 unused {axi_slave 0}  }
	{ my_inv_out int 32 unused {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "my_region_data", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "myRegion_data_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "myRegion_data_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 63,"step" : 1}]}]}]} , 
 	{ "Name" : "my_region_fcoord", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "myRegion_fcoord_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "myRegion_fcoord_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "my_patches", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "my_ref_patch_with_border_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "my_ref_patch_with_border_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "my_pos", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "my_cur_px_estimate_ptr","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "my_cur_px_estimate_ptr","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "my_debug", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "my_inv_out","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "my_inv_out","bundle": "AXILiteS"},"cArray": [{"low" : 0,"up" : 8,"step" : 1}]}]}]} , 
 	{ "Name" : "myRegion_data_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "myRegion_fcoord_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "my_ref_patch_with_border_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "my_cur_px_estimate_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "my_converged", "interface" : "axi_slave", "bundle":"param","type":"ap_vld","bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "my_converged","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : {"out":16}, "offset_end" : {"out":27}} , 
 	{ "Name" : "n_iter", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "n_iter","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":28}, "offset_end" : {"in":35}} , 
 	{ "Name" : "my_inv_out", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} ]}
# RTL Port declarations: 
set portNum 262
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
	{ "name": "s_axi_ctrl_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl", "role": "AWADDR" },"address":[{"name":"batch_align2D_region","role":"start","value":"0","valid_bit":"0"},{"name":"batch_align2D_region","role":"continue","value":"0","valid_bit":"4"},{"name":"batch_align2D_region","role":"auto_start","value":"0","valid_bit":"7"},{"name":"myRegion_data_ptr","role":"data","value":"16"},{"name":"myRegion_fcoord_ptr","role":"data","value":"24"},{"name":"my_ref_patch_with_border_ptr","role":"data","value":"32"},{"name":"my_cur_px_estimate_ptr","role":"data","value":"40"},{"name":"my_inv_out","role":"data","value":"48"}] },
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
 	{ "name": "m_axi_my_debug_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "my_debug", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "98", "141", "184", "227", "270", "313", "356", "399", "442", "485", "528", "571", "614", "657", "700", "743", "786", "829", "872", "915", "958", "1001", "1044", "1087", "1088", "1089", "1090", "1091", "1092", "1093", "1094", "1095", "1096", "1097", "1098", "1099", "1100", "1101", "1102", "1103", "1104", "1105"],
		"CDFG" : "batch_align2D_region",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "102738", "EstimateLatencyMax" : "107039",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_21504"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_21655"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_21806"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_21957"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22108"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22259"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22410"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22561"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22712"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_22863"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23014"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23165"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23316"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23467"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23618"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23769"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_23920"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24071"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24222"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24373"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24524"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24675"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24826"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gauss_newton_optim_r_fu_24977"}],
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
			{"Name" : "myRegion_data_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "myRegion_fcoord_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_ref_patch_with_border_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_cur_px_estimate_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_converged", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "n_iter", "Type" : "None", "Direction" : "I"},
			{"Name" : "my_inv_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "pyr_region_fcoord_0_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "528", "SubInstance" : "grp_gauss_newton_optim_r_fu_23165", "Port" : "mask_table1"},
					{"ID" : "829", "SubInstance" : "grp_gauss_newton_optim_r_fu_24222", "Port" : "mask_table1"},
					{"ID" : "915", "SubInstance" : "grp_gauss_newton_optim_r_fu_24524", "Port" : "mask_table1"},
					{"ID" : "657", "SubInstance" : "grp_gauss_newton_optim_r_fu_23618", "Port" : "mask_table1"},
					{"ID" : "485", "SubInstance" : "grp_gauss_newton_optim_r_fu_23014", "Port" : "mask_table1"},
					{"ID" : "700", "SubInstance" : "grp_gauss_newton_optim_r_fu_23769", "Port" : "mask_table1"},
					{"ID" : "786", "SubInstance" : "grp_gauss_newton_optim_r_fu_24071", "Port" : "mask_table1"},
					{"ID" : "442", "SubInstance" : "grp_gauss_newton_optim_r_fu_22863", "Port" : "mask_table1"},
					{"ID" : "227", "SubInstance" : "grp_gauss_newton_optim_r_fu_22108", "Port" : "mask_table1"},
					{"ID" : "614", "SubInstance" : "grp_gauss_newton_optim_r_fu_23467", "Port" : "mask_table1"},
					{"ID" : "313", "SubInstance" : "grp_gauss_newton_optim_r_fu_22410", "Port" : "mask_table1"},
					{"ID" : "958", "SubInstance" : "grp_gauss_newton_optim_r_fu_24675", "Port" : "mask_table1"},
					{"ID" : "270", "SubInstance" : "grp_gauss_newton_optim_r_fu_22259", "Port" : "mask_table1"},
					{"ID" : "184", "SubInstance" : "grp_gauss_newton_optim_r_fu_21957", "Port" : "mask_table1"},
					{"ID" : "571", "SubInstance" : "grp_gauss_newton_optim_r_fu_23316", "Port" : "mask_table1"},
					{"ID" : "399", "SubInstance" : "grp_gauss_newton_optim_r_fu_22712", "Port" : "mask_table1"},
					{"ID" : "98", "SubInstance" : "grp_gauss_newton_optim_r_fu_21655", "Port" : "mask_table1"},
					{"ID" : "141", "SubInstance" : "grp_gauss_newton_optim_r_fu_21806", "Port" : "mask_table1"},
					{"ID" : "55", "SubInstance" : "grp_gauss_newton_optim_r_fu_21504", "Port" : "mask_table1"},
					{"ID" : "743", "SubInstance" : "grp_gauss_newton_optim_r_fu_23920", "Port" : "mask_table1"},
					{"ID" : "356", "SubInstance" : "grp_gauss_newton_optim_r_fu_22561", "Port" : "mask_table1"},
					{"ID" : "1001", "SubInstance" : "grp_gauss_newton_optim_r_fu_24826", "Port" : "mask_table1"},
					{"ID" : "1044", "SubInstance" : "grp_gauss_newton_optim_r_fu_24977", "Port" : "mask_table1"},
					{"ID" : "872", "SubInstance" : "grp_gauss_newton_optim_r_fu_24373", "Port" : "mask_table1"}]},
			{"Name" : "pyr_region_data_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_gauss_newton_optim_r_fu_21504", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_gauss_newton_optim_r_fu_21504", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_1_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_gauss_newton_optim_r_fu_21655", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_gauss_newton_optim_r_fu_21655", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_2_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "141", "SubInstance" : "grp_gauss_newton_optim_r_fu_21806", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "141", "SubInstance" : "grp_gauss_newton_optim_r_fu_21806", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_3_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_gauss_newton_optim_r_fu_21957", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_gauss_newton_optim_r_fu_21957", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_4_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_4_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_4_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_4_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "227", "SubInstance" : "grp_gauss_newton_optim_r_fu_22108", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "227", "SubInstance" : "grp_gauss_newton_optim_r_fu_22108", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_5_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_5_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_5_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_5_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "270", "SubInstance" : "grp_gauss_newton_optim_r_fu_22259", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "270", "SubInstance" : "grp_gauss_newton_optim_r_fu_22259", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_6_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_6_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_6_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_6_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "313", "SubInstance" : "grp_gauss_newton_optim_r_fu_22410", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "313", "SubInstance" : "grp_gauss_newton_optim_r_fu_22410", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_7_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_7_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_7_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_7_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "356", "SubInstance" : "grp_gauss_newton_optim_r_fu_22561", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "356", "SubInstance" : "grp_gauss_newton_optim_r_fu_22561", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_8_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_8_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_8_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_8_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "399", "SubInstance" : "grp_gauss_newton_optim_r_fu_22712", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "399", "SubInstance" : "grp_gauss_newton_optim_r_fu_22712", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_9_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_9_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_9_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_9_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "442", "SubInstance" : "grp_gauss_newton_optim_r_fu_22863", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "442", "SubInstance" : "grp_gauss_newton_optim_r_fu_22863", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_10_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_10_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_10_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "485", "SubInstance" : "grp_gauss_newton_optim_r_fu_23014", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "485", "SubInstance" : "grp_gauss_newton_optim_r_fu_23014", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_11_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_11_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_11_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "528", "SubInstance" : "grp_gauss_newton_optim_r_fu_23165", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "528", "SubInstance" : "grp_gauss_newton_optim_r_fu_23165", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_12_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_12_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_12_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "571", "SubInstance" : "grp_gauss_newton_optim_r_fu_23316", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "571", "SubInstance" : "grp_gauss_newton_optim_r_fu_23316", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_13_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_13_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_13_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "614", "SubInstance" : "grp_gauss_newton_optim_r_fu_23467", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "614", "SubInstance" : "grp_gauss_newton_optim_r_fu_23467", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_14_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_14_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_14_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "657", "SubInstance" : "grp_gauss_newton_optim_r_fu_23618", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "657", "SubInstance" : "grp_gauss_newton_optim_r_fu_23618", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_15_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_15_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_15_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_gauss_newton_optim_r_fu_23769", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "700", "SubInstance" : "grp_gauss_newton_optim_r_fu_23769", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_16_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_16_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_16_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_gauss_newton_optim_r_fu_23920", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_gauss_newton_optim_r_fu_23920", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_17_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_17_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_17_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "786", "SubInstance" : "grp_gauss_newton_optim_r_fu_24071", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "786", "SubInstance" : "grp_gauss_newton_optim_r_fu_24071", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_18_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_18_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_18_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "829", "SubInstance" : "grp_gauss_newton_optim_r_fu_24222", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "829", "SubInstance" : "grp_gauss_newton_optim_r_fu_24222", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_19_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_19_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_19_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "872", "SubInstance" : "grp_gauss_newton_optim_r_fu_24373", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "872", "SubInstance" : "grp_gauss_newton_optim_r_fu_24373", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_20_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_20_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_20_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "915", "SubInstance" : "grp_gauss_newton_optim_r_fu_24524", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "915", "SubInstance" : "grp_gauss_newton_optim_r_fu_24524", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_21_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_21_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_21_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "958", "SubInstance" : "grp_gauss_newton_optim_r_fu_24675", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "958", "SubInstance" : "grp_gauss_newton_optim_r_fu_24675", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_22_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_22_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_22_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1001", "SubInstance" : "grp_gauss_newton_optim_r_fu_24826", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1001", "SubInstance" : "grp_gauss_newton_optim_r_fu_24826", "Port" : "ref_patch_with_border"}]},
			{"Name" : "pyr_region_fcoord_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_fcoord_23_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_23_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_23_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pyr_region_data_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1044", "SubInstance" : "grp_gauss_newton_optim_r_fu_24977", "Port" : "pyr_region_data"}]},
			{"Name" : "ref_patch_with_borde_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1044", "SubInstance" : "grp_gauss_newton_optim_r_fu_24977", "Port" : "ref_patch_with_border"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_23_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_22_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_2_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_11_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_3_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_5_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_5_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_4_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_6_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_3_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_7_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_2_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_8_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_9_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_10_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_11_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_20_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_12_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_19_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_13_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_18_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_14_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_17_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_15_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_16_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_16_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_15_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_17_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_14_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_18_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_13_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_19_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_12_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_20_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_10_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_21_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_9_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_22_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_8_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_region_data_23_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_patch_with_borde_7_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_ctrl_s_axi_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_param_s_axi_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_region_data_m_axi_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_region_fcoord_m_axi_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_patches_m_axi_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_my_pos_m_axi_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504", "Parent" : "0", "Child" : ["56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.mask_table1_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "55"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "55"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "55"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "55"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "55"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "55"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "55"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "55"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "55"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "55"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "55"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "55"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "55"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "55"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "55"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "55"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "55"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "55"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "55"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "55"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "55"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "55"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "55"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "55"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "55"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "55"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "55"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "55"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "55"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "55"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "55"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "55"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "55"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "55"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "55"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "55"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "55"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "55"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "55"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "55"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21504.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "55"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655", "Parent" : "0", "Child" : ["99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.mask_table1_U", "Parent" : "98"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "98"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "98"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "98"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "98"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "98"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "98"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "98"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "98"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "98"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "98"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "98"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "98"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "98"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "98"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "98"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "98"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "98"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "98"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "98"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "98"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "98"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "98"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "98"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "98"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "98"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "98"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "98"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "98"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "98"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "98"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "98"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "98"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "98"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "98"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "98"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "98"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "98"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "98"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "98"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "98"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21655.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "98"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806", "Parent" : "0", "Child" : ["142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.mask_table1_U", "Parent" : "141"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "141"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "141"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "141"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "141"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "141"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "141"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "141"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "141"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "141"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "141"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "141"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "141"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "141"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "141"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "141"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "141"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "141"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "141"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "141"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "141"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "141"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "141"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "141"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "141"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "141"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "141"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "141"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "141"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "141"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "141"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "141"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "141"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "141"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "141"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "141"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "141"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "141"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "141"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "141"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "141"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21806.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "141"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957", "Parent" : "0", "Child" : ["185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.mask_table1_U", "Parent" : "184"},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "184"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "184"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "184"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "184"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "184"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "184"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "184"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "184"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "184"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "184"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "184"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "184"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "184"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "184"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "184"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "184"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "184"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "184"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "184"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "184"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "184"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "184"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "184"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "184"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "184"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "184"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "184"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "184"},
	{"ID" : "214", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "184"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "184"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "184"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "184"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "184"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "184"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "184"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "184"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "184"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "184"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "184"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "184"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_21957.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "184"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108", "Parent" : "0", "Child" : ["228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.mask_table1_U", "Parent" : "227"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "227"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "227"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "227"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "227"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "227"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "227"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "227"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "227"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "227"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "227"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "227"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "227"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "227"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "227"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "227"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "227"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "227"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "227"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "227"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "227"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "227"},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "227"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "227"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "227"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "227"},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "227"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "227"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "227"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "227"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "227"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "227"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "227"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "227"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "227"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "227"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "227"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "227"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "227"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "227"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "227"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22108.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "227"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259", "Parent" : "0", "Child" : ["271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.mask_table1_U", "Parent" : "270"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "270"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "270"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "270"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "270"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "270"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "270"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "270"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "270"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "270"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "270"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "270"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "270"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "270"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "270"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "270"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "270"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "270"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "270"},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "270"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "270"},
	{"ID" : "292", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "270"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "270"},
	{"ID" : "294", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "270"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "270"},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "270"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "270"},
	{"ID" : "298", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "270"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "270"},
	{"ID" : "300", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "270"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "270"},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "270"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "270"},
	{"ID" : "304", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "270"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "270"},
	{"ID" : "306", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "270"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "270"},
	{"ID" : "308", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "270"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "270"},
	{"ID" : "310", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "270"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "270"},
	{"ID" : "312", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22259.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "270"},
	{"ID" : "313", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410", "Parent" : "0", "Child" : ["314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "314", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.mask_table1_U", "Parent" : "313"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "313"},
	{"ID" : "316", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "313"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "313"},
	{"ID" : "318", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "313"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "313"},
	{"ID" : "320", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "313"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "313"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "313"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "313"},
	{"ID" : "324", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "313"},
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "313"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "313"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "313"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "313"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "313"},
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "313"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "313"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "313"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "313"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "313"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "313"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "313"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "313"},
	{"ID" : "338", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "313"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "313"},
	{"ID" : "340", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "313"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "313"},
	{"ID" : "342", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "313"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "313"},
	{"ID" : "344", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "313"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "313"},
	{"ID" : "346", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "313"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "313"},
	{"ID" : "348", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "313"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "313"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "313"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "313"},
	{"ID" : "352", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "313"},
	{"ID" : "353", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "313"},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "313"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22410.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "313"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561", "Parent" : "0", "Child" : ["357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.mask_table1_U", "Parent" : "356"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "356"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "356"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "356"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "356"},
	{"ID" : "362", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "356"},
	{"ID" : "363", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "356"},
	{"ID" : "364", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "356"},
	{"ID" : "365", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "356"},
	{"ID" : "366", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "356"},
	{"ID" : "367", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "356"},
	{"ID" : "368", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "356"},
	{"ID" : "369", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "356"},
	{"ID" : "370", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "356"},
	{"ID" : "371", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "356"},
	{"ID" : "372", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "356"},
	{"ID" : "373", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "356"},
	{"ID" : "374", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "356"},
	{"ID" : "375", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "356"},
	{"ID" : "376", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "356"},
	{"ID" : "377", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "356"},
	{"ID" : "378", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "356"},
	{"ID" : "379", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "356"},
	{"ID" : "380", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "356"},
	{"ID" : "381", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "356"},
	{"ID" : "382", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "356"},
	{"ID" : "383", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "356"},
	{"ID" : "384", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "356"},
	{"ID" : "385", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "356"},
	{"ID" : "386", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "356"},
	{"ID" : "387", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "356"},
	{"ID" : "388", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "356"},
	{"ID" : "389", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "356"},
	{"ID" : "390", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "356"},
	{"ID" : "391", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "356"},
	{"ID" : "392", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "356"},
	{"ID" : "393", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "356"},
	{"ID" : "394", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "356"},
	{"ID" : "395", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "356"},
	{"ID" : "396", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "356"},
	{"ID" : "397", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "356"},
	{"ID" : "398", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22561.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "356"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712", "Parent" : "0", "Child" : ["400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416", "417", "418", "419", "420", "421", "422", "423", "424", "425", "426", "427", "428", "429", "430", "431", "432", "433", "434", "435", "436", "437", "438", "439", "440", "441"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "400", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.mask_table1_U", "Parent" : "399"},
	{"ID" : "401", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "399"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "399"},
	{"ID" : "403", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "399"},
	{"ID" : "404", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "399"},
	{"ID" : "405", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "399"},
	{"ID" : "406", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "399"},
	{"ID" : "407", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "399"},
	{"ID" : "408", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "399"},
	{"ID" : "409", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "399"},
	{"ID" : "410", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "399"},
	{"ID" : "411", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "399"},
	{"ID" : "412", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "399"},
	{"ID" : "413", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "399"},
	{"ID" : "414", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "399"},
	{"ID" : "415", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "399"},
	{"ID" : "416", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "399"},
	{"ID" : "417", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "399"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "399"},
	{"ID" : "419", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "399"},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "399"},
	{"ID" : "421", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "399"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "399"},
	{"ID" : "423", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "399"},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "399"},
	{"ID" : "425", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "399"},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "399"},
	{"ID" : "427", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "399"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "399"},
	{"ID" : "429", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "399"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "399"},
	{"ID" : "431", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "399"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "399"},
	{"ID" : "433", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "399"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "399"},
	{"ID" : "435", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "399"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "399"},
	{"ID" : "437", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "399"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "399"},
	{"ID" : "439", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "399"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "399"},
	{"ID" : "441", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22712.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "399"},
	{"ID" : "442", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863", "Parent" : "0", "Child" : ["443", "444", "445", "446", "447", "448", "449", "450", "451", "452", "453", "454", "455", "456", "457", "458", "459", "460", "461", "462", "463", "464", "465", "466", "467", "468", "469", "470", "471", "472", "473", "474", "475", "476", "477", "478", "479", "480", "481", "482", "483", "484"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "443", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.mask_table1_U", "Parent" : "442"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "442"},
	{"ID" : "445", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "442"},
	{"ID" : "446", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "442"},
	{"ID" : "447", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "442"},
	{"ID" : "448", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "442"},
	{"ID" : "449", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "442"},
	{"ID" : "450", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "442"},
	{"ID" : "451", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "442"},
	{"ID" : "452", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "442"},
	{"ID" : "453", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "442"},
	{"ID" : "454", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "442"},
	{"ID" : "455", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "442"},
	{"ID" : "456", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "442"},
	{"ID" : "457", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "442"},
	{"ID" : "458", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "442"},
	{"ID" : "459", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "442"},
	{"ID" : "460", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "442"},
	{"ID" : "461", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "442"},
	{"ID" : "462", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "442"},
	{"ID" : "463", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "442"},
	{"ID" : "464", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "442"},
	{"ID" : "465", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "442"},
	{"ID" : "466", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "442"},
	{"ID" : "467", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "442"},
	{"ID" : "468", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "442"},
	{"ID" : "469", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "442"},
	{"ID" : "470", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "442"},
	{"ID" : "471", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "442"},
	{"ID" : "472", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "442"},
	{"ID" : "473", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "442"},
	{"ID" : "474", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "442"},
	{"ID" : "475", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "442"},
	{"ID" : "476", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "442"},
	{"ID" : "477", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "442"},
	{"ID" : "478", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "442"},
	{"ID" : "479", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "442"},
	{"ID" : "480", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "442"},
	{"ID" : "481", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "442"},
	{"ID" : "482", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "442"},
	{"ID" : "483", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "442"},
	{"ID" : "484", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_22863.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "442"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014", "Parent" : "0", "Child" : ["486", "487", "488", "489", "490", "491", "492", "493", "494", "495", "496", "497", "498", "499", "500", "501", "502", "503", "504", "505", "506", "507", "508", "509", "510", "511", "512", "513", "514", "515", "516", "517", "518", "519", "520", "521", "522", "523", "524", "525", "526", "527"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "486", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.mask_table1_U", "Parent" : "485"},
	{"ID" : "487", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "485"},
	{"ID" : "488", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "485"},
	{"ID" : "489", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "485"},
	{"ID" : "490", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "485"},
	{"ID" : "491", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "485"},
	{"ID" : "492", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "485"},
	{"ID" : "493", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "485"},
	{"ID" : "494", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "485"},
	{"ID" : "495", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "485"},
	{"ID" : "496", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "485"},
	{"ID" : "497", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "485"},
	{"ID" : "498", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "485"},
	{"ID" : "499", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "485"},
	{"ID" : "500", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "485"},
	{"ID" : "501", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "485"},
	{"ID" : "502", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "485"},
	{"ID" : "503", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "485"},
	{"ID" : "504", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "485"},
	{"ID" : "505", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "485"},
	{"ID" : "506", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "485"},
	{"ID" : "507", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "485"},
	{"ID" : "508", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "485"},
	{"ID" : "509", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "485"},
	{"ID" : "510", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "485"},
	{"ID" : "511", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "485"},
	{"ID" : "512", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "485"},
	{"ID" : "513", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "485"},
	{"ID" : "514", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "485"},
	{"ID" : "515", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "485"},
	{"ID" : "516", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "485"},
	{"ID" : "517", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "485"},
	{"ID" : "518", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "485"},
	{"ID" : "519", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "485"},
	{"ID" : "520", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "485"},
	{"ID" : "521", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "485"},
	{"ID" : "522", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "485"},
	{"ID" : "523", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "485"},
	{"ID" : "524", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "485"},
	{"ID" : "525", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "485"},
	{"ID" : "526", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "485"},
	{"ID" : "527", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23014.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "485"},
	{"ID" : "528", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165", "Parent" : "0", "Child" : ["529", "530", "531", "532", "533", "534", "535", "536", "537", "538", "539", "540", "541", "542", "543", "544", "545", "546", "547", "548", "549", "550", "551", "552", "553", "554", "555", "556", "557", "558", "559", "560", "561", "562", "563", "564", "565", "566", "567", "568", "569", "570"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "529", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.mask_table1_U", "Parent" : "528"},
	{"ID" : "530", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "528"},
	{"ID" : "531", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "528"},
	{"ID" : "532", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "528"},
	{"ID" : "533", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "528"},
	{"ID" : "534", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "528"},
	{"ID" : "535", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "528"},
	{"ID" : "536", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "528"},
	{"ID" : "537", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "528"},
	{"ID" : "538", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "528"},
	{"ID" : "539", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "528"},
	{"ID" : "540", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "528"},
	{"ID" : "541", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "528"},
	{"ID" : "542", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "528"},
	{"ID" : "543", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "528"},
	{"ID" : "544", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "528"},
	{"ID" : "545", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "528"},
	{"ID" : "546", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "528"},
	{"ID" : "547", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "528"},
	{"ID" : "548", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "528"},
	{"ID" : "549", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "528"},
	{"ID" : "550", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "528"},
	{"ID" : "551", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "528"},
	{"ID" : "552", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "528"},
	{"ID" : "553", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "528"},
	{"ID" : "554", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "528"},
	{"ID" : "555", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "528"},
	{"ID" : "556", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "528"},
	{"ID" : "557", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "528"},
	{"ID" : "558", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "528"},
	{"ID" : "559", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "528"},
	{"ID" : "560", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "528"},
	{"ID" : "561", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "528"},
	{"ID" : "562", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "528"},
	{"ID" : "563", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "528"},
	{"ID" : "564", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "528"},
	{"ID" : "565", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "528"},
	{"ID" : "566", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "528"},
	{"ID" : "567", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "528"},
	{"ID" : "568", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "528"},
	{"ID" : "569", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "528"},
	{"ID" : "570", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23165.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "528"},
	{"ID" : "571", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316", "Parent" : "0", "Child" : ["572", "573", "574", "575", "576", "577", "578", "579", "580", "581", "582", "583", "584", "585", "586", "587", "588", "589", "590", "591", "592", "593", "594", "595", "596", "597", "598", "599", "600", "601", "602", "603", "604", "605", "606", "607", "608", "609", "610", "611", "612", "613"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "572", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.mask_table1_U", "Parent" : "571"},
	{"ID" : "573", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "571"},
	{"ID" : "574", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "571"},
	{"ID" : "575", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "571"},
	{"ID" : "576", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "571"},
	{"ID" : "577", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "571"},
	{"ID" : "578", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "571"},
	{"ID" : "579", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "571"},
	{"ID" : "580", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "571"},
	{"ID" : "581", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "571"},
	{"ID" : "582", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "571"},
	{"ID" : "583", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "571"},
	{"ID" : "584", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "571"},
	{"ID" : "585", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "571"},
	{"ID" : "586", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "571"},
	{"ID" : "587", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "571"},
	{"ID" : "588", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "571"},
	{"ID" : "589", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "571"},
	{"ID" : "590", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "571"},
	{"ID" : "591", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "571"},
	{"ID" : "592", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "571"},
	{"ID" : "593", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "571"},
	{"ID" : "594", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "571"},
	{"ID" : "595", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "571"},
	{"ID" : "596", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "571"},
	{"ID" : "597", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "571"},
	{"ID" : "598", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "571"},
	{"ID" : "599", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "571"},
	{"ID" : "600", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "571"},
	{"ID" : "601", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "571"},
	{"ID" : "602", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "571"},
	{"ID" : "603", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "571"},
	{"ID" : "604", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "571"},
	{"ID" : "605", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "571"},
	{"ID" : "606", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "571"},
	{"ID" : "607", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "571"},
	{"ID" : "608", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "571"},
	{"ID" : "609", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "571"},
	{"ID" : "610", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "571"},
	{"ID" : "611", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "571"},
	{"ID" : "612", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "571"},
	{"ID" : "613", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23316.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "571"},
	{"ID" : "614", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467", "Parent" : "0", "Child" : ["615", "616", "617", "618", "619", "620", "621", "622", "623", "624", "625", "626", "627", "628", "629", "630", "631", "632", "633", "634", "635", "636", "637", "638", "639", "640", "641", "642", "643", "644", "645", "646", "647", "648", "649", "650", "651", "652", "653", "654", "655", "656"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "615", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.mask_table1_U", "Parent" : "614"},
	{"ID" : "616", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "614"},
	{"ID" : "617", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "614"},
	{"ID" : "618", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "614"},
	{"ID" : "619", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "614"},
	{"ID" : "620", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "614"},
	{"ID" : "621", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "614"},
	{"ID" : "622", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "614"},
	{"ID" : "623", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "614"},
	{"ID" : "624", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "614"},
	{"ID" : "625", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "614"},
	{"ID" : "626", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "614"},
	{"ID" : "627", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "614"},
	{"ID" : "628", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "614"},
	{"ID" : "629", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "614"},
	{"ID" : "630", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "614"},
	{"ID" : "631", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "614"},
	{"ID" : "632", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "614"},
	{"ID" : "633", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "614"},
	{"ID" : "634", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "614"},
	{"ID" : "635", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "614"},
	{"ID" : "636", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "614"},
	{"ID" : "637", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "614"},
	{"ID" : "638", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "614"},
	{"ID" : "639", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "614"},
	{"ID" : "640", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "614"},
	{"ID" : "641", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "614"},
	{"ID" : "642", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "614"},
	{"ID" : "643", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "614"},
	{"ID" : "644", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "614"},
	{"ID" : "645", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "614"},
	{"ID" : "646", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "614"},
	{"ID" : "647", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "614"},
	{"ID" : "648", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "614"},
	{"ID" : "649", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "614"},
	{"ID" : "650", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "614"},
	{"ID" : "651", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "614"},
	{"ID" : "652", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "614"},
	{"ID" : "653", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "614"},
	{"ID" : "654", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "614"},
	{"ID" : "655", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "614"},
	{"ID" : "656", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23467.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "614"},
	{"ID" : "657", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618", "Parent" : "0", "Child" : ["658", "659", "660", "661", "662", "663", "664", "665", "666", "667", "668", "669", "670", "671", "672", "673", "674", "675", "676", "677", "678", "679", "680", "681", "682", "683", "684", "685", "686", "687", "688", "689", "690", "691", "692", "693", "694", "695", "696", "697", "698", "699"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "658", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.mask_table1_U", "Parent" : "657"},
	{"ID" : "659", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "657"},
	{"ID" : "660", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "657"},
	{"ID" : "661", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "657"},
	{"ID" : "662", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "657"},
	{"ID" : "663", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "657"},
	{"ID" : "664", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "657"},
	{"ID" : "665", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "657"},
	{"ID" : "666", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "657"},
	{"ID" : "667", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "657"},
	{"ID" : "668", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "657"},
	{"ID" : "669", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "657"},
	{"ID" : "670", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "657"},
	{"ID" : "671", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "657"},
	{"ID" : "672", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "657"},
	{"ID" : "673", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "657"},
	{"ID" : "674", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "657"},
	{"ID" : "675", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "657"},
	{"ID" : "676", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "657"},
	{"ID" : "677", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "657"},
	{"ID" : "678", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "657"},
	{"ID" : "679", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "657"},
	{"ID" : "680", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "657"},
	{"ID" : "681", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "657"},
	{"ID" : "682", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "657"},
	{"ID" : "683", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "657"},
	{"ID" : "684", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "657"},
	{"ID" : "685", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "657"},
	{"ID" : "686", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "657"},
	{"ID" : "687", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "657"},
	{"ID" : "688", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "657"},
	{"ID" : "689", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "657"},
	{"ID" : "690", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "657"},
	{"ID" : "691", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "657"},
	{"ID" : "692", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "657"},
	{"ID" : "693", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "657"},
	{"ID" : "694", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "657"},
	{"ID" : "695", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "657"},
	{"ID" : "696", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "657"},
	{"ID" : "697", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "657"},
	{"ID" : "698", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "657"},
	{"ID" : "699", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23618.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "657"},
	{"ID" : "700", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769", "Parent" : "0", "Child" : ["701", "702", "703", "704", "705", "706", "707", "708", "709", "710", "711", "712", "713", "714", "715", "716", "717", "718", "719", "720", "721", "722", "723", "724", "725", "726", "727", "728", "729", "730", "731", "732", "733", "734", "735", "736", "737", "738", "739", "740", "741", "742"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "701", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.mask_table1_U", "Parent" : "700"},
	{"ID" : "702", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "700"},
	{"ID" : "703", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "700"},
	{"ID" : "704", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "700"},
	{"ID" : "705", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "700"},
	{"ID" : "706", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "700"},
	{"ID" : "707", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "700"},
	{"ID" : "708", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "700"},
	{"ID" : "709", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "700"},
	{"ID" : "710", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "700"},
	{"ID" : "711", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "700"},
	{"ID" : "712", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "700"},
	{"ID" : "713", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "700"},
	{"ID" : "714", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "700"},
	{"ID" : "715", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "700"},
	{"ID" : "716", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "700"},
	{"ID" : "717", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "700"},
	{"ID" : "718", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "700"},
	{"ID" : "719", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "700"},
	{"ID" : "720", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "700"},
	{"ID" : "721", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "700"},
	{"ID" : "722", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "700"},
	{"ID" : "723", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "700"},
	{"ID" : "724", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "700"},
	{"ID" : "725", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "700"},
	{"ID" : "726", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "700"},
	{"ID" : "727", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "700"},
	{"ID" : "728", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "700"},
	{"ID" : "729", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "700"},
	{"ID" : "730", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "700"},
	{"ID" : "731", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "700"},
	{"ID" : "732", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "700"},
	{"ID" : "733", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "700"},
	{"ID" : "734", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "700"},
	{"ID" : "735", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "700"},
	{"ID" : "736", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "700"},
	{"ID" : "737", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "700"},
	{"ID" : "738", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "700"},
	{"ID" : "739", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "700"},
	{"ID" : "740", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "700"},
	{"ID" : "741", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "700"},
	{"ID" : "742", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23769.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "700"},
	{"ID" : "743", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920", "Parent" : "0", "Child" : ["744", "745", "746", "747", "748", "749", "750", "751", "752", "753", "754", "755", "756", "757", "758", "759", "760", "761", "762", "763", "764", "765", "766", "767", "768", "769", "770", "771", "772", "773", "774", "775", "776", "777", "778", "779", "780", "781", "782", "783", "784", "785"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "744", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.mask_table1_U", "Parent" : "743"},
	{"ID" : "745", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "743"},
	{"ID" : "746", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "743"},
	{"ID" : "747", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "743"},
	{"ID" : "748", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "743"},
	{"ID" : "749", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "743"},
	{"ID" : "750", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "743"},
	{"ID" : "751", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "743"},
	{"ID" : "752", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "743"},
	{"ID" : "753", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "743"},
	{"ID" : "754", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "743"},
	{"ID" : "755", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "743"},
	{"ID" : "756", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "743"},
	{"ID" : "757", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "743"},
	{"ID" : "758", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "743"},
	{"ID" : "759", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "743"},
	{"ID" : "760", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "743"},
	{"ID" : "761", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "743"},
	{"ID" : "762", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "743"},
	{"ID" : "763", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "743"},
	{"ID" : "764", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "743"},
	{"ID" : "765", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "743"},
	{"ID" : "766", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "743"},
	{"ID" : "767", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "743"},
	{"ID" : "768", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "743"},
	{"ID" : "769", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "743"},
	{"ID" : "770", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "743"},
	{"ID" : "771", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "743"},
	{"ID" : "772", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "743"},
	{"ID" : "773", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "743"},
	{"ID" : "774", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "743"},
	{"ID" : "775", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "743"},
	{"ID" : "776", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "743"},
	{"ID" : "777", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "743"},
	{"ID" : "778", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "743"},
	{"ID" : "779", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "743"},
	{"ID" : "780", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "743"},
	{"ID" : "781", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "743"},
	{"ID" : "782", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "743"},
	{"ID" : "783", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "743"},
	{"ID" : "784", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "743"},
	{"ID" : "785", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_23920.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "743"},
	{"ID" : "786", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071", "Parent" : "0", "Child" : ["787", "788", "789", "790", "791", "792", "793", "794", "795", "796", "797", "798", "799", "800", "801", "802", "803", "804", "805", "806", "807", "808", "809", "810", "811", "812", "813", "814", "815", "816", "817", "818", "819", "820", "821", "822", "823", "824", "825", "826", "827", "828"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "787", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.mask_table1_U", "Parent" : "786"},
	{"ID" : "788", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "786"},
	{"ID" : "789", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "786"},
	{"ID" : "790", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "786"},
	{"ID" : "791", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "786"},
	{"ID" : "792", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "786"},
	{"ID" : "793", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "786"},
	{"ID" : "794", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "786"},
	{"ID" : "795", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "786"},
	{"ID" : "796", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "786"},
	{"ID" : "797", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "786"},
	{"ID" : "798", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "786"},
	{"ID" : "799", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "786"},
	{"ID" : "800", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "786"},
	{"ID" : "801", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "786"},
	{"ID" : "802", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "786"},
	{"ID" : "803", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "786"},
	{"ID" : "804", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "786"},
	{"ID" : "805", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "786"},
	{"ID" : "806", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "786"},
	{"ID" : "807", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "786"},
	{"ID" : "808", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "786"},
	{"ID" : "809", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "786"},
	{"ID" : "810", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "786"},
	{"ID" : "811", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "786"},
	{"ID" : "812", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "786"},
	{"ID" : "813", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "786"},
	{"ID" : "814", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "786"},
	{"ID" : "815", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "786"},
	{"ID" : "816", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "786"},
	{"ID" : "817", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "786"},
	{"ID" : "818", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "786"},
	{"ID" : "819", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "786"},
	{"ID" : "820", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "786"},
	{"ID" : "821", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "786"},
	{"ID" : "822", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "786"},
	{"ID" : "823", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "786"},
	{"ID" : "824", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "786"},
	{"ID" : "825", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "786"},
	{"ID" : "826", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "786"},
	{"ID" : "827", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "786"},
	{"ID" : "828", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24071.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "786"},
	{"ID" : "829", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222", "Parent" : "0", "Child" : ["830", "831", "832", "833", "834", "835", "836", "837", "838", "839", "840", "841", "842", "843", "844", "845", "846", "847", "848", "849", "850", "851", "852", "853", "854", "855", "856", "857", "858", "859", "860", "861", "862", "863", "864", "865", "866", "867", "868", "869", "870", "871"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "830", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.mask_table1_U", "Parent" : "829"},
	{"ID" : "831", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "829"},
	{"ID" : "832", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "829"},
	{"ID" : "833", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "829"},
	{"ID" : "834", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "829"},
	{"ID" : "835", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "829"},
	{"ID" : "836", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "829"},
	{"ID" : "837", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "829"},
	{"ID" : "838", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "829"},
	{"ID" : "839", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "829"},
	{"ID" : "840", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "829"},
	{"ID" : "841", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "829"},
	{"ID" : "842", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "829"},
	{"ID" : "843", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "829"},
	{"ID" : "844", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "829"},
	{"ID" : "845", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "829"},
	{"ID" : "846", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "829"},
	{"ID" : "847", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "829"},
	{"ID" : "848", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "829"},
	{"ID" : "849", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "829"},
	{"ID" : "850", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "829"},
	{"ID" : "851", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "829"},
	{"ID" : "852", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "829"},
	{"ID" : "853", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "829"},
	{"ID" : "854", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "829"},
	{"ID" : "855", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "829"},
	{"ID" : "856", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "829"},
	{"ID" : "857", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "829"},
	{"ID" : "858", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "829"},
	{"ID" : "859", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "829"},
	{"ID" : "860", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "829"},
	{"ID" : "861", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "829"},
	{"ID" : "862", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "829"},
	{"ID" : "863", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "829"},
	{"ID" : "864", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "829"},
	{"ID" : "865", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "829"},
	{"ID" : "866", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "829"},
	{"ID" : "867", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "829"},
	{"ID" : "868", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "829"},
	{"ID" : "869", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "829"},
	{"ID" : "870", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "829"},
	{"ID" : "871", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24222.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "829"},
	{"ID" : "872", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373", "Parent" : "0", "Child" : ["873", "874", "875", "876", "877", "878", "879", "880", "881", "882", "883", "884", "885", "886", "887", "888", "889", "890", "891", "892", "893", "894", "895", "896", "897", "898", "899", "900", "901", "902", "903", "904", "905", "906", "907", "908", "909", "910", "911", "912", "913", "914"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "873", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.mask_table1_U", "Parent" : "872"},
	{"ID" : "874", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "872"},
	{"ID" : "875", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "872"},
	{"ID" : "876", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "872"},
	{"ID" : "877", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "872"},
	{"ID" : "878", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "872"},
	{"ID" : "879", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "872"},
	{"ID" : "880", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "872"},
	{"ID" : "881", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "872"},
	{"ID" : "882", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "872"},
	{"ID" : "883", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "872"},
	{"ID" : "884", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "872"},
	{"ID" : "885", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "872"},
	{"ID" : "886", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "872"},
	{"ID" : "887", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "872"},
	{"ID" : "888", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "872"},
	{"ID" : "889", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "872"},
	{"ID" : "890", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "872"},
	{"ID" : "891", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "872"},
	{"ID" : "892", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "872"},
	{"ID" : "893", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "872"},
	{"ID" : "894", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "872"},
	{"ID" : "895", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "872"},
	{"ID" : "896", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "872"},
	{"ID" : "897", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "872"},
	{"ID" : "898", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "872"},
	{"ID" : "899", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "872"},
	{"ID" : "900", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "872"},
	{"ID" : "901", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "872"},
	{"ID" : "902", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "872"},
	{"ID" : "903", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "872"},
	{"ID" : "904", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "872"},
	{"ID" : "905", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "872"},
	{"ID" : "906", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "872"},
	{"ID" : "907", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "872"},
	{"ID" : "908", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "872"},
	{"ID" : "909", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "872"},
	{"ID" : "910", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "872"},
	{"ID" : "911", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "872"},
	{"ID" : "912", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "872"},
	{"ID" : "913", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "872"},
	{"ID" : "914", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24373.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "872"},
	{"ID" : "915", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524", "Parent" : "0", "Child" : ["916", "917", "918", "919", "920", "921", "922", "923", "924", "925", "926", "927", "928", "929", "930", "931", "932", "933", "934", "935", "936", "937", "938", "939", "940", "941", "942", "943", "944", "945", "946", "947", "948", "949", "950", "951", "952", "953", "954", "955", "956", "957"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "916", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.mask_table1_U", "Parent" : "915"},
	{"ID" : "917", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "915"},
	{"ID" : "918", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "915"},
	{"ID" : "919", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "915"},
	{"ID" : "920", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "915"},
	{"ID" : "921", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "915"},
	{"ID" : "922", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "915"},
	{"ID" : "923", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "915"},
	{"ID" : "924", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "915"},
	{"ID" : "925", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "915"},
	{"ID" : "926", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "915"},
	{"ID" : "927", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "915"},
	{"ID" : "928", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "915"},
	{"ID" : "929", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "915"},
	{"ID" : "930", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "915"},
	{"ID" : "931", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "915"},
	{"ID" : "932", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "915"},
	{"ID" : "933", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "915"},
	{"ID" : "934", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "915"},
	{"ID" : "935", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "915"},
	{"ID" : "936", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "915"},
	{"ID" : "937", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "915"},
	{"ID" : "938", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "915"},
	{"ID" : "939", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "915"},
	{"ID" : "940", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "915"},
	{"ID" : "941", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "915"},
	{"ID" : "942", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "915"},
	{"ID" : "943", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "915"},
	{"ID" : "944", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "915"},
	{"ID" : "945", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "915"},
	{"ID" : "946", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "915"},
	{"ID" : "947", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "915"},
	{"ID" : "948", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "915"},
	{"ID" : "949", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "915"},
	{"ID" : "950", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "915"},
	{"ID" : "951", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "915"},
	{"ID" : "952", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "915"},
	{"ID" : "953", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "915"},
	{"ID" : "954", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "915"},
	{"ID" : "955", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "915"},
	{"ID" : "956", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "915"},
	{"ID" : "957", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24524.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "915"},
	{"ID" : "958", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675", "Parent" : "0", "Child" : ["959", "960", "961", "962", "963", "964", "965", "966", "967", "968", "969", "970", "971", "972", "973", "974", "975", "976", "977", "978", "979", "980", "981", "982", "983", "984", "985", "986", "987", "988", "989", "990", "991", "992", "993", "994", "995", "996", "997", "998", "999", "1000"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "959", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.mask_table1_U", "Parent" : "958"},
	{"ID" : "960", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "958"},
	{"ID" : "961", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "958"},
	{"ID" : "962", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "958"},
	{"ID" : "963", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "958"},
	{"ID" : "964", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "958"},
	{"ID" : "965", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "958"},
	{"ID" : "966", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "958"},
	{"ID" : "967", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "958"},
	{"ID" : "968", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "958"},
	{"ID" : "969", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "958"},
	{"ID" : "970", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "958"},
	{"ID" : "971", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "958"},
	{"ID" : "972", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "958"},
	{"ID" : "973", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "958"},
	{"ID" : "974", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "958"},
	{"ID" : "975", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "958"},
	{"ID" : "976", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "958"},
	{"ID" : "977", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "958"},
	{"ID" : "978", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "958"},
	{"ID" : "979", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "958"},
	{"ID" : "980", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "958"},
	{"ID" : "981", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "958"},
	{"ID" : "982", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "958"},
	{"ID" : "983", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "958"},
	{"ID" : "984", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "958"},
	{"ID" : "985", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "958"},
	{"ID" : "986", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "958"},
	{"ID" : "987", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "958"},
	{"ID" : "988", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "958"},
	{"ID" : "989", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "958"},
	{"ID" : "990", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "958"},
	{"ID" : "991", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "958"},
	{"ID" : "992", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "958"},
	{"ID" : "993", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "958"},
	{"ID" : "994", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "958"},
	{"ID" : "995", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "958"},
	{"ID" : "996", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "958"},
	{"ID" : "997", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "958"},
	{"ID" : "998", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "958"},
	{"ID" : "999", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "958"},
	{"ID" : "1000", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24675.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "958"},
	{"ID" : "1001", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826", "Parent" : "0", "Child" : ["1002", "1003", "1004", "1005", "1006", "1007", "1008", "1009", "1010", "1011", "1012", "1013", "1014", "1015", "1016", "1017", "1018", "1019", "1020", "1021", "1022", "1023", "1024", "1025", "1026", "1027", "1028", "1029", "1030", "1031", "1032", "1033", "1034", "1035", "1036", "1037", "1038", "1039", "1040", "1041", "1042", "1043"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1002", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.mask_table1_U", "Parent" : "1001"},
	{"ID" : "1003", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "1001"},
	{"ID" : "1004", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "1001"},
	{"ID" : "1005", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "1001"},
	{"ID" : "1006", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "1001"},
	{"ID" : "1007", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "1001"},
	{"ID" : "1008", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "1001"},
	{"ID" : "1009", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "1001"},
	{"ID" : "1010", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "1001"},
	{"ID" : "1011", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "1001"},
	{"ID" : "1012", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "1001"},
	{"ID" : "1013", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "1001"},
	{"ID" : "1014", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "1001"},
	{"ID" : "1015", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "1001"},
	{"ID" : "1016", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "1001"},
	{"ID" : "1017", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "1001"},
	{"ID" : "1018", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "1001"},
	{"ID" : "1019", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "1001"},
	{"ID" : "1020", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "1001"},
	{"ID" : "1021", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "1001"},
	{"ID" : "1022", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "1001"},
	{"ID" : "1023", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "1001"},
	{"ID" : "1024", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "1001"},
	{"ID" : "1025", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "1001"},
	{"ID" : "1026", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "1001"},
	{"ID" : "1027", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "1001"},
	{"ID" : "1028", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "1001"},
	{"ID" : "1029", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "1001"},
	{"ID" : "1030", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "1001"},
	{"ID" : "1031", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "1001"},
	{"ID" : "1032", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "1001"},
	{"ID" : "1033", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "1001"},
	{"ID" : "1034", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "1001"},
	{"ID" : "1035", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "1001"},
	{"ID" : "1036", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "1001"},
	{"ID" : "1037", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "1001"},
	{"ID" : "1038", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "1001"},
	{"ID" : "1039", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "1001"},
	{"ID" : "1040", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "1001"},
	{"ID" : "1041", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "1001"},
	{"ID" : "1042", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "1001"},
	{"ID" : "1043", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24826.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "1001"},
	{"ID" : "1044", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977", "Parent" : "0", "Child" : ["1045", "1046", "1047", "1048", "1049", "1050", "1051", "1052", "1053", "1054", "1055", "1056", "1057", "1058", "1059", "1060", "1061", "1062", "1063", "1064", "1065", "1066", "1067", "1068", "1069", "1070", "1071", "1072", "1073", "1074", "1075", "1076", "1077", "1078", "1079", "1080", "1081", "1082", "1083", "1084", "1085", "1086"],
		"CDFG" : "gauss_newton_optim_r",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "4802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr_region_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read16", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read17", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read18", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read19", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read20", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read21", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read22", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read23", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read24", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read25", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read26", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read27", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read28", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read29", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read30", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read31", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read32", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read33", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read34", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read35", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read36", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read37", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read38", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read39", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read40", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read41", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read42", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read43", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read44", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read45", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read46", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read47", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read48", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read49", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read50", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read51", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read52", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read53", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read54", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read55", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read56", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read57", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read58", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read59", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read60", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read61", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read62", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read63", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read64", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read65", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read66", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read67", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read68", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read69", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read70", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read71", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read72", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read73", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read74", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read75", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read76", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read77", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read78", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read79", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read80", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read81", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read82", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read83", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read84", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read85", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read86", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read87", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read88", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read89", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read90", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read91", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read92", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read93", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read94", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read95", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read96", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read97", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read98", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read100", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read101", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read102", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read103", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read104", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read105", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read106", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read107", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read108", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read109", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read110", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read111", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read112", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read113", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read114", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read115", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read116", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read117", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read118", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read119", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read120", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read121", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read122", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read123", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read124", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read125", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read126", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read127", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read128", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read129", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read130", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read131", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read132", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read133", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read134", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read135", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read136", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read137", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read138", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cur_px_estimate_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1045", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.mask_table1_U", "Parent" : "1044"},
	{"ID" : "1046", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U1", "Parent" : "1044"},
	{"ID" : "1047", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U2", "Parent" : "1044"},
	{"ID" : "1048", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1_U3", "Parent" : "1044"},
	{"ID" : "1049", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U4", "Parent" : "1044"},
	{"ID" : "1050", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U5", "Parent" : "1044"},
	{"ID" : "1051", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U6", "Parent" : "1044"},
	{"ID" : "1052", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_sitofp_32ns_32_6_1_U7", "Parent" : "1044"},
	{"ID" : "1053", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_sitofp_32ns_32_6_1_U8", "Parent" : "1044"},
	{"ID" : "1054", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fptrunc_64ns_32_1_1_U9", "Parent" : "1044"},
	{"ID" : "1055", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fptrunc_64ns_32_1_1_U10", "Parent" : "1044"},
	{"ID" : "1056", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fptrunc_64ns_32_1_1_U11", "Parent" : "1044"},
	{"ID" : "1057", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fpext_32ns_64_1_1_U12", "Parent" : "1044"},
	{"ID" : "1058", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_fpext_32ns_64_1_1_U13", "Parent" : "1044"},
	{"ID" : "1059", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U14", "Parent" : "1044"},
	{"ID" : "1060", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1_U15", "Parent" : "1044"},
	{"ID" : "1061", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U16", "Parent" : "1044"},
	{"ID" : "1062", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U17", "Parent" : "1044"},
	{"ID" : "1063", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1_U18", "Parent" : "1044"},
	{"ID" : "1064", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_dcmp_64ns_64ns_1_1_1_U19", "Parent" : "1044"},
	{"ID" : "1065", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U20", "Parent" : "1044"},
	{"ID" : "1066", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U21", "Parent" : "1044"},
	{"ID" : "1067", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U22", "Parent" : "1044"},
	{"ID" : "1068", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U23", "Parent" : "1044"},
	{"ID" : "1069", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U24", "Parent" : "1044"},
	{"ID" : "1070", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U25", "Parent" : "1044"},
	{"ID" : "1071", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U26", "Parent" : "1044"},
	{"ID" : "1072", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U27", "Parent" : "1044"},
	{"ID" : "1073", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U28", "Parent" : "1044"},
	{"ID" : "1074", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U29", "Parent" : "1044"},
	{"ID" : "1075", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U30", "Parent" : "1044"},
	{"ID" : "1076", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U31", "Parent" : "1044"},
	{"ID" : "1077", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U32", "Parent" : "1044"},
	{"ID" : "1078", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U33", "Parent" : "1044"},
	{"ID" : "1079", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U34", "Parent" : "1044"},
	{"ID" : "1080", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_646_32_1_1_U35", "Parent" : "1044"},
	{"ID" : "1081", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_94_32_1_1_U36", "Parent" : "1044"},
	{"ID" : "1082", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_32_32_1_1_U37", "Parent" : "1044"},
	{"ID" : "1083", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_94_32_1_1_U38", "Parent" : "1044"},
	{"ID" : "1084", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_32_32_1_1_U39", "Parent" : "1044"},
	{"ID" : "1085", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_94_32_1_1_U40", "Parent" : "1044"},
	{"ID" : "1086", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gauss_newton_optim_r_fu_24977.batch_align2D_region_mux_32_32_1_1_U41", "Parent" : "1044"},
	{"ID" : "1087", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U199", "Parent" : "0"},
	{"ID" : "1088", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U200", "Parent" : "0"},
	{"ID" : "1089", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U201", "Parent" : "0"},
	{"ID" : "1090", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1_U202", "Parent" : "0"},
	{"ID" : "1091", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U203", "Parent" : "0"},
	{"ID" : "1092", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U204", "Parent" : "0"},
	{"ID" : "1093", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1_U205", "Parent" : "0"},
	{"ID" : "1094", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U206", "Parent" : "0"},
	{"ID" : "1095", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U207", "Parent" : "0"},
	{"ID" : "1096", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U208", "Parent" : "0"},
	{"ID" : "1097", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U209", "Parent" : "0"},
	{"ID" : "1098", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1_U210", "Parent" : "0"},
	{"ID" : "1099", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_fdiv_32ns_32ns_32_12_1_U211", "Parent" : "0"},
	{"ID" : "1100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_sitofp_32s_32_6_1_U212", "Parent" : "0"},
	{"ID" : "1101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_sitofp_32s_32_6_1_U213", "Parent" : "0"},
	{"ID" : "1102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_sitofp_32s_32_6_1_U214", "Parent" : "0"},
	{"ID" : "1103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_245_8_1_1_U215", "Parent" : "0"},
	{"ID" : "1104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_245_8_1_1_U216", "Parent" : "0"},
	{"ID" : "1105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_region_mux_486_32_1_1_U217", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	batch_align2D_region {
		my_region_data {Type I LastRead 9 FirstWrite -1}
		my_region_fcoord {Type I LastRead 17 FirstWrite -1}
		my_patches {Type I LastRead 25 FirstWrite -1}
		my_pos {Type IO LastRead 39 FirstWrite 39}
		my_debug {Type I LastRead -1 FirstWrite -1}
		myRegion_data_ptr {Type I LastRead 0 FirstWrite -1}
		myRegion_fcoord_ptr {Type I LastRead 0 FirstWrite -1}
		my_ref_patch_with_border_ptr {Type I LastRead 0 FirstWrite -1}
		my_cur_px_estimate_ptr {Type I LastRead 0 FirstWrite -1}
		my_converged {Type O LastRead -1 FirstWrite 33}
		n_iter {Type I LastRead -1 FirstWrite -1}
		my_inv_out {Type I LastRead -1 FirstWrite -1}
		pyr_region_fcoord_0_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_0_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_1 {Type IO LastRead -1 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		pyr_region_data_0 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_23 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_1_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_1_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_22 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_2_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_2_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_2 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_11 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_3_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_3_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_3 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_6 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_4_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_4_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_4_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_4_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_4 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_5 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_5_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_5_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_5_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_5_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_5 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_4 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_6_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_6_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_6_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_6_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_6 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_3 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_7_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_7_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_7_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_7_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_7 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_2 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_8_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_8_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_8_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_8_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_8 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_9_s {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_9_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_9_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_9_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_9 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_10 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_10_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_10_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_10_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_10 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_21 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_11 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_11_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_11_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_11_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_11 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_20 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_12 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_12_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_12_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_12_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_12 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_19 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_13 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_13_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_13_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_13_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_13 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_18 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_14 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_14_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_14_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_14_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_14 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_17 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_15 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_15_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_15_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_15_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_15 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_16 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_16 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_16_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_16_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_16_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_16 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_15 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_17 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_17_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_17_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_17_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_17 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_14 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_18 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_18_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_18_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_18_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_18 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_13 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_19 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_19_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_19_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_19_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_19 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_12 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_20 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_20_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_20_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_20_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_20 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_10 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_21 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_21_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_21_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_21_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_21 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_9 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_22 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_22_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_22_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_22_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_22 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_8 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_23 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_fcoord_23_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_23_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_23_1 {Type IO LastRead -1 FirstWrite -1}
		pyr_region_data_23 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_7 {Type IO LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
	gauss_newton_optim_r {
		pyr_region_data {Type I LastRead 67 FirstWrite -1}
		p_read {Type I LastRead 8 FirstWrite -1}
		p_read1 {Type I LastRead 8 FirstWrite -1}
		p_read2 {Type I LastRead 21 FirstWrite -1}
		p_read3 {Type I LastRead 21 FirstWrite -1}
		p_read4 {Type I LastRead 21 FirstWrite -1}
		p_read5 {Type I LastRead 21 FirstWrite -1}
		p_read6 {Type I LastRead 21 FirstWrite -1}
		p_read7 {Type I LastRead 21 FirstWrite -1}
		p_read8 {Type I LastRead 21 FirstWrite -1}
		p_read9 {Type I LastRead 21 FirstWrite -1}
		p_read10 {Type I LastRead 21 FirstWrite -1}
		p_read11 {Type I LastRead 21 FirstWrite -1}
		p_read12 {Type I LastRead 21 FirstWrite -1}
		p_read13 {Type I LastRead 21 FirstWrite -1}
		p_read14 {Type I LastRead 21 FirstWrite -1}
		p_read15 {Type I LastRead 21 FirstWrite -1}
		p_read16 {Type I LastRead 21 FirstWrite -1}
		p_read17 {Type I LastRead 21 FirstWrite -1}
		p_read18 {Type I LastRead 21 FirstWrite -1}
		p_read19 {Type I LastRead 21 FirstWrite -1}
		p_read20 {Type I LastRead 21 FirstWrite -1}
		p_read21 {Type I LastRead 21 FirstWrite -1}
		p_read22 {Type I LastRead 21 FirstWrite -1}
		p_read23 {Type I LastRead 21 FirstWrite -1}
		p_read24 {Type I LastRead 21 FirstWrite -1}
		p_read25 {Type I LastRead 21 FirstWrite -1}
		p_read26 {Type I LastRead 21 FirstWrite -1}
		p_read27 {Type I LastRead 21 FirstWrite -1}
		p_read28 {Type I LastRead 21 FirstWrite -1}
		p_read29 {Type I LastRead 21 FirstWrite -1}
		p_read30 {Type I LastRead 21 FirstWrite -1}
		p_read31 {Type I LastRead 21 FirstWrite -1}
		p_read32 {Type I LastRead 21 FirstWrite -1}
		p_read33 {Type I LastRead 21 FirstWrite -1}
		p_read34 {Type I LastRead 21 FirstWrite -1}
		p_read35 {Type I LastRead 21 FirstWrite -1}
		p_read36 {Type I LastRead 21 FirstWrite -1}
		p_read37 {Type I LastRead 21 FirstWrite -1}
		p_read38 {Type I LastRead 21 FirstWrite -1}
		p_read39 {Type I LastRead 21 FirstWrite -1}
		p_read40 {Type I LastRead 21 FirstWrite -1}
		p_read41 {Type I LastRead 21 FirstWrite -1}
		p_read42 {Type I LastRead 21 FirstWrite -1}
		p_read43 {Type I LastRead 21 FirstWrite -1}
		p_read44 {Type I LastRead 21 FirstWrite -1}
		p_read45 {Type I LastRead 21 FirstWrite -1}
		p_read46 {Type I LastRead 21 FirstWrite -1}
		p_read47 {Type I LastRead 21 FirstWrite -1}
		p_read48 {Type I LastRead 21 FirstWrite -1}
		p_read49 {Type I LastRead 21 FirstWrite -1}
		p_read50 {Type I LastRead 21 FirstWrite -1}
		p_read51 {Type I LastRead 21 FirstWrite -1}
		p_read52 {Type I LastRead 21 FirstWrite -1}
		p_read53 {Type I LastRead 21 FirstWrite -1}
		p_read54 {Type I LastRead 21 FirstWrite -1}
		p_read55 {Type I LastRead 21 FirstWrite -1}
		p_read56 {Type I LastRead 21 FirstWrite -1}
		p_read57 {Type I LastRead 21 FirstWrite -1}
		p_read58 {Type I LastRead 21 FirstWrite -1}
		p_read59 {Type I LastRead 21 FirstWrite -1}
		p_read60 {Type I LastRead 21 FirstWrite -1}
		p_read61 {Type I LastRead 21 FirstWrite -1}
		p_read62 {Type I LastRead 21 FirstWrite -1}
		p_read63 {Type I LastRead 21 FirstWrite -1}
		p_read64 {Type I LastRead 21 FirstWrite -1}
		p_read65 {Type I LastRead 21 FirstWrite -1}
		p_read66 {Type I LastRead 21 FirstWrite -1}
		p_read67 {Type I LastRead 21 FirstWrite -1}
		p_read68 {Type I LastRead 21 FirstWrite -1}
		p_read69 {Type I LastRead 21 FirstWrite -1}
		p_read70 {Type I LastRead 21 FirstWrite -1}
		p_read71 {Type I LastRead 21 FirstWrite -1}
		p_read72 {Type I LastRead 21 FirstWrite -1}
		p_read73 {Type I LastRead 21 FirstWrite -1}
		p_read74 {Type I LastRead 21 FirstWrite -1}
		p_read75 {Type I LastRead 21 FirstWrite -1}
		p_read76 {Type I LastRead 21 FirstWrite -1}
		p_read77 {Type I LastRead 21 FirstWrite -1}
		p_read78 {Type I LastRead 21 FirstWrite -1}
		p_read79 {Type I LastRead 21 FirstWrite -1}
		p_read80 {Type I LastRead 21 FirstWrite -1}
		p_read81 {Type I LastRead 21 FirstWrite -1}
		p_read82 {Type I LastRead 21 FirstWrite -1}
		p_read83 {Type I LastRead 21 FirstWrite -1}
		p_read84 {Type I LastRead 21 FirstWrite -1}
		p_read85 {Type I LastRead 21 FirstWrite -1}
		p_read86 {Type I LastRead 21 FirstWrite -1}
		p_read87 {Type I LastRead 21 FirstWrite -1}
		p_read88 {Type I LastRead 21 FirstWrite -1}
		p_read89 {Type I LastRead 21 FirstWrite -1}
		p_read90 {Type I LastRead 21 FirstWrite -1}
		p_read91 {Type I LastRead 21 FirstWrite -1}
		p_read92 {Type I LastRead 21 FirstWrite -1}
		p_read93 {Type I LastRead 21 FirstWrite -1}
		p_read94 {Type I LastRead 21 FirstWrite -1}
		p_read95 {Type I LastRead 21 FirstWrite -1}
		p_read96 {Type I LastRead 21 FirstWrite -1}
		p_read97 {Type I LastRead 21 FirstWrite -1}
		p_read98 {Type I LastRead 21 FirstWrite -1}
		p_read99 {Type I LastRead 21 FirstWrite -1}
		p_read100 {Type I LastRead 21 FirstWrite -1}
		p_read101 {Type I LastRead 21 FirstWrite -1}
		p_read102 {Type I LastRead 21 FirstWrite -1}
		p_read103 {Type I LastRead 21 FirstWrite -1}
		p_read104 {Type I LastRead 21 FirstWrite -1}
		p_read105 {Type I LastRead 21 FirstWrite -1}
		p_read106 {Type I LastRead 21 FirstWrite -1}
		p_read107 {Type I LastRead 21 FirstWrite -1}
		p_read108 {Type I LastRead 21 FirstWrite -1}
		p_read109 {Type I LastRead 21 FirstWrite -1}
		p_read110 {Type I LastRead 21 FirstWrite -1}
		p_read111 {Type I LastRead 21 FirstWrite -1}
		p_read112 {Type I LastRead 21 FirstWrite -1}
		p_read113 {Type I LastRead 21 FirstWrite -1}
		p_read114 {Type I LastRead 21 FirstWrite -1}
		p_read115 {Type I LastRead 21 FirstWrite -1}
		p_read116 {Type I LastRead 21 FirstWrite -1}
		p_read117 {Type I LastRead 21 FirstWrite -1}
		p_read118 {Type I LastRead 21 FirstWrite -1}
		p_read119 {Type I LastRead 21 FirstWrite -1}
		p_read120 {Type I LastRead 21 FirstWrite -1}
		p_read121 {Type I LastRead 21 FirstWrite -1}
		p_read122 {Type I LastRead 21 FirstWrite -1}
		p_read123 {Type I LastRead 21 FirstWrite -1}
		p_read124 {Type I LastRead 21 FirstWrite -1}
		p_read125 {Type I LastRead 21 FirstWrite -1}
		p_read126 {Type I LastRead 21 FirstWrite -1}
		p_read127 {Type I LastRead 21 FirstWrite -1}
		p_read128 {Type I LastRead 21 FirstWrite -1}
		p_read129 {Type I LastRead 21 FirstWrite -1}
		p_read130 {Type I LastRead 21 FirstWrite -1}
		p_read131 {Type I LastRead 21 FirstWrite -1}
		p_read132 {Type I LastRead 21 FirstWrite -1}
		p_read133 {Type I LastRead 21 FirstWrite -1}
		p_read134 {Type I LastRead 21 FirstWrite -1}
		p_read135 {Type I LastRead 21 FirstWrite -1}
		p_read136 {Type I LastRead 21 FirstWrite -1}
		p_read137 {Type I LastRead 21 FirstWrite -1}
		p_read138 {Type I LastRead 21 FirstWrite -1}
		ref_patch_with_border {Type I LastRead 60 FirstWrite -1}
		cur_px_estimate_0_read {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_1_read {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "102738", "Max" : "107039"}
	, {"Name" : "Interval", "Min" : "102739", "Max" : "107040"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
]}

set Spec2ImplPortList { 
	my_region_data { m_axi {  { m_axi_my_region_data_AWVALID VALID 1 1 }  { m_axi_my_region_data_AWREADY READY 0 1 }  { m_axi_my_region_data_AWADDR ADDR 1 32 }  { m_axi_my_region_data_AWID ID 1 1 }  { m_axi_my_region_data_AWLEN LEN 1 8 }  { m_axi_my_region_data_AWSIZE SIZE 1 3 }  { m_axi_my_region_data_AWBURST BURST 1 2 }  { m_axi_my_region_data_AWLOCK LOCK 1 2 }  { m_axi_my_region_data_AWCACHE CACHE 1 4 }  { m_axi_my_region_data_AWPROT PROT 1 3 }  { m_axi_my_region_data_AWQOS QOS 1 4 }  { m_axi_my_region_data_AWREGION REGION 1 4 }  { m_axi_my_region_data_AWUSER USER 1 1 }  { m_axi_my_region_data_WVALID VALID 1 1 }  { m_axi_my_region_data_WREADY READY 0 1 }  { m_axi_my_region_data_WDATA DATA 1 32 }  { m_axi_my_region_data_WSTRB STRB 1 4 }  { m_axi_my_region_data_WLAST LAST 1 1 }  { m_axi_my_region_data_WID ID 1 1 }  { m_axi_my_region_data_WUSER USER 1 1 }  { m_axi_my_region_data_ARVALID VALID 1 1 }  { m_axi_my_region_data_ARREADY READY 0 1 }  { m_axi_my_region_data_ARADDR ADDR 1 32 }  { m_axi_my_region_data_ARID ID 1 1 }  { m_axi_my_region_data_ARLEN LEN 1 8 }  { m_axi_my_region_data_ARSIZE SIZE 1 3 }  { m_axi_my_region_data_ARBURST BURST 1 2 }  { m_axi_my_region_data_ARLOCK LOCK 1 2 }  { m_axi_my_region_data_ARCACHE CACHE 1 4 }  { m_axi_my_region_data_ARPROT PROT 1 3 }  { m_axi_my_region_data_ARQOS QOS 1 4 }  { m_axi_my_region_data_ARREGION REGION 1 4 }  { m_axi_my_region_data_ARUSER USER 1 1 }  { m_axi_my_region_data_RVALID VALID 0 1 }  { m_axi_my_region_data_RREADY READY 1 1 }  { m_axi_my_region_data_RDATA DATA 0 32 }  { m_axi_my_region_data_RLAST LAST 0 1 }  { m_axi_my_region_data_RID ID 0 1 }  { m_axi_my_region_data_RUSER USER 0 1 }  { m_axi_my_region_data_RRESP RESP 0 2 }  { m_axi_my_region_data_BVALID VALID 0 1 }  { m_axi_my_region_data_BREADY READY 1 1 }  { m_axi_my_region_data_BRESP RESP 0 2 }  { m_axi_my_region_data_BID ID 0 1 }  { m_axi_my_region_data_BUSER USER 0 1 } } }
	my_region_fcoord { m_axi {  { m_axi_my_region_fcoord_AWVALID VALID 1 1 }  { m_axi_my_region_fcoord_AWREADY READY 0 1 }  { m_axi_my_region_fcoord_AWADDR ADDR 1 32 }  { m_axi_my_region_fcoord_AWID ID 1 1 }  { m_axi_my_region_fcoord_AWLEN LEN 1 8 }  { m_axi_my_region_fcoord_AWSIZE SIZE 1 3 }  { m_axi_my_region_fcoord_AWBURST BURST 1 2 }  { m_axi_my_region_fcoord_AWLOCK LOCK 1 2 }  { m_axi_my_region_fcoord_AWCACHE CACHE 1 4 }  { m_axi_my_region_fcoord_AWPROT PROT 1 3 }  { m_axi_my_region_fcoord_AWQOS QOS 1 4 }  { m_axi_my_region_fcoord_AWREGION REGION 1 4 }  { m_axi_my_region_fcoord_AWUSER USER 1 1 }  { m_axi_my_region_fcoord_WVALID VALID 1 1 }  { m_axi_my_region_fcoord_WREADY READY 0 1 }  { m_axi_my_region_fcoord_WDATA DATA 1 32 }  { m_axi_my_region_fcoord_WSTRB STRB 1 4 }  { m_axi_my_region_fcoord_WLAST LAST 1 1 }  { m_axi_my_region_fcoord_WID ID 1 1 }  { m_axi_my_region_fcoord_WUSER USER 1 1 }  { m_axi_my_region_fcoord_ARVALID VALID 1 1 }  { m_axi_my_region_fcoord_ARREADY READY 0 1 }  { m_axi_my_region_fcoord_ARADDR ADDR 1 32 }  { m_axi_my_region_fcoord_ARID ID 1 1 }  { m_axi_my_region_fcoord_ARLEN LEN 1 8 }  { m_axi_my_region_fcoord_ARSIZE SIZE 1 3 }  { m_axi_my_region_fcoord_ARBURST BURST 1 2 }  { m_axi_my_region_fcoord_ARLOCK LOCK 1 2 }  { m_axi_my_region_fcoord_ARCACHE CACHE 1 4 }  { m_axi_my_region_fcoord_ARPROT PROT 1 3 }  { m_axi_my_region_fcoord_ARQOS QOS 1 4 }  { m_axi_my_region_fcoord_ARREGION REGION 1 4 }  { m_axi_my_region_fcoord_ARUSER USER 1 1 }  { m_axi_my_region_fcoord_RVALID VALID 0 1 }  { m_axi_my_region_fcoord_RREADY READY 1 1 }  { m_axi_my_region_fcoord_RDATA DATA 0 32 }  { m_axi_my_region_fcoord_RLAST LAST 0 1 }  { m_axi_my_region_fcoord_RID ID 0 1 }  { m_axi_my_region_fcoord_RUSER USER 0 1 }  { m_axi_my_region_fcoord_RRESP RESP 0 2 }  { m_axi_my_region_fcoord_BVALID VALID 0 1 }  { m_axi_my_region_fcoord_BREADY READY 1 1 }  { m_axi_my_region_fcoord_BRESP RESP 0 2 }  { m_axi_my_region_fcoord_BID ID 0 1 }  { m_axi_my_region_fcoord_BUSER USER 0 1 } } }
	my_patches { m_axi {  { m_axi_my_patches_AWVALID VALID 1 1 }  { m_axi_my_patches_AWREADY READY 0 1 }  { m_axi_my_patches_AWADDR ADDR 1 32 }  { m_axi_my_patches_AWID ID 1 1 }  { m_axi_my_patches_AWLEN LEN 1 8 }  { m_axi_my_patches_AWSIZE SIZE 1 3 }  { m_axi_my_patches_AWBURST BURST 1 2 }  { m_axi_my_patches_AWLOCK LOCK 1 2 }  { m_axi_my_patches_AWCACHE CACHE 1 4 }  { m_axi_my_patches_AWPROT PROT 1 3 }  { m_axi_my_patches_AWQOS QOS 1 4 }  { m_axi_my_patches_AWREGION REGION 1 4 }  { m_axi_my_patches_AWUSER USER 1 1 }  { m_axi_my_patches_WVALID VALID 1 1 }  { m_axi_my_patches_WREADY READY 0 1 }  { m_axi_my_patches_WDATA DATA 1 32 }  { m_axi_my_patches_WSTRB STRB 1 4 }  { m_axi_my_patches_WLAST LAST 1 1 }  { m_axi_my_patches_WID ID 1 1 }  { m_axi_my_patches_WUSER USER 1 1 }  { m_axi_my_patches_ARVALID VALID 1 1 }  { m_axi_my_patches_ARREADY READY 0 1 }  { m_axi_my_patches_ARADDR ADDR 1 32 }  { m_axi_my_patches_ARID ID 1 1 }  { m_axi_my_patches_ARLEN LEN 1 8 }  { m_axi_my_patches_ARSIZE SIZE 1 3 }  { m_axi_my_patches_ARBURST BURST 1 2 }  { m_axi_my_patches_ARLOCK LOCK 1 2 }  { m_axi_my_patches_ARCACHE CACHE 1 4 }  { m_axi_my_patches_ARPROT PROT 1 3 }  { m_axi_my_patches_ARQOS QOS 1 4 }  { m_axi_my_patches_ARREGION REGION 1 4 }  { m_axi_my_patches_ARUSER USER 1 1 }  { m_axi_my_patches_RVALID VALID 0 1 }  { m_axi_my_patches_RREADY READY 1 1 }  { m_axi_my_patches_RDATA DATA 0 32 }  { m_axi_my_patches_RLAST LAST 0 1 }  { m_axi_my_patches_RID ID 0 1 }  { m_axi_my_patches_RUSER USER 0 1 }  { m_axi_my_patches_RRESP RESP 0 2 }  { m_axi_my_patches_BVALID VALID 0 1 }  { m_axi_my_patches_BREADY READY 1 1 }  { m_axi_my_patches_BRESP RESP 0 2 }  { m_axi_my_patches_BID ID 0 1 }  { m_axi_my_patches_BUSER USER 0 1 } } }
	my_pos { m_axi {  { m_axi_my_pos_AWVALID VALID 1 1 }  { m_axi_my_pos_AWREADY READY 0 1 }  { m_axi_my_pos_AWADDR ADDR 1 32 }  { m_axi_my_pos_AWID ID 1 1 }  { m_axi_my_pos_AWLEN LEN 1 8 }  { m_axi_my_pos_AWSIZE SIZE 1 3 }  { m_axi_my_pos_AWBURST BURST 1 2 }  { m_axi_my_pos_AWLOCK LOCK 1 2 }  { m_axi_my_pos_AWCACHE CACHE 1 4 }  { m_axi_my_pos_AWPROT PROT 1 3 }  { m_axi_my_pos_AWQOS QOS 1 4 }  { m_axi_my_pos_AWREGION REGION 1 4 }  { m_axi_my_pos_AWUSER USER 1 1 }  { m_axi_my_pos_WVALID VALID 1 1 }  { m_axi_my_pos_WREADY READY 0 1 }  { m_axi_my_pos_WDATA DATA 1 32 }  { m_axi_my_pos_WSTRB STRB 1 4 }  { m_axi_my_pos_WLAST LAST 1 1 }  { m_axi_my_pos_WID ID 1 1 }  { m_axi_my_pos_WUSER USER 1 1 }  { m_axi_my_pos_ARVALID VALID 1 1 }  { m_axi_my_pos_ARREADY READY 0 1 }  { m_axi_my_pos_ARADDR ADDR 1 32 }  { m_axi_my_pos_ARID ID 1 1 }  { m_axi_my_pos_ARLEN LEN 1 8 }  { m_axi_my_pos_ARSIZE SIZE 1 3 }  { m_axi_my_pos_ARBURST BURST 1 2 }  { m_axi_my_pos_ARLOCK LOCK 1 2 }  { m_axi_my_pos_ARCACHE CACHE 1 4 }  { m_axi_my_pos_ARPROT PROT 1 3 }  { m_axi_my_pos_ARQOS QOS 1 4 }  { m_axi_my_pos_ARREGION REGION 1 4 }  { m_axi_my_pos_ARUSER USER 1 1 }  { m_axi_my_pos_RVALID VALID 0 1 }  { m_axi_my_pos_RREADY READY 1 1 }  { m_axi_my_pos_RDATA DATA 0 32 }  { m_axi_my_pos_RLAST LAST 0 1 }  { m_axi_my_pos_RID ID 0 1 }  { m_axi_my_pos_RUSER USER 0 1 }  { m_axi_my_pos_RRESP RESP 0 2 }  { m_axi_my_pos_BVALID VALID 0 1 }  { m_axi_my_pos_BREADY READY 1 1 }  { m_axi_my_pos_BRESP RESP 0 2 }  { m_axi_my_pos_BID ID 0 1 }  { m_axi_my_pos_BUSER USER 0 1 } } }
	my_debug { m_axi {  { m_axi_my_debug_AWVALID VALID 1 1 }  { m_axi_my_debug_AWREADY READY 0 1 }  { m_axi_my_debug_AWADDR ADDR 1 32 }  { m_axi_my_debug_AWID ID 1 1 }  { m_axi_my_debug_AWLEN LEN 1 8 }  { m_axi_my_debug_AWSIZE SIZE 1 3 }  { m_axi_my_debug_AWBURST BURST 1 2 }  { m_axi_my_debug_AWLOCK LOCK 1 2 }  { m_axi_my_debug_AWCACHE CACHE 1 4 }  { m_axi_my_debug_AWPROT PROT 1 3 }  { m_axi_my_debug_AWQOS QOS 1 4 }  { m_axi_my_debug_AWREGION REGION 1 4 }  { m_axi_my_debug_AWUSER USER 1 1 }  { m_axi_my_debug_WVALID VALID 1 1 }  { m_axi_my_debug_WREADY READY 0 1 }  { m_axi_my_debug_WDATA DATA 1 32 }  { m_axi_my_debug_WSTRB STRB 1 4 }  { m_axi_my_debug_WLAST LAST 1 1 }  { m_axi_my_debug_WID ID 1 1 }  { m_axi_my_debug_WUSER USER 1 1 }  { m_axi_my_debug_ARVALID VALID 1 1 }  { m_axi_my_debug_ARREADY READY 0 1 }  { m_axi_my_debug_ARADDR ADDR 1 32 }  { m_axi_my_debug_ARID ID 1 1 }  { m_axi_my_debug_ARLEN LEN 1 8 }  { m_axi_my_debug_ARSIZE SIZE 1 3 }  { m_axi_my_debug_ARBURST BURST 1 2 }  { m_axi_my_debug_ARLOCK LOCK 1 2 }  { m_axi_my_debug_ARCACHE CACHE 1 4 }  { m_axi_my_debug_ARPROT PROT 1 3 }  { m_axi_my_debug_ARQOS QOS 1 4 }  { m_axi_my_debug_ARREGION REGION 1 4 }  { m_axi_my_debug_ARUSER USER 1 1 }  { m_axi_my_debug_RVALID VALID 0 1 }  { m_axi_my_debug_RREADY READY 1 1 }  { m_axi_my_debug_RDATA DATA 0 32 }  { m_axi_my_debug_RLAST LAST 0 1 }  { m_axi_my_debug_RID ID 0 1 }  { m_axi_my_debug_RUSER USER 0 1 }  { m_axi_my_debug_RRESP RESP 0 2 }  { m_axi_my_debug_BVALID VALID 0 1 }  { m_axi_my_debug_BREADY READY 1 1 }  { m_axi_my_debug_BRESP RESP 0 2 }  { m_axi_my_debug_BID ID 0 1 }  { m_axi_my_debug_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ my_region_data { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_region_fcoord { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_patches { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 0 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_pos { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ my_debug { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
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
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ my_region_data 1 }
	{ my_region_fcoord 1 }
	{ my_patches 1 }
	{ my_pos 1 }
	{ my_debug 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
