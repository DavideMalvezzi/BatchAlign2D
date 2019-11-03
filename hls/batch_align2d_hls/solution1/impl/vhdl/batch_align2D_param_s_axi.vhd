-- ==============================================================
-- File generated on Sat Oct 26 12:54:51 CEST 2019
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity batch_align2D_param_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 7;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    -- axi4 lite slave signals
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    -- user signals
    img_w                 :out  STD_LOGIC_VECTOR(15 downto 0);
    img_h                 :out  STD_LOGIC_VECTOR(15 downto 0);
    levels                :out  STD_LOGIC_VECTOR(127 downto 0);
    converged             :in   STD_LOGIC_VECTOR(63 downto 0);
    converged_ap_vld      :in   STD_LOGIC;
    n_iter                :out  STD_LOGIC_VECTOR(31 downto 0);
    transfer_pyr          :out  STD_LOGIC_VECTOR(0 downto 0)
);
end entity batch_align2D_param_s_axi;

-- ------------------------Address Info-------------------
-- 0x00 : reserved
-- 0x04 : reserved
-- 0x08 : reserved
-- 0x0c : reserved
-- 0x10 : Data signal of img_w
--        bit 15~0 - img_w[15:0] (Read/Write)
--        others   - reserved
-- 0x14 : reserved
-- 0x18 : Data signal of img_h
--        bit 15~0 - img_h[15:0] (Read/Write)
--        others   - reserved
-- 0x1c : reserved
-- 0x20 : Data signal of levels
--        bit 31~0 - levels[31:0] (Read/Write)
-- 0x24 : Data signal of levels
--        bit 31~0 - levels[63:32] (Read/Write)
-- 0x28 : Data signal of levels
--        bit 31~0 - levels[95:64] (Read/Write)
-- 0x2c : Data signal of levels
--        bit 31~0 - levels[127:96] (Read/Write)
-- 0x30 : reserved
-- 0x34 : Data signal of converged
--        bit 31~0 - converged[31:0] (Read)
-- 0x38 : Data signal of converged
--        bit 31~0 - converged[63:32] (Read)
-- 0x3c : Control signal of converged
--        bit 0  - converged_ap_vld (Read/COR)
--        others - reserved
-- 0x40 : Data signal of n_iter
--        bit 31~0 - n_iter[31:0] (Read/Write)
-- 0x44 : reserved
-- 0x48 : Data signal of transfer_pyr
--        bit 0  - transfer_pyr[0] (Read/Write)
--        others - reserved
-- 0x4c : reserved
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of batch_align2D_param_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_IMG_W_DATA_0        : INTEGER := 16#10#;
    constant ADDR_IMG_W_CTRL          : INTEGER := 16#14#;
    constant ADDR_IMG_H_DATA_0        : INTEGER := 16#18#;
    constant ADDR_IMG_H_CTRL          : INTEGER := 16#1c#;
    constant ADDR_LEVELS_DATA_0       : INTEGER := 16#20#;
    constant ADDR_LEVELS_DATA_1       : INTEGER := 16#24#;
    constant ADDR_LEVELS_DATA_2       : INTEGER := 16#28#;
    constant ADDR_LEVELS_DATA_3       : INTEGER := 16#2c#;
    constant ADDR_LEVELS_CTRL         : INTEGER := 16#30#;
    constant ADDR_CONVERGED_DATA_0    : INTEGER := 16#34#;
    constant ADDR_CONVERGED_DATA_1    : INTEGER := 16#38#;
    constant ADDR_CONVERGED_CTRL      : INTEGER := 16#3c#;
    constant ADDR_N_ITER_DATA_0       : INTEGER := 16#40#;
    constant ADDR_N_ITER_CTRL         : INTEGER := 16#44#;
    constant ADDR_TRANSFER_PYR_DATA_0 : INTEGER := 16#48#;
    constant ADDR_TRANSFER_PYR_CTRL   : INTEGER := 16#4c#;
    constant ADDR_BITS         : INTEGER := 7;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(31 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(31 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_img_w           : UNSIGNED(15 downto 0) := (others => '0');
    signal int_img_h           : UNSIGNED(15 downto 0) := (others => '0');
    signal int_levels          : UNSIGNED(127 downto 0) := (others => '0');
    signal int_converged       : UNSIGNED(63 downto 0) := (others => '0');
    signal int_converged_ap_vld : STD_LOGIC;
    signal int_n_iter          : UNSIGNED(31 downto 0) := (others => '0');
    signal int_transfer_pyr    : UNSIGNED(0 downto 0) := (others => '0');


begin
-- ----------------------- Instantiation------------------

-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 0));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    case (TO_INTEGER(raddr)) is
                    when ADDR_IMG_W_DATA_0 =>
                        rdata_data <= RESIZE(int_img_w(15 downto 0), 32);
                    when ADDR_IMG_H_DATA_0 =>
                        rdata_data <= RESIZE(int_img_h(15 downto 0), 32);
                    when ADDR_LEVELS_DATA_0 =>
                        rdata_data <= RESIZE(int_levels(31 downto 0), 32);
                    when ADDR_LEVELS_DATA_1 =>
                        rdata_data <= RESIZE(int_levels(63 downto 32), 32);
                    when ADDR_LEVELS_DATA_2 =>
                        rdata_data <= RESIZE(int_levels(95 downto 64), 32);
                    when ADDR_LEVELS_DATA_3 =>
                        rdata_data <= RESIZE(int_levels(127 downto 96), 32);
                    when ADDR_CONVERGED_DATA_0 =>
                        rdata_data <= RESIZE(int_converged(31 downto 0), 32);
                    when ADDR_CONVERGED_DATA_1 =>
                        rdata_data <= RESIZE(int_converged(63 downto 32), 32);
                    when ADDR_CONVERGED_CTRL =>
                        rdata_data <= (0 => int_converged_ap_vld, others => '0');
                    when ADDR_N_ITER_DATA_0 =>
                        rdata_data <= RESIZE(int_n_iter(31 downto 0), 32);
                    when ADDR_TRANSFER_PYR_DATA_0 =>
                        rdata_data <= RESIZE(int_transfer_pyr(0 downto 0), 32);
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    img_w                <= STD_LOGIC_VECTOR(int_img_w);
    img_h                <= STD_LOGIC_VECTOR(int_img_h);
    levels               <= STD_LOGIC_VECTOR(int_levels);
    n_iter               <= STD_LOGIC_VECTOR(int_n_iter);
    transfer_pyr         <= STD_LOGIC_VECTOR(int_transfer_pyr);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IMG_W_DATA_0) then
                    int_img_w(15 downto 0) <= (UNSIGNED(WDATA(15 downto 0)) and wmask(15 downto 0)) or ((not wmask(15 downto 0)) and int_img_w(15 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IMG_H_DATA_0) then
                    int_img_h(15 downto 0) <= (UNSIGNED(WDATA(15 downto 0)) and wmask(15 downto 0)) or ((not wmask(15 downto 0)) and int_img_h(15 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_LEVELS_DATA_0) then
                    int_levels(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_levels(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_LEVELS_DATA_1) then
                    int_levels(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_levels(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_LEVELS_DATA_2) then
                    int_levels(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_levels(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_LEVELS_DATA_3) then
                    int_levels(127 downto 96) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_levels(127 downto 96));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_converged <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (converged_ap_vld = '1') then
                    int_converged <= UNSIGNED(converged); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_converged_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (converged_ap_vld = '1') then
                    int_converged_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_CONVERGED_CTRL) then
                    int_converged_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_N_ITER_DATA_0) then
                    int_n_iter(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_n_iter(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_TRANSFER_PYR_DATA_0) then
                    int_transfer_pyr(0 downto 0) <= (UNSIGNED(WDATA(0 downto 0)) and wmask(0 downto 0)) or ((not wmask(0 downto 0)) and int_transfer_pyr(0 downto 0));
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------

end architecture behave;
