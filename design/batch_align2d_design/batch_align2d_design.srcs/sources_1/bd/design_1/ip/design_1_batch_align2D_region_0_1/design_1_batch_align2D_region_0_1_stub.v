// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (lin64) Build 2405991 Thu Dec  6 23:36:41 MST 2018
// Date        : Sun Jan  5 21:04:02 2020
// Host        : compute.eees.dei.unibo.it running 64-bit CentOS Linux release 7.6.1810 (Core)
// Command     : write_verilog -force -mode synth_stub
//               /home/dmalvezzi/batch_align2d/design/batch_align2d_design/batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_batch_align2D_region_0_1/design_1_batch_align2D_region_0_1_stub.v
// Design      : design_1_batch_align2D_region_0_1
// Purpose     : Stub declaration of top-level module interface
// Device      : xczu9eg-ffvb1156-2-e
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "batch_align2D_region,Vivado 2018.3" *)
module design_1_batch_align2D_region_0_1(s_axi_ctrl_AWADDR, s_axi_ctrl_AWVALID, 
  s_axi_ctrl_AWREADY, s_axi_ctrl_WDATA, s_axi_ctrl_WSTRB, s_axi_ctrl_WVALID, 
  s_axi_ctrl_WREADY, s_axi_ctrl_BRESP, s_axi_ctrl_BVALID, s_axi_ctrl_BREADY, 
  s_axi_ctrl_ARADDR, s_axi_ctrl_ARVALID, s_axi_ctrl_ARREADY, s_axi_ctrl_RDATA, 
  s_axi_ctrl_RRESP, s_axi_ctrl_RVALID, s_axi_ctrl_RREADY, s_axi_param_AWADDR, 
  s_axi_param_AWVALID, s_axi_param_AWREADY, s_axi_param_WDATA, s_axi_param_WSTRB, 
  s_axi_param_WVALID, s_axi_param_WREADY, s_axi_param_BRESP, s_axi_param_BVALID, 
  s_axi_param_BREADY, s_axi_param_ARADDR, s_axi_param_ARVALID, s_axi_param_ARREADY, 
  s_axi_param_RDATA, s_axi_param_RRESP, s_axi_param_RVALID, s_axi_param_RREADY, ap_clk, 
  ap_rst_n, interrupt, m_axi_my_region_data_AWADDR, m_axi_my_region_data_AWLEN, 
  m_axi_my_region_data_AWSIZE, m_axi_my_region_data_AWBURST, 
  m_axi_my_region_data_AWLOCK, m_axi_my_region_data_AWREGION, 
  m_axi_my_region_data_AWCACHE, m_axi_my_region_data_AWPROT, 
  m_axi_my_region_data_AWQOS, m_axi_my_region_data_AWVALID, 
  m_axi_my_region_data_AWREADY, m_axi_my_region_data_WDATA, m_axi_my_region_data_WSTRB, 
  m_axi_my_region_data_WLAST, m_axi_my_region_data_WVALID, m_axi_my_region_data_WREADY, 
  m_axi_my_region_data_BRESP, m_axi_my_region_data_BVALID, m_axi_my_region_data_BREADY, 
  m_axi_my_region_data_ARADDR, m_axi_my_region_data_ARLEN, m_axi_my_region_data_ARSIZE, 
  m_axi_my_region_data_ARBURST, m_axi_my_region_data_ARLOCK, 
  m_axi_my_region_data_ARREGION, m_axi_my_region_data_ARCACHE, 
  m_axi_my_region_data_ARPROT, m_axi_my_region_data_ARQOS, 
  m_axi_my_region_data_ARVALID, m_axi_my_region_data_ARREADY, 
  m_axi_my_region_data_RDATA, m_axi_my_region_data_RRESP, m_axi_my_region_data_RLAST, 
  m_axi_my_region_data_RVALID, m_axi_my_region_data_RREADY, 
  m_axi_my_region_fcoord_AWADDR, m_axi_my_region_fcoord_AWLEN, 
  m_axi_my_region_fcoord_AWSIZE, m_axi_my_region_fcoord_AWBURST, 
  m_axi_my_region_fcoord_AWLOCK, m_axi_my_region_fcoord_AWREGION, 
  m_axi_my_region_fcoord_AWCACHE, m_axi_my_region_fcoord_AWPROT, 
  m_axi_my_region_fcoord_AWQOS, m_axi_my_region_fcoord_AWVALID, 
  m_axi_my_region_fcoord_AWREADY, m_axi_my_region_fcoord_WDATA, 
  m_axi_my_region_fcoord_WSTRB, m_axi_my_region_fcoord_WLAST, 
  m_axi_my_region_fcoord_WVALID, m_axi_my_region_fcoord_WREADY, 
  m_axi_my_region_fcoord_BRESP, m_axi_my_region_fcoord_BVALID, 
  m_axi_my_region_fcoord_BREADY, m_axi_my_region_fcoord_ARADDR, 
  m_axi_my_region_fcoord_ARLEN, m_axi_my_region_fcoord_ARSIZE, 
  m_axi_my_region_fcoord_ARBURST, m_axi_my_region_fcoord_ARLOCK, 
  m_axi_my_region_fcoord_ARREGION, m_axi_my_region_fcoord_ARCACHE, 
  m_axi_my_region_fcoord_ARPROT, m_axi_my_region_fcoord_ARQOS, 
  m_axi_my_region_fcoord_ARVALID, m_axi_my_region_fcoord_ARREADY, 
  m_axi_my_region_fcoord_RDATA, m_axi_my_region_fcoord_RRESP, 
  m_axi_my_region_fcoord_RLAST, m_axi_my_region_fcoord_RVALID, 
  m_axi_my_region_fcoord_RREADY, m_axi_my_patches_AWADDR, m_axi_my_patches_AWLEN, 
  m_axi_my_patches_AWSIZE, m_axi_my_patches_AWBURST, m_axi_my_patches_AWLOCK, 
  m_axi_my_patches_AWREGION, m_axi_my_patches_AWCACHE, m_axi_my_patches_AWPROT, 
  m_axi_my_patches_AWQOS, m_axi_my_patches_AWVALID, m_axi_my_patches_AWREADY, 
  m_axi_my_patches_WDATA, m_axi_my_patches_WSTRB, m_axi_my_patches_WLAST, 
  m_axi_my_patches_WVALID, m_axi_my_patches_WREADY, m_axi_my_patches_BRESP, 
  m_axi_my_patches_BVALID, m_axi_my_patches_BREADY, m_axi_my_patches_ARADDR, 
  m_axi_my_patches_ARLEN, m_axi_my_patches_ARSIZE, m_axi_my_patches_ARBURST, 
  m_axi_my_patches_ARLOCK, m_axi_my_patches_ARREGION, m_axi_my_patches_ARCACHE, 
  m_axi_my_patches_ARPROT, m_axi_my_patches_ARQOS, m_axi_my_patches_ARVALID, 
  m_axi_my_patches_ARREADY, m_axi_my_patches_RDATA, m_axi_my_patches_RRESP, 
  m_axi_my_patches_RLAST, m_axi_my_patches_RVALID, m_axi_my_patches_RREADY, 
  m_axi_my_pos_AWADDR, m_axi_my_pos_AWLEN, m_axi_my_pos_AWSIZE, m_axi_my_pos_AWBURST, 
  m_axi_my_pos_AWLOCK, m_axi_my_pos_AWREGION, m_axi_my_pos_AWCACHE, m_axi_my_pos_AWPROT, 
  m_axi_my_pos_AWQOS, m_axi_my_pos_AWVALID, m_axi_my_pos_AWREADY, m_axi_my_pos_WDATA, 
  m_axi_my_pos_WSTRB, m_axi_my_pos_WLAST, m_axi_my_pos_WVALID, m_axi_my_pos_WREADY, 
  m_axi_my_pos_BRESP, m_axi_my_pos_BVALID, m_axi_my_pos_BREADY, m_axi_my_pos_ARADDR, 
  m_axi_my_pos_ARLEN, m_axi_my_pos_ARSIZE, m_axi_my_pos_ARBURST, m_axi_my_pos_ARLOCK, 
  m_axi_my_pos_ARREGION, m_axi_my_pos_ARCACHE, m_axi_my_pos_ARPROT, m_axi_my_pos_ARQOS, 
  m_axi_my_pos_ARVALID, m_axi_my_pos_ARREADY, m_axi_my_pos_RDATA, m_axi_my_pos_RRESP, 
  m_axi_my_pos_RLAST, m_axi_my_pos_RVALID, m_axi_my_pos_RREADY, m_axi_my_debug_AWADDR, 
  m_axi_my_debug_AWLEN, m_axi_my_debug_AWSIZE, m_axi_my_debug_AWBURST, 
  m_axi_my_debug_AWLOCK, m_axi_my_debug_AWREGION, m_axi_my_debug_AWCACHE, 
  m_axi_my_debug_AWPROT, m_axi_my_debug_AWQOS, m_axi_my_debug_AWVALID, 
  m_axi_my_debug_AWREADY, m_axi_my_debug_WDATA, m_axi_my_debug_WSTRB, 
  m_axi_my_debug_WLAST, m_axi_my_debug_WVALID, m_axi_my_debug_WREADY, 
  m_axi_my_debug_BRESP, m_axi_my_debug_BVALID, m_axi_my_debug_BREADY, 
  m_axi_my_debug_ARADDR, m_axi_my_debug_ARLEN, m_axi_my_debug_ARSIZE, 
  m_axi_my_debug_ARBURST, m_axi_my_debug_ARLOCK, m_axi_my_debug_ARREGION, 
  m_axi_my_debug_ARCACHE, m_axi_my_debug_ARPROT, m_axi_my_debug_ARQOS, 
  m_axi_my_debug_ARVALID, m_axi_my_debug_ARREADY, m_axi_my_debug_RDATA, 
  m_axi_my_debug_RRESP, m_axi_my_debug_RLAST, m_axi_my_debug_RVALID, 
  m_axi_my_debug_RREADY, m_axi_my_debug_array_AWADDR, m_axi_my_debug_array_AWLEN, 
  m_axi_my_debug_array_AWSIZE, m_axi_my_debug_array_AWBURST, 
  m_axi_my_debug_array_AWLOCK, m_axi_my_debug_array_AWREGION, 
  m_axi_my_debug_array_AWCACHE, m_axi_my_debug_array_AWPROT, 
  m_axi_my_debug_array_AWQOS, m_axi_my_debug_array_AWVALID, 
  m_axi_my_debug_array_AWREADY, m_axi_my_debug_array_WDATA, m_axi_my_debug_array_WSTRB, 
  m_axi_my_debug_array_WLAST, m_axi_my_debug_array_WVALID, m_axi_my_debug_array_WREADY, 
  m_axi_my_debug_array_BRESP, m_axi_my_debug_array_BVALID, m_axi_my_debug_array_BREADY, 
  m_axi_my_debug_array_ARADDR, m_axi_my_debug_array_ARLEN, m_axi_my_debug_array_ARSIZE, 
  m_axi_my_debug_array_ARBURST, m_axi_my_debug_array_ARLOCK, 
  m_axi_my_debug_array_ARREGION, m_axi_my_debug_array_ARCACHE, 
  m_axi_my_debug_array_ARPROT, m_axi_my_debug_array_ARQOS, 
  m_axi_my_debug_array_ARVALID, m_axi_my_debug_array_ARREADY, 
  m_axi_my_debug_array_RDATA, m_axi_my_debug_array_RRESP, m_axi_my_debug_array_RLAST, 
  m_axi_my_debug_array_RVALID, m_axi_my_debug_array_RREADY)
