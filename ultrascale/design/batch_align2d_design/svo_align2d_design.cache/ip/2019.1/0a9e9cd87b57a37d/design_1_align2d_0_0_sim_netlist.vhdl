-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (lin64) Build 2552052 Fri May 24 14:47:09 MDT 2019
-- Date        : Thu Oct  3 19:08:51 2019
-- Host        : davide-X550CL running 64-bit Ubuntu 18.04.2 LTS
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_align2d_0_0_sim_netlist.vhdl
-- Design      : design_1_align2d_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xczu9eg-ffvb1156-2-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi is
  port (
    Q : out STD_LOGIC;
    \FSM_onehot_rstate_reg[1]_0\ : out STD_LOGIC;
    \FSM_onehot_wstate_reg[2]_0\ : out STD_LOGIC;
    interrupt : out STD_LOGIC;
    s_axi_ctrl_BVALID : out STD_LOGIC;
    \FSM_onehot_wstate_reg[1]_0\ : out STD_LOGIC;
    s_axi_ctrl_RVALID : out STD_LOGIC;
    s_axi_ctrl_RDATA : out STD_LOGIC_VECTOR ( 4 downto 0 );
    SR : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    s_axi_ctrl_ARVALID : in STD_LOGIC;
    s_axi_ctrl_WSTRB : in STD_LOGIC_VECTOR ( 0 to 0 );
    s_axi_ctrl_WVALID : in STD_LOGIC;
    s_axi_ctrl_BREADY : in STD_LOGIC;
    s_axi_ctrl_AWVALID : in STD_LOGIC;
    s_axi_ctrl_RREADY : in STD_LOGIC;
    s_axi_ctrl_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_WDATA : in STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_ctrl_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi is
  signal \FSM_onehot_rstate[1]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_rstate[2]_i_1_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_rstate_reg[1]_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[1]_i_2_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[2]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[3]_i_1_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[1]_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[2]_0\ : STD_LOGIC;
  signal \^q\ : STD_LOGIC;
  signal ar_hs : STD_LOGIC;
  signal int_ap_done : STD_LOGIC;
  signal int_ap_done_i_1_n_0 : STD_LOGIC;
  signal int_ap_done_i_2_n_0 : STD_LOGIC;
  signal int_ap_idle : STD_LOGIC;
  signal int_ap_ready : STD_LOGIC;
  signal int_ap_start_i_1_n_0 : STD_LOGIC;
  signal int_ap_start_i_2_n_0 : STD_LOGIC;
  signal int_auto_restart_i_1_n_0 : STD_LOGIC;
  signal int_gie_i_1_n_0 : STD_LOGIC;
  signal int_gie_reg_n_0 : STD_LOGIC;
  signal int_ier : STD_LOGIC;
  signal int_ier_i_1_n_0 : STD_LOGIC;
  signal int_isr5_out : STD_LOGIC;
  signal int_isr_i_1_n_0 : STD_LOGIC;
  signal interrupt0 : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 7 to 7 );
  signal \rdata[0]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[0]_i_2__0_n_0\ : STD_LOGIC;
  signal \rdata[7]_i_1__0_n_0\ : STD_LOGIC;
  signal \^s_axi_ctrl_bvalid\ : STD_LOGIC;
  signal \^s_axi_ctrl_rdata\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal \^s_axi_ctrl_rvalid\ : STD_LOGIC;
  signal waddr : STD_LOGIC;
  signal \waddr_reg_n_0_[0]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[1]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[2]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[3]\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[1]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[2]_i_1\ : label is "soft_lutpair0";
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[1]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[2]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[1]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[2]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[3]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
begin
  \FSM_onehot_rstate_reg[1]_0\ <= \^fsm_onehot_rstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[1]_0\ <= \^fsm_onehot_wstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[2]_0\ <= \^fsm_onehot_wstate_reg[2]_0\;
  Q <= \^q\;
  s_axi_ctrl_BVALID <= \^s_axi_ctrl_bvalid\;
  s_axi_ctrl_RDATA(4 downto 0) <= \^s_axi_ctrl_rdata\(4 downto 0);
  s_axi_ctrl_RVALID <= \^s_axi_ctrl_rvalid\;
\FSM_onehot_rstate[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F727"
    )
        port map (
      I0 => \^fsm_onehot_rstate_reg[1]_0\,
      I1 => s_axi_ctrl_ARVALID,
      I2 => \^s_axi_ctrl_rvalid\,
      I3 => s_axi_ctrl_RREADY,
      O => \FSM_onehot_rstate[1]_i_1_n_0\
    );
\FSM_onehot_rstate[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F222"
    )
        port map (
      I0 => \^s_axi_ctrl_rvalid\,
      I1 => s_axi_ctrl_RREADY,
      I2 => s_axi_ctrl_ARVALID,
      I3 => \^fsm_onehot_rstate_reg[1]_0\,
      O => \FSM_onehot_rstate[2]_i_1_n_0\
    );
\FSM_onehot_rstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[1]_i_1_n_0\,
      Q => \^fsm_onehot_rstate_reg[1]_0\,
      R => SR(0)
    );
\FSM_onehot_rstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[2]_i_1_n_0\,
      Q => \^s_axi_ctrl_rvalid\,
      R => SR(0)
    );
\FSM_onehot_wstate[1]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FF0C1D1D"
    )
        port map (
      I0 => \^fsm_onehot_wstate_reg[2]_0\,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      I2 => s_axi_ctrl_AWVALID,
      I3 => s_axi_ctrl_BREADY,
      I4 => \^s_axi_ctrl_bvalid\,
      O => \FSM_onehot_wstate[1]_i_2_n_0\
    );
\FSM_onehot_wstate[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8F88"
    )
        port map (
      I0 => s_axi_ctrl_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      I2 => s_axi_ctrl_WVALID,
      I3 => \^fsm_onehot_wstate_reg[2]_0\,
      O => \FSM_onehot_wstate[2]_i_1_n_0\
    );
\FSM_onehot_wstate[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8F88"
    )
        port map (
      I0 => s_axi_ctrl_WVALID,
      I1 => \^fsm_onehot_wstate_reg[2]_0\,
      I2 => s_axi_ctrl_BREADY,
      I3 => \^s_axi_ctrl_bvalid\,
      O => \FSM_onehot_wstate[3]_i_1_n_0\
    );
\FSM_onehot_wstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[1]_i_2_n_0\,
      Q => \^fsm_onehot_wstate_reg[1]_0\,
      R => SR(0)
    );
\FSM_onehot_wstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[2]_i_1_n_0\,
      Q => \^fsm_onehot_wstate_reg[2]_0\,
      R => SR(0)
    );
\FSM_onehot_wstate_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[3]_i_1_n_0\,
      Q => \^s_axi_ctrl_bvalid\,
      R => SR(0)
    );
int_ap_done_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FF7FFF00"
    )
        port map (
      I0 => s_axi_ctrl_ARVALID,
      I1 => \^fsm_onehot_rstate_reg[1]_0\,
      I2 => int_ap_done_i_2_n_0,
      I3 => \^q\,
      I4 => int_ap_done,
      O => int_ap_done_i_1_n_0
    );
int_ap_done_i_2: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0001"
    )
        port map (
      I0 => s_axi_ctrl_ARADDR(1),
      I1 => s_axi_ctrl_ARADDR(0),
      I2 => s_axi_ctrl_ARADDR(3),
      I3 => s_axi_ctrl_ARADDR(2),
      O => int_ap_done_i_2_n_0
    );
int_ap_done_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_ap_done_i_1_n_0,
      Q => int_ap_done,
      R => SR(0)
    );
