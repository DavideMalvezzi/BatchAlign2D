vlib work
vlib activehdl

vlib activehdl/xilinx_vip
vlib activehdl/xil_defaultlib
vlib activehdl/xpm
vlib activehdl/axi_infrastructure_v1_1_0
vlib activehdl/axi_vip_v1_1_4
vlib activehdl/zynq_ultra_ps_e_vip_v1_0_4
vlib activehdl/xbip_utils_v3_0_9
vlib activehdl/axi_utils_v2_0_5
vlib activehdl/xbip_pipe_v3_0_5
vlib activehdl/xbip_dsp48_wrapper_v3_0_4
vlib activehdl/xbip_dsp48_addsub_v3_0_5
vlib activehdl/xbip_dsp48_multadd_v3_0_5
vlib activehdl/xbip_bram18k_v3_0_5
vlib activehdl/mult_gen_v12_0_14
vlib activehdl/floating_point_v7_1_7
vlib activehdl/generic_baseblocks_v2_1_0
vlib activehdl/axi_register_slice_v2_1_18
vlib activehdl/fifo_generator_v13_2_3
vlib activehdl/axi_data_fifo_v2_1_17
vlib activehdl/axi_crossbar_v2_1_19
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/xlconstant_v1_1_5
vlib activehdl/smartconnect_v1_0
vlib activehdl/axi_protocol_converter_v2_1_18
vlib activehdl/axi_clock_converter_v2_1_17
vlib activehdl/blk_mem_gen_v8_4_2
vlib activehdl/axi_dwidth_converter_v2_1_18

vmap xilinx_vip activehdl/xilinx_vip
vmap xil_defaultlib activehdl/xil_defaultlib
vmap xpm activehdl/xpm
vmap axi_infrastructure_v1_1_0 activehdl/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_4 activehdl/axi_vip_v1_1_4
vmap zynq_ultra_ps_e_vip_v1_0_4 activehdl/zynq_ultra_ps_e_vip_v1_0_4
vmap xbip_utils_v3_0_9 activehdl/xbip_utils_v3_0_9
vmap axi_utils_v2_0_5 activehdl/axi_utils_v2_0_5
vmap xbip_pipe_v3_0_5 activehdl/xbip_pipe_v3_0_5
vmap xbip_dsp48_wrapper_v3_0_4 activehdl/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_5 activehdl/xbip_dsp48_addsub_v3_0_5
vmap xbip_dsp48_multadd_v3_0_5 activehdl/xbip_dsp48_multadd_v3_0_5
vmap xbip_bram18k_v3_0_5 activehdl/xbip_bram18k_v3_0_5
vmap mult_gen_v12_0_14 activehdl/mult_gen_v12_0_14
vmap floating_point_v7_1_7 activehdl/floating_point_v7_1_7
vmap generic_baseblocks_v2_1_0 activehdl/generic_baseblocks_v2_1_0
vmap axi_register_slice_v2_1_18 activehdl/axi_register_slice_v2_1_18
vmap fifo_generator_v13_2_3 activehdl/fifo_generator_v13_2_3
vmap axi_data_fifo_v2_1_17 activehdl/axi_data_fifo_v2_1_17
vmap axi_crossbar_v2_1_19 activehdl/axi_crossbar_v2_1_19
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap xlconstant_v1_1_5 activehdl/xlconstant_v1_1_5
vmap smartconnect_v1_0 activehdl/smartconnect_v1_0
vmap axi_protocol_converter_v2_1_18 activehdl/axi_protocol_converter_v2_1_18
vmap axi_clock_converter_v2_1_17 activehdl/axi_clock_converter_v2_1_17
vmap blk_mem_gen_v8_4_2 activehdl/blk_mem_gen_v8_4_2
vmap axi_dwidth_converter_v2_1_18 activehdl/axi_dwidth_converter_v2_1_18

vlog -work xilinx_vip  -sv2k12 "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_if.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/clk_vip_if.sv" \
"/cad/xilinx/Vivado/2018.3/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"/cad/xilinx/Vivado/2018.3/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/cad/xilinx/Vivado/2018.3/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"/cad/xilinx/Vivado/2018.3/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"/cad/xilinx/Vivado/2018.3/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_4  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/98af/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work zynq_ultra_ps_e_vip_v1_0_4  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl/zynq_ultra_ps_e_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim/design_1_zynq_ultra_ps_e_0_1_vip_wrapper.v" \

vcom -work xbip_utils_v3_0_9 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/0da8/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_5 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec8e/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_5 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/442e/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_5 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/a04b/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_5 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b226/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_5 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/c08f/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_14 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/6bb5/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_7 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/c63e/hdl/floating_point_v7_1_vh_rfs.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_ctrl_s_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_dcmp_64ns_64ns_1_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_dmul_64ns_64ns_64_8_max_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_dsub_64ns_64ns_64_8_full_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fadd_32ns_32ns_32_7_full_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_faddfsub_32ns_32ns_32_7_full_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fdiv_32ns_32ns_32_12_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fmul_32ns_32ns_32_4_max_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fpext_32ns_64_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fptrunc_64ns_32_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_fsub_32ns_32ns_32_5_no_dsp_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_mux_32_32_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_mux_94_32_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_mux_164_8_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_mux_646_32_1_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_my_patches_m_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_my_pos_m_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_my_region_data_m_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_my_region_fcoord_m_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_param_s_axi.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_pyr_region_data_0.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_ref_patch_with_borde_15.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_sitofp_32ns_32_6_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region_sitofp_32s_32_6_1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/gauss_newton_optim_r.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/gauss_newton_optim_r_mask_table1.v" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/verilog/batch_align2D_region.v" \

