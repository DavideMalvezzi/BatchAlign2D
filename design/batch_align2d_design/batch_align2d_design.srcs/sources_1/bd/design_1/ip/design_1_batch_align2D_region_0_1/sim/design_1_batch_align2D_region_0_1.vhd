-- (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
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

-- IP VLNV: xilinx.com:hls:batch_align2D_region:1.0
-- IP Revision: 2001052040

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY design_1_batch_align2D_region_0_1 IS
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
    s_axi_param_AWADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    s_axi_param_AWVALID : IN STD_LOGIC;
    s_axi_param_AWREADY : OUT STD_LOGIC;
    s_axi_param_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_param_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_param_WVALID : IN STD_LOGIC;
    s_axi_param_WREADY : OUT STD_LOGIC;
    s_axi_param_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_param_BVALID : OUT STD_LOGIC;
    s_axi_param_BREADY : IN STD_LOGIC;
    s_axi_param_ARADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    s_axi_param_ARVALID : IN STD_LOGIC;
    s_axi_param_ARREADY : OUT STD_LOGIC;
    s_axi_param_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_param_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_param_RVALID : OUT STD_LOGIC;
    s_axi_param_RREADY : IN STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    interrupt : OUT STD_LOGIC;
    m_axi_my_region_data_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_data_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_region_data_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_data_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_data_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_AWVALID : OUT STD_LOGIC;
    m_axi_my_region_data_AWREADY : IN STD_LOGIC;
    m_axi_my_region_data_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_data_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_WLAST : OUT STD_LOGIC;
    m_axi_my_region_data_WVALID : OUT STD_LOGIC;
    m_axi_my_region_data_WREADY : IN STD_LOGIC;
    m_axi_my_region_data_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_BVALID : IN STD_LOGIC;
    m_axi_my_region_data_BREADY : OUT STD_LOGIC;
    m_axi_my_region_data_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_data_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_region_data_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_data_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_data_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_data_ARVALID : OUT STD_LOGIC;
    m_axi_my_region_data_ARREADY : IN STD_LOGIC;
    m_axi_my_region_data_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_data_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_data_RLAST : IN STD_LOGIC;
    m_axi_my_region_data_RVALID : IN STD_LOGIC;
    m_axi_my_region_data_RREADY : OUT STD_LOGIC;
    m_axi_my_region_fcoord_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_fcoord_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_region_fcoord_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_fcoord_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_fcoord_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_AWVALID : OUT STD_LOGIC;
    m_axi_my_region_fcoord_AWREADY : IN STD_LOGIC;
    m_axi_my_region_fcoord_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_fcoord_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_WLAST : OUT STD_LOGIC;
    m_axi_my_region_fcoord_WVALID : OUT STD_LOGIC;
    m_axi_my_region_fcoord_WREADY : IN STD_LOGIC;
    m_axi_my_region_fcoord_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_BVALID : IN STD_LOGIC;
    m_axi_my_region_fcoord_BREADY : OUT STD_LOGIC;
    m_axi_my_region_fcoord_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_fcoord_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_region_fcoord_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_fcoord_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_region_fcoord_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_region_fcoord_ARVALID : OUT STD_LOGIC;
    m_axi_my_region_fcoord_ARREADY : IN STD_LOGIC;
    m_axi_my_region_fcoord_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_region_fcoord_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_region_fcoord_RLAST : IN STD_LOGIC;
    m_axi_my_region_fcoord_RVALID : IN STD_LOGIC;
    m_axi_my_region_fcoord_RREADY : OUT STD_LOGIC;
    m_axi_my_patches_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_patches_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_patches_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_patches_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_patches_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_AWVALID : OUT STD_LOGIC;
    m_axi_my_patches_AWREADY : IN STD_LOGIC;
    m_axi_my_patches_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_patches_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_WLAST : OUT STD_LOGIC;
    m_axi_my_patches_WVALID : OUT STD_LOGIC;
    m_axi_my_patches_WREADY : IN STD_LOGIC;
    m_axi_my_patches_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_BVALID : IN STD_LOGIC;
    m_axi_my_patches_BREADY : OUT STD_LOGIC;
    m_axi_my_patches_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_patches_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_patches_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_patches_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_patches_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_patches_ARVALID : OUT STD_LOGIC;
    m_axi_my_patches_ARREADY : IN STD_LOGIC;
    m_axi_my_patches_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_patches_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_patches_RLAST : IN STD_LOGIC;
    m_axi_my_patches_RVALID : IN STD_LOGIC;
    m_axi_my_patches_RREADY : OUT STD_LOGIC;
    m_axi_my_pos_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_pos_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_pos_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_pos_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_pos_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_AWVALID : OUT STD_LOGIC;
    m_axi_my_pos_AWREADY : IN STD_LOGIC;
    m_axi_my_pos_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_pos_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_WLAST : OUT STD_LOGIC;
    m_axi_my_pos_WVALID : OUT STD_LOGIC;
    m_axi_my_pos_WREADY : IN STD_LOGIC;
    m_axi_my_pos_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_BVALID : IN STD_LOGIC;
    m_axi_my_pos_BREADY : OUT STD_LOGIC;
    m_axi_my_pos_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_pos_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_pos_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_pos_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_pos_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_pos_ARVALID : OUT STD_LOGIC;
    m_axi_my_pos_ARREADY : IN STD_LOGIC;
    m_axi_my_pos_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_pos_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_pos_RLAST : IN STD_LOGIC;
    m_axi_my_pos_RVALID : IN STD_LOGIC;
    m_axi_my_pos_RREADY : OUT STD_LOGIC;
    m_axi_my_debug_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_debug_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_AWVALID : OUT STD_LOGIC;
    m_axi_my_debug_AWREADY : IN STD_LOGIC;
    m_axi_my_debug_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_WLAST : OUT STD_LOGIC;
    m_axi_my_debug_WVALID : OUT STD_LOGIC;
    m_axi_my_debug_WREADY : IN STD_LOGIC;
    m_axi_my_debug_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_BVALID : IN STD_LOGIC;
    m_axi_my_debug_BREADY : OUT STD_LOGIC;
    m_axi_my_debug_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_debug_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_ARVALID : OUT STD_LOGIC;
    m_axi_my_debug_ARREADY : IN STD_LOGIC;
    m_axi_my_debug_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_RLAST : IN STD_LOGIC;
    m_axi_my_debug_RVALID : IN STD_LOGIC;
    m_axi_my_debug_RREADY : OUT STD_LOGIC;
    m_axi_my_debug_array_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_array_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_debug_array_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_array_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_array_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_AWVALID : OUT STD_LOGIC;
    m_axi_my_debug_array_AWREADY : IN STD_LOGIC;
    m_axi_my_debug_array_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_array_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_WLAST : OUT STD_LOGIC;
    m_axi_my_debug_array_WVALID : OUT STD_LOGIC;
    m_axi_my_debug_array_WREADY : IN STD_LOGIC;
    m_axi_my_debug_array_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_BVALID : IN STD_LOGIC;
    m_axi_my_debug_array_BREADY : OUT STD_LOGIC;
    m_axi_my_debug_array_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_array_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_my_debug_array_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_array_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_my_debug_array_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_my_debug_array_ARVALID : OUT STD_LOGIC;
    m_axi_my_debug_array_ARREADY : IN STD_LOGIC;
    m_axi_my_debug_array_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_my_debug_array_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_my_debug_array_RLAST : IN STD_LOGIC;
    m_axi_my_debug_array_RVALID : IN STD_LOGIC;
    m_axi_my_debug_array_RREADY : OUT STD_LOGIC
  );
