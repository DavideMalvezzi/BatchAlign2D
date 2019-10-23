// (c) Copyright 1995-2019 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:batch_align2D:1.0
// IP Revision: 1910230913

(* X_CORE_INFO = "batch_align2D,Vivado 2018.3" *)
(* CHECK_LICENSE_TYPE = "design_1_batch_align2D_0_0,batch_align2D,{}" *)
(* CORE_GENERATION_INFO = "design_1_batch_align2D_0_0,batch_align2D,{x_ipProduct=Vivado 2018.3,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=batch_align2D,x_ipVersion=1.0,x_ipCoreRevision=1910230913,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_CTRL_ADDR_WIDTH=6,C_S_AXI_CTRL_DATA_WIDTH=32,C_S_AXI_PARAM_ADDR_WIDTH=7,C_S_AXI_PARAM_DATA_WIDTH=32,C_M_AXI_PYR_ID_WIDTH=1,C_M_AXI_PYR_ADDR_WIDTH=64,C_M_AXI_PYR_DATA_WIDTH=32,C_M_AXI_PYR_AWUSER_WIDTH=1,C_M_AXI_PYR_ARUSER_WIDTH=1,C_M_AXI_PYR_WUSER_WIDTH=1,C_M_AXI_PYR_RUSER_WID\
TH=1,C_M_AXI_PYR_BUSER_WIDTH=1,C_M_AXI_PYR_USER_VALUE=0x00000000,C_M_AXI_PYR_PROT_VALUE=000,C_M_AXI_PYR_CACHE_VALUE=0011,C_M_AXI_PATCHES_ID_WIDTH=1,C_M_AXI_PATCHES_ADDR_WIDTH=64,C_M_AXI_PATCHES_DATA_WIDTH=32,C_M_AXI_PATCHES_AWUSER_WIDTH=1,C_M_AXI_PATCHES_ARUSER_WIDTH=1,C_M_AXI_PATCHES_WUSER_WIDTH=1,C_M_AXI_PATCHES_RUSER_WIDTH=1,C_M_AXI_PATCHES_BUSER_WIDTH=1,C_M_AXI_PATCHES_USER_VALUE=0x00000000,C_M_AXI_PATCHES_PROT_VALUE=000,C_M_AXI_PATCHES_CACHE_VALUE=0011,C_M_AXI_POS_R_ID_WIDTH=1,C_M_AXI_POS_R\
_ADDR_WIDTH=64,C_M_AXI_POS_R_DATA_WIDTH=32,C_M_AXI_POS_R_AWUSER_WIDTH=1,C_M_AXI_POS_R_ARUSER_WIDTH=1,C_M_AXI_POS_R_WUSER_WIDTH=1,C_M_AXI_POS_R_RUSER_WIDTH=1,C_M_AXI_POS_R_BUSER_WIDTH=1,C_M_AXI_POS_R_USER_VALUE=0x00000000,C_M_AXI_POS_R_PROT_VALUE=000,C_M_AXI_POS_R_CACHE_VALUE=0011,C_M_AXI_DEBUG_ID_WIDTH=1,C_M_AXI_DEBUG_ADDR_WIDTH=64,C_M_AXI_DEBUG_DATA_WIDTH=32,C_M_AXI_DEBUG_AWUSER_WIDTH=1,C_M_AXI_DEBUG_ARUSER_WIDTH=1,C_M_AXI_DEBUG_WUSER_WIDTH=1,C_M_AXI_DEBUG_RUSER_WIDTH=1,C_M_AXI_DEBUG_BUSER_WIDT\
H=1,C_M_AXI_DEBUG_USER_VALUE=0x00000000,C_M_AXI_DEBUG_PROT_VALUE=000,C_M_AXI_DEBUG_CACHE_VALUE=0011}" *)
(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module design_1_batch_align2D_0_0 (
  s_axi_ctrl_AWADDR,
  s_axi_ctrl_AWVALID,
  s_axi_ctrl_AWREADY,
  s_axi_ctrl_WDATA,
  s_axi_ctrl_WSTRB,
  s_axi_ctrl_WVALID,
  s_axi_ctrl_WREADY,
  s_axi_ctrl_BRESP,
  s_axi_ctrl_BVALID,
  s_axi_ctrl_BREADY,
  s_axi_ctrl_ARADDR,
  s_axi_ctrl_ARVALID,
  s_axi_ctrl_ARREADY,
  s_axi_ctrl_RDATA,
  s_axi_ctrl_RRESP,
  s_axi_ctrl_RVALID,
  s_axi_ctrl_RREADY,
  s_axi_param_AWADDR,
  s_axi_param_AWVALID,
  s_axi_param_AWREADY,
  s_axi_param_WDATA,
  s_axi_param_WSTRB,
  s_axi_param_WVALID,
  s_axi_param_WREADY,
  s_axi_param_BRESP,
  s_axi_param_BVALID,
  s_axi_param_BREADY,
  s_axi_param_ARADDR,
  s_axi_param_ARVALID,
  s_axi_param_ARREADY,
  s_axi_param_RDATA,
  s_axi_param_RRESP,
  s_axi_param_RVALID,
  s_axi_param_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  m_axi_pyr_AWADDR,
  m_axi_pyr_AWLEN,
  m_axi_pyr_AWSIZE,
  m_axi_pyr_AWBURST,
  m_axi_pyr_AWLOCK,
  m_axi_pyr_AWREGION,
  m_axi_pyr_AWCACHE,
  m_axi_pyr_AWPROT,
  m_axi_pyr_AWQOS,
  m_axi_pyr_AWVALID,
  m_axi_pyr_AWREADY,
  m_axi_pyr_WDATA,
  m_axi_pyr_WSTRB,
  m_axi_pyr_WLAST,
  m_axi_pyr_WVALID,
  m_axi_pyr_WREADY,
  m_axi_pyr_BRESP,
  m_axi_pyr_BVALID,
  m_axi_pyr_BREADY,
  m_axi_pyr_ARADDR,
  m_axi_pyr_ARLEN,
  m_axi_pyr_ARSIZE,
  m_axi_pyr_ARBURST,
  m_axi_pyr_ARLOCK,
  m_axi_pyr_ARREGION,
  m_axi_pyr_ARCACHE,
  m_axi_pyr_ARPROT,
  m_axi_pyr_ARQOS,
  m_axi_pyr_ARVALID,
  m_axi_pyr_ARREADY,
  m_axi_pyr_RDATA,
  m_axi_pyr_RRESP,
  m_axi_pyr_RLAST,
  m_axi_pyr_RVALID,
  m_axi_pyr_RREADY,
  m_axi_patches_AWADDR,
  m_axi_patches_AWLEN,
  m_axi_patches_AWSIZE,
  m_axi_patches_AWBURST,
  m_axi_patches_AWLOCK,
  m_axi_patches_AWREGION,
  m_axi_patches_AWCACHE,
  m_axi_patches_AWPROT,
  m_axi_patches_AWQOS,
  m_axi_patches_AWVALID,
  m_axi_patches_AWREADY,
  m_axi_patches_WDATA,
  m_axi_patches_WSTRB,
  m_axi_patches_WLAST,
  m_axi_patches_WVALID,
  m_axi_patches_WREADY,
  m_axi_patches_BRESP,
  m_axi_patches_BVALID,
  m_axi_patches_BREADY,
  m_axi_patches_ARADDR,
  m_axi_patches_ARLEN,
  m_axi_patches_ARSIZE,
  m_axi_patches_ARBURST,
  m_axi_patches_ARLOCK,
  m_axi_patches_ARREGION,
  m_axi_patches_ARCACHE,
  m_axi_patches_ARPROT,
  m_axi_patches_ARQOS,
  m_axi_patches_ARVALID,
  m_axi_patches_ARREADY,
  m_axi_patches_RDATA,
  m_axi_patches_RRESP,
  m_axi_patches_RLAST,
  m_axi_patches_RVALID,
  m_axi_patches_RREADY,
  m_axi_pos_r_AWADDR,
  m_axi_pos_r_AWLEN,
  m_axi_pos_r_AWSIZE,
  m_axi_pos_r_AWBURST,
  m_axi_pos_r_AWLOCK,
  m_axi_pos_r_AWREGION,
  m_axi_pos_r_AWCACHE,
  m_axi_pos_r_AWPROT,
  m_axi_pos_r_AWQOS,
  m_axi_pos_r_AWVALID,
  m_axi_pos_r_AWREADY,
  m_axi_pos_r_WDATA,
  m_axi_pos_r_WSTRB,
  m_axi_pos_r_WLAST,
  m_axi_pos_r_WVALID,
  m_axi_pos_r_WREADY,
  m_axi_pos_r_BRESP,
  m_axi_pos_r_BVALID,
  m_axi_pos_r_BREADY,
  m_axi_pos_r_ARADDR,
  m_axi_pos_r_ARLEN,
  m_axi_pos_r_ARSIZE,
  m_axi_pos_r_ARBURST,
  m_axi_pos_r_ARLOCK,
  m_axi_pos_r_ARREGION,
  m_axi_pos_r_ARCACHE,
  m_axi_pos_r_ARPROT,
  m_axi_pos_r_ARQOS,
  m_axi_pos_r_ARVALID,
  m_axi_pos_r_ARREADY,
  m_axi_pos_r_RDATA,
  m_axi_pos_r_RRESP,
  m_axi_pos_r_RLAST,
  m_axi_pos_r_RVALID,
  m_axi_pos_r_RREADY,
  m_axi_debug_AWADDR,
  m_axi_debug_AWLEN,
  m_axi_debug_AWSIZE,
  m_axi_debug_AWBURST,
  m_axi_debug_AWLOCK,
  m_axi_debug_AWREGION,
  m_axi_debug_AWCACHE,
  m_axi_debug_AWPROT,
  m_axi_debug_AWQOS,
  m_axi_debug_AWVALID,
  m_axi_debug_AWREADY,
  m_axi_debug_WDATA,
  m_axi_debug_WSTRB,
  m_axi_debug_WLAST,
  m_axi_debug_WVALID,
  m_axi_debug_WREADY,
  m_axi_debug_BRESP,
  m_axi_debug_BVALID,
  m_axi_debug_BREADY,
  m_axi_debug_ARADDR,
  m_axi_debug_ARLEN,
  m_axi_debug_ARSIZE,
  m_axi_debug_ARBURST,
  m_axi_debug_ARLOCK,
  m_axi_debug_ARREGION,
  m_axi_debug_ARCACHE,
  m_axi_debug_ARPROT,
  m_axi_debug_ARQOS,
  m_axi_debug_ARVALID,
  m_axi_debug_ARREADY,
  m_axi_debug_RDATA,
  m_axi_debug_RRESP,
  m_axi_debug_RLAST,
  m_axi_debug_RVALID,
  m_axi_debug_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR" *)
input wire [5 : 0] s_axi_ctrl_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWVALID" *)
input wire s_axi_ctrl_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWREADY" *)
output wire s_axi_ctrl_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WDATA" *)
input wire [31 : 0] s_axi_ctrl_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WSTRB" *)
input wire [3 : 0] s_axi_ctrl_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WVALID" *)
input wire s_axi_ctrl_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WREADY" *)
output wire s_axi_ctrl_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BRESP" *)
output wire [1 : 0] s_axi_ctrl_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BVALID" *)
output wire s_axi_ctrl_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BREADY" *)
input wire s_axi_ctrl_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARADDR" *)
input wire [5 : 0] s_axi_ctrl_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARVALID" *)
input wire s_axi_ctrl_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARREADY" *)
output wire s_axi_ctrl_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RDATA" *)
output wire [31 : 0] s_axi_ctrl_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RRESP" *)
output wire [1 : 0] s_axi_ctrl_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RVALID" *)
output wire s_axi_ctrl_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_ctrl, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_W\
IDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY" *)
input wire s_axi_ctrl_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param AWADDR" *)
input wire [6 : 0] s_axi_param_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param AWVALID" *)
input wire s_axi_param_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param AWREADY" *)
output wire s_axi_param_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param WDATA" *)
input wire [31 : 0] s_axi_param_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param WSTRB" *)
input wire [3 : 0] s_axi_param_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param WVALID" *)
input wire s_axi_param_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param WREADY" *)
output wire s_axi_param_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param BRESP" *)
output wire [1 : 0] s_axi_param_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param BVALID" *)
output wire s_axi_param_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param BREADY" *)
input wire s_axi_param_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param ARADDR" *)
input wire [6 : 0] s_axi_param_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param ARVALID" *)
input wire s_axi_param_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param ARREADY" *)
output wire s_axi_param_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param RDATA" *)
output wire [31 : 0] s_axi_param_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param RRESP" *)
output wire [1 : 0] s_axi_param_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param RVALID" *)
output wire s_axi_param_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_param, ADDR_WIDTH 7, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_\
WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param RREADY" *)
input wire s_axi_param_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_param:m_axi_pyr:m_axi_patches:m_axi_pos_r:m_axi_debug, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}}\
 value 0}}}}, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {INTERRUPT {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWADDR" *)
output wire [63 : 0] m_axi_pyr_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWLEN" *)
output wire [7 : 0] m_axi_pyr_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWSIZE" *)
output wire [2 : 0] m_axi_pyr_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWBURST" *)
output wire [1 : 0] m_axi_pyr_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWLOCK" *)
output wire [1 : 0] m_axi_pyr_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWREGION" *)
output wire [3 : 0] m_axi_pyr_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWCACHE" *)
output wire [3 : 0] m_axi_pyr_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWPROT" *)
output wire [2 : 0] m_axi_pyr_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWQOS" *)
output wire [3 : 0] m_axi_pyr_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWVALID" *)
output wire m_axi_pyr_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr AWREADY" *)
input wire m_axi_pyr_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr WDATA" *)
output wire [31 : 0] m_axi_pyr_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr WSTRB" *)
output wire [3 : 0] m_axi_pyr_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr WLAST" *)
output wire m_axi_pyr_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr WVALID" *)
output wire m_axi_pyr_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr WREADY" *)
input wire m_axi_pyr_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr BRESP" *)
input wire [1 : 0] m_axi_pyr_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr BVALID" *)
input wire m_axi_pyr_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr BREADY" *)
output wire m_axi_pyr_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARADDR" *)
output wire [63 : 0] m_axi_pyr_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARLEN" *)
output wire [7 : 0] m_axi_pyr_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARSIZE" *)
output wire [2 : 0] m_axi_pyr_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARBURST" *)
output wire [1 : 0] m_axi_pyr_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARLOCK" *)
output wire [1 : 0] m_axi_pyr_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARREGION" *)
output wire [3 : 0] m_axi_pyr_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARCACHE" *)
output wire [3 : 0] m_axi_pyr_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARPROT" *)
output wire [2 : 0] m_axi_pyr_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARQOS" *)
output wire [3 : 0] m_axi_pyr_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARVALID" *)
output wire m_axi_pyr_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr ARREADY" *)
input wire m_axi_pyr_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr RDATA" *)
input wire [31 : 0] m_axi_pyr_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr RRESP" *)
input wire [1 : 0] m_axi_pyr_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr RLAST" *)
input wire m_axi_pyr_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr RVALID" *)
input wire m_axi_pyr_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_pyr, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN des\
ign_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pyr RREADY" *)
output wire m_axi_pyr_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWADDR" *)
output wire [63 : 0] m_axi_patches_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWLEN" *)
output wire [7 : 0] m_axi_patches_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWSIZE" *)
output wire [2 : 0] m_axi_patches_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWBURST" *)
output wire [1 : 0] m_axi_patches_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWLOCK" *)
output wire [1 : 0] m_axi_patches_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWREGION" *)
output wire [3 : 0] m_axi_patches_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWCACHE" *)
output wire [3 : 0] m_axi_patches_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWPROT" *)
output wire [2 : 0] m_axi_patches_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWQOS" *)
output wire [3 : 0] m_axi_patches_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWVALID" *)
output wire m_axi_patches_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches AWREADY" *)
input wire m_axi_patches_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches WDATA" *)
output wire [31 : 0] m_axi_patches_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches WSTRB" *)
output wire [3 : 0] m_axi_patches_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches WLAST" *)
output wire m_axi_patches_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches WVALID" *)
output wire m_axi_patches_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches WREADY" *)
input wire m_axi_patches_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches BRESP" *)
input wire [1 : 0] m_axi_patches_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches BVALID" *)
input wire m_axi_patches_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches BREADY" *)
output wire m_axi_patches_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARADDR" *)
output wire [63 : 0] m_axi_patches_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARLEN" *)
output wire [7 : 0] m_axi_patches_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARSIZE" *)
output wire [2 : 0] m_axi_patches_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARBURST" *)
output wire [1 : 0] m_axi_patches_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARLOCK" *)
output wire [1 : 0] m_axi_patches_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARREGION" *)
output wire [3 : 0] m_axi_patches_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARCACHE" *)
output wire [3 : 0] m_axi_patches_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARPROT" *)
output wire [2 : 0] m_axi_patches_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARQOS" *)
output wire [3 : 0] m_axi_patches_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARVALID" *)
output wire m_axi_patches_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches ARREADY" *)
input wire m_axi_patches_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches RDATA" *)
input wire [31 : 0] m_axi_patches_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches RRESP" *)
input wire [1 : 0] m_axi_patches_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches RLAST" *)
input wire m_axi_patches_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches RVALID" *)
input wire m_axi_patches_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_patches, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN\
 design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_patches RREADY" *)
output wire m_axi_patches_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWADDR" *)
output wire [63 : 0] m_axi_pos_r_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWLEN" *)
output wire [7 : 0] m_axi_pos_r_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWSIZE" *)
output wire [2 : 0] m_axi_pos_r_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWBURST" *)
output wire [1 : 0] m_axi_pos_r_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWLOCK" *)
output wire [1 : 0] m_axi_pos_r_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWREGION" *)
output wire [3 : 0] m_axi_pos_r_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWCACHE" *)
output wire [3 : 0] m_axi_pos_r_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWPROT" *)
output wire [2 : 0] m_axi_pos_r_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWQOS" *)
output wire [3 : 0] m_axi_pos_r_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWVALID" *)
output wire m_axi_pos_r_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWREADY" *)
input wire m_axi_pos_r_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r WDATA" *)
output wire [31 : 0] m_axi_pos_r_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r WSTRB" *)
output wire [3 : 0] m_axi_pos_r_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r WLAST" *)
output wire m_axi_pos_r_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r WVALID" *)
output wire m_axi_pos_r_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r WREADY" *)
input wire m_axi_pos_r_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r BRESP" *)
input wire [1 : 0] m_axi_pos_r_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r BVALID" *)
input wire m_axi_pos_r_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r BREADY" *)
output wire m_axi_pos_r_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARADDR" *)
output wire [63 : 0] m_axi_pos_r_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARLEN" *)
output wire [7 : 0] m_axi_pos_r_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARSIZE" *)
output wire [2 : 0] m_axi_pos_r_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARBURST" *)
output wire [1 : 0] m_axi_pos_r_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARLOCK" *)
output wire [1 : 0] m_axi_pos_r_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARREGION" *)
output wire [3 : 0] m_axi_pos_r_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARCACHE" *)
output wire [3 : 0] m_axi_pos_r_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARPROT" *)
output wire [2 : 0] m_axi_pos_r_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARQOS" *)
output wire [3 : 0] m_axi_pos_r_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARVALID" *)
output wire m_axi_pos_r_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARREADY" *)
input wire m_axi_pos_r_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r RDATA" *)
input wire [31 : 0] m_axi_pos_r_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r RRESP" *)
input wire [1 : 0] m_axi_pos_r_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r RLAST" *)
input wire m_axi_pos_r_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r RVALID" *)
input wire m_axi_pos_r_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_pos_r, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN \
design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_pos_r RREADY" *)
output wire m_axi_pos_r_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWADDR" *)
output wire [63 : 0] m_axi_debug_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWLEN" *)
output wire [7 : 0] m_axi_debug_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWSIZE" *)
output wire [2 : 0] m_axi_debug_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWBURST" *)
output wire [1 : 0] m_axi_debug_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWLOCK" *)
output wire [1 : 0] m_axi_debug_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWREGION" *)
output wire [3 : 0] m_axi_debug_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWCACHE" *)
output wire [3 : 0] m_axi_debug_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWPROT" *)
output wire [2 : 0] m_axi_debug_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWQOS" *)
output wire [3 : 0] m_axi_debug_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWVALID" *)
output wire m_axi_debug_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug AWREADY" *)
input wire m_axi_debug_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug WDATA" *)
output wire [31 : 0] m_axi_debug_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug WSTRB" *)
output wire [3 : 0] m_axi_debug_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug WLAST" *)
output wire m_axi_debug_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug WVALID" *)
output wire m_axi_debug_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug WREADY" *)
input wire m_axi_debug_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug BRESP" *)
input wire [1 : 0] m_axi_debug_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug BVALID" *)
input wire m_axi_debug_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug BREADY" *)
output wire m_axi_debug_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARADDR" *)
output wire [63 : 0] m_axi_debug_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARLEN" *)
output wire [7 : 0] m_axi_debug_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARSIZE" *)
output wire [2 : 0] m_axi_debug_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARBURST" *)
output wire [1 : 0] m_axi_debug_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARLOCK" *)
output wire [1 : 0] m_axi_debug_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARREGION" *)
output wire [3 : 0] m_axi_debug_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARCACHE" *)
output wire [3 : 0] m_axi_debug_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARPROT" *)
output wire [2 : 0] m_axi_debug_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARQOS" *)
output wire [3 : 0] m_axi_debug_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARVALID" *)
output wire m_axi_debug_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug ARREADY" *)
input wire m_axi_debug_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug RDATA" *)
input wire [31 : 0] m_axi_debug_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug RRESP" *)
input wire [1 : 0] m_axi_debug_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug RLAST" *)
input wire m_axi_debug_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug RVALID" *)
input wire m_axi_debug_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_debug, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN \
design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_debug RREADY" *)
output wire m_axi_debug_RREADY;

  batch_align2D #(
    .C_S_AXI_CTRL_ADDR_WIDTH(6),
    .C_S_AXI_CTRL_DATA_WIDTH(32),
    .C_S_AXI_PARAM_ADDR_WIDTH(7),
    .C_S_AXI_PARAM_DATA_WIDTH(32),
    .C_M_AXI_PYR_ID_WIDTH(1),
    .C_M_AXI_PYR_ADDR_WIDTH(64),
    .C_M_AXI_PYR_DATA_WIDTH(32),
    .C_M_AXI_PYR_AWUSER_WIDTH(1),
    .C_M_AXI_PYR_ARUSER_WIDTH(1),
    .C_M_AXI_PYR_WUSER_WIDTH(1),
    .C_M_AXI_PYR_RUSER_WIDTH(1),
    .C_M_AXI_PYR_BUSER_WIDTH(1),
    .C_M_AXI_PYR_USER_VALUE('H00000000),
    .C_M_AXI_PYR_PROT_VALUE('B000),
    .C_M_AXI_PYR_CACHE_VALUE('B0011),
    .C_M_AXI_PATCHES_ID_WIDTH(1),
    .C_M_AXI_PATCHES_ADDR_WIDTH(64),
    .C_M_AXI_PATCHES_DATA_WIDTH(32),
    .C_M_AXI_PATCHES_AWUSER_WIDTH(1),
    .C_M_AXI_PATCHES_ARUSER_WIDTH(1),
    .C_M_AXI_PATCHES_WUSER_WIDTH(1),
    .C_M_AXI_PATCHES_RUSER_WIDTH(1),
    .C_M_AXI_PATCHES_BUSER_WIDTH(1),
    .C_M_AXI_PATCHES_USER_VALUE('H00000000),
    .C_M_AXI_PATCHES_PROT_VALUE('B000),
    .C_M_AXI_PATCHES_CACHE_VALUE('B0011),
    .C_M_AXI_POS_R_ID_WIDTH(1),
    .C_M_AXI_POS_R_ADDR_WIDTH(64),
    .C_M_AXI_POS_R_DATA_WIDTH(32),
    .C_M_AXI_POS_R_AWUSER_WIDTH(1),
    .C_M_AXI_POS_R_ARUSER_WIDTH(1),
    .C_M_AXI_POS_R_WUSER_WIDTH(1),
    .C_M_AXI_POS_R_RUSER_WIDTH(1),
    .C_M_AXI_POS_R_BUSER_WIDTH(1),
    .C_M_AXI_POS_R_USER_VALUE('H00000000),
    .C_M_AXI_POS_R_PROT_VALUE('B000),
    .C_M_AXI_POS_R_CACHE_VALUE('B0011),
    .C_M_AXI_DEBUG_ID_WIDTH(1),
    .C_M_AXI_DEBUG_ADDR_WIDTH(64),
    .C_M_AXI_DEBUG_DATA_WIDTH(32),
    .C_M_AXI_DEBUG_AWUSER_WIDTH(1),
    .C_M_AXI_DEBUG_ARUSER_WIDTH(1),
    .C_M_AXI_DEBUG_WUSER_WIDTH(1),
    .C_M_AXI_DEBUG_RUSER_WIDTH(1),
    .C_M_AXI_DEBUG_BUSER_WIDTH(1),
    .C_M_AXI_DEBUG_USER_VALUE('H00000000),
    .C_M_AXI_DEBUG_PROT_VALUE('B000),
    .C_M_AXI_DEBUG_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_ctrl_AWADDR(s_axi_ctrl_AWADDR),
    .s_axi_ctrl_AWVALID(s_axi_ctrl_AWVALID),
    .s_axi_ctrl_AWREADY(s_axi_ctrl_AWREADY),
    .s_axi_ctrl_WDATA(s_axi_ctrl_WDATA),
    .s_axi_ctrl_WSTRB(s_axi_ctrl_WSTRB),
    .s_axi_ctrl_WVALID(s_axi_ctrl_WVALID),
    .s_axi_ctrl_WREADY(s_axi_ctrl_WREADY),
    .s_axi_ctrl_BRESP(s_axi_ctrl_BRESP),
    .s_axi_ctrl_BVALID(s_axi_ctrl_BVALID),
    .s_axi_ctrl_BREADY(s_axi_ctrl_BREADY),
    .s_axi_ctrl_ARADDR(s_axi_ctrl_ARADDR),
    .s_axi_ctrl_ARVALID(s_axi_ctrl_ARVALID),
    .s_axi_ctrl_ARREADY(s_axi_ctrl_ARREADY),
    .s_axi_ctrl_RDATA(s_axi_ctrl_RDATA),
    .s_axi_ctrl_RRESP(s_axi_ctrl_RRESP),
    .s_axi_ctrl_RVALID(s_axi_ctrl_RVALID),
    .s_axi_ctrl_RREADY(s_axi_ctrl_RREADY),
    .s_axi_param_AWADDR(s_axi_param_AWADDR),
    .s_axi_param_AWVALID(s_axi_param_AWVALID),
    .s_axi_param_AWREADY(s_axi_param_AWREADY),
    .s_axi_param_WDATA(s_axi_param_WDATA),
    .s_axi_param_WSTRB(s_axi_param_WSTRB),
    .s_axi_param_WVALID(s_axi_param_WVALID),
    .s_axi_param_WREADY(s_axi_param_WREADY),
    .s_axi_param_BRESP(s_axi_param_BRESP),
    .s_axi_param_BVALID(s_axi_param_BVALID),
    .s_axi_param_BREADY(s_axi_param_BREADY),
    .s_axi_param_ARADDR(s_axi_param_ARADDR),
    .s_axi_param_ARVALID(s_axi_param_ARVALID),
    .s_axi_param_ARREADY(s_axi_param_ARREADY),
    .s_axi_param_RDATA(s_axi_param_RDATA),
    .s_axi_param_RRESP(s_axi_param_RRESP),
    .s_axi_param_RVALID(s_axi_param_RVALID),
    .s_axi_param_RREADY(s_axi_param_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_pyr_AWID(),
    .m_axi_pyr_AWADDR(m_axi_pyr_AWADDR),
    .m_axi_pyr_AWLEN(m_axi_pyr_AWLEN),
    .m_axi_pyr_AWSIZE(m_axi_pyr_AWSIZE),
    .m_axi_pyr_AWBURST(m_axi_pyr_AWBURST),
    .m_axi_pyr_AWLOCK(m_axi_pyr_AWLOCK),
    .m_axi_pyr_AWREGION(m_axi_pyr_AWREGION),
    .m_axi_pyr_AWCACHE(m_axi_pyr_AWCACHE),
    .m_axi_pyr_AWPROT(m_axi_pyr_AWPROT),
    .m_axi_pyr_AWQOS(m_axi_pyr_AWQOS),
    .m_axi_pyr_AWUSER(),
    .m_axi_pyr_AWVALID(m_axi_pyr_AWVALID),
    .m_axi_pyr_AWREADY(m_axi_pyr_AWREADY),
    .m_axi_pyr_WID(),
    .m_axi_pyr_WDATA(m_axi_pyr_WDATA),
    .m_axi_pyr_WSTRB(m_axi_pyr_WSTRB),
    .m_axi_pyr_WLAST(m_axi_pyr_WLAST),
    .m_axi_pyr_WUSER(),
    .m_axi_pyr_WVALID(m_axi_pyr_WVALID),
    .m_axi_pyr_WREADY(m_axi_pyr_WREADY),
    .m_axi_pyr_BID(1'B0),
    .m_axi_pyr_BRESP(m_axi_pyr_BRESP),
    .m_axi_pyr_BUSER(1'B0),
    .m_axi_pyr_BVALID(m_axi_pyr_BVALID),
    .m_axi_pyr_BREADY(m_axi_pyr_BREADY),
    .m_axi_pyr_ARID(),
    .m_axi_pyr_ARADDR(m_axi_pyr_ARADDR),
    .m_axi_pyr_ARLEN(m_axi_pyr_ARLEN),
    .m_axi_pyr_ARSIZE(m_axi_pyr_ARSIZE),
    .m_axi_pyr_ARBURST(m_axi_pyr_ARBURST),
    .m_axi_pyr_ARLOCK(m_axi_pyr_ARLOCK),
    .m_axi_pyr_ARREGION(m_axi_pyr_ARREGION),
    .m_axi_pyr_ARCACHE(m_axi_pyr_ARCACHE),
    .m_axi_pyr_ARPROT(m_axi_pyr_ARPROT),
    .m_axi_pyr_ARQOS(m_axi_pyr_ARQOS),
    .m_axi_pyr_ARUSER(),
    .m_axi_pyr_ARVALID(m_axi_pyr_ARVALID),
    .m_axi_pyr_ARREADY(m_axi_pyr_ARREADY),
    .m_axi_pyr_RID(1'B0),
    .m_axi_pyr_RDATA(m_axi_pyr_RDATA),
    .m_axi_pyr_RRESP(m_axi_pyr_RRESP),
    .m_axi_pyr_RLAST(m_axi_pyr_RLAST),
    .m_axi_pyr_RUSER(1'B0),
    .m_axi_pyr_RVALID(m_axi_pyr_RVALID),
    .m_axi_pyr_RREADY(m_axi_pyr_RREADY),
    .m_axi_patches_AWID(),
    .m_axi_patches_AWADDR(m_axi_patches_AWADDR),
    .m_axi_patches_AWLEN(m_axi_patches_AWLEN),
    .m_axi_patches_AWSIZE(m_axi_patches_AWSIZE),
    .m_axi_patches_AWBURST(m_axi_patches_AWBURST),
    .m_axi_patches_AWLOCK(m_axi_patches_AWLOCK),
    .m_axi_patches_AWREGION(m_axi_patches_AWREGION),
    .m_axi_patches_AWCACHE(m_axi_patches_AWCACHE),
    .m_axi_patches_AWPROT(m_axi_patches_AWPROT),
    .m_axi_patches_AWQOS(m_axi_patches_AWQOS),
    .m_axi_patches_AWUSER(),
    .m_axi_patches_AWVALID(m_axi_patches_AWVALID),
    .m_axi_patches_AWREADY(m_axi_patches_AWREADY),
    .m_axi_patches_WID(),
    .m_axi_patches_WDATA(m_axi_patches_WDATA),
    .m_axi_patches_WSTRB(m_axi_patches_WSTRB),
    .m_axi_patches_WLAST(m_axi_patches_WLAST),
    .m_axi_patches_WUSER(),
    .m_axi_patches_WVALID(m_axi_patches_WVALID),
    .m_axi_patches_WREADY(m_axi_patches_WREADY),
    .m_axi_patches_BID(1'B0),
    .m_axi_patches_BRESP(m_axi_patches_BRESP),
    .m_axi_patches_BUSER(1'B0),
    .m_axi_patches_BVALID(m_axi_patches_BVALID),
    .m_axi_patches_BREADY(m_axi_patches_BREADY),
    .m_axi_patches_ARID(),
    .m_axi_patches_ARADDR(m_axi_patches_ARADDR),
    .m_axi_patches_ARLEN(m_axi_patches_ARLEN),
    .m_axi_patches_ARSIZE(m_axi_patches_ARSIZE),
    .m_axi_patches_ARBURST(m_axi_patches_ARBURST),
    .m_axi_patches_ARLOCK(m_axi_patches_ARLOCK),
    .m_axi_patches_ARREGION(m_axi_patches_ARREGION),
    .m_axi_patches_ARCACHE(m_axi_patches_ARCACHE),
    .m_axi_patches_ARPROT(m_axi_patches_ARPROT),
    .m_axi_patches_ARQOS(m_axi_patches_ARQOS),
    .m_axi_patches_ARUSER(),
    .m_axi_patches_ARVALID(m_axi_patches_ARVALID),
    .m_axi_patches_ARREADY(m_axi_patches_ARREADY),
    .m_axi_patches_RID(1'B0),
    .m_axi_patches_RDATA(m_axi_patches_RDATA),
    .m_axi_patches_RRESP(m_axi_patches_RRESP),
    .m_axi_patches_RLAST(m_axi_patches_RLAST),
    .m_axi_patches_RUSER(1'B0),
    .m_axi_patches_RVALID(m_axi_patches_RVALID),
    .m_axi_patches_RREADY(m_axi_patches_RREADY),
    .m_axi_pos_r_AWID(),
    .m_axi_pos_r_AWADDR(m_axi_pos_r_AWADDR),
    .m_axi_pos_r_AWLEN(m_axi_pos_r_AWLEN),
    .m_axi_pos_r_AWSIZE(m_axi_pos_r_AWSIZE),
    .m_axi_pos_r_AWBURST(m_axi_pos_r_AWBURST),
    .m_axi_pos_r_AWLOCK(m_axi_pos_r_AWLOCK),
    .m_axi_pos_r_AWREGION(m_axi_pos_r_AWREGION),
    .m_axi_pos_r_AWCACHE(m_axi_pos_r_AWCACHE),
    .m_axi_pos_r_AWPROT(m_axi_pos_r_AWPROT),
    .m_axi_pos_r_AWQOS(m_axi_pos_r_AWQOS),
    .m_axi_pos_r_AWUSER(),
    .m_axi_pos_r_AWVALID(m_axi_pos_r_AWVALID),
    .m_axi_pos_r_AWREADY(m_axi_pos_r_AWREADY),
    .m_axi_pos_r_WID(),
    .m_axi_pos_r_WDATA(m_axi_pos_r_WDATA),
    .m_axi_pos_r_WSTRB(m_axi_pos_r_WSTRB),
    .m_axi_pos_r_WLAST(m_axi_pos_r_WLAST),
    .m_axi_pos_r_WUSER(),
    .m_axi_pos_r_WVALID(m_axi_pos_r_WVALID),
    .m_axi_pos_r_WREADY(m_axi_pos_r_WREADY),
    .m_axi_pos_r_BID(1'B0),
    .m_axi_pos_r_BRESP(m_axi_pos_r_BRESP),
    .m_axi_pos_r_BUSER(1'B0),
    .m_axi_pos_r_BVALID(m_axi_pos_r_BVALID),
    .m_axi_pos_r_BREADY(m_axi_pos_r_BREADY),
    .m_axi_pos_r_ARID(),
    .m_axi_pos_r_ARADDR(m_axi_pos_r_ARADDR),
    .m_axi_pos_r_ARLEN(m_axi_pos_r_ARLEN),
    .m_axi_pos_r_ARSIZE(m_axi_pos_r_ARSIZE),
    .m_axi_pos_r_ARBURST(m_axi_pos_r_ARBURST),
    .m_axi_pos_r_ARLOCK(m_axi_pos_r_ARLOCK),
    .m_axi_pos_r_ARREGION(m_axi_pos_r_ARREGION),
    .m_axi_pos_r_ARCACHE(m_axi_pos_r_ARCACHE),
    .m_axi_pos_r_ARPROT(m_axi_pos_r_ARPROT),
    .m_axi_pos_r_ARQOS(m_axi_pos_r_ARQOS),
    .m_axi_pos_r_ARUSER(),
    .m_axi_pos_r_ARVALID(m_axi_pos_r_ARVALID),
    .m_axi_pos_r_ARREADY(m_axi_pos_r_ARREADY),
    .m_axi_pos_r_RID(1'B0),
    .m_axi_pos_r_RDATA(m_axi_pos_r_RDATA),
    .m_axi_pos_r_RRESP(m_axi_pos_r_RRESP),
    .m_axi_pos_r_RLAST(m_axi_pos_r_RLAST),
    .m_axi_pos_r_RUSER(1'B0),
    .m_axi_pos_r_RVALID(m_axi_pos_r_RVALID),
    .m_axi_pos_r_RREADY(m_axi_pos_r_RREADY),
    .m_axi_debug_AWID(),
    .m_axi_debug_AWADDR(m_axi_debug_AWADDR),
    .m_axi_debug_AWLEN(m_axi_debug_AWLEN),
    .m_axi_debug_AWSIZE(m_axi_debug_AWSIZE),
    .m_axi_debug_AWBURST(m_axi_debug_AWBURST),
    .m_axi_debug_AWLOCK(m_axi_debug_AWLOCK),
    .m_axi_debug_AWREGION(m_axi_debug_AWREGION),
    .m_axi_debug_AWCACHE(m_axi_debug_AWCACHE),
    .m_axi_debug_AWPROT(m_axi_debug_AWPROT),
    .m_axi_debug_AWQOS(m_axi_debug_AWQOS),
    .m_axi_debug_AWUSER(),
    .m_axi_debug_AWVALID(m_axi_debug_AWVALID),
    .m_axi_debug_AWREADY(m_axi_debug_AWREADY),
    .m_axi_debug_WID(),
    .m_axi_debug_WDATA(m_axi_debug_WDATA),
    .m_axi_debug_WSTRB(m_axi_debug_WSTRB),
    .m_axi_debug_WLAST(m_axi_debug_WLAST),
    .m_axi_debug_WUSER(),
    .m_axi_debug_WVALID(m_axi_debug_WVALID),
    .m_axi_debug_WREADY(m_axi_debug_WREADY),
    .m_axi_debug_BID(1'B0),
    .m_axi_debug_BRESP(m_axi_debug_BRESP),
    .m_axi_debug_BUSER(1'B0),
    .m_axi_debug_BVALID(m_axi_debug_BVALID),
    .m_axi_debug_BREADY(m_axi_debug_BREADY),
    .m_axi_debug_ARID(),
    .m_axi_debug_ARADDR(m_axi_debug_ARADDR),
    .m_axi_debug_ARLEN(m_axi_debug_ARLEN),
    .m_axi_debug_ARSIZE(m_axi_debug_ARSIZE),
    .m_axi_debug_ARBURST(m_axi_debug_ARBURST),
    .m_axi_debug_ARLOCK(m_axi_debug_ARLOCK),
    .m_axi_debug_ARREGION(m_axi_debug_ARREGION),
    .m_axi_debug_ARCACHE(m_axi_debug_ARCACHE),
    .m_axi_debug_ARPROT(m_axi_debug_ARPROT),
    .m_axi_debug_ARQOS(m_axi_debug_ARQOS),
    .m_axi_debug_ARUSER(),
    .m_axi_debug_ARVALID(m_axi_debug_ARVALID),
    .m_axi_debug_ARREADY(m_axi_debug_ARREADY),
    .m_axi_debug_RID(1'B0),
    .m_axi_debug_RDATA(m_axi_debug_RDATA),
    .m_axi_debug_RRESP(m_axi_debug_RRESP),
    .m_axi_debug_RLAST(m_axi_debug_RLAST),
    .m_axi_debug_RUSER(1'B0),
    .m_axi_debug_RVALID(m_axi_debug_RVALID),
    .m_axi_debug_RREADY(m_axi_debug_RREADY)
  );
endmodule
