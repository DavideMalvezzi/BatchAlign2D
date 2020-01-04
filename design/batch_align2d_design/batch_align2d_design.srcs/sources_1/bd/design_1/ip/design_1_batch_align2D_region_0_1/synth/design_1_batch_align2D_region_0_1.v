// (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
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


// IP VLNV: xilinx.com:hls:batch_align2D_region:1.0
// IP Revision: 2001042014

(* X_CORE_INFO = "batch_align2D_region,Vivado 2018.3" *)
(* CHECK_LICENSE_TYPE = "design_1_batch_align2D_region_0_1,batch_align2D_region,{}" *)
(* CORE_GENERATION_INFO = "design_1_batch_align2D_region_0_1,batch_align2D_region,{x_ipProduct=Vivado 2018.3,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=batch_align2D_region,x_ipVersion=1.0,x_ipCoreRevision=2001042014,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_CTRL_ADDR_WIDTH=6,C_S_AXI_CTRL_DATA_WIDTH=32,C_S_AXI_PARAM_ADDR_WIDTH=6,C_S_AXI_PARAM_DATA_WIDTH=32,C_M_AXI_MY_REGION_DATA_ID_WIDTH=1,C_M_AXI_MY_REGION_DATA_ADDR_WIDTH=32,C_M_AXI_MY_REGION_DATA_DATA_WIDTH=32,C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH=1,C_M_AXI_M\
Y_REGION_DATA_ARUSER_WIDTH=1,C_M_AXI_MY_REGION_DATA_WUSER_WIDTH=1,C_M_AXI_MY_REGION_DATA_RUSER_WIDTH=1,C_M_AXI_MY_REGION_DATA_BUSER_WIDTH=1,C_M_AXI_MY_REGION_DATA_USER_VALUE=0x00000000,C_M_AXI_MY_REGION_DATA_PROT_VALUE=000,C_M_AXI_MY_REGION_DATA_CACHE_VALUE=0011,C_M_AXI_MY_REGION_FCOORD_ID_WIDTH=1,C_M_AXI_MY_REGION_FCOORD_ADDR_WIDTH=32,C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH=32,C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH=1,C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH=1,C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH=1,C_M_\
AXI_MY_REGION_FCOORD_RUSER_WIDTH=1,C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH=1,C_M_AXI_MY_REGION_FCOORD_USER_VALUE=0x00000000,C_M_AXI_MY_REGION_FCOORD_PROT_VALUE=000,C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE=0011,C_M_AXI_MY_PATCHES_ID_WIDTH=1,C_M_AXI_MY_PATCHES_ADDR_WIDTH=32,C_M_AXI_MY_PATCHES_DATA_WIDTH=32,C_M_AXI_MY_PATCHES_AWUSER_WIDTH=1,C_M_AXI_MY_PATCHES_ARUSER_WIDTH=1,C_M_AXI_MY_PATCHES_WUSER_WIDTH=1,C_M_AXI_MY_PATCHES_RUSER_WIDTH=1,C_M_AXI_MY_PATCHES_BUSER_WIDTH=1,C_M_AXI_MY_PATCHES_USER_VALUE=0x00\
000000,C_M_AXI_MY_PATCHES_PROT_VALUE=000,C_M_AXI_MY_PATCHES_CACHE_VALUE=0011,C_M_AXI_MY_POS_ID_WIDTH=1,C_M_AXI_MY_POS_ADDR_WIDTH=32,C_M_AXI_MY_POS_DATA_WIDTH=32,C_M_AXI_MY_POS_AWUSER_WIDTH=1,C_M_AXI_MY_POS_ARUSER_WIDTH=1,C_M_AXI_MY_POS_WUSER_WIDTH=1,C_M_AXI_MY_POS_RUSER_WIDTH=1,C_M_AXI_MY_POS_BUSER_WIDTH=1,C_M_AXI_MY_POS_USER_VALUE=0x00000000,C_M_AXI_MY_POS_PROT_VALUE=000,C_M_AXI_MY_POS_CACHE_VALUE=0011,C_M_AXI_MY_DEBUG_ID_WIDTH=1,C_M_AXI_MY_DEBUG_ADDR_WIDTH=32,C_M_AXI_MY_DEBUG_DATA_WIDTH=32,C_M\
_AXI_MY_DEBUG_AWUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARUSER_WIDTH=1,C_M_AXI_MY_DEBUG_WUSER_WIDTH=1,C_M_AXI_MY_DEBUG_RUSER_WIDTH=1,C_M_AXI_MY_DEBUG_BUSER_WIDTH=1,C_M_AXI_MY_DEBUG_USER_VALUE=0x00000000,C_M_AXI_MY_DEBUG_PROT_VALUE=000,C_M_AXI_MY_DEBUG_CACHE_VALUE=0011,C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH=1,C_M_AXI_MY_DEBUG_ARRAY_ADDR_WIDTH=32,C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH=32,C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARR\
AY_RUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH=1,C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE=0x00000000,C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE=000,C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE=0011}" *)
(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module design_1_batch_align2D_region_0_1 (
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
  m_axi_my_region_data_AWADDR,
  m_axi_my_region_data_AWLEN,
  m_axi_my_region_data_AWSIZE,
  m_axi_my_region_data_AWBURST,
  m_axi_my_region_data_AWLOCK,
  m_axi_my_region_data_AWREGION,
  m_axi_my_region_data_AWCACHE,
  m_axi_my_region_data_AWPROT,
  m_axi_my_region_data_AWQOS,
  m_axi_my_region_data_AWVALID,
  m_axi_my_region_data_AWREADY,
  m_axi_my_region_data_WDATA,
  m_axi_my_region_data_WSTRB,
  m_axi_my_region_data_WLAST,
  m_axi_my_region_data_WVALID,
  m_axi_my_region_data_WREADY,
  m_axi_my_region_data_BRESP,
  m_axi_my_region_data_BVALID,
  m_axi_my_region_data_BREADY,
  m_axi_my_region_data_ARADDR,
  m_axi_my_region_data_ARLEN,
  m_axi_my_region_data_ARSIZE,
  m_axi_my_region_data_ARBURST,
  m_axi_my_region_data_ARLOCK,
  m_axi_my_region_data_ARREGION,
  m_axi_my_region_data_ARCACHE,
  m_axi_my_region_data_ARPROT,
  m_axi_my_region_data_ARQOS,
  m_axi_my_region_data_ARVALID,
  m_axi_my_region_data_ARREADY,
  m_axi_my_region_data_RDATA,
  m_axi_my_region_data_RRESP,
  m_axi_my_region_data_RLAST,
  m_axi_my_region_data_RVALID,
  m_axi_my_region_data_RREADY,
  m_axi_my_region_fcoord_AWADDR,
  m_axi_my_region_fcoord_AWLEN,
  m_axi_my_region_fcoord_AWSIZE,
  m_axi_my_region_fcoord_AWBURST,
  m_axi_my_region_fcoord_AWLOCK,
  m_axi_my_region_fcoord_AWREGION,
  m_axi_my_region_fcoord_AWCACHE,
  m_axi_my_region_fcoord_AWPROT,
  m_axi_my_region_fcoord_AWQOS,
  m_axi_my_region_fcoord_AWVALID,
  m_axi_my_region_fcoord_AWREADY,
  m_axi_my_region_fcoord_WDATA,
  m_axi_my_region_fcoord_WSTRB,
  m_axi_my_region_fcoord_WLAST,
  m_axi_my_region_fcoord_WVALID,
  m_axi_my_region_fcoord_WREADY,
  m_axi_my_region_fcoord_BRESP,
  m_axi_my_region_fcoord_BVALID,
  m_axi_my_region_fcoord_BREADY,
  m_axi_my_region_fcoord_ARADDR,
  m_axi_my_region_fcoord_ARLEN,
  m_axi_my_region_fcoord_ARSIZE,
  m_axi_my_region_fcoord_ARBURST,
  m_axi_my_region_fcoord_ARLOCK,
  m_axi_my_region_fcoord_ARREGION,
  m_axi_my_region_fcoord_ARCACHE,
  m_axi_my_region_fcoord_ARPROT,
  m_axi_my_region_fcoord_ARQOS,
  m_axi_my_region_fcoord_ARVALID,
  m_axi_my_region_fcoord_ARREADY,
  m_axi_my_region_fcoord_RDATA,
  m_axi_my_region_fcoord_RRESP,
  m_axi_my_region_fcoord_RLAST,
  m_axi_my_region_fcoord_RVALID,
  m_axi_my_region_fcoord_RREADY,
  m_axi_my_patches_AWADDR,
  m_axi_my_patches_AWLEN,
  m_axi_my_patches_AWSIZE,
  m_axi_my_patches_AWBURST,
  m_axi_my_patches_AWLOCK,
  m_axi_my_patches_AWREGION,
  m_axi_my_patches_AWCACHE,
  m_axi_my_patches_AWPROT,
  m_axi_my_patches_AWQOS,
  m_axi_my_patches_AWVALID,
  m_axi_my_patches_AWREADY,
  m_axi_my_patches_WDATA,
  m_axi_my_patches_WSTRB,
  m_axi_my_patches_WLAST,
  m_axi_my_patches_WVALID,
  m_axi_my_patches_WREADY,
  m_axi_my_patches_BRESP,
  m_axi_my_patches_BVALID,
  m_axi_my_patches_BREADY,
  m_axi_my_patches_ARADDR,
  m_axi_my_patches_ARLEN,
  m_axi_my_patches_ARSIZE,
  m_axi_my_patches_ARBURST,
  m_axi_my_patches_ARLOCK,
  m_axi_my_patches_ARREGION,
  m_axi_my_patches_ARCACHE,
  m_axi_my_patches_ARPROT,
  m_axi_my_patches_ARQOS,
  m_axi_my_patches_ARVALID,
  m_axi_my_patches_ARREADY,
  m_axi_my_patches_RDATA,
  m_axi_my_patches_RRESP,
  m_axi_my_patches_RLAST,
  m_axi_my_patches_RVALID,
  m_axi_my_patches_RREADY,
  m_axi_my_pos_AWADDR,
  m_axi_my_pos_AWLEN,
  m_axi_my_pos_AWSIZE,
  m_axi_my_pos_AWBURST,
  m_axi_my_pos_AWLOCK,
  m_axi_my_pos_AWREGION,
  m_axi_my_pos_AWCACHE,
  m_axi_my_pos_AWPROT,
  m_axi_my_pos_AWQOS,
  m_axi_my_pos_AWVALID,
  m_axi_my_pos_AWREADY,
  m_axi_my_pos_WDATA,
  m_axi_my_pos_WSTRB,
  m_axi_my_pos_WLAST,
  m_axi_my_pos_WVALID,
  m_axi_my_pos_WREADY,
  m_axi_my_pos_BRESP,
  m_axi_my_pos_BVALID,
  m_axi_my_pos_BREADY,
  m_axi_my_pos_ARADDR,
  m_axi_my_pos_ARLEN,
  m_axi_my_pos_ARSIZE,
  m_axi_my_pos_ARBURST,
  m_axi_my_pos_ARLOCK,
  m_axi_my_pos_ARREGION,
  m_axi_my_pos_ARCACHE,
  m_axi_my_pos_ARPROT,
  m_axi_my_pos_ARQOS,
  m_axi_my_pos_ARVALID,
  m_axi_my_pos_ARREADY,
  m_axi_my_pos_RDATA,
  m_axi_my_pos_RRESP,
  m_axi_my_pos_RLAST,
  m_axi_my_pos_RVALID,
  m_axi_my_pos_RREADY,
  m_axi_my_debug_AWADDR,
  m_axi_my_debug_AWLEN,
  m_axi_my_debug_AWSIZE,
  m_axi_my_debug_AWBURST,
  m_axi_my_debug_AWLOCK,
  m_axi_my_debug_AWREGION,
  m_axi_my_debug_AWCACHE,
  m_axi_my_debug_AWPROT,
  m_axi_my_debug_AWQOS,
  m_axi_my_debug_AWVALID,
  m_axi_my_debug_AWREADY,
  m_axi_my_debug_WDATA,
  m_axi_my_debug_WSTRB,
  m_axi_my_debug_WLAST,
  m_axi_my_debug_WVALID,
  m_axi_my_debug_WREADY,
  m_axi_my_debug_BRESP,
  m_axi_my_debug_BVALID,
  m_axi_my_debug_BREADY,
  m_axi_my_debug_ARADDR,
  m_axi_my_debug_ARLEN,
  m_axi_my_debug_ARSIZE,
  m_axi_my_debug_ARBURST,
  m_axi_my_debug_ARLOCK,
  m_axi_my_debug_ARREGION,
  m_axi_my_debug_ARCACHE,
  m_axi_my_debug_ARPROT,
  m_axi_my_debug_ARQOS,
  m_axi_my_debug_ARVALID,
  m_axi_my_debug_ARREADY,
  m_axi_my_debug_RDATA,
  m_axi_my_debug_RRESP,
  m_axi_my_debug_RLAST,
  m_axi_my_debug_RVALID,
  m_axi_my_debug_RREADY,
  m_axi_my_debug_array_AWADDR,
  m_axi_my_debug_array_AWLEN,
  m_axi_my_debug_array_AWSIZE,
  m_axi_my_debug_array_AWBURST,
  m_axi_my_debug_array_AWLOCK,
  m_axi_my_debug_array_AWREGION,
  m_axi_my_debug_array_AWCACHE,
  m_axi_my_debug_array_AWPROT,
  m_axi_my_debug_array_AWQOS,
  m_axi_my_debug_array_AWVALID,
  m_axi_my_debug_array_AWREADY,
  m_axi_my_debug_array_WDATA,
  m_axi_my_debug_array_WSTRB,
  m_axi_my_debug_array_WLAST,
  m_axi_my_debug_array_WVALID,
  m_axi_my_debug_array_WREADY,
  m_axi_my_debug_array_BRESP,
  m_axi_my_debug_array_BVALID,
  m_axi_my_debug_array_BREADY,
  m_axi_my_debug_array_ARADDR,
  m_axi_my_debug_array_ARLEN,
  m_axi_my_debug_array_ARSIZE,
  m_axi_my_debug_array_ARBURST,
  m_axi_my_debug_array_ARLOCK,
  m_axi_my_debug_array_ARREGION,
  m_axi_my_debug_array_ARCACHE,
  m_axi_my_debug_array_ARPROT,
  m_axi_my_debug_array_ARQOS,
  m_axi_my_debug_array_ARVALID,
  m_axi_my_debug_array_ARREADY,
  m_axi_my_debug_array_RDATA,
  m_axi_my_debug_array_RRESP,
  m_axi_my_debug_array_RLAST,
  m_axi_my_debug_array_RVALID,
  m_axi_my_debug_array_RREADY
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
IDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY" *)
input wire s_axi_ctrl_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param AWADDR" *)
input wire [5 : 0] s_axi_param_AWADDR;
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
input wire [5 : 0] s_axi_param_ARADDR;
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
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_param, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_\
WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_param RREADY" *)
input wire s_axi_param_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_param:m_axi_my_region_data:m_axi_my_region_fcoord:m_axi_my_patches:m_axi_my_pos:m_axi_my_debug:m_axi_my_debug_array, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_t\
ype immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {INTERRUPT {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWADDR" *)
output wire [31 : 0] m_axi_my_region_data_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWLEN" *)
output wire [7 : 0] m_axi_my_region_data_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWSIZE" *)
output wire [2 : 0] m_axi_my_region_data_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWBURST" *)
output wire [1 : 0] m_axi_my_region_data_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWLOCK" *)
output wire [1 : 0] m_axi_my_region_data_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWREGION" *)
output wire [3 : 0] m_axi_my_region_data_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWCACHE" *)
output wire [3 : 0] m_axi_my_region_data_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWPROT" *)
output wire [2 : 0] m_axi_my_region_data_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWQOS" *)
output wire [3 : 0] m_axi_my_region_data_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWVALID" *)
output wire m_axi_my_region_data_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWREADY" *)
input wire m_axi_my_region_data_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WDATA" *)
output wire [31 : 0] m_axi_my_region_data_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WSTRB" *)
output wire [3 : 0] m_axi_my_region_data_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WLAST" *)
output wire m_axi_my_region_data_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WVALID" *)
output wire m_axi_my_region_data_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WREADY" *)
input wire m_axi_my_region_data_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BRESP" *)
input wire [1 : 0] m_axi_my_region_data_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BVALID" *)
input wire m_axi_my_region_data_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BREADY" *)
output wire m_axi_my_region_data_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARADDR" *)
output wire [31 : 0] m_axi_my_region_data_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARLEN" *)
output wire [7 : 0] m_axi_my_region_data_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARSIZE" *)
output wire [2 : 0] m_axi_my_region_data_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARBURST" *)
output wire [1 : 0] m_axi_my_region_data_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARLOCK" *)
output wire [1 : 0] m_axi_my_region_data_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARREGION" *)
output wire [3 : 0] m_axi_my_region_data_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARCACHE" *)
output wire [3 : 0] m_axi_my_region_data_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARPROT" *)
output wire [2 : 0] m_axi_my_region_data_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARQOS" *)
output wire [3 : 0] m_axi_my_region_data_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARVALID" *)
output wire m_axi_my_region_data_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARREADY" *)
input wire m_axi_my_region_data_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RDATA" *)
input wire [31 : 0] m_axi_my_region_data_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RRESP" *)
input wire [1 : 0] m_axi_my_region_data_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RLAST" *)
input wire m_axi_my_region_data_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RVALID" *)
input wire m_axi_my_region_data_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_region_data, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK\
_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RREADY" *)
output wire m_axi_my_region_data_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWADDR" *)
output wire [31 : 0] m_axi_my_region_fcoord_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWLEN" *)
output wire [7 : 0] m_axi_my_region_fcoord_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWSIZE" *)
output wire [2 : 0] m_axi_my_region_fcoord_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWBURST" *)
output wire [1 : 0] m_axi_my_region_fcoord_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWLOCK" *)
output wire [1 : 0] m_axi_my_region_fcoord_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWREGION" *)
output wire [3 : 0] m_axi_my_region_fcoord_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWCACHE" *)
output wire [3 : 0] m_axi_my_region_fcoord_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWPROT" *)
output wire [2 : 0] m_axi_my_region_fcoord_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWQOS" *)
output wire [3 : 0] m_axi_my_region_fcoord_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWVALID" *)
output wire m_axi_my_region_fcoord_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWREADY" *)
input wire m_axi_my_region_fcoord_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WDATA" *)
output wire [31 : 0] m_axi_my_region_fcoord_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WSTRB" *)
output wire [3 : 0] m_axi_my_region_fcoord_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WLAST" *)
output wire m_axi_my_region_fcoord_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WVALID" *)
output wire m_axi_my_region_fcoord_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WREADY" *)
input wire m_axi_my_region_fcoord_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BRESP" *)
input wire [1 : 0] m_axi_my_region_fcoord_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BVALID" *)
input wire m_axi_my_region_fcoord_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BREADY" *)
output wire m_axi_my_region_fcoord_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARADDR" *)
output wire [31 : 0] m_axi_my_region_fcoord_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARLEN" *)
output wire [7 : 0] m_axi_my_region_fcoord_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARSIZE" *)
output wire [2 : 0] m_axi_my_region_fcoord_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARBURST" *)
output wire [1 : 0] m_axi_my_region_fcoord_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARLOCK" *)
output wire [1 : 0] m_axi_my_region_fcoord_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARREGION" *)
output wire [3 : 0] m_axi_my_region_fcoord_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARCACHE" *)
output wire [3 : 0] m_axi_my_region_fcoord_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARPROT" *)
output wire [2 : 0] m_axi_my_region_fcoord_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARQOS" *)
output wire [3 : 0] m_axi_my_region_fcoord_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARVALID" *)
output wire m_axi_my_region_fcoord_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARREADY" *)
input wire m_axi_my_region_fcoord_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RDATA" *)
input wire [31 : 0] m_axi_my_region_fcoord_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RRESP" *)
input wire [1 : 0] m_axi_my_region_fcoord_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RLAST" *)
input wire m_axi_my_region_fcoord_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RVALID" *)
input wire m_axi_my_region_fcoord_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_region_fcoord, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, C\
LK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RREADY" *)
output wire m_axi_my_region_fcoord_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWADDR" *)
output wire [31 : 0] m_axi_my_patches_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWLEN" *)
output wire [7 : 0] m_axi_my_patches_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWSIZE" *)
output wire [2 : 0] m_axi_my_patches_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWBURST" *)
output wire [1 : 0] m_axi_my_patches_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWLOCK" *)
output wire [1 : 0] m_axi_my_patches_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWREGION" *)
output wire [3 : 0] m_axi_my_patches_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWCACHE" *)
output wire [3 : 0] m_axi_my_patches_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWPROT" *)
output wire [2 : 0] m_axi_my_patches_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWQOS" *)
output wire [3 : 0] m_axi_my_patches_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWVALID" *)
output wire m_axi_my_patches_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWREADY" *)
input wire m_axi_my_patches_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches WDATA" *)
output wire [31 : 0] m_axi_my_patches_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches WSTRB" *)
output wire [3 : 0] m_axi_my_patches_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches WLAST" *)
output wire m_axi_my_patches_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches WVALID" *)
output wire m_axi_my_patches_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches WREADY" *)
input wire m_axi_my_patches_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches BRESP" *)
input wire [1 : 0] m_axi_my_patches_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches BVALID" *)
input wire m_axi_my_patches_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches BREADY" *)
output wire m_axi_my_patches_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARADDR" *)
output wire [31 : 0] m_axi_my_patches_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARLEN" *)
output wire [7 : 0] m_axi_my_patches_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARSIZE" *)
output wire [2 : 0] m_axi_my_patches_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARBURST" *)
output wire [1 : 0] m_axi_my_patches_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARLOCK" *)
output wire [1 : 0] m_axi_my_patches_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARREGION" *)
output wire [3 : 0] m_axi_my_patches_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARCACHE" *)
output wire [3 : 0] m_axi_my_patches_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARPROT" *)
output wire [2 : 0] m_axi_my_patches_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARQOS" *)
output wire [3 : 0] m_axi_my_patches_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARVALID" *)
output wire m_axi_my_patches_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARREADY" *)
input wire m_axi_my_patches_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches RDATA" *)
input wire [31 : 0] m_axi_my_patches_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches RRESP" *)
input wire [1 : 0] m_axi_my_patches_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches RLAST" *)
input wire m_axi_my_patches_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches RVALID" *)
input wire m_axi_my_patches_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_patches, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOM\
AIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_patches RREADY" *)
output wire m_axi_my_patches_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWADDR" *)
output wire [31 : 0] m_axi_my_pos_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWLEN" *)
output wire [7 : 0] m_axi_my_pos_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWSIZE" *)
output wire [2 : 0] m_axi_my_pos_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWBURST" *)
output wire [1 : 0] m_axi_my_pos_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWLOCK" *)
output wire [1 : 0] m_axi_my_pos_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWREGION" *)
output wire [3 : 0] m_axi_my_pos_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWCACHE" *)
output wire [3 : 0] m_axi_my_pos_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWPROT" *)
output wire [2 : 0] m_axi_my_pos_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWQOS" *)
output wire [3 : 0] m_axi_my_pos_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWVALID" *)
output wire m_axi_my_pos_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWREADY" *)
input wire m_axi_my_pos_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos WDATA" *)
output wire [31 : 0] m_axi_my_pos_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos WSTRB" *)
output wire [3 : 0] m_axi_my_pos_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos WLAST" *)
output wire m_axi_my_pos_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos WVALID" *)
output wire m_axi_my_pos_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos WREADY" *)
input wire m_axi_my_pos_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos BRESP" *)
input wire [1 : 0] m_axi_my_pos_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos BVALID" *)
input wire m_axi_my_pos_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos BREADY" *)
output wire m_axi_my_pos_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARADDR" *)
output wire [31 : 0] m_axi_my_pos_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARLEN" *)
output wire [7 : 0] m_axi_my_pos_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARSIZE" *)
output wire [2 : 0] m_axi_my_pos_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARBURST" *)
output wire [1 : 0] m_axi_my_pos_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARLOCK" *)
output wire [1 : 0] m_axi_my_pos_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARREGION" *)
output wire [3 : 0] m_axi_my_pos_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARCACHE" *)
output wire [3 : 0] m_axi_my_pos_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARPROT" *)
output wire [2 : 0] m_axi_my_pos_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARQOS" *)
output wire [3 : 0] m_axi_my_pos_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARVALID" *)
output wire m_axi_my_pos_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARREADY" *)
input wire m_axi_my_pos_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos RDATA" *)
input wire [31 : 0] m_axi_my_pos_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos RRESP" *)
input wire [1 : 0] m_axi_my_pos_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos RLAST" *)
input wire m_axi_my_pos_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos RVALID" *)
input wire m_axi_my_pos_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_pos, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN\
 design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_pos RREADY" *)
output wire m_axi_my_pos_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWADDR" *)
output wire [31 : 0] m_axi_my_debug_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWLEN" *)
output wire [7 : 0] m_axi_my_debug_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWSIZE" *)
output wire [2 : 0] m_axi_my_debug_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWBURST" *)
output wire [1 : 0] m_axi_my_debug_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWLOCK" *)
output wire [1 : 0] m_axi_my_debug_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWREGION" *)
output wire [3 : 0] m_axi_my_debug_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWCACHE" *)
output wire [3 : 0] m_axi_my_debug_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWPROT" *)
output wire [2 : 0] m_axi_my_debug_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWQOS" *)
output wire [3 : 0] m_axi_my_debug_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWVALID" *)
output wire m_axi_my_debug_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWREADY" *)
input wire m_axi_my_debug_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug WDATA" *)
output wire [31 : 0] m_axi_my_debug_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug WSTRB" *)
output wire [3 : 0] m_axi_my_debug_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug WLAST" *)
output wire m_axi_my_debug_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug WVALID" *)
output wire m_axi_my_debug_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug WREADY" *)
input wire m_axi_my_debug_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug BRESP" *)
input wire [1 : 0] m_axi_my_debug_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug BVALID" *)
input wire m_axi_my_debug_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug BREADY" *)
output wire m_axi_my_debug_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARADDR" *)
output wire [31 : 0] m_axi_my_debug_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARLEN" *)
output wire [7 : 0] m_axi_my_debug_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARSIZE" *)
output wire [2 : 0] m_axi_my_debug_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARBURST" *)
output wire [1 : 0] m_axi_my_debug_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARLOCK" *)
output wire [1 : 0] m_axi_my_debug_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARREGION" *)
output wire [3 : 0] m_axi_my_debug_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARCACHE" *)
output wire [3 : 0] m_axi_my_debug_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARPROT" *)
output wire [2 : 0] m_axi_my_debug_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARQOS" *)
output wire [3 : 0] m_axi_my_debug_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARVALID" *)
output wire m_axi_my_debug_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARREADY" *)
input wire m_axi_my_debug_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug RDATA" *)
input wire [31 : 0] m_axi_my_debug_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug RRESP" *)
input wire [1 : 0] m_axi_my_debug_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug RLAST" *)
input wire m_axi_my_debug_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug RVALID" *)
input wire m_axi_my_debug_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_debug, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMA\
IN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug RREADY" *)
output wire m_axi_my_debug_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWADDR" *)
output wire [31 : 0] m_axi_my_debug_array_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWLEN" *)
output wire [7 : 0] m_axi_my_debug_array_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWSIZE" *)
output wire [2 : 0] m_axi_my_debug_array_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWBURST" *)
output wire [1 : 0] m_axi_my_debug_array_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWLOCK" *)
output wire [1 : 0] m_axi_my_debug_array_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWREGION" *)
output wire [3 : 0] m_axi_my_debug_array_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWCACHE" *)
output wire [3 : 0] m_axi_my_debug_array_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWPROT" *)
output wire [2 : 0] m_axi_my_debug_array_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWQOS" *)
output wire [3 : 0] m_axi_my_debug_array_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWVALID" *)
output wire m_axi_my_debug_array_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWREADY" *)
input wire m_axi_my_debug_array_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WDATA" *)
output wire [31 : 0] m_axi_my_debug_array_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WSTRB" *)
output wire [3 : 0] m_axi_my_debug_array_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WLAST" *)
output wire m_axi_my_debug_array_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WVALID" *)
output wire m_axi_my_debug_array_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WREADY" *)
input wire m_axi_my_debug_array_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BRESP" *)
input wire [1 : 0] m_axi_my_debug_array_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BVALID" *)
input wire m_axi_my_debug_array_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BREADY" *)
output wire m_axi_my_debug_array_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARADDR" *)
output wire [31 : 0] m_axi_my_debug_array_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARLEN" *)
output wire [7 : 0] m_axi_my_debug_array_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARSIZE" *)
output wire [2 : 0] m_axi_my_debug_array_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARBURST" *)
output wire [1 : 0] m_axi_my_debug_array_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARLOCK" *)
output wire [1 : 0] m_axi_my_debug_array_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARREGION" *)
output wire [3 : 0] m_axi_my_debug_array_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARCACHE" *)
output wire [3 : 0] m_axi_my_debug_array_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARPROT" *)
output wire [2 : 0] m_axi_my_debug_array_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARQOS" *)
output wire [3 : 0] m_axi_my_debug_array_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARVALID" *)
output wire m_axi_my_debug_array_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARREADY" *)
input wire m_axi_my_debug_array_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RDATA" *)
input wire [31 : 0] m_axi_my_debug_array_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RRESP" *)
input wire [1 : 0] m_axi_my_debug_array_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RLAST" *)
input wire m_axi_my_debug_array_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RVALID" *)
input wire m_axi_my_debug_array_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_my_debug_array, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CL\
K_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RREADY" *)
output wire m_axi_my_debug_array_RREADY;

  batch_align2D_region #(
    .C_S_AXI_CTRL_ADDR_WIDTH(6),
    .C_S_AXI_CTRL_DATA_WIDTH(32),
    .C_S_AXI_PARAM_ADDR_WIDTH(6),
    .C_S_AXI_PARAM_DATA_WIDTH(32),
    .C_M_AXI_MY_REGION_DATA_ID_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_ADDR_WIDTH(32),
    .C_M_AXI_MY_REGION_DATA_DATA_WIDTH(32),
    .C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_WUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_RUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_BUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_DATA_USER_VALUE('H00000000),
    .C_M_AXI_MY_REGION_DATA_PROT_VALUE('B000),
    .C_M_AXI_MY_REGION_DATA_CACHE_VALUE('B0011),
    .C_M_AXI_MY_REGION_FCOORD_ID_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_ADDR_WIDTH(32),
    .C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH(32),
    .C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH(1),
    .C_M_AXI_MY_REGION_FCOORD_USER_VALUE('H00000000),
    .C_M_AXI_MY_REGION_FCOORD_PROT_VALUE('B000),
    .C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE('B0011),
    .C_M_AXI_MY_PATCHES_ID_WIDTH(1),
    .C_M_AXI_MY_PATCHES_ADDR_WIDTH(32),
    .C_M_AXI_MY_PATCHES_DATA_WIDTH(32),
    .C_M_AXI_MY_PATCHES_AWUSER_WIDTH(1),
    .C_M_AXI_MY_PATCHES_ARUSER_WIDTH(1),
    .C_M_AXI_MY_PATCHES_WUSER_WIDTH(1),
    .C_M_AXI_MY_PATCHES_RUSER_WIDTH(1),
    .C_M_AXI_MY_PATCHES_BUSER_WIDTH(1),
    .C_M_AXI_MY_PATCHES_USER_VALUE('H00000000),
    .C_M_AXI_MY_PATCHES_PROT_VALUE('B000),
    .C_M_AXI_MY_PATCHES_CACHE_VALUE('B0011),
    .C_M_AXI_MY_POS_ID_WIDTH(1),
    .C_M_AXI_MY_POS_ADDR_WIDTH(32),
    .C_M_AXI_MY_POS_DATA_WIDTH(32),
    .C_M_AXI_MY_POS_AWUSER_WIDTH(1),
    .C_M_AXI_MY_POS_ARUSER_WIDTH(1),
    .C_M_AXI_MY_POS_WUSER_WIDTH(1),
    .C_M_AXI_MY_POS_RUSER_WIDTH(1),
    .C_M_AXI_MY_POS_BUSER_WIDTH(1),
    .C_M_AXI_MY_POS_USER_VALUE('H00000000),
    .C_M_AXI_MY_POS_PROT_VALUE('B000),
    .C_M_AXI_MY_POS_CACHE_VALUE('B0011),
    .C_M_AXI_MY_DEBUG_ID_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ADDR_WIDTH(32),
    .C_M_AXI_MY_DEBUG_DATA_WIDTH(32),
    .C_M_AXI_MY_DEBUG_AWUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_WUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_RUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_BUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_USER_VALUE('H00000000),
    .C_M_AXI_MY_DEBUG_PROT_VALUE('B000),
    .C_M_AXI_MY_DEBUG_CACHE_VALUE('B0011),
    .C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_ADDR_WIDTH(32),
    .C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH(32),
    .C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH(1),
    .C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE('H00000000),
    .C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE('B000),
    .C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE('B0011)
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
    .m_axi_my_region_data_AWID(),
    .m_axi_my_region_data_AWADDR(m_axi_my_region_data_AWADDR),
    .m_axi_my_region_data_AWLEN(m_axi_my_region_data_AWLEN),
    .m_axi_my_region_data_AWSIZE(m_axi_my_region_data_AWSIZE),
    .m_axi_my_region_data_AWBURST(m_axi_my_region_data_AWBURST),
    .m_axi_my_region_data_AWLOCK(m_axi_my_region_data_AWLOCK),
    .m_axi_my_region_data_AWREGION(m_axi_my_region_data_AWREGION),
    .m_axi_my_region_data_AWCACHE(m_axi_my_region_data_AWCACHE),
    .m_axi_my_region_data_AWPROT(m_axi_my_region_data_AWPROT),
    .m_axi_my_region_data_AWQOS(m_axi_my_region_data_AWQOS),
    .m_axi_my_region_data_AWUSER(),
    .m_axi_my_region_data_AWVALID(m_axi_my_region_data_AWVALID),
    .m_axi_my_region_data_AWREADY(m_axi_my_region_data_AWREADY),
    .m_axi_my_region_data_WID(),
    .m_axi_my_region_data_WDATA(m_axi_my_region_data_WDATA),
    .m_axi_my_region_data_WSTRB(m_axi_my_region_data_WSTRB),
    .m_axi_my_region_data_WLAST(m_axi_my_region_data_WLAST),
    .m_axi_my_region_data_WUSER(),
    .m_axi_my_region_data_WVALID(m_axi_my_region_data_WVALID),
    .m_axi_my_region_data_WREADY(m_axi_my_region_data_WREADY),
    .m_axi_my_region_data_BID(1'B0),
    .m_axi_my_region_data_BRESP(m_axi_my_region_data_BRESP),
    .m_axi_my_region_data_BUSER(1'B0),
    .m_axi_my_region_data_BVALID(m_axi_my_region_data_BVALID),
    .m_axi_my_region_data_BREADY(m_axi_my_region_data_BREADY),
    .m_axi_my_region_data_ARID(),
    .m_axi_my_region_data_ARADDR(m_axi_my_region_data_ARADDR),
    .m_axi_my_region_data_ARLEN(m_axi_my_region_data_ARLEN),
    .m_axi_my_region_data_ARSIZE(m_axi_my_region_data_ARSIZE),
    .m_axi_my_region_data_ARBURST(m_axi_my_region_data_ARBURST),
    .m_axi_my_region_data_ARLOCK(m_axi_my_region_data_ARLOCK),
    .m_axi_my_region_data_ARREGION(m_axi_my_region_data_ARREGION),
    .m_axi_my_region_data_ARCACHE(m_axi_my_region_data_ARCACHE),
    .m_axi_my_region_data_ARPROT(m_axi_my_region_data_ARPROT),
    .m_axi_my_region_data_ARQOS(m_axi_my_region_data_ARQOS),
    .m_axi_my_region_data_ARUSER(),
    .m_axi_my_region_data_ARVALID(m_axi_my_region_data_ARVALID),
    .m_axi_my_region_data_ARREADY(m_axi_my_region_data_ARREADY),
    .m_axi_my_region_data_RID(1'B0),
    .m_axi_my_region_data_RDATA(m_axi_my_region_data_RDATA),
    .m_axi_my_region_data_RRESP(m_axi_my_region_data_RRESP),
    .m_axi_my_region_data_RLAST(m_axi_my_region_data_RLAST),
    .m_axi_my_region_data_RUSER(1'B0),
    .m_axi_my_region_data_RVALID(m_axi_my_region_data_RVALID),
    .m_axi_my_region_data_RREADY(m_axi_my_region_data_RREADY),
    .m_axi_my_region_fcoord_AWID(),
    .m_axi_my_region_fcoord_AWADDR(m_axi_my_region_fcoord_AWADDR),
    .m_axi_my_region_fcoord_AWLEN(m_axi_my_region_fcoord_AWLEN),
    .m_axi_my_region_fcoord_AWSIZE(m_axi_my_region_fcoord_AWSIZE),
    .m_axi_my_region_fcoord_AWBURST(m_axi_my_region_fcoord_AWBURST),
    .m_axi_my_region_fcoord_AWLOCK(m_axi_my_region_fcoord_AWLOCK),
    .m_axi_my_region_fcoord_AWREGION(m_axi_my_region_fcoord_AWREGION),
    .m_axi_my_region_fcoord_AWCACHE(m_axi_my_region_fcoord_AWCACHE),
    .m_axi_my_region_fcoord_AWPROT(m_axi_my_region_fcoord_AWPROT),
    .m_axi_my_region_fcoord_AWQOS(m_axi_my_region_fcoord_AWQOS),
    .m_axi_my_region_fcoord_AWUSER(),
    .m_axi_my_region_fcoord_AWVALID(m_axi_my_region_fcoord_AWVALID),
    .m_axi_my_region_fcoord_AWREADY(m_axi_my_region_fcoord_AWREADY),
    .m_axi_my_region_fcoord_WID(),
    .m_axi_my_region_fcoord_WDATA(m_axi_my_region_fcoord_WDATA),
    .m_axi_my_region_fcoord_WSTRB(m_axi_my_region_fcoord_WSTRB),
    .m_axi_my_region_fcoord_WLAST(m_axi_my_region_fcoord_WLAST),
    .m_axi_my_region_fcoord_WUSER(),
    .m_axi_my_region_fcoord_WVALID(m_axi_my_region_fcoord_WVALID),
    .m_axi_my_region_fcoord_WREADY(m_axi_my_region_fcoord_WREADY),
    .m_axi_my_region_fcoord_BID(1'B0),
    .m_axi_my_region_fcoord_BRESP(m_axi_my_region_fcoord_BRESP),
    .m_axi_my_region_fcoord_BUSER(1'B0),
    .m_axi_my_region_fcoord_BVALID(m_axi_my_region_fcoord_BVALID),
    .m_axi_my_region_fcoord_BREADY(m_axi_my_region_fcoord_BREADY),
    .m_axi_my_region_fcoord_ARID(),
    .m_axi_my_region_fcoord_ARADDR(m_axi_my_region_fcoord_ARADDR),
    .m_axi_my_region_fcoord_ARLEN(m_axi_my_region_fcoord_ARLEN),
    .m_axi_my_region_fcoord_ARSIZE(m_axi_my_region_fcoord_ARSIZE),
    .m_axi_my_region_fcoord_ARBURST(m_axi_my_region_fcoord_ARBURST),
    .m_axi_my_region_fcoord_ARLOCK(m_axi_my_region_fcoord_ARLOCK),
    .m_axi_my_region_fcoord_ARREGION(m_axi_my_region_fcoord_ARREGION),
    .m_axi_my_region_fcoord_ARCACHE(m_axi_my_region_fcoord_ARCACHE),
    .m_axi_my_region_fcoord_ARPROT(m_axi_my_region_fcoord_ARPROT),
    .m_axi_my_region_fcoord_ARQOS(m_axi_my_region_fcoord_ARQOS),
    .m_axi_my_region_fcoord_ARUSER(),
    .m_axi_my_region_fcoord_ARVALID(m_axi_my_region_fcoord_ARVALID),
    .m_axi_my_region_fcoord_ARREADY(m_axi_my_region_fcoord_ARREADY),
    .m_axi_my_region_fcoord_RID(1'B0),
    .m_axi_my_region_fcoord_RDATA(m_axi_my_region_fcoord_RDATA),
    .m_axi_my_region_fcoord_RRESP(m_axi_my_region_fcoord_RRESP),
    .m_axi_my_region_fcoord_RLAST(m_axi_my_region_fcoord_RLAST),
    .m_axi_my_region_fcoord_RUSER(1'B0),
    .m_axi_my_region_fcoord_RVALID(m_axi_my_region_fcoord_RVALID),
    .m_axi_my_region_fcoord_RREADY(m_axi_my_region_fcoord_RREADY),
    .m_axi_my_patches_AWID(),
    .m_axi_my_patches_AWADDR(m_axi_my_patches_AWADDR),
    .m_axi_my_patches_AWLEN(m_axi_my_patches_AWLEN),
    .m_axi_my_patches_AWSIZE(m_axi_my_patches_AWSIZE),
    .m_axi_my_patches_AWBURST(m_axi_my_patches_AWBURST),
    .m_axi_my_patches_AWLOCK(m_axi_my_patches_AWLOCK),
    .m_axi_my_patches_AWREGION(m_axi_my_patches_AWREGION),
    .m_axi_my_patches_AWCACHE(m_axi_my_patches_AWCACHE),
    .m_axi_my_patches_AWPROT(m_axi_my_patches_AWPROT),
    .m_axi_my_patches_AWQOS(m_axi_my_patches_AWQOS),
    .m_axi_my_patches_AWUSER(),
    .m_axi_my_patches_AWVALID(m_axi_my_patches_AWVALID),
    .m_axi_my_patches_AWREADY(m_axi_my_patches_AWREADY),
    .m_axi_my_patches_WID(),
    .m_axi_my_patches_WDATA(m_axi_my_patches_WDATA),
    .m_axi_my_patches_WSTRB(m_axi_my_patches_WSTRB),
    .m_axi_my_patches_WLAST(m_axi_my_patches_WLAST),
    .m_axi_my_patches_WUSER(),
    .m_axi_my_patches_WVALID(m_axi_my_patches_WVALID),
    .m_axi_my_patches_WREADY(m_axi_my_patches_WREADY),
    .m_axi_my_patches_BID(1'B0),
    .m_axi_my_patches_BRESP(m_axi_my_patches_BRESP),
    .m_axi_my_patches_BUSER(1'B0),
    .m_axi_my_patches_BVALID(m_axi_my_patches_BVALID),
    .m_axi_my_patches_BREADY(m_axi_my_patches_BREADY),
    .m_axi_my_patches_ARID(),
    .m_axi_my_patches_ARADDR(m_axi_my_patches_ARADDR),
    .m_axi_my_patches_ARLEN(m_axi_my_patches_ARLEN),
    .m_axi_my_patches_ARSIZE(m_axi_my_patches_ARSIZE),
    .m_axi_my_patches_ARBURST(m_axi_my_patches_ARBURST),
    .m_axi_my_patches_ARLOCK(m_axi_my_patches_ARLOCK),
    .m_axi_my_patches_ARREGION(m_axi_my_patches_ARREGION),
    .m_axi_my_patches_ARCACHE(m_axi_my_patches_ARCACHE),
    .m_axi_my_patches_ARPROT(m_axi_my_patches_ARPROT),
    .m_axi_my_patches_ARQOS(m_axi_my_patches_ARQOS),
    .m_axi_my_patches_ARUSER(),
    .m_axi_my_patches_ARVALID(m_axi_my_patches_ARVALID),
    .m_axi_my_patches_ARREADY(m_axi_my_patches_ARREADY),
    .m_axi_my_patches_RID(1'B0),
    .m_axi_my_patches_RDATA(m_axi_my_patches_RDATA),
    .m_axi_my_patches_RRESP(m_axi_my_patches_RRESP),
    .m_axi_my_patches_RLAST(m_axi_my_patches_RLAST),
    .m_axi_my_patches_RUSER(1'B0),
    .m_axi_my_patches_RVALID(m_axi_my_patches_RVALID),
    .m_axi_my_patches_RREADY(m_axi_my_patches_RREADY),
    .m_axi_my_pos_AWID(),
    .m_axi_my_pos_AWADDR(m_axi_my_pos_AWADDR),
    .m_axi_my_pos_AWLEN(m_axi_my_pos_AWLEN),
    .m_axi_my_pos_AWSIZE(m_axi_my_pos_AWSIZE),
    .m_axi_my_pos_AWBURST(m_axi_my_pos_AWBURST),
    .m_axi_my_pos_AWLOCK(m_axi_my_pos_AWLOCK),
    .m_axi_my_pos_AWREGION(m_axi_my_pos_AWREGION),
    .m_axi_my_pos_AWCACHE(m_axi_my_pos_AWCACHE),
    .m_axi_my_pos_AWPROT(m_axi_my_pos_AWPROT),
    .m_axi_my_pos_AWQOS(m_axi_my_pos_AWQOS),
    .m_axi_my_pos_AWUSER(),
    .m_axi_my_pos_AWVALID(m_axi_my_pos_AWVALID),
    .m_axi_my_pos_AWREADY(m_axi_my_pos_AWREADY),
    .m_axi_my_pos_WID(),
    .m_axi_my_pos_WDATA(m_axi_my_pos_WDATA),
    .m_axi_my_pos_WSTRB(m_axi_my_pos_WSTRB),
    .m_axi_my_pos_WLAST(m_axi_my_pos_WLAST),
    .m_axi_my_pos_WUSER(),
    .m_axi_my_pos_WVALID(m_axi_my_pos_WVALID),
    .m_axi_my_pos_WREADY(m_axi_my_pos_WREADY),
    .m_axi_my_pos_BID(1'B0),
    .m_axi_my_pos_BRESP(m_axi_my_pos_BRESP),
    .m_axi_my_pos_BUSER(1'B0),
    .m_axi_my_pos_BVALID(m_axi_my_pos_BVALID),
    .m_axi_my_pos_BREADY(m_axi_my_pos_BREADY),
    .m_axi_my_pos_ARID(),
    .m_axi_my_pos_ARADDR(m_axi_my_pos_ARADDR),
    .m_axi_my_pos_ARLEN(m_axi_my_pos_ARLEN),
    .m_axi_my_pos_ARSIZE(m_axi_my_pos_ARSIZE),
    .m_axi_my_pos_ARBURST(m_axi_my_pos_ARBURST),
    .m_axi_my_pos_ARLOCK(m_axi_my_pos_ARLOCK),
    .m_axi_my_pos_ARREGION(m_axi_my_pos_ARREGION),
    .m_axi_my_pos_ARCACHE(m_axi_my_pos_ARCACHE),
    .m_axi_my_pos_ARPROT(m_axi_my_pos_ARPROT),
    .m_axi_my_pos_ARQOS(m_axi_my_pos_ARQOS),
    .m_axi_my_pos_ARUSER(),
    .m_axi_my_pos_ARVALID(m_axi_my_pos_ARVALID),
    .m_axi_my_pos_ARREADY(m_axi_my_pos_ARREADY),
    .m_axi_my_pos_RID(1'B0),
    .m_axi_my_pos_RDATA(m_axi_my_pos_RDATA),
    .m_axi_my_pos_RRESP(m_axi_my_pos_RRESP),
    .m_axi_my_pos_RLAST(m_axi_my_pos_RLAST),
    .m_axi_my_pos_RUSER(1'B0),
    .m_axi_my_pos_RVALID(m_axi_my_pos_RVALID),
    .m_axi_my_pos_RREADY(m_axi_my_pos_RREADY),
    .m_axi_my_debug_AWID(),
    .m_axi_my_debug_AWADDR(m_axi_my_debug_AWADDR),
    .m_axi_my_debug_AWLEN(m_axi_my_debug_AWLEN),
    .m_axi_my_debug_AWSIZE(m_axi_my_debug_AWSIZE),
    .m_axi_my_debug_AWBURST(m_axi_my_debug_AWBURST),
    .m_axi_my_debug_AWLOCK(m_axi_my_debug_AWLOCK),
    .m_axi_my_debug_AWREGION(m_axi_my_debug_AWREGION),
    .m_axi_my_debug_AWCACHE(m_axi_my_debug_AWCACHE),
    .m_axi_my_debug_AWPROT(m_axi_my_debug_AWPROT),
    .m_axi_my_debug_AWQOS(m_axi_my_debug_AWQOS),
    .m_axi_my_debug_AWUSER(),
    .m_axi_my_debug_AWVALID(m_axi_my_debug_AWVALID),
    .m_axi_my_debug_AWREADY(m_axi_my_debug_AWREADY),
    .m_axi_my_debug_WID(),
    .m_axi_my_debug_WDATA(m_axi_my_debug_WDATA),
    .m_axi_my_debug_WSTRB(m_axi_my_debug_WSTRB),
    .m_axi_my_debug_WLAST(m_axi_my_debug_WLAST),
    .m_axi_my_debug_WUSER(),
    .m_axi_my_debug_WVALID(m_axi_my_debug_WVALID),
    .m_axi_my_debug_WREADY(m_axi_my_debug_WREADY),
    .m_axi_my_debug_BID(1'B0),
    .m_axi_my_debug_BRESP(m_axi_my_debug_BRESP),
    .m_axi_my_debug_BUSER(1'B0),
    .m_axi_my_debug_BVALID(m_axi_my_debug_BVALID),
    .m_axi_my_debug_BREADY(m_axi_my_debug_BREADY),
    .m_axi_my_debug_ARID(),
    .m_axi_my_debug_ARADDR(m_axi_my_debug_ARADDR),
    .m_axi_my_debug_ARLEN(m_axi_my_debug_ARLEN),
    .m_axi_my_debug_ARSIZE(m_axi_my_debug_ARSIZE),
    .m_axi_my_debug_ARBURST(m_axi_my_debug_ARBURST),
    .m_axi_my_debug_ARLOCK(m_axi_my_debug_ARLOCK),
    .m_axi_my_debug_ARREGION(m_axi_my_debug_ARREGION),
    .m_axi_my_debug_ARCACHE(m_axi_my_debug_ARCACHE),
    .m_axi_my_debug_ARPROT(m_axi_my_debug_ARPROT),
    .m_axi_my_debug_ARQOS(m_axi_my_debug_ARQOS),
    .m_axi_my_debug_ARUSER(),
    .m_axi_my_debug_ARVALID(m_axi_my_debug_ARVALID),
    .m_axi_my_debug_ARREADY(m_axi_my_debug_ARREADY),
    .m_axi_my_debug_RID(1'B0),
    .m_axi_my_debug_RDATA(m_axi_my_debug_RDATA),
    .m_axi_my_debug_RRESP(m_axi_my_debug_RRESP),
    .m_axi_my_debug_RLAST(m_axi_my_debug_RLAST),
    .m_axi_my_debug_RUSER(1'B0),
    .m_axi_my_debug_RVALID(m_axi_my_debug_RVALID),
    .m_axi_my_debug_RREADY(m_axi_my_debug_RREADY),
    .m_axi_my_debug_array_AWID(),
    .m_axi_my_debug_array_AWADDR(m_axi_my_debug_array_AWADDR),
    .m_axi_my_debug_array_AWLEN(m_axi_my_debug_array_AWLEN),
    .m_axi_my_debug_array_AWSIZE(m_axi_my_debug_array_AWSIZE),
    .m_axi_my_debug_array_AWBURST(m_axi_my_debug_array_AWBURST),
    .m_axi_my_debug_array_AWLOCK(m_axi_my_debug_array_AWLOCK),
    .m_axi_my_debug_array_AWREGION(m_axi_my_debug_array_AWREGION),
    .m_axi_my_debug_array_AWCACHE(m_axi_my_debug_array_AWCACHE),
    .m_axi_my_debug_array_AWPROT(m_axi_my_debug_array_AWPROT),
    .m_axi_my_debug_array_AWQOS(m_axi_my_debug_array_AWQOS),
    .m_axi_my_debug_array_AWUSER(),
    .m_axi_my_debug_array_AWVALID(m_axi_my_debug_array_AWVALID),
    .m_axi_my_debug_array_AWREADY(m_axi_my_debug_array_AWREADY),
    .m_axi_my_debug_array_WID(),
    .m_axi_my_debug_array_WDATA(m_axi_my_debug_array_WDATA),
    .m_axi_my_debug_array_WSTRB(m_axi_my_debug_array_WSTRB),
    .m_axi_my_debug_array_WLAST(m_axi_my_debug_array_WLAST),
    .m_axi_my_debug_array_WUSER(),
    .m_axi_my_debug_array_WVALID(m_axi_my_debug_array_WVALID),
    .m_axi_my_debug_array_WREADY(m_axi_my_debug_array_WREADY),
    .m_axi_my_debug_array_BID(1'B0),
    .m_axi_my_debug_array_BRESP(m_axi_my_debug_array_BRESP),
    .m_axi_my_debug_array_BUSER(1'B0),
    .m_axi_my_debug_array_BVALID(m_axi_my_debug_array_BVALID),
    .m_axi_my_debug_array_BREADY(m_axi_my_debug_array_BREADY),
    .m_axi_my_debug_array_ARID(),
    .m_axi_my_debug_array_ARADDR(m_axi_my_debug_array_ARADDR),
    .m_axi_my_debug_array_ARLEN(m_axi_my_debug_array_ARLEN),
    .m_axi_my_debug_array_ARSIZE(m_axi_my_debug_array_ARSIZE),
    .m_axi_my_debug_array_ARBURST(m_axi_my_debug_array_ARBURST),
    .m_axi_my_debug_array_ARLOCK(m_axi_my_debug_array_ARLOCK),
    .m_axi_my_debug_array_ARREGION(m_axi_my_debug_array_ARREGION),
    .m_axi_my_debug_array_ARCACHE(m_axi_my_debug_array_ARCACHE),
    .m_axi_my_debug_array_ARPROT(m_axi_my_debug_array_ARPROT),
    .m_axi_my_debug_array_ARQOS(m_axi_my_debug_array_ARQOS),
    .m_axi_my_debug_array_ARUSER(),
    .m_axi_my_debug_array_ARVALID(m_axi_my_debug_array_ARVALID),
    .m_axi_my_debug_array_ARREADY(m_axi_my_debug_array_ARREADY),
    .m_axi_my_debug_array_RID(1'B0),
    .m_axi_my_debug_array_RDATA(m_axi_my_debug_array_RDATA),
    .m_axi_my_debug_array_RRESP(m_axi_my_debug_array_RRESP),
    .m_axi_my_debug_array_RLAST(m_axi_my_debug_array_RLAST),
    .m_axi_my_debug_array_RUSER(1'B0),
    .m_axi_my_debug_array_RVALID(m_axi_my_debug_array_RVALID),
    .m_axi_my_debug_array_RREADY(m_axi_my_debug_array_RREADY)
  );
endmodule