int_ap_idle_reg: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => '1',
      Q => int_ap_idle,
      R => SR(0)
    );
int_ap_ready_reg: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \^q\,
      Q => int_ap_ready,
      R => SR(0)
    );
int_ap_start_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"888F888888888888"
    )
        port map (
      I0 => \^q\,
      I1 => p_0_in(7),
      I2 => \waddr_reg_n_0_[3]\,
      I3 => \waddr_reg_n_0_[2]\,
      I4 => int_ap_start_i_2_n_0,
      I5 => s_axi_ctrl_WDATA(0),
      O => int_ap_start_i_1_n_0
    );
int_ap_start_i_2: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000080"
    )
        port map (
      I0 => s_axi_ctrl_WSTRB(0),
      I1 => s_axi_ctrl_WVALID,
      I2 => \^fsm_onehot_wstate_reg[2]_0\,
      I3 => \waddr_reg_n_0_[0]\,
      I4 => \waddr_reg_n_0_[1]\,
      O => int_ap_start_i_2_n_0
    );
int_ap_start_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_ap_start_i_1_n_0,
      Q => \^q\,
      R => SR(0)
    );
int_auto_restart_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FEFF0200"
    )
        port map (
      I0 => s_axi_ctrl_WDATA(1),
      I1 => \waddr_reg_n_0_[3]\,
      I2 => \waddr_reg_n_0_[2]\,
      I3 => int_ap_start_i_2_n_0,
      I4 => p_0_in(7),
      O => int_auto_restart_i_1_n_0
    );
int_auto_restart_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_auto_restart_i_1_n_0,
      Q => p_0_in(7),
      R => SR(0)
    );
int_gie_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EFFF2000"
    )
        port map (
      I0 => s_axi_ctrl_WDATA(0),
      I1 => \waddr_reg_n_0_[3]\,
      I2 => \waddr_reg_n_0_[2]\,
      I3 => int_ap_start_i_2_n_0,
      I4 => int_gie_reg_n_0,
      O => int_gie_i_1_n_0
    );
int_gie_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_gie_i_1_n_0,
      Q => int_gie_reg_n_0,
      R => SR(0)
    );
int_ier_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EFFF2000"
    )
        port map (
      I0 => s_axi_ctrl_WDATA(0),
      I1 => \waddr_reg_n_0_[2]\,
      I2 => \waddr_reg_n_0_[3]\,
      I3 => int_ap_start_i_2_n_0,
      I4 => int_ier,
      O => int_ier_i_1_n_0
    );
int_ier_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_ier_i_1_n_0,
      Q => int_ier,
      R => SR(0)
    );
int_isr_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF7FFFFFFF8000"
    )
        port map (
      I0 => s_axi_ctrl_WDATA(0),
      I1 => int_ap_start_i_2_n_0,
      I2 => \waddr_reg_n_0_[2]\,
      I3 => \waddr_reg_n_0_[3]\,
      I4 => int_isr5_out,
      I5 => interrupt0,
      O => int_isr_i_1_n_0
    );
int_isr_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^q\,
      I1 => int_ier,
      O => int_isr5_out
    );
int_isr_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => int_isr_i_1_n_0,
      Q => interrupt0,
      R => SR(0)
    );
interrupt_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => interrupt0,
      I1 => int_gie_reg_n_0,
      O => interrupt
    );
\rdata[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"10FFFFFF10000000"
    )
        port map (
      I0 => s_axi_ctrl_ARADDR(1),
      I1 => s_axi_ctrl_ARADDR(0),
      I2 => \rdata[0]_i_2__0_n_0\,
      I3 => s_axi_ctrl_ARVALID,
      I4 => \^fsm_onehot_rstate_reg[1]_0\,
      I5 => \^s_axi_ctrl_rdata\(0),
      O => \rdata[0]_i_1_n_0\
    );
\rdata[0]_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CFCFAFA0C0C0AFA0"
    )
        port map (
      I0 => int_ier,
      I1 => interrupt0,
      I2 => s_axi_ctrl_ARADDR(3),
      I3 => \^q\,
      I4 => s_axi_ctrl_ARADDR(2),
      I5 => int_gie_reg_n_0,
      O => \rdata[0]_i_2__0_n_0\
    );
\rdata[7]_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8888888888888880"
    )
        port map (
      I0 => \^fsm_onehot_rstate_reg[1]_0\,
      I1 => s_axi_ctrl_ARVALID,
      I2 => s_axi_ctrl_ARADDR(2),
      I3 => s_axi_ctrl_ARADDR(3),
      I4 => s_axi_ctrl_ARADDR(0),
      I5 => s_axi_ctrl_ARADDR(1),
      O => \rdata[7]_i_1__0_n_0\
    );
\rdata[7]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => s_axi_ctrl_ARVALID,
      I1 => \^fsm_onehot_rstate_reg[1]_0\,
      O => ar_hs
    );
\rdata_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \rdata[0]_i_1_n_0\,
      Q => \^s_axi_ctrl_rdata\(0),
      R => '0'
    );
\rdata_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => int_ap_done,
      Q => \^s_axi_ctrl_rdata\(1),
      R => \rdata[7]_i_1__0_n_0\
    );
\rdata_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => int_ap_idle,
      Q => \^s_axi_ctrl_rdata\(2),
      R => \rdata[7]_i_1__0_n_0\
    );
\rdata_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => int_ap_ready,
      Q => \^s_axi_ctrl_rdata\(3),
      R => \rdata[7]_i_1__0_n_0\
    );
\rdata_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => p_0_in(7),
      Q => \^s_axi_ctrl_rdata\(4),
      R => \rdata[7]_i_1__0_n_0\
    );
\waddr[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^fsm_onehot_wstate_reg[1]_0\,
      I1 => s_axi_ctrl_AWVALID,
      O => waddr
    );
\waddr_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_ctrl_AWADDR(0),
      Q => \waddr_reg_n_0_[0]\,
      R => '0'
    );
\waddr_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_ctrl_AWADDR(1),
      Q => \waddr_reg_n_0_[1]\,
      R => '0'
    );
\waddr_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_ctrl_AWADDR(2),
      Q => \waddr_reg_n_0_[2]\,
      R => '0'
    );
