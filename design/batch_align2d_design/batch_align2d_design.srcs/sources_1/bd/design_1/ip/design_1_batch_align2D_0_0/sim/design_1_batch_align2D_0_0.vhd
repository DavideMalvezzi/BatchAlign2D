-- (c) Copyright 1995-2019 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: xilinx.com:hls:batch_align2D:1.0
-- IP Revision: 1910161518

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY design_1_batch_align2D_0_0 IS
  PORT (
    s_axi_ctrl_AWADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    s_axi_ctrl_AWVALID : IN STD_LOGIC;
    s_axi_ctrl_AWREADY : OUT STD_LOGIC;
    s_axi_ctrl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_ctrl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_ctrl_WVALID : IN STD_LOGIC;
    s_axi_ctrl_WREADY : OUT STD_LOGIC;
    s_axi_ctrl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_ctrl_BVALID : OUT STD_LOGIC;
    s_axi_ctrl_BREADY : IN STD_LOGIC;
    s_axi_ctrl_ARADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    s_axi_ctrl_ARVALID : IN STD_LOGIC;
    s_axi_ctrl_ARREADY : OUT STD_LOGIC;
    s_axi_ctrl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_ctrl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_ctrl_RVALID : OUT STD_LOGIC;
    s_axi_ctrl_RREADY : IN STD_LOGIC;
    s_axi_param_AWADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    s_axi_param_AWVALID : IN STD_LOGIC;
    s_axi_param_AWREADY : OUT STD_LOGIC;
    s_axi_param_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_param_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_param_WVALID : IN STD_LOGIC;
    s_axi_param_WREADY : OUT STD_LOGIC;
    s_axi_param_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_param_BVALID : OUT STD_LOGIC;
    s_axi_param_BREADY : IN STD_LOGIC;
    s_axi_param_ARADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    s_axi_param_ARVALID : IN STD_LOGIC;
    s_axi_param_ARREADY : OUT STD_LOGIC;
    s_axi_param_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_param_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_param_RVALID : OUT STD_LOGIC;
    s_axi_param_RREADY : IN STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    interrupt : OUT STD_LOGIC;
    m_axi_pyr_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_pyr_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_pyr_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pyr_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pyr_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_AWVALID : OUT STD_LOGIC;
    m_axi_pyr_AWREADY : IN STD_LOGIC;
    m_axi_pyr_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_pyr_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_WLAST : OUT STD_LOGIC;
    m_axi_pyr_WVALID : OUT STD_LOGIC;
    m_axi_pyr_WREADY : IN STD_LOGIC;
    m_axi_pyr_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_BVALID : IN STD_LOGIC;
    m_axi_pyr_BREADY : OUT STD_LOGIC;
    m_axi_pyr_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_pyr_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_pyr_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pyr_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pyr_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pyr_ARVALID : OUT STD_LOGIC;
    m_axi_pyr_ARREADY : IN STD_LOGIC;
    m_axi_pyr_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_pyr_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pyr_RLAST : IN STD_LOGIC;
    m_axi_pyr_RVALID : IN STD_LOGIC;
    m_axi_pyr_RREADY : OUT STD_LOGIC;
    m_axi_patches_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_patches_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_patches_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_patches_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_patches_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_AWVALID : OUT STD_LOGIC;
    m_axi_patches_AWREADY : IN STD_LOGIC;
    m_axi_patches_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_patches_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_WLAST : OUT STD_LOGIC;
    m_axi_patches_WVALID : OUT STD_LOGIC;
    m_axi_patches_WREADY : IN STD_LOGIC;
    m_axi_patches_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_BVALID : IN STD_LOGIC;
    m_axi_patches_BREADY : OUT STD_LOGIC;
    m_axi_patches_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_patches_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_patches_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_patches_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_patches_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_patches_ARVALID : OUT STD_LOGIC;
    m_axi_patches_ARREADY : IN STD_LOGIC;
    m_axi_patches_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_patches_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_patches_RLAST : IN STD_LOGIC;
    m_axi_patches_RVALID : IN STD_LOGIC;
    m_axi_patches_RREADY : OUT STD_LOGIC;
    m_axi_pos_r_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_pos_r_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_pos_r_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pos_r_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pos_r_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_AWVALID : OUT STD_LOGIC;
    m_axi_pos_r_AWREADY : IN STD_LOGIC;
    m_axi_pos_r_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_pos_r_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_WLAST : OUT STD_LOGIC;
    m_axi_pos_r_WVALID : OUT STD_LOGIC;
    m_axi_pos_r_WREADY : IN STD_LOGIC;
    m_axi_pos_r_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_BVALID : IN STD_LOGIC;
    m_axi_pos_r_BREADY : OUT STD_LOGIC;
    m_axi_pos_r_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_pos_r_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_pos_r_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pos_r_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_pos_r_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_pos_r_ARVALID : OUT STD_LOGIC;
    m_axi_pos_r_ARREADY : IN STD_LOGIC;
    m_axi_pos_r_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_pos_r_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_pos_r_RLAST : IN STD_LOGIC;
    m_axi_pos_r_RVALID : IN STD_LOGIC;
    m_axi_pos_r_RREADY : OUT STD_LOGIC;
    m_axi_debug_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_debug_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_debug_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_debug_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_debug_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_AWVALID : OUT STD_LOGIC;
    m_axi_debug_AWREADY : IN STD_LOGIC;
    m_axi_debug_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_debug_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_WLAST : OUT STD_LOGIC;
    m_axi_debug_WVALID : OUT STD_LOGIC;
    m_axi_debug_WREADY : IN STD_LOGIC;
    m_axi_debug_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_BVALID : IN STD_LOGIC;
    m_axi_debug_BREADY : OUT STD_LOGIC;
    m_axi_debug_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_debug_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_debug_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_debug_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_debug_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_debug_ARVALID : OUT STD_LOGIC;
    m_axi_debug_ARREADY : IN STD_LOGIC;
    m_axi_debug_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_debug_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_debug_RLAST : IN STD_LOGIC;
    m_axi_debug_RVALID : IN STD_LOGIC;
    m_axi_debug_RREADY : OUT STD_LOGIC
  );