/* synthesis syn_black_box black_box_pad_pin="s_axi_ctrl_AWADDR[5:0],s_axi_ctrl_AWVALID,s_axi_ctrl_AWREADY,s_axi_ctrl_WDATA[31:0],s_axi_ctrl_WSTRB[3:0],s_axi_ctrl_WVALID,s_axi_ctrl_WREADY,s_axi_ctrl_BRESP[1:0],s_axi_ctrl_BVALID,s_axi_ctrl_BREADY,s_axi_ctrl_ARADDR[5:0],s_axi_ctrl_ARVALID,s_axi_ctrl_ARREADY,s_axi_ctrl_RDATA[31:0],s_axi_ctrl_RRESP[1:0],s_axi_ctrl_RVALID,s_axi_ctrl_RREADY,s_axi_param_AWADDR[5:0],s_axi_param_AWVALID,s_axi_param_AWREADY,s_axi_param_WDATA[31:0],s_axi_param_WSTRB[3:0],s_axi_param_WVALID,s_axi_param_WREADY,s_axi_param_BRESP[1:0],s_axi_param_BVALID,s_axi_param_BREADY,s_axi_param_ARADDR[5:0],s_axi_param_ARVALID,s_axi_param_ARREADY,s_axi_param_RDATA[31:0],s_axi_param_RRESP[1:0],s_axi_param_RVALID,s_axi_param_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_my_region_data_AWADDR[31:0],m_axi_my_region_data_AWLEN[7:0],m_axi_my_region_data_AWSIZE[2:0],m_axi_my_region_data_AWBURST[1:0],m_axi_my_region_data_AWLOCK[1:0],m_axi_my_region_data_AWREGION[3:0],m_axi_my_region_data_AWCACHE[3:0],m_axi_my_region_data_AWPROT[2:0],m_axi_my_region_data_AWQOS[3:0],m_axi_my_region_data_AWVALID,m_axi_my_region_data_AWREADY,m_axi_my_region_data_WDATA[31:0],m_axi_my_region_data_WSTRB[3:0],m_axi_my_region_data_WLAST,m_axi_my_region_data_WVALID,m_axi_my_region_data_WREADY,m_axi_my_region_data_BRESP[1:0],m_axi_my_region_data_BVALID,m_axi_my_region_data_BREADY,m_axi_my_region_data_ARADDR[31:0],m_axi_my_region_data_ARLEN[7:0],m_axi_my_region_data_ARSIZE[2:0],m_axi_my_region_data_ARBURST[1:0],m_axi_my_region_data_ARLOCK[1:0],m_axi_my_region_data_ARREGION[3:0],m_axi_my_region_data_ARCACHE[3:0],m_axi_my_region_data_ARPROT[2:0],m_axi_my_region_data_ARQOS[3:0],m_axi_my_region_data_ARVALID,m_axi_my_region_data_ARREADY,m_axi_my_region_data_RDATA[31:0],m_axi_my_region_data_RRESP[1:0],m_axi_my_region_data_RLAST,m_axi_my_region_data_RVALID,m_axi_my_region_data_RREADY,m_axi_my_region_fcoord_AWADDR[31:0],m_axi_my_region_fcoord_AWLEN[7:0],m_axi_my_region_fcoord_AWSIZE[2:0],m_axi_my_region_fcoord_AWBURST[1:0],m_axi_my_region_fcoord_AWLOCK[1:0],m_axi_my_region_fcoord_AWREGION[3:0],m_axi_my_region_fcoord_AWCACHE[3:0],m_axi_my_region_fcoord_AWPROT[2:0],m_axi_my_region_fcoord_AWQOS[3:0],m_axi_my_region_fcoord_AWVALID,m_axi_my_region_fcoord_AWREADY,m_axi_my_region_fcoord_WDATA[31:0],m_axi_my_region_fcoord_WSTRB[3:0],m_axi_my_region_fcoord_WLAST,m_axi_my_region_fcoord_WVALID,m_axi_my_region_fcoord_WREADY,m_axi_my_region_fcoord_BRESP[1:0],m_axi_my_region_fcoord_BVALID,m_axi_my_region_fcoord_BREADY,m_axi_my_region_fcoord_ARADDR[31:0],m_axi_my_region_fcoord_ARLEN[7:0],m_axi_my_region_fcoord_ARSIZE[2:0],m_axi_my_region_fcoord_ARBURST[1:0],m_axi_my_region_fcoord_ARLOCK[1:0],m_axi_my_region_fcoord_ARREGION[3:0],m_axi_my_region_fcoord_ARCACHE[3:0],m_axi_my_region_fcoord_ARPROT[2:0],m_axi_my_region_fcoord_ARQOS[3:0],m_axi_my_region_fcoord_ARVALID,m_axi_my_region_fcoord_ARREADY,m_axi_my_region_fcoord_RDATA[31:0],m_axi_my_region_fcoord_RRESP[1:0],m_axi_my_region_fcoord_RLAST,m_axi_my_region_fcoord_RVALID,m_axi_my_region_fcoord_RREADY,m_axi_my_patches_AWADDR[31:0],m_axi_my_patches_AWLEN[7:0],m_axi_my_patches_AWSIZE[2:0],m_axi_my_patches_AWBURST[1:0],m_axi_my_patches_AWLOCK[1:0],m_axi_my_patches_AWREGION[3:0],m_axi_my_patches_AWCACHE[3:0],m_axi_my_patches_AWPROT[2:0],m_axi_my_patches_AWQOS[3:0],m_axi_my_patches_AWVALID,m_axi_my_patches_AWREADY,m_axi_my_patches_WDATA[31:0],m_axi_my_patches_WSTRB[3:0],m_axi_my_patches_WLAST,m_axi_my_patches_WVALID,m_axi_my_patches_WREADY,m_axi_my_patches_BRESP[1:0],m_axi_my_patches_BVALID,m_axi_my_patches_BREADY,m_axi_my_patches_ARADDR[31:0],m_axi_my_patches_ARLEN[7:0],m_axi_my_patches_ARSIZE[2:0],m_axi_my_patches_ARBURST[1:0],m_axi_my_patches_ARLOCK[1:0],m_axi_my_patches_ARREGION[3:0],m_axi_my_patches_ARCACHE[3:0],m_axi_my_patches_ARPROT[2:0],m_axi_my_patches_ARQOS[3:0],m_axi_my_patches_ARVALID,m_axi_my_patches_ARREADY,m_axi_my_patches_RDATA[31:0],m_axi_my_patches_RRESP[1:0],m_axi_my_patches_RLAST,m_axi_my_patches_RVALID,m_axi_my_patches_RREADY,m_axi_my_pos_AWADDR[31:0],m_axi_my_pos_AWLEN[7:0],m_axi_my_pos_AWSIZE[2:0],m_axi_my_pos_AWBURST[1:0],m_axi_my_pos_AWLOCK[1:0],m_axi_my_pos_AWREGION[3:0],m_axi_my_pos_AWCACHE[3:0],m_axi_my_pos_AWPROT[2:0],m_axi_my_pos_AWQOS[3:0],m_axi_my_pos_AWVALID,m_axi_my_pos_AWREADY,m_axi_my_pos_WDATA[31:0],m_axi_my_pos_WSTRB[3:0],m_axi_my_pos_WLAST,m_axi_my_pos_WVALID,m_axi_my_pos_WREADY,m_axi_my_pos_BRESP[1:0],m_axi_my_pos_BVALID,m_axi_my_pos_BREADY,m_axi_my_pos_ARADDR[31:0],m_axi_my_pos_ARLEN[7:0],m_axi_my_pos_ARSIZE[2:0],m_axi_my_pos_ARBURST[1:0],m_axi_my_pos_ARLOCK[1:0],m_axi_my_pos_ARREGION[3:0],m_axi_my_pos_ARCACHE[3:0],m_axi_my_pos_ARPROT[2:0],m_axi_my_pos_ARQOS[3:0],m_axi_my_pos_ARVALID,m_axi_my_pos_ARREADY,m_axi_my_pos_RDATA[31:0],m_axi_my_pos_RRESP[1:0],m_axi_my_pos_RLAST,m_axi_my_pos_RVALID,m_axi_my_pos_RREADY,m_axi_my_debug_AWADDR[31:0],m_axi_my_debug_AWLEN[7:0],m_axi_my_debug_AWSIZE[2:0],m_axi_my_debug_AWBURST[1:0],m_axi_my_debug_AWLOCK[1:0],m_axi_my_debug_AWREGION[3:0],m_axi_my_debug_AWCACHE[3:0],m_axi_my_debug_AWPROT[2:0],m_axi_my_debug_AWQOS[3:0],m_axi_my_debug_AWVALID,m_axi_my_debug_AWREADY,m_axi_my_debug_WDATA[31:0],m_axi_my_debug_WSTRB[3:0],m_axi_my_debug_WLAST,m_axi_my_debug_WVALID,m_axi_my_debug_WREADY,m_axi_my_debug_BRESP[1:0],m_axi_my_debug_BVALID,m_axi_my_debug_BREADY,m_axi_my_debug_ARADDR[31:0],m_axi_my_debug_ARLEN[7:0],m_axi_my_debug_ARSIZE[2:0],m_axi_my_debug_ARBURST[1:0],m_axi_my_debug_ARLOCK[1:0],m_axi_my_debug_ARREGION[3:0],m_axi_my_debug_ARCACHE[3:0],m_axi_my_debug_ARPROT[2:0],m_axi_my_debug_ARQOS[3:0],m_axi_my_debug_ARVALID,m_axi_my_debug_ARREADY,m_axi_my_debug_RDATA[31:0],m_axi_my_debug_RRESP[1:0],m_axi_my_debug_RLAST,m_axi_my_debug_RVALID,m_axi_my_debug_RREADY,m_axi_my_debug_array_AWADDR[31:0],m_axi_my_debug_array_AWLEN[7:0],m_axi_my_debug_array_AWSIZE[2:0],m_axi_my_debug_array_AWBURST[1:0],m_axi_my_debug_array_AWLOCK[1:0],m_axi_my_debug_array_AWREGION[3:0],m_axi_my_debug_array_AWCACHE[3:0],m_axi_my_debug_array_AWPROT[2:0],m_axi_my_debug_array_AWQOS[3:0],m_axi_my_debug_array_AWVALID,m_axi_my_debug_array_AWREADY,m_axi_my_debug_array_WDATA[31:0],m_axi_my_debug_array_WSTRB[3:0],m_axi_my_debug_array_WLAST,m_axi_my_debug_array_WVALID,m_axi_my_debug_array_WREADY,m_axi_my_debug_array_BRESP[1:0],m_axi_my_debug_array_BVALID,m_axi_my_debug_array_BREADY,m_axi_my_debug_array_ARADDR[31:0],m_axi_my_debug_array_ARLEN[7:0],m_axi_my_debug_array_ARSIZE[2:0],m_axi_my_debug_array_ARBURST[1:0],m_axi_my_debug_array_ARLOCK[1:0],m_axi_my_debug_array_ARREGION[3:0],m_axi_my_debug_array_ARCACHE[3:0],m_axi_my_debug_array_ARPROT[2:0],m_axi_my_debug_array_ARQOS[3:0],m_axi_my_debug_array_ARVALID,m_axi_my_debug_array_ARREADY,m_axi_my_debug_array_RDATA[31:0],m_axi_my_debug_array_RRESP[1:0],m_axi_my_debug_array_RLAST,m_axi_my_debug_array_RVALID,m_axi_my_debug_array_RREADY" */;
  input [5:0]s_axi_ctrl_AWADDR;
  input s_axi_ctrl_AWVALID;
  output s_axi_ctrl_AWREADY;
  input [31:0]s_axi_ctrl_WDATA;
  input [3:0]s_axi_ctrl_WSTRB;
  input s_axi_ctrl_WVALID;
  output s_axi_ctrl_WREADY;
  output [1:0]s_axi_ctrl_BRESP;
  output s_axi_ctrl_BVALID;
  input s_axi_ctrl_BREADY;
  input [5:0]s_axi_ctrl_ARADDR;
  input s_axi_ctrl_ARVALID;
  output s_axi_ctrl_ARREADY;
  output [31:0]s_axi_ctrl_RDATA;
  output [1:0]s_axi_ctrl_RRESP;
  output s_axi_ctrl_RVALID;
  input s_axi_ctrl_RREADY;
  input [5:0]s_axi_param_AWADDR;
  input s_axi_param_AWVALID;
  output s_axi_param_AWREADY;
  input [31:0]s_axi_param_WDATA;
  input [3:0]s_axi_param_WSTRB;
  input s_axi_param_WVALID;
  output s_axi_param_WREADY;
  output [1:0]s_axi_param_BRESP;
  output s_axi_param_BVALID;
  input s_axi_param_BREADY;
  input [5:0]s_axi_param_ARADDR;
  input s_axi_param_ARVALID;
  output s_axi_param_ARREADY;
  output [31:0]s_axi_param_RDATA;
  output [1:0]s_axi_param_RRESP;
  output s_axi_param_RVALID;
  input s_axi_param_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [31:0]m_axi_my_region_data_AWADDR;
  output [7:0]m_axi_my_region_data_AWLEN;
  output [2:0]m_axi_my_region_data_AWSIZE;
  output [1:0]m_axi_my_region_data_AWBURST;
  output [1:0]m_axi_my_region_data_AWLOCK;
  output [3:0]m_axi_my_region_data_AWREGION;
  output [3:0]m_axi_my_region_data_AWCACHE;
  output [2:0]m_axi_my_region_data_AWPROT;
  output [3:0]m_axi_my_region_data_AWQOS;
  output m_axi_my_region_data_AWVALID;
  input m_axi_my_region_data_AWREADY;
  output [31:0]m_axi_my_region_data_WDATA;
  output [3:0]m_axi_my_region_data_WSTRB;
  output m_axi_my_region_data_WLAST;
  output m_axi_my_region_data_WVALID;
  input m_axi_my_region_data_WREADY;
  input [1:0]m_axi_my_region_data_BRESP;
  input m_axi_my_region_data_BVALID;
  output m_axi_my_region_data_BREADY;
  output [31:0]m_axi_my_region_data_ARADDR;
  output [7:0]m_axi_my_region_data_ARLEN;
  output [2:0]m_axi_my_region_data_ARSIZE;
  output [1:0]m_axi_my_region_data_ARBURST;
  output [1:0]m_axi_my_region_data_ARLOCK;
  output [3:0]m_axi_my_region_data_ARREGION;
  output [3:0]m_axi_my_region_data_ARCACHE;
  output [2:0]m_axi_my_region_data_ARPROT;
  output [3:0]m_axi_my_region_data_ARQOS;
  output m_axi_my_region_data_ARVALID;
  input m_axi_my_region_data_ARREADY;
  input [31:0]m_axi_my_region_data_RDATA;
  input [1:0]m_axi_my_region_data_RRESP;
  input m_axi_my_region_data_RLAST;
  input m_axi_my_region_data_RVALID;
  output m_axi_my_region_data_RREADY;
  output [31:0]m_axi_my_region_fcoord_AWADDR;
  output [7:0]m_axi_my_region_fcoord_AWLEN;
  output [2:0]m_axi_my_region_fcoord_AWSIZE;
  output [1:0]m_axi_my_region_fcoord_AWBURST;
  output [1:0]m_axi_my_region_fcoord_AWLOCK;
  output [3:0]m_axi_my_region_fcoord_AWREGION;
  output [3:0]m_axi_my_region_fcoord_AWCACHE;
  output [2:0]m_axi_my_region_fcoord_AWPROT;
  output [3:0]m_axi_my_region_fcoord_AWQOS;
  output m_axi_my_region_fcoord_AWVALID;
  input m_axi_my_region_fcoord_AWREADY;
  output [31:0]m_axi_my_region_fcoord_WDATA;
  output [3:0]m_axi_my_region_fcoord_WSTRB;
  output m_axi_my_region_fcoord_WLAST;
  output m_axi_my_region_fcoord_WVALID;
  input m_axi_my_region_fcoord_WREADY;
  input [1:0]m_axi_my_region_fcoord_BRESP;
  input m_axi_my_region_fcoord_BVALID;
  output m_axi_my_region_fcoord_BREADY;
  output [31:0]m_axi_my_region_fcoord_ARADDR;
  output [7:0]m_axi_my_region_fcoord_ARLEN;
  output [2:0]m_axi_my_region_fcoord_ARSIZE;
  output [1:0]m_axi_my_region_fcoord_ARBURST;
  output [1:0]m_axi_my_region_fcoord_ARLOCK;
  output [3:0]m_axi_my_region_fcoord_ARREGION;
  output [3:0]m_axi_my_region_fcoord_ARCACHE;
  output [2:0]m_axi_my_region_fcoord_ARPROT;
  output [3:0]m_axi_my_region_fcoord_ARQOS;
  output m_axi_my_region_fcoord_ARVALID;
  input m_axi_my_region_fcoord_ARREADY;
  input [31:0]m_axi_my_region_fcoord_RDATA;
  input [1:0]m_axi_my_region_fcoord_RRESP;
  input m_axi_my_region_fcoord_RLAST;
  input m_axi_my_region_fcoord_RVALID;
  output m_axi_my_region_fcoord_RREADY;
  output [31:0]m_axi_my_patches_AWADDR;
  output [7:0]m_axi_my_patches_AWLEN;
  output [2:0]m_axi_my_patches_AWSIZE;
  output [1:0]m_axi_my_patches_AWBURST;
  output [1:0]m_axi_my_patches_AWLOCK;
  output [3:0]m_axi_my_patches_AWREGION;
  output [3:0]m_axi_my_patches_AWCACHE;
  output [2:0]m_axi_my_patches_AWPROT;
  output [3:0]m_axi_my_patches_AWQOS;
  output m_axi_my_patches_AWVALID;
  input m_axi_my_patches_AWREADY;
  output [31:0]m_axi_my_patches_WDATA;
  output [3:0]m_axi_my_patches_WSTRB;
  output m_axi_my_patches_WLAST;
  output m_axi_my_patches_WVALID;
  input m_axi_my_patches_WREADY;
  input [1:0]m_axi_my_patches_BRESP;
  input m_axi_my_patches_BVALID;
  output m_axi_my_patches_BREADY;
  output [31:0]m_axi_my_patches_ARADDR;
  output [7:0]m_axi_my_patches_ARLEN;
  output [2:0]m_axi_my_patches_ARSIZE;
  output [1:0]m_axi_my_patches_ARBURST;
  output [1:0]m_axi_my_patches_ARLOCK;
  output [3:0]m_axi_my_patches_ARREGION;
  output [3:0]m_axi_my_patches_ARCACHE;
  output [2:0]m_axi_my_patches_ARPROT;
  output [3:0]m_axi_my_patches_ARQOS;
  output m_axi_my_patches_ARVALID;
  input m_axi_my_patches_ARREADY;
  input [31:0]m_axi_my_patches_RDATA;
  input [1:0]m_axi_my_patches_RRESP;
  input m_axi_my_patches_RLAST;
  input m_axi_my_patches_RVALID;
  output m_axi_my_patches_RREADY;
  output [31:0]m_axi_my_pos_AWADDR;
  output [7:0]m_axi_my_pos_AWLEN;
  output [2:0]m_axi_my_pos_AWSIZE;
  output [1:0]m_axi_my_pos_AWBURST;
  output [1:0]m_axi_my_pos_AWLOCK;
  output [3:0]m_axi_my_pos_AWREGION;
  output [3:0]m_axi_my_pos_AWCACHE;
  output [2:0]m_axi_my_pos_AWPROT;
  output [3:0]m_axi_my_pos_AWQOS;
  output m_axi_my_pos_AWVALID;
  input m_axi_my_pos_AWREADY;
  output [31:0]m_axi_my_pos_WDATA;
  output [3:0]m_axi_my_pos_WSTRB;
  output m_axi_my_pos_WLAST;
  output m_axi_my_pos_WVALID;
  input m_axi_my_pos_WREADY;
  input [1:0]m_axi_my_pos_BRESP;
  input m_axi_my_pos_BVALID;
  output m_axi_my_pos_BREADY;
  output [31:0]m_axi_my_pos_ARADDR;
  output [7:0]m_axi_my_pos_ARLEN;
  output [2:0]m_axi_my_pos_ARSIZE;
  output [1:0]m_axi_my_pos_ARBURST;
  output [1:0]m_axi_my_pos_ARLOCK;
  output [3:0]m_axi_my_pos_ARREGION;
  output [3:0]m_axi_my_pos_ARCACHE;
  output [2:0]m_axi_my_pos_ARPROT;
  output [3:0]m_axi_my_pos_ARQOS;
  output m_axi_my_pos_ARVALID;
  input m_axi_my_pos_ARREADY;
  input [31:0]m_axi_my_pos_RDATA;
  input [1:0]m_axi_my_pos_RRESP;
  input m_axi_my_pos_RLAST;
  input m_axi_my_pos_RVALID;
  output m_axi_my_pos_RREADY;
  output [31:0]m_axi_my_debug_AWADDR;
  output [7:0]m_axi_my_debug_AWLEN;
  output [2:0]m_axi_my_debug_AWSIZE;
  output [1:0]m_axi_my_debug_AWBURST;
  output [1:0]m_axi_my_debug_AWLOCK;
  output [3:0]m_axi_my_debug_AWREGION;
  output [3:0]m_axi_my_debug_AWCACHE;
  output [2:0]m_axi_my_debug_AWPROT;
  output [3:0]m_axi_my_debug_AWQOS;
  output m_axi_my_debug_AWVALID;
  input m_axi_my_debug_AWREADY;
  output [31:0]m_axi_my_debug_WDATA;
  output [3:0]m_axi_my_debug_WSTRB;
  output m_axi_my_debug_WLAST;
  output m_axi_my_debug_WVALID;
  input m_axi_my_debug_WREADY;
  input [1:0]m_axi_my_debug_BRESP;
  input m_axi_my_debug_BVALID;
  output m_axi_my_debug_BREADY;
  output [31:0]m_axi_my_debug_ARADDR;
  output [7:0]m_axi_my_debug_ARLEN;
  output [2:0]m_axi_my_debug_ARSIZE;
  output [1:0]m_axi_my_debug_ARBURST;
  output [1:0]m_axi_my_debug_ARLOCK;
  output [3:0]m_axi_my_debug_ARREGION;
  output [3:0]m_axi_my_debug_ARCACHE;
  output [2:0]m_axi_my_debug_ARPROT;
  output [3:0]m_axi_my_debug_ARQOS;
  output m_axi_my_debug_ARVALID;
  input m_axi_my_debug_ARREADY;
  input [31:0]m_axi_my_debug_RDATA;
  input [1:0]m_axi_my_debug_RRESP;
  input m_axi_my_debug_RLAST;
  input m_axi_my_debug_RVALID;
  output m_axi_my_debug_RREADY;
  output [31:0]m_axi_my_debug_array_AWADDR;
  output [7:0]m_axi_my_debug_array_AWLEN;
  output [2:0]m_axi_my_debug_array_AWSIZE;
  output [1:0]m_axi_my_debug_array_AWBURST;
  output [1:0]m_axi_my_debug_array_AWLOCK;
  output [3:0]m_axi_my_debug_array_AWREGION;
  output [3:0]m_axi_my_debug_array_AWCACHE;
  output [2:0]m_axi_my_debug_array_AWPROT;
  output [3:0]m_axi_my_debug_array_AWQOS;
  output m_axi_my_debug_array_AWVALID;
  input m_axi_my_debug_array_AWREADY;
  output [31:0]m_axi_my_debug_array_WDATA;
  output [3:0]m_axi_my_debug_array_WSTRB;
  output m_axi_my_debug_array_WLAST;
  output m_axi_my_debug_array_WVALID;
  input m_axi_my_debug_array_WREADY;
  input [1:0]m_axi_my_debug_array_BRESP;
  input m_axi_my_debug_array_BVALID;
  output m_axi_my_debug_array_BREADY;
  output [31:0]m_axi_my_debug_array_ARADDR;
  output [7:0]m_axi_my_debug_array_ARLEN;
  output [2:0]m_axi_my_debug_array_ARSIZE;
  output [1:0]m_axi_my_debug_array_ARBURST;
  output [1:0]m_axi_my_debug_array_ARLOCK;
  output [3:0]m_axi_my_debug_array_ARREGION;
  output [3:0]m_axi_my_debug_array_ARCACHE;
  output [2:0]m_axi_my_debug_array_ARPROT;
  output [3:0]m_axi_my_debug_array_ARQOS;
  output m_axi_my_debug_array_ARVALID;
  input m_axi_my_debug_array_ARREADY;
  input [31:0]m_axi_my_debug_array_RDATA;
  input [1:0]m_axi_my_debug_array_RRESP;
  input m_axi_my_debug_array_RLAST;
  input m_axi_my_debug_array_RVALID;
  output m_axi_my_debug_array_RREADY;
endmodule