\waddr_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_ctrl_AWADDR(3),
      Q => \waddr_reg_n_0_[3]\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi is
  port (
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    \FSM_onehot_rstate_reg[1]_0\ : out STD_LOGIC;
    s_axi_data_RVALID : out STD_LOGIC;
    s_axi_data_BVALID : out STD_LOGIC;
    \FSM_onehot_wstate_reg[2]_0\ : out STD_LOGIC;
    \FSM_onehot_wstate_reg[1]_0\ : out STD_LOGIC;
    s_axi_data_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    ap_clk : in STD_LOGIC;
    s_axi_data_ARVALID : in STD_LOGIC;
    s_axi_data_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_RREADY : in STD_LOGIC;
    s_axi_data_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_data_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ap_rst_n : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    s_axi_data_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_AWVALID : in STD_LOGIC;
    s_axi_data_BREADY : in STD_LOGIC;
    s_axi_data_WVALID : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi is
  signal \FSM_onehot_rstate[1]_i_1__0_n_0\ : STD_LOGIC;
  signal \FSM_onehot_rstate[2]_i_1__0_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_rstate_reg[1]_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[1]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[2]_i_1__0_n_0\ : STD_LOGIC;
  signal \FSM_onehot_wstate[3]_i_1__0_n_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[1]_0\ : STD_LOGIC;
  signal \^fsm_onehot_wstate_reg[2]_0\ : STD_LOGIC;
  signal \^sr\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal ar_hs : STD_LOGIC;
  signal \int_value_r_i[0]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[10]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[11]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[12]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[13]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[14]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[15]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[16]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[17]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[18]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[19]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[1]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[20]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[21]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[22]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[23]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[24]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[25]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[26]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[27]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[28]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[29]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[2]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[30]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[31]_i_2_n_0\ : STD_LOGIC;
  signal \int_value_r_i[31]_i_3_n_0\ : STD_LOGIC;
  signal \int_value_r_i[3]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[4]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[5]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[6]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[7]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[8]_i_1_n_0\ : STD_LOGIC;
  signal \int_value_r_i[9]_i_1_n_0\ : STD_LOGIC;
  signal int_value_r_o : STD_LOGIC_VECTOR ( 31 downto 1 );
  signal int_value_r_o_ap_vld : STD_LOGIC;
  signal int_value_r_o_ap_vld_i_1_n_0 : STD_LOGIC;
  signal p_0_in : STD_LOGIC;
  signal \rdata[0]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[0]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[10]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[11]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[12]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[13]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[14]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[15]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[16]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[17]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[18]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[19]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[1]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[20]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[21]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[22]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[23]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[24]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[25]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[26]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[27]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[28]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[29]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[2]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[30]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_2_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_3_n_0\ : STD_LOGIC;
  signal \rdata[31]_i_4_n_0\ : STD_LOGIC;
  signal \rdata[3]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[4]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[5]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[6]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[7]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[8]_i_1_n_0\ : STD_LOGIC;
  signal \rdata[9]_i_1_n_0\ : STD_LOGIC;
  signal \^s_axi_data_bvalid\ : STD_LOGIC;
  signal \^s_axi_data_rvalid\ : STD_LOGIC;
  signal value_r_i : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal waddr : STD_LOGIC;
  signal \waddr_reg_n_0_[0]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[1]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[2]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[3]\ : STD_LOGIC;
  signal \waddr_reg_n_0_[4]\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[1]_i_1__0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \FSM_onehot_rstate[2]_i_1__0\ : label is "soft_lutpair1";
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[1]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_rstate_reg[2]\ : label is "RDIDLE:010,RDDATA:100,iSTATE:001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[1]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[2]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute FSM_ENCODED_STATES of \FSM_onehot_wstate_reg[3]\ : label is "WRDATA:0100,WRRESP:1000,WRIDLE:0010,iSTATE:0001";
  attribute SOFT_HLUTNM of \int_value_r_i[0]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \int_value_r_i[10]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \int_value_r_i[11]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \int_value_r_i[12]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \int_value_r_i[13]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \int_value_r_i[14]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \int_value_r_i[15]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \int_value_r_i[16]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \int_value_r_i[17]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \int_value_r_i[18]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \int_value_r_i[19]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \int_value_r_i[1]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \int_value_r_i[20]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \int_value_r_i[21]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \int_value_r_i[22]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \int_value_r_i[23]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \int_value_r_i[24]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \int_value_r_i[25]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \int_value_r_i[26]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \int_value_r_i[27]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \int_value_r_i[28]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \int_value_r_i[29]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \int_value_r_i[2]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \int_value_r_i[30]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \int_value_r_i[31]_i_2\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \int_value_r_i[3]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \int_value_r_i[4]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \int_value_r_i[5]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \int_value_r_i[6]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \int_value_r_i[7]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \int_value_r_i[8]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \int_value_r_i[9]_i_1\ : label is "soft_lutpair13";
begin
  \FSM_onehot_rstate_reg[1]_0\ <= \^fsm_onehot_rstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[1]_0\ <= \^fsm_onehot_wstate_reg[1]_0\;
  \FSM_onehot_wstate_reg[2]_0\ <= \^fsm_onehot_wstate_reg[2]_0\;
  SR(0) <= \^sr\(0);
  s_axi_data_BVALID <= \^s_axi_data_bvalid\;
  s_axi_data_RVALID <= \^s_axi_data_rvalid\;
\FSM_onehot_rstate[1]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F277"
    )
        port map (
      I0 => \^fsm_onehot_rstate_reg[1]_0\,
      I1 => s_axi_data_ARVALID,
      I2 => s_axi_data_RREADY,
      I3 => \^s_axi_data_rvalid\,
      O => \FSM_onehot_rstate[1]_i_1__0_n_0\
    );
\FSM_onehot_rstate[2]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F444"
    )
        port map (
      I0 => s_axi_data_RREADY,
      I1 => \^s_axi_data_rvalid\,
      I2 => s_axi_data_ARVALID,
      I3 => \^fsm_onehot_rstate_reg[1]_0\,
      O => \FSM_onehot_rstate[2]_i_1__0_n_0\
    );
\FSM_onehot_rstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[1]_i_1__0_n_0\,
      Q => \^fsm_onehot_rstate_reg[1]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_rstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_rstate[2]_i_1__0_n_0\,
      Q => \^s_axi_data_rvalid\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"888BFF8B"
    )
        port map (
      I0 => s_axi_data_BREADY,
      I1 => \^s_axi_data_bvalid\,
      I2 => \^fsm_onehot_wstate_reg[2]_0\,
      I3 => \^fsm_onehot_wstate_reg[1]_0\,
      I4 => s_axi_data_AWVALID,
      O => \FSM_onehot_wstate[1]_i_1_n_0\
    );
\FSM_onehot_wstate[1]_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ap_rst_n,
      O => \^sr\(0)
    );
\FSM_onehot_wstate[2]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8F88"
    )
        port map (
      I0 => s_axi_data_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      I2 => s_axi_data_WVALID,
      I3 => \^fsm_onehot_wstate_reg[2]_0\,
      O => \FSM_onehot_wstate[2]_i_1__0_n_0\
    );
\FSM_onehot_wstate[3]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8F88"
    )
        port map (
      I0 => s_axi_data_WVALID,
      I1 => \^fsm_onehot_wstate_reg[2]_0\,
      I2 => s_axi_data_BREADY,
      I3 => \^s_axi_data_bvalid\,
      O => \FSM_onehot_wstate[3]_i_1__0_n_0\
    );
\FSM_onehot_wstate_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[1]_i_1_n_0\,
      Q => \^fsm_onehot_wstate_reg[1]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[2]_i_1__0_n_0\,
      Q => \^fsm_onehot_wstate_reg[2]_0\,
      R => \^sr\(0)
    );
\FSM_onehot_wstate_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \FSM_onehot_wstate[3]_i_1__0_n_0\,
      Q => \^s_axi_data_bvalid\,
      R => \^sr\(0)
    );
\int_value_r_i[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(0),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(0),
      O => \int_value_r_i[0]_i_1_n_0\
    );
\int_value_r_i[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(10),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(10),
      O => \int_value_r_i[10]_i_1_n_0\
    );
\int_value_r_i[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(11),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(11),
      O => \int_value_r_i[11]_i_1_n_0\
    );
\int_value_r_i[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(12),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(12),
      O => \int_value_r_i[12]_i_1_n_0\
    );
\int_value_r_i[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(13),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(13),
      O => \int_value_r_i[13]_i_1_n_0\
    );
\int_value_r_i[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(14),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(14),
      O => \int_value_r_i[14]_i_1_n_0\
    );
\int_value_r_i[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(15),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(15),
      O => \int_value_r_i[15]_i_1_n_0\
    );
\int_value_r_i[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(16),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(16),
      O => \int_value_r_i[16]_i_1_n_0\
    );
\int_value_r_i[17]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(17),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(17),
      O => \int_value_r_i[17]_i_1_n_0\
    );