END design_1_batch_align2D_0_0;

ARCHITECTURE design_1_batch_align2D_0_0_arch OF design_1_batch_align2D_0_0 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : STRING;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF design_1_batch_align2D_0_0_arch: ARCHITECTURE IS "yes";
  COMPONENT batch_align2D IS
    GENERIC (
      C_S_AXI_CTRL_ADDR_WIDTH : INTEGER;
      C_S_AXI_CTRL_DATA_WIDTH : INTEGER;
      C_S_AXI_PARAM_ADDR_WIDTH : INTEGER;
      C_S_AXI_PARAM_DATA_WIDTH : INTEGER;
      C_M_AXI_PYR_ID_WIDTH : INTEGER;
      C_M_AXI_PYR_ADDR_WIDTH : INTEGER;
      C_M_AXI_PYR_DATA_WIDTH : INTEGER;
      C_M_AXI_PYR_AWUSER_WIDTH : INTEGER;
      C_M_AXI_PYR_ARUSER_WIDTH : INTEGER;
      C_M_AXI_PYR_WUSER_WIDTH : INTEGER;
      C_M_AXI_PYR_RUSER_WIDTH : INTEGER;
      C_M_AXI_PYR_BUSER_WIDTH : INTEGER;
      C_M_AXI_PYR_USER_VALUE : INTEGER;
      C_M_AXI_PYR_PROT_VALUE : INTEGER;
      C_M_AXI_PYR_CACHE_VALUE : INTEGER;
      C_M_AXI_PATCHES_ID_WIDTH : INTEGER;
      C_M_AXI_PATCHES_ADDR_WIDTH : INTEGER;
      C_M_AXI_PATCHES_DATA_WIDTH : INTEGER;
      C_M_AXI_PATCHES_AWUSER_WIDTH : INTEGER;
      C_M_AXI_PATCHES_ARUSER_WIDTH : INTEGER;
      C_M_AXI_PATCHES_WUSER_WIDTH : INTEGER;
      C_M_AXI_PATCHES_RUSER_WIDTH : INTEGER;
      C_M_AXI_PATCHES_BUSER_WIDTH : INTEGER;
      C_M_AXI_PATCHES_USER_VALUE : INTEGER;
      C_M_AXI_PATCHES_PROT_VALUE : INTEGER;
      C_M_AXI_PATCHES_CACHE_VALUE : INTEGER;
      C_M_AXI_POS_R_ID_WIDTH : INTEGER;
      C_M_AXI_POS_R_ADDR_WIDTH : INTEGER;
      C_M_AXI_POS_R_DATA_WIDTH : INTEGER;
      C_M_AXI_POS_R_AWUSER_WIDTH : INTEGER;
      C_M_AXI_POS_R_ARUSER_WIDTH : INTEGER;
      C_M_AXI_POS_R_WUSER_WIDTH : INTEGER;
      C_M_AXI_POS_R_RUSER_WIDTH : INTEGER;
      C_M_AXI_POS_R_BUSER_WIDTH : INTEGER;
      C_M_AXI_POS_R_USER_VALUE : INTEGER;
      C_M_AXI_POS_R_PROT_VALUE : INTEGER;
      C_M_AXI_POS_R_CACHE_VALUE : INTEGER;
      C_M_AXI_DEBUG_ID_WIDTH : INTEGER;
      C_M_AXI_DEBUG_ADDR_WIDTH : INTEGER;
      C_M_AXI_DEBUG_DATA_WIDTH : INTEGER;
      C_M_AXI_DEBUG_AWUSER_WIDTH : INTEGER;
      C_M_AXI_DEBUG_ARUSER_WIDTH : INTEGER;
      C_M_AXI_DEBUG_WUSER_WIDTH : INTEGER;
      C_M_AXI_DEBUG_RUSER_WIDTH : INTEGER;
      C_M_AXI_DEBUG_BUSER_WIDTH : INTEGER;
      C_M_AXI_DEBUG_USER_VALUE : INTEGER;
      C_M_AXI_DEBUG_PROT_VALUE : INTEGER;
      C_M_AXI_DEBUG_CACHE_VALUE : INTEGER
    );
    PORT (
      s_axi_ctrl_AWADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
      s_axi_ctrl_AWVALID : IN STD_LOGIC;
      s_axi_ctrl_AWREADY : OUT STD_LOGIC;
      s_axi_ctrl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_ctrl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_ctrl_WVALID : IN STD_LOGIC;
      s_axi_ctrl_WREADY : OUT STD_LOGIC;
      s_axi_ctrl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_ctrl_BVALID : OUT STD_LOGIC;
      s_axi_ctrl_BREADY : IN STD_LOGIC;
      s_axi_ctrl_ARADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
      s_axi_ctrl_ARVALID : IN STD_LOGIC;
      s_axi_ctrl_ARREADY : OUT STD_LOGIC;
      s_axi_ctrl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_ctrl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_ctrl_RVALID : OUT STD_LOGIC;
      s_axi_ctrl_RREADY : IN STD_LOGIC;
      s_axi_param_AWADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      s_axi_param_AWVALID : IN STD_LOGIC;
      s_axi_param_AWREADY : OUT STD_LOGIC;
      s_axi_param_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_param_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_param_WVALID : IN STD_LOGIC;
      s_axi_param_WREADY : OUT STD_LOGIC;
      s_axi_param_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_param_BVALID : OUT STD_LOGIC;
      s_axi_param_BREADY : IN STD_LOGIC;
      s_axi_param_ARADDR : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
      s_axi_param_ARVALID : IN STD_LOGIC;
      s_axi_param_ARREADY : OUT STD_LOGIC;
      s_axi_param_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_param_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_param_RVALID : OUT STD_LOGIC;
      s_axi_param_RREADY : IN STD_LOGIC;
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      interrupt : OUT STD_LOGIC;
      m_axi_pyr_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_pyr_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_pyr_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pyr_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pyr_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_AWVALID : OUT STD_LOGIC;
      m_axi_pyr_AWREADY : IN STD_LOGIC;
      m_axi_pyr_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_pyr_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_WLAST : OUT STD_LOGIC;
      m_axi_pyr_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_WVALID : OUT STD_LOGIC;
      m_axi_pyr_WREADY : IN STD_LOGIC;
      m_axi_pyr_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_BVALID : IN STD_LOGIC;
      m_axi_pyr_BREADY : OUT STD_LOGIC;
      m_axi_pyr_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_pyr_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_pyr_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pyr_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pyr_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pyr_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_ARVALID : OUT STD_LOGIC;
      m_axi_pyr_ARREADY : IN STD_LOGIC;
      m_axi_pyr_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_pyr_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pyr_RLAST : IN STD_LOGIC;
      m_axi_pyr_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pyr_RVALID : IN STD_LOGIC;
      m_axi_pyr_RREADY : OUT STD_LOGIC;
      m_axi_patches_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_patches_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_patches_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_patches_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_patches_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_AWVALID : OUT STD_LOGIC;
      m_axi_patches_AWREADY : IN STD_LOGIC;
      m_axi_patches_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_patches_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_WLAST : OUT STD_LOGIC;
      m_axi_patches_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_WVALID : OUT STD_LOGIC;
      m_axi_patches_WREADY : IN STD_LOGIC;
      m_axi_patches_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_BVALID : IN STD_LOGIC;
      m_axi_patches_BREADY : OUT STD_LOGIC;
      m_axi_patches_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_patches_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_patches_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_patches_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_patches_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_patches_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_ARVALID : OUT STD_LOGIC;
      m_axi_patches_ARREADY : IN STD_LOGIC;
      m_axi_patches_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_patches_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_patches_RLAST : IN STD_LOGIC;
      m_axi_patches_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_patches_RVALID : IN STD_LOGIC;
      m_axi_patches_RREADY : OUT STD_LOGIC;
      m_axi_pos_r_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_pos_r_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_pos_r_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pos_r_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pos_r_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_AWVALID : OUT STD_LOGIC;
      m_axi_pos_r_AWREADY : IN STD_LOGIC;
      m_axi_pos_r_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_pos_r_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_WLAST : OUT STD_LOGIC;
      m_axi_pos_r_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_WVALID : OUT STD_LOGIC;
      m_axi_pos_r_WREADY : IN STD_LOGIC;
      m_axi_pos_r_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_BVALID : IN STD_LOGIC;
      m_axi_pos_r_BREADY : OUT STD_LOGIC;
      m_axi_pos_r_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_pos_r_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_pos_r_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pos_r_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_pos_r_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_pos_r_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_ARVALID : OUT STD_LOGIC;
      m_axi_pos_r_ARREADY : IN STD_LOGIC;
      m_axi_pos_r_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_pos_r_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_pos_r_RLAST : IN STD_LOGIC;
      m_axi_pos_r_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_pos_r_RVALID : IN STD_LOGIC;
      m_axi_pos_r_RREADY : OUT STD_LOGIC;
      m_axi_debug_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_AWADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_debug_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_debug_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_debug_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_debug_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_AWVALID : OUT STD_LOGIC;
      m_axi_debug_AWREADY : IN STD_LOGIC;
      m_axi_debug_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_debug_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_WLAST : OUT STD_LOGIC;
      m_axi_debug_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_WVALID : OUT STD_LOGIC;
      m_axi_debug_WREADY : IN STD_LOGIC;
      m_axi_debug_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_BVALID : IN STD_LOGIC;
      m_axi_debug_BREADY : OUT STD_LOGIC;
      m_axi_debug_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_ARADDR : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_debug_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_debug_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_debug_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_debug_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_debug_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_ARVALID : OUT STD_LOGIC;
      m_axi_debug_ARREADY : IN STD_LOGIC;
      m_axi_debug_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_debug_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_debug_RLAST : IN STD_LOGIC;
      m_axi_debug_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_debug_RVALID : IN STD_LOGIC;
      m_axi_debug_RREADY : OUT STD_LOGIC
    );
  END COMPONENT batch_align2D;
  ATTRIBUTE IP_DEFINITION_SOURCE : STRING;
  ATTRIBUTE IP_DEFINITION_SOURCE OF design_1_batch_align2D_0_0_arch: ARCHITECTURE IS "HLS";
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_PARAMETER : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_debug_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_debug, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN " & 
"design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_debug_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_debug AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_pos_r_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_pos_r, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN " & 
"design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pos_r_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pos_r AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_patches_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_patches, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAI" & 
"N design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_patches_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_patches AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_pyr_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_pyr, ADDR_WIDTH 64, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN de" & 
"sign_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_pyr_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_pyr AWADDR";
  ATTRIBUTE X_INTERFACE_PARAMETER OF interrupt: SIGNAL IS "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {INTERRUPT {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, PortWidth 1";
  ATTRIBUTE X_INTERFACE_INFO OF interrupt: SIGNAL IS "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_rst_n: SIGNAL IS "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_clk: SIGNAL IS "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_param:m_axi_pyr:m_axi_patches:m_axi_pos_r:m_axi_debug, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}}" & 
