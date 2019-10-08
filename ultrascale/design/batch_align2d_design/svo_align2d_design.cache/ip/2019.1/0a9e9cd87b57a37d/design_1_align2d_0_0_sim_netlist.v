// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (lin64) Build 2552052 Fri May 24 14:47:09 MDT 2019
// Date        : Thu Oct  3 19:08:50 2019
// Host        : davide-X550CL running 64-bit Ubuntu 18.04.2 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_align2d_0_0_sim_netlist.v
// Design      : design_1_align2d_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xczu9eg-ffvb1156-2-e
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* C_S_AXI_CTRL_ADDR_WIDTH = "4" *) (* C_S_AXI_CTRL_DATA_WIDTH = "32" *) (* C_S_AXI_CTRL_WSTRB_WIDTH = "4" *) 
(* C_S_AXI_DATA_ADDR_WIDTH = "5" *) (* C_S_AXI_DATA_DATA_WIDTH = "32" *) (* C_S_AXI_DATA_WIDTH = "32" *) 
(* C_S_AXI_DATA_WSTRB_WIDTH = "4" *) (* C_S_AXI_WSTRB_WIDTH = "4" *) (* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d
   (s_axi_ctrl_AWVALID,
    s_axi_ctrl_AWREADY,
    s_axi_ctrl_AWADDR,
    s_axi_ctrl_WVALID,
    s_axi_ctrl_WREADY,
    s_axi_ctrl_WDATA,
    s_axi_ctrl_WSTRB,
    s_axi_ctrl_ARVALID,
    s_axi_ctrl_ARREADY,
    s_axi_ctrl_ARADDR,
    s_axi_ctrl_RVALID,
    s_axi_ctrl_RREADY,
    s_axi_ctrl_RDATA,
    s_axi_ctrl_RRESP,
    s_axi_ctrl_BVALID,
    s_axi_ctrl_BREADY,
    s_axi_ctrl_BRESP,
    ap_clk,
    ap_rst_n,
    interrupt,
    s_axi_data_AWVALID,
    s_axi_data_AWREADY,
    s_axi_data_AWADDR,
    s_axi_data_WVALID,
    s_axi_data_WREADY,
    s_axi_data_WDATA,
    s_axi_data_WSTRB,
    s_axi_data_ARVALID,
    s_axi_data_ARREADY,
    s_axi_data_ARADDR,
    s_axi_data_RVALID,
    s_axi_data_RREADY,
    s_axi_data_RDATA,
    s_axi_data_RRESP,
    s_axi_data_BVALID,
    s_axi_data_BREADY,
    s_axi_data_BRESP);
  input s_axi_ctrl_AWVALID;
  output s_axi_ctrl_AWREADY;
  input [3:0]s_axi_ctrl_AWADDR;
  input s_axi_ctrl_WVALID;
  output s_axi_ctrl_WREADY;
  input [31:0]s_axi_ctrl_WDATA;
  input [3:0]s_axi_ctrl_WSTRB;
  input s_axi_ctrl_ARVALID;
  output s_axi_ctrl_ARREADY;
  input [3:0]s_axi_ctrl_ARADDR;
  output s_axi_ctrl_RVALID;
  input s_axi_ctrl_RREADY;
  output [31:0]s_axi_ctrl_RDATA;
  output [1:0]s_axi_ctrl_RRESP;
  output s_axi_ctrl_BVALID;
  input s_axi_ctrl_BREADY;
  output [1:0]s_axi_ctrl_BRESP;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  input s_axi_data_AWVALID;
  output s_axi_data_AWREADY;
  input [4:0]s_axi_data_AWADDR;
  input s_axi_data_WVALID;
  output s_axi_data_WREADY;
  input [31:0]s_axi_data_WDATA;
  input [3:0]s_axi_data_WSTRB;
  input s_axi_data_ARVALID;
  output s_axi_data_ARREADY;
  input [4:0]s_axi_data_ARADDR;
  output s_axi_data_RVALID;
  input s_axi_data_RREADY;
  output [31:0]s_axi_data_RDATA;
  output [1:0]s_axi_data_RRESP;
  output s_axi_data_BVALID;
  input s_axi_data_BREADY;
  output [1:0]s_axi_data_BRESP;

  wire \<const0> ;
  wire ap_clk;
  wire ap_done;
  wire ap_rst_n;
  wire ap_rst_n_inv;
  wire interrupt;
  wire [3:0]s_axi_ctrl_ARADDR;
  wire s_axi_ctrl_ARREADY;
  wire s_axi_ctrl_ARVALID;
  wire [3:0]s_axi_ctrl_AWADDR;
  wire s_axi_ctrl_AWREADY;
  wire s_axi_ctrl_AWVALID;
  wire s_axi_ctrl_BREADY;
  wire s_axi_ctrl_BVALID;
  wire [7:0]\^s_axi_ctrl_RDATA ;
  wire s_axi_ctrl_RREADY;
  wire s_axi_ctrl_RVALID;
  wire [31:0]s_axi_ctrl_WDATA;
  wire s_axi_ctrl_WREADY;
  wire [3:0]s_axi_ctrl_WSTRB;
  wire s_axi_ctrl_WVALID;
  wire [4:0]s_axi_data_ARADDR;
  wire s_axi_data_ARREADY;
  wire s_axi_data_ARVALID;
  wire [4:0]s_axi_data_AWADDR;
  wire s_axi_data_AWREADY;
  wire s_axi_data_AWVALID;
  wire s_axi_data_BREADY;
  wire s_axi_data_BVALID;
  wire [31:0]s_axi_data_RDATA;
  wire s_axi_data_RREADY;
  wire s_axi_data_RVALID;
  wire [31:0]s_axi_data_WDATA;
  wire s_axi_data_WREADY;
  wire [3:0]s_axi_data_WSTRB;
  wire s_axi_data_WVALID;

  assign s_axi_ctrl_BRESP[1] = \<const0> ;
  assign s_axi_ctrl_BRESP[0] = \<const0> ;
  assign s_axi_ctrl_RDATA[31] = \<const0> ;
  assign s_axi_ctrl_RDATA[30] = \<const0> ;
  assign s_axi_ctrl_RDATA[29] = \<const0> ;
  assign s_axi_ctrl_RDATA[28] = \<const0> ;
  assign s_axi_ctrl_RDATA[27] = \<const0> ;
  assign s_axi_ctrl_RDATA[26] = \<const0> ;
  assign s_axi_ctrl_RDATA[25] = \<const0> ;
  assign s_axi_ctrl_RDATA[24] = \<const0> ;
  assign s_axi_ctrl_RDATA[23] = \<const0> ;
  assign s_axi_ctrl_RDATA[22] = \<const0> ;
  assign s_axi_ctrl_RDATA[21] = \<const0> ;
  assign s_axi_ctrl_RDATA[20] = \<const0> ;
  assign s_axi_ctrl_RDATA[19] = \<const0> ;
  assign s_axi_ctrl_RDATA[18] = \<const0> ;
  assign s_axi_ctrl_RDATA[17] = \<const0> ;
  assign s_axi_ctrl_RDATA[16] = \<const0> ;
  assign s_axi_ctrl_RDATA[15] = \<const0> ;
  assign s_axi_ctrl_RDATA[14] = \<const0> ;
  assign s_axi_ctrl_RDATA[13] = \<const0> ;
  assign s_axi_ctrl_RDATA[12] = \<const0> ;
  assign s_axi_ctrl_RDATA[11] = \<const0> ;
  assign s_axi_ctrl_RDATA[10] = \<const0> ;
  assign s_axi_ctrl_RDATA[9] = \<const0> ;
  assign s_axi_ctrl_RDATA[8] = \<const0> ;
  assign s_axi_ctrl_RDATA[7] = \^s_axi_ctrl_RDATA [7];
  assign s_axi_ctrl_RDATA[6] = \<const0> ;
  assign s_axi_ctrl_RDATA[5] = \<const0> ;
  assign s_axi_ctrl_RDATA[4] = \<const0> ;
  assign s_axi_ctrl_RDATA[3:0] = \^s_axi_ctrl_RDATA [3:0];
  assign s_axi_ctrl_RRESP[1] = \<const0> ;
  assign s_axi_ctrl_RRESP[0] = \<const0> ;
  assign s_axi_data_BRESP[1] = \<const0> ;
  assign s_axi_data_BRESP[0] = \<const0> ;
  assign s_axi_data_RRESP[1] = \<const0> ;
  assign s_axi_data_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi align2d_ctrl_s_axi_U
       (.\FSM_onehot_rstate_reg[1]_0 (s_axi_ctrl_ARREADY),
        .\FSM_onehot_wstate_reg[1]_0 (s_axi_ctrl_AWREADY),
        .\FSM_onehot_wstate_reg[2]_0 (s_axi_ctrl_WREADY),
        .Q(ap_done),
        .SR(ap_rst_n_inv),
        .ap_clk(ap_clk),
        .interrupt(interrupt),
        .s_axi_ctrl_ARADDR(s_axi_ctrl_ARADDR),
        .s_axi_ctrl_ARVALID(s_axi_ctrl_ARVALID),
        .s_axi_ctrl_AWADDR(s_axi_ctrl_AWADDR),
        .s_axi_ctrl_AWVALID(s_axi_ctrl_AWVALID),
        .s_axi_ctrl_BREADY(s_axi_ctrl_BREADY),
        .s_axi_ctrl_BVALID(s_axi_ctrl_BVALID),
        .s_axi_ctrl_RDATA({\^s_axi_ctrl_RDATA [7],\^s_axi_ctrl_RDATA [3:0]}),
        .s_axi_ctrl_RREADY(s_axi_ctrl_RREADY),
        .s_axi_ctrl_RVALID(s_axi_ctrl_RVALID),
        .s_axi_ctrl_WDATA({s_axi_ctrl_WDATA[7],s_axi_ctrl_WDATA[0]}),
        .s_axi_ctrl_WSTRB(s_axi_ctrl_WSTRB[0]),
        .s_axi_ctrl_WVALID(s_axi_ctrl_WVALID));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi align2d_data_s_axi_U
       (.E(ap_done),
        .\FSM_onehot_rstate_reg[1]_0 (s_axi_data_ARREADY),
        .\FSM_onehot_wstate_reg[1]_0 (s_axi_data_AWREADY),
        .\FSM_onehot_wstate_reg[2]_0 (s_axi_data_WREADY),
        .SR(ap_rst_n_inv),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .s_axi_data_ARADDR(s_axi_data_ARADDR),
        .s_axi_data_ARVALID(s_axi_data_ARVALID),
        .s_axi_data_AWADDR(s_axi_data_AWADDR),
        .s_axi_data_AWVALID(s_axi_data_AWVALID),
        .s_axi_data_BREADY(s_axi_data_BREADY),
        .s_axi_data_BVALID(s_axi_data_BVALID),
        .s_axi_data_RDATA(s_axi_data_RDATA),
        .s_axi_data_RREADY(s_axi_data_RREADY),
        .s_axi_data_RVALID(s_axi_data_RVALID),
        .s_axi_data_WDATA(s_axi_data_WDATA),
        .s_axi_data_WSTRB(s_axi_data_WSTRB),
        .s_axi_data_WVALID(s_axi_data_WVALID));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi
   (Q,
    \FSM_onehot_rstate_reg[1]_0 ,
    \FSM_onehot_wstate_reg[2]_0 ,
    interrupt,
    s_axi_ctrl_BVALID,
    \FSM_onehot_wstate_reg[1]_0 ,
    s_axi_ctrl_RVALID,
    s_axi_ctrl_RDATA,
    SR,
    ap_clk,
    s_axi_ctrl_ARVALID,
    s_axi_ctrl_WSTRB,
    s_axi_ctrl_WVALID,
    s_axi_ctrl_BREADY,
    s_axi_ctrl_AWVALID,
    s_axi_ctrl_RREADY,
    s_axi_ctrl_ARADDR,
    s_axi_ctrl_WDATA,
    s_axi_ctrl_AWADDR);
  output Q;
  output \FSM_onehot_rstate_reg[1]_0 ;
  output \FSM_onehot_wstate_reg[2]_0 ;
  output interrupt;
  output s_axi_ctrl_BVALID;
  output \FSM_onehot_wstate_reg[1]_0 ;
  output s_axi_ctrl_RVALID;
  output [4:0]s_axi_ctrl_RDATA;
  input [0:0]SR;
  input ap_clk;
  input s_axi_ctrl_ARVALID;
  input [0:0]s_axi_ctrl_WSTRB;
  input s_axi_ctrl_WVALID;
  input s_axi_ctrl_BREADY;
  input s_axi_ctrl_AWVALID;
  input s_axi_ctrl_RREADY;
  input [3:0]s_axi_ctrl_ARADDR;
  input [1:0]s_axi_ctrl_WDATA;
  input [3:0]s_axi_ctrl_AWADDR;

  wire \FSM_onehot_rstate[1]_i_1_n_0 ;
  wire \FSM_onehot_rstate[2]_i_1_n_0 ;
  wire \FSM_onehot_rstate_reg[1]_0 ;
  wire \FSM_onehot_wstate[1]_i_2_n_0 ;
  wire \FSM_onehot_wstate[2]_i_1_n_0 ;
  wire \FSM_onehot_wstate[3]_i_1_n_0 ;
  wire \FSM_onehot_wstate_reg[1]_0 ;
  wire \FSM_onehot_wstate_reg[2]_0 ;
  wire Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ar_hs;
  wire int_ap_done;
  wire int_ap_done_i_1_n_0;
  wire int_ap_done_i_2_n_0;
  wire int_ap_idle;
  wire int_ap_ready;
  wire int_ap_start_i_1_n_0;
  wire int_ap_start_i_2_n_0;
  wire int_auto_restart_i_1_n_0;
  wire int_gie_i_1_n_0;
  wire int_gie_reg_n_0;
  wire int_ier;
  wire int_ier_i_1_n_0;
  wire int_isr5_out;
  wire int_isr_i_1_n_0;
  wire interrupt;
  wire interrupt0;
  wire [7:7]p_0_in;
  wire \rdata[0]_i_1_n_0 ;
  wire \rdata[0]_i_2__0_n_0 ;
  wire \rdata[7]_i_1__0_n_0 ;
  wire [3:0]s_axi_ctrl_ARADDR;
  wire s_axi_ctrl_ARVALID;
  wire [3:0]s_axi_ctrl_AWADDR;
  wire s_axi_ctrl_AWVALID;
  wire s_axi_ctrl_BREADY;
  wire s_axi_ctrl_BVALID;
  wire [4:0]s_axi_ctrl_RDATA;
  wire s_axi_ctrl_RREADY;
  wire s_axi_ctrl_RVALID;
  wire [1:0]s_axi_ctrl_WDATA;
  wire [0:0]s_axi_ctrl_WSTRB;
  wire s_axi_ctrl_WVALID;
  wire waddr;
  wire \waddr_reg_n_0_[0] ;
  wire \waddr_reg_n_0_[1] ;
  wire \waddr_reg_n_0_[2] ;
  wire \waddr_reg_n_0_[3] ;

  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hF727)) 
    \FSM_onehot_rstate[1]_i_1 
       (.I0(\FSM_onehot_rstate_reg[1]_0 ),
        .I1(s_axi_ctrl_ARVALID),
        .I2(s_axi_ctrl_RVALID),
        .I3(s_axi_ctrl_RREADY),
        .O(\FSM_onehot_rstate[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hF222)) 
    \FSM_onehot_rstate[2]_i_1 
       (.I0(s_axi_ctrl_RVALID),
        .I1(s_axi_ctrl_RREADY),
        .I2(s_axi_ctrl_ARVALID),
        .I3(\FSM_onehot_rstate_reg[1]_0 ),
        .O(\FSM_onehot_rstate[2]_i_1_n_0 ));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[1]_i_1_n_0 ),
        .Q(\FSM_onehot_rstate_reg[1]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[2]_i_1_n_0 ),
        .Q(s_axi_ctrl_RVALID),
        .R(SR));
  LUT5 #(
    .INIT(32'hFF0C1D1D)) 
    \FSM_onehot_wstate[1]_i_2 
       (.I0(\FSM_onehot_wstate_reg[2]_0 ),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .I2(s_axi_ctrl_AWVALID),
        .I3(s_axi_ctrl_BREADY),
        .I4(s_axi_ctrl_BVALID),
        .O(\FSM_onehot_wstate[1]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'h8F88)) 
    \FSM_onehot_wstate[2]_i_1 
       (.I0(s_axi_ctrl_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .I2(s_axi_ctrl_WVALID),
        .I3(\FSM_onehot_wstate_reg[2]_0 ),
        .O(\FSM_onehot_wstate[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h8F88)) 
    \FSM_onehot_wstate[3]_i_1 
       (.I0(s_axi_ctrl_WVALID),
        .I1(\FSM_onehot_wstate_reg[2]_0 ),
        .I2(s_axi_ctrl_BREADY),
        .I3(s_axi_ctrl_BVALID),
        .O(\FSM_onehot_wstate[3]_i_1_n_0 ));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[1]_i_2_n_0 ),
        .Q(\FSM_onehot_wstate_reg[1]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[2]_i_1_n_0 ),
        .Q(\FSM_onehot_wstate_reg[2]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[3]_i_1_n_0 ),
        .Q(s_axi_ctrl_BVALID),
        .R(SR));
  LUT5 #(
    .INIT(32'hFF7FFF00)) 
    int_ap_done_i_1
       (.I0(s_axi_ctrl_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .I2(int_ap_done_i_2_n_0),
        .I3(Q),
        .I4(int_ap_done),
        .O(int_ap_done_i_1_n_0));
  LUT4 #(
    .INIT(16'h0001)) 
    int_ap_done_i_2
       (.I0(s_axi_ctrl_ARADDR[1]),
        .I1(s_axi_ctrl_ARADDR[0]),
        .I2(s_axi_ctrl_ARADDR[3]),
        .I3(s_axi_ctrl_ARADDR[2]),
        .O(int_ap_done_i_2_n_0));
  FDRE #(
    .INIT(1'b0)) 
    int_ap_done_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_ap_done_i_1_n_0),
        .Q(int_ap_done),
        .R(SR));
  FDRE int_ap_idle_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(1'b1),
        .Q(int_ap_idle),
        .R(SR));
  FDRE int_ap_ready_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(Q),
        .Q(int_ap_ready),
        .R(SR));
  LUT6 #(
    .INIT(64'h888F888888888888)) 
    int_ap_start_i_1
       (.I0(Q),
        .I1(p_0_in),
        .I2(\waddr_reg_n_0_[3] ),
        .I3(\waddr_reg_n_0_[2] ),
        .I4(int_ap_start_i_2_n_0),
        .I5(s_axi_ctrl_WDATA[0]),
        .O(int_ap_start_i_1_n_0));
  LUT5 #(
    .INIT(32'h00000080)) 
    int_ap_start_i_2
       (.I0(s_axi_ctrl_WSTRB),
        .I1(s_axi_ctrl_WVALID),
        .I2(\FSM_onehot_wstate_reg[2]_0 ),
        .I3(\waddr_reg_n_0_[0] ),
        .I4(\waddr_reg_n_0_[1] ),
        .O(int_ap_start_i_2_n_0));
  FDRE #(
    .INIT(1'b0)) 
    int_ap_start_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_ap_start_i_1_n_0),
        .Q(Q),
        .R(SR));
  LUT5 #(
    .INIT(32'hFEFF0200)) 
    int_auto_restart_i_1
       (.I0(s_axi_ctrl_WDATA[1]),
        .I1(\waddr_reg_n_0_[3] ),
        .I2(\waddr_reg_n_0_[2] ),
        .I3(int_ap_start_i_2_n_0),
        .I4(p_0_in),
        .O(int_auto_restart_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    int_auto_restart_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_auto_restart_i_1_n_0),
        .Q(p_0_in),
        .R(SR));
  LUT5 #(
    .INIT(32'hEFFF2000)) 
    int_gie_i_1
       (.I0(s_axi_ctrl_WDATA[0]),
        .I1(\waddr_reg_n_0_[3] ),
        .I2(\waddr_reg_n_0_[2] ),
        .I3(int_ap_start_i_2_n_0),
        .I4(int_gie_reg_n_0),
        .O(int_gie_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    int_gie_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_gie_i_1_n_0),
        .Q(int_gie_reg_n_0),
        .R(SR));
  LUT5 #(
    .INIT(32'hEFFF2000)) 
    int_ier_i_1
       (.I0(s_axi_ctrl_WDATA[0]),
        .I1(\waddr_reg_n_0_[2] ),
        .I2(\waddr_reg_n_0_[3] ),
        .I3(int_ap_start_i_2_n_0),
        .I4(int_ier),
        .O(int_ier_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    int_ier_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_ier_i_1_n_0),
        .Q(int_ier),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFF7FFFFFFF8000)) 
    int_isr_i_1
       (.I0(s_axi_ctrl_WDATA[0]),
        .I1(int_ap_start_i_2_n_0),
        .I2(\waddr_reg_n_0_[2] ),
        .I3(\waddr_reg_n_0_[3] ),
        .I4(int_isr5_out),
        .I5(interrupt0),
        .O(int_isr_i_1_n_0));
  LUT2 #(
    .INIT(4'h8)) 
    int_isr_i_2
       (.I0(Q),
        .I1(int_ier),
        .O(int_isr5_out));
  FDRE #(
    .INIT(1'b0)) 
    int_isr_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_isr_i_1_n_0),
        .Q(interrupt0),
        .R(SR));
  LUT2 #(
    .INIT(4'h8)) 
    interrupt_INST_0
       (.I0(interrupt0),
        .I1(int_gie_reg_n_0),
        .O(interrupt));
  LUT6 #(
    .INIT(64'h10FFFFFF10000000)) 
    \rdata[0]_i_1 
       (.I0(s_axi_ctrl_ARADDR[1]),
        .I1(s_axi_ctrl_ARADDR[0]),
        .I2(\rdata[0]_i_2__0_n_0 ),
        .I3(s_axi_ctrl_ARVALID),
        .I4(\FSM_onehot_rstate_reg[1]_0 ),
        .I5(s_axi_ctrl_RDATA[0]),
        .O(\rdata[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hCFCFAFA0C0C0AFA0)) 
    \rdata[0]_i_2__0 
       (.I0(int_ier),
        .I1(interrupt0),
        .I2(s_axi_ctrl_ARADDR[3]),
        .I3(Q),
        .I4(s_axi_ctrl_ARADDR[2]),
        .I5(int_gie_reg_n_0),
        .O(\rdata[0]_i_2__0_n_0 ));
  LUT6 #(
    .INIT(64'h8888888888888880)) 
    \rdata[7]_i_1__0 
       (.I0(\FSM_onehot_rstate_reg[1]_0 ),
        .I1(s_axi_ctrl_ARVALID),
        .I2(s_axi_ctrl_ARADDR[2]),
        .I3(s_axi_ctrl_ARADDR[3]),
        .I4(s_axi_ctrl_ARADDR[0]),
        .I5(s_axi_ctrl_ARADDR[1]),
        .O(\rdata[7]_i_1__0_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \rdata[7]_i_2 
       (.I0(s_axi_ctrl_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .O(ar_hs));
  FDRE \rdata_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\rdata[0]_i_1_n_0 ),
        .Q(s_axi_ctrl_RDATA[0]),
        .R(1'b0));
  FDRE \rdata_reg[1] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(int_ap_done),
        .Q(s_axi_ctrl_RDATA[1]),
        .R(\rdata[7]_i_1__0_n_0 ));
  FDRE \rdata_reg[2] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(int_ap_idle),
        .Q(s_axi_ctrl_RDATA[2]),
        .R(\rdata[7]_i_1__0_n_0 ));
  FDRE \rdata_reg[3] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(int_ap_ready),
        .Q(s_axi_ctrl_RDATA[3]),
        .R(\rdata[7]_i_1__0_n_0 ));
  FDRE \rdata_reg[7] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(p_0_in),
        .Q(s_axi_ctrl_RDATA[4]),
        .R(\rdata[7]_i_1__0_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[3]_i_1 
       (.I0(\FSM_onehot_wstate_reg[1]_0 ),
        .I1(s_axi_ctrl_AWVALID),
        .O(waddr));
  FDRE \waddr_reg[0] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_ctrl_AWADDR[0]),
        .Q(\waddr_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \waddr_reg[1] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_ctrl_AWADDR[1]),
        .Q(\waddr_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \waddr_reg[2] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_ctrl_AWADDR[2]),
        .Q(\waddr_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \waddr_reg[3] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_ctrl_AWADDR[3]),
        .Q(\waddr_reg_n_0_[3] ),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi
   (SR,
    \FSM_onehot_rstate_reg[1]_0 ,
    s_axi_data_RVALID,
    s_axi_data_BVALID,
    \FSM_onehot_wstate_reg[2]_0 ,
    \FSM_onehot_wstate_reg[1]_0 ,
    s_axi_data_RDATA,
    ap_clk,
    s_axi_data_ARVALID,
    s_axi_data_ARADDR,
    s_axi_data_RREADY,
    s_axi_data_WDATA,
    s_axi_data_WSTRB,
    ap_rst_n,
    E,
    s_axi_data_AWADDR,
    s_axi_data_AWVALID,
    s_axi_data_BREADY,
    s_axi_data_WVALID);
  output [0:0]SR;
  output \FSM_onehot_rstate_reg[1]_0 ;
  output s_axi_data_RVALID;
  output s_axi_data_BVALID;
  output \FSM_onehot_wstate_reg[2]_0 ;
  output \FSM_onehot_wstate_reg[1]_0 ;
  output [31:0]s_axi_data_RDATA;
  input ap_clk;
  input s_axi_data_ARVALID;
  input [4:0]s_axi_data_ARADDR;
  input s_axi_data_RREADY;
  input [31:0]s_axi_data_WDATA;
  input [3:0]s_axi_data_WSTRB;
  input ap_rst_n;
  input [0:0]E;
  input [4:0]s_axi_data_AWADDR;
  input s_axi_data_AWVALID;
  input s_axi_data_BREADY;
  input s_axi_data_WVALID;

  wire [0:0]E;
  wire \FSM_onehot_rstate[1]_i_1__0_n_0 ;
  wire \FSM_onehot_rstate[2]_i_1__0_n_0 ;
  wire \FSM_onehot_rstate_reg[1]_0 ;
  wire \FSM_onehot_wstate[1]_i_1_n_0 ;
  wire \FSM_onehot_wstate[2]_i_1__0_n_0 ;
  wire \FSM_onehot_wstate[3]_i_1__0_n_0 ;
  wire \FSM_onehot_wstate_reg[1]_0 ;
  wire \FSM_onehot_wstate_reg[2]_0 ;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire ar_hs;
  wire \int_value_r_i[0]_i_1_n_0 ;
  wire \int_value_r_i[10]_i_1_n_0 ;
  wire \int_value_r_i[11]_i_1_n_0 ;
  wire \int_value_r_i[12]_i_1_n_0 ;
  wire \int_value_r_i[13]_i_1_n_0 ;
  wire \int_value_r_i[14]_i_1_n_0 ;
  wire \int_value_r_i[15]_i_1_n_0 ;
  wire \int_value_r_i[16]_i_1_n_0 ;
  wire \int_value_r_i[17]_i_1_n_0 ;
  wire \int_value_r_i[18]_i_1_n_0 ;
  wire \int_value_r_i[19]_i_1_n_0 ;
  wire \int_value_r_i[1]_i_1_n_0 ;
  wire \int_value_r_i[20]_i_1_n_0 ;
  wire \int_value_r_i[21]_i_1_n_0 ;
  wire \int_value_r_i[22]_i_1_n_0 ;
  wire \int_value_r_i[23]_i_1_n_0 ;
  wire \int_value_r_i[24]_i_1_n_0 ;
  wire \int_value_r_i[25]_i_1_n_0 ;
  wire \int_value_r_i[26]_i_1_n_0 ;
  wire \int_value_r_i[27]_i_1_n_0 ;
  wire \int_value_r_i[28]_i_1_n_0 ;
  wire \int_value_r_i[29]_i_1_n_0 ;
  wire \int_value_r_i[2]_i_1_n_0 ;
  wire \int_value_r_i[30]_i_1_n_0 ;
  wire \int_value_r_i[31]_i_2_n_0 ;
  wire \int_value_r_i[31]_i_3_n_0 ;
  wire \int_value_r_i[3]_i_1_n_0 ;
  wire \int_value_r_i[4]_i_1_n_0 ;
  wire \int_value_r_i[5]_i_1_n_0 ;
  wire \int_value_r_i[6]_i_1_n_0 ;
  wire \int_value_r_i[7]_i_1_n_0 ;
  wire \int_value_r_i[8]_i_1_n_0 ;
  wire \int_value_r_i[9]_i_1_n_0 ;
  wire [31:1]int_value_r_o;
  wire int_value_r_o_ap_vld;
  wire int_value_r_o_ap_vld_i_1_n_0;
  wire p_0_in;
  wire \rdata[0]_i_1_n_0 ;
  wire \rdata[0]_i_2_n_0 ;
  wire \rdata[10]_i_1_n_0 ;
  wire \rdata[11]_i_1_n_0 ;
  wire \rdata[12]_i_1_n_0 ;
  wire \rdata[13]_i_1_n_0 ;
  wire \rdata[14]_i_1_n_0 ;
  wire \rdata[15]_i_1_n_0 ;
  wire \rdata[16]_i_1_n_0 ;
  wire \rdata[17]_i_1_n_0 ;
  wire \rdata[18]_i_1_n_0 ;
  wire \rdata[19]_i_1_n_0 ;
  wire \rdata[1]_i_1_n_0 ;
  wire \rdata[20]_i_1_n_0 ;
  wire \rdata[21]_i_1_n_0 ;
  wire \rdata[22]_i_1_n_0 ;
  wire \rdata[23]_i_1_n_0 ;
  wire \rdata[24]_i_1_n_0 ;
  wire \rdata[25]_i_1_n_0 ;
  wire \rdata[26]_i_1_n_0 ;
  wire \rdata[27]_i_1_n_0 ;
  wire \rdata[28]_i_1_n_0 ;
  wire \rdata[29]_i_1_n_0 ;
  wire \rdata[2]_i_1_n_0 ;
  wire \rdata[30]_i_1_n_0 ;
  wire \rdata[31]_i_2_n_0 ;
  wire \rdata[31]_i_3_n_0 ;
  wire \rdata[31]_i_4_n_0 ;
  wire \rdata[3]_i_1_n_0 ;
  wire \rdata[4]_i_1_n_0 ;
  wire \rdata[5]_i_1_n_0 ;
  wire \rdata[6]_i_1_n_0 ;
  wire \rdata[7]_i_1_n_0 ;
  wire \rdata[8]_i_1_n_0 ;
  wire \rdata[9]_i_1_n_0 ;
  wire [4:0]s_axi_data_ARADDR;
  wire s_axi_data_ARVALID;
  wire [4:0]s_axi_data_AWADDR;
  wire s_axi_data_AWVALID;
  wire s_axi_data_BREADY;
  wire s_axi_data_BVALID;
  wire [31:0]s_axi_data_RDATA;
  wire s_axi_data_RREADY;
  wire s_axi_data_RVALID;
  wire [31:0]s_axi_data_WDATA;
  wire [3:0]s_axi_data_WSTRB;
  wire s_axi_data_WVALID;
  wire [31:0]value_r_i;
  wire waddr;
  wire \waddr_reg_n_0_[0] ;
  wire \waddr_reg_n_0_[1] ;
  wire \waddr_reg_n_0_[2] ;
  wire \waddr_reg_n_0_[3] ;
  wire \waddr_reg_n_0_[4] ;

  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'hF277)) 
    \FSM_onehot_rstate[1]_i_1__0 
       (.I0(\FSM_onehot_rstate_reg[1]_0 ),
        .I1(s_axi_data_ARVALID),
        .I2(s_axi_data_RREADY),
        .I3(s_axi_data_RVALID),
        .O(\FSM_onehot_rstate[1]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'hF444)) 
    \FSM_onehot_rstate[2]_i_1__0 
       (.I0(s_axi_data_RREADY),
        .I1(s_axi_data_RVALID),
        .I2(s_axi_data_ARVALID),
        .I3(\FSM_onehot_rstate_reg[1]_0 ),
        .O(\FSM_onehot_rstate[2]_i_1__0_n_0 ));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[1]_i_1__0_n_0 ),
        .Q(\FSM_onehot_rstate_reg[1]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "RDIDLE:010,RDDATA:100,iSTATE:001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_rstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_rstate[2]_i_1__0_n_0 ),
        .Q(s_axi_data_RVALID),
        .R(SR));
  LUT5 #(
    .INIT(32'h888BFF8B)) 
    \FSM_onehot_wstate[1]_i_1 
       (.I0(s_axi_data_BREADY),
        .I1(s_axi_data_BVALID),
        .I2(\FSM_onehot_wstate_reg[2]_0 ),
        .I3(\FSM_onehot_wstate_reg[1]_0 ),
        .I4(s_axi_data_AWVALID),
        .O(\FSM_onehot_wstate[1]_i_1_n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \FSM_onehot_wstate[1]_i_1__0 
       (.I0(ap_rst_n),
        .O(SR));
  LUT4 #(
    .INIT(16'h8F88)) 
    \FSM_onehot_wstate[2]_i_1__0 
       (.I0(s_axi_data_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .I2(s_axi_data_WVALID),
        .I3(\FSM_onehot_wstate_reg[2]_0 ),
        .O(\FSM_onehot_wstate[2]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h8F88)) 
    \FSM_onehot_wstate[3]_i_1__0 
       (.I0(s_axi_data_WVALID),
        .I1(\FSM_onehot_wstate_reg[2]_0 ),
        .I2(s_axi_data_BREADY),
        .I3(s_axi_data_BVALID),
        .O(\FSM_onehot_wstate[3]_i_1__0_n_0 ));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[1]_i_1_n_0 ),
        .Q(\FSM_onehot_wstate_reg[1]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[2]_i_1__0_n_0 ),
        .Q(\FSM_onehot_wstate_reg[2]_0 ),
        .R(SR));
  (* FSM_ENCODED_STATES = "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[3]_i_1__0_n_0 ),
        .Q(s_axi_data_BVALID),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[0]_i_1 
       (.I0(s_axi_data_WDATA[0]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[0]),
        .O(\int_value_r_i[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[10]_i_1 
       (.I0(s_axi_data_WDATA[10]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[10]),
        .O(\int_value_r_i[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[11]_i_1 
       (.I0(s_axi_data_WDATA[11]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[11]),
        .O(\int_value_r_i[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[12]_i_1 
       (.I0(s_axi_data_WDATA[12]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[12]),
        .O(\int_value_r_i[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[13]_i_1 
       (.I0(s_axi_data_WDATA[13]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[13]),
        .O(\int_value_r_i[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[14]_i_1 
       (.I0(s_axi_data_WDATA[14]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[14]),
        .O(\int_value_r_i[14]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[15]_i_1 
       (.I0(s_axi_data_WDATA[15]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[15]),
        .O(\int_value_r_i[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[16]_i_1 
       (.I0(s_axi_data_WDATA[16]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[16]),
        .O(\int_value_r_i[16]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[17]_i_1 
       (.I0(s_axi_data_WDATA[17]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[17]),
        .O(\int_value_r_i[17]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[18]_i_1 
       (.I0(s_axi_data_WDATA[18]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[18]),
        .O(\int_value_r_i[18]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[19]_i_1 
       (.I0(s_axi_data_WDATA[19]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[19]),
        .O(\int_value_r_i[19]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[1]_i_1 
       (.I0(s_axi_data_WDATA[1]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[1]),
        .O(\int_value_r_i[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[20]_i_1 
       (.I0(s_axi_data_WDATA[20]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[20]),
        .O(\int_value_r_i[20]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[21]_i_1 
       (.I0(s_axi_data_WDATA[21]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[21]),
        .O(\int_value_r_i[21]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[22]_i_1 
       (.I0(s_axi_data_WDATA[22]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[22]),
        .O(\int_value_r_i[22]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[23]_i_1 
       (.I0(s_axi_data_WDATA[23]),
        .I1(s_axi_data_WSTRB[2]),
        .I2(value_r_i[23]),
        .O(\int_value_r_i[23]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[24]_i_1 
       (.I0(s_axi_data_WDATA[24]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[24]),
        .O(\int_value_r_i[24]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[25]_i_1 
       (.I0(s_axi_data_WDATA[25]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[25]),
        .O(\int_value_r_i[25]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[26]_i_1 
       (.I0(s_axi_data_WDATA[26]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[26]),
        .O(\int_value_r_i[26]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[27]_i_1 
       (.I0(s_axi_data_WDATA[27]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[27]),
        .O(\int_value_r_i[27]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[28]_i_1 
       (.I0(s_axi_data_WDATA[28]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[28]),
        .O(\int_value_r_i[28]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[29]_i_1 
       (.I0(s_axi_data_WDATA[29]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[29]),
        .O(\int_value_r_i[29]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[2]_i_1 
       (.I0(s_axi_data_WDATA[2]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[2]),
        .O(\int_value_r_i[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[30]_i_1 
       (.I0(s_axi_data_WDATA[30]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[30]),
        .O(\int_value_r_i[30]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \int_value_r_i[31]_i_1 
       (.I0(s_axi_data_WVALID),
        .I1(\int_value_r_i[31]_i_3_n_0 ),
        .O(p_0_in));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[31]_i_2 
       (.I0(s_axi_data_WDATA[31]),
        .I1(s_axi_data_WSTRB[3]),
        .I2(value_r_i[31]),
        .O(\int_value_r_i[31]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0001000000000000)) 
    \int_value_r_i[31]_i_3 
       (.I0(\waddr_reg_n_0_[0] ),
        .I1(\waddr_reg_n_0_[3] ),
        .I2(\waddr_reg_n_0_[1] ),
        .I3(\waddr_reg_n_0_[2] ),
        .I4(\waddr_reg_n_0_[4] ),
        .I5(\FSM_onehot_wstate_reg[2]_0 ),
        .O(\int_value_r_i[31]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[3]_i_1 
       (.I0(s_axi_data_WDATA[3]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[3]),
        .O(\int_value_r_i[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[4]_i_1 
       (.I0(s_axi_data_WDATA[4]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[4]),
        .O(\int_value_r_i[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[5]_i_1 
       (.I0(s_axi_data_WDATA[5]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[5]),
        .O(\int_value_r_i[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[6]_i_1 
       (.I0(s_axi_data_WDATA[6]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[6]),
        .O(\int_value_r_i[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[7]_i_1 
       (.I0(s_axi_data_WDATA[7]),
        .I1(s_axi_data_WSTRB[0]),
        .I2(value_r_i[7]),
        .O(\int_value_r_i[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[8]_i_1 
       (.I0(s_axi_data_WDATA[8]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[8]),
        .O(\int_value_r_i[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_value_r_i[9]_i_1 
       (.I0(s_axi_data_WDATA[9]),
        .I1(s_axi_data_WSTRB[1]),
        .I2(value_r_i[9]),
        .O(\int_value_r_i[9]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[0] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[0]_i_1_n_0 ),
        .Q(value_r_i[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[10] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[10]_i_1_n_0 ),
        .Q(value_r_i[10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[11] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[11]_i_1_n_0 ),
        .Q(value_r_i[11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[12] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[12]_i_1_n_0 ),
        .Q(value_r_i[12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[13] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[13]_i_1_n_0 ),
        .Q(value_r_i[13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[14] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[14]_i_1_n_0 ),
        .Q(value_r_i[14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[15] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[15]_i_1_n_0 ),
        .Q(value_r_i[15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[16] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[16]_i_1_n_0 ),
        .Q(value_r_i[16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[17] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[17]_i_1_n_0 ),
        .Q(value_r_i[17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[18] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[18]_i_1_n_0 ),
        .Q(value_r_i[18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[19] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[19]_i_1_n_0 ),
        .Q(value_r_i[19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[1] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[1]_i_1_n_0 ),
        .Q(value_r_i[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[20] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[20]_i_1_n_0 ),
        .Q(value_r_i[20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[21] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[21]_i_1_n_0 ),
        .Q(value_r_i[21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[22] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[22]_i_1_n_0 ),
        .Q(value_r_i[22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[23] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[23]_i_1_n_0 ),
        .Q(value_r_i[23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[24] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[24]_i_1_n_0 ),
        .Q(value_r_i[24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[25] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[25]_i_1_n_0 ),
        .Q(value_r_i[25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[26] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[26]_i_1_n_0 ),
        .Q(value_r_i[26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[27] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[27]_i_1_n_0 ),
        .Q(value_r_i[27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[28] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[28]_i_1_n_0 ),
        .Q(value_r_i[28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[29] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[29]_i_1_n_0 ),
        .Q(value_r_i[29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[2] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[2]_i_1_n_0 ),
        .Q(value_r_i[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[30] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[30]_i_1_n_0 ),
        .Q(value_r_i[30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[31] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[31]_i_2_n_0 ),
        .Q(value_r_i[31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[3] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[3]_i_1_n_0 ),
        .Q(value_r_i[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[4] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[4]_i_1_n_0 ),
        .Q(value_r_i[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[5] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[5]_i_1_n_0 ),
        .Q(value_r_i[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[6] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[6]_i_1_n_0 ),
        .Q(value_r_i[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[7] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[7]_i_1_n_0 ),
        .Q(value_r_i[7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[8] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[8]_i_1_n_0 ),
        .Q(value_r_i[8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_i_reg[9] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\int_value_r_i[9]_i_1_n_0 ),
        .Q(value_r_i[9]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFF7FFFFFFF0000)) 
    int_value_r_o_ap_vld_i_1
       (.I0(\rdata[0]_i_2_n_0 ),
        .I1(s_axi_data_ARADDR[3]),
        .I2(s_axi_data_ARADDR[2]),
        .I3(ar_hs),
        .I4(E),
        .I5(int_value_r_o_ap_vld),
        .O(int_value_r_o_ap_vld_i_1_n_0));
  FDRE int_value_r_o_ap_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_value_r_o_ap_vld_i_1_n_0),
        .Q(int_value_r_o_ap_vld),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[10] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[9]),
        .Q(int_value_r_o[10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[11] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[10]),
        .Q(int_value_r_o[11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[12] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[11]),
        .Q(int_value_r_o[12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[13] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[12]),
        .Q(int_value_r_o[13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[14] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[13]),
        .Q(int_value_r_o[14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[15] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[14]),
        .Q(int_value_r_o[15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[16] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[15]),
        .Q(int_value_r_o[16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[17] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[16]),
        .Q(int_value_r_o[17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[18] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[17]),
        .Q(int_value_r_o[18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[19] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[18]),
        .Q(int_value_r_o[19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[0]),
        .Q(int_value_r_o[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[20] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[19]),
        .Q(int_value_r_o[20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[21] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[20]),
        .Q(int_value_r_o[21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[22] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[21]),
        .Q(int_value_r_o[22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[23] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[22]),
        .Q(int_value_r_o[23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[24] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[23]),
        .Q(int_value_r_o[24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[25] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[24]),
        .Q(int_value_r_o[25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[26] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[25]),
        .Q(int_value_r_o[26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[27] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[26]),
        .Q(int_value_r_o[27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[28] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[27]),
        .Q(int_value_r_o[28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[29] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[28]),
        .Q(int_value_r_o[29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[1]),
        .Q(int_value_r_o[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[30] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[29]),
        .Q(int_value_r_o[30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[31] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[30]),
        .Q(int_value_r_o[31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[2]),
        .Q(int_value_r_o[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[3]),
        .Q(int_value_r_o[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[4]),
        .Q(int_value_r_o[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[5]),
        .Q(int_value_r_o[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[6]),
        .Q(int_value_r_o[7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[8] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[7]),
        .Q(int_value_r_o[8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_value_r_o_reg[9] 
       (.C(ap_clk),
        .CE(E),
        .D(value_r_i[8]),
        .Q(int_value_r_o[9]),
        .R(SR));
  LUT5 #(
    .INIT(32'hA0000C00)) 
    \rdata[0]_i_1 
       (.I0(int_value_r_o_ap_vld),
        .I1(value_r_i[0]),
        .I2(s_axi_data_ARADDR[2]),
        .I3(\rdata[0]_i_2_n_0 ),
        .I4(s_axi_data_ARADDR[3]),
        .O(\rdata[0]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h04)) 
    \rdata[0]_i_2 
       (.I0(s_axi_data_ARADDR[1]),
        .I1(s_axi_data_ARADDR[4]),
        .I2(s_axi_data_ARADDR[0]),
        .O(\rdata[0]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[10]_i_1 
       (.I0(int_value_r_o[10]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[10]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[10]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[11]_i_1 
       (.I0(int_value_r_o[11]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[11]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[11]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[12]_i_1 
       (.I0(int_value_r_o[12]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[12]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[12]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[13]_i_1 
       (.I0(int_value_r_o[13]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[13]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[13]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[14]_i_1 
       (.I0(int_value_r_o[14]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[14]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[14]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[15]_i_1 
       (.I0(int_value_r_o[15]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[15]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[15]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[16]_i_1 
       (.I0(int_value_r_o[16]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[16]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[16]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[17]_i_1 
       (.I0(int_value_r_o[17]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[17]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[17]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[18]_i_1 
       (.I0(int_value_r_o[18]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[18]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[18]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[19]_i_1 
       (.I0(int_value_r_o[19]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[19]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[19]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[1]_i_1 
       (.I0(int_value_r_o[1]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[1]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[20]_i_1 
       (.I0(int_value_r_o[20]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[20]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[20]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[21]_i_1 
       (.I0(int_value_r_o[21]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[21]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[21]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[22]_i_1 
       (.I0(int_value_r_o[22]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[22]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[22]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[23]_i_1 
       (.I0(int_value_r_o[23]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[23]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[23]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[24]_i_1 
       (.I0(int_value_r_o[24]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[24]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[24]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[25]_i_1 
       (.I0(int_value_r_o[25]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[25]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[25]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[26]_i_1 
       (.I0(int_value_r_o[26]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[26]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[26]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[27]_i_1 
       (.I0(int_value_r_o[27]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[27]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[27]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[28]_i_1 
       (.I0(int_value_r_o[28]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[28]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[28]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[29]_i_1 
       (.I0(int_value_r_o[29]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[29]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[29]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[2]_i_1 
       (.I0(int_value_r_o[2]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[2]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[2]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[30]_i_1 
       (.I0(int_value_r_o[30]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[30]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[30]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \rdata[31]_i_1 
       (.I0(s_axi_data_ARVALID),
        .I1(\FSM_onehot_rstate_reg[1]_0 ),
        .O(ar_hs));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[31]_i_2 
       (.I0(int_value_r_o[31]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[31]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[31]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'h00100000)) 
    \rdata[31]_i_3 
       (.I0(s_axi_data_ARADDR[2]),
        .I1(s_axi_data_ARADDR[1]),
        .I2(s_axi_data_ARADDR[4]),
        .I3(s_axi_data_ARADDR[0]),
        .I4(s_axi_data_ARADDR[3]),
        .O(\rdata[31]_i_3_n_0 ));
  LUT5 #(
    .INIT(32'h00000010)) 
    \rdata[31]_i_4 
       (.I0(s_axi_data_ARADDR[2]),
        .I1(s_axi_data_ARADDR[1]),
        .I2(s_axi_data_ARADDR[4]),
        .I3(s_axi_data_ARADDR[0]),
        .I4(s_axi_data_ARADDR[3]),
        .O(\rdata[31]_i_4_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[3]_i_1 
       (.I0(int_value_r_o[3]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[3]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[3]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[4]_i_1 
       (.I0(int_value_r_o[4]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[4]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[5]_i_1 
       (.I0(int_value_r_o[5]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[5]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[5]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[6]_i_1 
       (.I0(int_value_r_o[6]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[6]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[7]_i_1 
       (.I0(int_value_r_o[7]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[7]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[8]_i_1 
       (.I0(int_value_r_o[8]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[8]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[8]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'hF888)) 
    \rdata[9]_i_1 
       (.I0(int_value_r_o[9]),
        .I1(\rdata[31]_i_3_n_0 ),
        .I2(value_r_i[9]),
        .I3(\rdata[31]_i_4_n_0 ),
        .O(\rdata[9]_i_1_n_0 ));
  FDRE \rdata_reg[0] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[0]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[0]),
        .R(1'b0));
  FDRE \rdata_reg[10] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[10]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[10]),
        .R(1'b0));
  FDRE \rdata_reg[11] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[11]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[11]),
        .R(1'b0));
  FDRE \rdata_reg[12] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[12]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[12]),
        .R(1'b0));
  FDRE \rdata_reg[13] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[13]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[13]),
        .R(1'b0));
  FDRE \rdata_reg[14] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[14]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[14]),
        .R(1'b0));
  FDRE \rdata_reg[15] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[15]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[15]),
        .R(1'b0));
  FDRE \rdata_reg[16] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[16]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[16]),
        .R(1'b0));
  FDRE \rdata_reg[17] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[17]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[17]),
        .R(1'b0));
  FDRE \rdata_reg[18] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[18]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[18]),
        .R(1'b0));
  FDRE \rdata_reg[19] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[19]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[19]),
        .R(1'b0));
  FDRE \rdata_reg[1] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[1]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[1]),
        .R(1'b0));
  FDRE \rdata_reg[20] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[20]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[20]),
        .R(1'b0));
  FDRE \rdata_reg[21] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[21]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[21]),
        .R(1'b0));
  FDRE \rdata_reg[22] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[22]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[22]),
        .R(1'b0));
  FDRE \rdata_reg[23] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[23]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[23]),
        .R(1'b0));
  FDRE \rdata_reg[24] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[24]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[24]),
        .R(1'b0));
  FDRE \rdata_reg[25] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[25]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[25]),
        .R(1'b0));
  FDRE \rdata_reg[26] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[26]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[26]),
        .R(1'b0));
  FDRE \rdata_reg[27] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[27]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[27]),
        .R(1'b0));
  FDRE \rdata_reg[28] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[28]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[28]),
        .R(1'b0));
  FDRE \rdata_reg[29] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[29]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[29]),
        .R(1'b0));
  FDRE \rdata_reg[2] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[2]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[2]),
        .R(1'b0));
  FDRE \rdata_reg[30] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[30]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[30]),
        .R(1'b0));
  FDRE \rdata_reg[31] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[31]_i_2_n_0 ),
        .Q(s_axi_data_RDATA[31]),
        .R(1'b0));
  FDRE \rdata_reg[3] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[3]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[3]),
        .R(1'b0));
  FDRE \rdata_reg[4] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[4]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[4]),
        .R(1'b0));
  FDRE \rdata_reg[5] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[5]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[5]),
        .R(1'b0));
  FDRE \rdata_reg[6] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[6]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[6]),
        .R(1'b0));
  FDRE \rdata_reg[7] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[7]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[7]),
        .R(1'b0));
  FDRE \rdata_reg[8] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[8]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[8]),
        .R(1'b0));
  FDRE \rdata_reg[9] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[9]_i_1_n_0 ),
        .Q(s_axi_data_RDATA[9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[4]_i_1 
       (.I0(s_axi_data_AWVALID),
        .I1(\FSM_onehot_wstate_reg[1]_0 ),
        .O(waddr));
  FDRE \waddr_reg[0] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_data_AWADDR[0]),
        .Q(\waddr_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \waddr_reg[1] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_data_AWADDR[1]),
        .Q(\waddr_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \waddr_reg[2] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_data_AWADDR[2]),
        .Q(\waddr_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \waddr_reg[3] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_data_AWADDR[3]),
        .Q(\waddr_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \waddr_reg[4] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_data_AWADDR[4]),
        .Q(\waddr_reg_n_0_[4] ),
        .R(1'b0));
endmodule

(* CHECK_LICENSE_TYPE = "design_1_align2d_0_0,align2d,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "align2d,Vivado 2019.1" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (s_axi_ctrl_AWADDR,
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
    s_axi_data_AWADDR,
    s_axi_data_AWVALID,
    s_axi_data_AWREADY,
    s_axi_data_WDATA,
    s_axi_data_WSTRB,
    s_axi_data_WVALID,
    s_axi_data_WREADY,
    s_axi_data_BRESP,
    s_axi_data_BVALID,
    s_axi_data_BREADY,
    s_axi_data_ARADDR,
    s_axi_data_ARVALID,
    s_axi_data_ARREADY,
    s_axi_data_RDATA,
    s_axi_data_RRESP,
    s_axi_data_RVALID,
    s_axi_data_RREADY,
    ap_clk,
    ap_rst_n,
    interrupt);
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR" *) input [3:0]s_axi_ctrl_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWVALID" *) input s_axi_ctrl_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWREADY" *) output s_axi_ctrl_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WDATA" *) input [31:0]s_axi_ctrl_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WSTRB" *) input [3:0]s_axi_ctrl_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WVALID" *) input s_axi_ctrl_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WREADY" *) output s_axi_ctrl_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BRESP" *) output [1:0]s_axi_ctrl_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BVALID" *) output s_axi_ctrl_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BREADY" *) input s_axi_ctrl_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARADDR" *) input [3:0]s_axi_ctrl_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARVALID" *) input s_axi_ctrl_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARREADY" *) output s_axi_ctrl_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RDATA" *) output [31:0]s_axi_ctrl_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RRESP" *) output [1:0]s_axi_ctrl_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RVALID" *) output s_axi_ctrl_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_ctrl, ADDR_WIDTH 4, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) input s_axi_ctrl_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data AWADDR" *) input [4:0]s_axi_data_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data AWVALID" *) input s_axi_data_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data AWREADY" *) output s_axi_data_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data WDATA" *) input [31:0]s_axi_data_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data WSTRB" *) input [3:0]s_axi_data_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data WVALID" *) input s_axi_data_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data WREADY" *) output s_axi_data_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data BRESP" *) output [1:0]s_axi_data_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data BVALID" *) output s_axi_data_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data BREADY" *) input s_axi_data_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data ARADDR" *) input [4:0]s_axi_data_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data ARVALID" *) input s_axi_data_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data ARREADY" *) output s_axi_data_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data RDATA" *) output [31:0]s_axi_data_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data RRESP" *) output [1:0]s_axi_data_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data RVALID" *) output s_axi_data_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_data RREADY" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_data, ADDR_WIDTH 5, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) input s_axi_data_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_data, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input ap_rst_n;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1" *) output interrupt;

  wire ap_clk;
  wire ap_rst_n;
  wire interrupt;
  wire [3:0]s_axi_ctrl_ARADDR;
  wire s_axi_ctrl_ARREADY;
  wire s_axi_ctrl_ARVALID;
  wire [3:0]s_axi_ctrl_AWADDR;
  wire s_axi_ctrl_AWREADY;
  wire s_axi_ctrl_AWVALID;
  wire s_axi_ctrl_BREADY;
  wire [1:0]s_axi_ctrl_BRESP;
  wire s_axi_ctrl_BVALID;
  wire [31:0]s_axi_ctrl_RDATA;
  wire s_axi_ctrl_RREADY;
  wire [1:0]s_axi_ctrl_RRESP;
  wire s_axi_ctrl_RVALID;
  wire [31:0]s_axi_ctrl_WDATA;
  wire s_axi_ctrl_WREADY;
  wire [3:0]s_axi_ctrl_WSTRB;
  wire s_axi_ctrl_WVALID;
  wire [4:0]s_axi_data_ARADDR;
  wire s_axi_data_ARREADY;
  wire s_axi_data_ARVALID;
  wire [4:0]s_axi_data_AWADDR;
  wire s_axi_data_AWREADY;
  wire s_axi_data_AWVALID;
  wire s_axi_data_BREADY;
  wire [1:0]s_axi_data_BRESP;
  wire s_axi_data_BVALID;
  wire [31:0]s_axi_data_RDATA;
  wire s_axi_data_RREADY;
  wire [1:0]s_axi_data_RRESP;
  wire s_axi_data_RVALID;
  wire [31:0]s_axi_data_WDATA;
  wire s_axi_data_WREADY;
  wire [3:0]s_axi_data_WSTRB;
  wire s_axi_data_WVALID;

  (* C_S_AXI_CTRL_ADDR_WIDTH = "4" *) 
  (* C_S_AXI_CTRL_DATA_WIDTH = "32" *) 
  (* C_S_AXI_CTRL_WSTRB_WIDTH = "4" *) 
  (* C_S_AXI_DATA_ADDR_WIDTH = "5" *) 
  (* C_S_AXI_DATA_DATA_WIDTH = "32" *) 
  (* C_S_AXI_DATA_WIDTH = "32" *) 
  (* C_S_AXI_DATA_WSTRB_WIDTH = "4" *) 
  (* C_S_AXI_WSTRB_WIDTH = "4" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d inst
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .interrupt(interrupt),
        .s_axi_ctrl_ARADDR(s_axi_ctrl_ARADDR),
        .s_axi_ctrl_ARREADY(s_axi_ctrl_ARREADY),
        .s_axi_ctrl_ARVALID(s_axi_ctrl_ARVALID),
        .s_axi_ctrl_AWADDR(s_axi_ctrl_AWADDR),
        .s_axi_ctrl_AWREADY(s_axi_ctrl_AWREADY),
        .s_axi_ctrl_AWVALID(s_axi_ctrl_AWVALID),
        .s_axi_ctrl_BREADY(s_axi_ctrl_BREADY),
        .s_axi_ctrl_BRESP(s_axi_ctrl_BRESP),
        .s_axi_ctrl_BVALID(s_axi_ctrl_BVALID),
        .s_axi_ctrl_RDATA(s_axi_ctrl_RDATA),
        .s_axi_ctrl_RREADY(s_axi_ctrl_RREADY),
        .s_axi_ctrl_RRESP(s_axi_ctrl_RRESP),
        .s_axi_ctrl_RVALID(s_axi_ctrl_RVALID),
        .s_axi_ctrl_WDATA(s_axi_ctrl_WDATA),
        .s_axi_ctrl_WREADY(s_axi_ctrl_WREADY),
        .s_axi_ctrl_WSTRB(s_axi_ctrl_WSTRB),
        .s_axi_ctrl_WVALID(s_axi_ctrl_WVALID),
        .s_axi_data_ARADDR(s_axi_data_ARADDR),
        .s_axi_data_ARREADY(s_axi_data_ARREADY),
        .s_axi_data_ARVALID(s_axi_data_ARVALID),
        .s_axi_data_AWADDR(s_axi_data_AWADDR),
        .s_axi_data_AWREADY(s_axi_data_AWREADY),
        .s_axi_data_AWVALID(s_axi_data_AWVALID),
        .s_axi_data_BREADY(s_axi_data_BREADY),
        .s_axi_data_BRESP(s_axi_data_BRESP),
        .s_axi_data_BVALID(s_axi_data_BVALID),
        .s_axi_data_RDATA(s_axi_data_RDATA),
        .s_axi_data_RREADY(s_axi_data_RREADY),
        .s_axi_data_RRESP(s_axi_data_RRESP),
        .s_axi_data_RVALID(s_axi_data_RVALID),
        .s_axi_data_WDATA(s_axi_data_WDATA),
        .s_axi_data_WREADY(s_axi_data_WREADY),
        .s_axi_data_WSTRB(s_axi_data_WSTRB),
        .s_axi_data_WVALID(s_axi_data_WVALID));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