\int_value_r_i[18]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(18),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(18),
      O => \int_value_r_i[18]_i_1_n_0\
    );
\int_value_r_i[19]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(19),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(19),
      O => \int_value_r_i[19]_i_1_n_0\
    );
\int_value_r_i[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(1),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(1),
      O => \int_value_r_i[1]_i_1_n_0\
    );
\int_value_r_i[20]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(20),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(20),
      O => \int_value_r_i[20]_i_1_n_0\
    );
\int_value_r_i[21]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(21),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(21),
      O => \int_value_r_i[21]_i_1_n_0\
    );
\int_value_r_i[22]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(22),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(22),
      O => \int_value_r_i[22]_i_1_n_0\
    );
\int_value_r_i[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(23),
      I1 => s_axi_data_WSTRB(2),
      I2 => value_r_i(23),
      O => \int_value_r_i[23]_i_1_n_0\
    );
\int_value_r_i[24]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(24),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(24),
      O => \int_value_r_i[24]_i_1_n_0\
    );
\int_value_r_i[25]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(25),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(25),
      O => \int_value_r_i[25]_i_1_n_0\
    );
\int_value_r_i[26]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(26),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(26),
      O => \int_value_r_i[26]_i_1_n_0\
    );
\int_value_r_i[27]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(27),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(27),
      O => \int_value_r_i[27]_i_1_n_0\
    );
\int_value_r_i[28]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(28),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(28),
      O => \int_value_r_i[28]_i_1_n_0\
    );
\int_value_r_i[29]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(29),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(29),
      O => \int_value_r_i[29]_i_1_n_0\
    );
\int_value_r_i[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(2),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(2),
      O => \int_value_r_i[2]_i_1_n_0\
    );
\int_value_r_i[30]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(30),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(30),
      O => \int_value_r_i[30]_i_1_n_0\
    );
\int_value_r_i[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => s_axi_data_WVALID,
      I1 => \int_value_r_i[31]_i_3_n_0\,
      O => p_0_in
    );
\int_value_r_i[31]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(31),
      I1 => s_axi_data_WSTRB(3),
      I2 => value_r_i(31),
      O => \int_value_r_i[31]_i_2_n_0\
    );
\int_value_r_i[31]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0001000000000000"
    )
        port map (
      I0 => \waddr_reg_n_0_[0]\,
      I1 => \waddr_reg_n_0_[3]\,
      I2 => \waddr_reg_n_0_[1]\,
      I3 => \waddr_reg_n_0_[2]\,
      I4 => \waddr_reg_n_0_[4]\,
      I5 => \^fsm_onehot_wstate_reg[2]_0\,
      O => \int_value_r_i[31]_i_3_n_0\
    );
\int_value_r_i[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(3),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(3),
      O => \int_value_r_i[3]_i_1_n_0\
    );
\int_value_r_i[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(4),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(4),
      O => \int_value_r_i[4]_i_1_n_0\
    );
\int_value_r_i[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(5),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(5),
      O => \int_value_r_i[5]_i_1_n_0\
    );
\int_value_r_i[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(6),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(6),
      O => \int_value_r_i[6]_i_1_n_0\
    );
\int_value_r_i[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(7),
      I1 => s_axi_data_WSTRB(0),
      I2 => value_r_i(7),
      O => \int_value_r_i[7]_i_1_n_0\
    );
\int_value_r_i[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(8),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(8),
      O => \int_value_r_i[8]_i_1_n_0\
    );
\int_value_r_i[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => s_axi_data_WDATA(9),
      I1 => s_axi_data_WSTRB(1),
      I2 => value_r_i(9),
      O => \int_value_r_i[9]_i_1_n_0\
    );
\int_value_r_i_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[0]_i_1_n_0\,
      Q => value_r_i(0),
      R => \^sr\(0)
    );
\int_value_r_i_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[10]_i_1_n_0\,
      Q => value_r_i(10),
      R => \^sr\(0)
    );
\int_value_r_i_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[11]_i_1_n_0\,
      Q => value_r_i(11),
      R => \^sr\(0)
    );
\int_value_r_i_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[12]_i_1_n_0\,
      Q => value_r_i(12),
      R => \^sr\(0)
    );
\int_value_r_i_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[13]_i_1_n_0\,
      Q => value_r_i(13),
      R => \^sr\(0)
    );
\int_value_r_i_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[14]_i_1_n_0\,
      Q => value_r_i(14),
      R => \^sr\(0)
    );
\int_value_r_i_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[15]_i_1_n_0\,
      Q => value_r_i(15),
      R => \^sr\(0)
    );
\int_value_r_i_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[16]_i_1_n_0\,
      Q => value_r_i(16),
      R => \^sr\(0)
    );
\int_value_r_i_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[17]_i_1_n_0\,
      Q => value_r_i(17),
      R => \^sr\(0)
    );
\int_value_r_i_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[18]_i_1_n_0\,
      Q => value_r_i(18),
      R => \^sr\(0)
    );
\int_value_r_i_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[19]_i_1_n_0\,
      Q => value_r_i(19),
      R => \^sr\(0)
    );
\int_value_r_i_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[1]_i_1_n_0\,
      Q => value_r_i(1),
      R => \^sr\(0)
    );
\int_value_r_i_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[20]_i_1_n_0\,
      Q => value_r_i(20),
      R => \^sr\(0)
    );
\int_value_r_i_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[21]_i_1_n_0\,
      Q => value_r_i(21),
      R => \^sr\(0)
    );
\int_value_r_i_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[22]_i_1_n_0\,
      Q => value_r_i(22),
      R => \^sr\(0)
    );
\int_value_r_i_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[23]_i_1_n_0\,
      Q => value_r_i(23),
      R => \^sr\(0)
    );
\int_value_r_i_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[24]_i_1_n_0\,
      Q => value_r_i(24),
      R => \^sr\(0)
    );
\int_value_r_i_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[25]_i_1_n_0\,
      Q => value_r_i(25),
      R => \^sr\(0)
    );
\int_value_r_i_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[26]_i_1_n_0\,
      Q => value_r_i(26),
      R => \^sr\(0)
    );
\int_value_r_i_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[27]_i_1_n_0\,
      Q => value_r_i(27),
      R => \^sr\(0)
    );
\int_value_r_i_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[28]_i_1_n_0\,
      Q => value_r_i(28),
      R => \^sr\(0)
    );
\int_value_r_i_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[29]_i_1_n_0\,
      Q => value_r_i(29),
      R => \^sr\(0)
    );
\int_value_r_i_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[2]_i_1_n_0\,
      Q => value_r_i(2),
      R => \^sr\(0)
    );
\int_value_r_i_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[30]_i_1_n_0\,
      Q => value_r_i(30),
      R => \^sr\(0)
    );
\int_value_r_i_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[31]_i_2_n_0\,
      Q => value_r_i(31),
      R => \^sr\(0)
    );
\int_value_r_i_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[3]_i_1_n_0\,
      Q => value_r_i(3),
      R => \^sr\(0)
    );
\int_value_r_i_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[4]_i_1_n_0\,
      Q => value_r_i(4),
      R => \^sr\(0)
    );
\int_value_r_i_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[5]_i_1_n_0\,
      Q => value_r_i(5),
      R => \^sr\(0)
    );
\int_value_r_i_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[6]_i_1_n_0\,
      Q => value_r_i(6),
      R => \^sr\(0)
    );
\int_value_r_i_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[7]_i_1_n_0\,
      Q => value_r_i(7),
      R => \^sr\(0)
    );
