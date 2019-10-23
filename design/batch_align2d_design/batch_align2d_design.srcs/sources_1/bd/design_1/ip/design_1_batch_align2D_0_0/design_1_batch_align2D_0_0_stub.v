// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (lin64) Build 2405991 Thu Dec  6 23:36:41 MST 2018
// Date        : Wed Oct 23 10:50:20 2019
// Host        : compute.eees.dei.unibo.it running 64-bit CentOS Linux release 7.6.1810 (Core)
// Command     : write_verilog -force -mode synth_stub
//               /home/dmalvezzi/batch_align2d/design/batch_align2d_design/batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_batch_align2D_0_0/design_1_batch_align2D_0_0_stub.v
// Design      : design_1_batch_align2D_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xczu9eg-ffvb1156-2-e
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "batch_align2D,Vivado 2018.3" *)
module design_1_batch_align2D_0_0(s_axi_ctrl_AWADDR, s_axi_ctrl_AWVALID, 
  s_axi_ctrl_AWREADY, s_axi_ctrl_WDATA, s_axi_ctrl_WSTRB, s_axi_ctrl_WVALID, 
  s_axi_ctrl_WREADY, s_axi_ctrl_BRESP, s_axi_ctrl_BVALID, s_axi_ctrl_BREADY, 
  s_axi_ctrl_ARADDR, s_axi_ctrl_ARVALID, s_axi_ctrl_ARREADY, s_axi_ctrl_RDATA, 
  s_axi_ctrl_RRESP, s_axi_ctrl_RVALID, s_axi_ctrl_RREADY, s_axi_param_AWADDR, 
  s_axi_param_AWVALID, s_axi_param_AWREADY, s_axi_param_WDATA, s_axi_param_WSTRB, 
  s_axi_param_WVALID, s_axi_param_WREADY, s_axi_param_BRESP, s_axi_param_BVALID, 
  s_axi_param_BREADY, s_axi_param_ARADDR, s_axi_param_ARVALID, s_axi_param_ARREADY, 
  s_axi_param_RDATA, s_axi_param_RRESP, s_axi_param_RVALID, s_axi_param_RREADY, ap_clk, 
  ap_rst_n, interrupt, m_axi_pyr_AWADDR, m_axi_pyr_AWLEN, m_axi_pyr_AWSIZE, 
  m_axi_pyr_AWBURST, m_axi_pyr_AWLOCK, m_axi_pyr_AWREGION, m_axi_pyr_AWCACHE, 
  m_axi_pyr_AWPROT, m_axi_pyr_AWQOS, m_axi_pyr_AWVALID, m_axi_pyr_AWREADY, m_axi_pyr_WDATA, 
  m_axi_pyr_WSTRB, m_axi_pyr_WLAST, m_axi_pyr_WVALID, m_axi_pyr_WREADY, m_axi_pyr_BRESP, 
  m_axi_pyr_BVALID, m_axi_pyr_BREADY, m_axi_pyr_ARADDR, m_axi_pyr_ARLEN, m_axi_pyr_ARSIZE, 
  m_axi_pyr_ARBURST, m_axi_pyr_ARLOCK, m_axi_pyr_ARREGION, m_axi_pyr_ARCACHE, 
  m_axi_pyr_ARPROT, m_axi_pyr_ARQOS, m_axi_pyr_ARVALID, m_axi_pyr_ARREADY, m_axi_pyr_RDATA, 
  m_axi_pyr_RRESP, m_axi_pyr_RLAST, m_axi_pyr_RVALID, m_axi_pyr_RREADY, 
  m_axi_patches_AWADDR, m_axi_patches_AWLEN, m_axi_patches_AWSIZE, m_axi_patches_AWBURST, 
  m_axi_patches_AWLOCK, m_axi_patches_AWREGION, m_axi_patches_AWCACHE, 
  m_axi_patches_AWPROT, m_axi_patches_AWQOS, m_axi_patches_AWVALID, 
  m_axi_patches_AWREADY, m_axi_patches_WDATA, m_axi_patches_WSTRB, m_axi_patches_WLAST, 
  m_axi_patches_WVALID, m_axi_patches_WREADY, m_axi_patches_BRESP, m_axi_patches_BVALID, 
  m_axi_patches_BREADY, m_axi_patches_ARADDR, m_axi_patches_ARLEN, m_axi_patches_ARSIZE, 
  m_axi_patches_ARBURST, m_axi_patches_ARLOCK, m_axi_patches_ARREGION, 
  m_axi_patches_ARCACHE, m_axi_patches_ARPROT, m_axi_patches_ARQOS, 
  m_axi_patches_ARVALID, m_axi_patches_ARREADY, m_axi_patches_RDATA, m_axi_patches_RRESP, 
  m_axi_patches_RLAST, m_axi_patches_RVALID, m_axi_patches_RREADY, m_axi_pos_r_AWADDR, 
  m_axi_pos_r_AWLEN, m_axi_pos_r_AWSIZE, m_axi_pos_r_AWBURST, m_axi_pos_r_AWLOCK, 
  m_axi_pos_r_AWREGION, m_axi_pos_r_AWCACHE, m_axi_pos_r_AWPROT, m_axi_pos_r_AWQOS, 
  m_axi_pos_r_AWVALID, m_axi_pos_r_AWREADY, m_axi_pos_r_WDATA, m_axi_pos_r_WSTRB, 
  m_axi_pos_r_WLAST, m_axi_pos_r_WVALID, m_axi_pos_r_WREADY, m_axi_pos_r_BRESP, 
  m_axi_pos_r_BVALID, m_axi_pos_r_BREADY, m_axi_pos_r_ARADDR, m_axi_pos_r_ARLEN, 
  m_axi_pos_r_ARSIZE, m_axi_pos_r_ARBURST, m_axi_pos_r_ARLOCK, m_axi_pos_r_ARREGION, 
  m_axi_pos_r_ARCACHE, m_axi_pos_r_ARPROT, m_axi_pos_r_ARQOS, m_axi_pos_r_ARVALID, 
  m_axi_pos_r_ARREADY, m_axi_pos_r_RDATA, m_axi_pos_r_RRESP, m_axi_pos_r_RLAST, 
  m_axi_pos_r_RVALID, m_axi_pos_r_RREADY, m_axi_debug_AWADDR, m_axi_debug_AWLEN, 
  m_axi_debug_AWSIZE, m_axi_debug_AWBURST, m_axi_debug_AWLOCK, m_axi_debug_AWREGION, 
  m_axi_debug_AWCACHE, m_axi_debug_AWPROT, m_axi_debug_AWQOS, m_axi_debug_AWVALID, 
  m_axi_debug_AWREADY, m_axi_debug_WDATA, m_axi_debug_WSTRB, m_axi_debug_WLAST, 
  m_axi_debug_WVALID, m_axi_debug_WREADY, m_axi_debug_BRESP, m_axi_debug_BVALID, 
  m_axi_debug_BREADY, m_axi_debug_ARADDR, m_axi_debug_ARLEN, m_axi_debug_ARSIZE, 
  m_axi_debug_ARBURST, m_axi_debug_ARLOCK, m_axi_debug_ARREGION, m_axi_debug_ARCACHE, 
  m_axi_debug_ARPROT, m_axi_debug_ARQOS, m_axi_debug_ARVALID, m_axi_debug_ARREADY, 
  m_axi_debug_RDATA, m_axi_debug_RRESP, m_axi_debug_RLAST, m_axi_debug_RVALID, 
  m_axi_debug_RREADY)