END design_1_batch_align2D_region_0_1;

ARCHITECTURE design_1_batch_align2D_region_0_1_arch OF design_1_batch_align2D_region_0_1 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : STRING;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF design_1_batch_align2D_region_0_1_arch: ARCHITECTURE IS "yes";
  COMPONENT batch_align2D_region IS
    GENERIC (
      C_S_AXI_CTRL_ADDR_WIDTH : INTEGER;
      C_S_AXI_CTRL_DATA_WIDTH : INTEGER;
      C_S_AXI_PARAM_ADDR_WIDTH : INTEGER;
      C_S_AXI_PARAM_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_ID_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_DATA_USER_VALUE : INTEGER;
      C_M_AXI_MY_REGION_DATA_PROT_VALUE : INTEGER;
      C_M_AXI_MY_REGION_DATA_CACHE_VALUE : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_ID_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_USER_VALUE : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_PROT_VALUE : INTEGER;
      C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE : INTEGER;
      C_M_AXI_MY_PATCHES_ID_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_PATCHES_USER_VALUE : INTEGER;
      C_M_AXI_MY_PATCHES_PROT_VALUE : INTEGER;
      C_M_AXI_MY_PATCHES_CACHE_VALUE : INTEGER;
      C_M_AXI_MY_POS_ID_WIDTH : INTEGER;
      C_M_AXI_MY_POS_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_POS_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_POS_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_POS_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_POS_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_POS_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_POS_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_POS_USER_VALUE : INTEGER;
      C_M_AXI_MY_POS_PROT_VALUE : INTEGER;
      C_M_AXI_MY_POS_CACHE_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_ID_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_USER_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_PROT_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_CACHE_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_ADDR_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE : INTEGER;
      C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE : INTEGER
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
      s_axi_param_AWADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
      s_axi_param_AWVALID : IN STD_LOGIC;
      s_axi_param_AWREADY : OUT STD_LOGIC;
      s_axi_param_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_param_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_param_WVALID : IN STD_LOGIC;
      s_axi_param_WREADY : OUT STD_LOGIC;
      s_axi_param_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_param_BVALID : OUT STD_LOGIC;
      s_axi_param_BREADY : IN STD_LOGIC;
      s_axi_param_ARADDR : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
      s_axi_param_ARVALID : IN STD_LOGIC;
      s_axi_param_ARREADY : OUT STD_LOGIC;
      s_axi_param_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_param_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_param_RVALID : OUT STD_LOGIC;
      s_axi_param_RREADY : IN STD_LOGIC;
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      interrupt : OUT STD_LOGIC;
      m_axi_my_region_data_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_data_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_region_data_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_data_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_data_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_AWVALID : OUT STD_LOGIC;
      m_axi_my_region_data_AWREADY : IN STD_LOGIC;
      m_axi_my_region_data_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_data_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_WLAST : OUT STD_LOGIC;
      m_axi_my_region_data_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_WVALID : OUT STD_LOGIC;
      m_axi_my_region_data_WREADY : IN STD_LOGIC;
      m_axi_my_region_data_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_BVALID : IN STD_LOGIC;
      m_axi_my_region_data_BREADY : OUT STD_LOGIC;
      m_axi_my_region_data_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_data_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_region_data_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_data_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_data_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_data_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_ARVALID : OUT STD_LOGIC;
      m_axi_my_region_data_ARREADY : IN STD_LOGIC;
      m_axi_my_region_data_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_data_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_data_RLAST : IN STD_LOGIC;
      m_axi_my_region_data_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_data_RVALID : IN STD_LOGIC;
      m_axi_my_region_data_RREADY : OUT STD_LOGIC;
      m_axi_my_region_fcoord_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_fcoord_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_region_fcoord_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_fcoord_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_fcoord_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_AWVALID : OUT STD_LOGIC;
      m_axi_my_region_fcoord_AWREADY : IN STD_LOGIC;
      m_axi_my_region_fcoord_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_fcoord_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_WLAST : OUT STD_LOGIC;
      m_axi_my_region_fcoord_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_WVALID : OUT STD_LOGIC;
      m_axi_my_region_fcoord_WREADY : IN STD_LOGIC;
      m_axi_my_region_fcoord_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_BVALID : IN STD_LOGIC;
      m_axi_my_region_fcoord_BREADY : OUT STD_LOGIC;
      m_axi_my_region_fcoord_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_fcoord_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_region_fcoord_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_fcoord_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_region_fcoord_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_region_fcoord_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_ARVALID : OUT STD_LOGIC;
      m_axi_my_region_fcoord_ARREADY : IN STD_LOGIC;
      m_axi_my_region_fcoord_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_region_fcoord_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_region_fcoord_RLAST : IN STD_LOGIC;
      m_axi_my_region_fcoord_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_region_fcoord_RVALID : IN STD_LOGIC;
      m_axi_my_region_fcoord_RREADY : OUT STD_LOGIC;
      m_axi_my_patches_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_patches_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_patches_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_patches_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_patches_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_AWVALID : OUT STD_LOGIC;
      m_axi_my_patches_AWREADY : IN STD_LOGIC;
      m_axi_my_patches_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_patches_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_WLAST : OUT STD_LOGIC;
      m_axi_my_patches_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_WVALID : OUT STD_LOGIC;
      m_axi_my_patches_WREADY : IN STD_LOGIC;
      m_axi_my_patches_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_BVALID : IN STD_LOGIC;
      m_axi_my_patches_BREADY : OUT STD_LOGIC;
      m_axi_my_patches_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_patches_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_patches_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_patches_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_patches_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_patches_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_ARVALID : OUT STD_LOGIC;
      m_axi_my_patches_ARREADY : IN STD_LOGIC;
      m_axi_my_patches_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_patches_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_patches_RLAST : IN STD_LOGIC;
      m_axi_my_patches_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_patches_RVALID : IN STD_LOGIC;
      m_axi_my_patches_RREADY : OUT STD_LOGIC;
      m_axi_my_pos_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_pos_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_pos_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_pos_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_pos_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_AWVALID : OUT STD_LOGIC;
      m_axi_my_pos_AWREADY : IN STD_LOGIC;
      m_axi_my_pos_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_pos_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_WLAST : OUT STD_LOGIC;
      m_axi_my_pos_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_WVALID : OUT STD_LOGIC;
      m_axi_my_pos_WREADY : IN STD_LOGIC;
      m_axi_my_pos_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_BVALID : IN STD_LOGIC;
      m_axi_my_pos_BREADY : OUT STD_LOGIC;
      m_axi_my_pos_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_pos_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_pos_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_pos_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_pos_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_pos_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_ARVALID : OUT STD_LOGIC;
      m_axi_my_pos_ARREADY : IN STD_LOGIC;
      m_axi_my_pos_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_pos_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_pos_RLAST : IN STD_LOGIC;
      m_axi_my_pos_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_pos_RVALID : IN STD_LOGIC;
      m_axi_my_pos_RREADY : OUT STD_LOGIC;
      m_axi_my_debug_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_debug_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_AWVALID : OUT STD_LOGIC;
      m_axi_my_debug_AWREADY : IN STD_LOGIC;
      m_axi_my_debug_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_WLAST : OUT STD_LOGIC;
      m_axi_my_debug_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_WVALID : OUT STD_LOGIC;
      m_axi_my_debug_WREADY : IN STD_LOGIC;
      m_axi_my_debug_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_BVALID : IN STD_LOGIC;
      m_axi_my_debug_BREADY : OUT STD_LOGIC;
      m_axi_my_debug_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_debug_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_ARVALID : OUT STD_LOGIC;
      m_axi_my_debug_ARREADY : IN STD_LOGIC;
      m_axi_my_debug_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_RLAST : IN STD_LOGIC;
      m_axi_my_debug_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_RVALID : IN STD_LOGIC;
      m_axi_my_debug_RREADY : OUT STD_LOGIC;
      m_axi_my_debug_array_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_array_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_debug_array_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_array_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_array_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_AWVALID : OUT STD_LOGIC;
      m_axi_my_debug_array_AWREADY : IN STD_LOGIC;
      m_axi_my_debug_array_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_WDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_array_WSTRB : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_WLAST : OUT STD_LOGIC;
      m_axi_my_debug_array_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_WVALID : OUT STD_LOGIC;
      m_axi_my_debug_array_WREADY : IN STD_LOGIC;
      m_axi_my_debug_array_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_BVALID : IN STD_LOGIC;
      m_axi_my_debug_array_BREADY : OUT STD_LOGIC;
      m_axi_my_debug_array_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_array_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_my_debug_array_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_array_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_my_debug_array_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_my_debug_array_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_ARVALID : OUT STD_LOGIC;
      m_axi_my_debug_array_ARREADY : IN STD_LOGIC;
      m_axi_my_debug_array_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_RDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_my_debug_array_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_my_debug_array_RLAST : IN STD_LOGIC;
      m_axi_my_debug_array_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_my_debug_array_RVALID : IN STD_LOGIC;
      m_axi_my_debug_array_RREADY : OUT STD_LOGIC
    );
  END COMPONENT batch_align2D_region;
  ATTRIBUTE IP_DEFINITION_SOURCE : STRING;
  ATTRIBUTE IP_DEFINITION_SOURCE OF design_1_batch_align2D_region_0_1_arch: ARCHITECTURE IS "HLS";
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_PARAMETER : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_debug_array_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_debug_array, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CL" & 
"K_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_array_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug_array AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_debug_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_debug, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMA" & 
"IN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_debug_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_debug AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_pos_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_pos, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN" & 
" design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_pos_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_pos AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_patches_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_patches, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOM" & 
"AIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_patches_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_patches AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_region_fcoord_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_region_fcoord, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, C" & 
"LK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_fcoord_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_fcoord AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWLEN";
  ATTRIBUTE X_INTERFACE_PARAMETER OF m_axi_my_region_data_AWADDR: SIGNAL IS "XIL_INTERFACENAME m_axi_my_region_data, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 0, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 99990005, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK" & 