\int_value_r_i_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[8]_i_1_n_0\,
      Q => value_r_i(8),
      R => \^sr\(0)
    );
\int_value_r_i_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => p_0_in,
      D => \int_value_r_i[9]_i_1_n_0\,
      Q => value_r_i(9),
      R => \^sr\(0)
    );
int_value_r_o_ap_vld_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF7FFFFFFF0000"
    )
        port map (
      I0 => \rdata[0]_i_2_n_0\,
      I1 => s_axi_data_ARADDR(3),
      I2 => s_axi_data_ARADDR(2),
      I3 => ar_hs,
      I4 => E(0),
      I5 => int_value_r_o_ap_vld,
      O => int_value_r_o_ap_vld_i_1_n_0
    );
int_value_r_o_ap_vld_reg: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => int_value_r_o_ap_vld_i_1_n_0,
      Q => int_value_r_o_ap_vld,
      R => \^sr\(0)
    );
\int_value_r_o_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(9),
      Q => int_value_r_o(10),
      R => \^sr\(0)
    );
\int_value_r_o_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(10),
      Q => int_value_r_o(11),
      R => \^sr\(0)
    );
\int_value_r_o_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(11),
      Q => int_value_r_o(12),
      R => \^sr\(0)
    );
\int_value_r_o_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(12),
      Q => int_value_r_o(13),
      R => \^sr\(0)
    );
\int_value_r_o_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(13),
      Q => int_value_r_o(14),
      R => \^sr\(0)
    );
\int_value_r_o_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(14),
      Q => int_value_r_o(15),
      R => \^sr\(0)
    );
\int_value_r_o_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(15),
      Q => int_value_r_o(16),
      R => \^sr\(0)
    );
\int_value_r_o_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(16),
      Q => int_value_r_o(17),
      R => \^sr\(0)
    );
\int_value_r_o_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(17),
      Q => int_value_r_o(18),
      R => \^sr\(0)
    );
\int_value_r_o_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(18),
      Q => int_value_r_o(19),
      R => \^sr\(0)
    );
\int_value_r_o_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(0),
      Q => int_value_r_o(1),
      R => \^sr\(0)
    );
\int_value_r_o_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(19),
      Q => int_value_r_o(20),
      R => \^sr\(0)
    );
\int_value_r_o_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(20),
      Q => int_value_r_o(21),
      R => \^sr\(0)
    );
\int_value_r_o_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(21),
      Q => int_value_r_o(22),
      R => \^sr\(0)
    );
\int_value_r_o_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(22),
      Q => int_value_r_o(23),
      R => \^sr\(0)
    );
\int_value_r_o_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(23),
      Q => int_value_r_o(24),
      R => \^sr\(0)
    );
\int_value_r_o_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(24),
      Q => int_value_r_o(25),
      R => \^sr\(0)
    );
\int_value_r_o_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(25),
      Q => int_value_r_o(26),
      R => \^sr\(0)
    );
\int_value_r_o_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(26),
      Q => int_value_r_o(27),
      R => \^sr\(0)
    );
\int_value_r_o_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(27),
      Q => int_value_r_o(28),
      R => \^sr\(0)
    );
\int_value_r_o_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(28),
      Q => int_value_r_o(29),
      R => \^sr\(0)
    );
\int_value_r_o_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(1),
      Q => int_value_r_o(2),
      R => \^sr\(0)
    );
\int_value_r_o_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(29),
      Q => int_value_r_o(30),
      R => \^sr\(0)
    );
\int_value_r_o_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(30),
      Q => int_value_r_o(31),
      R => \^sr\(0)
    );
\int_value_r_o_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(2),
      Q => int_value_r_o(3),
      R => \^sr\(0)
    );
\int_value_r_o_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(3),
      Q => int_value_r_o(4),
      R => \^sr\(0)
    );
\int_value_r_o_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(4),
      Q => int_value_r_o(5),
      R => \^sr\(0)
    );
\int_value_r_o_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(5),
      Q => int_value_r_o(6),
      R => \^sr\(0)
    );
\int_value_r_o_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(6),
      Q => int_value_r_o(7),
      R => \^sr\(0)
    );
\int_value_r_o_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(7),
      Q => int_value_r_o(8),
      R => \^sr\(0)
    );
\int_value_r_o_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => E(0),
      D => value_r_i(8),
      Q => int_value_r_o(9),
      R => \^sr\(0)
    );
\rdata[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A0000C00"
    )
        port map (
      I0 => int_value_r_o_ap_vld,
      I1 => value_r_i(0),
      I2 => s_axi_data_ARADDR(2),
      I3 => \rdata[0]_i_2_n_0\,
      I4 => s_axi_data_ARADDR(3),
      O => \rdata[0]_i_1_n_0\
    );
\rdata[0]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => s_axi_data_ARADDR(1),
      I1 => s_axi_data_ARADDR(4),
      I2 => s_axi_data_ARADDR(0),
      O => \rdata[0]_i_2_n_0\
    );
\rdata[10]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(10),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(10),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[10]_i_1_n_0\
    );
\rdata[11]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(11),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(11),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[11]_i_1_n_0\
    );
\rdata[12]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(12),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(12),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[12]_i_1_n_0\
    );
\rdata[13]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(13),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(13),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[13]_i_1_n_0\
    );
\rdata[14]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(14),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(14),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[14]_i_1_n_0\
    );
\rdata[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(15),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(15),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[15]_i_1_n_0\
    );
\rdata[16]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(16),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(16),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[16]_i_1_n_0\
    );
\rdata[17]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(17),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(17),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[17]_i_1_n_0\
    );
\rdata[18]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(18),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(18),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[18]_i_1_n_0\
    );
\rdata[19]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(19),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(19),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[19]_i_1_n_0\
    );
\rdata[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(1),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(1),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[1]_i_1_n_0\
    );
\rdata[20]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(20),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(20),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[20]_i_1_n_0\
    );
\rdata[21]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(21),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(21),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[21]_i_1_n_0\
    );
\rdata[22]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(22),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(22),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[22]_i_1_n_0\
    );
\rdata[23]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(23),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(23),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[23]_i_1_n_0\
    );
\rdata[24]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(24),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(24),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[24]_i_1_n_0\
    );
\rdata[25]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(25),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(25),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[25]_i_1_n_0\
    );
\rdata[26]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(26),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(26),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[26]_i_1_n_0\
    );
\rdata[27]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(27),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(27),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[27]_i_1_n_0\
    );
\rdata[28]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(28),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(28),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[28]_i_1_n_0\
    );
\rdata[29]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(29),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(29),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[29]_i_1_n_0\
    );
\rdata[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(2),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(2),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[2]_i_1_n_0\
    );
\rdata[30]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(30),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(30),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[30]_i_1_n_0\
    );
\rdata[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => s_axi_data_ARVALID,
      I1 => \^fsm_onehot_rstate_reg[1]_0\,
      O => ar_hs
    );
\rdata[31]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(31),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(31),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[31]_i_2_n_0\
    );
\rdata[31]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00100000"
    )
        port map (
      I0 => s_axi_data_ARADDR(2),
      I1 => s_axi_data_ARADDR(1),
      I2 => s_axi_data_ARADDR(4),
      I3 => s_axi_data_ARADDR(0),
      I4 => s_axi_data_ARADDR(3),
      O => \rdata[31]_i_3_n_0\
    );
\rdata[31]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000010"
    )
        port map (
      I0 => s_axi_data_ARADDR(2),
      I1 => s_axi_data_ARADDR(1),
      I2 => s_axi_data_ARADDR(4),
      I3 => s_axi_data_ARADDR(0),
      I4 => s_axi_data_ARADDR(3),
      O => \rdata[31]_i_4_n_0\
    );