vcom -work xil_defaultlib -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_dcmp_0_no_dsp_64.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_dmul_6_max_dsp_64.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_dsub_6_full_dsp_64.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fadd_5_full_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_faddfsub_5_full_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fdiv_10_no_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fmul_2_max_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fpext_0_no_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fptrunc_0_no_dsp_64.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_fsub_3_no_dsp_32.vhd" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/61fd/hdl/ip/batch_align2D_region_ap_sitofp_4_no_dsp_32.vhd" \
"../../../bd/design_1/ip/design_1_batch_align2D_region_0_1/sim/design_1_batch_align2D_region_0_1.vhd" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_18  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/cc23/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_3  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/64f4/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_3 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_3  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_17  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/c4fd/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_19  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/6c9d/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_xbar_1/sim/design_1_xbar_1.v" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_rst_ps8_0_96M_0/sim/design_1_rst_ps8_0_96M_0.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/sim/bd_48ac.v" \

vlog -work xlconstant_v1_1_5  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/4649/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_0/sim/bd_48ac_one_0.v" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_1/sim/bd_48ac_psr_aclk_0.vhd" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/sc_util_v1_0_vl_rfs.sv" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/c012/hdl/sc_switchboard_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_2/sim/bd_48ac_arsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_3/sim/bd_48ac_rsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_4/sim/bd_48ac_awsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_5/sim/bd_48ac_wsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_6/sim/bd_48ac_bsw_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/f85e/hdl/sc_mmu_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_7/sim/bd_48ac_s00mmu_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ca72/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_8/sim/bd_48ac_s00tr_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/9ade/hdl/sc_si_converter_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_9/sim/bd_48ac_s00sic_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b89e/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_10/sim/bd_48ac_s00a2s_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/sc_node_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_11/sim/bd_48ac_sarn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_12/sim/bd_48ac_srn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_13/sim/bd_48ac_sawn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_14/sim/bd_48ac_swn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_15/sim/bd_48ac_sbn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_16/sim/bd_48ac_s01mmu_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_17/sim/bd_48ac_s01tr_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_18/sim/bd_48ac_s01sic_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_19/sim/bd_48ac_s01a2s_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_20/sim/bd_48ac_sarn_1.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_21/sim/bd_48ac_srn_1.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_22/sim/bd_48ac_sawn_1.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_23/sim/bd_48ac_swn_1.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_24/sim/bd_48ac_sbn_1.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_25/sim/bd_48ac_s02mmu_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_26/sim/bd_48ac_s02tr_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_27/sim/bd_48ac_s02sic_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_28/sim/bd_48ac_s02a2s_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_29/sim/bd_48ac_sarn_2.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_30/sim/bd_48ac_srn_2.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_31/sim/bd_48ac_sawn_2.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_32/sim/bd_48ac_swn_2.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_33/sim/bd_48ac_sbn_2.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_34/sim/bd_48ac_s03mmu_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_35/sim/bd_48ac_s03tr_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_36/sim/bd_48ac_s03sic_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_37/sim/bd_48ac_s03a2s_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_38/sim/bd_48ac_sarn_3.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_39/sim/bd_48ac_srn_3.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_40/sim/bd_48ac_sawn_3.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_41/sim/bd_48ac_swn_3.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_42/sim/bd_48ac_sbn_3.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_43/sim/bd_48ac_s04mmu_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_44/sim/bd_48ac_s04tr_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_45/sim/bd_48ac_s04sic_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_46/sim/bd_48ac_s04a2s_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_47/sim/bd_48ac_sarn_4.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_48/sim/bd_48ac_srn_4.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_49/sim/bd_48ac_sawn_4.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_50/sim/bd_48ac_swn_4.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_51/sim/bd_48ac_sbn_4.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_52/sim/bd_48ac_s05mmu_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_53/sim/bd_48ac_s05tr_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_54/sim/bd_48ac_s05sic_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_55/sim/bd_48ac_s05a2s_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_56/sim/bd_48ac_sarn_5.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_57/sim/bd_48ac_srn_5.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_58/sim/bd_48ac_sawn_5.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_59/sim/bd_48ac_swn_5.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_60/sim/bd_48ac_sbn_5.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/7005/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_61/sim/bd_48ac_m00s2a_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_62/sim/bd_48ac_m00arn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_63/sim/bd_48ac_m00rn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_64/sim/bd_48ac_m00awn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_65/sim/bd_48ac_m00wn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_66/sim/bd_48ac_m00bn_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b387/hdl/sc_exit_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_67/sim/bd_48ac_m00e_0.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/sim/design_1_smartconnect_0_0.v" \
"../../../bd/design_1/sim/design_1.v" \

vlog -work axi_protocol_converter_v2_1_18  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/7a04/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work axi_clock_converter_v2_1_17  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/693a/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_2  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/37c2/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_18  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/0815/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/00a3/hdl" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/979d/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1/sim_tlm" "+incdir+../../../../batch_align2d_design.srcs/sources_1/bd/design_1/ip/design_1_zynq_ultra_ps_e_0_1" "+incdir+/cad/xilinx/Vivado/2018.3/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_auto_ds_0/sim/design_1_auto_ds_0.v" \
"../../../bd/design_1/ip/design_1_auto_pc_0/sim/design_1_auto_pc_0.v" \
"../../../bd/design_1/ip/design_1_auto_ds_1/sim/design_1_auto_ds_1.v" \
"../../../bd/design_1/ip/design_1_auto_pc_1/sim/design_1_auto_pc_1.v" \

vlog -work xil_defaultlib \
"glbl.v"

