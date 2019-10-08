-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (lin64) Build 2552052 Fri May 24 14:47:09 MDT 2019
-- Date        : Thu Oct  3 19:08:50 2019
-- Host        : davide-X550CL running 64-bit Ubuntu 18.04.2 LTS
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_align2d_0_0_stub.vhdl
-- Design      : design_1_align2d_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xczu9eg-ffvb1156-2-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_ctrl_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_AWVALID : in STD_LOGIC;
    s_axi_ctrl_AWREADY : out STD_LOGIC;
    s_axi_ctrl_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_ctrl_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_WVALID : in STD_LOGIC;
    s_axi_ctrl_WREADY : out STD_LOGIC;
    s_axi_ctrl_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_ctrl_BVALID : out STD_LOGIC;
    s_axi_ctrl_BREADY : in STD_LOGIC;
    s_axi_ctrl_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_ARVALID : in STD_LOGIC;
    s_axi_ctrl_ARREADY : out STD_LOGIC;
    s_axi_ctrl_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_ctrl_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_ctrl_RVALID : out STD_LOGIC;
    s_axi_ctrl_RREADY : in STD_LOGIC;
    s_axi_data_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_AWVALID : in STD_LOGIC;
    s_axi_data_AWREADY : out STD_LOGIC;
    s_axi_data_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_data_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_data_WVALID : in STD_LOGIC;
    s_axi_data_WREADY : out STD_LOGIC;
    s_axi_data_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_data_BVALID : out STD_LOGIC;
    s_axi_data_BREADY : in STD_LOGIC;
    s_axi_data_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_ARVALID : in STD_LOGIC;
    s_axi_data_ARREADY : out STD_LOGIC;
    s_axi_data_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_data_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_data_RVALID : out STD_LOGIC;
    s_axi_data_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_ctrl_AWADDR[3:0],s_axi_ctrl_AWVALID,s_axi_ctrl_AWREADY,s_axi_ctrl_WDATA[31:0],s_axi_ctrl_WSTRB[3:0],s_axi_ctrl_WVALID,s_axi_ctrl_WREADY,s_axi_ctrl_BRESP[1:0],s_axi_ctrl_BVALID,s_axi_ctrl_BREADY,s_axi_ctrl_ARADDR[3:0],s_axi_ctrl_ARVALID,s_axi_ctrl_ARREADY,s_axi_ctrl_RDATA[31:0],s_axi_ctrl_RRESP[1:0],s_axi_ctrl_RVALID,s_axi_ctrl_RREADY,s_axi_data_AWADDR[4:0],s_axi_data_AWVALID,s_axi_data_AWREADY,s_axi_data_WDATA[31:0],s_axi_data_WSTRB[3:0],s_axi_data_WVALID,s_axi_data_WREADY,s_axi_data_BRESP[1:0],s_axi_data_BVALID,s_axi_data_BREADY,s_axi_data_ARADDR[4:0],s_axi_data_ARVALID,s_axi_data_ARREADY,s_axi_data_RDATA[31:0],s_axi_data_RRESP[1:0],s_axi_data_RVALID,s_axi_data_RREADY,ap_clk,ap_rst_n,interrupt";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "align2d,Vivado 2019.1";
begin
end;