" value 0}}}}, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param AWVALID";
  ATTRIBUTE X_INTERFACE_PARAMETER OF s_axi_param_AWADDR: SIGNAL IS "XIL_INTERFACENAME s_axi_param, ADDR_WIDTH 7, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_" & 
"WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_param_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_param AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWVALID";
  ATTRIBUTE X_INTERFACE_PARAMETER OF s_axi_ctrl_AWADDR: SIGNAL IS "XIL_INTERFACENAME s_axi_ctrl, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_W" & 
"IDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR";
BEGIN
  U0 : batch_align2D
    GENERIC MAP (
      C_S_AXI_CTRL_ADDR_WIDTH => 6,
      C_S_AXI_CTRL_DATA_WIDTH => 32,
      C_S_AXI_PARAM_ADDR_WIDTH => 7,
      C_S_AXI_PARAM_DATA_WIDTH => 32,
      C_M_AXI_PYR_ID_WIDTH => 1,
      C_M_AXI_PYR_ADDR_WIDTH => 64,
      C_M_AXI_PYR_DATA_WIDTH => 32,
      C_M_AXI_PYR_AWUSER_WIDTH => 1,
      C_M_AXI_PYR_ARUSER_WIDTH => 1,
      C_M_AXI_PYR_WUSER_WIDTH => 1,
      C_M_AXI_PYR_RUSER_WIDTH => 1,
      C_M_AXI_PYR_BUSER_WIDTH => 1,
      C_M_AXI_PYR_USER_VALUE => 0,
      C_M_AXI_PYR_PROT_VALUE => 0,
      C_M_AXI_PYR_CACHE_VALUE => 3,
      C_M_AXI_PATCHES_ID_WIDTH => 1,
      C_M_AXI_PATCHES_ADDR_WIDTH => 64,
      C_M_AXI_PATCHES_DATA_WIDTH => 32,
      C_M_AXI_PATCHES_AWUSER_WIDTH => 1,
      C_M_AXI_PATCHES_ARUSER_WIDTH => 1,
      C_M_AXI_PATCHES_WUSER_WIDTH => 1,
      C_M_AXI_PATCHES_RUSER_WIDTH => 1,
      C_M_AXI_PATCHES_BUSER_WIDTH => 1,
      C_M_AXI_PATCHES_USER_VALUE => 0,
      C_M_AXI_PATCHES_PROT_VALUE => 0,
      C_M_AXI_PATCHES_CACHE_VALUE => 3,
      C_M_AXI_POS_R_ID_WIDTH => 1,
      C_M_AXI_POS_R_ADDR_WIDTH => 64,
      C_M_AXI_POS_R_DATA_WIDTH => 32,
      C_M_AXI_POS_R_AWUSER_WIDTH => 1,
      C_M_AXI_POS_R_ARUSER_WIDTH => 1,
      C_M_AXI_POS_R_WUSER_WIDTH => 1,
      C_M_AXI_POS_R_RUSER_WIDTH => 1,
      C_M_AXI_POS_R_BUSER_WIDTH => 1,
      C_M_AXI_POS_R_USER_VALUE => 0,
      C_M_AXI_POS_R_PROT_VALUE => 0,
      C_M_AXI_POS_R_CACHE_VALUE => 3,
      C_M_AXI_DEBUG_ID_WIDTH => 1,
      C_M_AXI_DEBUG_ADDR_WIDTH => 64,
      C_M_AXI_DEBUG_DATA_WIDTH => 32,
      C_M_AXI_DEBUG_AWUSER_WIDTH => 1,
      C_M_AXI_DEBUG_ARUSER_WIDTH => 1,
      C_M_AXI_DEBUG_WUSER_WIDTH => 1,
      C_M_AXI_DEBUG_RUSER_WIDTH => 1,
      C_M_AXI_DEBUG_BUSER_WIDTH => 1,
      C_M_AXI_DEBUG_USER_VALUE => 0,
      C_M_AXI_DEBUG_PROT_VALUE => 0,
      C_M_AXI_DEBUG_CACHE_VALUE => 3
    )
    PORT MAP (
      s_axi_ctrl_AWADDR => s_axi_ctrl_AWADDR,
      s_axi_ctrl_AWVALID => s_axi_ctrl_AWVALID,
      s_axi_ctrl_AWREADY => s_axi_ctrl_AWREADY,
      s_axi_ctrl_WDATA => s_axi_ctrl_WDATA,
      s_axi_ctrl_WSTRB => s_axi_ctrl_WSTRB,
      s_axi_ctrl_WVALID => s_axi_ctrl_WVALID,
      s_axi_ctrl_WREADY => s_axi_ctrl_WREADY,
      s_axi_ctrl_BRESP => s_axi_ctrl_BRESP,
      s_axi_ctrl_BVALID => s_axi_ctrl_BVALID,
      s_axi_ctrl_BREADY => s_axi_ctrl_BREADY,
      s_axi_ctrl_ARADDR => s_axi_ctrl_ARADDR,
      s_axi_ctrl_ARVALID => s_axi_ctrl_ARVALID,
      s_axi_ctrl_ARREADY => s_axi_ctrl_ARREADY,
      s_axi_ctrl_RDATA => s_axi_ctrl_RDATA,
      s_axi_ctrl_RRESP => s_axi_ctrl_RRESP,
      s_axi_ctrl_RVALID => s_axi_ctrl_RVALID,
      s_axi_ctrl_RREADY => s_axi_ctrl_RREADY,
      s_axi_param_AWADDR => s_axi_param_AWADDR,
      s_axi_param_AWVALID => s_axi_param_AWVALID,
      s_axi_param_AWREADY => s_axi_param_AWREADY,
      s_axi_param_WDATA => s_axi_param_WDATA,
      s_axi_param_WSTRB => s_axi_param_WSTRB,
      s_axi_param_WVALID => s_axi_param_WVALID,
      s_axi_param_WREADY => s_axi_param_WREADY,
      s_axi_param_BRESP => s_axi_param_BRESP,
      s_axi_param_BVALID => s_axi_param_BVALID,
      s_axi_param_BREADY => s_axi_param_BREADY,
      s_axi_param_ARADDR => s_axi_param_ARADDR,
      s_axi_param_ARVALID => s_axi_param_ARVALID,
      s_axi_param_ARREADY => s_axi_param_ARREADY,
      s_axi_param_RDATA => s_axi_param_RDATA,
      s_axi_param_RRESP => s_axi_param_RRESP,
      s_axi_param_RVALID => s_axi_param_RVALID,
      s_axi_param_RREADY => s_axi_param_RREADY,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      interrupt => interrupt,
      m_axi_pyr_AWADDR => m_axi_pyr_AWADDR,
      m_axi_pyr_AWLEN => m_axi_pyr_AWLEN,
      m_axi_pyr_AWSIZE => m_axi_pyr_AWSIZE,
      m_axi_pyr_AWBURST => m_axi_pyr_AWBURST,
      m_axi_pyr_AWLOCK => m_axi_pyr_AWLOCK,
      m_axi_pyr_AWREGION => m_axi_pyr_AWREGION,
      m_axi_pyr_AWCACHE => m_axi_pyr_AWCACHE,
      m_axi_pyr_AWPROT => m_axi_pyr_AWPROT,
      m_axi_pyr_AWQOS => m_axi_pyr_AWQOS,
      m_axi_pyr_AWVALID => m_axi_pyr_AWVALID,
      m_axi_pyr_AWREADY => m_axi_pyr_AWREADY,
      m_axi_pyr_WDATA => m_axi_pyr_WDATA,
      m_axi_pyr_WSTRB => m_axi_pyr_WSTRB,
      m_axi_pyr_WLAST => m_axi_pyr_WLAST,
      m_axi_pyr_WVALID => m_axi_pyr_WVALID,
      m_axi_pyr_WREADY => m_axi_pyr_WREADY,
      m_axi_pyr_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pyr_BRESP => m_axi_pyr_BRESP,
      m_axi_pyr_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pyr_BVALID => m_axi_pyr_BVALID,
      m_axi_pyr_BREADY => m_axi_pyr_BREADY,
      m_axi_pyr_ARADDR => m_axi_pyr_ARADDR,
      m_axi_pyr_ARLEN => m_axi_pyr_ARLEN,
      m_axi_pyr_ARSIZE => m_axi_pyr_ARSIZE,
      m_axi_pyr_ARBURST => m_axi_pyr_ARBURST,
      m_axi_pyr_ARLOCK => m_axi_pyr_ARLOCK,
      m_axi_pyr_ARREGION => m_axi_pyr_ARREGION,
      m_axi_pyr_ARCACHE => m_axi_pyr_ARCACHE,
      m_axi_pyr_ARPROT => m_axi_pyr_ARPROT,
      m_axi_pyr_ARQOS => m_axi_pyr_ARQOS,
      m_axi_pyr_ARVALID => m_axi_pyr_ARVALID,
      m_axi_pyr_ARREADY => m_axi_pyr_ARREADY,
      m_axi_pyr_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pyr_RDATA => m_axi_pyr_RDATA,
      m_axi_pyr_RRESP => m_axi_pyr_RRESP,
      m_axi_pyr_RLAST => m_axi_pyr_RLAST,
      m_axi_pyr_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pyr_RVALID => m_axi_pyr_RVALID,
      m_axi_pyr_RREADY => m_axi_pyr_RREADY,
      m_axi_patches_AWADDR => m_axi_patches_AWADDR,
      m_axi_patches_AWLEN => m_axi_patches_AWLEN,
      m_axi_patches_AWSIZE => m_axi_patches_AWSIZE,
      m_axi_patches_AWBURST => m_axi_patches_AWBURST,
      m_axi_patches_AWLOCK => m_axi_patches_AWLOCK,
      m_axi_patches_AWREGION => m_axi_patches_AWREGION,
      m_axi_patches_AWCACHE => m_axi_patches_AWCACHE,
      m_axi_patches_AWPROT => m_axi_patches_AWPROT,
      m_axi_patches_AWQOS => m_axi_patches_AWQOS,
      m_axi_patches_AWVALID => m_axi_patches_AWVALID,
      m_axi_patches_AWREADY => m_axi_patches_AWREADY,
      m_axi_patches_WDATA => m_axi_patches_WDATA,
      m_axi_patches_WSTRB => m_axi_patches_WSTRB,
      m_axi_patches_WLAST => m_axi_patches_WLAST,
      m_axi_patches_WVALID => m_axi_patches_WVALID,
      m_axi_patches_WREADY => m_axi_patches_WREADY,
      m_axi_patches_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_patches_BRESP => m_axi_patches_BRESP,
      m_axi_patches_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_patches_BVALID => m_axi_patches_BVALID,
      m_axi_patches_BREADY => m_axi_patches_BREADY,
      m_axi_patches_ARADDR => m_axi_patches_ARADDR,
      m_axi_patches_ARLEN => m_axi_patches_ARLEN,
      m_axi_patches_ARSIZE => m_axi_patches_ARSIZE,
      m_axi_patches_ARBURST => m_axi_patches_ARBURST,
      m_axi_patches_ARLOCK => m_axi_patches_ARLOCK,
      m_axi_patches_ARREGION => m_axi_patches_ARREGION,
      m_axi_patches_ARCACHE => m_axi_patches_ARCACHE,
      m_axi_patches_ARPROT => m_axi_patches_ARPROT,
      m_axi_patches_ARQOS => m_axi_patches_ARQOS,
      m_axi_patches_ARVALID => m_axi_patches_ARVALID,
      m_axi_patches_ARREADY => m_axi_patches_ARREADY,
      m_axi_patches_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_patches_RDATA => m_axi_patches_RDATA,
      m_axi_patches_RRESP => m_axi_patches_RRESP,
      m_axi_patches_RLAST => m_axi_patches_RLAST,
      m_axi_patches_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_patches_RVALID => m_axi_patches_RVALID,
      m_axi_patches_RREADY => m_axi_patches_RREADY,
      m_axi_pos_r_AWADDR => m_axi_pos_r_AWADDR,
      m_axi_pos_r_AWLEN => m_axi_pos_r_AWLEN,
      m_axi_pos_r_AWSIZE => m_axi_pos_r_AWSIZE,
      m_axi_pos_r_AWBURST => m_axi_pos_r_AWBURST,
      m_axi_pos_r_AWLOCK => m_axi_pos_r_AWLOCK,
      m_axi_pos_r_AWREGION => m_axi_pos_r_AWREGION,
      m_axi_pos_r_AWCACHE => m_axi_pos_r_AWCACHE,
      m_axi_pos_r_AWPROT => m_axi_pos_r_AWPROT,
      m_axi_pos_r_AWQOS => m_axi_pos_r_AWQOS,
      m_axi_pos_r_AWVALID => m_axi_pos_r_AWVALID,
      m_axi_pos_r_AWREADY => m_axi_pos_r_AWREADY,
      m_axi_pos_r_WDATA => m_axi_pos_r_WDATA,
      m_axi_pos_r_WSTRB => m_axi_pos_r_WSTRB,
      m_axi_pos_r_WLAST => m_axi_pos_r_WLAST,
      m_axi_pos_r_WVALID => m_axi_pos_r_WVALID,
      m_axi_pos_r_WREADY => m_axi_pos_r_WREADY,
      m_axi_pos_r_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pos_r_BRESP => m_axi_pos_r_BRESP,
      m_axi_pos_r_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pos_r_BVALID => m_axi_pos_r_BVALID,
      m_axi_pos_r_BREADY => m_axi_pos_r_BREADY,
      m_axi_pos_r_ARADDR => m_axi_pos_r_ARADDR,
      m_axi_pos_r_ARLEN => m_axi_pos_r_ARLEN,
      m_axi_pos_r_ARSIZE => m_axi_pos_r_ARSIZE,
      m_axi_pos_r_ARBURST => m_axi_pos_r_ARBURST,
      m_axi_pos_r_ARLOCK => m_axi_pos_r_ARLOCK,
      m_axi_pos_r_ARREGION => m_axi_pos_r_ARREGION,
      m_axi_pos_r_ARCACHE => m_axi_pos_r_ARCACHE,
      m_axi_pos_r_ARPROT => m_axi_pos_r_ARPROT,
      m_axi_pos_r_ARQOS => m_axi_pos_r_ARQOS,
      m_axi_pos_r_ARVALID => m_axi_pos_r_ARVALID,
      m_axi_pos_r_ARREADY => m_axi_pos_r_ARREADY,
      m_axi_pos_r_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pos_r_RDATA => m_axi_pos_r_RDATA,
      m_axi_pos_r_RRESP => m_axi_pos_r_RRESP,
      m_axi_pos_r_RLAST => m_axi_pos_r_RLAST,
      m_axi_pos_r_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_pos_r_RVALID => m_axi_pos_r_RVALID,
      m_axi_pos_r_RREADY => m_axi_pos_r_RREADY,
      m_axi_debug_AWADDR => m_axi_debug_AWADDR,
      m_axi_debug_AWLEN => m_axi_debug_AWLEN,
      m_axi_debug_AWSIZE => m_axi_debug_AWSIZE,
      m_axi_debug_AWBURST => m_axi_debug_AWBURST,
      m_axi_debug_AWLOCK => m_axi_debug_AWLOCK,
      m_axi_debug_AWREGION => m_axi_debug_AWREGION,
      m_axi_debug_AWCACHE => m_axi_debug_AWCACHE,
      m_axi_debug_AWPROT => m_axi_debug_AWPROT,
      m_axi_debug_AWQOS => m_axi_debug_AWQOS,
      m_axi_debug_AWVALID => m_axi_debug_AWVALID,
      m_axi_debug_AWREADY => m_axi_debug_AWREADY,
      m_axi_debug_WDATA => m_axi_debug_WDATA,
      m_axi_debug_WSTRB => m_axi_debug_WSTRB,
      m_axi_debug_WLAST => m_axi_debug_WLAST,
      m_axi_debug_WVALID => m_axi_debug_WVALID,
      m_axi_debug_WREADY => m_axi_debug_WREADY,
      m_axi_debug_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_debug_BRESP => m_axi_debug_BRESP,
      m_axi_debug_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_debug_BVALID => m_axi_debug_BVALID,
      m_axi_debug_BREADY => m_axi_debug_BREADY,
      m_axi_debug_ARADDR => m_axi_debug_ARADDR,
      m_axi_debug_ARLEN => m_axi_debug_ARLEN,
      m_axi_debug_ARSIZE => m_axi_debug_ARSIZE,
      m_axi_debug_ARBURST => m_axi_debug_ARBURST,
      m_axi_debug_ARLOCK => m_axi_debug_ARLOCK,
      m_axi_debug_ARREGION => m_axi_debug_ARREGION,
      m_axi_debug_ARCACHE => m_axi_debug_ARCACHE,
      m_axi_debug_ARPROT => m_axi_debug_ARPROT,
      m_axi_debug_ARQOS => m_axi_debug_ARQOS,
      m_axi_debug_ARVALID => m_axi_debug_ARVALID,
      m_axi_debug_ARREADY => m_axi_debug_ARREADY,
      m_axi_debug_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_debug_RDATA => m_axi_debug_RDATA,
      m_axi_debug_RRESP => m_axi_debug_RRESP,
      m_axi_debug_RLAST => m_axi_debug_RLAST,
      m_axi_debug_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_debug_RVALID => m_axi_debug_RVALID,
      m_axi_debug_RREADY => m_axi_debug_RREADY
    );
END design_1_batch_align2D_0_0_arch;
