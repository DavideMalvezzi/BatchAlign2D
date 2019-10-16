set moduleName batch_align2D
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
set C_modelName {batch_align2D}
set C_modelType { void 0 }
set C_modelArgList {
	{ pyr int 8 regular {axi_master 0}  }
	{ patches int 8 regular {axi_master 0}  }
	{ pos_r float 32 regular {axi_master 2}  }
	{ debug float 32 regular {axi_master 1}  }
	{ pyr_data_ptr int 64 regular {axi_slave 0}  }
	{ img_w int 16 unused {axi_slave 0}  }
	{ img_h int 16 unused {axi_slave 0}  }
	{ ref_patch_with_border_ptr int 64 regular {axi_slave 0}  }
	{ cur_px_estimate_ptr int 64 regular {axi_slave 0}  }
	{ levels int 128 unused {axi_slave 0}  }
	{ converged int 64 regular {axi_slave 1}  }
	{ n_iter int 32 unused {axi_slave 0}  }
	{ transfer_pyr int 1 regular {axi_slave 0}  }
	{ inv_out int 64 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pyr", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "pyr_data_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "pyr_data_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "patches", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ref_patch_with_border_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "ref_patch_with_border_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "pos_r", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "cur_px_estimate_ptr","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "cur_px_estimate_ptr","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "debug", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "inv_out","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "inv_out","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 8,"step" : 1}]}]}]} , 
 	{ "Name" : "pyr_data_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":27}} , 
 	{ "Name" : "img_w", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "img_w","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "img_h", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "img_h","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "ref_patch_with_border_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":28}, "offset_end" : {"in":39}} , 
 	{ "Name" : "cur_px_estimate_ptr", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":51}} , 
 	{ "Name" : "levels", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 128, "direction" : "READONLY", "bitSlice":[{"low":0,"up":127,"cElement": [{"cName": "levels","cData": "uint128","bit_use": { "low": 0,"up": 127},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":32}, "offset_end" : {"in":51}} , 
 	{ "Name" : "converged", "interface" : "axi_slave", "bundle":"param","type":"ap_vld","bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "converged","cData": "uint64","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : {"out":52}, "offset_end" : {"out":63}} , 
 	{ "Name" : "n_iter", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "n_iter","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "transfer_pyr", "interface" : "axi_slave", "bundle":"param","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "transfer_pyr","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "inv_out", "interface" : "axi_slave", "bundle":"ctrl","type":"ap_none","bitwidth" : 64, "direction" : "READONLY", "offset" : {"in":52}, "offset_end" : {"in":63}} ]}
# RTL Port declarations: 
set portNum 217
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_pyr_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_pyr_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_pyr_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_pyr_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_pyr_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_pyr_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_pyr_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_pyr_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_pyr_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_pyr_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_pyr_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_pyr_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_pyr_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_pyr_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_pyr_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_pyr_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_pyr_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_pyr_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_pyr_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_pyr_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_pyr_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_pyr_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_pyr_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_pyr_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_patches_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_AWADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_patches_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_patches_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_patches_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_patches_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_patches_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_patches_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_patches_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_ARADDR sc_out sc_lv 64 signal 1 } 
	{ m_axi_patches_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_patches_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_patches_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_patches_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_patches_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_patches_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_patches_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_patches_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_patches_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_patches_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_patches_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_patches_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_patches_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_patches_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_patches_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_patches_BUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_pos_r_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_AWADDR sc_out sc_lv 64 signal 2 } 
	{ m_axi_pos_r_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_AWLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_pos_r_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_pos_r_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_pos_r_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_pos_r_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_pos_r_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_WDATA sc_out sc_lv 32 signal 2 } 
	{ m_axi_pos_r_WSTRB sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_ARADDR sc_out sc_lv 64 signal 2 } 
	{ m_axi_pos_r_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_ARLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_pos_r_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_pos_r_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_pos_r_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_pos_r_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_pos_r_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_pos_r_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_pos_r_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_RDATA sc_in sc_lv 32 signal 2 } 
	{ m_axi_pos_r_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_pos_r_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_pos_r_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_pos_r_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_pos_r_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_pos_r_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_pos_r_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_pos_r_BUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_debug_AWVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_AWREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_AWADDR sc_out sc_lv 64 signal 3 } 
	{ m_axi_debug_AWID sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_AWLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_debug_AWSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_debug_AWBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_debug_AWLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_debug_AWCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_AWPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_debug_AWQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_AWREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_AWUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_WVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_WREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_WDATA sc_out sc_lv 32 signal 3 } 
	{ m_axi_debug_WSTRB sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_WLAST sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_WID sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_WUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_ARVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_ARREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_ARADDR sc_out sc_lv 64 signal 3 } 
	{ m_axi_debug_ARID sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_ARLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_debug_ARSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_debug_ARBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_debug_ARLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_debug_ARCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_ARPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_debug_ARQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_ARREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_debug_ARUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_debug_RVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_RREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_RDATA sc_in sc_lv 32 signal 3 } 
	{ m_axi_debug_RLAST sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_RID sc_in sc_lv 1 signal 3 } 
	{ m_axi_debug_RUSER sc_in sc_lv 1 signal 3 } 
	{ m_axi_debug_RRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_debug_BVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_debug_BREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_debug_BRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_debug_BID sc_in sc_lv 1 signal 3 } 
	{ m_axi_debug_BUSER sc_in sc_lv 1 signal 3 } 
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
	{ s_axi_param_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_param_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_param_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_param_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_ARADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_param_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_param_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_param_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_param_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_param_BRESP sc_out sc_lv 2 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_ctrl_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl", "role": "AWADDR" },"address":[{"name":"batch_align2D","role":"start","value":"0","valid_bit":"0"},{"name":"batch_align2D","role":"continue","value":"0","valid_bit":"4"},{"name":"batch_align2D","role":"auto_start","value":"0","valid_bit":"7"},{"name":"pyr_data_ptr","role":"data","value":"16"},{"name":"ref_patch_with_border_ptr","role":"data","value":"28"},{"name":"cur_px_estimate_ptr","role":"data","value":"40"},{"name":"inv_out","role":"data","value":"52"}] },
	{ "name": "s_axi_ctrl_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "AWVALID" } },
	{ "name": "s_axi_ctrl_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "AWREADY" } },
	{ "name": "s_axi_ctrl_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "WVALID" } },
	{ "name": "s_axi_ctrl_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ctrl", "role": "WREADY" } },
	{ "name": "s_axi_ctrl_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctrl", "role": "WDATA" } },
	{ "name": "s_axi_ctrl_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctrl", "role": "WSTRB" } },
	{ "name": "s_axi_ctrl_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "ctrl", "role": "ARADDR" },"address":[{"name":"batch_align2D","role":"start","value":"0","valid_bit":"0"},{"name":"batch_align2D","role":"done","value":"0","valid_bit":"1"},{"name":"batch_align2D","role":"idle","value":"0","valid_bit":"2"},{"name":"batch_align2D","role":"ready","value":"0","valid_bit":"3"},{"name":"batch_align2D","role":"auto_start","value":"0","valid_bit":"7"}] },
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
	{ "name": "s_axi_param_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "param", "role": "AWADDR" },"address":[{"name":"img_w","role":"data","value":"16"},{"name":"img_h","role":"data","value":"24"},{"name":"levels","role":"data","value":"32"},{"name":"n_iter","role":"data","value":"64"},{"name":"transfer_pyr","role":"data","value":"72"}] },
	{ "name": "s_axi_param_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "AWVALID" } },
	{ "name": "s_axi_param_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "AWREADY" } },
	{ "name": "s_axi_param_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "WVALID" } },
	{ "name": "s_axi_param_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "param", "role": "WREADY" } },
	{ "name": "s_axi_param_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "param", "role": "WDATA" } },
	{ "name": "s_axi_param_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "param", "role": "WSTRB" } },
	{ "name": "s_axi_param_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "param", "role": "ARADDR" },"address":[{"name":"converged","role":"data","value":"52"}, {"name":"converged","role":"valid","value":"60","valid_bit":"0"}] },
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
 	{ "name": "m_axi_pyr_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "AWVALID" }} , 
 	{ "name": "m_axi_pyr_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "AWREADY" }} , 
 	{ "name": "m_axi_pyr_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "pyr", "role": "AWADDR" }} , 
 	{ "name": "m_axi_pyr_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "AWID" }} , 
 	{ "name": "m_axi_pyr_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pyr", "role": "AWLEN" }} , 
 	{ "name": "m_axi_pyr_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pyr", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_pyr_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "AWBURST" }} , 
 	{ "name": "m_axi_pyr_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_pyr_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_pyr_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pyr", "role": "AWPROT" }} , 
 	{ "name": "m_axi_pyr_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "AWQOS" }} , 
 	{ "name": "m_axi_pyr_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "AWREGION" }} , 
 	{ "name": "m_axi_pyr_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "AWUSER" }} , 
 	{ "name": "m_axi_pyr_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "WVALID" }} , 
 	{ "name": "m_axi_pyr_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "WREADY" }} , 
 	{ "name": "m_axi_pyr_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pyr", "role": "WDATA" }} , 
 	{ "name": "m_axi_pyr_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "WSTRB" }} , 
 	{ "name": "m_axi_pyr_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "WLAST" }} , 
 	{ "name": "m_axi_pyr_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "WID" }} , 
 	{ "name": "m_axi_pyr_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "WUSER" }} , 
 	{ "name": "m_axi_pyr_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "ARVALID" }} , 
 	{ "name": "m_axi_pyr_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "ARREADY" }} , 
 	{ "name": "m_axi_pyr_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "pyr", "role": "ARADDR" }} , 
 	{ "name": "m_axi_pyr_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "ARID" }} , 
 	{ "name": "m_axi_pyr_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pyr", "role": "ARLEN" }} , 
 	{ "name": "m_axi_pyr_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pyr", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_pyr_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "ARBURST" }} , 
 	{ "name": "m_axi_pyr_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_pyr_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_pyr_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pyr", "role": "ARPROT" }} , 
 	{ "name": "m_axi_pyr_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "ARQOS" }} , 
 	{ "name": "m_axi_pyr_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pyr", "role": "ARREGION" }} , 
 	{ "name": "m_axi_pyr_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "ARUSER" }} , 
 	{ "name": "m_axi_pyr_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "RVALID" }} , 
 	{ "name": "m_axi_pyr_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "RREADY" }} , 
 	{ "name": "m_axi_pyr_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pyr", "role": "RDATA" }} , 
 	{ "name": "m_axi_pyr_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "RLAST" }} , 
 	{ "name": "m_axi_pyr_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "RID" }} , 
 	{ "name": "m_axi_pyr_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "RUSER" }} , 
 	{ "name": "m_axi_pyr_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "RRESP" }} , 
 	{ "name": "m_axi_pyr_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "BVALID" }} , 
 	{ "name": "m_axi_pyr_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "BREADY" }} , 
 	{ "name": "m_axi_pyr_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pyr", "role": "BRESP" }} , 
 	{ "name": "m_axi_pyr_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "BID" }} , 
 	{ "name": "m_axi_pyr_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pyr", "role": "BUSER" }} , 
 	{ "name": "m_axi_patches_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "AWVALID" }} , 
 	{ "name": "m_axi_patches_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "AWREADY" }} , 
 	{ "name": "m_axi_patches_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "patches", "role": "AWADDR" }} , 
 	{ "name": "m_axi_patches_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "AWID" }} , 
 	{ "name": "m_axi_patches_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "patches", "role": "AWLEN" }} , 
 	{ "name": "m_axi_patches_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "patches", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_patches_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "AWBURST" }} , 
 	{ "name": "m_axi_patches_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_patches_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_patches_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "patches", "role": "AWPROT" }} , 
 	{ "name": "m_axi_patches_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "AWQOS" }} , 
 	{ "name": "m_axi_patches_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "AWREGION" }} , 
 	{ "name": "m_axi_patches_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "AWUSER" }} , 
 	{ "name": "m_axi_patches_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "WVALID" }} , 
 	{ "name": "m_axi_patches_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "WREADY" }} , 
 	{ "name": "m_axi_patches_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "patches", "role": "WDATA" }} , 
 	{ "name": "m_axi_patches_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "WSTRB" }} , 
 	{ "name": "m_axi_patches_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "WLAST" }} , 
 	{ "name": "m_axi_patches_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "WID" }} , 
 	{ "name": "m_axi_patches_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "WUSER" }} , 
 	{ "name": "m_axi_patches_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "ARVALID" }} , 
 	{ "name": "m_axi_patches_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "ARREADY" }} , 
 	{ "name": "m_axi_patches_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "patches", "role": "ARADDR" }} , 
 	{ "name": "m_axi_patches_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "ARID" }} , 
 	{ "name": "m_axi_patches_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "patches", "role": "ARLEN" }} , 
 	{ "name": "m_axi_patches_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "patches", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_patches_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "ARBURST" }} , 
 	{ "name": "m_axi_patches_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_patches_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_patches_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "patches", "role": "ARPROT" }} , 
 	{ "name": "m_axi_patches_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "ARQOS" }} , 
 	{ "name": "m_axi_patches_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "patches", "role": "ARREGION" }} , 
 	{ "name": "m_axi_patches_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "ARUSER" }} , 
 	{ "name": "m_axi_patches_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "RVALID" }} , 
 	{ "name": "m_axi_patches_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "RREADY" }} , 
 	{ "name": "m_axi_patches_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "patches", "role": "RDATA" }} , 
 	{ "name": "m_axi_patches_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "RLAST" }} , 
 	{ "name": "m_axi_patches_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "RID" }} , 
 	{ "name": "m_axi_patches_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "RUSER" }} , 
 	{ "name": "m_axi_patches_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "RRESP" }} , 
 	{ "name": "m_axi_patches_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "BVALID" }} , 
 	{ "name": "m_axi_patches_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "BREADY" }} , 
 	{ "name": "m_axi_patches_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "patches", "role": "BRESP" }} , 
 	{ "name": "m_axi_patches_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "BID" }} , 
 	{ "name": "m_axi_patches_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "patches", "role": "BUSER" }} , 
 	{ "name": "m_axi_pos_r_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "AWVALID" }} , 
 	{ "name": "m_axi_pos_r_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "AWREADY" }} , 
 	{ "name": "m_axi_pos_r_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "pos_r", "role": "AWADDR" }} , 
 	{ "name": "m_axi_pos_r_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "AWID" }} , 
 	{ "name": "m_axi_pos_r_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pos_r", "role": "AWLEN" }} , 
 	{ "name": "m_axi_pos_r_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pos_r", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_pos_r_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "AWBURST" }} , 
 	{ "name": "m_axi_pos_r_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_pos_r_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_pos_r_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pos_r", "role": "AWPROT" }} , 
 	{ "name": "m_axi_pos_r_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "AWQOS" }} , 
 	{ "name": "m_axi_pos_r_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "AWREGION" }} , 
 	{ "name": "m_axi_pos_r_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "AWUSER" }} , 
 	{ "name": "m_axi_pos_r_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "WVALID" }} , 
 	{ "name": "m_axi_pos_r_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "WREADY" }} , 
 	{ "name": "m_axi_pos_r_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pos_r", "role": "WDATA" }} , 
 	{ "name": "m_axi_pos_r_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "WSTRB" }} , 
 	{ "name": "m_axi_pos_r_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "WLAST" }} , 
 	{ "name": "m_axi_pos_r_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "WID" }} , 
 	{ "name": "m_axi_pos_r_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "WUSER" }} , 
 	{ "name": "m_axi_pos_r_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "ARVALID" }} , 
 	{ "name": "m_axi_pos_r_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "ARREADY" }} , 
 	{ "name": "m_axi_pos_r_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "pos_r", "role": "ARADDR" }} , 
 	{ "name": "m_axi_pos_r_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "ARID" }} , 
 	{ "name": "m_axi_pos_r_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pos_r", "role": "ARLEN" }} , 
 	{ "name": "m_axi_pos_r_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pos_r", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_pos_r_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "ARBURST" }} , 
 	{ "name": "m_axi_pos_r_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_pos_r_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_pos_r_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "pos_r", "role": "ARPROT" }} , 
 	{ "name": "m_axi_pos_r_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "ARQOS" }} , 
 	{ "name": "m_axi_pos_r_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "pos_r", "role": "ARREGION" }} , 
 	{ "name": "m_axi_pos_r_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "ARUSER" }} , 
 	{ "name": "m_axi_pos_r_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "RVALID" }} , 
 	{ "name": "m_axi_pos_r_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "RREADY" }} , 
 	{ "name": "m_axi_pos_r_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "pos_r", "role": "RDATA" }} , 
 	{ "name": "m_axi_pos_r_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "RLAST" }} , 
 	{ "name": "m_axi_pos_r_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "RID" }} , 
 	{ "name": "m_axi_pos_r_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "RUSER" }} , 
 	{ "name": "m_axi_pos_r_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "RRESP" }} , 
 	{ "name": "m_axi_pos_r_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "BVALID" }} , 
 	{ "name": "m_axi_pos_r_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "BREADY" }} , 
 	{ "name": "m_axi_pos_r_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "pos_r", "role": "BRESP" }} , 
 	{ "name": "m_axi_pos_r_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "BID" }} , 
 	{ "name": "m_axi_pos_r_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "pos_r", "role": "BUSER" }} , 
 	{ "name": "m_axi_debug_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "AWVALID" }} , 
 	{ "name": "m_axi_debug_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "AWREADY" }} , 
 	{ "name": "m_axi_debug_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "debug", "role": "AWADDR" }} , 
 	{ "name": "m_axi_debug_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "AWID" }} , 
 	{ "name": "m_axi_debug_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "debug", "role": "AWLEN" }} , 
 	{ "name": "m_axi_debug_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "debug", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_debug_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "AWBURST" }} , 
 	{ "name": "m_axi_debug_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_debug_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_debug_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "debug", "role": "AWPROT" }} , 
 	{ "name": "m_axi_debug_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "AWQOS" }} , 
 	{ "name": "m_axi_debug_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "AWREGION" }} , 
 	{ "name": "m_axi_debug_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "AWUSER" }} , 
 	{ "name": "m_axi_debug_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "WVALID" }} , 
 	{ "name": "m_axi_debug_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "WREADY" }} , 
 	{ "name": "m_axi_debug_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "debug", "role": "WDATA" }} , 
 	{ "name": "m_axi_debug_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "WSTRB" }} , 
 	{ "name": "m_axi_debug_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "WLAST" }} , 
 	{ "name": "m_axi_debug_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "WID" }} , 
 	{ "name": "m_axi_debug_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "WUSER" }} , 
 	{ "name": "m_axi_debug_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "ARVALID" }} , 
 	{ "name": "m_axi_debug_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "ARREADY" }} , 
 	{ "name": "m_axi_debug_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "debug", "role": "ARADDR" }} , 
 	{ "name": "m_axi_debug_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "ARID" }} , 
 	{ "name": "m_axi_debug_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "debug", "role": "ARLEN" }} , 
 	{ "name": "m_axi_debug_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "debug", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_debug_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "ARBURST" }} , 
 	{ "name": "m_axi_debug_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_debug_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_debug_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "debug", "role": "ARPROT" }} , 
 	{ "name": "m_axi_debug_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "ARQOS" }} , 
 	{ "name": "m_axi_debug_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "debug", "role": "ARREGION" }} , 
 	{ "name": "m_axi_debug_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "ARUSER" }} , 
 	{ "name": "m_axi_debug_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "RVALID" }} , 
 	{ "name": "m_axi_debug_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "RREADY" }} , 
 	{ "name": "m_axi_debug_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "debug", "role": "RDATA" }} , 
 	{ "name": "m_axi_debug_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "RLAST" }} , 
 	{ "name": "m_axi_debug_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "RID" }} , 
 	{ "name": "m_axi_debug_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "RUSER" }} , 
 	{ "name": "m_axi_debug_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "RRESP" }} , 
 	{ "name": "m_axi_debug_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "BVALID" }} , 
 	{ "name": "m_axi_debug_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "BREADY" }} , 
 	{ "name": "m_axi_debug_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "debug", "role": "BRESP" }} , 
 	{ "name": "m_axi_debug_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "BID" }} , 
 	{ "name": "m_axi_debug_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "debug", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "31", "54", "77", "100", "101", "102"],
		"CDFG" : "batch_align2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1173", "EstimateLatencyMax" : "474942",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_inverse_hess_3_fu_4698"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_inverse_hess_2_fu_4802"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_inverse_hess_1_fu_4906"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_compute_inverse_hess_fu_5010"}],
		"Port" : [
			{"Name" : "pyr", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "pyr_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "pyr_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "patches", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "patches_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "patches_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "pos_r", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "pos_r_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "pos_r_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "pos_r_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "pos_r_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "pos_r_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "debug", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "debug_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "debug_blk_n_B", "Type" : "RtlSignal"},
					{"Name" : "debug_blk_n_W", "Type" : "RtlSignal"}]},
			{"Name" : "pyr_data_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "img_w", "Type" : "None", "Direction" : "I"},
			{"Name" : "img_h", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_patch_with_border_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "cur_px_estimate_ptr", "Type" : "None", "Direction" : "I"},
			{"Name" : "levels", "Type" : "None", "Direction" : "I"},
			{"Name" : "converged", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "n_iter", "Type" : "None", "Direction" : "I"},
			{"Name" : "transfer_pyr", "Type" : "None", "Direction" : "I"},
			{"Name" : "inv_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "pyr_data", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_399", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_400", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_411", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_422", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_433", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_444", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_455", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_466", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_477", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_488", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_401", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_402", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_403", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_404", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_405", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_406", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_407", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_408", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_409", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_410", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_412", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_413", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_414", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_415", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_416", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_417", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_418", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_419", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_420", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_421", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_423", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_424", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_425", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_426", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_427", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_428", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_429", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_430", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_431", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_432", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_434", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_435", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_436", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_437", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_438", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_439", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_440", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_441", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_442", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_443", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_445", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_446", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_447", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_448", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_449", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_450", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_451", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_452", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_453", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_454", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_456", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_457", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_458", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_459", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_460", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_461", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_462", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_463", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_464", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_465", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_467", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_468", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_469", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_470", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_471", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_472", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_473", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_474", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_475", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_476", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_478", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_479", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_480", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_481", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_482", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_483", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_484", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_485", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_486", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_487", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_489", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_490", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_491", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_492", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_493", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_494", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_495", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_496", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_497", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_498", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_499", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_500", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_511", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_522", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_533", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_544", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_555", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_566", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_577", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_588", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_501", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_502", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_503", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_504", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_505", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_506", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_507", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_508", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_509", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_510", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_512", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_513", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_514", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_515", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_516", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_517", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_518", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_519", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_520", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_521", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_523", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_524", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_525", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_526", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_527", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_528", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_529", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_530", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_531", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_532", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_534", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_535", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_536", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_537", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_538", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_539", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_540", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_541", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_542", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_543", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_545", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_546", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_547", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_548", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_549", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_550", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_551", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_552", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_553", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_554", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_556", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_557", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_558", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_559", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_560", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_561", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_562", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_563", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_564", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_565", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_567", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_568", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_569", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_570", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_571", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_572", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_573", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_574", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_575", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_576", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_578", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_579", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_580", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_581", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_582", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_583", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_584", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_585", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_586", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_587", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_589", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_590", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_591", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_592", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_593", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_594", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_595", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_596", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_597", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_598", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_599", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_600", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_611", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_622", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_633", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_644", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_655", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_666", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_677", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_688", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_601", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_602", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_603", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_604", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_605", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_606", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_607", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_608", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_609", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_610", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_612", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_613", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_614", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_615", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_616", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_617", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_618", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_619", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_620", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_621", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_623", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_624", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_625", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_626", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_627", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_628", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_629", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_630", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_631", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_632", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_634", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_635", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_636", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_637", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_638", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_639", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_640", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_641", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_642", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_643", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_645", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_646", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_647", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_648", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_649", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_650", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_651", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_652", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_653", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_654", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_656", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_657", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_658", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_659", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_660", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_661", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_662", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_663", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_664", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_665", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_667", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_668", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_669", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_670", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_671", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_672", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_673", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_674", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_675", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_676", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_678", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_679", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_680", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_681", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_682", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_683", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_684", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_685", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_686", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_687", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_689", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_690", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_691", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_692", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_693", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_694", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_695", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_696", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_697", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_698", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_99", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_98", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_87", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_76", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_65", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_54", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_43", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_32", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_21", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_97", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_96", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_95", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_94", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_93", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_92", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_91", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_90", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_89", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_88", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_86", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_85", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_84", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_83", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_82", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_81", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_80", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_79", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_78", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_77", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_75", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_74", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_73", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_72", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_71", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_70", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_69", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_68", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_67", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_66", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_64", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_63", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_62", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_61", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_60", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_59", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_58", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_57", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_56", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_55", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_53", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_52", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_51", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_50", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_49", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_48", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_47", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_46", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_45", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_44", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_42", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_41", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_40", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_39", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_38", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_37", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_36", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_35", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_34", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_33", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_31", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_29", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_28", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_27", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_26", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_25", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_24", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_23", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_22", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_20", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "ref_patch_with_borde", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_0_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_1_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_2_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cur_px_estimate_3_0", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pyr_data_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_ctrl_s_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_param_s_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_pyr_m_axi_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_patches_m_axi_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_pos_r_m_axi_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_debug_m_axi_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698", "Parent" : "0", "Child" : ["9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"],
		"CDFG" : "compute_inverse_hess_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "674", "EstimateLatencyMax" : "674",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
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
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U2", "Parent" : "8"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U3", "Parent" : "8"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fsub_32ns_32ns_32_4_full_dsp_1_U4", "Parent" : "8"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U5", "Parent" : "8"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U6", "Parent" : "8"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U7", "Parent" : "8"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U8", "Parent" : "8"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U9", "Parent" : "8"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U10", "Parent" : "8"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U11", "Parent" : "8"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U12", "Parent" : "8"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U13", "Parent" : "8"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U14", "Parent" : "8"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U15", "Parent" : "8"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_fdiv_32ns_32ns_32_8_1_U16", "Parent" : "8"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_sitofp_32s_32_3_1_U17", "Parent" : "8"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_sitofp_32s_32_3_1_U18", "Parent" : "8"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_mux_1007_8_1_1_U19", "Parent" : "8"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_mux_1007_8_1_1_U20", "Parent" : "8"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_mux_1007_8_1_1_U21", "Parent" : "8"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_3_fu_4698.batch_align2D_mux_1007_8_1_1_U22", "Parent" : "8"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802", "Parent" : "0", "Child" : ["32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53"],
		"CDFG" : "compute_inverse_hess_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "674", "EstimateLatencyMax" : "674",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
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
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U129", "Parent" : "31"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U130", "Parent" : "31"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U131", "Parent" : "31"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fsub_32ns_32ns_32_4_full_dsp_1_U132", "Parent" : "31"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U133", "Parent" : "31"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U134", "Parent" : "31"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U135", "Parent" : "31"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U136", "Parent" : "31"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U137", "Parent" : "31"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U138", "Parent" : "31"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U139", "Parent" : "31"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U140", "Parent" : "31"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U141", "Parent" : "31"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U142", "Parent" : "31"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U143", "Parent" : "31"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_fdiv_32ns_32ns_32_8_1_U144", "Parent" : "31"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_sitofp_32s_32_3_1_U145", "Parent" : "31"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_sitofp_32s_32_3_1_U146", "Parent" : "31"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_mux_1007_8_1_1_U147", "Parent" : "31"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_mux_1007_8_1_1_U148", "Parent" : "31"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_mux_1007_8_1_1_U149", "Parent" : "31"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_2_fu_4802.batch_align2D_mux_1007_8_1_1_U150", "Parent" : "31"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906", "Parent" : "0", "Child" : ["55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76"],
		"CDFG" : "compute_inverse_hess_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "674", "EstimateLatencyMax" : "674",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
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
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U251", "Parent" : "54"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U252", "Parent" : "54"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U253", "Parent" : "54"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fsub_32ns_32ns_32_4_full_dsp_1_U254", "Parent" : "54"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U255", "Parent" : "54"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U256", "Parent" : "54"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U257", "Parent" : "54"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U258", "Parent" : "54"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U259", "Parent" : "54"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U260", "Parent" : "54"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U261", "Parent" : "54"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U262", "Parent" : "54"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U263", "Parent" : "54"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U264", "Parent" : "54"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U265", "Parent" : "54"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_fdiv_32ns_32ns_32_8_1_U266", "Parent" : "54"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_sitofp_32s_32_3_1_U267", "Parent" : "54"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_sitofp_32s_32_3_1_U268", "Parent" : "54"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_mux_1007_8_1_1_U269", "Parent" : "54"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_mux_1007_8_1_1_U270", "Parent" : "54"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_mux_1007_8_1_1_U271", "Parent" : "54"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_1_fu_4906.batch_align2D_mux_1007_8_1_1_U272", "Parent" : "54"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010", "Parent" : "0", "Child" : ["78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99"],
		"CDFG" : "compute_inverse_hess",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "674", "EstimateLatencyMax" : "674",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
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
			{"Name" : "p_read99", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U373", "Parent" : "77"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U374", "Parent" : "77"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_faddfsub_32ns_32ns_32_4_full_dsp_1_U375", "Parent" : "77"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fsub_32ns_32ns_32_4_full_dsp_1_U376", "Parent" : "77"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U377", "Parent" : "77"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U378", "Parent" : "77"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U379", "Parent" : "77"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U380", "Parent" : "77"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U381", "Parent" : "77"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fmul_32ns_32ns_32_2_max_dsp_1_U382", "Parent" : "77"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U383", "Parent" : "77"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U384", "Parent" : "77"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U385", "Parent" : "77"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U386", "Parent" : "77"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U387", "Parent" : "77"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_fdiv_32ns_32ns_32_8_1_U388", "Parent" : "77"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_sitofp_32s_32_3_1_U389", "Parent" : "77"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_sitofp_32s_32_3_1_U390", "Parent" : "77"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_mux_1007_8_1_1_U391", "Parent" : "77"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_mux_1007_8_1_1_U392", "Parent" : "77"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_mux_1007_8_1_1_U393", "Parent" : "77"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_compute_inverse_hess_fu_5010.batch_align2D_mux_1007_8_1_1_U394", "Parent" : "77"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_fadd_32ns_32ns_32_4_full_dsp_1_U495", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_sitofp_32ns_32_3_1_U496", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_mux_366_32_1_1_U497", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	batch_align2D {
		pyr {Type I LastRead 9 FirstWrite -1}
		patches {Type I LastRead 17 FirstWrite -1}
		pos_r {Type IO LastRead 50 FirstWrite 34}
		debug {Type O LastRead 44 FirstWrite 44}
		pyr_data_ptr {Type I LastRead 0 FirstWrite -1}
		img_w {Type I LastRead -1 FirstWrite -1}
		img_h {Type I LastRead -1 FirstWrite -1}
		ref_patch_with_border_ptr {Type I LastRead 0 FirstWrite -1}
		cur_px_estimate_ptr {Type I LastRead 0 FirstWrite -1}
		levels {Type I LastRead -1 FirstWrite -1}
		converged {Type O LastRead -1 FirstWrite 34}
		n_iter {Type I LastRead -1 FirstWrite -1}
		transfer_pyr {Type I LastRead 0 FirstWrite -1}
		inv_out {Type I LastRead 0 FirstWrite -1}
		pyr_data {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_399 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_400 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_411 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_422 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_433 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_444 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_455 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_466 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_477 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_488 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_401 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_402 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_403 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_404 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_405 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_406 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_407 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_408 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_409 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_410 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_412 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_413 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_414 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_415 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_416 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_417 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_418 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_419 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_420 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_421 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_423 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_424 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_425 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_426 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_427 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_428 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_429 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_430 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_431 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_432 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_434 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_435 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_436 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_437 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_438 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_439 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_440 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_441 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_442 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_443 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_445 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_446 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_447 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_448 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_449 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_450 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_451 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_452 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_453 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_454 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_456 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_457 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_458 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_459 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_460 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_461 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_462 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_463 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_464 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_465 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_467 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_468 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_469 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_470 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_471 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_472 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_473 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_474 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_475 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_476 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_478 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_479 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_480 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_481 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_482 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_483 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_484 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_485 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_486 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_487 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_489 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_490 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_491 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_492 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_493 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_494 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_495 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_496 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_497 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_498 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_499 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_500 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_511 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_522 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_533 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_544 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_555 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_566 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_577 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_588 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_501 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_502 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_503 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_504 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_505 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_506 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_507 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_508 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_509 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_510 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_512 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_513 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_514 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_515 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_516 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_517 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_518 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_519 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_520 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_521 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_523 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_524 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_525 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_526 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_527 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_528 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_529 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_530 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_531 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_532 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_534 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_535 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_536 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_537 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_538 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_539 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_540 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_541 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_542 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_543 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_545 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_546 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_547 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_548 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_549 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_550 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_551 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_552 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_553 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_554 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_556 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_557 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_558 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_559 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_560 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_561 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_562 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_563 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_564 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_565 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_567 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_568 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_569 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_570 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_571 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_572 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_573 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_574 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_575 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_576 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_578 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_579 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_580 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_581 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_582 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_583 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_584 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_585 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_586 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_587 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_589 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_590 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_591 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_592 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_593 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_594 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_595 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_596 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_597 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_598 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_599 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_600 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_611 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_622 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_633 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_644 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_655 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_666 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_677 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_688 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_601 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_602 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_603 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_604 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_605 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_606 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_607 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_608 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_609 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_610 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_612 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_613 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_614 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_615 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_616 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_617 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_618 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_619 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_620 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_621 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_623 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_624 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_625 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_626 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_627 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_628 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_629 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_630 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_631 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_632 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_634 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_635 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_636 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_637 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_638 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_639 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_640 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_641 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_642 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_643 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_645 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_646 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_647 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_648 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_649 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_650 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_651 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_652 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_653 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_654 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_656 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_657 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_658 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_659 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_660 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_661 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_662 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_663 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_664 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_665 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_667 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_668 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_669 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_670 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_671 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_672 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_673 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_674 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_675 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_676 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_678 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_679 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_680 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_681 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_682 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_683 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_684 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_685 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_686 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_687 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_689 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_690 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_691 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_692 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_693 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_694 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_695 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_696 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_697 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_698 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_99 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_98 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_87 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_76 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_65 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_54 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_43 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_32 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_21 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_10 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_97 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_96 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_95 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_94 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_93 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_92 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_91 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_90 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_89 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_88 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_86 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_85 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_84 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_83 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_82 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_81 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_80 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_79 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_78 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_77 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_75 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_74 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_73 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_72 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_71 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_70 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_69 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_68 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_67 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_66 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_64 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_63 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_62 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_61 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_60 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_59 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_58 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_57 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_56 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_55 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_53 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_52 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_51 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_50 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_49 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_48 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_47 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_46 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_45 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_44 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_42 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_41 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_40 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_39 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_38 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_37 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_36 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_35 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_34 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_33 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_31 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_30 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_29 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_28 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_27 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_26 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_25 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_24 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_23 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_22 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_20 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_19 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_18 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_17 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_16 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_15 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_14 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_13 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_12 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_11 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_9 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_8 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_7 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_6 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_5 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_4 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_3 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_2 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde_1 {Type IO LastRead -1 FirstWrite -1}
		ref_patch_with_borde {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_0 {Type IO LastRead -1 FirstWrite -1}}
	compute_inverse_hess_3 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		p_read96 {Type I LastRead 0 FirstWrite -1}
		p_read97 {Type I LastRead 0 FirstWrite -1}
		p_read98 {Type I LastRead 0 FirstWrite -1}
		p_read99 {Type I LastRead 0 FirstWrite -1}}
	compute_inverse_hess_2 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		p_read96 {Type I LastRead 0 FirstWrite -1}
		p_read97 {Type I LastRead 0 FirstWrite -1}
		p_read98 {Type I LastRead 0 FirstWrite -1}
		p_read99 {Type I LastRead 0 FirstWrite -1}}
	compute_inverse_hess_1 {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		p_read96 {Type I LastRead 0 FirstWrite -1}
		p_read97 {Type I LastRead 0 FirstWrite -1}
		p_read98 {Type I LastRead 0 FirstWrite -1}
		p_read99 {Type I LastRead 0 FirstWrite -1}}
	compute_inverse_hess {
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}
		p_read16 {Type I LastRead 0 FirstWrite -1}
		p_read17 {Type I LastRead 0 FirstWrite -1}
		p_read18 {Type I LastRead 0 FirstWrite -1}
		p_read19 {Type I LastRead 0 FirstWrite -1}
		p_read20 {Type I LastRead 0 FirstWrite -1}
		p_read21 {Type I LastRead 0 FirstWrite -1}
		p_read22 {Type I LastRead 0 FirstWrite -1}
		p_read23 {Type I LastRead 0 FirstWrite -1}
		p_read24 {Type I LastRead 0 FirstWrite -1}
		p_read25 {Type I LastRead 0 FirstWrite -1}
		p_read26 {Type I LastRead 0 FirstWrite -1}
		p_read27 {Type I LastRead 0 FirstWrite -1}
		p_read28 {Type I LastRead 0 FirstWrite -1}
		p_read29 {Type I LastRead 0 FirstWrite -1}
		p_read30 {Type I LastRead 0 FirstWrite -1}
		p_read31 {Type I LastRead 0 FirstWrite -1}
		p_read32 {Type I LastRead 0 FirstWrite -1}
		p_read33 {Type I LastRead 0 FirstWrite -1}
		p_read34 {Type I LastRead 0 FirstWrite -1}
		p_read35 {Type I LastRead 0 FirstWrite -1}
		p_read36 {Type I LastRead 0 FirstWrite -1}
		p_read37 {Type I LastRead 0 FirstWrite -1}
		p_read38 {Type I LastRead 0 FirstWrite -1}
		p_read39 {Type I LastRead 0 FirstWrite -1}
		p_read40 {Type I LastRead 0 FirstWrite -1}
		p_read41 {Type I LastRead 0 FirstWrite -1}
		p_read42 {Type I LastRead 0 FirstWrite -1}
		p_read43 {Type I LastRead 0 FirstWrite -1}
		p_read44 {Type I LastRead 0 FirstWrite -1}
		p_read45 {Type I LastRead 0 FirstWrite -1}
		p_read46 {Type I LastRead 0 FirstWrite -1}
		p_read47 {Type I LastRead 0 FirstWrite -1}
		p_read48 {Type I LastRead 0 FirstWrite -1}
		p_read49 {Type I LastRead 0 FirstWrite -1}
		p_read50 {Type I LastRead 0 FirstWrite -1}
		p_read51 {Type I LastRead 0 FirstWrite -1}
		p_read52 {Type I LastRead 0 FirstWrite -1}
		p_read53 {Type I LastRead 0 FirstWrite -1}
		p_read54 {Type I LastRead 0 FirstWrite -1}
		p_read55 {Type I LastRead 0 FirstWrite -1}
		p_read56 {Type I LastRead 0 FirstWrite -1}
		p_read57 {Type I LastRead 0 FirstWrite -1}
		p_read58 {Type I LastRead 0 FirstWrite -1}
		p_read59 {Type I LastRead 0 FirstWrite -1}
		p_read60 {Type I LastRead 0 FirstWrite -1}
		p_read61 {Type I LastRead 0 FirstWrite -1}
		p_read62 {Type I LastRead 0 FirstWrite -1}
		p_read63 {Type I LastRead 0 FirstWrite -1}
		p_read64 {Type I LastRead 0 FirstWrite -1}
		p_read65 {Type I LastRead 0 FirstWrite -1}
		p_read66 {Type I LastRead 0 FirstWrite -1}
		p_read67 {Type I LastRead 0 FirstWrite -1}
		p_read68 {Type I LastRead 0 FirstWrite -1}
		p_read69 {Type I LastRead 0 FirstWrite -1}
		p_read70 {Type I LastRead 0 FirstWrite -1}
		p_read71 {Type I LastRead 0 FirstWrite -1}
		p_read72 {Type I LastRead 0 FirstWrite -1}
		p_read73 {Type I LastRead 0 FirstWrite -1}
		p_read74 {Type I LastRead 0 FirstWrite -1}
		p_read75 {Type I LastRead 0 FirstWrite -1}
		p_read76 {Type I LastRead 0 FirstWrite -1}
		p_read77 {Type I LastRead 0 FirstWrite -1}
		p_read78 {Type I LastRead 0 FirstWrite -1}
		p_read79 {Type I LastRead 0 FirstWrite -1}
		p_read80 {Type I LastRead 0 FirstWrite -1}
		p_read81 {Type I LastRead 0 FirstWrite -1}
		p_read82 {Type I LastRead 0 FirstWrite -1}
		p_read83 {Type I LastRead 0 FirstWrite -1}
		p_read84 {Type I LastRead 0 FirstWrite -1}
		p_read85 {Type I LastRead 0 FirstWrite -1}
		p_read86 {Type I LastRead 0 FirstWrite -1}
		p_read87 {Type I LastRead 0 FirstWrite -1}
		p_read88 {Type I LastRead 0 FirstWrite -1}
		p_read89 {Type I LastRead 0 FirstWrite -1}
		p_read90 {Type I LastRead 0 FirstWrite -1}
		p_read91 {Type I LastRead 0 FirstWrite -1}
		p_read92 {Type I LastRead 0 FirstWrite -1}
		p_read93 {Type I LastRead 0 FirstWrite -1}
		p_read94 {Type I LastRead 0 FirstWrite -1}
		p_read95 {Type I LastRead 0 FirstWrite -1}
		p_read96 {Type I LastRead 0 FirstWrite -1}
		p_read97 {Type I LastRead 0 FirstWrite -1}
		p_read98 {Type I LastRead 0 FirstWrite -1}
		p_read99 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1173", "Max" : "474942"}
	, {"Name" : "Interval", "Min" : "1174", "Max" : "474943"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
]}

set Spec2ImplPortList { 
	pyr { m_axi {  { m_axi_pyr_AWVALID VALID 1 1 }  { m_axi_pyr_AWREADY READY 0 1 }  { m_axi_pyr_AWADDR ADDR 1 64 }  { m_axi_pyr_AWID ID 1 1 }  { m_axi_pyr_AWLEN LEN 1 8 }  { m_axi_pyr_AWSIZE SIZE 1 3 }  { m_axi_pyr_AWBURST BURST 1 2 }  { m_axi_pyr_AWLOCK LOCK 1 2 }  { m_axi_pyr_AWCACHE CACHE 1 4 }  { m_axi_pyr_AWPROT PROT 1 3 }  { m_axi_pyr_AWQOS QOS 1 4 }  { m_axi_pyr_AWREGION REGION 1 4 }  { m_axi_pyr_AWUSER USER 1 1 }  { m_axi_pyr_WVALID VALID 1 1 }  { m_axi_pyr_WREADY READY 0 1 }  { m_axi_pyr_WDATA DATA 1 32 }  { m_axi_pyr_WSTRB STRB 1 4 }  { m_axi_pyr_WLAST LAST 1 1 }  { m_axi_pyr_WID ID 1 1 }  { m_axi_pyr_WUSER USER 1 1 }  { m_axi_pyr_ARVALID VALID 1 1 }  { m_axi_pyr_ARREADY READY 0 1 }  { m_axi_pyr_ARADDR ADDR 1 64 }  { m_axi_pyr_ARID ID 1 1 }  { m_axi_pyr_ARLEN LEN 1 8 }  { m_axi_pyr_ARSIZE SIZE 1 3 }  { m_axi_pyr_ARBURST BURST 1 2 }  { m_axi_pyr_ARLOCK LOCK 1 2 }  { m_axi_pyr_ARCACHE CACHE 1 4 }  { m_axi_pyr_ARPROT PROT 1 3 }  { m_axi_pyr_ARQOS QOS 1 4 }  { m_axi_pyr_ARREGION REGION 1 4 }  { m_axi_pyr_ARUSER USER 1 1 }  { m_axi_pyr_RVALID VALID 0 1 }  { m_axi_pyr_RREADY READY 1 1 }  { m_axi_pyr_RDATA DATA 0 32 }  { m_axi_pyr_RLAST LAST 0 1 }  { m_axi_pyr_RID ID 0 1 }  { m_axi_pyr_RUSER USER 0 1 }  { m_axi_pyr_RRESP RESP 0 2 }  { m_axi_pyr_BVALID VALID 0 1 }  { m_axi_pyr_BREADY READY 1 1 }  { m_axi_pyr_BRESP RESP 0 2 }  { m_axi_pyr_BID ID 0 1 }  { m_axi_pyr_BUSER USER 0 1 } } }
	patches { m_axi {  { m_axi_patches_AWVALID VALID 1 1 }  { m_axi_patches_AWREADY READY 0 1 }  { m_axi_patches_AWADDR ADDR 1 64 }  { m_axi_patches_AWID ID 1 1 }  { m_axi_patches_AWLEN LEN 1 8 }  { m_axi_patches_AWSIZE SIZE 1 3 }  { m_axi_patches_AWBURST BURST 1 2 }  { m_axi_patches_AWLOCK LOCK 1 2 }  { m_axi_patches_AWCACHE CACHE 1 4 }  { m_axi_patches_AWPROT PROT 1 3 }  { m_axi_patches_AWQOS QOS 1 4 }  { m_axi_patches_AWREGION REGION 1 4 }  { m_axi_patches_AWUSER USER 1 1 }  { m_axi_patches_WVALID VALID 1 1 }  { m_axi_patches_WREADY READY 0 1 }  { m_axi_patches_WDATA DATA 1 32 }  { m_axi_patches_WSTRB STRB 1 4 }  { m_axi_patches_WLAST LAST 1 1 }  { m_axi_patches_WID ID 1 1 }  { m_axi_patches_WUSER USER 1 1 }  { m_axi_patches_ARVALID VALID 1 1 }  { m_axi_patches_ARREADY READY 0 1 }  { m_axi_patches_ARADDR ADDR 1 64 }  { m_axi_patches_ARID ID 1 1 }  { m_axi_patches_ARLEN LEN 1 8 }  { m_axi_patches_ARSIZE SIZE 1 3 }  { m_axi_patches_ARBURST BURST 1 2 }  { m_axi_patches_ARLOCK LOCK 1 2 }  { m_axi_patches_ARCACHE CACHE 1 4 }  { m_axi_patches_ARPROT PROT 1 3 }  { m_axi_patches_ARQOS QOS 1 4 }  { m_axi_patches_ARREGION REGION 1 4 }  { m_axi_patches_ARUSER USER 1 1 }  { m_axi_patches_RVALID VALID 0 1 }  { m_axi_patches_RREADY READY 1 1 }  { m_axi_patches_RDATA DATA 0 32 }  { m_axi_patches_RLAST LAST 0 1 }  { m_axi_patches_RID ID 0 1 }  { m_axi_patches_RUSER USER 0 1 }  { m_axi_patches_RRESP RESP 0 2 }  { m_axi_patches_BVALID VALID 0 1 }  { m_axi_patches_BREADY READY 1 1 }  { m_axi_patches_BRESP RESP 0 2 }  { m_axi_patches_BID ID 0 1 }  { m_axi_patches_BUSER USER 0 1 } } }
	pos_r { m_axi {  { m_axi_pos_r_AWVALID VALID 1 1 }  { m_axi_pos_r_AWREADY READY 0 1 }  { m_axi_pos_r_AWADDR ADDR 1 64 }  { m_axi_pos_r_AWID ID 1 1 }  { m_axi_pos_r_AWLEN LEN 1 8 }  { m_axi_pos_r_AWSIZE SIZE 1 3 }  { m_axi_pos_r_AWBURST BURST 1 2 }  { m_axi_pos_r_AWLOCK LOCK 1 2 }  { m_axi_pos_r_AWCACHE CACHE 1 4 }  { m_axi_pos_r_AWPROT PROT 1 3 }  { m_axi_pos_r_AWQOS QOS 1 4 }  { m_axi_pos_r_AWREGION REGION 1 4 }  { m_axi_pos_r_AWUSER USER 1 1 }  { m_axi_pos_r_WVALID VALID 1 1 }  { m_axi_pos_r_WREADY READY 0 1 }  { m_axi_pos_r_WDATA DATA 1 32 }  { m_axi_pos_r_WSTRB STRB 1 4 }  { m_axi_pos_r_WLAST LAST 1 1 }  { m_axi_pos_r_WID ID 1 1 }  { m_axi_pos_r_WUSER USER 1 1 }  { m_axi_pos_r_ARVALID VALID 1 1 }  { m_axi_pos_r_ARREADY READY 0 1 }  { m_axi_pos_r_ARADDR ADDR 1 64 }  { m_axi_pos_r_ARID ID 1 1 }  { m_axi_pos_r_ARLEN LEN 1 8 }  { m_axi_pos_r_ARSIZE SIZE 1 3 }  { m_axi_pos_r_ARBURST BURST 1 2 }  { m_axi_pos_r_ARLOCK LOCK 1 2 }  { m_axi_pos_r_ARCACHE CACHE 1 4 }  { m_axi_pos_r_ARPROT PROT 1 3 }  { m_axi_pos_r_ARQOS QOS 1 4 }  { m_axi_pos_r_ARREGION REGION 1 4 }  { m_axi_pos_r_ARUSER USER 1 1 }  { m_axi_pos_r_RVALID VALID 0 1 }  { m_axi_pos_r_RREADY READY 1 1 }  { m_axi_pos_r_RDATA DATA 0 32 }  { m_axi_pos_r_RLAST LAST 0 1 }  { m_axi_pos_r_RID ID 0 1 }  { m_axi_pos_r_RUSER USER 0 1 }  { m_axi_pos_r_RRESP RESP 0 2 }  { m_axi_pos_r_BVALID VALID 0 1 }  { m_axi_pos_r_BREADY READY 1 1 }  { m_axi_pos_r_BRESP RESP 0 2 }  { m_axi_pos_r_BID ID 0 1 }  { m_axi_pos_r_BUSER USER 0 1 } } }
	debug { m_axi {  { m_axi_debug_AWVALID VALID 1 1 }  { m_axi_debug_AWREADY READY 0 1 }  { m_axi_debug_AWADDR ADDR 1 64 }  { m_axi_debug_AWID ID 1 1 }  { m_axi_debug_AWLEN LEN 1 8 }  { m_axi_debug_AWSIZE SIZE 1 3 }  { m_axi_debug_AWBURST BURST 1 2 }  { m_axi_debug_AWLOCK LOCK 1 2 }  { m_axi_debug_AWCACHE CACHE 1 4 }  { m_axi_debug_AWPROT PROT 1 3 }  { m_axi_debug_AWQOS QOS 1 4 }  { m_axi_debug_AWREGION REGION 1 4 }  { m_axi_debug_AWUSER USER 1 1 }  { m_axi_debug_WVALID VALID 1 1 }  { m_axi_debug_WREADY READY 0 1 }  { m_axi_debug_WDATA DATA 1 32 }  { m_axi_debug_WSTRB STRB 1 4 }  { m_axi_debug_WLAST LAST 1 1 }  { m_axi_debug_WID ID 1 1 }  { m_axi_debug_WUSER USER 1 1 }  { m_axi_debug_ARVALID VALID 1 1 }  { m_axi_debug_ARREADY READY 0 1 }  { m_axi_debug_ARADDR ADDR 1 64 }  { m_axi_debug_ARID ID 1 1 }  { m_axi_debug_ARLEN LEN 1 8 }  { m_axi_debug_ARSIZE SIZE 1 3 }  { m_axi_debug_ARBURST BURST 1 2 }  { m_axi_debug_ARLOCK LOCK 1 2 }  { m_axi_debug_ARCACHE CACHE 1 4 }  { m_axi_debug_ARPROT PROT 1 3 }  { m_axi_debug_ARQOS QOS 1 4 }  { m_axi_debug_ARREGION REGION 1 4 }  { m_axi_debug_ARUSER USER 1 1 }  { m_axi_debug_RVALID VALID 0 1 }  { m_axi_debug_RREADY READY 1 1 }  { m_axi_debug_RDATA DATA 0 32 }  { m_axi_debug_RLAST LAST 0 1 }  { m_axi_debug_RID ID 0 1 }  { m_axi_debug_RUSER USER 0 1 }  { m_axi_debug_RRESP RESP 0 2 }  { m_axi_debug_BVALID VALID 0 1 }  { m_axi_debug_BREADY READY 1 1 }  { m_axi_debug_BRESP RESP 0 2 }  { m_axi_debug_BID ID 0 1 }  { m_axi_debug_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ pyr { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ patches { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ pos_r { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ debug { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ pyr 1 }
	{ patches 1 }
	{ pos_r 1 }
	{ debug 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ pyr 1 }
	{ patches 1 }
	{ pos_r 1 }
	{ debug 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
