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
	{ patches int 8 unused {axi_master 0}  }
	{ pos_r float 32 regular {axi_master 2}  }
	{ debug float 32 regular {axi_master 1}  }
	{ pyr_data_ptr int 64 regular {axi_slave 0}  }
	{ img_w int 16 unused {axi_slave 0}  }
	{ img_h int 16 unused {axi_slave 0}  }
	{ ref_patch_with_border_ptr int 64 unused {axi_slave 0}  }
	{ cur_px_estimate_ptr int 64 regular {axi_slave 0}  }
	{ levels int 128 unused {axi_slave 0}  }
	{ converged int 64 regular {axi_slave 1}  }
	{ n_iter int 32 unused {axi_slave 0}  }
	{ transfer_pyr int 1 regular {axi_slave 0}  }
	{ inv_out int 64 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pyr", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "pyr_data_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "pyr_data_ptr","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "patches", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ref_patch_with_border_ptr","cData": "uint8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "ref_patch_with_border_ptr","bundle": "AXILiteS"},"cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9"],
		"CDFG" : "batch_align2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "90", "EstimateLatencyMax" : "473859",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "pyr", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "pyr_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "pyr_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "patches", "Type" : "MAXI", "Direction" : "I"},
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
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_pos_r_m_axi_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_debug_m_axi_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_fadd_32ns_32ns_32_4_full_dsp_1_U1", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_sitofp_32ns_32_3_1_U2", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.batch_align2D_mux_366_32_1_1_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	batch_align2D {
		pyr {Type I LastRead 9 FirstWrite -1}
		patches {Type I LastRead -1 FirstWrite -1}
		pos_r {Type IO LastRead 42 FirstWrite 26}
		debug {Type O LastRead 36 FirstWrite 36}
		pyr_data_ptr {Type I LastRead 0 FirstWrite -1}
		img_w {Type I LastRead -1 FirstWrite -1}
		img_h {Type I LastRead -1 FirstWrite -1}
		ref_patch_with_border_ptr {Type I LastRead -1 FirstWrite -1}
		cur_px_estimate_ptr {Type I LastRead 0 FirstWrite -1}
		levels {Type I LastRead -1 FirstWrite -1}
		converged {Type O LastRead -1 FirstWrite 26}
		n_iter {Type I LastRead -1 FirstWrite -1}
		transfer_pyr {Type I LastRead 0 FirstWrite -1}
		inv_out {Type I LastRead 0 FirstWrite -1}
		pyr_data {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_0_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_1_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_0 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_2_1 {Type IO LastRead -1 FirstWrite -1}
		cur_px_estimate_3_0 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "90", "Max" : "473859"}
	, {"Name" : "Interval", "Min" : "91", "Max" : "473860"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
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