"_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_my_region_data_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_my_region_data AWADDR";
  ATTRIBUTE X_INTERFACE_PARAMETER OF interrupt: SIGNAL IS "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {INTERRUPT {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, PortWidth 1";
  ATTRIBUTE X_INTERFACE_INFO OF interrupt: SIGNAL IS "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_rst_n: SIGNAL IS "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_clk: SIGNAL IS "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_ctrl:s_axi_param:m_axi_my_region_data:m_axi_my_region_fcoord:m_axi_my_patches:m_axi_my_pos:m_axi_my_debug:m_axi_my_debug_array, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_t" & 
"ype immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, INSERT_VIP 0";
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
  ATTRIBUTE X_INTERFACE_PARAMETER OF s_axi_param_AWADDR: SIGNAL IS "XIL_INTERFACENAME s_axi_param, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 99990005, ID_" & 
"WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
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
"IDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_1_pl_clk0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_ctrl_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR";
BEGIN
  U0 : batch_align2D_region
    GENERIC MAP (
      C_S_AXI_CTRL_ADDR_WIDTH => 6,
      C_S_AXI_CTRL_DATA_WIDTH => 32,
      C_S_AXI_PARAM_ADDR_WIDTH => 6,
      C_S_AXI_PARAM_DATA_WIDTH => 32,
      C_M_AXI_MY_REGION_DATA_ID_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_ADDR_WIDTH => 32,
      C_M_AXI_MY_REGION_DATA_DATA_WIDTH => 32,
      C_M_AXI_MY_REGION_DATA_AWUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_ARUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_WUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_RUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_BUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_DATA_USER_VALUE => 0,
      C_M_AXI_MY_REGION_DATA_PROT_VALUE => 0,
      C_M_AXI_MY_REGION_DATA_CACHE_VALUE => 3,
      C_M_AXI_MY_REGION_FCOORD_ID_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_ADDR_WIDTH => 32,
      C_M_AXI_MY_REGION_FCOORD_DATA_WIDTH => 32,
      C_M_AXI_MY_REGION_FCOORD_AWUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_ARUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_WUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_RUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_BUSER_WIDTH => 1,
      C_M_AXI_MY_REGION_FCOORD_USER_VALUE => 0,
      C_M_AXI_MY_REGION_FCOORD_PROT_VALUE => 0,
      C_M_AXI_MY_REGION_FCOORD_CACHE_VALUE => 3,
      C_M_AXI_MY_PATCHES_ID_WIDTH => 1,
      C_M_AXI_MY_PATCHES_ADDR_WIDTH => 32,
      C_M_AXI_MY_PATCHES_DATA_WIDTH => 32,
      C_M_AXI_MY_PATCHES_AWUSER_WIDTH => 1,
      C_M_AXI_MY_PATCHES_ARUSER_WIDTH => 1,
      C_M_AXI_MY_PATCHES_WUSER_WIDTH => 1,
      C_M_AXI_MY_PATCHES_RUSER_WIDTH => 1,
      C_M_AXI_MY_PATCHES_BUSER_WIDTH => 1,
      C_M_AXI_MY_PATCHES_USER_VALUE => 0,
      C_M_AXI_MY_PATCHES_PROT_VALUE => 0,
      C_M_AXI_MY_PATCHES_CACHE_VALUE => 3,
      C_M_AXI_MY_POS_ID_WIDTH => 1,
      C_M_AXI_MY_POS_ADDR_WIDTH => 32,
      C_M_AXI_MY_POS_DATA_WIDTH => 32,
      C_M_AXI_MY_POS_AWUSER_WIDTH => 1,
      C_M_AXI_MY_POS_ARUSER_WIDTH => 1,
      C_M_AXI_MY_POS_WUSER_WIDTH => 1,
      C_M_AXI_MY_POS_RUSER_WIDTH => 1,
      C_M_AXI_MY_POS_BUSER_WIDTH => 1,
      C_M_AXI_MY_POS_USER_VALUE => 0,
      C_M_AXI_MY_POS_PROT_VALUE => 0,
      C_M_AXI_MY_POS_CACHE_VALUE => 3,
      C_M_AXI_MY_DEBUG_ID_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ADDR_WIDTH => 32,
      C_M_AXI_MY_DEBUG_DATA_WIDTH => 32,
      C_M_AXI_MY_DEBUG_AWUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_WUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_RUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_BUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_USER_VALUE => 0,
      C_M_AXI_MY_DEBUG_PROT_VALUE => 0,
      C_M_AXI_MY_DEBUG_CACHE_VALUE => 3,
      C_M_AXI_MY_DEBUG_ARRAY_ID_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_ADDR_WIDTH => 32,
      C_M_AXI_MY_DEBUG_ARRAY_DATA_WIDTH => 32,
      C_M_AXI_MY_DEBUG_ARRAY_AWUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_ARUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_WUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_RUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_BUSER_WIDTH => 1,
      C_M_AXI_MY_DEBUG_ARRAY_USER_VALUE => 0,
      C_M_AXI_MY_DEBUG_ARRAY_PROT_VALUE => 0,
      C_M_AXI_MY_DEBUG_ARRAY_CACHE_VALUE => 3
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
      m_axi_my_region_data_AWADDR => m_axi_my_region_data_AWADDR,
      m_axi_my_region_data_AWLEN => m_axi_my_region_data_AWLEN,
      m_axi_my_region_data_AWSIZE => m_axi_my_region_data_AWSIZE,
      m_axi_my_region_data_AWBURST => m_axi_my_region_data_AWBURST,
      m_axi_my_region_data_AWLOCK => m_axi_my_region_data_AWLOCK,
      m_axi_my_region_data_AWREGION => m_axi_my_region_data_AWREGION,
      m_axi_my_region_data_AWCACHE => m_axi_my_region_data_AWCACHE,
      m_axi_my_region_data_AWPROT => m_axi_my_region_data_AWPROT,
      m_axi_my_region_data_AWQOS => m_axi_my_region_data_AWQOS,
      m_axi_my_region_data_AWVALID => m_axi_my_region_data_AWVALID,
      m_axi_my_region_data_AWREADY => m_axi_my_region_data_AWREADY,
      m_axi_my_region_data_WDATA => m_axi_my_region_data_WDATA,
      m_axi_my_region_data_WSTRB => m_axi_my_region_data_WSTRB,
      m_axi_my_region_data_WLAST => m_axi_my_region_data_WLAST,
      m_axi_my_region_data_WVALID => m_axi_my_region_data_WVALID,
      m_axi_my_region_data_WREADY => m_axi_my_region_data_WREADY,
      m_axi_my_region_data_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_data_BRESP => m_axi_my_region_data_BRESP,
      m_axi_my_region_data_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_data_BVALID => m_axi_my_region_data_BVALID,
      m_axi_my_region_data_BREADY => m_axi_my_region_data_BREADY,
      m_axi_my_region_data_ARADDR => m_axi_my_region_data_ARADDR,
      m_axi_my_region_data_ARLEN => m_axi_my_region_data_ARLEN,
      m_axi_my_region_data_ARSIZE => m_axi_my_region_data_ARSIZE,
      m_axi_my_region_data_ARBURST => m_axi_my_region_data_ARBURST,
      m_axi_my_region_data_ARLOCK => m_axi_my_region_data_ARLOCK,
      m_axi_my_region_data_ARREGION => m_axi_my_region_data_ARREGION,
      m_axi_my_region_data_ARCACHE => m_axi_my_region_data_ARCACHE,
      m_axi_my_region_data_ARPROT => m_axi_my_region_data_ARPROT,
      m_axi_my_region_data_ARQOS => m_axi_my_region_data_ARQOS,
      m_axi_my_region_data_ARVALID => m_axi_my_region_data_ARVALID,
      m_axi_my_region_data_ARREADY => m_axi_my_region_data_ARREADY,
      m_axi_my_region_data_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_data_RDATA => m_axi_my_region_data_RDATA,
      m_axi_my_region_data_RRESP => m_axi_my_region_data_RRESP,
      m_axi_my_region_data_RLAST => m_axi_my_region_data_RLAST,
      m_axi_my_region_data_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_data_RVALID => m_axi_my_region_data_RVALID,
      m_axi_my_region_data_RREADY => m_axi_my_region_data_RREADY,
      m_axi_my_region_fcoord_AWADDR => m_axi_my_region_fcoord_AWADDR,
      m_axi_my_region_fcoord_AWLEN => m_axi_my_region_fcoord_AWLEN,
      m_axi_my_region_fcoord_AWSIZE => m_axi_my_region_fcoord_AWSIZE,
      m_axi_my_region_fcoord_AWBURST => m_axi_my_region_fcoord_AWBURST,
      m_axi_my_region_fcoord_AWLOCK => m_axi_my_region_fcoord_AWLOCK,
      m_axi_my_region_fcoord_AWREGION => m_axi_my_region_fcoord_AWREGION,
      m_axi_my_region_fcoord_AWCACHE => m_axi_my_region_fcoord_AWCACHE,
      m_axi_my_region_fcoord_AWPROT => m_axi_my_region_fcoord_AWPROT,
      m_axi_my_region_fcoord_AWQOS => m_axi_my_region_fcoord_AWQOS,
      m_axi_my_region_fcoord_AWVALID => m_axi_my_region_fcoord_AWVALID,
      m_axi_my_region_fcoord_AWREADY => m_axi_my_region_fcoord_AWREADY,
      m_axi_my_region_fcoord_WDATA => m_axi_my_region_fcoord_WDATA,
      m_axi_my_region_fcoord_WSTRB => m_axi_my_region_fcoord_WSTRB,
      m_axi_my_region_fcoord_WLAST => m_axi_my_region_fcoord_WLAST,
      m_axi_my_region_fcoord_WVALID => m_axi_my_region_fcoord_WVALID,
      m_axi_my_region_fcoord_WREADY => m_axi_my_region_fcoord_WREADY,
      m_axi_my_region_fcoord_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_fcoord_BRESP => m_axi_my_region_fcoord_BRESP,
      m_axi_my_region_fcoord_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_fcoord_BVALID => m_axi_my_region_fcoord_BVALID,
      m_axi_my_region_fcoord_BREADY => m_axi_my_region_fcoord_BREADY,
      m_axi_my_region_fcoord_ARADDR => m_axi_my_region_fcoord_ARADDR,
      m_axi_my_region_fcoord_ARLEN => m_axi_my_region_fcoord_ARLEN,
      m_axi_my_region_fcoord_ARSIZE => m_axi_my_region_fcoord_ARSIZE,
      m_axi_my_region_fcoord_ARBURST => m_axi_my_region_fcoord_ARBURST,
      m_axi_my_region_fcoord_ARLOCK => m_axi_my_region_fcoord_ARLOCK,
      m_axi_my_region_fcoord_ARREGION => m_axi_my_region_fcoord_ARREGION,
      m_axi_my_region_fcoord_ARCACHE => m_axi_my_region_fcoord_ARCACHE,
      m_axi_my_region_fcoord_ARPROT => m_axi_my_region_fcoord_ARPROT,
      m_axi_my_region_fcoord_ARQOS => m_axi_my_region_fcoord_ARQOS,
      m_axi_my_region_fcoord_ARVALID => m_axi_my_region_fcoord_ARVALID,
      m_axi_my_region_fcoord_ARREADY => m_axi_my_region_fcoord_ARREADY,
      m_axi_my_region_fcoord_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_fcoord_RDATA => m_axi_my_region_fcoord_RDATA,
      m_axi_my_region_fcoord_RRESP => m_axi_my_region_fcoord_RRESP,
      m_axi_my_region_fcoord_RLAST => m_axi_my_region_fcoord_RLAST,
      m_axi_my_region_fcoord_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_region_fcoord_RVALID => m_axi_my_region_fcoord_RVALID,
      m_axi_my_region_fcoord_RREADY => m_axi_my_region_fcoord_RREADY,
      m_axi_my_patches_AWADDR => m_axi_my_patches_AWADDR,
      m_axi_my_patches_AWLEN => m_axi_my_patches_AWLEN,
      m_axi_my_patches_AWSIZE => m_axi_my_patches_AWSIZE,
      m_axi_my_patches_AWBURST => m_axi_my_patches_AWBURST,
      m_axi_my_patches_AWLOCK => m_axi_my_patches_AWLOCK,
      m_axi_my_patches_AWREGION => m_axi_my_patches_AWREGION,
      m_axi_my_patches_AWCACHE => m_axi_my_patches_AWCACHE,
      m_axi_my_patches_AWPROT => m_axi_my_patches_AWPROT,
      m_axi_my_patches_AWQOS => m_axi_my_patches_AWQOS,
      m_axi_my_patches_AWVALID => m_axi_my_patches_AWVALID,
      m_axi_my_patches_AWREADY => m_axi_my_patches_AWREADY,
      m_axi_my_patches_WDATA => m_axi_my_patches_WDATA,
      m_axi_my_patches_WSTRB => m_axi_my_patches_WSTRB,
      m_axi_my_patches_WLAST => m_axi_my_patches_WLAST,
      m_axi_my_patches_WVALID => m_axi_my_patches_WVALID,
      m_axi_my_patches_WREADY => m_axi_my_patches_WREADY,
      m_axi_my_patches_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_patches_BRESP => m_axi_my_patches_BRESP,
      m_axi_my_patches_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_patches_BVALID => m_axi_my_patches_BVALID,
      m_axi_my_patches_BREADY => m_axi_my_patches_BREADY,
      m_axi_my_patches_ARADDR => m_axi_my_patches_ARADDR,
      m_axi_my_patches_ARLEN => m_axi_my_patches_ARLEN,
      m_axi_my_patches_ARSIZE => m_axi_my_patches_ARSIZE,
      m_axi_my_patches_ARBURST => m_axi_my_patches_ARBURST,
      m_axi_my_patches_ARLOCK => m_axi_my_patches_ARLOCK,
      m_axi_my_patches_ARREGION => m_axi_my_patches_ARREGION,
      m_axi_my_patches_ARCACHE => m_axi_my_patches_ARCACHE,
      m_axi_my_patches_ARPROT => m_axi_my_patches_ARPROT,
      m_axi_my_patches_ARQOS => m_axi_my_patches_ARQOS,
      m_axi_my_patches_ARVALID => m_axi_my_patches_ARVALID,
      m_axi_my_patches_ARREADY => m_axi_my_patches_ARREADY,
      m_axi_my_patches_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_patches_RDATA => m_axi_my_patches_RDATA,
      m_axi_my_patches_RRESP => m_axi_my_patches_RRESP,
      m_axi_my_patches_RLAST => m_axi_my_patches_RLAST,
      m_axi_my_patches_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_patches_RVALID => m_axi_my_patches_RVALID,
      m_axi_my_patches_RREADY => m_axi_my_patches_RREADY,
      m_axi_my_pos_AWADDR => m_axi_my_pos_AWADDR,
      m_axi_my_pos_AWLEN => m_axi_my_pos_AWLEN,
      m_axi_my_pos_AWSIZE => m_axi_my_pos_AWSIZE,
      m_axi_my_pos_AWBURST => m_axi_my_pos_AWBURST,
      m_axi_my_pos_AWLOCK => m_axi_my_pos_AWLOCK,
      m_axi_my_pos_AWREGION => m_axi_my_pos_AWREGION,
      m_axi_my_pos_AWCACHE => m_axi_my_pos_AWCACHE,
      m_axi_my_pos_AWPROT => m_axi_my_pos_AWPROT,
      m_axi_my_pos_AWQOS => m_axi_my_pos_AWQOS,
      m_axi_my_pos_AWVALID => m_axi_my_pos_AWVALID,
      m_axi_my_pos_AWREADY => m_axi_my_pos_AWREADY,
      m_axi_my_pos_WDATA => m_axi_my_pos_WDATA,
      m_axi_my_pos_WSTRB => m_axi_my_pos_WSTRB,
      m_axi_my_pos_WLAST => m_axi_my_pos_WLAST,
      m_axi_my_pos_WVALID => m_axi_my_pos_WVALID,
      m_axi_my_pos_WREADY => m_axi_my_pos_WREADY,
      m_axi_my_pos_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_pos_BRESP => m_axi_my_pos_BRESP,
      m_axi_my_pos_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_pos_BVALID => m_axi_my_pos_BVALID,
      m_axi_my_pos_BREADY => m_axi_my_pos_BREADY,
      m_axi_my_pos_ARADDR => m_axi_my_pos_ARADDR,
      m_axi_my_pos_ARLEN => m_axi_my_pos_ARLEN,
      m_axi_my_pos_ARSIZE => m_axi_my_pos_ARSIZE,
      m_axi_my_pos_ARBURST => m_axi_my_pos_ARBURST,
      m_axi_my_pos_ARLOCK => m_axi_my_pos_ARLOCK,
      m_axi_my_pos_ARREGION => m_axi_my_pos_ARREGION,
      m_axi_my_pos_ARCACHE => m_axi_my_pos_ARCACHE,
      m_axi_my_pos_ARPROT => m_axi_my_pos_ARPROT,
      m_axi_my_pos_ARQOS => m_axi_my_pos_ARQOS,
      m_axi_my_pos_ARVALID => m_axi_my_pos_ARVALID,
      m_axi_my_pos_ARREADY => m_axi_my_pos_ARREADY,
      m_axi_my_pos_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_pos_RDATA => m_axi_my_pos_RDATA,
      m_axi_my_pos_RRESP => m_axi_my_pos_RRESP,
      m_axi_my_pos_RLAST => m_axi_my_pos_RLAST,
      m_axi_my_pos_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_pos_RVALID => m_axi_my_pos_RVALID,
      m_axi_my_pos_RREADY => m_axi_my_pos_RREADY,
      m_axi_my_debug_AWADDR => m_axi_my_debug_AWADDR,
      m_axi_my_debug_AWLEN => m_axi_my_debug_AWLEN,
      m_axi_my_debug_AWSIZE => m_axi_my_debug_AWSIZE,
      m_axi_my_debug_AWBURST => m_axi_my_debug_AWBURST,
      m_axi_my_debug_AWLOCK => m_axi_my_debug_AWLOCK,
      m_axi_my_debug_AWREGION => m_axi_my_debug_AWREGION,
      m_axi_my_debug_AWCACHE => m_axi_my_debug_AWCACHE,
      m_axi_my_debug_AWPROT => m_axi_my_debug_AWPROT,
      m_axi_my_debug_AWQOS => m_axi_my_debug_AWQOS,
      m_axi_my_debug_AWVALID => m_axi_my_debug_AWVALID,
      m_axi_my_debug_AWREADY => m_axi_my_debug_AWREADY,
      m_axi_my_debug_WDATA => m_axi_my_debug_WDATA,
      m_axi_my_debug_WSTRB => m_axi_my_debug_WSTRB,
      m_axi_my_debug_WLAST => m_axi_my_debug_WLAST,
      m_axi_my_debug_WVALID => m_axi_my_debug_WVALID,
      m_axi_my_debug_WREADY => m_axi_my_debug_WREADY,
      m_axi_my_debug_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_BRESP => m_axi_my_debug_BRESP,
      m_axi_my_debug_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_BVALID => m_axi_my_debug_BVALID,
      m_axi_my_debug_BREADY => m_axi_my_debug_BREADY,
      m_axi_my_debug_ARADDR => m_axi_my_debug_ARADDR,
      m_axi_my_debug_ARLEN => m_axi_my_debug_ARLEN,
      m_axi_my_debug_ARSIZE => m_axi_my_debug_ARSIZE,
      m_axi_my_debug_ARBURST => m_axi_my_debug_ARBURST,
      m_axi_my_debug_ARLOCK => m_axi_my_debug_ARLOCK,
      m_axi_my_debug_ARREGION => m_axi_my_debug_ARREGION,
      m_axi_my_debug_ARCACHE => m_axi_my_debug_ARCACHE,
      m_axi_my_debug_ARPROT => m_axi_my_debug_ARPROT,
      m_axi_my_debug_ARQOS => m_axi_my_debug_ARQOS,
      m_axi_my_debug_ARVALID => m_axi_my_debug_ARVALID,
      m_axi_my_debug_ARREADY => m_axi_my_debug_ARREADY,
      m_axi_my_debug_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_RDATA => m_axi_my_debug_RDATA,
      m_axi_my_debug_RRESP => m_axi_my_debug_RRESP,
      m_axi_my_debug_RLAST => m_axi_my_debug_RLAST,
      m_axi_my_debug_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_RVALID => m_axi_my_debug_RVALID,
      m_axi_my_debug_RREADY => m_axi_my_debug_RREADY,
      m_axi_my_debug_array_AWADDR => m_axi_my_debug_array_AWADDR,
      m_axi_my_debug_array_AWLEN => m_axi_my_debug_array_AWLEN,
      m_axi_my_debug_array_AWSIZE => m_axi_my_debug_array_AWSIZE,
      m_axi_my_debug_array_AWBURST => m_axi_my_debug_array_AWBURST,
      m_axi_my_debug_array_AWLOCK => m_axi_my_debug_array_AWLOCK,
      m_axi_my_debug_array_AWREGION => m_axi_my_debug_array_AWREGION,
      m_axi_my_debug_array_AWCACHE => m_axi_my_debug_array_AWCACHE,
      m_axi_my_debug_array_AWPROT => m_axi_my_debug_array_AWPROT,
      m_axi_my_debug_array_AWQOS => m_axi_my_debug_array_AWQOS,
      m_axi_my_debug_array_AWVALID => m_axi_my_debug_array_AWVALID,
      m_axi_my_debug_array_AWREADY => m_axi_my_debug_array_AWREADY,
      m_axi_my_debug_array_WDATA => m_axi_my_debug_array_WDATA,
      m_axi_my_debug_array_WSTRB => m_axi_my_debug_array_WSTRB,
      m_axi_my_debug_array_WLAST => m_axi_my_debug_array_WLAST,
      m_axi_my_debug_array_WVALID => m_axi_my_debug_array_WVALID,
      m_axi_my_debug_array_WREADY => m_axi_my_debug_array_WREADY,
      m_axi_my_debug_array_BID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_array_BRESP => m_axi_my_debug_array_BRESP,
      m_axi_my_debug_array_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_array_BVALID => m_axi_my_debug_array_BVALID,
      m_axi_my_debug_array_BREADY => m_axi_my_debug_array_BREADY,
      m_axi_my_debug_array_ARADDR => m_axi_my_debug_array_ARADDR,
      m_axi_my_debug_array_ARLEN => m_axi_my_debug_array_ARLEN,
      m_axi_my_debug_array_ARSIZE => m_axi_my_debug_array_ARSIZE,
      m_axi_my_debug_array_ARBURST => m_axi_my_debug_array_ARBURST,
      m_axi_my_debug_array_ARLOCK => m_axi_my_debug_array_ARLOCK,
      m_axi_my_debug_array_ARREGION => m_axi_my_debug_array_ARREGION,
      m_axi_my_debug_array_ARCACHE => m_axi_my_debug_array_ARCACHE,
      m_axi_my_debug_array_ARPROT => m_axi_my_debug_array_ARPROT,
      m_axi_my_debug_array_ARQOS => m_axi_my_debug_array_ARQOS,
      m_axi_my_debug_array_ARVALID => m_axi_my_debug_array_ARVALID,
      m_axi_my_debug_array_ARREADY => m_axi_my_debug_array_ARREADY,
      m_axi_my_debug_array_RID => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_array_RDATA => m_axi_my_debug_array_RDATA,
      m_axi_my_debug_array_RRESP => m_axi_my_debug_array_RRESP,
      m_axi_my_debug_array_RLAST => m_axi_my_debug_array_RLAST,
      m_axi_my_debug_array_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_my_debug_array_RVALID => m_axi_my_debug_array_RVALID,
      m_axi_my_debug_array_RREADY => m_axi_my_debug_array_RREADY
    );
END design_1_batch_align2D_region_0_1_arch;