\rdata[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(3),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(3),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[3]_i_1_n_0\
    );
\rdata[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(4),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(4),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[4]_i_1_n_0\
    );
\rdata[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(5),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(5),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[5]_i_1_n_0\
    );
\rdata[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(6),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(6),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[6]_i_1_n_0\
    );
\rdata[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(7),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(7),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[7]_i_1_n_0\
    );
\rdata[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(8),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(8),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[8]_i_1_n_0\
    );
\rdata[9]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => int_value_r_o(9),
      I1 => \rdata[31]_i_3_n_0\,
      I2 => value_r_i(9),
      I3 => \rdata[31]_i_4_n_0\,
      O => \rdata[9]_i_1_n_0\
    );
\rdata_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[0]_i_1_n_0\,
      Q => s_axi_data_RDATA(0),
      R => '0'
    );
\rdata_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[10]_i_1_n_0\,
      Q => s_axi_data_RDATA(10),
      R => '0'
    );
\rdata_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[11]_i_1_n_0\,
      Q => s_axi_data_RDATA(11),
      R => '0'
    );
\rdata_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[12]_i_1_n_0\,
      Q => s_axi_data_RDATA(12),
      R => '0'
    );
\rdata_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[13]_i_1_n_0\,
      Q => s_axi_data_RDATA(13),
      R => '0'
    );
\rdata_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[14]_i_1_n_0\,
      Q => s_axi_data_RDATA(14),
      R => '0'
    );
\rdata_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[15]_i_1_n_0\,
      Q => s_axi_data_RDATA(15),
      R => '0'
    );
\rdata_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[16]_i_1_n_0\,
      Q => s_axi_data_RDATA(16),
      R => '0'
    );
\rdata_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[17]_i_1_n_0\,
      Q => s_axi_data_RDATA(17),
      R => '0'
    );
\rdata_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[18]_i_1_n_0\,
      Q => s_axi_data_RDATA(18),
      R => '0'
    );
\rdata_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[19]_i_1_n_0\,
      Q => s_axi_data_RDATA(19),
      R => '0'
    );
\rdata_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[1]_i_1_n_0\,
      Q => s_axi_data_RDATA(1),
      R => '0'
    );
\rdata_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[20]_i_1_n_0\,
      Q => s_axi_data_RDATA(20),
      R => '0'
    );
\rdata_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[21]_i_1_n_0\,
      Q => s_axi_data_RDATA(21),
      R => '0'
    );
\rdata_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[22]_i_1_n_0\,
      Q => s_axi_data_RDATA(22),
      R => '0'
    );
\rdata_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[23]_i_1_n_0\,
      Q => s_axi_data_RDATA(23),
      R => '0'
    );
\rdata_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[24]_i_1_n_0\,
      Q => s_axi_data_RDATA(24),
      R => '0'
    );
\rdata_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[25]_i_1_n_0\,
      Q => s_axi_data_RDATA(25),
      R => '0'
    );
\rdata_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[26]_i_1_n_0\,
      Q => s_axi_data_RDATA(26),
      R => '0'
    );
\rdata_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[27]_i_1_n_0\,
      Q => s_axi_data_RDATA(27),
      R => '0'
    );
\rdata_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[28]_i_1_n_0\,
      Q => s_axi_data_RDATA(28),
      R => '0'
    );
\rdata_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[29]_i_1_n_0\,
      Q => s_axi_data_RDATA(29),
      R => '0'
    );
\rdata_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[2]_i_1_n_0\,
      Q => s_axi_data_RDATA(2),
      R => '0'
    );
\rdata_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[30]_i_1_n_0\,
      Q => s_axi_data_RDATA(30),
      R => '0'
    );
\rdata_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[31]_i_2_n_0\,
      Q => s_axi_data_RDATA(31),
      R => '0'
    );
\rdata_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[3]_i_1_n_0\,
      Q => s_axi_data_RDATA(3),
      R => '0'
    );
\rdata_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[4]_i_1_n_0\,
      Q => s_axi_data_RDATA(4),
      R => '0'
    );
\rdata_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[5]_i_1_n_0\,
      Q => s_axi_data_RDATA(5),
      R => '0'
    );
\rdata_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[6]_i_1_n_0\,
      Q => s_axi_data_RDATA(6),
      R => '0'
    );
\rdata_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[7]_i_1_n_0\,
      Q => s_axi_data_RDATA(7),
      R => '0'
    );
\rdata_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[8]_i_1_n_0\,
      Q => s_axi_data_RDATA(8),
      R => '0'
    );
\rdata_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ar_hs,
      D => \rdata[9]_i_1_n_0\,
      Q => s_axi_data_RDATA(9),
      R => '0'
    );
\waddr[4]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => s_axi_data_AWVALID,
      I1 => \^fsm_onehot_wstate_reg[1]_0\,
      O => waddr
    );
\waddr_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_data_AWADDR(0),
      Q => \waddr_reg_n_0_[0]\,
      R => '0'
    );
\waddr_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_data_AWADDR(1),
      Q => \waddr_reg_n_0_[1]\,
      R => '0'
    );
\waddr_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_data_AWADDR(2),
      Q => \waddr_reg_n_0_[2]\,
      R => '0'
    );
\waddr_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_data_AWADDR(3),
      Q => \waddr_reg_n_0_[3]\,
      R => '0'
    );
\waddr_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => waddr,
      D => s_axi_data_AWADDR(4),
      Q => \waddr_reg_n_0_[4]\,
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d is
  port (
    s_axi_ctrl_AWVALID : in STD_LOGIC;
    s_axi_ctrl_AWREADY : out STD_LOGIC;
    s_axi_ctrl_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_WVALID : in STD_LOGIC;
    s_axi_ctrl_WREADY : out STD_LOGIC;
    s_axi_ctrl_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_ctrl_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_ARVALID : in STD_LOGIC;
    s_axi_ctrl_ARREADY : out STD_LOGIC;
    s_axi_ctrl_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_ctrl_RVALID : out STD_LOGIC;
    s_axi_ctrl_RREADY : in STD_LOGIC;
    s_axi_ctrl_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_ctrl_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_ctrl_BVALID : out STD_LOGIC;
    s_axi_ctrl_BREADY : in STD_LOGIC;
    s_axi_ctrl_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    s_axi_data_AWVALID : in STD_LOGIC;
    s_axi_data_AWREADY : out STD_LOGIC;
    s_axi_data_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_WVALID : in STD_LOGIC;
    s_axi_data_WREADY : out STD_LOGIC;
    s_axi_data_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_data_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_data_ARVALID : in STD_LOGIC;
    s_axi_data_ARREADY : out STD_LOGIC;
    s_axi_data_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_data_RVALID : out STD_LOGIC;
    s_axi_data_RREADY : in STD_LOGIC;
    s_axi_data_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_data_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_data_BVALID : out STD_LOGIC;
    s_axi_data_BREADY : in STD_LOGIC;
    s_axi_data_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 )
  );
  attribute C_S_AXI_CTRL_ADDR_WIDTH : integer;
  attribute C_S_AXI_CTRL_ADDR_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 4;
  attribute C_S_AXI_CTRL_DATA_WIDTH : integer;
  attribute C_S_AXI_CTRL_DATA_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 32;
  attribute C_S_AXI_CTRL_WSTRB_WIDTH : integer;
  attribute C_S_AXI_CTRL_WSTRB_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 4;
  attribute C_S_AXI_DATA_ADDR_WIDTH : integer;
  attribute C_S_AXI_DATA_ADDR_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 5;
  attribute C_S_AXI_DATA_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_DATA_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 32;
  attribute C_S_AXI_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 32;
  attribute C_S_AXI_DATA_WSTRB_WIDTH : integer;
  attribute C_S_AXI_DATA_WSTRB_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 4;
  attribute C_S_AXI_WSTRB_WIDTH : integer;
  attribute C_S_AXI_WSTRB_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is 4;
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d is
  signal \<const0>\ : STD_LOGIC;
  signal ap_done : STD_LOGIC;
  signal ap_rst_n_inv : STD_LOGIC;
  signal \^s_axi_ctrl_rdata\ : STD_LOGIC_VECTOR ( 7 downto 0 );