/* synthesis syn_black_box black_box_pad_pin="s_axi_ctrl_AWADDR[5:0],s_axi_ctrl_AWVALID,s_axi_ctrl_AWREADY,s_axi_ctrl_WDATA[31:0],s_axi_ctrl_WSTRB[3:0],s_axi_ctrl_WVALID,s_axi_ctrl_WREADY,s_axi_ctrl_BRESP[1:0],s_axi_ctrl_BVALID,s_axi_ctrl_BREADY,s_axi_ctrl_ARADDR[5:0],s_axi_ctrl_ARVALID,s_axi_ctrl_ARREADY,s_axi_ctrl_RDATA[31:0],s_axi_ctrl_RRESP[1:0],s_axi_ctrl_RVALID,s_axi_ctrl_RREADY,s_axi_param_AWADDR[6:0],s_axi_param_AWVALID,s_axi_param_AWREADY,s_axi_param_WDATA[31:0],s_axi_param_WSTRB[3:0],s_axi_param_WVALID,s_axi_param_WREADY,s_axi_param_BRESP[1:0],s_axi_param_BVALID,s_axi_param_BREADY,s_axi_param_ARADDR[6:0],s_axi_param_ARVALID,s_axi_param_ARREADY,s_axi_param_RDATA[31:0],s_axi_param_RRESP[1:0],s_axi_param_RVALID,s_axi_param_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_pyr_AWADDR[63:0],m_axi_pyr_AWLEN[7:0],m_axi_pyr_AWSIZE[2:0],m_axi_pyr_AWBURST[1:0],m_axi_pyr_AWLOCK[1:0],m_axi_pyr_AWREGION[3:0],m_axi_pyr_AWCACHE[3:0],m_axi_pyr_AWPROT[2:0],m_axi_pyr_AWQOS[3:0],m_axi_pyr_AWVALID,m_axi_pyr_AWREADY,m_axi_pyr_WDATA[31:0],m_axi_pyr_WSTRB[3:0],m_axi_pyr_WLAST,m_axi_pyr_WVALID,m_axi_pyr_WREADY,m_axi_pyr_BRESP[1:0],m_axi_pyr_BVALID,m_axi_pyr_BREADY,m_axi_pyr_ARADDR[63:0],m_axi_pyr_ARLEN[7:0],m_axi_pyr_ARSIZE[2:0],m_axi_pyr_ARBURST[1:0],m_axi_pyr_ARLOCK[1:0],m_axi_pyr_ARREGION[3:0],m_axi_pyr_ARCACHE[3:0],m_axi_pyr_ARPROT[2:0],m_axi_pyr_ARQOS[3:0],m_axi_pyr_ARVALID,m_axi_pyr_ARREADY,m_axi_pyr_RDATA[31:0],m_axi_pyr_RRESP[1:0],m_axi_pyr_RLAST,m_axi_pyr_RVALID,m_axi_pyr_RREADY,m_axi_patches_AWADDR[63:0],m_axi_patches_AWLEN[7:0],m_axi_patches_AWSIZE[2:0],m_axi_patches_AWBURST[1:0],m_axi_patches_AWLOCK[1:0],m_axi_patches_AWREGION[3:0],m_axi_patches_AWCACHE[3:0],m_axi_patches_AWPROT[2:0],m_axi_patches_AWQOS[3:0],m_axi_patches_AWVALID,m_axi_patches_AWREADY,m_axi_patches_WDATA[31:0],m_axi_patches_WSTRB[3:0],m_axi_patches_WLAST,m_axi_patches_WVALID,m_axi_patches_WREADY,m_axi_patches_BRESP[1:0],m_axi_patches_BVALID,m_axi_patches_BREADY,m_axi_patches_ARADDR[63:0],m_axi_patches_ARLEN[7:0],m_axi_patches_ARSIZE[2:0],m_axi_patches_ARBURST[1:0],m_axi_patches_ARLOCK[1:0],m_axi_patches_ARREGION[3:0],m_axi_patches_ARCACHE[3:0],m_axi_patches_ARPROT[2:0],m_axi_patches_ARQOS[3:0],m_axi_patches_ARVALID,m_axi_patches_ARREADY,m_axi_patches_RDATA[31:0],m_axi_patches_RRESP[1:0],m_axi_patches_RLAST,m_axi_patches_RVALID,m_axi_patches_RREADY,m_axi_pos_r_AWADDR[63:0],m_axi_pos_r_AWLEN[7:0],m_axi_pos_r_AWSIZE[2:0],m_axi_pos_r_AWBURST[1:0],m_axi_pos_r_AWLOCK[1:0],m_axi_pos_r_AWREGION[3:0],m_axi_pos_r_AWCACHE[3:0],m_axi_pos_r_AWPROT[2:0],m_axi_pos_r_AWQOS[3:0],m_axi_pos_r_AWVALID,m_axi_pos_r_AWREADY,m_axi_pos_r_WDATA[31:0],m_axi_pos_r_WSTRB[3:0],m_axi_pos_r_WLAST,m_axi_pos_r_WVALID,m_axi_pos_r_WREADY,m_axi_pos_r_BRESP[1:0],m_axi_pos_r_BVALID,m_axi_pos_r_BREADY,m_axi_pos_r_ARADDR[63:0],m_axi_pos_r_ARLEN[7:0],m_axi_pos_r_ARSIZE[2:0],m_axi_pos_r_ARBURST[1:0],m_axi_pos_r_ARLOCK[1:0],m_axi_pos_r_ARREGION[3:0],m_axi_pos_r_ARCACHE[3:0],m_axi_pos_r_ARPROT[2:0],m_axi_pos_r_ARQOS[3:0],m_axi_pos_r_ARVALID,m_axi_pos_r_ARREADY,m_axi_pos_r_RDATA[31:0],m_axi_pos_r_RRESP[1:0],m_axi_pos_r_RLAST,m_axi_pos_r_RVALID,m_axi_pos_r_RREADY,m_axi_debug_AWADDR[63:0],m_axi_debug_AWLEN[7:0],m_axi_debug_AWSIZE[2:0],m_axi_debug_AWBURST[1:0],m_axi_debug_AWLOCK[1:0],m_axi_debug_AWREGION[3:0],m_axi_debug_AWCACHE[3:0],m_axi_debug_AWPROT[2:0],m_axi_debug_AWQOS[3:0],m_axi_debug_AWVALID,m_axi_debug_AWREADY,m_axi_debug_WDATA[31:0],m_axi_debug_WSTRB[3:0],m_axi_debug_WLAST,m_axi_debug_WVALID,m_axi_debug_WREADY,m_axi_debug_BRESP[1:0],m_axi_debug_BVALID,m_axi_debug_BREADY,m_axi_debug_ARADDR[63:0],m_axi_debug_ARLEN[7:0],m_axi_debug_ARSIZE[2:0],m_axi_debug_ARBURST[1:0],m_axi_debug_ARLOCK[1:0],m_axi_debug_ARREGION[3:0],m_axi_debug_ARCACHE[3:0],m_axi_debug_ARPROT[2:0],m_axi_debug_ARQOS[3:0],m_axi_debug_ARVALID,m_axi_debug_ARREADY,m_axi_debug_RDATA[31:0],m_axi_debug_RRESP[1:0],m_axi_debug_RLAST,m_axi_debug_RVALID,m_axi_debug_RREADY" */;
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
  input [6:0]s_axi_param_AWADDR;
  input s_axi_param_AWVALID;
  output s_axi_param_AWREADY;
  input [31:0]s_axi_param_WDATA;
  input [3:0]s_axi_param_WSTRB;
  input s_axi_param_WVALID;
  output s_axi_param_WREADY;
  output [1:0]s_axi_param_BRESP;
  output s_axi_param_BVALID;
  input s_axi_param_BREADY;
  input [6:0]s_axi_param_ARADDR;
  input s_axi_param_ARVALID;
  output s_axi_param_ARREADY;
  output [31:0]s_axi_param_RDATA;
  output [1:0]s_axi_param_RRESP;
  output s_axi_param_RVALID;
  input s_axi_param_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [63:0]m_axi_pyr_AWADDR;
  output [7:0]m_axi_pyr_AWLEN;
  output [2:0]m_axi_pyr_AWSIZE;
  output [1:0]m_axi_pyr_AWBURST;
  output [1:0]m_axi_pyr_AWLOCK;
  output [3:0]m_axi_pyr_AWREGION;
  output [3:0]m_axi_pyr_AWCACHE;
  output [2:0]m_axi_pyr_AWPROT;
  output [3:0]m_axi_pyr_AWQOS;
  output m_axi_pyr_AWVALID;
  input m_axi_pyr_AWREADY;
  output [31:0]m_axi_pyr_WDATA;
  output [3:0]m_axi_pyr_WSTRB;
  output m_axi_pyr_WLAST;
  output m_axi_pyr_WVALID;
  input m_axi_pyr_WREADY;
  input [1:0]m_axi_pyr_BRESP;
  input m_axi_pyr_BVALID;
  output m_axi_pyr_BREADY;
  output [63:0]m_axi_pyr_ARADDR;
  output [7:0]m_axi_pyr_ARLEN;
  output [2:0]m_axi_pyr_ARSIZE;
  output [1:0]m_axi_pyr_ARBURST;
  output [1:0]m_axi_pyr_ARLOCK;
  output [3:0]m_axi_pyr_ARREGION;
  output [3:0]m_axi_pyr_ARCACHE;
  output [2:0]m_axi_pyr_ARPROT;
  output [3:0]m_axi_pyr_ARQOS;
  output m_axi_pyr_ARVALID;
  input m_axi_pyr_ARREADY;
  input [31:0]m_axi_pyr_RDATA;
  input [1:0]m_axi_pyr_RRESP;
  input m_axi_pyr_RLAST;
  input m_axi_pyr_RVALID;
  output m_axi_pyr_RREADY;
  output [63:0]m_axi_patches_AWADDR;
  output [7:0]m_axi_patches_AWLEN;
  output [2:0]m_axi_patches_AWSIZE;
  output [1:0]m_axi_patches_AWBURST;
  output [1:0]m_axi_patches_AWLOCK;
  output [3:0]m_axi_patches_AWREGION;
  output [3:0]m_axi_patches_AWCACHE;
  output [2:0]m_axi_patches_AWPROT;
  output [3:0]m_axi_patches_AWQOS;
  output m_axi_patches_AWVALID;
  input m_axi_patches_AWREADY;
  output [31:0]m_axi_patches_WDATA;
  output [3:0]m_axi_patches_WSTRB;
  output m_axi_patches_WLAST;
  output m_axi_patches_WVALID;
  input m_axi_patches_WREADY;
  input [1:0]m_axi_patches_BRESP;
  input m_axi_patches_BVALID;
  output m_axi_patches_BREADY;
  output [63:0]m_axi_patches_ARADDR;
  output [7:0]m_axi_patches_ARLEN;
  output [2:0]m_axi_patches_ARSIZE;
  output [1:0]m_axi_patches_ARBURST;
  output [1:0]m_axi_patches_ARLOCK;
  output [3:0]m_axi_patches_ARREGION;
  output [3:0]m_axi_patches_ARCACHE;
  output [2:0]m_axi_patches_ARPROT;
  output [3:0]m_axi_patches_ARQOS;
  output m_axi_patches_ARVALID;
  input m_axi_patches_ARREADY;
  input [31:0]m_axi_patches_RDATA;
  input [1:0]m_axi_patches_RRESP;
  input m_axi_patches_RLAST;
  input m_axi_patches_RVALID;
  output m_axi_patches_RREADY;
  output [63:0]m_axi_pos_r_AWADDR;
  output [7:0]m_axi_pos_r_AWLEN;
  output [2:0]m_axi_pos_r_AWSIZE;
  output [1:0]m_axi_pos_r_AWBURST;
  output [1:0]m_axi_pos_r_AWLOCK;
  output [3:0]m_axi_pos_r_AWREGION;
  output [3:0]m_axi_pos_r_AWCACHE;
  output [2:0]m_axi_pos_r_AWPROT;
  output [3:0]m_axi_pos_r_AWQOS;
  output m_axi_pos_r_AWVALID;
  input m_axi_pos_r_AWREADY;
  output [31:0]m_axi_pos_r_WDATA;
  output [3:0]m_axi_pos_r_WSTRB;
  output m_axi_pos_r_WLAST;
  output m_axi_pos_r_WVALID;
  input m_axi_pos_r_WREADY;
  input [1:0]m_axi_pos_r_BRESP;
  input m_axi_pos_r_BVALID;
  output m_axi_pos_r_BREADY;
  output [63:0]m_axi_pos_r_ARADDR;
  output [7:0]m_axi_pos_r_ARLEN;
  output [2:0]m_axi_pos_r_ARSIZE;
  output [1:0]m_axi_pos_r_ARBURST;
  output [1:0]m_axi_pos_r_ARLOCK;
  output [3:0]m_axi_pos_r_ARREGION;
  output [3:0]m_axi_pos_r_ARCACHE;
  output [2:0]m_axi_pos_r_ARPROT;
  output [3:0]m_axi_pos_r_ARQOS;
  output m_axi_pos_r_ARVALID;
  input m_axi_pos_r_ARREADY;
  input [31:0]m_axi_pos_r_RDATA;
  input [1:0]m_axi_pos_r_RRESP;
  input m_axi_pos_r_RLAST;
  input m_axi_pos_r_RVALID;
  output m_axi_pos_r_RREADY;
  output [63:0]m_axi_debug_AWADDR;
  output [7:0]m_axi_debug_AWLEN;
  output [2:0]m_axi_debug_AWSIZE;
  output [1:0]m_axi_debug_AWBURST;
  output [1:0]m_axi_debug_AWLOCK;
  output [3:0]m_axi_debug_AWREGION;
  output [3:0]m_axi_debug_AWCACHE;
  output [2:0]m_axi_debug_AWPROT;
  output [3:0]m_axi_debug_AWQOS;
  output m_axi_debug_AWVALID;
  input m_axi_debug_AWREADY;
  output [31:0]m_axi_debug_WDATA;
  output [3:0]m_axi_debug_WSTRB;
  output m_axi_debug_WLAST;
  output m_axi_debug_WVALID;
  input m_axi_debug_WREADY;
  input [1:0]m_axi_debug_BRESP;
  input m_axi_debug_BVALID;
  output m_axi_debug_BREADY;
  output [63:0]m_axi_debug_ARADDR;
  output [7:0]m_axi_debug_ARLEN;
  output [2:0]m_axi_debug_ARSIZE;
  output [1:0]m_axi_debug_ARBURST;
  output [1:0]m_axi_debug_ARLOCK;
  output [3:0]m_axi_debug_ARREGION;
  output [3:0]m_axi_debug_ARCACHE;
  output [2:0]m_axi_debug_ARPROT;
  output [3:0]m_axi_debug_ARQOS;
  output m_axi_debug_ARVALID;
  input m_axi_debug_ARREADY;
  input [31:0]m_axi_debug_RDATA;
  input [1:0]m_axi_debug_RRESP;
  input m_axi_debug_RLAST;
  input m_axi_debug_RVALID;
  output m_axi_debug_RREADY;
endmodule
