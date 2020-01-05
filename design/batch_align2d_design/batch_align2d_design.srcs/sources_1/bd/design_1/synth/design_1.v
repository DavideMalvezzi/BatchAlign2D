//Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2018.3 (lin64) Build 2405991 Thu Dec  6 23:36:41 MST 2018
//Date        : Sun Jan  5 20:42:29 2020
//Host        : compute.eees.dei.unibo.it running 64-bit CentOS Linux release 7.6.1810 (Core)
//Command     : generate_target design_1.bd
//Design      : design_1
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "design_1,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=design_1,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=14,numReposBlks=9,numNonXlnxBlks=0,numHierBlks=5,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,da_axi4_cnt=34,da_board_cnt=1,da_clkrst_cnt=2,da_zynq_ultra_ps_e_cnt=3,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "design_1.hwdef" *) 
module design_1
   ();

  wire [31:0]batch_align2D_region_0_m_axi_my_debug_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_debug_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_ARQOS;
  wire batch_align2D_region_0_m_axi_my_debug_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_debug_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_debug_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_AWQOS;
  wire batch_align2D_region_0_m_axi_my_debug_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_debug_AWVALID;
  wire batch_align2D_region_0_m_axi_my_debug_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_BRESP;
  wire batch_align2D_region_0_m_axi_my_debug_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_RDATA;
  wire batch_align2D_region_0_m_axi_my_debug_RLAST;
  wire batch_align2D_region_0_m_axi_my_debug_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_RRESP;
  wire batch_align2D_region_0_m_axi_my_debug_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_WDATA;
  wire batch_align2D_region_0_m_axi_my_debug_WLAST;
  wire batch_align2D_region_0_m_axi_my_debug_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_WSTRB;
  wire batch_align2D_region_0_m_axi_my_debug_WVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_array_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_array_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_debug_array_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_array_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_array_ARQOS;
  wire batch_align2D_region_0_m_axi_my_debug_array_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_array_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_debug_array_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_array_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_array_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_debug_array_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_array_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_array_AWQOS;
  wire batch_align2D_region_0_m_axi_my_debug_array_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_debug_array_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_debug_array_AWVALID;
  wire batch_align2D_region_0_m_axi_my_debug_array_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_BRESP;
  wire batch_align2D_region_0_m_axi_my_debug_array_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_array_RDATA;
  wire batch_align2D_region_0_m_axi_my_debug_array_RLAST;
  wire batch_align2D_region_0_m_axi_my_debug_array_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_debug_array_RRESP;
  wire batch_align2D_region_0_m_axi_my_debug_array_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_debug_array_WDATA;
  wire batch_align2D_region_0_m_axi_my_debug_array_WLAST;
  wire batch_align2D_region_0_m_axi_my_debug_array_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_debug_array_WSTRB;
  wire batch_align2D_region_0_m_axi_my_debug_array_WVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_patches_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_patches_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_patches_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_patches_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_patches_ARQOS;
  wire batch_align2D_region_0_m_axi_my_patches_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_patches_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_patches_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_patches_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_patches_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_patches_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_patches_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_patches_AWQOS;
  wire batch_align2D_region_0_m_axi_my_patches_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_patches_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_patches_AWVALID;
  wire batch_align2D_region_0_m_axi_my_patches_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_BRESP;
  wire batch_align2D_region_0_m_axi_my_patches_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_patches_RDATA;
  wire batch_align2D_region_0_m_axi_my_patches_RLAST;
  wire batch_align2D_region_0_m_axi_my_patches_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_patches_RRESP;
  wire batch_align2D_region_0_m_axi_my_patches_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_patches_WDATA;
  wire batch_align2D_region_0_m_axi_my_patches_WLAST;
  wire batch_align2D_region_0_m_axi_my_patches_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_patches_WSTRB;
  wire batch_align2D_region_0_m_axi_my_patches_WVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_pos_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_pos_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_pos_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_pos_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_pos_ARQOS;
  wire batch_align2D_region_0_m_axi_my_pos_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_pos_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_pos_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_pos_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_pos_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_pos_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_pos_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_pos_AWQOS;
  wire batch_align2D_region_0_m_axi_my_pos_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_pos_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_pos_AWVALID;
  wire batch_align2D_region_0_m_axi_my_pos_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_BRESP;
  wire batch_align2D_region_0_m_axi_my_pos_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_pos_RDATA;
  wire batch_align2D_region_0_m_axi_my_pos_RLAST;
  wire batch_align2D_region_0_m_axi_my_pos_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_pos_RRESP;
  wire batch_align2D_region_0_m_axi_my_pos_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_pos_WDATA;
  wire batch_align2D_region_0_m_axi_my_pos_WLAST;
  wire batch_align2D_region_0_m_axi_my_pos_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_pos_WSTRB;
  wire batch_align2D_region_0_m_axi_my_pos_WVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_data_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_data_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_region_data_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_data_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_data_ARQOS;
  wire batch_align2D_region_0_m_axi_my_region_data_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_data_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_region_data_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_data_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_data_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_region_data_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_data_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_data_AWQOS;
  wire batch_align2D_region_0_m_axi_my_region_data_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_data_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_region_data_AWVALID;
  wire batch_align2D_region_0_m_axi_my_region_data_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_BRESP;
  wire batch_align2D_region_0_m_axi_my_region_data_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_data_RDATA;
  wire batch_align2D_region_0_m_axi_my_region_data_RLAST;
  wire batch_align2D_region_0_m_axi_my_region_data_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_data_RRESP;
  wire batch_align2D_region_0_m_axi_my_region_data_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_data_WDATA;
  wire batch_align2D_region_0_m_axi_my_region_data_WLAST;
  wire batch_align2D_region_0_m_axi_my_region_data_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_data_WSTRB;
  wire batch_align2D_region_0_m_axi_my_region_data_WVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARQOS;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_ARREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_fcoord_ARSIZE;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_ARVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWADDR;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWBURST;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWCACHE;
  wire [7:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWLEN;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWLOCK;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWPROT;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWQOS;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_AWREADY;
  wire [2:0]batch_align2D_region_0_m_axi_my_region_fcoord_AWSIZE;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_AWVALID;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_BREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_BRESP;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_BVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_fcoord_RDATA;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_RLAST;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_RREADY;
  wire [1:0]batch_align2D_region_0_m_axi_my_region_fcoord_RRESP;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_RVALID;
  wire [31:0]batch_align2D_region_0_m_axi_my_region_fcoord_WDATA;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_WLAST;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_WREADY;
  wire [3:0]batch_align2D_region_0_m_axi_my_region_fcoord_WSTRB;
  wire batch_align2D_region_0_m_axi_my_region_fcoord_WVALID;
  wire [39:0]ps8_0_axi_periph_M00_AXI_ARADDR;
  wire ps8_0_axi_periph_M00_AXI_ARREADY;
  wire ps8_0_axi_periph_M00_AXI_ARVALID;
  wire [39:0]ps8_0_axi_periph_M00_AXI_AWADDR;
  wire ps8_0_axi_periph_M00_AXI_AWREADY;
  wire ps8_0_axi_periph_M00_AXI_AWVALID;
  wire ps8_0_axi_periph_M00_AXI_BREADY;
  wire [1:0]ps8_0_axi_periph_M00_AXI_BRESP;
  wire ps8_0_axi_periph_M00_AXI_BVALID;
  wire [31:0]ps8_0_axi_periph_M00_AXI_RDATA;
  wire ps8_0_axi_periph_M00_AXI_RREADY;
  wire [1:0]ps8_0_axi_periph_M00_AXI_RRESP;
  wire ps8_0_axi_periph_M00_AXI_RVALID;
  wire [31:0]ps8_0_axi_periph_M00_AXI_WDATA;
  wire ps8_0_axi_periph_M00_AXI_WREADY;
  wire [3:0]ps8_0_axi_periph_M00_AXI_WSTRB;
  wire ps8_0_axi_periph_M00_AXI_WVALID;
  wire [39:0]ps8_0_axi_periph_M01_AXI_ARADDR;
  wire ps8_0_axi_periph_M01_AXI_ARREADY;
  wire ps8_0_axi_periph_M01_AXI_ARVALID;
  wire [39:0]ps8_0_axi_periph_M01_AXI_AWADDR;
  wire ps8_0_axi_periph_M01_AXI_AWREADY;
  wire ps8_0_axi_periph_M01_AXI_AWVALID;
  wire ps8_0_axi_periph_M01_AXI_BREADY;
  wire [1:0]ps8_0_axi_periph_M01_AXI_BRESP;
  wire ps8_0_axi_periph_M01_AXI_BVALID;
  wire [31:0]ps8_0_axi_periph_M01_AXI_RDATA;
  wire ps8_0_axi_periph_M01_AXI_RREADY;
  wire [1:0]ps8_0_axi_periph_M01_AXI_RRESP;
  wire ps8_0_axi_periph_M01_AXI_RVALID;
  wire [31:0]ps8_0_axi_periph_M01_AXI_WDATA;
  wire ps8_0_axi_periph_M01_AXI_WREADY;
  wire [3:0]ps8_0_axi_periph_M01_AXI_WSTRB;
  wire ps8_0_axi_periph_M01_AXI_WVALID;
  wire [0:0]rst_ps8_0_96M_peripheral_aresetn;
  wire [48:0]smartconnect_0_M00_AXI_ARADDR;
  wire [1:0]smartconnect_0_M00_AXI_ARBURST;
  wire [3:0]smartconnect_0_M00_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M00_AXI_ARLEN;
  wire [0:0]smartconnect_0_M00_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M00_AXI_ARPROT;
  wire [3:0]smartconnect_0_M00_AXI_ARQOS;
  wire smartconnect_0_M00_AXI_ARREADY;
  wire [2:0]smartconnect_0_M00_AXI_ARSIZE;
  wire smartconnect_0_M00_AXI_ARVALID;
  wire [48:0]smartconnect_0_M00_AXI_AWADDR;
  wire [1:0]smartconnect_0_M00_AXI_AWBURST;
  wire [3:0]smartconnect_0_M00_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M00_AXI_AWLEN;
  wire [0:0]smartconnect_0_M00_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M00_AXI_AWPROT;
  wire [3:0]smartconnect_0_M00_AXI_AWQOS;
  wire smartconnect_0_M00_AXI_AWREADY;
  wire [2:0]smartconnect_0_M00_AXI_AWSIZE;
  wire smartconnect_0_M00_AXI_AWVALID;
  wire smartconnect_0_M00_AXI_BREADY;
  wire [1:0]smartconnect_0_M00_AXI_BRESP;
  wire smartconnect_0_M00_AXI_BVALID;
  wire [127:0]smartconnect_0_M00_AXI_RDATA;
  wire smartconnect_0_M00_AXI_RLAST;
  wire smartconnect_0_M00_AXI_RREADY;
  wire [1:0]smartconnect_0_M00_AXI_RRESP;
  wire smartconnect_0_M00_AXI_RVALID;
  wire [127:0]smartconnect_0_M00_AXI_WDATA;
  wire smartconnect_0_M00_AXI_WLAST;
  wire smartconnect_0_M00_AXI_WREADY;
  wire [15:0]smartconnect_0_M00_AXI_WSTRB;
  wire smartconnect_0_M00_AXI_WVALID;
  wire [39:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARADDR;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARBURST;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARCACHE;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARID;
  wire [7:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLEN;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLOCK;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARPROT;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARQOS;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARREADY;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARSIZE;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARVALID;
  wire [39:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWADDR;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWBURST;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWCACHE;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWID;
  wire [7:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLEN;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLOCK;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWPROT;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWQOS;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWREADY;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWSIZE;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWVALID;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BID;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BREADY;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BRESP;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BVALID;
  wire [127:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RDATA;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RID;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RLAST;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RREADY;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RRESP;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RVALID;
  wire [127:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WDATA;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WLAST;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WREADY;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WSTRB;
  wire zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WVALID;
  wire [39:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARADDR;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARBURST;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARCACHE;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARID;
  wire [7:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLEN;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLOCK;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARPROT;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARQOS;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARREADY;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARSIZE;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARVALID;
  wire [39:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWADDR;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWBURST;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWCACHE;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWID;
  wire [7:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLEN;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLOCK;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWPROT;
  wire [3:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWQOS;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWREADY;
  wire [2:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWSIZE;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWVALID;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BID;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BREADY;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BRESP;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BVALID;
  wire [127:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RDATA;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RID;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RLAST;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RREADY;
  wire [1:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RRESP;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RVALID;
  wire [127:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WDATA;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WLAST;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WREADY;
  wire [15:0]zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WSTRB;
  wire zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WVALID;
  wire zynq_ultra_ps_e_0_pl_clk0;
  wire zynq_ultra_ps_e_0_pl_resetn0;

  design_1_batch_align2D_region_0_1 batch_align2D_region_0
       (.ap_clk(zynq_ultra_ps_e_0_pl_clk0),
        .ap_rst_n(rst_ps8_0_96M_peripheral_aresetn),
        .m_axi_my_debug_ARADDR(batch_align2D_region_0_m_axi_my_debug_ARADDR),
        .m_axi_my_debug_ARBURST(batch_align2D_region_0_m_axi_my_debug_ARBURST),
        .m_axi_my_debug_ARCACHE(batch_align2D_region_0_m_axi_my_debug_ARCACHE),
        .m_axi_my_debug_ARLEN(batch_align2D_region_0_m_axi_my_debug_ARLEN),
        .m_axi_my_debug_ARLOCK(batch_align2D_region_0_m_axi_my_debug_ARLOCK),
        .m_axi_my_debug_ARPROT(batch_align2D_region_0_m_axi_my_debug_ARPROT),
        .m_axi_my_debug_ARQOS(batch_align2D_region_0_m_axi_my_debug_ARQOS),
        .m_axi_my_debug_ARREADY(batch_align2D_region_0_m_axi_my_debug_ARREADY),
        .m_axi_my_debug_ARSIZE(batch_align2D_region_0_m_axi_my_debug_ARSIZE),
        .m_axi_my_debug_ARVALID(batch_align2D_region_0_m_axi_my_debug_ARVALID),
        .m_axi_my_debug_AWADDR(batch_align2D_region_0_m_axi_my_debug_AWADDR),
        .m_axi_my_debug_AWBURST(batch_align2D_region_0_m_axi_my_debug_AWBURST),
        .m_axi_my_debug_AWCACHE(batch_align2D_region_0_m_axi_my_debug_AWCACHE),
        .m_axi_my_debug_AWLEN(batch_align2D_region_0_m_axi_my_debug_AWLEN),
        .m_axi_my_debug_AWLOCK(batch_align2D_region_0_m_axi_my_debug_AWLOCK),
        .m_axi_my_debug_AWPROT(batch_align2D_region_0_m_axi_my_debug_AWPROT),
        .m_axi_my_debug_AWQOS(batch_align2D_region_0_m_axi_my_debug_AWQOS),
        .m_axi_my_debug_AWREADY(batch_align2D_region_0_m_axi_my_debug_AWREADY),
        .m_axi_my_debug_AWSIZE(batch_align2D_region_0_m_axi_my_debug_AWSIZE),
        .m_axi_my_debug_AWVALID(batch_align2D_region_0_m_axi_my_debug_AWVALID),
        .m_axi_my_debug_BREADY(batch_align2D_region_0_m_axi_my_debug_BREADY),
        .m_axi_my_debug_BRESP(batch_align2D_region_0_m_axi_my_debug_BRESP),
        .m_axi_my_debug_BVALID(batch_align2D_region_0_m_axi_my_debug_BVALID),
        .m_axi_my_debug_RDATA(batch_align2D_region_0_m_axi_my_debug_RDATA),
        .m_axi_my_debug_RLAST(batch_align2D_region_0_m_axi_my_debug_RLAST),
        .m_axi_my_debug_RREADY(batch_align2D_region_0_m_axi_my_debug_RREADY),
        .m_axi_my_debug_RRESP(batch_align2D_region_0_m_axi_my_debug_RRESP),
        .m_axi_my_debug_RVALID(batch_align2D_region_0_m_axi_my_debug_RVALID),
        .m_axi_my_debug_WDATA(batch_align2D_region_0_m_axi_my_debug_WDATA),
        .m_axi_my_debug_WLAST(batch_align2D_region_0_m_axi_my_debug_WLAST),
        .m_axi_my_debug_WREADY(batch_align2D_region_0_m_axi_my_debug_WREADY),
        .m_axi_my_debug_WSTRB(batch_align2D_region_0_m_axi_my_debug_WSTRB),
        .m_axi_my_debug_WVALID(batch_align2D_region_0_m_axi_my_debug_WVALID),
        .m_axi_my_debug_array_ARADDR(batch_align2D_region_0_m_axi_my_debug_array_ARADDR),
        .m_axi_my_debug_array_ARBURST(batch_align2D_region_0_m_axi_my_debug_array_ARBURST),
        .m_axi_my_debug_array_ARCACHE(batch_align2D_region_0_m_axi_my_debug_array_ARCACHE),
        .m_axi_my_debug_array_ARLEN(batch_align2D_region_0_m_axi_my_debug_array_ARLEN),
        .m_axi_my_debug_array_ARLOCK(batch_align2D_region_0_m_axi_my_debug_array_ARLOCK),
        .m_axi_my_debug_array_ARPROT(batch_align2D_region_0_m_axi_my_debug_array_ARPROT),
        .m_axi_my_debug_array_ARQOS(batch_align2D_region_0_m_axi_my_debug_array_ARQOS),
        .m_axi_my_debug_array_ARREADY(batch_align2D_region_0_m_axi_my_debug_array_ARREADY),
        .m_axi_my_debug_array_ARSIZE(batch_align2D_region_0_m_axi_my_debug_array_ARSIZE),
        .m_axi_my_debug_array_ARVALID(batch_align2D_region_0_m_axi_my_debug_array_ARVALID),
        .m_axi_my_debug_array_AWADDR(batch_align2D_region_0_m_axi_my_debug_array_AWADDR),
        .m_axi_my_debug_array_AWBURST(batch_align2D_region_0_m_axi_my_debug_array_AWBURST),
        .m_axi_my_debug_array_AWCACHE(batch_align2D_region_0_m_axi_my_debug_array_AWCACHE),
        .m_axi_my_debug_array_AWLEN(batch_align2D_region_0_m_axi_my_debug_array_AWLEN),
        .m_axi_my_debug_array_AWLOCK(batch_align2D_region_0_m_axi_my_debug_array_AWLOCK),
        .m_axi_my_debug_array_AWPROT(batch_align2D_region_0_m_axi_my_debug_array_AWPROT),
        .m_axi_my_debug_array_AWQOS(batch_align2D_region_0_m_axi_my_debug_array_AWQOS),
        .m_axi_my_debug_array_AWREADY(batch_align2D_region_0_m_axi_my_debug_array_AWREADY),
        .m_axi_my_debug_array_AWSIZE(batch_align2D_region_0_m_axi_my_debug_array_AWSIZE),
        .m_axi_my_debug_array_AWVALID(batch_align2D_region_0_m_axi_my_debug_array_AWVALID),
        .m_axi_my_debug_array_BREADY(batch_align2D_region_0_m_axi_my_debug_array_BREADY),
        .m_axi_my_debug_array_BRESP(batch_align2D_region_0_m_axi_my_debug_array_BRESP),
        .m_axi_my_debug_array_BVALID(batch_align2D_region_0_m_axi_my_debug_array_BVALID),
        .m_axi_my_debug_array_RDATA(batch_align2D_region_0_m_axi_my_debug_array_RDATA),
        .m_axi_my_debug_array_RLAST(batch_align2D_region_0_m_axi_my_debug_array_RLAST),
        .m_axi_my_debug_array_RREADY(batch_align2D_region_0_m_axi_my_debug_array_RREADY),
        .m_axi_my_debug_array_RRESP(batch_align2D_region_0_m_axi_my_debug_array_RRESP),
        .m_axi_my_debug_array_RVALID(batch_align2D_region_0_m_axi_my_debug_array_RVALID),
        .m_axi_my_debug_array_WDATA(batch_align2D_region_0_m_axi_my_debug_array_WDATA),
        .m_axi_my_debug_array_WLAST(batch_align2D_region_0_m_axi_my_debug_array_WLAST),
        .m_axi_my_debug_array_WREADY(batch_align2D_region_0_m_axi_my_debug_array_WREADY),
        .m_axi_my_debug_array_WSTRB(batch_align2D_region_0_m_axi_my_debug_array_WSTRB),
        .m_axi_my_debug_array_WVALID(batch_align2D_region_0_m_axi_my_debug_array_WVALID),
        .m_axi_my_patches_ARADDR(batch_align2D_region_0_m_axi_my_patches_ARADDR),
        .m_axi_my_patches_ARBURST(batch_align2D_region_0_m_axi_my_patches_ARBURST),
        .m_axi_my_patches_ARCACHE(batch_align2D_region_0_m_axi_my_patches_ARCACHE),
        .m_axi_my_patches_ARLEN(batch_align2D_region_0_m_axi_my_patches_ARLEN),
        .m_axi_my_patches_ARLOCK(batch_align2D_region_0_m_axi_my_patches_ARLOCK),
        .m_axi_my_patches_ARPROT(batch_align2D_region_0_m_axi_my_patches_ARPROT),
        .m_axi_my_patches_ARQOS(batch_align2D_region_0_m_axi_my_patches_ARQOS),
        .m_axi_my_patches_ARREADY(batch_align2D_region_0_m_axi_my_patches_ARREADY),
        .m_axi_my_patches_ARSIZE(batch_align2D_region_0_m_axi_my_patches_ARSIZE),
        .m_axi_my_patches_ARVALID(batch_align2D_region_0_m_axi_my_patches_ARVALID),
        .m_axi_my_patches_AWADDR(batch_align2D_region_0_m_axi_my_patches_AWADDR),
        .m_axi_my_patches_AWBURST(batch_align2D_region_0_m_axi_my_patches_AWBURST),
        .m_axi_my_patches_AWCACHE(batch_align2D_region_0_m_axi_my_patches_AWCACHE),
        .m_axi_my_patches_AWLEN(batch_align2D_region_0_m_axi_my_patches_AWLEN),
        .m_axi_my_patches_AWLOCK(batch_align2D_region_0_m_axi_my_patches_AWLOCK),
        .m_axi_my_patches_AWPROT(batch_align2D_region_0_m_axi_my_patches_AWPROT),
        .m_axi_my_patches_AWQOS(batch_align2D_region_0_m_axi_my_patches_AWQOS),
        .m_axi_my_patches_AWREADY(batch_align2D_region_0_m_axi_my_patches_AWREADY),
        .m_axi_my_patches_AWSIZE(batch_align2D_region_0_m_axi_my_patches_AWSIZE),
        .m_axi_my_patches_AWVALID(batch_align2D_region_0_m_axi_my_patches_AWVALID),
        .m_axi_my_patches_BREADY(batch_align2D_region_0_m_axi_my_patches_BREADY),
        .m_axi_my_patches_BRESP(batch_align2D_region_0_m_axi_my_patches_BRESP),
        .m_axi_my_patches_BVALID(batch_align2D_region_0_m_axi_my_patches_BVALID),
        .m_axi_my_patches_RDATA(batch_align2D_region_0_m_axi_my_patches_RDATA),
        .m_axi_my_patches_RLAST(batch_align2D_region_0_m_axi_my_patches_RLAST),
        .m_axi_my_patches_RREADY(batch_align2D_region_0_m_axi_my_patches_RREADY),
        .m_axi_my_patches_RRESP(batch_align2D_region_0_m_axi_my_patches_RRESP),
        .m_axi_my_patches_RVALID(batch_align2D_region_0_m_axi_my_patches_RVALID),
        .m_axi_my_patches_WDATA(batch_align2D_region_0_m_axi_my_patches_WDATA),
        .m_axi_my_patches_WLAST(batch_align2D_region_0_m_axi_my_patches_WLAST),
        .m_axi_my_patches_WREADY(batch_align2D_region_0_m_axi_my_patches_WREADY),
        .m_axi_my_patches_WSTRB(batch_align2D_region_0_m_axi_my_patches_WSTRB),
        .m_axi_my_patches_WVALID(batch_align2D_region_0_m_axi_my_patches_WVALID),
        .m_axi_my_pos_ARADDR(batch_align2D_region_0_m_axi_my_pos_ARADDR),
        .m_axi_my_pos_ARBURST(batch_align2D_region_0_m_axi_my_pos_ARBURST),
        .m_axi_my_pos_ARCACHE(batch_align2D_region_0_m_axi_my_pos_ARCACHE),
        .m_axi_my_pos_ARLEN(batch_align2D_region_0_m_axi_my_pos_ARLEN),
        .m_axi_my_pos_ARLOCK(batch_align2D_region_0_m_axi_my_pos_ARLOCK),
        .m_axi_my_pos_ARPROT(batch_align2D_region_0_m_axi_my_pos_ARPROT),
        .m_axi_my_pos_ARQOS(batch_align2D_region_0_m_axi_my_pos_ARQOS),
        .m_axi_my_pos_ARREADY(batch_align2D_region_0_m_axi_my_pos_ARREADY),
        .m_axi_my_pos_ARSIZE(batch_align2D_region_0_m_axi_my_pos_ARSIZE),
        .m_axi_my_pos_ARVALID(batch_align2D_region_0_m_axi_my_pos_ARVALID),
        .m_axi_my_pos_AWADDR(batch_align2D_region_0_m_axi_my_pos_AWADDR),
        .m_axi_my_pos_AWBURST(batch_align2D_region_0_m_axi_my_pos_AWBURST),
        .m_axi_my_pos_AWCACHE(batch_align2D_region_0_m_axi_my_pos_AWCACHE),
        .m_axi_my_pos_AWLEN(batch_align2D_region_0_m_axi_my_pos_AWLEN),
        .m_axi_my_pos_AWLOCK(batch_align2D_region_0_m_axi_my_pos_AWLOCK),
        .m_axi_my_pos_AWPROT(batch_align2D_region_0_m_axi_my_pos_AWPROT),
        .m_axi_my_pos_AWQOS(batch_align2D_region_0_m_axi_my_pos_AWQOS),
        .m_axi_my_pos_AWREADY(batch_align2D_region_0_m_axi_my_pos_AWREADY),
        .m_axi_my_pos_AWSIZE(batch_align2D_region_0_m_axi_my_pos_AWSIZE),
        .m_axi_my_pos_AWVALID(batch_align2D_region_0_m_axi_my_pos_AWVALID),
        .m_axi_my_pos_BREADY(batch_align2D_region_0_m_axi_my_pos_BREADY),
        .m_axi_my_pos_BRESP(batch_align2D_region_0_m_axi_my_pos_BRESP),
        .m_axi_my_pos_BVALID(batch_align2D_region_0_m_axi_my_pos_BVALID),
        .m_axi_my_pos_RDATA(batch_align2D_region_0_m_axi_my_pos_RDATA),
        .m_axi_my_pos_RLAST(batch_align2D_region_0_m_axi_my_pos_RLAST),
        .m_axi_my_pos_RREADY(batch_align2D_region_0_m_axi_my_pos_RREADY),
        .m_axi_my_pos_RRESP(batch_align2D_region_0_m_axi_my_pos_RRESP),
        .m_axi_my_pos_RVALID(batch_align2D_region_0_m_axi_my_pos_RVALID),
        .m_axi_my_pos_WDATA(batch_align2D_region_0_m_axi_my_pos_WDATA),
        .m_axi_my_pos_WLAST(batch_align2D_region_0_m_axi_my_pos_WLAST),
        .m_axi_my_pos_WREADY(batch_align2D_region_0_m_axi_my_pos_WREADY),
        .m_axi_my_pos_WSTRB(batch_align2D_region_0_m_axi_my_pos_WSTRB),
        .m_axi_my_pos_WVALID(batch_align2D_region_0_m_axi_my_pos_WVALID),
        .m_axi_my_region_data_ARADDR(batch_align2D_region_0_m_axi_my_region_data_ARADDR),
        .m_axi_my_region_data_ARBURST(batch_align2D_region_0_m_axi_my_region_data_ARBURST),
        .m_axi_my_region_data_ARCACHE(batch_align2D_region_0_m_axi_my_region_data_ARCACHE),
        .m_axi_my_region_data_ARLEN(batch_align2D_region_0_m_axi_my_region_data_ARLEN),
        .m_axi_my_region_data_ARLOCK(batch_align2D_region_0_m_axi_my_region_data_ARLOCK),
        .m_axi_my_region_data_ARPROT(batch_align2D_region_0_m_axi_my_region_data_ARPROT),
        .m_axi_my_region_data_ARQOS(batch_align2D_region_0_m_axi_my_region_data_ARQOS),
        .m_axi_my_region_data_ARREADY(batch_align2D_region_0_m_axi_my_region_data_ARREADY),
        .m_axi_my_region_data_ARSIZE(batch_align2D_region_0_m_axi_my_region_data_ARSIZE),
        .m_axi_my_region_data_ARVALID(batch_align2D_region_0_m_axi_my_region_data_ARVALID),
        .m_axi_my_region_data_AWADDR(batch_align2D_region_0_m_axi_my_region_data_AWADDR),
        .m_axi_my_region_data_AWBURST(batch_align2D_region_0_m_axi_my_region_data_AWBURST),
        .m_axi_my_region_data_AWCACHE(batch_align2D_region_0_m_axi_my_region_data_AWCACHE),
        .m_axi_my_region_data_AWLEN(batch_align2D_region_0_m_axi_my_region_data_AWLEN),
        .m_axi_my_region_data_AWLOCK(batch_align2D_region_0_m_axi_my_region_data_AWLOCK),
        .m_axi_my_region_data_AWPROT(batch_align2D_region_0_m_axi_my_region_data_AWPROT),
        .m_axi_my_region_data_AWQOS(batch_align2D_region_0_m_axi_my_region_data_AWQOS),
        .m_axi_my_region_data_AWREADY(batch_align2D_region_0_m_axi_my_region_data_AWREADY),
        .m_axi_my_region_data_AWSIZE(batch_align2D_region_0_m_axi_my_region_data_AWSIZE),
        .m_axi_my_region_data_AWVALID(batch_align2D_region_0_m_axi_my_region_data_AWVALID),
        .m_axi_my_region_data_BREADY(batch_align2D_region_0_m_axi_my_region_data_BREADY),
        .m_axi_my_region_data_BRESP(batch_align2D_region_0_m_axi_my_region_data_BRESP),
        .m_axi_my_region_data_BVALID(batch_align2D_region_0_m_axi_my_region_data_BVALID),
        .m_axi_my_region_data_RDATA(batch_align2D_region_0_m_axi_my_region_data_RDATA),
        .m_axi_my_region_data_RLAST(batch_align2D_region_0_m_axi_my_region_data_RLAST),
        .m_axi_my_region_data_RREADY(batch_align2D_region_0_m_axi_my_region_data_RREADY),
        .m_axi_my_region_data_RRESP(batch_align2D_region_0_m_axi_my_region_data_RRESP),
        .m_axi_my_region_data_RVALID(batch_align2D_region_0_m_axi_my_region_data_RVALID),
        .m_axi_my_region_data_WDATA(batch_align2D_region_0_m_axi_my_region_data_WDATA),
        .m_axi_my_region_data_WLAST(batch_align2D_region_0_m_axi_my_region_data_WLAST),
        .m_axi_my_region_data_WREADY(batch_align2D_region_0_m_axi_my_region_data_WREADY),
        .m_axi_my_region_data_WSTRB(batch_align2D_region_0_m_axi_my_region_data_WSTRB),
        .m_axi_my_region_data_WVALID(batch_align2D_region_0_m_axi_my_region_data_WVALID),
        .m_axi_my_region_fcoord_ARADDR(batch_align2D_region_0_m_axi_my_region_fcoord_ARADDR),
        .m_axi_my_region_fcoord_ARBURST(batch_align2D_region_0_m_axi_my_region_fcoord_ARBURST),
        .m_axi_my_region_fcoord_ARCACHE(batch_align2D_region_0_m_axi_my_region_fcoord_ARCACHE),
        .m_axi_my_region_fcoord_ARLEN(batch_align2D_region_0_m_axi_my_region_fcoord_ARLEN),
        .m_axi_my_region_fcoord_ARLOCK(batch_align2D_region_0_m_axi_my_region_fcoord_ARLOCK),
        .m_axi_my_region_fcoord_ARPROT(batch_align2D_region_0_m_axi_my_region_fcoord_ARPROT),
        .m_axi_my_region_fcoord_ARQOS(batch_align2D_region_0_m_axi_my_region_fcoord_ARQOS),
        .m_axi_my_region_fcoord_ARREADY(batch_align2D_region_0_m_axi_my_region_fcoord_ARREADY),
        .m_axi_my_region_fcoord_ARSIZE(batch_align2D_region_0_m_axi_my_region_fcoord_ARSIZE),
        .m_axi_my_region_fcoord_ARVALID(batch_align2D_region_0_m_axi_my_region_fcoord_ARVALID),
        .m_axi_my_region_fcoord_AWADDR(batch_align2D_region_0_m_axi_my_region_fcoord_AWADDR),
        .m_axi_my_region_fcoord_AWBURST(batch_align2D_region_0_m_axi_my_region_fcoord_AWBURST),
        .m_axi_my_region_fcoord_AWCACHE(batch_align2D_region_0_m_axi_my_region_fcoord_AWCACHE),
        .m_axi_my_region_fcoord_AWLEN(batch_align2D_region_0_m_axi_my_region_fcoord_AWLEN),
        .m_axi_my_region_fcoord_AWLOCK(batch_align2D_region_0_m_axi_my_region_fcoord_AWLOCK),
        .m_axi_my_region_fcoord_AWPROT(batch_align2D_region_0_m_axi_my_region_fcoord_AWPROT),
        .m_axi_my_region_fcoord_AWQOS(batch_align2D_region_0_m_axi_my_region_fcoord_AWQOS),
        .m_axi_my_region_fcoord_AWREADY(batch_align2D_region_0_m_axi_my_region_fcoord_AWREADY),
        .m_axi_my_region_fcoord_AWSIZE(batch_align2D_region_0_m_axi_my_region_fcoord_AWSIZE),
        .m_axi_my_region_fcoord_AWVALID(batch_align2D_region_0_m_axi_my_region_fcoord_AWVALID),
        .m_axi_my_region_fcoord_BREADY(batch_align2D_region_0_m_axi_my_region_fcoord_BREADY),
        .m_axi_my_region_fcoord_BRESP(batch_align2D_region_0_m_axi_my_region_fcoord_BRESP),
        .m_axi_my_region_fcoord_BVALID(batch_align2D_region_0_m_axi_my_region_fcoord_BVALID),
        .m_axi_my_region_fcoord_RDATA(batch_align2D_region_0_m_axi_my_region_fcoord_RDATA),
        .m_axi_my_region_fcoord_RLAST(batch_align2D_region_0_m_axi_my_region_fcoord_RLAST),
        .m_axi_my_region_fcoord_RREADY(batch_align2D_region_0_m_axi_my_region_fcoord_RREADY),
        .m_axi_my_region_fcoord_RRESP(batch_align2D_region_0_m_axi_my_region_fcoord_RRESP),
        .m_axi_my_region_fcoord_RVALID(batch_align2D_region_0_m_axi_my_region_fcoord_RVALID),
        .m_axi_my_region_fcoord_WDATA(batch_align2D_region_0_m_axi_my_region_fcoord_WDATA),
        .m_axi_my_region_fcoord_WLAST(batch_align2D_region_0_m_axi_my_region_fcoord_WLAST),
        .m_axi_my_region_fcoord_WREADY(batch_align2D_region_0_m_axi_my_region_fcoord_WREADY),
        .m_axi_my_region_fcoord_WSTRB(batch_align2D_region_0_m_axi_my_region_fcoord_WSTRB),
        .m_axi_my_region_fcoord_WVALID(batch_align2D_region_0_m_axi_my_region_fcoord_WVALID),
        .s_axi_ctrl_ARADDR(ps8_0_axi_periph_M00_AXI_ARADDR[5:0]),
        .s_axi_ctrl_ARREADY(ps8_0_axi_periph_M00_AXI_ARREADY),
        .s_axi_ctrl_ARVALID(ps8_0_axi_periph_M00_AXI_ARVALID),
        .s_axi_ctrl_AWADDR(ps8_0_axi_periph_M00_AXI_AWADDR[5:0]),
        .s_axi_ctrl_AWREADY(ps8_0_axi_periph_M00_AXI_AWREADY),
        .s_axi_ctrl_AWVALID(ps8_0_axi_periph_M00_AXI_AWVALID),
        .s_axi_ctrl_BREADY(ps8_0_axi_periph_M00_AXI_BREADY),
        .s_axi_ctrl_BRESP(ps8_0_axi_periph_M00_AXI_BRESP),
        .s_axi_ctrl_BVALID(ps8_0_axi_periph_M00_AXI_BVALID),
        .s_axi_ctrl_RDATA(ps8_0_axi_periph_M00_AXI_RDATA),
        .s_axi_ctrl_RREADY(ps8_0_axi_periph_M00_AXI_RREADY),
        .s_axi_ctrl_RRESP(ps8_0_axi_periph_M00_AXI_RRESP),
        .s_axi_ctrl_RVALID(ps8_0_axi_periph_M00_AXI_RVALID),
        .s_axi_ctrl_WDATA(ps8_0_axi_periph_M00_AXI_WDATA),
        .s_axi_ctrl_WREADY(ps8_0_axi_periph_M00_AXI_WREADY),
        .s_axi_ctrl_WSTRB(ps8_0_axi_periph_M00_AXI_WSTRB),
        .s_axi_ctrl_WVALID(ps8_0_axi_periph_M00_AXI_WVALID),
        .s_axi_param_ARADDR(ps8_0_axi_periph_M01_AXI_ARADDR[5:0]),
        .s_axi_param_ARREADY(ps8_0_axi_periph_M01_AXI_ARREADY),
        .s_axi_param_ARVALID(ps8_0_axi_periph_M01_AXI_ARVALID),
        .s_axi_param_AWADDR(ps8_0_axi_periph_M01_AXI_AWADDR[5:0]),
        .s_axi_param_AWREADY(ps8_0_axi_periph_M01_AXI_AWREADY),
        .s_axi_param_AWVALID(ps8_0_axi_periph_M01_AXI_AWVALID),
        .s_axi_param_BREADY(ps8_0_axi_periph_M01_AXI_BREADY),
        .s_axi_param_BRESP(ps8_0_axi_periph_M01_AXI_BRESP),
        .s_axi_param_BVALID(ps8_0_axi_periph_M01_AXI_BVALID),
        .s_axi_param_RDATA(ps8_0_axi_periph_M01_AXI_RDATA),
        .s_axi_param_RREADY(ps8_0_axi_periph_M01_AXI_RREADY),
        .s_axi_param_RRESP(ps8_0_axi_periph_M01_AXI_RRESP),
        .s_axi_param_RVALID(ps8_0_axi_periph_M01_AXI_RVALID),
        .s_axi_param_WDATA(ps8_0_axi_periph_M01_AXI_WDATA),
        .s_axi_param_WREADY(ps8_0_axi_periph_M01_AXI_WREADY),
        .s_axi_param_WSTRB(ps8_0_axi_periph_M01_AXI_WSTRB),
        .s_axi_param_WVALID(ps8_0_axi_periph_M01_AXI_WVALID));
  design_1_ps8_0_axi_periph_1 ps8_0_axi_periph
       (.ACLK(zynq_ultra_ps_e_0_pl_clk0),
        .ARESETN(rst_ps8_0_96M_peripheral_aresetn),
        .M00_ACLK(zynq_ultra_ps_e_0_pl_clk0),
        .M00_ARESETN(rst_ps8_0_96M_peripheral_aresetn),
        .M00_AXI_araddr(ps8_0_axi_periph_M00_AXI_ARADDR),
        .M00_AXI_arready(ps8_0_axi_periph_M00_AXI_ARREADY),
        .M00_AXI_arvalid(ps8_0_axi_periph_M00_AXI_ARVALID),
        .M00_AXI_awaddr(ps8_0_axi_periph_M00_AXI_AWADDR),
        .M00_AXI_awready(ps8_0_axi_periph_M00_AXI_AWREADY),
        .M00_AXI_awvalid(ps8_0_axi_periph_M00_AXI_AWVALID),
        .M00_AXI_bready(ps8_0_axi_periph_M00_AXI_BREADY),
        .M00_AXI_bresp(ps8_0_axi_periph_M00_AXI_BRESP),
        .M00_AXI_bvalid(ps8_0_axi_periph_M00_AXI_BVALID),
        .M00_AXI_rdata(ps8_0_axi_periph_M00_AXI_RDATA),
        .M00_AXI_rready(ps8_0_axi_periph_M00_AXI_RREADY),
        .M00_AXI_rresp(ps8_0_axi_periph_M00_AXI_RRESP),
        .M00_AXI_rvalid(ps8_0_axi_periph_M00_AXI_RVALID),
        .M00_AXI_wdata(ps8_0_axi_periph_M00_AXI_WDATA),
        .M00_AXI_wready(ps8_0_axi_periph_M00_AXI_WREADY),
        .M00_AXI_wstrb(ps8_0_axi_periph_M00_AXI_WSTRB),
        .M00_AXI_wvalid(ps8_0_axi_periph_M00_AXI_WVALID),
        .M01_ACLK(zynq_ultra_ps_e_0_pl_clk0),
        .M01_ARESETN(rst_ps8_0_96M_peripheral_aresetn),
        .M01_AXI_araddr(ps8_0_axi_periph_M01_AXI_ARADDR),
        .M01_AXI_arready(ps8_0_axi_periph_M01_AXI_ARREADY),
        .M01_AXI_arvalid(ps8_0_axi_periph_M01_AXI_ARVALID),
        .M01_AXI_awaddr(ps8_0_axi_periph_M01_AXI_AWADDR),
        .M01_AXI_awready(ps8_0_axi_periph_M01_AXI_AWREADY),
        .M01_AXI_awvalid(ps8_0_axi_periph_M01_AXI_AWVALID),
        .M01_AXI_bready(ps8_0_axi_periph_M01_AXI_BREADY),
        .M01_AXI_bresp(ps8_0_axi_periph_M01_AXI_BRESP),
        .M01_AXI_bvalid(ps8_0_axi_periph_M01_AXI_BVALID),
        .M01_AXI_rdata(ps8_0_axi_periph_M01_AXI_RDATA),
        .M01_AXI_rready(ps8_0_axi_periph_M01_AXI_RREADY),
        .M01_AXI_rresp(ps8_0_axi_periph_M01_AXI_RRESP),
        .M01_AXI_rvalid(ps8_0_axi_periph_M01_AXI_RVALID),
        .M01_AXI_wdata(ps8_0_axi_periph_M01_AXI_WDATA),
        .M01_AXI_wready(ps8_0_axi_periph_M01_AXI_WREADY),
        .M01_AXI_wstrb(ps8_0_axi_periph_M01_AXI_WSTRB),
        .M01_AXI_wvalid(ps8_0_axi_periph_M01_AXI_WVALID),
        .S00_ACLK(zynq_ultra_ps_e_0_pl_clk0),
        .S00_ARESETN(rst_ps8_0_96M_peripheral_aresetn),
        .S00_AXI_araddr(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARADDR),
        .S00_AXI_arburst(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARBURST),
        .S00_AXI_arcache(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARCACHE),
        .S00_AXI_arid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARID),
        .S00_AXI_arlen(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLEN),
        .S00_AXI_arlock(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLOCK),
        .S00_AXI_arprot(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARPROT),
        .S00_AXI_arqos(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARQOS),
        .S00_AXI_arready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARREADY),
        .S00_AXI_arsize(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARSIZE),
        .S00_AXI_arvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARVALID),
        .S00_AXI_awaddr(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWADDR),
        .S00_AXI_awburst(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWBURST),
        .S00_AXI_awcache(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWCACHE),
        .S00_AXI_awid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWID),
        .S00_AXI_awlen(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLEN),
        .S00_AXI_awlock(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLOCK),
        .S00_AXI_awprot(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWPROT),
        .S00_AXI_awqos(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWQOS),
        .S00_AXI_awready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWREADY),
        .S00_AXI_awsize(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWSIZE),
        .S00_AXI_awvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWVALID),
        .S00_AXI_bid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BID),
        .S00_AXI_bready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BREADY),
        .S00_AXI_bresp(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BRESP),
        .S00_AXI_bvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BVALID),
        .S00_AXI_rdata(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RDATA),
        .S00_AXI_rid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RID),
        .S00_AXI_rlast(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RLAST),
        .S00_AXI_rready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RREADY),
        .S00_AXI_rresp(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RRESP),
        .S00_AXI_rvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RVALID),
        .S00_AXI_wdata(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WDATA),
        .S00_AXI_wlast(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WLAST),
        .S00_AXI_wready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WREADY),
        .S00_AXI_wstrb(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WSTRB),
        .S00_AXI_wvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WVALID),
        .S01_ACLK(zynq_ultra_ps_e_0_pl_clk0),
        .S01_ARESETN(rst_ps8_0_96M_peripheral_aresetn),
        .S01_AXI_araddr(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARADDR),
        .S01_AXI_arburst(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARBURST),
        .S01_AXI_arcache(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARCACHE),
        .S01_AXI_arid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARID),
        .S01_AXI_arlen(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLEN),
        .S01_AXI_arlock(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLOCK),
        .S01_AXI_arprot(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARPROT),
        .S01_AXI_arqos(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARQOS),
        .S01_AXI_arready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARREADY),
        .S01_AXI_arsize(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARSIZE),
        .S01_AXI_arvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARVALID),
        .S01_AXI_awaddr(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWADDR),
        .S01_AXI_awburst(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWBURST),
        .S01_AXI_awcache(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWCACHE),
        .S01_AXI_awid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWID),
        .S01_AXI_awlen(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLEN),
        .S01_AXI_awlock(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLOCK),
        .S01_AXI_awprot(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWPROT),
        .S01_AXI_awqos(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWQOS),
        .S01_AXI_awready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWREADY),
        .S01_AXI_awsize(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWSIZE),
        .S01_AXI_awvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWVALID),
        .S01_AXI_bid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BID),
        .S01_AXI_bready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BREADY),
        .S01_AXI_bresp(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BRESP),
        .S01_AXI_bvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BVALID),
        .S01_AXI_rdata(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RDATA),
        .S01_AXI_rid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RID),
        .S01_AXI_rlast(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RLAST),
        .S01_AXI_rready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RREADY),
        .S01_AXI_rresp(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RRESP),
        .S01_AXI_rvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RVALID),
        .S01_AXI_wdata(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WDATA),
        .S01_AXI_wlast(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WLAST),
        .S01_AXI_wready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WREADY),
        .S01_AXI_wstrb(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WSTRB),
        .S01_AXI_wvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WVALID));
  design_1_rst_ps8_0_96M_0 rst_ps8_0_96M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(zynq_ultra_ps_e_0_pl_resetn0),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_ps8_0_96M_peripheral_aresetn),
        .slowest_sync_clk(zynq_ultra_ps_e_0_pl_clk0));
  design_1_smartconnect_0_0 smartconnect_0
       (.M00_AXI_araddr(smartconnect_0_M00_AXI_ARADDR),
        .M00_AXI_arburst(smartconnect_0_M00_AXI_ARBURST),
        .M00_AXI_arcache(smartconnect_0_M00_AXI_ARCACHE),
        .M00_AXI_arlen(smartconnect_0_M00_AXI_ARLEN),
        .M00_AXI_arlock(smartconnect_0_M00_AXI_ARLOCK),
        .M00_AXI_arprot(smartconnect_0_M00_AXI_ARPROT),
        .M00_AXI_arqos(smartconnect_0_M00_AXI_ARQOS),
        .M00_AXI_arready(smartconnect_0_M00_AXI_ARREADY),
        .M00_AXI_arsize(smartconnect_0_M00_AXI_ARSIZE),
        .M00_AXI_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .M00_AXI_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .M00_AXI_awburst(smartconnect_0_M00_AXI_AWBURST),
        .M00_AXI_awcache(smartconnect_0_M00_AXI_AWCACHE),
        .M00_AXI_awlen(smartconnect_0_M00_AXI_AWLEN),
        .M00_AXI_awlock(smartconnect_0_M00_AXI_AWLOCK),
        .M00_AXI_awprot(smartconnect_0_M00_AXI_AWPROT),
        .M00_AXI_awqos(smartconnect_0_M00_AXI_AWQOS),
        .M00_AXI_awready(smartconnect_0_M00_AXI_AWREADY),
        .M00_AXI_awsize(smartconnect_0_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .M00_AXI_bready(smartconnect_0_M00_AXI_BREADY),
        .M00_AXI_bresp(smartconnect_0_M00_AXI_BRESP),
        .M00_AXI_bvalid(smartconnect_0_M00_AXI_BVALID),
        .M00_AXI_rdata(smartconnect_0_M00_AXI_RDATA),
        .M00_AXI_rlast(smartconnect_0_M00_AXI_RLAST),
        .M00_AXI_rready(smartconnect_0_M00_AXI_RREADY),
        .M00_AXI_rresp(smartconnect_0_M00_AXI_RRESP),
        .M00_AXI_rvalid(smartconnect_0_M00_AXI_RVALID),
        .M00_AXI_wdata(smartconnect_0_M00_AXI_WDATA),
        .M00_AXI_wlast(smartconnect_0_M00_AXI_WLAST),
        .M00_AXI_wready(smartconnect_0_M00_AXI_WREADY),
        .M00_AXI_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .M00_AXI_wvalid(smartconnect_0_M00_AXI_WVALID),
        .S00_AXI_araddr(batch_align2D_region_0_m_axi_my_region_data_ARADDR),
        .S00_AXI_arburst(batch_align2D_region_0_m_axi_my_region_data_ARBURST),
        .S00_AXI_arcache(batch_align2D_region_0_m_axi_my_region_data_ARCACHE),
        .S00_AXI_arlen(batch_align2D_region_0_m_axi_my_region_data_ARLEN),
        .S00_AXI_arlock(batch_align2D_region_0_m_axi_my_region_data_ARLOCK[0]),
        .S00_AXI_arprot(batch_align2D_region_0_m_axi_my_region_data_ARPROT),
        .S00_AXI_arqos(batch_align2D_region_0_m_axi_my_region_data_ARQOS),
        .S00_AXI_arready(batch_align2D_region_0_m_axi_my_region_data_ARREADY),
        .S00_AXI_arsize(batch_align2D_region_0_m_axi_my_region_data_ARSIZE),
        .S00_AXI_arvalid(batch_align2D_region_0_m_axi_my_region_data_ARVALID),
        .S00_AXI_awaddr(batch_align2D_region_0_m_axi_my_region_data_AWADDR),
        .S00_AXI_awburst(batch_align2D_region_0_m_axi_my_region_data_AWBURST),
        .S00_AXI_awcache(batch_align2D_region_0_m_axi_my_region_data_AWCACHE),
        .S00_AXI_awlen(batch_align2D_region_0_m_axi_my_region_data_AWLEN),
        .S00_AXI_awlock(batch_align2D_region_0_m_axi_my_region_data_AWLOCK[0]),
        .S00_AXI_awprot(batch_align2D_region_0_m_axi_my_region_data_AWPROT),
        .S00_AXI_awqos(batch_align2D_region_0_m_axi_my_region_data_AWQOS),
        .S00_AXI_awready(batch_align2D_region_0_m_axi_my_region_data_AWREADY),
        .S00_AXI_awsize(batch_align2D_region_0_m_axi_my_region_data_AWSIZE),
        .S00_AXI_awvalid(batch_align2D_region_0_m_axi_my_region_data_AWVALID),
        .S00_AXI_bready(batch_align2D_region_0_m_axi_my_region_data_BREADY),
        .S00_AXI_bresp(batch_align2D_region_0_m_axi_my_region_data_BRESP),
        .S00_AXI_bvalid(batch_align2D_region_0_m_axi_my_region_data_BVALID),
        .S00_AXI_rdata(batch_align2D_region_0_m_axi_my_region_data_RDATA),
        .S00_AXI_rlast(batch_align2D_region_0_m_axi_my_region_data_RLAST),
        .S00_AXI_rready(batch_align2D_region_0_m_axi_my_region_data_RREADY),
        .S00_AXI_rresp(batch_align2D_region_0_m_axi_my_region_data_RRESP),
        .S00_AXI_rvalid(batch_align2D_region_0_m_axi_my_region_data_RVALID),
        .S00_AXI_wdata(batch_align2D_region_0_m_axi_my_region_data_WDATA),
        .S00_AXI_wlast(batch_align2D_region_0_m_axi_my_region_data_WLAST),
        .S00_AXI_wready(batch_align2D_region_0_m_axi_my_region_data_WREADY),
        .S00_AXI_wstrb(batch_align2D_region_0_m_axi_my_region_data_WSTRB),
        .S00_AXI_wvalid(batch_align2D_region_0_m_axi_my_region_data_WVALID),
        .S01_AXI_araddr(batch_align2D_region_0_m_axi_my_region_fcoord_ARADDR),
        .S01_AXI_arburst(batch_align2D_region_0_m_axi_my_region_fcoord_ARBURST),
        .S01_AXI_arcache(batch_align2D_region_0_m_axi_my_region_fcoord_ARCACHE),
        .S01_AXI_arlen(batch_align2D_region_0_m_axi_my_region_fcoord_ARLEN),
        .S01_AXI_arlock(batch_align2D_region_0_m_axi_my_region_fcoord_ARLOCK[0]),
        .S01_AXI_arprot(batch_align2D_region_0_m_axi_my_region_fcoord_ARPROT),
        .S01_AXI_arqos(batch_align2D_region_0_m_axi_my_region_fcoord_ARQOS),
        .S01_AXI_arready(batch_align2D_region_0_m_axi_my_region_fcoord_ARREADY),
        .S01_AXI_arsize(batch_align2D_region_0_m_axi_my_region_fcoord_ARSIZE),
        .S01_AXI_arvalid(batch_align2D_region_0_m_axi_my_region_fcoord_ARVALID),
        .S01_AXI_awaddr(batch_align2D_region_0_m_axi_my_region_fcoord_AWADDR),
        .S01_AXI_awburst(batch_align2D_region_0_m_axi_my_region_fcoord_AWBURST),
        .S01_AXI_awcache(batch_align2D_region_0_m_axi_my_region_fcoord_AWCACHE),
        .S01_AXI_awlen(batch_align2D_region_0_m_axi_my_region_fcoord_AWLEN),
        .S01_AXI_awlock(batch_align2D_region_0_m_axi_my_region_fcoord_AWLOCK[0]),
        .S01_AXI_awprot(batch_align2D_region_0_m_axi_my_region_fcoord_AWPROT),
        .S01_AXI_awqos(batch_align2D_region_0_m_axi_my_region_fcoord_AWQOS),
        .S01_AXI_awready(batch_align2D_region_0_m_axi_my_region_fcoord_AWREADY),
        .S01_AXI_awsize(batch_align2D_region_0_m_axi_my_region_fcoord_AWSIZE),
        .S01_AXI_awvalid(batch_align2D_region_0_m_axi_my_region_fcoord_AWVALID),
        .S01_AXI_bready(batch_align2D_region_0_m_axi_my_region_fcoord_BREADY),
        .S01_AXI_bresp(batch_align2D_region_0_m_axi_my_region_fcoord_BRESP),
        .S01_AXI_bvalid(batch_align2D_region_0_m_axi_my_region_fcoord_BVALID),
        .S01_AXI_rdata(batch_align2D_region_0_m_axi_my_region_fcoord_RDATA),
        .S01_AXI_rlast(batch_align2D_region_0_m_axi_my_region_fcoord_RLAST),
        .S01_AXI_rready(batch_align2D_region_0_m_axi_my_region_fcoord_RREADY),
        .S01_AXI_rresp(batch_align2D_region_0_m_axi_my_region_fcoord_RRESP),
        .S01_AXI_rvalid(batch_align2D_region_0_m_axi_my_region_fcoord_RVALID),
        .S01_AXI_wdata(batch_align2D_region_0_m_axi_my_region_fcoord_WDATA),
        .S01_AXI_wlast(batch_align2D_region_0_m_axi_my_region_fcoord_WLAST),
        .S01_AXI_wready(batch_align2D_region_0_m_axi_my_region_fcoord_WREADY),
        .S01_AXI_wstrb(batch_align2D_region_0_m_axi_my_region_fcoord_WSTRB),
        .S01_AXI_wvalid(batch_align2D_region_0_m_axi_my_region_fcoord_WVALID),
        .S02_AXI_araddr(batch_align2D_region_0_m_axi_my_patches_ARADDR),
        .S02_AXI_arburst(batch_align2D_region_0_m_axi_my_patches_ARBURST),
        .S02_AXI_arcache(batch_align2D_region_0_m_axi_my_patches_ARCACHE),
        .S02_AXI_arlen(batch_align2D_region_0_m_axi_my_patches_ARLEN),
        .S02_AXI_arlock(batch_align2D_region_0_m_axi_my_patches_ARLOCK[0]),
        .S02_AXI_arprot(batch_align2D_region_0_m_axi_my_patches_ARPROT),
        .S02_AXI_arqos(batch_align2D_region_0_m_axi_my_patches_ARQOS),
        .S02_AXI_arready(batch_align2D_region_0_m_axi_my_patches_ARREADY),
        .S02_AXI_arsize(batch_align2D_region_0_m_axi_my_patches_ARSIZE),
        .S02_AXI_arvalid(batch_align2D_region_0_m_axi_my_patches_ARVALID),
        .S02_AXI_awaddr(batch_align2D_region_0_m_axi_my_patches_AWADDR),
        .S02_AXI_awburst(batch_align2D_region_0_m_axi_my_patches_AWBURST),
        .S02_AXI_awcache(batch_align2D_region_0_m_axi_my_patches_AWCACHE),
        .S02_AXI_awlen(batch_align2D_region_0_m_axi_my_patches_AWLEN),
        .S02_AXI_awlock(batch_align2D_region_0_m_axi_my_patches_AWLOCK[0]),
        .S02_AXI_awprot(batch_align2D_region_0_m_axi_my_patches_AWPROT),
        .S02_AXI_awqos(batch_align2D_region_0_m_axi_my_patches_AWQOS),
        .S02_AXI_awready(batch_align2D_region_0_m_axi_my_patches_AWREADY),
        .S02_AXI_awsize(batch_align2D_region_0_m_axi_my_patches_AWSIZE),
        .S02_AXI_awvalid(batch_align2D_region_0_m_axi_my_patches_AWVALID),
        .S02_AXI_bready(batch_align2D_region_0_m_axi_my_patches_BREADY),
        .S02_AXI_bresp(batch_align2D_region_0_m_axi_my_patches_BRESP),
        .S02_AXI_bvalid(batch_align2D_region_0_m_axi_my_patches_BVALID),
        .S02_AXI_rdata(batch_align2D_region_0_m_axi_my_patches_RDATA),
        .S02_AXI_rlast(batch_align2D_region_0_m_axi_my_patches_RLAST),
        .S02_AXI_rready(batch_align2D_region_0_m_axi_my_patches_RREADY),
        .S02_AXI_rresp(batch_align2D_region_0_m_axi_my_patches_RRESP),
        .S02_AXI_rvalid(batch_align2D_region_0_m_axi_my_patches_RVALID),
        .S02_AXI_wdata(batch_align2D_region_0_m_axi_my_patches_WDATA),
        .S02_AXI_wlast(batch_align2D_region_0_m_axi_my_patches_WLAST),
        .S02_AXI_wready(batch_align2D_region_0_m_axi_my_patches_WREADY),
        .S02_AXI_wstrb(batch_align2D_region_0_m_axi_my_patches_WSTRB),
        .S02_AXI_wvalid(batch_align2D_region_0_m_axi_my_patches_WVALID),
        .S03_AXI_araddr(batch_align2D_region_0_m_axi_my_pos_ARADDR),
        .S03_AXI_arburst(batch_align2D_region_0_m_axi_my_pos_ARBURST),
        .S03_AXI_arcache(batch_align2D_region_0_m_axi_my_pos_ARCACHE),
        .S03_AXI_arlen(batch_align2D_region_0_m_axi_my_pos_ARLEN),
        .S03_AXI_arlock(batch_align2D_region_0_m_axi_my_pos_ARLOCK[0]),
        .S03_AXI_arprot(batch_align2D_region_0_m_axi_my_pos_ARPROT),
        .S03_AXI_arqos(batch_align2D_region_0_m_axi_my_pos_ARQOS),
        .S03_AXI_arready(batch_align2D_region_0_m_axi_my_pos_ARREADY),
        .S03_AXI_arsize(batch_align2D_region_0_m_axi_my_pos_ARSIZE),
        .S03_AXI_arvalid(batch_align2D_region_0_m_axi_my_pos_ARVALID),
        .S03_AXI_awaddr(batch_align2D_region_0_m_axi_my_pos_AWADDR),
        .S03_AXI_awburst(batch_align2D_region_0_m_axi_my_pos_AWBURST),
        .S03_AXI_awcache(batch_align2D_region_0_m_axi_my_pos_AWCACHE),
        .S03_AXI_awlen(batch_align2D_region_0_m_axi_my_pos_AWLEN),
        .S03_AXI_awlock(batch_align2D_region_0_m_axi_my_pos_AWLOCK[0]),
        .S03_AXI_awprot(batch_align2D_region_0_m_axi_my_pos_AWPROT),
        .S03_AXI_awqos(batch_align2D_region_0_m_axi_my_pos_AWQOS),
        .S03_AXI_awready(batch_align2D_region_0_m_axi_my_pos_AWREADY),
        .S03_AXI_awsize(batch_align2D_region_0_m_axi_my_pos_AWSIZE),
        .S03_AXI_awvalid(batch_align2D_region_0_m_axi_my_pos_AWVALID),
        .S03_AXI_bready(batch_align2D_region_0_m_axi_my_pos_BREADY),
        .S03_AXI_bresp(batch_align2D_region_0_m_axi_my_pos_BRESP),
        .S03_AXI_bvalid(batch_align2D_region_0_m_axi_my_pos_BVALID),
        .S03_AXI_rdata(batch_align2D_region_0_m_axi_my_pos_RDATA),
        .S03_AXI_rlast(batch_align2D_region_0_m_axi_my_pos_RLAST),
        .S03_AXI_rready(batch_align2D_region_0_m_axi_my_pos_RREADY),
        .S03_AXI_rresp(batch_align2D_region_0_m_axi_my_pos_RRESP),
        .S03_AXI_rvalid(batch_align2D_region_0_m_axi_my_pos_RVALID),
        .S03_AXI_wdata(batch_align2D_region_0_m_axi_my_pos_WDATA),
        .S03_AXI_wlast(batch_align2D_region_0_m_axi_my_pos_WLAST),
        .S03_AXI_wready(batch_align2D_region_0_m_axi_my_pos_WREADY),
        .S03_AXI_wstrb(batch_align2D_region_0_m_axi_my_pos_WSTRB),
        .S03_AXI_wvalid(batch_align2D_region_0_m_axi_my_pos_WVALID),
        .S04_AXI_araddr(batch_align2D_region_0_m_axi_my_debug_ARADDR),
        .S04_AXI_arburst(batch_align2D_region_0_m_axi_my_debug_ARBURST),
        .S04_AXI_arcache(batch_align2D_region_0_m_axi_my_debug_ARCACHE),
        .S04_AXI_arlen(batch_align2D_region_0_m_axi_my_debug_ARLEN),
        .S04_AXI_arlock(batch_align2D_region_0_m_axi_my_debug_ARLOCK[0]),
        .S04_AXI_arprot(batch_align2D_region_0_m_axi_my_debug_ARPROT),
        .S04_AXI_arqos(batch_align2D_region_0_m_axi_my_debug_ARQOS),
        .S04_AXI_arready(batch_align2D_region_0_m_axi_my_debug_ARREADY),
        .S04_AXI_arsize(batch_align2D_region_0_m_axi_my_debug_ARSIZE),
        .S04_AXI_arvalid(batch_align2D_region_0_m_axi_my_debug_ARVALID),
        .S04_AXI_awaddr(batch_align2D_region_0_m_axi_my_debug_AWADDR),
        .S04_AXI_awburst(batch_align2D_region_0_m_axi_my_debug_AWBURST),
        .S04_AXI_awcache(batch_align2D_region_0_m_axi_my_debug_AWCACHE),
        .S04_AXI_awlen(batch_align2D_region_0_m_axi_my_debug_AWLEN),
        .S04_AXI_awlock(batch_align2D_region_0_m_axi_my_debug_AWLOCK[0]),
        .S04_AXI_awprot(batch_align2D_region_0_m_axi_my_debug_AWPROT),
        .S04_AXI_awqos(batch_align2D_region_0_m_axi_my_debug_AWQOS),
        .S04_AXI_awready(batch_align2D_region_0_m_axi_my_debug_AWREADY),
        .S04_AXI_awsize(batch_align2D_region_0_m_axi_my_debug_AWSIZE),
        .S04_AXI_awvalid(batch_align2D_region_0_m_axi_my_debug_AWVALID),
        .S04_AXI_bready(batch_align2D_region_0_m_axi_my_debug_BREADY),
        .S04_AXI_bresp(batch_align2D_region_0_m_axi_my_debug_BRESP),
        .S04_AXI_bvalid(batch_align2D_region_0_m_axi_my_debug_BVALID),
        .S04_AXI_rdata(batch_align2D_region_0_m_axi_my_debug_RDATA),
        .S04_AXI_rlast(batch_align2D_region_0_m_axi_my_debug_RLAST),
        .S04_AXI_rready(batch_align2D_region_0_m_axi_my_debug_RREADY),
        .S04_AXI_rresp(batch_align2D_region_0_m_axi_my_debug_RRESP),
        .S04_AXI_rvalid(batch_align2D_region_0_m_axi_my_debug_RVALID),
        .S04_AXI_wdata(batch_align2D_region_0_m_axi_my_debug_WDATA),
        .S04_AXI_wlast(batch_align2D_region_0_m_axi_my_debug_WLAST),
        .S04_AXI_wready(batch_align2D_region_0_m_axi_my_debug_WREADY),
        .S04_AXI_wstrb(batch_align2D_region_0_m_axi_my_debug_WSTRB),
        .S04_AXI_wvalid(batch_align2D_region_0_m_axi_my_debug_WVALID),
        .S05_AXI_araddr(batch_align2D_region_0_m_axi_my_debug_array_ARADDR),
        .S05_AXI_arburst(batch_align2D_region_0_m_axi_my_debug_array_ARBURST),
        .S05_AXI_arcache(batch_align2D_region_0_m_axi_my_debug_array_ARCACHE),
        .S05_AXI_arlen(batch_align2D_region_0_m_axi_my_debug_array_ARLEN),
        .S05_AXI_arlock(batch_align2D_region_0_m_axi_my_debug_array_ARLOCK[0]),
        .S05_AXI_arprot(batch_align2D_region_0_m_axi_my_debug_array_ARPROT),
        .S05_AXI_arqos(batch_align2D_region_0_m_axi_my_debug_array_ARQOS),
        .S05_AXI_arready(batch_align2D_region_0_m_axi_my_debug_array_ARREADY),
        .S05_AXI_arsize(batch_align2D_region_0_m_axi_my_debug_array_ARSIZE),
        .S05_AXI_arvalid(batch_align2D_region_0_m_axi_my_debug_array_ARVALID),
        .S05_AXI_awaddr(batch_align2D_region_0_m_axi_my_debug_array_AWADDR),
        .S05_AXI_awburst(batch_align2D_region_0_m_axi_my_debug_array_AWBURST),
        .S05_AXI_awcache(batch_align2D_region_0_m_axi_my_debug_array_AWCACHE),
        .S05_AXI_awlen(batch_align2D_region_0_m_axi_my_debug_array_AWLEN),
        .S05_AXI_awlock(batch_align2D_region_0_m_axi_my_debug_array_AWLOCK[0]),
        .S05_AXI_awprot(batch_align2D_region_0_m_axi_my_debug_array_AWPROT),
        .S05_AXI_awqos(batch_align2D_region_0_m_axi_my_debug_array_AWQOS),
        .S05_AXI_awready(batch_align2D_region_0_m_axi_my_debug_array_AWREADY),
        .S05_AXI_awsize(batch_align2D_region_0_m_axi_my_debug_array_AWSIZE),
        .S05_AXI_awvalid(batch_align2D_region_0_m_axi_my_debug_array_AWVALID),
        .S05_AXI_bready(batch_align2D_region_0_m_axi_my_debug_array_BREADY),
        .S05_AXI_bresp(batch_align2D_region_0_m_axi_my_debug_array_BRESP),
        .S05_AXI_bvalid(batch_align2D_region_0_m_axi_my_debug_array_BVALID),
        .S05_AXI_rdata(batch_align2D_region_0_m_axi_my_debug_array_RDATA),
        .S05_AXI_rlast(batch_align2D_region_0_m_axi_my_debug_array_RLAST),
        .S05_AXI_rready(batch_align2D_region_0_m_axi_my_debug_array_RREADY),
        .S05_AXI_rresp(batch_align2D_region_0_m_axi_my_debug_array_RRESP),
        .S05_AXI_rvalid(batch_align2D_region_0_m_axi_my_debug_array_RVALID),
        .S05_AXI_wdata(batch_align2D_region_0_m_axi_my_debug_array_WDATA),
        .S05_AXI_wlast(batch_align2D_region_0_m_axi_my_debug_array_WLAST),
        .S05_AXI_wready(batch_align2D_region_0_m_axi_my_debug_array_WREADY),
        .S05_AXI_wstrb(batch_align2D_region_0_m_axi_my_debug_array_WSTRB),
        .S05_AXI_wvalid(batch_align2D_region_0_m_axi_my_debug_array_WVALID),
        .aclk(zynq_ultra_ps_e_0_pl_clk0),
        .aresetn(rst_ps8_0_96M_peripheral_aresetn));
  design_1_zynq_ultra_ps_e_0_1 zynq_ultra_ps_e_0
       (.maxigp0_araddr(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARADDR),
        .maxigp0_arburst(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARBURST),
        .maxigp0_arcache(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARCACHE),
        .maxigp0_arid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARID),
        .maxigp0_arlen(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLEN),
        .maxigp0_arlock(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARLOCK),
        .maxigp0_arprot(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARPROT),
        .maxigp0_arqos(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARQOS),
        .maxigp0_arready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARREADY),
        .maxigp0_arsize(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARSIZE),
        .maxigp0_arvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_ARVALID),
        .maxigp0_awaddr(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWADDR),
        .maxigp0_awburst(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWBURST),
        .maxigp0_awcache(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWCACHE),
        .maxigp0_awid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWID),
        .maxigp0_awlen(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLEN),
        .maxigp0_awlock(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWLOCK),
        .maxigp0_awprot(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWPROT),
        .maxigp0_awqos(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWQOS),
        .maxigp0_awready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWREADY),
        .maxigp0_awsize(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWSIZE),
        .maxigp0_awvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_AWVALID),
        .maxigp0_bid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BID),
        .maxigp0_bready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BREADY),
        .maxigp0_bresp(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BRESP),
        .maxigp0_bvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_BVALID),
        .maxigp0_rdata(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RDATA),
        .maxigp0_rid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RID),
        .maxigp0_rlast(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RLAST),
        .maxigp0_rready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RREADY),
        .maxigp0_rresp(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RRESP),
        .maxigp0_rvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_RVALID),
        .maxigp0_wdata(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WDATA),
        .maxigp0_wlast(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WLAST),
        .maxigp0_wready(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WREADY),
        .maxigp0_wstrb(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WSTRB),
        .maxigp0_wvalid(zynq_ultra_ps_e_0_M_AXI_HPM0_FPD_WVALID),
        .maxigp1_araddr(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARADDR),
        .maxigp1_arburst(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARBURST),
        .maxigp1_arcache(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARCACHE),
        .maxigp1_arid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARID),
        .maxigp1_arlen(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLEN),
        .maxigp1_arlock(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARLOCK),
        .maxigp1_arprot(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARPROT),
        .maxigp1_arqos(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARQOS),
        .maxigp1_arready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARREADY),
        .maxigp1_arsize(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARSIZE),
        .maxigp1_arvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_ARVALID),
        .maxigp1_awaddr(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWADDR),
        .maxigp1_awburst(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWBURST),
        .maxigp1_awcache(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWCACHE),
        .maxigp1_awid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWID),
        .maxigp1_awlen(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLEN),
        .maxigp1_awlock(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWLOCK),
        .maxigp1_awprot(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWPROT),
        .maxigp1_awqos(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWQOS),
        .maxigp1_awready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWREADY),
        .maxigp1_awsize(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWSIZE),
        .maxigp1_awvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_AWVALID),
        .maxigp1_bid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BID),
        .maxigp1_bready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BREADY),
        .maxigp1_bresp(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BRESP),
        .maxigp1_bvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_BVALID),
        .maxigp1_rdata(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RDATA),
        .maxigp1_rid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RID),
        .maxigp1_rlast(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RLAST),
        .maxigp1_rready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RREADY),
        .maxigp1_rresp(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RRESP),
        .maxigp1_rvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_RVALID),
        .maxigp1_wdata(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WDATA),
        .maxigp1_wlast(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WLAST),
        .maxigp1_wready(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WREADY),
        .maxigp1_wstrb(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WSTRB),
        .maxigp1_wvalid(zynq_ultra_ps_e_0_M_AXI_HPM1_FPD_WVALID),
        .maxihpm0_fpd_aclk(zynq_ultra_ps_e_0_pl_clk0),
        .maxihpm1_fpd_aclk(zynq_ultra_ps_e_0_pl_clk0),
        .pl_clk0(zynq_ultra_ps_e_0_pl_clk0),
        .pl_ps_irq0(1'b0),
        .pl_resetn0(zynq_ultra_ps_e_0_pl_resetn0),
        .saxigp2_araddr(smartconnect_0_M00_AXI_ARADDR),
        .saxigp2_arburst(smartconnect_0_M00_AXI_ARBURST),
        .saxigp2_arcache(smartconnect_0_M00_AXI_ARCACHE),
        .saxigp2_arid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_arlen(smartconnect_0_M00_AXI_ARLEN),
        .saxigp2_arlock(smartconnect_0_M00_AXI_ARLOCK),
        .saxigp2_arprot(smartconnect_0_M00_AXI_ARPROT),
        .saxigp2_arqos(smartconnect_0_M00_AXI_ARQOS),
        .saxigp2_arready(smartconnect_0_M00_AXI_ARREADY),
        .saxigp2_arsize(smartconnect_0_M00_AXI_ARSIZE),
        .saxigp2_aruser(1'b0),
        .saxigp2_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .saxigp2_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .saxigp2_awburst(smartconnect_0_M00_AXI_AWBURST),
        .saxigp2_awcache(smartconnect_0_M00_AXI_AWCACHE),
        .saxigp2_awid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .saxigp2_awlen(smartconnect_0_M00_AXI_AWLEN),
        .saxigp2_awlock(smartconnect_0_M00_AXI_AWLOCK),
        .saxigp2_awprot(smartconnect_0_M00_AXI_AWPROT),
        .saxigp2_awqos(smartconnect_0_M00_AXI_AWQOS),
        .saxigp2_awready(smartconnect_0_M00_AXI_AWREADY),
        .saxigp2_awsize(smartconnect_0_M00_AXI_AWSIZE),
        .saxigp2_awuser(1'b0),
        .saxigp2_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .saxigp2_bready(smartconnect_0_M00_AXI_BREADY),
        .saxigp2_bresp(smartconnect_0_M00_AXI_BRESP),
        .saxigp2_bvalid(smartconnect_0_M00_AXI_BVALID),
        .saxigp2_rdata(smartconnect_0_M00_AXI_RDATA),
        .saxigp2_rlast(smartconnect_0_M00_AXI_RLAST),
        .saxigp2_rready(smartconnect_0_M00_AXI_RREADY),
        .saxigp2_rresp(smartconnect_0_M00_AXI_RRESP),
        .saxigp2_rvalid(smartconnect_0_M00_AXI_RVALID),
        .saxigp2_wdata(smartconnect_0_M00_AXI_WDATA),
        .saxigp2_wlast(smartconnect_0_M00_AXI_WLAST),
        .saxigp2_wready(smartconnect_0_M00_AXI_WREADY),
        .saxigp2_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .saxigp2_wvalid(smartconnect_0_M00_AXI_WVALID),
        .saxihp0_fpd_aclk(zynq_ultra_ps_e_0_pl_clk0));
endmodule

module design_1_ps8_0_axi_periph_1
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arready,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awready,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wready,
    M00_AXI_wstrb,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arready,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awready,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid,
    S01_ACLK,
    S01_ARESETN,
    S01_AXI_araddr,
    S01_AXI_arburst,
    S01_AXI_arcache,
    S01_AXI_arid,
    S01_AXI_arlen,
    S01_AXI_arlock,
    S01_AXI_arprot,
    S01_AXI_arqos,
    S01_AXI_arready,
    S01_AXI_arsize,
    S01_AXI_arvalid,
    S01_AXI_awaddr,
    S01_AXI_awburst,
    S01_AXI_awcache,
    S01_AXI_awid,
    S01_AXI_awlen,
    S01_AXI_awlock,
    S01_AXI_awprot,
    S01_AXI_awqos,
    S01_AXI_awready,
    S01_AXI_awsize,
    S01_AXI_awvalid,
    S01_AXI_bid,
    S01_AXI_bready,
    S01_AXI_bresp,
    S01_AXI_bvalid,
    S01_AXI_rdata,
    S01_AXI_rid,
    S01_AXI_rlast,
    S01_AXI_rready,
    S01_AXI_rresp,
    S01_AXI_rvalid,
    S01_AXI_wdata,
    S01_AXI_wlast,
    S01_AXI_wready,
    S01_AXI_wstrb,
    S01_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [39:0]M00_AXI_araddr;
  input M00_AXI_arready;
  output M00_AXI_arvalid;
  output [39:0]M00_AXI_awaddr;
  input M00_AXI_awready;
  output M00_AXI_awvalid;
  output M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  output M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  input M00_AXI_wready;
  output [3:0]M00_AXI_wstrb;
  output M00_AXI_wvalid;
  input M01_ACLK;
  input M01_ARESETN;
  output [39:0]M01_AXI_araddr;
  input M01_AXI_arready;
  output M01_AXI_arvalid;
  output [39:0]M01_AXI_awaddr;
  input M01_AXI_awready;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [39:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [15:0]S00_AXI_arid;
  input [7:0]S00_AXI_arlen;
  input [0:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [39:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [15:0]S00_AXI_awid;
  input [7:0]S00_AXI_awlen;
  input [0:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  output [15:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [127:0]S00_AXI_rdata;
  output [15:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [127:0]S00_AXI_wdata;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [15:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;
  input S01_ACLK;
  input S01_ARESETN;
  input [39:0]S01_AXI_araddr;
  input [1:0]S01_AXI_arburst;
  input [3:0]S01_AXI_arcache;
  input [15:0]S01_AXI_arid;
  input [7:0]S01_AXI_arlen;
  input [0:0]S01_AXI_arlock;
  input [2:0]S01_AXI_arprot;
  input [3:0]S01_AXI_arqos;
  output S01_AXI_arready;
  input [2:0]S01_AXI_arsize;
  input S01_AXI_arvalid;
  input [39:0]S01_AXI_awaddr;
  input [1:0]S01_AXI_awburst;
  input [3:0]S01_AXI_awcache;
  input [15:0]S01_AXI_awid;
  input [7:0]S01_AXI_awlen;
  input [0:0]S01_AXI_awlock;
  input [2:0]S01_AXI_awprot;
  input [3:0]S01_AXI_awqos;
  output S01_AXI_awready;
  input [2:0]S01_AXI_awsize;
  input S01_AXI_awvalid;
  output [15:0]S01_AXI_bid;
  input S01_AXI_bready;
  output [1:0]S01_AXI_bresp;
  output S01_AXI_bvalid;
  output [127:0]S01_AXI_rdata;
  output [15:0]S01_AXI_rid;
  output S01_AXI_rlast;
  input S01_AXI_rready;
  output [1:0]S01_AXI_rresp;
  output S01_AXI_rvalid;
  input [127:0]S01_AXI_wdata;
  input S01_AXI_wlast;
  output S01_AXI_wready;
  input [15:0]S01_AXI_wstrb;
  input S01_AXI_wvalid;

  wire [39:0]m00_couplers_to_ps8_0_axi_periph_ARADDR;
  wire m00_couplers_to_ps8_0_axi_periph_ARREADY;
  wire m00_couplers_to_ps8_0_axi_periph_ARVALID;
  wire [39:0]m00_couplers_to_ps8_0_axi_periph_AWADDR;
  wire m00_couplers_to_ps8_0_axi_periph_AWREADY;
  wire m00_couplers_to_ps8_0_axi_periph_AWVALID;
  wire m00_couplers_to_ps8_0_axi_periph_BREADY;
  wire [1:0]m00_couplers_to_ps8_0_axi_periph_BRESP;
  wire m00_couplers_to_ps8_0_axi_periph_BVALID;
  wire [31:0]m00_couplers_to_ps8_0_axi_periph_RDATA;
  wire m00_couplers_to_ps8_0_axi_periph_RREADY;
  wire [1:0]m00_couplers_to_ps8_0_axi_periph_RRESP;
  wire m00_couplers_to_ps8_0_axi_periph_RVALID;
  wire [31:0]m00_couplers_to_ps8_0_axi_periph_WDATA;
  wire m00_couplers_to_ps8_0_axi_periph_WREADY;
  wire [3:0]m00_couplers_to_ps8_0_axi_periph_WSTRB;
  wire m00_couplers_to_ps8_0_axi_periph_WVALID;
  wire [39:0]m01_couplers_to_ps8_0_axi_periph_ARADDR;
  wire m01_couplers_to_ps8_0_axi_periph_ARREADY;
  wire m01_couplers_to_ps8_0_axi_periph_ARVALID;
  wire [39:0]m01_couplers_to_ps8_0_axi_periph_AWADDR;
  wire m01_couplers_to_ps8_0_axi_periph_AWREADY;
  wire m01_couplers_to_ps8_0_axi_periph_AWVALID;
  wire m01_couplers_to_ps8_0_axi_periph_BREADY;
  wire [1:0]m01_couplers_to_ps8_0_axi_periph_BRESP;
  wire m01_couplers_to_ps8_0_axi_periph_BVALID;
  wire [31:0]m01_couplers_to_ps8_0_axi_periph_RDATA;
  wire m01_couplers_to_ps8_0_axi_periph_RREADY;
  wire [1:0]m01_couplers_to_ps8_0_axi_periph_RRESP;
  wire m01_couplers_to_ps8_0_axi_periph_RVALID;
  wire [31:0]m01_couplers_to_ps8_0_axi_periph_WDATA;
  wire m01_couplers_to_ps8_0_axi_periph_WREADY;
  wire [3:0]m01_couplers_to_ps8_0_axi_periph_WSTRB;
  wire m01_couplers_to_ps8_0_axi_periph_WVALID;
  wire ps8_0_axi_periph_ACLK_net;
  wire ps8_0_axi_periph_ARESETN_net;
  wire [39:0]ps8_0_axi_periph_to_s00_couplers_ARADDR;
  wire [1:0]ps8_0_axi_periph_to_s00_couplers_ARBURST;
  wire [3:0]ps8_0_axi_periph_to_s00_couplers_ARCACHE;
  wire [15:0]ps8_0_axi_periph_to_s00_couplers_ARID;
  wire [7:0]ps8_0_axi_periph_to_s00_couplers_ARLEN;
  wire [0:0]ps8_0_axi_periph_to_s00_couplers_ARLOCK;
  wire [2:0]ps8_0_axi_periph_to_s00_couplers_ARPROT;
  wire [3:0]ps8_0_axi_periph_to_s00_couplers_ARQOS;
  wire ps8_0_axi_periph_to_s00_couplers_ARREADY;
  wire [2:0]ps8_0_axi_periph_to_s00_couplers_ARSIZE;
  wire ps8_0_axi_periph_to_s00_couplers_ARVALID;
  wire [39:0]ps8_0_axi_periph_to_s00_couplers_AWADDR;
  wire [1:0]ps8_0_axi_periph_to_s00_couplers_AWBURST;
  wire [3:0]ps8_0_axi_periph_to_s00_couplers_AWCACHE;
  wire [15:0]ps8_0_axi_periph_to_s00_couplers_AWID;
  wire [7:0]ps8_0_axi_periph_to_s00_couplers_AWLEN;
  wire [0:0]ps8_0_axi_periph_to_s00_couplers_AWLOCK;
  wire [2:0]ps8_0_axi_periph_to_s00_couplers_AWPROT;
  wire [3:0]ps8_0_axi_periph_to_s00_couplers_AWQOS;
  wire ps8_0_axi_periph_to_s00_couplers_AWREADY;
  wire [2:0]ps8_0_axi_periph_to_s00_couplers_AWSIZE;
  wire ps8_0_axi_periph_to_s00_couplers_AWVALID;
  wire [15:0]ps8_0_axi_periph_to_s00_couplers_BID;
  wire ps8_0_axi_periph_to_s00_couplers_BREADY;
  wire [1:0]ps8_0_axi_periph_to_s00_couplers_BRESP;
  wire ps8_0_axi_periph_to_s00_couplers_BVALID;
  wire [127:0]ps8_0_axi_periph_to_s00_couplers_RDATA;
  wire [15:0]ps8_0_axi_periph_to_s00_couplers_RID;
  wire ps8_0_axi_periph_to_s00_couplers_RLAST;
  wire ps8_0_axi_periph_to_s00_couplers_RREADY;
  wire [1:0]ps8_0_axi_periph_to_s00_couplers_RRESP;
  wire ps8_0_axi_periph_to_s00_couplers_RVALID;
  wire [127:0]ps8_0_axi_periph_to_s00_couplers_WDATA;
  wire ps8_0_axi_periph_to_s00_couplers_WLAST;
  wire ps8_0_axi_periph_to_s00_couplers_WREADY;
  wire [15:0]ps8_0_axi_periph_to_s00_couplers_WSTRB;
  wire ps8_0_axi_periph_to_s00_couplers_WVALID;
  wire [39:0]ps8_0_axi_periph_to_s01_couplers_ARADDR;
  wire [1:0]ps8_0_axi_periph_to_s01_couplers_ARBURST;
  wire [3:0]ps8_0_axi_periph_to_s01_couplers_ARCACHE;
  wire [15:0]ps8_0_axi_periph_to_s01_couplers_ARID;
  wire [7:0]ps8_0_axi_periph_to_s01_couplers_ARLEN;
  wire [0:0]ps8_0_axi_periph_to_s01_couplers_ARLOCK;
  wire [2:0]ps8_0_axi_periph_to_s01_couplers_ARPROT;
  wire [3:0]ps8_0_axi_periph_to_s01_couplers_ARQOS;
  wire ps8_0_axi_periph_to_s01_couplers_ARREADY;
  wire [2:0]ps8_0_axi_periph_to_s01_couplers_ARSIZE;
  wire ps8_0_axi_periph_to_s01_couplers_ARVALID;
  wire [39:0]ps8_0_axi_periph_to_s01_couplers_AWADDR;
  wire [1:0]ps8_0_axi_periph_to_s01_couplers_AWBURST;
  wire [3:0]ps8_0_axi_periph_to_s01_couplers_AWCACHE;
  wire [15:0]ps8_0_axi_periph_to_s01_couplers_AWID;
  wire [7:0]ps8_0_axi_periph_to_s01_couplers_AWLEN;
  wire [0:0]ps8_0_axi_periph_to_s01_couplers_AWLOCK;
  wire [2:0]ps8_0_axi_periph_to_s01_couplers_AWPROT;
  wire [3:0]ps8_0_axi_periph_to_s01_couplers_AWQOS;
  wire ps8_0_axi_periph_to_s01_couplers_AWREADY;
  wire [2:0]ps8_0_axi_periph_to_s01_couplers_AWSIZE;
  wire ps8_0_axi_periph_to_s01_couplers_AWVALID;
  wire [15:0]ps8_0_axi_periph_to_s01_couplers_BID;
  wire ps8_0_axi_periph_to_s01_couplers_BREADY;
  wire [1:0]ps8_0_axi_periph_to_s01_couplers_BRESP;
  wire ps8_0_axi_periph_to_s01_couplers_BVALID;
  wire [127:0]ps8_0_axi_periph_to_s01_couplers_RDATA;
  wire [15:0]ps8_0_axi_periph_to_s01_couplers_RID;
  wire ps8_0_axi_periph_to_s01_couplers_RLAST;
  wire ps8_0_axi_periph_to_s01_couplers_RREADY;
  wire [1:0]ps8_0_axi_periph_to_s01_couplers_RRESP;
  wire ps8_0_axi_periph_to_s01_couplers_RVALID;
  wire [127:0]ps8_0_axi_periph_to_s01_couplers_WDATA;
  wire ps8_0_axi_periph_to_s01_couplers_WLAST;
  wire ps8_0_axi_periph_to_s01_couplers_WREADY;
  wire [15:0]ps8_0_axi_periph_to_s01_couplers_WSTRB;
  wire ps8_0_axi_periph_to_s01_couplers_WVALID;
  wire [39:0]s00_couplers_to_xbar_ARADDR;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire s00_couplers_to_xbar_ARVALID;
  wire [39:0]s00_couplers_to_xbar_AWADDR;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire s00_couplers_to_xbar_AWVALID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [31:0]s00_couplers_to_xbar_RDATA;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [31:0]s00_couplers_to_xbar_WDATA;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [3:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [39:0]s01_couplers_to_xbar_ARADDR;
  wire [2:0]s01_couplers_to_xbar_ARPROT;
  wire [1:1]s01_couplers_to_xbar_ARREADY;
  wire s01_couplers_to_xbar_ARVALID;
  wire [39:0]s01_couplers_to_xbar_AWADDR;
  wire [2:0]s01_couplers_to_xbar_AWPROT;
  wire [1:1]s01_couplers_to_xbar_AWREADY;
  wire s01_couplers_to_xbar_AWVALID;
  wire s01_couplers_to_xbar_BREADY;
  wire [3:2]s01_couplers_to_xbar_BRESP;
  wire [1:1]s01_couplers_to_xbar_BVALID;
  wire [63:32]s01_couplers_to_xbar_RDATA;
  wire s01_couplers_to_xbar_RREADY;
  wire [3:2]s01_couplers_to_xbar_RRESP;
  wire [1:1]s01_couplers_to_xbar_RVALID;
  wire [31:0]s01_couplers_to_xbar_WDATA;
  wire [1:1]s01_couplers_to_xbar_WREADY;
  wire [3:0]s01_couplers_to_xbar_WSTRB;
  wire s01_couplers_to_xbar_WVALID;
  wire [39:0]xbar_to_m00_couplers_ARADDR;
  wire xbar_to_m00_couplers_ARREADY;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [39:0]xbar_to_m00_couplers_AWADDR;
  wire xbar_to_m00_couplers_AWREADY;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire xbar_to_m00_couplers_BVALID;
  wire [31:0]xbar_to_m00_couplers_RDATA;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire xbar_to_m00_couplers_RVALID;
  wire [31:0]xbar_to_m00_couplers_WDATA;
  wire xbar_to_m00_couplers_WREADY;
  wire [3:0]xbar_to_m00_couplers_WSTRB;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [79:40]xbar_to_m01_couplers_ARADDR;
  wire xbar_to_m01_couplers_ARREADY;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [79:40]xbar_to_m01_couplers_AWADDR;
  wire xbar_to_m01_couplers_AWREADY;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [31:0]xbar_to_m01_couplers_RDATA;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [63:32]xbar_to_m01_couplers_WDATA;
  wire xbar_to_m01_couplers_WREADY;
  wire [7:4]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;

  assign M00_AXI_araddr[39:0] = m00_couplers_to_ps8_0_axi_periph_ARADDR;
  assign M00_AXI_arvalid = m00_couplers_to_ps8_0_axi_periph_ARVALID;
  assign M00_AXI_awaddr[39:0] = m00_couplers_to_ps8_0_axi_periph_AWADDR;
  assign M00_AXI_awvalid = m00_couplers_to_ps8_0_axi_periph_AWVALID;
  assign M00_AXI_bready = m00_couplers_to_ps8_0_axi_periph_BREADY;
  assign M00_AXI_rready = m00_couplers_to_ps8_0_axi_periph_RREADY;
  assign M00_AXI_wdata[31:0] = m00_couplers_to_ps8_0_axi_periph_WDATA;
  assign M00_AXI_wstrb[3:0] = m00_couplers_to_ps8_0_axi_periph_WSTRB;
  assign M00_AXI_wvalid = m00_couplers_to_ps8_0_axi_periph_WVALID;
  assign M01_AXI_araddr[39:0] = m01_couplers_to_ps8_0_axi_periph_ARADDR;
  assign M01_AXI_arvalid = m01_couplers_to_ps8_0_axi_periph_ARVALID;
  assign M01_AXI_awaddr[39:0] = m01_couplers_to_ps8_0_axi_periph_AWADDR;
  assign M01_AXI_awvalid = m01_couplers_to_ps8_0_axi_periph_AWVALID;
  assign M01_AXI_bready = m01_couplers_to_ps8_0_axi_periph_BREADY;
  assign M01_AXI_rready = m01_couplers_to_ps8_0_axi_periph_RREADY;
  assign M01_AXI_wdata[31:0] = m01_couplers_to_ps8_0_axi_periph_WDATA;
  assign M01_AXI_wstrb[3:0] = m01_couplers_to_ps8_0_axi_periph_WSTRB;
  assign M01_AXI_wvalid = m01_couplers_to_ps8_0_axi_periph_WVALID;
  assign S00_AXI_arready = ps8_0_axi_periph_to_s00_couplers_ARREADY;
  assign S00_AXI_awready = ps8_0_axi_periph_to_s00_couplers_AWREADY;
  assign S00_AXI_bid[15:0] = ps8_0_axi_periph_to_s00_couplers_BID;
  assign S00_AXI_bresp[1:0] = ps8_0_axi_periph_to_s00_couplers_BRESP;
  assign S00_AXI_bvalid = ps8_0_axi_periph_to_s00_couplers_BVALID;
  assign S00_AXI_rdata[127:0] = ps8_0_axi_periph_to_s00_couplers_RDATA;
  assign S00_AXI_rid[15:0] = ps8_0_axi_periph_to_s00_couplers_RID;
  assign S00_AXI_rlast = ps8_0_axi_periph_to_s00_couplers_RLAST;
  assign S00_AXI_rresp[1:0] = ps8_0_axi_periph_to_s00_couplers_RRESP;
  assign S00_AXI_rvalid = ps8_0_axi_periph_to_s00_couplers_RVALID;
  assign S00_AXI_wready = ps8_0_axi_periph_to_s00_couplers_WREADY;
  assign S01_AXI_arready = ps8_0_axi_periph_to_s01_couplers_ARREADY;
  assign S01_AXI_awready = ps8_0_axi_periph_to_s01_couplers_AWREADY;
  assign S01_AXI_bid[15:0] = ps8_0_axi_periph_to_s01_couplers_BID;
  assign S01_AXI_bresp[1:0] = ps8_0_axi_periph_to_s01_couplers_BRESP;
  assign S01_AXI_bvalid = ps8_0_axi_periph_to_s01_couplers_BVALID;
  assign S01_AXI_rdata[127:0] = ps8_0_axi_periph_to_s01_couplers_RDATA;
  assign S01_AXI_rid[15:0] = ps8_0_axi_periph_to_s01_couplers_RID;
  assign S01_AXI_rlast = ps8_0_axi_periph_to_s01_couplers_RLAST;
  assign S01_AXI_rresp[1:0] = ps8_0_axi_periph_to_s01_couplers_RRESP;
  assign S01_AXI_rvalid = ps8_0_axi_periph_to_s01_couplers_RVALID;
  assign S01_AXI_wready = ps8_0_axi_periph_to_s01_couplers_WREADY;
  assign m00_couplers_to_ps8_0_axi_periph_ARREADY = M00_AXI_arready;
  assign m00_couplers_to_ps8_0_axi_periph_AWREADY = M00_AXI_awready;
  assign m00_couplers_to_ps8_0_axi_periph_BRESP = M00_AXI_bresp[1:0];
  assign m00_couplers_to_ps8_0_axi_periph_BVALID = M00_AXI_bvalid;
  assign m00_couplers_to_ps8_0_axi_periph_RDATA = M00_AXI_rdata[31:0];
  assign m00_couplers_to_ps8_0_axi_periph_RRESP = M00_AXI_rresp[1:0];
  assign m00_couplers_to_ps8_0_axi_periph_RVALID = M00_AXI_rvalid;
  assign m00_couplers_to_ps8_0_axi_periph_WREADY = M00_AXI_wready;
  assign m01_couplers_to_ps8_0_axi_periph_ARREADY = M01_AXI_arready;
  assign m01_couplers_to_ps8_0_axi_periph_AWREADY = M01_AXI_awready;
  assign m01_couplers_to_ps8_0_axi_periph_BRESP = M01_AXI_bresp[1:0];
  assign m01_couplers_to_ps8_0_axi_periph_BVALID = M01_AXI_bvalid;
  assign m01_couplers_to_ps8_0_axi_periph_RDATA = M01_AXI_rdata[31:0];
  assign m01_couplers_to_ps8_0_axi_periph_RRESP = M01_AXI_rresp[1:0];
  assign m01_couplers_to_ps8_0_axi_periph_RVALID = M01_AXI_rvalid;
  assign m01_couplers_to_ps8_0_axi_periph_WREADY = M01_AXI_wready;
  assign ps8_0_axi_periph_ACLK_net = ACLK;
  assign ps8_0_axi_periph_ARESETN_net = ARESETN;
  assign ps8_0_axi_periph_to_s00_couplers_ARADDR = S00_AXI_araddr[39:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARBURST = S00_AXI_arburst[1:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARCACHE = S00_AXI_arcache[3:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARID = S00_AXI_arid[15:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARLEN = S00_AXI_arlen[7:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARLOCK = S00_AXI_arlock[0];
  assign ps8_0_axi_periph_to_s00_couplers_ARPROT = S00_AXI_arprot[2:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARQOS = S00_AXI_arqos[3:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARSIZE = S00_AXI_arsize[2:0];
  assign ps8_0_axi_periph_to_s00_couplers_ARVALID = S00_AXI_arvalid;
  assign ps8_0_axi_periph_to_s00_couplers_AWADDR = S00_AXI_awaddr[39:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWBURST = S00_AXI_awburst[1:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWCACHE = S00_AXI_awcache[3:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWID = S00_AXI_awid[15:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWLEN = S00_AXI_awlen[7:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWLOCK = S00_AXI_awlock[0];
  assign ps8_0_axi_periph_to_s00_couplers_AWPROT = S00_AXI_awprot[2:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWQOS = S00_AXI_awqos[3:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWSIZE = S00_AXI_awsize[2:0];
  assign ps8_0_axi_periph_to_s00_couplers_AWVALID = S00_AXI_awvalid;
  assign ps8_0_axi_periph_to_s00_couplers_BREADY = S00_AXI_bready;
  assign ps8_0_axi_periph_to_s00_couplers_RREADY = S00_AXI_rready;
  assign ps8_0_axi_periph_to_s00_couplers_WDATA = S00_AXI_wdata[127:0];
  assign ps8_0_axi_periph_to_s00_couplers_WLAST = S00_AXI_wlast;
  assign ps8_0_axi_periph_to_s00_couplers_WSTRB = S00_AXI_wstrb[15:0];
  assign ps8_0_axi_periph_to_s00_couplers_WVALID = S00_AXI_wvalid;
  assign ps8_0_axi_periph_to_s01_couplers_ARADDR = S01_AXI_araddr[39:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARBURST = S01_AXI_arburst[1:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARCACHE = S01_AXI_arcache[3:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARID = S01_AXI_arid[15:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARLEN = S01_AXI_arlen[7:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARLOCK = S01_AXI_arlock[0];
  assign ps8_0_axi_periph_to_s01_couplers_ARPROT = S01_AXI_arprot[2:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARQOS = S01_AXI_arqos[3:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARSIZE = S01_AXI_arsize[2:0];
  assign ps8_0_axi_periph_to_s01_couplers_ARVALID = S01_AXI_arvalid;
  assign ps8_0_axi_periph_to_s01_couplers_AWADDR = S01_AXI_awaddr[39:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWBURST = S01_AXI_awburst[1:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWCACHE = S01_AXI_awcache[3:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWID = S01_AXI_awid[15:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWLEN = S01_AXI_awlen[7:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWLOCK = S01_AXI_awlock[0];
  assign ps8_0_axi_periph_to_s01_couplers_AWPROT = S01_AXI_awprot[2:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWQOS = S01_AXI_awqos[3:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWSIZE = S01_AXI_awsize[2:0];
  assign ps8_0_axi_periph_to_s01_couplers_AWVALID = S01_AXI_awvalid;
  assign ps8_0_axi_periph_to_s01_couplers_BREADY = S01_AXI_bready;
  assign ps8_0_axi_periph_to_s01_couplers_RREADY = S01_AXI_rready;
  assign ps8_0_axi_periph_to_s01_couplers_WDATA = S01_AXI_wdata[127:0];
  assign ps8_0_axi_periph_to_s01_couplers_WLAST = S01_AXI_wlast;
  assign ps8_0_axi_periph_to_s01_couplers_WSTRB = S01_AXI_wstrb[15:0];
  assign ps8_0_axi_periph_to_s01_couplers_WVALID = S01_AXI_wvalid;
  m00_couplers_imp_QJIMLI m00_couplers
       (.M_ACLK(ps8_0_axi_periph_ACLK_net),
        .M_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(m00_couplers_to_ps8_0_axi_periph_ARADDR),
        .M_AXI_arready(m00_couplers_to_ps8_0_axi_periph_ARREADY),
        .M_AXI_arvalid(m00_couplers_to_ps8_0_axi_periph_ARVALID),
        .M_AXI_awaddr(m00_couplers_to_ps8_0_axi_periph_AWADDR),
        .M_AXI_awready(m00_couplers_to_ps8_0_axi_periph_AWREADY),
        .M_AXI_awvalid(m00_couplers_to_ps8_0_axi_periph_AWVALID),
        .M_AXI_bready(m00_couplers_to_ps8_0_axi_periph_BREADY),
        .M_AXI_bresp(m00_couplers_to_ps8_0_axi_periph_BRESP),
        .M_AXI_bvalid(m00_couplers_to_ps8_0_axi_periph_BVALID),
        .M_AXI_rdata(m00_couplers_to_ps8_0_axi_periph_RDATA),
        .M_AXI_rready(m00_couplers_to_ps8_0_axi_periph_RREADY),
        .M_AXI_rresp(m00_couplers_to_ps8_0_axi_periph_RRESP),
        .M_AXI_rvalid(m00_couplers_to_ps8_0_axi_periph_RVALID),
        .M_AXI_wdata(m00_couplers_to_ps8_0_axi_periph_WDATA),
        .M_AXI_wready(m00_couplers_to_ps8_0_axi_periph_WREADY),
        .M_AXI_wstrb(m00_couplers_to_ps8_0_axi_periph_WSTRB),
        .M_AXI_wvalid(m00_couplers_to_ps8_0_axi_periph_WVALID),
        .S_ACLK(ps8_0_axi_periph_ACLK_net),
        .S_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m00_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_1D3SAH3 m01_couplers
       (.M_ACLK(ps8_0_axi_periph_ACLK_net),
        .M_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(m01_couplers_to_ps8_0_axi_periph_ARADDR),
        .M_AXI_arready(m01_couplers_to_ps8_0_axi_periph_ARREADY),
        .M_AXI_arvalid(m01_couplers_to_ps8_0_axi_periph_ARVALID),
        .M_AXI_awaddr(m01_couplers_to_ps8_0_axi_periph_AWADDR),
        .M_AXI_awready(m01_couplers_to_ps8_0_axi_periph_AWREADY),
        .M_AXI_awvalid(m01_couplers_to_ps8_0_axi_periph_AWVALID),
        .M_AXI_bready(m01_couplers_to_ps8_0_axi_periph_BREADY),
        .M_AXI_bresp(m01_couplers_to_ps8_0_axi_periph_BRESP),
        .M_AXI_bvalid(m01_couplers_to_ps8_0_axi_periph_BVALID),
        .M_AXI_rdata(m01_couplers_to_ps8_0_axi_periph_RDATA),
        .M_AXI_rready(m01_couplers_to_ps8_0_axi_periph_RREADY),
        .M_AXI_rresp(m01_couplers_to_ps8_0_axi_periph_RRESP),
        .M_AXI_rvalid(m01_couplers_to_ps8_0_axi_periph_RVALID),
        .M_AXI_wdata(m01_couplers_to_ps8_0_axi_periph_WDATA),
        .M_AXI_wready(m01_couplers_to_ps8_0_axi_periph_WREADY),
        .M_AXI_wstrb(m01_couplers_to_ps8_0_axi_periph_WSTRB),
        .M_AXI_wvalid(m01_couplers_to_ps8_0_axi_periph_WVALID),
        .S_ACLK(ps8_0_axi_periph_ACLK_net),
        .S_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  s00_couplers_imp_1A7ZMW4 s00_couplers
       (.M_ACLK(ps8_0_axi_periph_ACLK_net),
        .M_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(ps8_0_axi_periph_ACLK_net),
        .S_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(ps8_0_axi_periph_to_s00_couplers_ARADDR),
        .S_AXI_arburst(ps8_0_axi_periph_to_s00_couplers_ARBURST),
        .S_AXI_arcache(ps8_0_axi_periph_to_s00_couplers_ARCACHE),
        .S_AXI_arid(ps8_0_axi_periph_to_s00_couplers_ARID),
        .S_AXI_arlen(ps8_0_axi_periph_to_s00_couplers_ARLEN),
        .S_AXI_arlock(ps8_0_axi_periph_to_s00_couplers_ARLOCK),
        .S_AXI_arprot(ps8_0_axi_periph_to_s00_couplers_ARPROT),
        .S_AXI_arqos(ps8_0_axi_periph_to_s00_couplers_ARQOS),
        .S_AXI_arready(ps8_0_axi_periph_to_s00_couplers_ARREADY),
        .S_AXI_arsize(ps8_0_axi_periph_to_s00_couplers_ARSIZE),
        .S_AXI_arvalid(ps8_0_axi_periph_to_s00_couplers_ARVALID),
        .S_AXI_awaddr(ps8_0_axi_periph_to_s00_couplers_AWADDR),
        .S_AXI_awburst(ps8_0_axi_periph_to_s00_couplers_AWBURST),
        .S_AXI_awcache(ps8_0_axi_periph_to_s00_couplers_AWCACHE),
        .S_AXI_awid(ps8_0_axi_periph_to_s00_couplers_AWID),
        .S_AXI_awlen(ps8_0_axi_periph_to_s00_couplers_AWLEN),
        .S_AXI_awlock(ps8_0_axi_periph_to_s00_couplers_AWLOCK),
        .S_AXI_awprot(ps8_0_axi_periph_to_s00_couplers_AWPROT),
        .S_AXI_awqos(ps8_0_axi_periph_to_s00_couplers_AWQOS),
        .S_AXI_awready(ps8_0_axi_periph_to_s00_couplers_AWREADY),
        .S_AXI_awsize(ps8_0_axi_periph_to_s00_couplers_AWSIZE),
        .S_AXI_awvalid(ps8_0_axi_periph_to_s00_couplers_AWVALID),
        .S_AXI_bid(ps8_0_axi_periph_to_s00_couplers_BID),
        .S_AXI_bready(ps8_0_axi_periph_to_s00_couplers_BREADY),
        .S_AXI_bresp(ps8_0_axi_periph_to_s00_couplers_BRESP),
        .S_AXI_bvalid(ps8_0_axi_periph_to_s00_couplers_BVALID),
        .S_AXI_rdata(ps8_0_axi_periph_to_s00_couplers_RDATA),
        .S_AXI_rid(ps8_0_axi_periph_to_s00_couplers_RID),
        .S_AXI_rlast(ps8_0_axi_periph_to_s00_couplers_RLAST),
        .S_AXI_rready(ps8_0_axi_periph_to_s00_couplers_RREADY),
        .S_AXI_rresp(ps8_0_axi_periph_to_s00_couplers_RRESP),
        .S_AXI_rvalid(ps8_0_axi_periph_to_s00_couplers_RVALID),
        .S_AXI_wdata(ps8_0_axi_periph_to_s00_couplers_WDATA),
        .S_AXI_wlast(ps8_0_axi_periph_to_s00_couplers_WLAST),
        .S_AXI_wready(ps8_0_axi_periph_to_s00_couplers_WREADY),
        .S_AXI_wstrb(ps8_0_axi_periph_to_s00_couplers_WSTRB),
        .S_AXI_wvalid(ps8_0_axi_periph_to_s00_couplers_WVALID));
  s01_couplers_imp_KGUFR9 s01_couplers
       (.M_ACLK(ps8_0_axi_periph_ACLK_net),
        .M_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(s01_couplers_to_xbar_ARADDR),
        .M_AXI_arprot(s01_couplers_to_xbar_ARPROT),
        .M_AXI_arready(s01_couplers_to_xbar_ARREADY),
        .M_AXI_arvalid(s01_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s01_couplers_to_xbar_AWADDR),
        .M_AXI_awprot(s01_couplers_to_xbar_AWPROT),
        .M_AXI_awready(s01_couplers_to_xbar_AWREADY),
        .M_AXI_awvalid(s01_couplers_to_xbar_AWVALID),
        .M_AXI_bready(s01_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s01_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s01_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s01_couplers_to_xbar_RDATA),
        .M_AXI_rready(s01_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s01_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s01_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s01_couplers_to_xbar_WDATA),
        .M_AXI_wready(s01_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s01_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s01_couplers_to_xbar_WVALID),
        .S_ACLK(ps8_0_axi_periph_ACLK_net),
        .S_ARESETN(ps8_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(ps8_0_axi_periph_to_s01_couplers_ARADDR),
        .S_AXI_arburst(ps8_0_axi_periph_to_s01_couplers_ARBURST),
        .S_AXI_arcache(ps8_0_axi_periph_to_s01_couplers_ARCACHE),
        .S_AXI_arid(ps8_0_axi_periph_to_s01_couplers_ARID),
        .S_AXI_arlen(ps8_0_axi_periph_to_s01_couplers_ARLEN),
        .S_AXI_arlock(ps8_0_axi_periph_to_s01_couplers_ARLOCK),
        .S_AXI_arprot(ps8_0_axi_periph_to_s01_couplers_ARPROT),
        .S_AXI_arqos(ps8_0_axi_periph_to_s01_couplers_ARQOS),
        .S_AXI_arready(ps8_0_axi_periph_to_s01_couplers_ARREADY),
        .S_AXI_arsize(ps8_0_axi_periph_to_s01_couplers_ARSIZE),
        .S_AXI_arvalid(ps8_0_axi_periph_to_s01_couplers_ARVALID),
        .S_AXI_awaddr(ps8_0_axi_periph_to_s01_couplers_AWADDR),
        .S_AXI_awburst(ps8_0_axi_periph_to_s01_couplers_AWBURST),
        .S_AXI_awcache(ps8_0_axi_periph_to_s01_couplers_AWCACHE),
        .S_AXI_awid(ps8_0_axi_periph_to_s01_couplers_AWID),
        .S_AXI_awlen(ps8_0_axi_periph_to_s01_couplers_AWLEN),
        .S_AXI_awlock(ps8_0_axi_periph_to_s01_couplers_AWLOCK),
        .S_AXI_awprot(ps8_0_axi_periph_to_s01_couplers_AWPROT),
        .S_AXI_awqos(ps8_0_axi_periph_to_s01_couplers_AWQOS),
        .S_AXI_awready(ps8_0_axi_periph_to_s01_couplers_AWREADY),
        .S_AXI_awsize(ps8_0_axi_periph_to_s01_couplers_AWSIZE),
        .S_AXI_awvalid(ps8_0_axi_periph_to_s01_couplers_AWVALID),
        .S_AXI_bid(ps8_0_axi_periph_to_s01_couplers_BID),
        .S_AXI_bready(ps8_0_axi_periph_to_s01_couplers_BREADY),
        .S_AXI_bresp(ps8_0_axi_periph_to_s01_couplers_BRESP),
        .S_AXI_bvalid(ps8_0_axi_periph_to_s01_couplers_BVALID),
        .S_AXI_rdata(ps8_0_axi_periph_to_s01_couplers_RDATA),
        .S_AXI_rid(ps8_0_axi_periph_to_s01_couplers_RID),
        .S_AXI_rlast(ps8_0_axi_periph_to_s01_couplers_RLAST),
        .S_AXI_rready(ps8_0_axi_periph_to_s01_couplers_RREADY),
        .S_AXI_rresp(ps8_0_axi_periph_to_s01_couplers_RRESP),
        .S_AXI_rvalid(ps8_0_axi_periph_to_s01_couplers_RVALID),
        .S_AXI_wdata(ps8_0_axi_periph_to_s01_couplers_WDATA),
        .S_AXI_wlast(ps8_0_axi_periph_to_s01_couplers_WLAST),
        .S_AXI_wready(ps8_0_axi_periph_to_s01_couplers_WREADY),
        .S_AXI_wstrb(ps8_0_axi_periph_to_s01_couplers_WSTRB),
        .S_AXI_wvalid(ps8_0_axi_periph_to_s01_couplers_WVALID));
  design_1_xbar_1 xbar
       (.aclk(ps8_0_axi_periph_ACLK_net),
        .aresetn(ps8_0_axi_periph_ARESETN_net),
        .m_axi_araddr({xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arready({xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arvalid({xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awready({xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awvalid({xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bready({xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rready({xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wready({xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m01_couplers_WSTRB,xbar_to_m00_couplers_WSTRB}),
        .m_axi_wvalid({xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr({s01_couplers_to_xbar_ARADDR,s00_couplers_to_xbar_ARADDR}),
        .s_axi_arprot({s01_couplers_to_xbar_ARPROT,s00_couplers_to_xbar_ARPROT}),
        .s_axi_arready({s01_couplers_to_xbar_ARREADY,s00_couplers_to_xbar_ARREADY}),
        .s_axi_arvalid({s01_couplers_to_xbar_ARVALID,s00_couplers_to_xbar_ARVALID}),
        .s_axi_awaddr({s01_couplers_to_xbar_AWADDR,s00_couplers_to_xbar_AWADDR}),
        .s_axi_awprot({s01_couplers_to_xbar_AWPROT,s00_couplers_to_xbar_AWPROT}),
        .s_axi_awready({s01_couplers_to_xbar_AWREADY,s00_couplers_to_xbar_AWREADY}),
        .s_axi_awvalid({s01_couplers_to_xbar_AWVALID,s00_couplers_to_xbar_AWVALID}),
        .s_axi_bready({s01_couplers_to_xbar_BREADY,s00_couplers_to_xbar_BREADY}),
        .s_axi_bresp({s01_couplers_to_xbar_BRESP,s00_couplers_to_xbar_BRESP}),
        .s_axi_bvalid({s01_couplers_to_xbar_BVALID,s00_couplers_to_xbar_BVALID}),
        .s_axi_rdata({s01_couplers_to_xbar_RDATA,s00_couplers_to_xbar_RDATA}),
        .s_axi_rready({s01_couplers_to_xbar_RREADY,s00_couplers_to_xbar_RREADY}),
        .s_axi_rresp({s01_couplers_to_xbar_RRESP,s00_couplers_to_xbar_RRESP}),
        .s_axi_rvalid({s01_couplers_to_xbar_RVALID,s00_couplers_to_xbar_RVALID}),
        .s_axi_wdata({s01_couplers_to_xbar_WDATA,s00_couplers_to_xbar_WDATA}),
        .s_axi_wready({s01_couplers_to_xbar_WREADY,s00_couplers_to_xbar_WREADY}),
        .s_axi_wstrb({s01_couplers_to_xbar_WSTRB,s00_couplers_to_xbar_WSTRB}),
        .s_axi_wvalid({s01_couplers_to_xbar_WVALID,s00_couplers_to_xbar_WVALID}));
endmodule

module m00_couplers_imp_QJIMLI
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]m00_couplers_to_m00_couplers_ARADDR;
  wire m00_couplers_to_m00_couplers_ARREADY;
  wire m00_couplers_to_m00_couplers_ARVALID;
  wire [39:0]m00_couplers_to_m00_couplers_AWADDR;
  wire m00_couplers_to_m00_couplers_AWREADY;
  wire m00_couplers_to_m00_couplers_AWVALID;
  wire m00_couplers_to_m00_couplers_BREADY;
  wire [1:0]m00_couplers_to_m00_couplers_BRESP;
  wire m00_couplers_to_m00_couplers_BVALID;
  wire [31:0]m00_couplers_to_m00_couplers_RDATA;
  wire m00_couplers_to_m00_couplers_RREADY;
  wire [1:0]m00_couplers_to_m00_couplers_RRESP;
  wire m00_couplers_to_m00_couplers_RVALID;
  wire [31:0]m00_couplers_to_m00_couplers_WDATA;
  wire m00_couplers_to_m00_couplers_WREADY;
  wire [3:0]m00_couplers_to_m00_couplers_WSTRB;
  wire m00_couplers_to_m00_couplers_WVALID;

  assign M_AXI_araddr[39:0] = m00_couplers_to_m00_couplers_ARADDR;
  assign M_AXI_arvalid = m00_couplers_to_m00_couplers_ARVALID;
  assign M_AXI_awaddr[39:0] = m00_couplers_to_m00_couplers_AWADDR;
  assign M_AXI_awvalid = m00_couplers_to_m00_couplers_AWVALID;
  assign M_AXI_bready = m00_couplers_to_m00_couplers_BREADY;
  assign M_AXI_rready = m00_couplers_to_m00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m00_couplers_to_m00_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = m00_couplers_to_m00_couplers_WSTRB;
  assign M_AXI_wvalid = m00_couplers_to_m00_couplers_WVALID;
  assign S_AXI_arready = m00_couplers_to_m00_couplers_ARREADY;
  assign S_AXI_awready = m00_couplers_to_m00_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m00_couplers_to_m00_couplers_BRESP;
  assign S_AXI_bvalid = m00_couplers_to_m00_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m00_couplers_to_m00_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m00_couplers_to_m00_couplers_RRESP;
  assign S_AXI_rvalid = m00_couplers_to_m00_couplers_RVALID;
  assign S_AXI_wready = m00_couplers_to_m00_couplers_WREADY;
  assign m00_couplers_to_m00_couplers_ARADDR = S_AXI_araddr[39:0];
  assign m00_couplers_to_m00_couplers_ARREADY = M_AXI_arready;
  assign m00_couplers_to_m00_couplers_ARVALID = S_AXI_arvalid;
  assign m00_couplers_to_m00_couplers_AWADDR = S_AXI_awaddr[39:0];
  assign m00_couplers_to_m00_couplers_AWREADY = M_AXI_awready;
  assign m00_couplers_to_m00_couplers_AWVALID = S_AXI_awvalid;
  assign m00_couplers_to_m00_couplers_BREADY = S_AXI_bready;
  assign m00_couplers_to_m00_couplers_BRESP = M_AXI_bresp[1:0];
  assign m00_couplers_to_m00_couplers_BVALID = M_AXI_bvalid;
  assign m00_couplers_to_m00_couplers_RDATA = M_AXI_rdata[31:0];
  assign m00_couplers_to_m00_couplers_RREADY = S_AXI_rready;
  assign m00_couplers_to_m00_couplers_RRESP = M_AXI_rresp[1:0];
  assign m00_couplers_to_m00_couplers_RVALID = M_AXI_rvalid;
  assign m00_couplers_to_m00_couplers_WDATA = S_AXI_wdata[31:0];
  assign m00_couplers_to_m00_couplers_WREADY = M_AXI_wready;
  assign m00_couplers_to_m00_couplers_WSTRB = S_AXI_wstrb[3:0];
  assign m00_couplers_to_m00_couplers_WVALID = S_AXI_wvalid;
endmodule

module m01_couplers_imp_1D3SAH3
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [39:0]m01_couplers_to_m01_couplers_ARADDR;
  wire m01_couplers_to_m01_couplers_ARREADY;
  wire m01_couplers_to_m01_couplers_ARVALID;
  wire [39:0]m01_couplers_to_m01_couplers_AWADDR;
  wire m01_couplers_to_m01_couplers_AWREADY;
  wire m01_couplers_to_m01_couplers_AWVALID;
  wire m01_couplers_to_m01_couplers_BREADY;
  wire [1:0]m01_couplers_to_m01_couplers_BRESP;
  wire m01_couplers_to_m01_couplers_BVALID;
  wire [31:0]m01_couplers_to_m01_couplers_RDATA;
  wire m01_couplers_to_m01_couplers_RREADY;
  wire [1:0]m01_couplers_to_m01_couplers_RRESP;
  wire m01_couplers_to_m01_couplers_RVALID;
  wire [31:0]m01_couplers_to_m01_couplers_WDATA;
  wire m01_couplers_to_m01_couplers_WREADY;
  wire [3:0]m01_couplers_to_m01_couplers_WSTRB;
  wire m01_couplers_to_m01_couplers_WVALID;

  assign M_AXI_araddr[39:0] = m01_couplers_to_m01_couplers_ARADDR;
  assign M_AXI_arvalid = m01_couplers_to_m01_couplers_ARVALID;
  assign M_AXI_awaddr[39:0] = m01_couplers_to_m01_couplers_AWADDR;
  assign M_AXI_awvalid = m01_couplers_to_m01_couplers_AWVALID;
  assign M_AXI_bready = m01_couplers_to_m01_couplers_BREADY;
  assign M_AXI_rready = m01_couplers_to_m01_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m01_couplers_to_m01_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = m01_couplers_to_m01_couplers_WSTRB;
  assign M_AXI_wvalid = m01_couplers_to_m01_couplers_WVALID;
  assign S_AXI_arready = m01_couplers_to_m01_couplers_ARREADY;
  assign S_AXI_awready = m01_couplers_to_m01_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m01_couplers_to_m01_couplers_BRESP;
  assign S_AXI_bvalid = m01_couplers_to_m01_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m01_couplers_to_m01_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m01_couplers_to_m01_couplers_RRESP;
  assign S_AXI_rvalid = m01_couplers_to_m01_couplers_RVALID;
  assign S_AXI_wready = m01_couplers_to_m01_couplers_WREADY;
  assign m01_couplers_to_m01_couplers_ARADDR = S_AXI_araddr[39:0];
  assign m01_couplers_to_m01_couplers_ARREADY = M_AXI_arready;
  assign m01_couplers_to_m01_couplers_ARVALID = S_AXI_arvalid;
  assign m01_couplers_to_m01_couplers_AWADDR = S_AXI_awaddr[39:0];
  assign m01_couplers_to_m01_couplers_AWREADY = M_AXI_awready;
  assign m01_couplers_to_m01_couplers_AWVALID = S_AXI_awvalid;
  assign m01_couplers_to_m01_couplers_BREADY = S_AXI_bready;
  assign m01_couplers_to_m01_couplers_BRESP = M_AXI_bresp[1:0];
  assign m01_couplers_to_m01_couplers_BVALID = M_AXI_bvalid;
  assign m01_couplers_to_m01_couplers_RDATA = M_AXI_rdata[31:0];
  assign m01_couplers_to_m01_couplers_RREADY = S_AXI_rready;
  assign m01_couplers_to_m01_couplers_RRESP = M_AXI_rresp[1:0];
  assign m01_couplers_to_m01_couplers_RVALID = M_AXI_rvalid;
  assign m01_couplers_to_m01_couplers_WDATA = S_AXI_wdata[31:0];
  assign m01_couplers_to_m01_couplers_WREADY = M_AXI_wready;
  assign m01_couplers_to_m01_couplers_WSTRB = S_AXI_wstrb[3:0];
  assign m01_couplers_to_m01_couplers_WVALID = S_AXI_wvalid;
endmodule

module s00_couplers_imp_1A7ZMW4
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [127:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [127:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [15:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire S_ACLK_1;
  wire S_ARESETN_1;
  wire [39:0]auto_ds_to_auto_pc_ARADDR;
  wire [1:0]auto_ds_to_auto_pc_ARBURST;
  wire [3:0]auto_ds_to_auto_pc_ARCACHE;
  wire [7:0]auto_ds_to_auto_pc_ARLEN;
  wire [0:0]auto_ds_to_auto_pc_ARLOCK;
  wire [2:0]auto_ds_to_auto_pc_ARPROT;
  wire [3:0]auto_ds_to_auto_pc_ARQOS;
  wire auto_ds_to_auto_pc_ARREADY;
  wire [3:0]auto_ds_to_auto_pc_ARREGION;
  wire [2:0]auto_ds_to_auto_pc_ARSIZE;
  wire auto_ds_to_auto_pc_ARVALID;
  wire [39:0]auto_ds_to_auto_pc_AWADDR;
  wire [1:0]auto_ds_to_auto_pc_AWBURST;
  wire [3:0]auto_ds_to_auto_pc_AWCACHE;
  wire [7:0]auto_ds_to_auto_pc_AWLEN;
  wire [0:0]auto_ds_to_auto_pc_AWLOCK;
  wire [2:0]auto_ds_to_auto_pc_AWPROT;
  wire [3:0]auto_ds_to_auto_pc_AWQOS;
  wire auto_ds_to_auto_pc_AWREADY;
  wire [3:0]auto_ds_to_auto_pc_AWREGION;
  wire [2:0]auto_ds_to_auto_pc_AWSIZE;
  wire auto_ds_to_auto_pc_AWVALID;
  wire auto_ds_to_auto_pc_BREADY;
  wire [1:0]auto_ds_to_auto_pc_BRESP;
  wire auto_ds_to_auto_pc_BVALID;
  wire [31:0]auto_ds_to_auto_pc_RDATA;
  wire auto_ds_to_auto_pc_RLAST;
  wire auto_ds_to_auto_pc_RREADY;
  wire [1:0]auto_ds_to_auto_pc_RRESP;
  wire auto_ds_to_auto_pc_RVALID;
  wire [31:0]auto_ds_to_auto_pc_WDATA;
  wire auto_ds_to_auto_pc_WLAST;
  wire auto_ds_to_auto_pc_WREADY;
  wire [3:0]auto_ds_to_auto_pc_WSTRB;
  wire auto_ds_to_auto_pc_WVALID;
  wire [39:0]auto_pc_to_s00_couplers_ARADDR;
  wire [2:0]auto_pc_to_s00_couplers_ARPROT;
  wire auto_pc_to_s00_couplers_ARREADY;
  wire auto_pc_to_s00_couplers_ARVALID;
  wire [39:0]auto_pc_to_s00_couplers_AWADDR;
  wire [2:0]auto_pc_to_s00_couplers_AWPROT;
  wire auto_pc_to_s00_couplers_AWREADY;
  wire auto_pc_to_s00_couplers_AWVALID;
  wire auto_pc_to_s00_couplers_BREADY;
  wire [1:0]auto_pc_to_s00_couplers_BRESP;
  wire auto_pc_to_s00_couplers_BVALID;
  wire [31:0]auto_pc_to_s00_couplers_RDATA;
  wire auto_pc_to_s00_couplers_RREADY;
  wire [1:0]auto_pc_to_s00_couplers_RRESP;
  wire auto_pc_to_s00_couplers_RVALID;
  wire [31:0]auto_pc_to_s00_couplers_WDATA;
  wire auto_pc_to_s00_couplers_WREADY;
  wire [3:0]auto_pc_to_s00_couplers_WSTRB;
  wire auto_pc_to_s00_couplers_WVALID;
  wire [39:0]s00_couplers_to_auto_ds_ARADDR;
  wire [1:0]s00_couplers_to_auto_ds_ARBURST;
  wire [3:0]s00_couplers_to_auto_ds_ARCACHE;
  wire [15:0]s00_couplers_to_auto_ds_ARID;
  wire [7:0]s00_couplers_to_auto_ds_ARLEN;
  wire [0:0]s00_couplers_to_auto_ds_ARLOCK;
  wire [2:0]s00_couplers_to_auto_ds_ARPROT;
  wire [3:0]s00_couplers_to_auto_ds_ARQOS;
  wire s00_couplers_to_auto_ds_ARREADY;
  wire [2:0]s00_couplers_to_auto_ds_ARSIZE;
  wire s00_couplers_to_auto_ds_ARVALID;
  wire [39:0]s00_couplers_to_auto_ds_AWADDR;
  wire [1:0]s00_couplers_to_auto_ds_AWBURST;
  wire [3:0]s00_couplers_to_auto_ds_AWCACHE;
  wire [15:0]s00_couplers_to_auto_ds_AWID;
  wire [7:0]s00_couplers_to_auto_ds_AWLEN;
  wire [0:0]s00_couplers_to_auto_ds_AWLOCK;
  wire [2:0]s00_couplers_to_auto_ds_AWPROT;
  wire [3:0]s00_couplers_to_auto_ds_AWQOS;
  wire s00_couplers_to_auto_ds_AWREADY;
  wire [2:0]s00_couplers_to_auto_ds_AWSIZE;
  wire s00_couplers_to_auto_ds_AWVALID;
  wire [15:0]s00_couplers_to_auto_ds_BID;
  wire s00_couplers_to_auto_ds_BREADY;
  wire [1:0]s00_couplers_to_auto_ds_BRESP;
  wire s00_couplers_to_auto_ds_BVALID;
  wire [127:0]s00_couplers_to_auto_ds_RDATA;
  wire [15:0]s00_couplers_to_auto_ds_RID;
  wire s00_couplers_to_auto_ds_RLAST;
  wire s00_couplers_to_auto_ds_RREADY;
  wire [1:0]s00_couplers_to_auto_ds_RRESP;
  wire s00_couplers_to_auto_ds_RVALID;
  wire [127:0]s00_couplers_to_auto_ds_WDATA;
  wire s00_couplers_to_auto_ds_WLAST;
  wire s00_couplers_to_auto_ds_WREADY;
  wire [15:0]s00_couplers_to_auto_ds_WSTRB;
  wire s00_couplers_to_auto_ds_WVALID;

  assign M_AXI_araddr[39:0] = auto_pc_to_s00_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = auto_pc_to_s00_couplers_ARPROT;
  assign M_AXI_arvalid = auto_pc_to_s00_couplers_ARVALID;
  assign M_AXI_awaddr[39:0] = auto_pc_to_s00_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = auto_pc_to_s00_couplers_AWPROT;
  assign M_AXI_awvalid = auto_pc_to_s00_couplers_AWVALID;
  assign M_AXI_bready = auto_pc_to_s00_couplers_BREADY;
  assign M_AXI_rready = auto_pc_to_s00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = auto_pc_to_s00_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = auto_pc_to_s00_couplers_WSTRB;
  assign M_AXI_wvalid = auto_pc_to_s00_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN;
  assign S_AXI_arready = s00_couplers_to_auto_ds_ARREADY;
  assign S_AXI_awready = s00_couplers_to_auto_ds_AWREADY;
  assign S_AXI_bid[15:0] = s00_couplers_to_auto_ds_BID;
  assign S_AXI_bresp[1:0] = s00_couplers_to_auto_ds_BRESP;
  assign S_AXI_bvalid = s00_couplers_to_auto_ds_BVALID;
  assign S_AXI_rdata[127:0] = s00_couplers_to_auto_ds_RDATA;
  assign S_AXI_rid[15:0] = s00_couplers_to_auto_ds_RID;
  assign S_AXI_rlast = s00_couplers_to_auto_ds_RLAST;
  assign S_AXI_rresp[1:0] = s00_couplers_to_auto_ds_RRESP;
  assign S_AXI_rvalid = s00_couplers_to_auto_ds_RVALID;
  assign S_AXI_wready = s00_couplers_to_auto_ds_WREADY;
  assign auto_pc_to_s00_couplers_ARREADY = M_AXI_arready;
  assign auto_pc_to_s00_couplers_AWREADY = M_AXI_awready;
  assign auto_pc_to_s00_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_pc_to_s00_couplers_BVALID = M_AXI_bvalid;
  assign auto_pc_to_s00_couplers_RDATA = M_AXI_rdata[31:0];
  assign auto_pc_to_s00_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_pc_to_s00_couplers_RVALID = M_AXI_rvalid;
  assign auto_pc_to_s00_couplers_WREADY = M_AXI_wready;
  assign s00_couplers_to_auto_ds_ARADDR = S_AXI_araddr[39:0];
  assign s00_couplers_to_auto_ds_ARBURST = S_AXI_arburst[1:0];
  assign s00_couplers_to_auto_ds_ARCACHE = S_AXI_arcache[3:0];
  assign s00_couplers_to_auto_ds_ARID = S_AXI_arid[15:0];
  assign s00_couplers_to_auto_ds_ARLEN = S_AXI_arlen[7:0];
  assign s00_couplers_to_auto_ds_ARLOCK = S_AXI_arlock[0];
  assign s00_couplers_to_auto_ds_ARPROT = S_AXI_arprot[2:0];
  assign s00_couplers_to_auto_ds_ARQOS = S_AXI_arqos[3:0];
  assign s00_couplers_to_auto_ds_ARSIZE = S_AXI_arsize[2:0];
  assign s00_couplers_to_auto_ds_ARVALID = S_AXI_arvalid;
  assign s00_couplers_to_auto_ds_AWADDR = S_AXI_awaddr[39:0];
  assign s00_couplers_to_auto_ds_AWBURST = S_AXI_awburst[1:0];
  assign s00_couplers_to_auto_ds_AWCACHE = S_AXI_awcache[3:0];
  assign s00_couplers_to_auto_ds_AWID = S_AXI_awid[15:0];
  assign s00_couplers_to_auto_ds_AWLEN = S_AXI_awlen[7:0];
  assign s00_couplers_to_auto_ds_AWLOCK = S_AXI_awlock[0];
  assign s00_couplers_to_auto_ds_AWPROT = S_AXI_awprot[2:0];
  assign s00_couplers_to_auto_ds_AWQOS = S_AXI_awqos[3:0];
  assign s00_couplers_to_auto_ds_AWSIZE = S_AXI_awsize[2:0];
  assign s00_couplers_to_auto_ds_AWVALID = S_AXI_awvalid;
  assign s00_couplers_to_auto_ds_BREADY = S_AXI_bready;
  assign s00_couplers_to_auto_ds_RREADY = S_AXI_rready;
  assign s00_couplers_to_auto_ds_WDATA = S_AXI_wdata[127:0];
  assign s00_couplers_to_auto_ds_WLAST = S_AXI_wlast;
  assign s00_couplers_to_auto_ds_WSTRB = S_AXI_wstrb[15:0];
  assign s00_couplers_to_auto_ds_WVALID = S_AXI_wvalid;
  design_1_auto_ds_0 auto_ds
       (.m_axi_araddr(auto_ds_to_auto_pc_ARADDR),
        .m_axi_arburst(auto_ds_to_auto_pc_ARBURST),
        .m_axi_arcache(auto_ds_to_auto_pc_ARCACHE),
        .m_axi_arlen(auto_ds_to_auto_pc_ARLEN),
        .m_axi_arlock(auto_ds_to_auto_pc_ARLOCK),
        .m_axi_arprot(auto_ds_to_auto_pc_ARPROT),
        .m_axi_arqos(auto_ds_to_auto_pc_ARQOS),
        .m_axi_arready(auto_ds_to_auto_pc_ARREADY),
        .m_axi_arregion(auto_ds_to_auto_pc_ARREGION),
        .m_axi_arsize(auto_ds_to_auto_pc_ARSIZE),
        .m_axi_arvalid(auto_ds_to_auto_pc_ARVALID),
        .m_axi_awaddr(auto_ds_to_auto_pc_AWADDR),
        .m_axi_awburst(auto_ds_to_auto_pc_AWBURST),
        .m_axi_awcache(auto_ds_to_auto_pc_AWCACHE),
        .m_axi_awlen(auto_ds_to_auto_pc_AWLEN),
        .m_axi_awlock(auto_ds_to_auto_pc_AWLOCK),
        .m_axi_awprot(auto_ds_to_auto_pc_AWPROT),
        .m_axi_awqos(auto_ds_to_auto_pc_AWQOS),
        .m_axi_awready(auto_ds_to_auto_pc_AWREADY),
        .m_axi_awregion(auto_ds_to_auto_pc_AWREGION),
        .m_axi_awsize(auto_ds_to_auto_pc_AWSIZE),
        .m_axi_awvalid(auto_ds_to_auto_pc_AWVALID),
        .m_axi_bready(auto_ds_to_auto_pc_BREADY),
        .m_axi_bresp(auto_ds_to_auto_pc_BRESP),
        .m_axi_bvalid(auto_ds_to_auto_pc_BVALID),
        .m_axi_rdata(auto_ds_to_auto_pc_RDATA),
        .m_axi_rlast(auto_ds_to_auto_pc_RLAST),
        .m_axi_rready(auto_ds_to_auto_pc_RREADY),
        .m_axi_rresp(auto_ds_to_auto_pc_RRESP),
        .m_axi_rvalid(auto_ds_to_auto_pc_RVALID),
        .m_axi_wdata(auto_ds_to_auto_pc_WDATA),
        .m_axi_wlast(auto_ds_to_auto_pc_WLAST),
        .m_axi_wready(auto_ds_to_auto_pc_WREADY),
        .m_axi_wstrb(auto_ds_to_auto_pc_WSTRB),
        .m_axi_wvalid(auto_ds_to_auto_pc_WVALID),
        .s_axi_aclk(S_ACLK_1),
        .s_axi_araddr(s00_couplers_to_auto_ds_ARADDR),
        .s_axi_arburst(s00_couplers_to_auto_ds_ARBURST),
        .s_axi_arcache(s00_couplers_to_auto_ds_ARCACHE),
        .s_axi_aresetn(S_ARESETN_1),
        .s_axi_arid(s00_couplers_to_auto_ds_ARID),
        .s_axi_arlen(s00_couplers_to_auto_ds_ARLEN),
        .s_axi_arlock(s00_couplers_to_auto_ds_ARLOCK),
        .s_axi_arprot(s00_couplers_to_auto_ds_ARPROT),
        .s_axi_arqos(s00_couplers_to_auto_ds_ARQOS),
        .s_axi_arready(s00_couplers_to_auto_ds_ARREADY),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize(s00_couplers_to_auto_ds_ARSIZE),
        .s_axi_arvalid(s00_couplers_to_auto_ds_ARVALID),
        .s_axi_awaddr(s00_couplers_to_auto_ds_AWADDR),
        .s_axi_awburst(s00_couplers_to_auto_ds_AWBURST),
        .s_axi_awcache(s00_couplers_to_auto_ds_AWCACHE),
        .s_axi_awid(s00_couplers_to_auto_ds_AWID),
        .s_axi_awlen(s00_couplers_to_auto_ds_AWLEN),
        .s_axi_awlock(s00_couplers_to_auto_ds_AWLOCK),
        .s_axi_awprot(s00_couplers_to_auto_ds_AWPROT),
        .s_axi_awqos(s00_couplers_to_auto_ds_AWQOS),
        .s_axi_awready(s00_couplers_to_auto_ds_AWREADY),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize(s00_couplers_to_auto_ds_AWSIZE),
        .s_axi_awvalid(s00_couplers_to_auto_ds_AWVALID),
        .s_axi_bid(s00_couplers_to_auto_ds_BID),
        .s_axi_bready(s00_couplers_to_auto_ds_BREADY),
        .s_axi_bresp(s00_couplers_to_auto_ds_BRESP),
        .s_axi_bvalid(s00_couplers_to_auto_ds_BVALID),
        .s_axi_rdata(s00_couplers_to_auto_ds_RDATA),
        .s_axi_rid(s00_couplers_to_auto_ds_RID),
        .s_axi_rlast(s00_couplers_to_auto_ds_RLAST),
        .s_axi_rready(s00_couplers_to_auto_ds_RREADY),
        .s_axi_rresp(s00_couplers_to_auto_ds_RRESP),
        .s_axi_rvalid(s00_couplers_to_auto_ds_RVALID),
        .s_axi_wdata(s00_couplers_to_auto_ds_WDATA),
        .s_axi_wlast(s00_couplers_to_auto_ds_WLAST),
        .s_axi_wready(s00_couplers_to_auto_ds_WREADY),
        .s_axi_wstrb(s00_couplers_to_auto_ds_WSTRB),
        .s_axi_wvalid(s00_couplers_to_auto_ds_WVALID));
  design_1_auto_pc_0 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_araddr(auto_pc_to_s00_couplers_ARADDR),
        .m_axi_arprot(auto_pc_to_s00_couplers_ARPROT),
        .m_axi_arready(auto_pc_to_s00_couplers_ARREADY),
        .m_axi_arvalid(auto_pc_to_s00_couplers_ARVALID),
        .m_axi_awaddr(auto_pc_to_s00_couplers_AWADDR),
        .m_axi_awprot(auto_pc_to_s00_couplers_AWPROT),
        .m_axi_awready(auto_pc_to_s00_couplers_AWREADY),
        .m_axi_awvalid(auto_pc_to_s00_couplers_AWVALID),
        .m_axi_bready(auto_pc_to_s00_couplers_BREADY),
        .m_axi_bresp(auto_pc_to_s00_couplers_BRESP),
        .m_axi_bvalid(auto_pc_to_s00_couplers_BVALID),
        .m_axi_rdata(auto_pc_to_s00_couplers_RDATA),
        .m_axi_rready(auto_pc_to_s00_couplers_RREADY),
        .m_axi_rresp(auto_pc_to_s00_couplers_RRESP),
        .m_axi_rvalid(auto_pc_to_s00_couplers_RVALID),
        .m_axi_wdata(auto_pc_to_s00_couplers_WDATA),
        .m_axi_wready(auto_pc_to_s00_couplers_WREADY),
        .m_axi_wstrb(auto_pc_to_s00_couplers_WSTRB),
        .m_axi_wvalid(auto_pc_to_s00_couplers_WVALID),
        .s_axi_araddr(auto_ds_to_auto_pc_ARADDR),
        .s_axi_arburst(auto_ds_to_auto_pc_ARBURST),
        .s_axi_arcache(auto_ds_to_auto_pc_ARCACHE),
        .s_axi_arlen(auto_ds_to_auto_pc_ARLEN),
        .s_axi_arlock(auto_ds_to_auto_pc_ARLOCK),
        .s_axi_arprot(auto_ds_to_auto_pc_ARPROT),
        .s_axi_arqos(auto_ds_to_auto_pc_ARQOS),
        .s_axi_arready(auto_ds_to_auto_pc_ARREADY),
        .s_axi_arregion(auto_ds_to_auto_pc_ARREGION),
        .s_axi_arsize(auto_ds_to_auto_pc_ARSIZE),
        .s_axi_arvalid(auto_ds_to_auto_pc_ARVALID),
        .s_axi_awaddr(auto_ds_to_auto_pc_AWADDR),
        .s_axi_awburst(auto_ds_to_auto_pc_AWBURST),
        .s_axi_awcache(auto_ds_to_auto_pc_AWCACHE),
        .s_axi_awlen(auto_ds_to_auto_pc_AWLEN),
        .s_axi_awlock(auto_ds_to_auto_pc_AWLOCK),
        .s_axi_awprot(auto_ds_to_auto_pc_AWPROT),
        .s_axi_awqos(auto_ds_to_auto_pc_AWQOS),
        .s_axi_awready(auto_ds_to_auto_pc_AWREADY),
        .s_axi_awregion(auto_ds_to_auto_pc_AWREGION),
        .s_axi_awsize(auto_ds_to_auto_pc_AWSIZE),
        .s_axi_awvalid(auto_ds_to_auto_pc_AWVALID),
        .s_axi_bready(auto_ds_to_auto_pc_BREADY),
        .s_axi_bresp(auto_ds_to_auto_pc_BRESP),
        .s_axi_bvalid(auto_ds_to_auto_pc_BVALID),
        .s_axi_rdata(auto_ds_to_auto_pc_RDATA),
        .s_axi_rlast(auto_ds_to_auto_pc_RLAST),
        .s_axi_rready(auto_ds_to_auto_pc_RREADY),
        .s_axi_rresp(auto_ds_to_auto_pc_RRESP),
        .s_axi_rvalid(auto_ds_to_auto_pc_RVALID),
        .s_axi_wdata(auto_ds_to_auto_pc_WDATA),
        .s_axi_wlast(auto_ds_to_auto_pc_WLAST),
        .s_axi_wready(auto_ds_to_auto_pc_WREADY),
        .s_axi_wstrb(auto_ds_to_auto_pc_WSTRB),
        .s_axi_wvalid(auto_ds_to_auto_pc_WVALID));
endmodule

module s01_couplers_imp_KGUFR9
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [39:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [39:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [39:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [15:0]S_AXI_arid;
  input [7:0]S_AXI_arlen;
  input [0:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [39:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [15:0]S_AXI_awid;
  input [7:0]S_AXI_awlen;
  input [0:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [15:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [127:0]S_AXI_rdata;
  output [15:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [127:0]S_AXI_wdata;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [15:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire S_ACLK_1;
  wire S_ARESETN_1;
  wire [39:0]auto_ds_to_auto_pc_ARADDR;
  wire [1:0]auto_ds_to_auto_pc_ARBURST;
  wire [3:0]auto_ds_to_auto_pc_ARCACHE;
  wire [7:0]auto_ds_to_auto_pc_ARLEN;
  wire [0:0]auto_ds_to_auto_pc_ARLOCK;
  wire [2:0]auto_ds_to_auto_pc_ARPROT;
  wire [3:0]auto_ds_to_auto_pc_ARQOS;
  wire auto_ds_to_auto_pc_ARREADY;
  wire [3:0]auto_ds_to_auto_pc_ARREGION;
  wire [2:0]auto_ds_to_auto_pc_ARSIZE;
  wire auto_ds_to_auto_pc_ARVALID;
  wire [39:0]auto_ds_to_auto_pc_AWADDR;
  wire [1:0]auto_ds_to_auto_pc_AWBURST;
  wire [3:0]auto_ds_to_auto_pc_AWCACHE;
  wire [7:0]auto_ds_to_auto_pc_AWLEN;
  wire [0:0]auto_ds_to_auto_pc_AWLOCK;
  wire [2:0]auto_ds_to_auto_pc_AWPROT;
  wire [3:0]auto_ds_to_auto_pc_AWQOS;
  wire auto_ds_to_auto_pc_AWREADY;
  wire [3:0]auto_ds_to_auto_pc_AWREGION;
  wire [2:0]auto_ds_to_auto_pc_AWSIZE;
  wire auto_ds_to_auto_pc_AWVALID;
  wire auto_ds_to_auto_pc_BREADY;
  wire [1:0]auto_ds_to_auto_pc_BRESP;
  wire auto_ds_to_auto_pc_BVALID;
  wire [31:0]auto_ds_to_auto_pc_RDATA;
  wire auto_ds_to_auto_pc_RLAST;
  wire auto_ds_to_auto_pc_RREADY;
  wire [1:0]auto_ds_to_auto_pc_RRESP;
  wire auto_ds_to_auto_pc_RVALID;
  wire [31:0]auto_ds_to_auto_pc_WDATA;
  wire auto_ds_to_auto_pc_WLAST;
  wire auto_ds_to_auto_pc_WREADY;
  wire [3:0]auto_ds_to_auto_pc_WSTRB;
  wire auto_ds_to_auto_pc_WVALID;
  wire [39:0]auto_pc_to_s01_couplers_ARADDR;
  wire [2:0]auto_pc_to_s01_couplers_ARPROT;
  wire auto_pc_to_s01_couplers_ARREADY;
  wire auto_pc_to_s01_couplers_ARVALID;
  wire [39:0]auto_pc_to_s01_couplers_AWADDR;
  wire [2:0]auto_pc_to_s01_couplers_AWPROT;
  wire auto_pc_to_s01_couplers_AWREADY;
  wire auto_pc_to_s01_couplers_AWVALID;
  wire auto_pc_to_s01_couplers_BREADY;
  wire [1:0]auto_pc_to_s01_couplers_BRESP;
  wire auto_pc_to_s01_couplers_BVALID;
  wire [31:0]auto_pc_to_s01_couplers_RDATA;
  wire auto_pc_to_s01_couplers_RREADY;
  wire [1:0]auto_pc_to_s01_couplers_RRESP;
  wire auto_pc_to_s01_couplers_RVALID;
  wire [31:0]auto_pc_to_s01_couplers_WDATA;
  wire auto_pc_to_s01_couplers_WREADY;
  wire [3:0]auto_pc_to_s01_couplers_WSTRB;
  wire auto_pc_to_s01_couplers_WVALID;
  wire [39:0]s01_couplers_to_auto_ds_ARADDR;
  wire [1:0]s01_couplers_to_auto_ds_ARBURST;
  wire [3:0]s01_couplers_to_auto_ds_ARCACHE;
  wire [15:0]s01_couplers_to_auto_ds_ARID;
  wire [7:0]s01_couplers_to_auto_ds_ARLEN;
  wire [0:0]s01_couplers_to_auto_ds_ARLOCK;
  wire [2:0]s01_couplers_to_auto_ds_ARPROT;
  wire [3:0]s01_couplers_to_auto_ds_ARQOS;
  wire s01_couplers_to_auto_ds_ARREADY;
  wire [2:0]s01_couplers_to_auto_ds_ARSIZE;
  wire s01_couplers_to_auto_ds_ARVALID;
  wire [39:0]s01_couplers_to_auto_ds_AWADDR;
  wire [1:0]s01_couplers_to_auto_ds_AWBURST;
  wire [3:0]s01_couplers_to_auto_ds_AWCACHE;
  wire [15:0]s01_couplers_to_auto_ds_AWID;
  wire [7:0]s01_couplers_to_auto_ds_AWLEN;
  wire [0:0]s01_couplers_to_auto_ds_AWLOCK;
  wire [2:0]s01_couplers_to_auto_ds_AWPROT;
  wire [3:0]s01_couplers_to_auto_ds_AWQOS;
  wire s01_couplers_to_auto_ds_AWREADY;
  wire [2:0]s01_couplers_to_auto_ds_AWSIZE;
  wire s01_couplers_to_auto_ds_AWVALID;
  wire [15:0]s01_couplers_to_auto_ds_BID;
  wire s01_couplers_to_auto_ds_BREADY;
  wire [1:0]s01_couplers_to_auto_ds_BRESP;
  wire s01_couplers_to_auto_ds_BVALID;
  wire [127:0]s01_couplers_to_auto_ds_RDATA;
  wire [15:0]s01_couplers_to_auto_ds_RID;
  wire s01_couplers_to_auto_ds_RLAST;
  wire s01_couplers_to_auto_ds_RREADY;
  wire [1:0]s01_couplers_to_auto_ds_RRESP;
  wire s01_couplers_to_auto_ds_RVALID;
  wire [127:0]s01_couplers_to_auto_ds_WDATA;
  wire s01_couplers_to_auto_ds_WLAST;
  wire s01_couplers_to_auto_ds_WREADY;
  wire [15:0]s01_couplers_to_auto_ds_WSTRB;
  wire s01_couplers_to_auto_ds_WVALID;

  assign M_AXI_araddr[39:0] = auto_pc_to_s01_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = auto_pc_to_s01_couplers_ARPROT;
  assign M_AXI_arvalid = auto_pc_to_s01_couplers_ARVALID;
  assign M_AXI_awaddr[39:0] = auto_pc_to_s01_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = auto_pc_to_s01_couplers_AWPROT;
  assign M_AXI_awvalid = auto_pc_to_s01_couplers_AWVALID;
  assign M_AXI_bready = auto_pc_to_s01_couplers_BREADY;
  assign M_AXI_rready = auto_pc_to_s01_couplers_RREADY;
  assign M_AXI_wdata[31:0] = auto_pc_to_s01_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = auto_pc_to_s01_couplers_WSTRB;
  assign M_AXI_wvalid = auto_pc_to_s01_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN;
  assign S_AXI_arready = s01_couplers_to_auto_ds_ARREADY;
  assign S_AXI_awready = s01_couplers_to_auto_ds_AWREADY;
  assign S_AXI_bid[15:0] = s01_couplers_to_auto_ds_BID;
  assign S_AXI_bresp[1:0] = s01_couplers_to_auto_ds_BRESP;
  assign S_AXI_bvalid = s01_couplers_to_auto_ds_BVALID;
  assign S_AXI_rdata[127:0] = s01_couplers_to_auto_ds_RDATA;
  assign S_AXI_rid[15:0] = s01_couplers_to_auto_ds_RID;
  assign S_AXI_rlast = s01_couplers_to_auto_ds_RLAST;
  assign S_AXI_rresp[1:0] = s01_couplers_to_auto_ds_RRESP;
  assign S_AXI_rvalid = s01_couplers_to_auto_ds_RVALID;
  assign S_AXI_wready = s01_couplers_to_auto_ds_WREADY;
  assign auto_pc_to_s01_couplers_ARREADY = M_AXI_arready;
  assign auto_pc_to_s01_couplers_AWREADY = M_AXI_awready;
  assign auto_pc_to_s01_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_pc_to_s01_couplers_BVALID = M_AXI_bvalid;
  assign auto_pc_to_s01_couplers_RDATA = M_AXI_rdata[31:0];
  assign auto_pc_to_s01_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_pc_to_s01_couplers_RVALID = M_AXI_rvalid;
  assign auto_pc_to_s01_couplers_WREADY = M_AXI_wready;
  assign s01_couplers_to_auto_ds_ARADDR = S_AXI_araddr[39:0];
  assign s01_couplers_to_auto_ds_ARBURST = S_AXI_arburst[1:0];
  assign s01_couplers_to_auto_ds_ARCACHE = S_AXI_arcache[3:0];
  assign s01_couplers_to_auto_ds_ARID = S_AXI_arid[15:0];
  assign s01_couplers_to_auto_ds_ARLEN = S_AXI_arlen[7:0];
  assign s01_couplers_to_auto_ds_ARLOCK = S_AXI_arlock[0];
  assign s01_couplers_to_auto_ds_ARPROT = S_AXI_arprot[2:0];
  assign s01_couplers_to_auto_ds_ARQOS = S_AXI_arqos[3:0];
  assign s01_couplers_to_auto_ds_ARSIZE = S_AXI_arsize[2:0];
  assign s01_couplers_to_auto_ds_ARVALID = S_AXI_arvalid;
  assign s01_couplers_to_auto_ds_AWADDR = S_AXI_awaddr[39:0];
  assign s01_couplers_to_auto_ds_AWBURST = S_AXI_awburst[1:0];
  assign s01_couplers_to_auto_ds_AWCACHE = S_AXI_awcache[3:0];
  assign s01_couplers_to_auto_ds_AWID = S_AXI_awid[15:0];
  assign s01_couplers_to_auto_ds_AWLEN = S_AXI_awlen[7:0];
  assign s01_couplers_to_auto_ds_AWLOCK = S_AXI_awlock[0];
  assign s01_couplers_to_auto_ds_AWPROT = S_AXI_awprot[2:0];
  assign s01_couplers_to_auto_ds_AWQOS = S_AXI_awqos[3:0];
  assign s01_couplers_to_auto_ds_AWSIZE = S_AXI_awsize[2:0];
  assign s01_couplers_to_auto_ds_AWVALID = S_AXI_awvalid;
  assign s01_couplers_to_auto_ds_BREADY = S_AXI_bready;
  assign s01_couplers_to_auto_ds_RREADY = S_AXI_rready;
  assign s01_couplers_to_auto_ds_WDATA = S_AXI_wdata[127:0];
  assign s01_couplers_to_auto_ds_WLAST = S_AXI_wlast;
  assign s01_couplers_to_auto_ds_WSTRB = S_AXI_wstrb[15:0];
  assign s01_couplers_to_auto_ds_WVALID = S_AXI_wvalid;
  design_1_auto_ds_1 auto_ds
       (.m_axi_araddr(auto_ds_to_auto_pc_ARADDR),
        .m_axi_arburst(auto_ds_to_auto_pc_ARBURST),
        .m_axi_arcache(auto_ds_to_auto_pc_ARCACHE),
        .m_axi_arlen(auto_ds_to_auto_pc_ARLEN),
        .m_axi_arlock(auto_ds_to_auto_pc_ARLOCK),
        .m_axi_arprot(auto_ds_to_auto_pc_ARPROT),
        .m_axi_arqos(auto_ds_to_auto_pc_ARQOS),
        .m_axi_arready(auto_ds_to_auto_pc_ARREADY),
        .m_axi_arregion(auto_ds_to_auto_pc_ARREGION),
        .m_axi_arsize(auto_ds_to_auto_pc_ARSIZE),
        .m_axi_arvalid(auto_ds_to_auto_pc_ARVALID),
        .m_axi_awaddr(auto_ds_to_auto_pc_AWADDR),
        .m_axi_awburst(auto_ds_to_auto_pc_AWBURST),
        .m_axi_awcache(auto_ds_to_auto_pc_AWCACHE),
        .m_axi_awlen(auto_ds_to_auto_pc_AWLEN),
        .m_axi_awlock(auto_ds_to_auto_pc_AWLOCK),
        .m_axi_awprot(auto_ds_to_auto_pc_AWPROT),
        .m_axi_awqos(auto_ds_to_auto_pc_AWQOS),
        .m_axi_awready(auto_ds_to_auto_pc_AWREADY),
        .m_axi_awregion(auto_ds_to_auto_pc_AWREGION),
        .m_axi_awsize(auto_ds_to_auto_pc_AWSIZE),
        .m_axi_awvalid(auto_ds_to_auto_pc_AWVALID),
        .m_axi_bready(auto_ds_to_auto_pc_BREADY),
        .m_axi_bresp(auto_ds_to_auto_pc_BRESP),
        .m_axi_bvalid(auto_ds_to_auto_pc_BVALID),
        .m_axi_rdata(auto_ds_to_auto_pc_RDATA),
        .m_axi_rlast(auto_ds_to_auto_pc_RLAST),
        .m_axi_rready(auto_ds_to_auto_pc_RREADY),
        .m_axi_rresp(auto_ds_to_auto_pc_RRESP),
        .m_axi_rvalid(auto_ds_to_auto_pc_RVALID),
        .m_axi_wdata(auto_ds_to_auto_pc_WDATA),
        .m_axi_wlast(auto_ds_to_auto_pc_WLAST),
        .m_axi_wready(auto_ds_to_auto_pc_WREADY),
        .m_axi_wstrb(auto_ds_to_auto_pc_WSTRB),
        .m_axi_wvalid(auto_ds_to_auto_pc_WVALID),
        .s_axi_aclk(S_ACLK_1),
        .s_axi_araddr(s01_couplers_to_auto_ds_ARADDR),
        .s_axi_arburst(s01_couplers_to_auto_ds_ARBURST),
        .s_axi_arcache(s01_couplers_to_auto_ds_ARCACHE),
        .s_axi_aresetn(S_ARESETN_1),
        .s_axi_arid(s01_couplers_to_auto_ds_ARID),
        .s_axi_arlen(s01_couplers_to_auto_ds_ARLEN),
        .s_axi_arlock(s01_couplers_to_auto_ds_ARLOCK),
        .s_axi_arprot(s01_couplers_to_auto_ds_ARPROT),
        .s_axi_arqos(s01_couplers_to_auto_ds_ARQOS),
        .s_axi_arready(s01_couplers_to_auto_ds_ARREADY),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize(s01_couplers_to_auto_ds_ARSIZE),
        .s_axi_arvalid(s01_couplers_to_auto_ds_ARVALID),
        .s_axi_awaddr(s01_couplers_to_auto_ds_AWADDR),
        .s_axi_awburst(s01_couplers_to_auto_ds_AWBURST),
        .s_axi_awcache(s01_couplers_to_auto_ds_AWCACHE),
        .s_axi_awid(s01_couplers_to_auto_ds_AWID),
        .s_axi_awlen(s01_couplers_to_auto_ds_AWLEN),
        .s_axi_awlock(s01_couplers_to_auto_ds_AWLOCK),
        .s_axi_awprot(s01_couplers_to_auto_ds_AWPROT),
        .s_axi_awqos(s01_couplers_to_auto_ds_AWQOS),
        .s_axi_awready(s01_couplers_to_auto_ds_AWREADY),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize(s01_couplers_to_auto_ds_AWSIZE),
        .s_axi_awvalid(s01_couplers_to_auto_ds_AWVALID),
        .s_axi_bid(s01_couplers_to_auto_ds_BID),
        .s_axi_bready(s01_couplers_to_auto_ds_BREADY),
        .s_axi_bresp(s01_couplers_to_auto_ds_BRESP),
        .s_axi_bvalid(s01_couplers_to_auto_ds_BVALID),
        .s_axi_rdata(s01_couplers_to_auto_ds_RDATA),
        .s_axi_rid(s01_couplers_to_auto_ds_RID),
        .s_axi_rlast(s01_couplers_to_auto_ds_RLAST),
        .s_axi_rready(s01_couplers_to_auto_ds_RREADY),
        .s_axi_rresp(s01_couplers_to_auto_ds_RRESP),
        .s_axi_rvalid(s01_couplers_to_auto_ds_RVALID),
        .s_axi_wdata(s01_couplers_to_auto_ds_WDATA),
        .s_axi_wlast(s01_couplers_to_auto_ds_WLAST),
        .s_axi_wready(s01_couplers_to_auto_ds_WREADY),
        .s_axi_wstrb(s01_couplers_to_auto_ds_WSTRB),
        .s_axi_wvalid(s01_couplers_to_auto_ds_WVALID));
  design_1_auto_pc_1 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_araddr(auto_pc_to_s01_couplers_ARADDR),
        .m_axi_arprot(auto_pc_to_s01_couplers_ARPROT),
        .m_axi_arready(auto_pc_to_s01_couplers_ARREADY),
        .m_axi_arvalid(auto_pc_to_s01_couplers_ARVALID),
        .m_axi_awaddr(auto_pc_to_s01_couplers_AWADDR),
        .m_axi_awprot(auto_pc_to_s01_couplers_AWPROT),
        .m_axi_awready(auto_pc_to_s01_couplers_AWREADY),
        .m_axi_awvalid(auto_pc_to_s01_couplers_AWVALID),
        .m_axi_bready(auto_pc_to_s01_couplers_BREADY),
        .m_axi_bresp(auto_pc_to_s01_couplers_BRESP),
        .m_axi_bvalid(auto_pc_to_s01_couplers_BVALID),
        .m_axi_rdata(auto_pc_to_s01_couplers_RDATA),
        .m_axi_rready(auto_pc_to_s01_couplers_RREADY),
        .m_axi_rresp(auto_pc_to_s01_couplers_RRESP),
        .m_axi_rvalid(auto_pc_to_s01_couplers_RVALID),
        .m_axi_wdata(auto_pc_to_s01_couplers_WDATA),
        .m_axi_wready(auto_pc_to_s01_couplers_WREADY),
        .m_axi_wstrb(auto_pc_to_s01_couplers_WSTRB),
        .m_axi_wvalid(auto_pc_to_s01_couplers_WVALID),
        .s_axi_araddr(auto_ds_to_auto_pc_ARADDR),
        .s_axi_arburst(auto_ds_to_auto_pc_ARBURST),
        .s_axi_arcache(auto_ds_to_auto_pc_ARCACHE),
        .s_axi_arlen(auto_ds_to_auto_pc_ARLEN),
        .s_axi_arlock(auto_ds_to_auto_pc_ARLOCK),
        .s_axi_arprot(auto_ds_to_auto_pc_ARPROT),
        .s_axi_arqos(auto_ds_to_auto_pc_ARQOS),
        .s_axi_arready(auto_ds_to_auto_pc_ARREADY),
        .s_axi_arregion(auto_ds_to_auto_pc_ARREGION),
        .s_axi_arsize(auto_ds_to_auto_pc_ARSIZE),
        .s_axi_arvalid(auto_ds_to_auto_pc_ARVALID),
        .s_axi_awaddr(auto_ds_to_auto_pc_AWADDR),
        .s_axi_awburst(auto_ds_to_auto_pc_AWBURST),
        .s_axi_awcache(auto_ds_to_auto_pc_AWCACHE),
        .s_axi_awlen(auto_ds_to_auto_pc_AWLEN),
        .s_axi_awlock(auto_ds_to_auto_pc_AWLOCK),
        .s_axi_awprot(auto_ds_to_auto_pc_AWPROT),
        .s_axi_awqos(auto_ds_to_auto_pc_AWQOS),
        .s_axi_awready(auto_ds_to_auto_pc_AWREADY),
        .s_axi_awregion(auto_ds_to_auto_pc_AWREGION),
        .s_axi_awsize(auto_ds_to_auto_pc_AWSIZE),
        .s_axi_awvalid(auto_ds_to_auto_pc_AWVALID),
        .s_axi_bready(auto_ds_to_auto_pc_BREADY),
        .s_axi_bresp(auto_ds_to_auto_pc_BRESP),
        .s_axi_bvalid(auto_ds_to_auto_pc_BVALID),
        .s_axi_rdata(auto_ds_to_auto_pc_RDATA),
        .s_axi_rlast(auto_ds_to_auto_pc_RLAST),
        .s_axi_rready(auto_ds_to_auto_pc_RREADY),
        .s_axi_rresp(auto_ds_to_auto_pc_RRESP),
        .s_axi_rvalid(auto_ds_to_auto_pc_RVALID),
        .s_axi_wdata(auto_ds_to_auto_pc_WDATA),
        .s_axi_wlast(auto_ds_to_auto_pc_WLAST),
        .s_axi_wready(auto_ds_to_auto_pc_WREADY),
        .s_axi_wstrb(auto_ds_to_auto_pc_WSTRB),
        .s_axi_wvalid(auto_ds_to_auto_pc_WVALID));
endmodule