begin
  s_axi_ctrl_BRESP(1) <= \<const0>\;
  s_axi_ctrl_BRESP(0) <= \<const0>\;
  s_axi_ctrl_RDATA(31) <= \<const0>\;
  s_axi_ctrl_RDATA(30) <= \<const0>\;
  s_axi_ctrl_RDATA(29) <= \<const0>\;
  s_axi_ctrl_RDATA(28) <= \<const0>\;
  s_axi_ctrl_RDATA(27) <= \<const0>\;
  s_axi_ctrl_RDATA(26) <= \<const0>\;
  s_axi_ctrl_RDATA(25) <= \<const0>\;
  s_axi_ctrl_RDATA(24) <= \<const0>\;
  s_axi_ctrl_RDATA(23) <= \<const0>\;
  s_axi_ctrl_RDATA(22) <= \<const0>\;
  s_axi_ctrl_RDATA(21) <= \<const0>\;
  s_axi_ctrl_RDATA(20) <= \<const0>\;
  s_axi_ctrl_RDATA(19) <= \<const0>\;
  s_axi_ctrl_RDATA(18) <= \<const0>\;
  s_axi_ctrl_RDATA(17) <= \<const0>\;
  s_axi_ctrl_RDATA(16) <= \<const0>\;
  s_axi_ctrl_RDATA(15) <= \<const0>\;
  s_axi_ctrl_RDATA(14) <= \<const0>\;
  s_axi_ctrl_RDATA(13) <= \<const0>\;
  s_axi_ctrl_RDATA(12) <= \<const0>\;
  s_axi_ctrl_RDATA(11) <= \<const0>\;
  s_axi_ctrl_RDATA(10) <= \<const0>\;
  s_axi_ctrl_RDATA(9) <= \<const0>\;
  s_axi_ctrl_RDATA(8) <= \<const0>\;
  s_axi_ctrl_RDATA(7) <= \^s_axi_ctrl_rdata\(7);
  s_axi_ctrl_RDATA(6) <= \<const0>\;
  s_axi_ctrl_RDATA(5) <= \<const0>\;
  s_axi_ctrl_RDATA(4) <= \<const0>\;
  s_axi_ctrl_RDATA(3 downto 0) <= \^s_axi_ctrl_rdata\(3 downto 0);
  s_axi_ctrl_RRESP(1) <= \<const0>\;
  s_axi_ctrl_RRESP(0) <= \<const0>\;
  s_axi_data_BRESP(1) <= \<const0>\;
  s_axi_data_BRESP(0) <= \<const0>\;
  s_axi_data_RRESP(1) <= \<const0>\;
  s_axi_data_RRESP(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
align2d_ctrl_s_axi_U: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_ctrl_s_axi
     port map (
      \FSM_onehot_rstate_reg[1]_0\ => s_axi_ctrl_ARREADY,
      \FSM_onehot_wstate_reg[1]_0\ => s_axi_ctrl_AWREADY,
      \FSM_onehot_wstate_reg[2]_0\ => s_axi_ctrl_WREADY,
      Q => ap_done,
      SR(0) => ap_rst_n_inv,
      ap_clk => ap_clk,
      interrupt => interrupt,
      s_axi_ctrl_ARADDR(3 downto 0) => s_axi_ctrl_ARADDR(3 downto 0),
      s_axi_ctrl_ARVALID => s_axi_ctrl_ARVALID,
      s_axi_ctrl_AWADDR(3 downto 0) => s_axi_ctrl_AWADDR(3 downto 0),
      s_axi_ctrl_AWVALID => s_axi_ctrl_AWVALID,
      s_axi_ctrl_BREADY => s_axi_ctrl_BREADY,
      s_axi_ctrl_BVALID => s_axi_ctrl_BVALID,
      s_axi_ctrl_RDATA(4) => \^s_axi_ctrl_rdata\(7),
      s_axi_ctrl_RDATA(3 downto 0) => \^s_axi_ctrl_rdata\(3 downto 0),
      s_axi_ctrl_RREADY => s_axi_ctrl_RREADY,
      s_axi_ctrl_RVALID => s_axi_ctrl_RVALID,
      s_axi_ctrl_WDATA(1) => s_axi_ctrl_WDATA(7),
      s_axi_ctrl_WDATA(0) => s_axi_ctrl_WDATA(0),
      s_axi_ctrl_WSTRB(0) => s_axi_ctrl_WSTRB(0),
      s_axi_ctrl_WVALID => s_axi_ctrl_WVALID
    );
align2d_data_s_axi_U: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d_data_s_axi
     port map (
      E(0) => ap_done,
      \FSM_onehot_rstate_reg[1]_0\ => s_axi_data_ARREADY,
      \FSM_onehot_wstate_reg[1]_0\ => s_axi_data_AWREADY,
      \FSM_onehot_wstate_reg[2]_0\ => s_axi_data_WREADY,
      SR(0) => ap_rst_n_inv,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      s_axi_data_ARADDR(4 downto 0) => s_axi_data_ARADDR(4 downto 0),
      s_axi_data_ARVALID => s_axi_data_ARVALID,
      s_axi_data_AWADDR(4 downto 0) => s_axi_data_AWADDR(4 downto 0),
      s_axi_data_AWVALID => s_axi_data_AWVALID,
      s_axi_data_BREADY => s_axi_data_BREADY,
      s_axi_data_BVALID => s_axi_data_BVALID,
      s_axi_data_RDATA(31 downto 0) => s_axi_data_RDATA(31 downto 0),
      s_axi_data_RREADY => s_axi_data_RREADY,
      s_axi_data_RVALID => s_axi_data_RVALID,
      s_axi_data_WDATA(31 downto 0) => s_axi_data_WDATA(31 downto 0),
      s_axi_data_WSTRB(3 downto 0) => s_axi_data_WSTRB(3 downto 0),
      s_axi_data_WVALID => s_axi_data_WVALID
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
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
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "design_1_align2d_0_0,align2d,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "align2d,Vivado 2019.1";
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  attribute C_S_AXI_CTRL_ADDR_WIDTH : integer;
  attribute C_S_AXI_CTRL_ADDR_WIDTH of inst : label is 4;
  attribute C_S_AXI_CTRL_DATA_WIDTH : integer;
  attribute C_S_AXI_CTRL_DATA_WIDTH of inst : label is 32;
  attribute C_S_AXI_CTRL_WSTRB_WIDTH : integer;
  attribute C_S_AXI_CTRL_WSTRB_WIDTH of inst : label is 4;
  attribute C_S_AXI_DATA_ADDR_WIDTH : integer;
  attribute C_S_AXI_DATA_ADDR_WIDTH of inst : label is 5;
  attribute C_S_AXI_DATA_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_DATA_WIDTH of inst : label is 32;
  attribute C_S_AXI_DATA_WIDTH : integer;
  attribute C_S_AXI_DATA_WIDTH of inst : label is 32;
  attribute C_S_AXI_DATA_WSTRB_WIDTH : integer;
  attribute C_S_AXI_DATA_WSTRB_WIDTH of inst : label is 4;
  attribute C_S_AXI_WSTRB_WIDTH : integer;
  attribute C_S_AXI_WSTRB_WIDTH of inst : label is 4;
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 ap_clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_data, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_rst_n : signal is "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  attribute X_INTERFACE_PARAMETER of ap_rst_n : signal is "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of interrupt : signal is "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  attribute X_INTERFACE_PARAMETER of interrupt : signal is "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1";
  attribute X_INTERFACE_INFO of s_axi_ctrl_ARREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARREADY";
  attribute X_INTERFACE_INFO of s_axi_ctrl_ARVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARVALID";
  attribute X_INTERFACE_INFO of s_axi_ctrl_AWREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWREADY";
  attribute X_INTERFACE_INFO of s_axi_ctrl_AWVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWVALID";
  attribute X_INTERFACE_INFO of s_axi_ctrl_BREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl BREADY";
  attribute X_INTERFACE_INFO of s_axi_ctrl_BVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl BVALID";
  attribute X_INTERFACE_INFO of s_axi_ctrl_RREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY";
  attribute X_INTERFACE_PARAMETER of s_axi_ctrl_RREADY : signal is "XIL_INTERFACENAME s_axi_ctrl, ADDR_WIDTH 4, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axi_ctrl_RVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl RVALID";
  attribute X_INTERFACE_INFO of s_axi_ctrl_WREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl WREADY";
  attribute X_INTERFACE_INFO of s_axi_ctrl_WVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl WVALID";
  attribute X_INTERFACE_INFO of s_axi_data_ARREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_data ARREADY";
  attribute X_INTERFACE_INFO of s_axi_data_ARVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_data ARVALID";
  attribute X_INTERFACE_INFO of s_axi_data_AWREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_data AWREADY";
  attribute X_INTERFACE_INFO of s_axi_data_AWVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_data AWVALID";
  attribute X_INTERFACE_INFO of s_axi_data_BREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_data BREADY";
  attribute X_INTERFACE_INFO of s_axi_data_BVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_data BVALID";
  attribute X_INTERFACE_INFO of s_axi_data_RREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_data RREADY";
  attribute X_INTERFACE_PARAMETER of s_axi_data_RREADY : signal is "XIL_INTERFACENAME s_axi_data, ADDR_WIDTH 5, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of s_axi_data_RVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_data RVALID";
  attribute X_INTERFACE_INFO of s_axi_data_WREADY : signal is "xilinx.com:interface:aximm:1.0 s_axi_data WREADY";
  attribute X_INTERFACE_INFO of s_axi_data_WVALID : signal is "xilinx.com:interface:aximm:1.0 s_axi_data WVALID";
  attribute X_INTERFACE_INFO of s_axi_ctrl_ARADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARADDR";
  attribute X_INTERFACE_INFO of s_axi_ctrl_AWADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR";
  attribute X_INTERFACE_INFO of s_axi_ctrl_BRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl BRESP";
  attribute X_INTERFACE_INFO of s_axi_ctrl_RDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl RDATA";
  attribute X_INTERFACE_INFO of s_axi_ctrl_RRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl RRESP";
  attribute X_INTERFACE_INFO of s_axi_ctrl_WDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl WDATA";
  attribute X_INTERFACE_INFO of s_axi_ctrl_WSTRB : signal is "xilinx.com:interface:aximm:1.0 s_axi_ctrl WSTRB";
  attribute X_INTERFACE_INFO of s_axi_data_ARADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_data ARADDR";
  attribute X_INTERFACE_INFO of s_axi_data_AWADDR : signal is "xilinx.com:interface:aximm:1.0 s_axi_data AWADDR";
  attribute X_INTERFACE_INFO of s_axi_data_BRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_data BRESP";
  attribute X_INTERFACE_INFO of s_axi_data_RDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_data RDATA";
  attribute X_INTERFACE_INFO of s_axi_data_RRESP : signal is "xilinx.com:interface:aximm:1.0 s_axi_data RRESP";
  attribute X_INTERFACE_INFO of s_axi_data_WDATA : signal is "xilinx.com:interface:aximm:1.0 s_axi_data WDATA";
  attribute X_INTERFACE_INFO of s_axi_data_WSTRB : signal is "xilinx.com:interface:aximm:1.0 s_axi_data WSTRB";
begin
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_align2d
     port map (
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      interrupt => interrupt,
      s_axi_ctrl_ARADDR(3 downto 0) => s_axi_ctrl_ARADDR(3 downto 0),
      s_axi_ctrl_ARREADY => s_axi_ctrl_ARREADY,
      s_axi_ctrl_ARVALID => s_axi_ctrl_ARVALID,
      s_axi_ctrl_AWADDR(3 downto 0) => s_axi_ctrl_AWADDR(3 downto 0),
      s_axi_ctrl_AWREADY => s_axi_ctrl_AWREADY,
      s_axi_ctrl_AWVALID => s_axi_ctrl_AWVALID,
      s_axi_ctrl_BREADY => s_axi_ctrl_BREADY,
      s_axi_ctrl_BRESP(1 downto 0) => s_axi_ctrl_BRESP(1 downto 0),
      s_axi_ctrl_BVALID => s_axi_ctrl_BVALID,
      s_axi_ctrl_RDATA(31 downto 0) => s_axi_ctrl_RDATA(31 downto 0),
      s_axi_ctrl_RREADY => s_axi_ctrl_RREADY,
      s_axi_ctrl_RRESP(1 downto 0) => s_axi_ctrl_RRESP(1 downto 0),
      s_axi_ctrl_RVALID => s_axi_ctrl_RVALID,
      s_axi_ctrl_WDATA(31 downto 0) => s_axi_ctrl_WDATA(31 downto 0),
      s_axi_ctrl_WREADY => s_axi_ctrl_WREADY,
      s_axi_ctrl_WSTRB(3 downto 0) => s_axi_ctrl_WSTRB(3 downto 0),
      s_axi_ctrl_WVALID => s_axi_ctrl_WVALID,
      s_axi_data_ARADDR(4 downto 0) => s_axi_data_ARADDR(4 downto 0),
      s_axi_data_ARREADY => s_axi_data_ARREADY,
      s_axi_data_ARVALID => s_axi_data_ARVALID,
      s_axi_data_AWADDR(4 downto 0) => s_axi_data_AWADDR(4 downto 0),
      s_axi_data_AWREADY => s_axi_data_AWREADY,
      s_axi_data_AWVALID => s_axi_data_AWVALID,
      s_axi_data_BREADY => s_axi_data_BREADY,
      s_axi_data_BRESP(1 downto 0) => s_axi_data_BRESP(1 downto 0),
      s_axi_data_BVALID => s_axi_data_BVALID,
      s_axi_data_RDATA(31 downto 0) => s_axi_data_RDATA(31 downto 0),
      s_axi_data_RREADY => s_axi_data_RREADY,
      s_axi_data_RRESP(1 downto 0) => s_axi_data_RRESP(1 downto 0),
      s_axi_data_RVALID => s_axi_data_RVALID,
      s_axi_data_WDATA(31 downto 0) => s_axi_data_WDATA(31 downto 0),
      s_axi_data_WREADY => s_axi_data_WREADY,
      s_axi_data_WSTRB(3 downto 0) => s_axi_data_WSTRB(3 downto 0),
      s_axi_data_WVALID => s_axi_data_WVALID
    );
end STRUCTURE;
