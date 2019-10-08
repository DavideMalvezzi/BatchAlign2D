// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (lin64) Build 2552052 Fri May 24 14:47:09 MDT 2019
// Date        : Thu Oct  3 19:08:49 2019
// Host        : davide-X550CL running 64-bit Ubuntu 18.04.2 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_align2d_0_0_stub.v
// Design      : design_1_align2d_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xczu9eg-ffvb1156-2-e
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "align2d,Vivado 2019.1" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_ctrl_AWADDR, s_axi_ctrl_AWVALID, 
  s_axi_ctrl_AWREADY, s_axi_ctrl_WDATA, s_axi_ctrl_WSTRB, s_axi_ctrl_WVALID, 
  s_axi_ctrl_WREADY, s_axi_ctrl_BRESP, s_axi_ctrl_BVALID, s_axi_ctrl_BREADY, 
  s_axi_ctrl_ARADDR, s_axi_ctrl_ARVALID, s_axi_ctrl_ARREADY, s_axi_ctrl_RDATA, 
  s_axi_ctrl_RRESP, s_axi_ctrl_RVALID, s_axi_ctrl_RREADY, s_axi_data_AWADDR, 
  s_axi_data_AWVALID, s_axi_data_AWREADY, s_axi_data_WDATA, s_axi_data_WSTRB, 
  s_axi_data_WVALID, s_axi_data_WREADY, s_axi_data_BRESP, s_axi_data_BVALID, 
  s_axi_data_BREADY, s_axi_data_ARADDR, s_axi_data_ARVALID, s_axi_data_ARREADY, 
  s_axi_data_RDATA, s_axi_data_RRESP, s_axi_data_RVALID, s_axi_data_RREADY, ap_clk, ap_rst_n, 
  interrupt)
/* synthesis syn_black_box black_box_pad_pin="s_axi_ctrl_AWADDR[3:0],s_axi_ctrl_AWVALID,s_axi_ctrl_AWREADY,s_axi_ctrl_WDATA[31:0],s_axi_ctrl_WSTRB[3:0],s_axi_ctrl_WVALID,s_axi_ctrl_WREADY,s_axi_ctrl_BRESP[1:0],s_axi_ctrl_BVALID,s_axi_ctrl_BREADY,s_axi_ctrl_ARADDR[3:0],s_axi_ctrl_ARVALID,s_axi_ctrl_ARREADY,s_axi_ctrl_RDATA[31:0],s_axi_ctrl_RRESP[1:0],s_axi_ctrl_RVALID,s_axi_ctrl_RREADY,s_axi_data_AWADDR[4:0],s_axi_data_AWVALID,s_axi_data_AWREADY,s_axi_data_WDATA[31:0],s_axi_data_WSTRB[3:0],s_axi_data_WVALID,s_axi_data_WREADY,s_axi_data_BRESP[1:0],s_axi_data_BVALID,s_axi_data_BREADY,s_axi_data_ARADDR[4:0],s_axi_data_ARVALID,s_axi_data_ARREADY,s_axi_data_RDATA[31:0],s_axi_data_RRESP[1:0],s_axi_data_RVALID,s_axi_data_RREADY,ap_clk,ap_rst_n,interrupt" */;
  input [3:0]s_axi_ctrl_AWADDR;
  input s_axi_ctrl_AWVALID;
  output s_axi_ctrl_AWREADY;
  input [31:0]s_axi_ctrl_WDATA;
  input [3:0]s_axi_ctrl_WSTRB;
  input s_axi_ctrl_WVALID;
  output s_axi_ctrl_WREADY;
  output [1:0]s_axi_ctrl_BRESP;
  output s_axi_ctrl_BVALID;
  input s_axi_ctrl_BREADY;
  input [3:0]s_axi_ctrl_ARADDR;
  input s_axi_ctrl_ARVALID;
  output s_axi_ctrl_ARREADY;
  output [31:0]s_axi_ctrl_RDATA;
  output [1:0]s_axi_ctrl_RRESP;
  output s_axi_ctrl_RVALID;
  input s_axi_ctrl_RREADY;
  input [4:0]s_axi_data_AWADDR;
  input s_axi_data_AWVALID;
  output s_axi_data_AWREADY;
  input [31:0]s_axi_data_WDATA;
  input [3:0]s_axi_data_WSTRB;
  input s_axi_data_WVALID;
  output s_axi_data_WREADY;
  output [1:0]s_axi_data_BRESP;
  output s_axi_data_BVALID;
  input s_axi_data_BREADY;
  input [4:0]s_axi_data_ARADDR;
  input s_axi_data_ARVALID;
  output s_axi_data_ARREADY;
  output [31:0]s_axi_data_RDATA;
  output [1:0]s_axi_data_RRESP;
  output s_axi_data_RVALID;
  input s_axi_data_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
endmodule
