#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_ref_patch_with_borde_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_5_address1 = grp_gauss_newton_optim_r_fu_22108_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_5_ce0 = grp_gauss_newton_optim_r_fu_22108_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_5_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_5_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_5_ce1 = grp_gauss_newton_optim_r_fu_22108_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_5_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_4))) {
        ref_patch_with_borde_5_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_62;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_61;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_5F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_5D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_5B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_58;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_57;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_55;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_53;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_51;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_4E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_4D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_4B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_49;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_47;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_44;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_43;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_41;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_3F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_3D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_3A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_39;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_37;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_35;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_33;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_30;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_2F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_2D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_2B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_29;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_26;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_25;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_23;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_21;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_13;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_1B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_11;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_19;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_17;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 = ap_const_lv7_C;
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_87_fu_27188_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_6_address0 = grp_gauss_newton_optim_r_fu_21957_ref_patch_with_border_address0.read();
    } else {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_6_address1 = grp_gauss_newton_optim_r_fu_21957_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_6_ce0 = grp_gauss_newton_optim_r_fu_21957_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_6_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_6_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_6_ce1 = grp_gauss_newton_optim_r_fu_21957_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_6_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_3))) {
        ref_patch_with_borde_6_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_6_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_62;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_61;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_5F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_5D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_5B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_58;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_57;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_55;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_53;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_51;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_4E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_4D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_4B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_49;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_47;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_44;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_43;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_41;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_3F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_3D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_3A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_39;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_37;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_35;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_33;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_30;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_2F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_2D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_2B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_29;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_26;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_25;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_23;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_21;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_13;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_1B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_11;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_19;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_17;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 = ap_const_lv7_C;
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_87_fu_27188_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_7_address0 = grp_gauss_newton_optim_r_fu_24977_ref_patch_with_border_address0.read();
    } else {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_7_address1 = grp_gauss_newton_optim_r_fu_24977_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_7_ce0 = grp_gauss_newton_optim_r_fu_24977_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_7_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_7_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_7_ce1 = grp_gauss_newton_optim_r_fu_24977_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_7_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         ((((((((esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1F) || 
                 esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1E)) || 
                esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1D)) || 
               esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1C)) || 
              esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1B)) || 
             esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_1A)) || 
            esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_19)) || 
           esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_18)) || 
          esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_17)))) {
        ref_patch_with_borde_7_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_7_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_62;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_61;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_5F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_5D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_5B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_58;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_57;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_55;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_53;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_51;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_4E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_4D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_4B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_49;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_47;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_44;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_43;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_41;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_3F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_3D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_3A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_39;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_37;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_35;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_33;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_30;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_2F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_2D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_2B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_29;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_26;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_25;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_23;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_21;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_13;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_1B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_11;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_19;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_17;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address0 = ap_const_lv7_C;
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_8_address0 =  (sc_lv<7>) (tmp_87_fu_27188_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_8_address0 = grp_gauss_newton_optim_r_fu_24826_ref_patch_with_border_address0.read();
    } else {
        ref_patch_with_borde_8_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_8_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_8_address1 = grp_gauss_newton_optim_r_fu_24826_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_8_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_8_ce0 = grp_gauss_newton_optim_r_fu_24826_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_8_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_8_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_8_ce1 = grp_gauss_newton_optim_r_fu_24826_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_8_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_8_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_16))) {
        ref_patch_with_borde_8_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_8_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_62;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_61;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_5F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_5D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_5B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_58;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_57;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_55;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_53;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_51;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_4E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_4D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_4B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_49;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_47;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_44;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_43;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_41;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_3F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_3D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_3A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_39;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_37;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_35;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_33;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_30;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_2F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_2D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_2B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_29;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_26;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_25;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_23;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_21;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_13;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_1B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_11;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_19;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_17;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address0 = ap_const_lv7_C;
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_9_address0 =  (sc_lv<7>) (tmp_87_fu_27188_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_9_address0 = grp_gauss_newton_optim_r_fu_24675_ref_patch_with_border_address0.read();
    } else {
        ref_patch_with_borde_9_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_9_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_9_address1 = grp_gauss_newton_optim_r_fu_24675_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_9_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_9_ce0 = grp_gauss_newton_optim_r_fu_24675_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_9_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_9_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_9_ce1 = grp_gauss_newton_optim_r_fu_24675_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_9_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_9_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_15))) {
        ref_patch_with_borde_9_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_9_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_62;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_61;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_5F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_5D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_5B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_58;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_57;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_55;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_53;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_51;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_4E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_4D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_4B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_49;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_47;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_44;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_43;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_41;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_3F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_3D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_3A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_39;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_37;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_35;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_33;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_30;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_2F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_2D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_2B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_29;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_26;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_25;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_23;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_21;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_1F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_8;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_13;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_1B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_6;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_11;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_19;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_4;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_17;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 = ap_const_lv7_C;
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_87_fu_27188_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_address0 = grp_gauss_newton_optim_r_fu_22863_ref_patch_with_border_address0.read();
    } else {
        ref_patch_with_borde_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage47.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_59;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage46.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_60;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage45.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_5E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage44.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_5C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage43.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_50;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage42.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_4F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage41.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_56;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage40.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_54;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage39.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_52;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage38.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_46;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage37.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_45;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage36.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_4C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage35.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_4A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage34.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_48;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage33.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_3C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage32.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_3B;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage31.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_42;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage30.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_40;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage29.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_3E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage28.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_32;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage27.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_31;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage26.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_38;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage25.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_36;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage24.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_34;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage23.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_28;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage22.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_27;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage21.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_2E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage20.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_2C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage19.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_2A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage18.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_1E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage17.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_1D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage16.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_24;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage15.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_22;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage14.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_20;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage13.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_14;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage12.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_1C;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage11.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_7;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage10.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_12;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage9.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_1A;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage8.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_5;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_10;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage6.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_18;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage5.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_3;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage4.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_E;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_16;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_D;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_15;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 = ap_const_lv7_A;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_address1 = grp_gauss_newton_optim_r_fu_22863_ref_patch_with_border_address1.read();
    } else {
        ref_patch_with_borde_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_ce0 = grp_gauss_newton_optim_r_fu_22863_ref_patch_with_border_ce0.read();
    } else {
        ref_patch_with_borde_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage11_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage12_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage13_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage14_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage15_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage16_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage17_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage18_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage19_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage20_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage21_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage22_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage23_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage24_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage25_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage26.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage26_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage27.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage27_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage28.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage28_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage29.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage29_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage30.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage30_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage31.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage31_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage32.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage32_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage33.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage33_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage34.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage34_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage35.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage35_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage36.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage36_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage37.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage37_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage39.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage39_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage40.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage40_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage41.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage41_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage43.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage43_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage38.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage38_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage42.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage42_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage44.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage44_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage46.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage46_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage47.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage47_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage45.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage45_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())))) {
        ref_patch_with_borde_ce1 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read())) {
        ref_patch_with_borde_ce1 = grp_gauss_newton_optim_r_fu_22863_ref_patch_with_border_ce1.read();
    } else {
        ref_patch_with_borde_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,5,5>(div_t_reg_59661_pp2_iter1_reg.read(), ap_const_lv5_9))) {
        ref_patch_with_borde_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_tmp_148_fu_44511_p1() {
    tmp_148_fu_44511_p1 = tmp_168_neg_reg_80874.read();
}

void batch_align2D_region::thread_tmp_155_fu_44524_p1() {
    tmp_155_fu_44524_p1 = tmp_177_neg_reg_80884.read();
}

void batch_align2D_region::thread_tmp_157_fu_26764_p1() {
    tmp_157_fu_26764_p1 = esl_sext<64,32>(myRegion_fcoord_ptr.read());
}

void batch_align2D_region::thread_tmp_158_fu_26774_p1() {
    tmp_158_fu_26774_p1 = esl_sext<64,32>(myRegion_data_ptr.read());
}

void batch_align2D_region::thread_tmp_159_fu_26805_p1() {
    tmp_159_fu_26805_p1 = indvar_reg_21414.read().range(12-1, 0);
}

void batch_align2D_region::thread_tmp_164_cast_fu_27514_p1() {
    tmp_164_cast_fu_27514_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_168_neg_fu_44505_p2() {
    tmp_168_neg_fu_44505_p2 = (tmp_168_to_int_fu_44502_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_168_to_int_fu_44502_p1() {
    tmp_168_to_int_fu_44502_p1 = tmp_147_reg_80839_pp4_iter4_reg.read();
}

void batch_align2D_region::thread_tmp_169_cast_fu_27518_p1() {
    tmp_169_cast_fu_27518_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_175_cast_fu_27533_p1() {
    tmp_175_cast_fu_27533_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_177_neg_fu_44518_p2() {
    tmp_177_neg_fu_44518_p2 = (tmp_177_to_int_fu_44515_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_177_to_int_fu_44515_p1() {
    tmp_177_to_int_fu_44515_p1 = tmp_154_reg_80854_pp4_iter4_reg.read();
}

void batch_align2D_region::thread_tmp_178_cast_fu_27537_p1() {
    tmp_178_cast_fu_27537_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_185_10_cast_fu_36461_p1() {
    tmp_185_10_cast_fu_36461_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_11_cast_fu_38455_p1() {
    tmp_185_11_cast_fu_38455_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_12_cast_fu_40449_p1() {
    tmp_185_12_cast_fu_40449_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_13_cast_fu_42059_p1() {
    tmp_185_13_cast_fu_42059_p1 = esl_zext<9,8>(grp_fu_25250_p26.read());
}

void batch_align2D_region::thread_tmp_185_1_cast_fu_27552_p1() {
    tmp_185_1_cast_fu_27552_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_2_cast_fu_27590_p1() {
    tmp_185_2_cast_fu_27590_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_3_cast_fu_27752_p1() {
    tmp_185_3_cast_fu_27752_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_185_4_cast_fu_28035_p1() {
    tmp_185_4_cast_fu_28035_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_5_cast_fu_28197_p1() {
    tmp_185_5_cast_fu_28197_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_185_6_cast_fu_28720_p1() {
    tmp_185_6_cast_fu_28720_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_7_cast_fu_28882_p1() {
    tmp_185_7_cast_fu_28882_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_185_8_cast_fu_32491_p1() {
    tmp_185_8_cast_fu_32491_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_9_cast_fu_34476_p1() {
    tmp_185_9_cast_fu_34476_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_185_cast_fu_30626_p1() {
    tmp_185_cast_fu_30626_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_1_cast_fu_27556_p1() {
    tmp_189_1_cast_fu_27556_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_189_2_cast_fu_32888_p1() {
    tmp_189_2_cast_fu_32888_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_3_cast_fu_34873_p1() {
    tmp_189_3_cast_fu_34873_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_4_cast_fu_36858_p1() {
    tmp_189_4_cast_fu_36858_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_5_cast_fu_38843_p1() {
    tmp_189_5_cast_fu_38843_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_6_cast_fu_40846_p1() {
    tmp_189_6_cast_fu_40846_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_8_cast_fu_29525_p1() {
    tmp_189_8_cast_fu_29525_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_189_cast_fu_30903_p1() {
    tmp_189_cast_fu_30903_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_190_10_fu_28053_p2() {
    tmp_190_10_fu_28053_p2 = (!tmp_196_4_cast_fu_28049_p1.read().is_01() || !tmp_196_2_cast_reg_79565.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_4_cast_fu_28049_p1.read()) - sc_biguint<9>(tmp_196_2_cast_reg_79565.read()));
}

void batch_align2D_region::thread_tmp_190_11_fu_28470_p2() {
    tmp_190_11_fu_28470_p2 = (!tmp_196_5_cast_fu_28331_p1.read().is_01() || !tmp_196_3_cast_reg_79593.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_5_cast_fu_28331_p1.read()) - sc_biguint<9>(tmp_196_3_cast_reg_79593.read()));
}

void batch_align2D_region::thread_tmp_190_12_fu_28738_p2() {
    tmp_190_12_fu_28738_p2 = (!tmp_196_6_cast_fu_28734_p1.read().is_01() || !tmp_196_4_cast_reg_79620.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_6_cast_fu_28734_p1.read()) - sc_biguint<9>(tmp_196_4_cast_reg_79620.read()));
}

void batch_align2D_region::thread_tmp_190_13_fu_29275_p2() {
    tmp_190_13_fu_29275_p2 = (!tmp_196_7_cast_fu_29136_p1.read().is_01() || !tmp_196_5_cast_reg_79648.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_7_cast_fu_29136_p1.read()) - sc_biguint<9>(tmp_196_5_cast_reg_79648.read()));
}

void batch_align2D_region::thread_tmp_190_14_fu_30630_p2() {
    tmp_190_14_fu_30630_p2 = (!tmp_185_cast_fu_30626_p1.read().is_01() || !tmp_196_6_cast_reg_79674.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_cast_fu_30626_p1.read()) - sc_biguint<9>(tmp_196_6_cast_reg_79674.read()));
}

void batch_align2D_region::thread_tmp_190_15_fu_30907_p2() {
    tmp_190_15_fu_30907_p2 = (!tmp_196_9_cast_reg_79727.read().is_01() || !tmp_189_cast_fu_30903_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_9_cast_reg_79727.read()) - sc_biguint<9>(tmp_189_cast_fu_30903_p1.read()));
}

void batch_align2D_region::thread_tmp_190_16_fu_29821_p2() {
    tmp_190_16_fu_29821_p2 = (!tmp_196_cast_fu_29687_p1.read().is_01() || !tmp_196_8_cast_reg_79716.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_cast_fu_29687_p1.read()) - sc_biguint<9>(tmp_196_8_cast_reg_79716.read()));
}

void batch_align2D_region::thread_tmp_190_17_fu_30099_p2() {
    tmp_190_17_fu_30099_p2 = (!tmp_196_10_cast_fu_29951_p1.read().is_01() || !tmp_196_9_cast_reg_79727.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_10_cast_fu_29951_p1.read()) - sc_biguint<9>(tmp_196_9_cast_reg_79727.read()));
}

void batch_align2D_region::thread_tmp_190_18_fu_30377_p2() {
    tmp_190_18_fu_30377_p2 = (!tmp_196_11_cast_reg_79766.read().is_01() || !tmp_196_cast_reg_79739.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_11_cast_reg_79766.read()) - sc_biguint<9>(tmp_196_cast_reg_79739.read()));
}

void batch_align2D_region::thread_tmp_190_19_fu_30654_p2() {
    tmp_190_19_fu_30654_p2 = (!tmp_196_12_cast_reg_79783.read().is_01() || !tmp_196_10_cast_reg_79755.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_12_cast_reg_79783.read()) - sc_biguint<9>(tmp_196_10_cast_reg_79755.read()));
}

void batch_align2D_region::thread_tmp_190_1_fu_27560_p2() {
    tmp_190_1_fu_27560_p2 = (!tmp_185_1_cast_fu_27552_p1.read().is_01() || !tmp_189_1_cast_fu_27556_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_1_cast_fu_27552_p1.read()) - sc_biguint<9>(tmp_189_1_cast_fu_27556_p1.read()));
}

void batch_align2D_region::thread_tmp_190_20_fu_30931_p2() {
    tmp_190_20_fu_30931_p2 = (!tmp_196_13_cast_reg_79795.read().is_01() || !tmp_196_11_cast_reg_79766.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_13_cast_reg_79795.read()) - sc_biguint<9>(tmp_196_11_cast_reg_79766.read()));
}

void batch_align2D_region::thread_tmp_190_21_fu_31328_p2() {
    tmp_190_21_fu_31328_p2 = (!tmp_196_14_cast_reg_79817.read().is_01() || !tmp_196_12_cast_reg_79783.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_14_cast_reg_79817.read()) - sc_biguint<9>(tmp_196_12_cast_reg_79783.read()));
}

void batch_align2D_region::thread_tmp_190_22_fu_32495_p2() {
    tmp_190_22_fu_32495_p2 = (!tmp_185_8_cast_fu_32491_p1.read().is_01() || !tmp_196_13_cast_reg_79795.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_8_cast_fu_32491_p1.read()) - sc_biguint<9>(tmp_196_13_cast_reg_79795.read()));
}

void batch_align2D_region::thread_tmp_190_23_fu_32892_p2() {
    tmp_190_23_fu_32892_p2 = (!tmp_196_16_cast_reg_79870.read().is_01() || !tmp_189_2_cast_fu_32888_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_16_cast_reg_79870.read()) - sc_biguint<9>(tmp_189_2_cast_fu_32888_p1.read()));
}

void batch_align2D_region::thread_tmp_190_24_fu_31725_p2() {
    tmp_190_24_fu_31725_p2 = (!tmp_196_17_cast_reg_79882.read().is_01() || !tmp_196_15_cast_reg_79846.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_17_cast_reg_79882.read()) - sc_biguint<9>(tmp_196_15_cast_reg_79846.read()));
}

void batch_align2D_region::thread_tmp_190_25_fu_32122_p2() {
    tmp_190_25_fu_32122_p2 = (!tmp_196_18_cast_reg_79899.read().is_01() || !tmp_196_16_cast_reg_79870.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_18_cast_reg_79899.read()) - sc_biguint<9>(tmp_196_16_cast_reg_79870.read()));
}

void batch_align2D_region::thread_tmp_190_26_fu_32519_p2() {
    tmp_190_26_fu_32519_p2 = (!tmp_196_19_cast_reg_79911.read().is_01() || !tmp_196_17_cast_reg_79882.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_19_cast_reg_79911.read()) - sc_biguint<9>(tmp_196_17_cast_reg_79882.read()));
}

void batch_align2D_region::thread_tmp_190_27_fu_32916_p2() {
    tmp_190_27_fu_32916_p2 = (!tmp_196_20_cast_reg_79936.read().is_01() || !tmp_196_18_cast_reg_79899.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_20_cast_reg_79936.read()) - sc_biguint<9>(tmp_196_18_cast_reg_79899.read()));
}

void batch_align2D_region::thread_tmp_190_28_fu_33313_p2() {
    tmp_190_28_fu_33313_p2 = (!tmp_196_21_cast_reg_79948.read().is_01() || !tmp_196_19_cast_reg_79911.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_21_cast_reg_79948.read()) - sc_biguint<9>(tmp_196_19_cast_reg_79911.read()));
}

void batch_align2D_region::thread_tmp_190_29_fu_33710_p2() {
    tmp_190_29_fu_33710_p2 = (!tmp_196_22_cast_reg_79978.read().is_01() || !tmp_196_20_cast_reg_79936.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_22_cast_reg_79978.read()) - sc_biguint<9>(tmp_196_20_cast_reg_79936.read()));
}

void batch_align2D_region::thread_tmp_190_2_fu_27594_p2() {
    tmp_190_2_fu_27594_p2 = (!tmp_185_2_cast_fu_27590_p1.read().is_01() || !tmp_164_cast_reg_79504.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_2_cast_fu_27590_p1.read()) - sc_biguint<9>(tmp_164_cast_reg_79504.read()));
}

void batch_align2D_region::thread_tmp_190_30_fu_34480_p2() {
    tmp_190_30_fu_34480_p2 = (!tmp_185_9_cast_fu_34476_p1.read().is_01() || !tmp_196_21_cast_reg_79948.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_9_cast_fu_34476_p1.read()) - sc_biguint<9>(tmp_196_21_cast_reg_79948.read()));
}

void batch_align2D_region::thread_tmp_190_31_fu_34877_p2() {
    tmp_190_31_fu_34877_p2 = (!tmp_196_24_cast_reg_80015.read().is_01() || !tmp_189_3_cast_fu_34873_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_24_cast_reg_80015.read()) - sc_biguint<9>(tmp_189_3_cast_fu_34873_p1.read()));
}

void batch_align2D_region::thread_tmp_190_32_fu_34107_p2() {
    tmp_190_32_fu_34107_p2 = (!tmp_196_25_cast_reg_80027.read().is_01() || !tmp_196_23_cast_reg_79999.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_25_cast_reg_80027.read()) - sc_biguint<9>(tmp_196_23_cast_reg_79999.read()));
}

void batch_align2D_region::thread_tmp_190_33_fu_34504_p2() {
    tmp_190_33_fu_34504_p2 = (!tmp_196_26_cast_reg_80044.read().is_01() || !tmp_196_24_cast_reg_80015.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_26_cast_reg_80044.read()) - sc_biguint<9>(tmp_196_24_cast_reg_80015.read()));
}

void batch_align2D_region::thread_tmp_190_34_fu_34901_p2() {
    tmp_190_34_fu_34901_p2 = (!tmp_196_27_cast_reg_80056.read().is_01() || !tmp_196_25_cast_reg_80027.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_27_cast_reg_80056.read()) - sc_biguint<9>(tmp_196_25_cast_reg_80027.read()));
}

void batch_align2D_region::thread_tmp_190_35_fu_35298_p2() {
    tmp_190_35_fu_35298_p2 = (!tmp_196_28_cast_reg_80073.read().is_01() || !tmp_196_26_cast_reg_80044.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_28_cast_reg_80073.read()) - sc_biguint<9>(tmp_196_26_cast_reg_80044.read()));
}

void batch_align2D_region::thread_tmp_190_36_fu_35695_p2() {
    tmp_190_36_fu_35695_p2 = (!tmp_196_29_cast_reg_80085.read().is_01() || !tmp_196_27_cast_reg_80056.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_29_cast_reg_80085.read()) - sc_biguint<9>(tmp_196_27_cast_reg_80056.read()));
}

void batch_align2D_region::thread_tmp_190_37_fu_36078_p2() {
    tmp_190_37_fu_36078_p2 = (!tmp_196_30_cast_reg_80115.read().is_01() || !tmp_196_28_cast_reg_80073.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_30_cast_reg_80115.read()) - sc_biguint<9>(tmp_196_28_cast_reg_80073.read()));
}

void batch_align2D_region::thread_tmp_190_38_fu_36465_p2() {
    tmp_190_38_fu_36465_p2 = (!tmp_185_10_cast_fu_36461_p1.read().is_01() || !tmp_196_29_cast_reg_80085.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_10_cast_fu_36461_p1.read()) - sc_biguint<9>(tmp_196_29_cast_reg_80085.read()));
}

void batch_align2D_region::thread_tmp_190_39_fu_36862_p2() {
    tmp_190_39_fu_36862_p2 = (!tmp_196_32_cast_reg_80152.read().is_01() || !tmp_189_4_cast_fu_36858_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_32_cast_reg_80152.read()) - sc_biguint<9>(tmp_189_4_cast_fu_36858_p1.read()));
}

void batch_align2D_region::thread_tmp_190_3_fu_27756_p2() {
    tmp_190_3_fu_27756_p2 = (!tmp_185_3_cast_fu_27752_p1.read().is_01() || !tmp_185_1_cast_reg_79526.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_3_cast_fu_27752_p1.read()) - sc_biguint<9>(tmp_185_1_cast_reg_79526.read()));
}

void batch_align2D_region::thread_tmp_190_40_fu_36489_p2() {
    tmp_190_40_fu_36489_p2 = (!tmp_196_33_cast_reg_80164.read().is_01() || !tmp_196_31_cast_reg_80136.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_33_cast_reg_80164.read()) - sc_biguint<9>(tmp_196_31_cast_reg_80136.read()));
}

void batch_align2D_region::thread_tmp_190_41_fu_36886_p2() {
    tmp_190_41_fu_36886_p2 = (!tmp_196_34_cast_reg_80181.read().is_01() || !tmp_196_32_cast_reg_80152.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_34_cast_reg_80181.read()) - sc_biguint<9>(tmp_196_32_cast_reg_80152.read()));
}

void batch_align2D_region::thread_tmp_190_42_fu_37283_p2() {
    tmp_190_42_fu_37283_p2 = (!tmp_196_35_cast_reg_80193.read().is_01() || !tmp_196_33_cast_reg_80164.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_35_cast_reg_80193.read()) - sc_biguint<9>(tmp_196_33_cast_reg_80164.read()));
}

void batch_align2D_region::thread_tmp_190_43_fu_37666_p2() {
    tmp_190_43_fu_37666_p2 = (!tmp_196_36_cast_reg_80210.read().is_01() || !tmp_196_34_cast_reg_80181.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_36_cast_reg_80210.read()) - sc_biguint<9>(tmp_196_34_cast_reg_80181.read()));
}

void batch_align2D_region::thread_tmp_190_44_fu_38049_p2() {
    tmp_190_44_fu_38049_p2 = (!tmp_196_37_cast_reg_80227.read().is_01() || !tmp_196_35_cast_reg_80193.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_37_cast_reg_80227.read()) - sc_biguint<9>(tmp_196_35_cast_reg_80193.read()));
}

void batch_align2D_region::thread_tmp_190_45_fu_38072_p2() {
    tmp_190_45_fu_38072_p2 = (!tmp_196_38_cast_reg_80244.read().is_01() || !tmp_196_36_cast_reg_80210.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_38_cast_reg_80244.read()) - sc_biguint<9>(tmp_196_36_cast_reg_80210.read()));
}

void batch_align2D_region::thread_tmp_190_46_fu_38459_p2() {
    tmp_190_46_fu_38459_p2 = (!tmp_185_11_cast_fu_38455_p1.read().is_01() || !tmp_196_37_cast_reg_80227.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_11_cast_fu_38455_p1.read()) - sc_biguint<9>(tmp_196_37_cast_reg_80227.read()));
}

void batch_align2D_region::thread_tmp_190_47_fu_38847_p2() {
    tmp_190_47_fu_38847_p2 = (!tmp_196_40_cast_reg_80289.read().is_01() || !tmp_189_5_cast_fu_38843_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_40_cast_reg_80289.read()) - sc_biguint<9>(tmp_189_5_cast_fu_38843_p1.read()));
}

void batch_align2D_region::thread_tmp_190_48_fu_38871_p2() {
    tmp_190_48_fu_38871_p2 = (!tmp_196_41_cast_reg_80301.read().is_01() || !tmp_196_39_cast_reg_80273.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_41_cast_reg_80301.read()) - sc_biguint<9>(tmp_196_39_cast_reg_80273.read()));
}

void batch_align2D_region::thread_tmp_190_49_fu_39254_p2() {
    tmp_190_49_fu_39254_p2 = (!tmp_196_42_cast_reg_80318.read().is_01() || !tmp_196_40_cast_reg_80289.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_42_cast_reg_80318.read()) - sc_biguint<9>(tmp_196_40_cast_reg_80289.read()));
}

void batch_align2D_region::thread_tmp_190_4_fu_28039_p2() {
    tmp_190_4_fu_28039_p2 = (!tmp_185_4_cast_fu_28035_p1.read().is_01() || !tmp_185_2_cast_reg_79554.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_4_cast_fu_28035_p1.read()) - sc_biguint<9>(tmp_185_2_cast_reg_79554.read()));
}

void batch_align2D_region::thread_tmp_190_50_fu_39637_p2() {
    tmp_190_50_fu_39637_p2 = (!tmp_196_43_cast_reg_80335.read().is_01() || !tmp_196_41_cast_reg_80301.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_43_cast_reg_80335.read()) - sc_biguint<9>(tmp_196_41_cast_reg_80301.read()));
}

void batch_align2D_region::thread_tmp_190_51_fu_39660_p2() {
    tmp_190_51_fu_39660_p2 = (!tmp_196_44_cast_reg_80352.read().is_01() || !tmp_196_42_cast_reg_80318.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_44_cast_reg_80352.read()) - sc_biguint<9>(tmp_196_42_cast_reg_80318.read()));
}

void batch_align2D_region::thread_tmp_190_52_fu_40043_p2() {
    tmp_190_52_fu_40043_p2 = (!tmp_196_45_cast_reg_80369.read().is_01() || !tmp_196_43_cast_reg_80335.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_45_cast_reg_80369.read()) - sc_biguint<9>(tmp_196_43_cast_reg_80335.read()));
}

void batch_align2D_region::thread_tmp_190_53_fu_40426_p2() {
    tmp_190_53_fu_40426_p2 = (!tmp_196_46_cast_reg_80386.read().is_01() || !tmp_196_44_cast_reg_80352.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_46_cast_reg_80386.read()) - sc_biguint<9>(tmp_196_44_cast_reg_80352.read()));
}

void batch_align2D_region::thread_tmp_190_54_fu_40453_p2() {
    tmp_190_54_fu_40453_p2 = (!tmp_185_12_cast_fu_40449_p1.read().is_01() || !tmp_196_45_cast_reg_80369.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_12_cast_fu_40449_p1.read()) - sc_biguint<9>(tmp_196_45_cast_reg_80369.read()));
}

void batch_align2D_region::thread_tmp_190_55_fu_40850_p2() {
    tmp_190_55_fu_40850_p2 = (!tmp_196_48_cast_reg_80417.read().is_01() || !tmp_189_6_cast_fu_40846_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_48_cast_reg_80417.read()) - sc_biguint<9>(tmp_189_6_cast_fu_40846_p1.read()));
}

void batch_align2D_region::thread_tmp_190_56_fu_41242_p2() {
    tmp_190_56_fu_41242_p2 = (!tmp_196_49_cast_reg_80433.read().is_01() || !tmp_196_47_cast_reg_80402.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_49_cast_reg_80433.read()) - sc_biguint<9>(tmp_196_47_cast_reg_80402.read()));
}

void batch_align2D_region::thread_tmp_190_57_fu_41255_p2() {
    tmp_190_57_fu_41255_p2 = (!tmp_196_50_cast_reg_80449.read().is_01() || !tmp_196_48_cast_reg_80417.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_50_cast_reg_80449.read()) - sc_biguint<9>(tmp_196_48_cast_reg_80417.read()));
}

void batch_align2D_region::thread_tmp_190_58_fu_41646_p2() {
    tmp_190_58_fu_41646_p2 = (!tmp_196_51_cast_reg_80465.read().is_01() || !tmp_196_49_cast_reg_80433.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_51_cast_reg_80465.read()) - sc_biguint<9>(tmp_196_49_cast_reg_80433.read()));
}

void batch_align2D_region::thread_tmp_190_59_fu_42037_p2() {
    tmp_190_59_fu_42037_p2 = (!tmp_196_52_cast_reg_80481.read().is_01() || !tmp_196_50_cast_reg_80449.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_52_cast_reg_80481.read()) - sc_biguint<9>(tmp_196_50_cast_reg_80449.read()));
}

void batch_align2D_region::thread_tmp_190_5_fu_28201_p2() {
    tmp_190_5_fu_28201_p2 = (!tmp_185_5_cast_fu_28197_p1.read().is_01() || !tmp_185_3_cast_reg_79582.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_5_cast_fu_28197_p1.read()) - sc_biguint<9>(tmp_185_3_cast_reg_79582.read()));
}

void batch_align2D_region::thread_tmp_190_60_fu_42050_p2() {
    tmp_190_60_fu_42050_p2 = (!tmp_196_53_cast_reg_80497.read().is_01() || !tmp_196_51_cast_reg_80465.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_53_cast_reg_80497.read()) - sc_biguint<9>(tmp_196_51_cast_reg_80465.read()));
}

void batch_align2D_region::thread_tmp_190_61_fu_42441_p2() {
    tmp_190_61_fu_42441_p2 = (!tmp_196_54_cast_reg_80518.read().is_01() || !tmp_196_52_cast_reg_80481.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_54_cast_reg_80518.read()) - sc_biguint<9>(tmp_196_52_cast_reg_80481.read()));
}

void batch_align2D_region::thread_tmp_190_62_fu_42063_p2() {
    tmp_190_62_fu_42063_p2 = (!tmp_185_13_cast_fu_42059_p1.read().is_01() || !tmp_196_53_cast_reg_80497.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_13_cast_fu_42059_p1.read()) - sc_biguint<9>(tmp_196_53_cast_reg_80497.read()));
}

void batch_align2D_region::thread_tmp_190_6_fu_28724_p2() {
    tmp_190_6_fu_28724_p2 = (!tmp_185_6_cast_fu_28720_p1.read().is_01() || !tmp_185_4_cast_reg_79609.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_6_cast_fu_28720_p1.read()) - sc_biguint<9>(tmp_185_4_cast_reg_79609.read()));
}

void batch_align2D_region::thread_tmp_190_7_fu_28886_p2() {
    tmp_190_7_fu_28886_p2 = (!tmp_185_7_cast_fu_28882_p1.read().is_01() || !tmp_185_5_cast_reg_79637.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_185_7_cast_fu_28882_p1.read()) - sc_biguint<9>(tmp_185_5_cast_reg_79637.read()));
}

void batch_align2D_region::thread_tmp_190_8_fu_29529_p2() {
    tmp_190_8_fu_29529_p2 = (!tmp_196_1_cast_reg_79542.read().is_01() || !tmp_189_8_cast_fu_29525_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_1_cast_reg_79542.read()) - sc_biguint<9>(tmp_189_8_cast_fu_29525_p1.read()));
}

void batch_align2D_region::thread_tmp_190_9_fu_27608_p2() {
    tmp_190_9_fu_27608_p2 = (!tmp_196_2_cast_fu_27604_p1.read().is_01() || !tmp_175_cast_reg_79515.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_2_cast_fu_27604_p1.read()) - sc_biguint<9>(tmp_175_cast_reg_79515.read()));
}

void batch_align2D_region::thread_tmp_190_s_fu_27905_p2() {
    tmp_190_s_fu_27905_p2 = (!tmp_196_3_cast_fu_27886_p1.read().is_01() || !tmp_196_1_cast_reg_79542.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_3_cast_fu_27886_p1.read()) - sc_biguint<9>(tmp_196_1_cast_reg_79542.read()));
}

void batch_align2D_region::thread_tmp_196_10_cast_fu_29951_p1() {
    tmp_196_10_cast_fu_29951_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_11_cast_fu_29965_p1() {
    tmp_196_11_cast_fu_29965_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_12_cast_fu_30349_p1() {
    tmp_196_12_cast_fu_30349_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_13_cast_fu_30363_p1() {
    tmp_196_13_cast_fu_30363_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_14_cast_fu_30640_p1() {
    tmp_196_14_cast_fu_30640_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_15_cast_fu_30917_p1() {
    tmp_196_15_cast_fu_30917_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_16_cast_fu_31300_p1() {
    tmp_196_16_cast_fu_31300_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_17_cast_fu_31314_p1() {
    tmp_196_17_cast_fu_31314_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_18_cast_fu_31697_p1() {
    tmp_196_18_cast_fu_31697_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_19_cast_fu_31711_p1() {
    tmp_196_19_cast_fu_31711_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_1_cast_fu_27571_p1() {
    tmp_196_1_cast_fu_27571_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_20_cast_fu_32094_p1() {
    tmp_196_20_cast_fu_32094_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_21_cast_fu_32108_p1() {
    tmp_196_21_cast_fu_32108_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_22_cast_fu_32505_p1() {
    tmp_196_22_cast_fu_32505_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_23_cast_fu_32902_p1() {
    tmp_196_23_cast_fu_32902_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_24_cast_fu_33285_p1() {
    tmp_196_24_cast_fu_33285_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_25_cast_fu_33299_p1() {
    tmp_196_25_cast_fu_33299_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_26_cast_fu_33682_p1() {
    tmp_196_26_cast_fu_33682_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_27_cast_fu_33696_p1() {
    tmp_196_27_cast_fu_33696_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_28_cast_fu_34079_p1() {
    tmp_196_28_cast_fu_34079_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_29_cast_fu_34093_p1() {
    tmp_196_29_cast_fu_34093_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_2_cast_fu_27604_p1() {
    tmp_196_2_cast_fu_27604_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_30_cast_fu_34490_p1() {
    tmp_196_30_cast_fu_34490_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_31_cast_fu_34887_p1() {
    tmp_196_31_cast_fu_34887_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_32_cast_fu_35270_p1() {
    tmp_196_32_cast_fu_35270_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_33_cast_fu_35284_p1() {
    tmp_196_33_cast_fu_35284_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_34_cast_fu_35667_p1() {
    tmp_196_34_cast_fu_35667_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_35_cast_fu_35681_p1() {
    tmp_196_35_cast_fu_35681_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_36_cast_fu_36064_p1() {
    tmp_196_36_cast_fu_36064_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_37_cast_fu_36087_p1() {
    tmp_196_37_cast_fu_36087_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_38_cast_fu_36475_p1() {
    tmp_196_38_cast_fu_36475_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_39_cast_fu_36872_p1() {
    tmp_196_39_cast_fu_36872_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_3_cast_fu_27886_p1() {
    tmp_196_3_cast_fu_27886_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_40_cast_fu_37255_p1() {
    tmp_196_40_cast_fu_37255_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_41_cast_fu_37269_p1() {
    tmp_196_41_cast_fu_37269_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_42_cast_fu_37652_p1() {
    tmp_196_42_cast_fu_37652_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_43_cast_fu_37675_p1() {
    tmp_196_43_cast_fu_37675_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_44_cast_fu_38058_p1() {
    tmp_196_44_cast_fu_38058_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_45_cast_fu_38441_p1() {
    tmp_196_45_cast_fu_38441_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_46_cast_fu_38469_p1() {
    tmp_196_46_cast_fu_38469_p1 = esl_zext<9,8>(reg_26530.read());
}

void batch_align2D_region::thread_tmp_196_47_cast_fu_38857_p1() {
    tmp_196_47_cast_fu_38857_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_48_cast_fu_39240_p1() {
    tmp_196_48_cast_fu_39240_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_49_cast_fu_39263_p1() {
    tmp_196_49_cast_fu_39263_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_4_cast_fu_28049_p1() {
    tmp_196_4_cast_fu_28049_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_50_cast_fu_39646_p1() {
    tmp_196_50_cast_fu_39646_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_51_cast_fu_40029_p1() {
    tmp_196_51_cast_fu_40029_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_52_cast_fu_40052_p1() {
    tmp_196_52_cast_fu_40052_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_53_cast_fu_40435_p1() {
    tmp_196_53_cast_fu_40435_p1 = esl_zext<9,8>(reg_26530.read());
}

void batch_align2D_region::thread_tmp_196_54_cast_fu_40832_p1() {
    tmp_196_54_cast_fu_40832_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_55_cast_fu_40463_p1() {
    tmp_196_55_cast_fu_40463_p1 = esl_zext<9,8>(grp_fu_25196_p26.read());
}

void batch_align2D_region::thread_tmp_196_56_cast_fu_40864_p1() {
    tmp_196_56_cast_fu_40864_p1 = esl_zext<9,8>(grp_fu_25250_p26.read());
}

void batch_align2D_region::thread_tmp_196_57_cast_fu_40873_p1() {
    tmp_196_57_cast_fu_40873_p1 = esl_zext<9,8>(grp_fu_25196_p26.read());
}

void batch_align2D_region::thread_tmp_196_58_cast_fu_41264_p1() {
    tmp_196_58_cast_fu_41264_p1 = esl_zext<9,8>(grp_fu_25250_p26.read());
}

void batch_align2D_region::thread_tmp_196_59_cast_fu_41273_p1() {
    tmp_196_59_cast_fu_41273_p1 = esl_zext<9,8>(grp_fu_25196_p26.read());
}

void batch_align2D_region::thread_tmp_196_5_cast_fu_28331_p1() {
    tmp_196_5_cast_fu_28331_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_60_cast_fu_41659_p1() {
    tmp_196_60_cast_fu_41659_p1 = esl_zext<9,8>(grp_fu_25250_p26.read());
}

void batch_align2D_region::thread_tmp_196_61_cast_fu_41668_p1() {
    tmp_196_61_cast_fu_41668_p1 = esl_zext<9,8>(grp_fu_25196_p26.read());
}

void batch_align2D_region::thread_tmp_196_62_cast_fu_42068_p1() {
    tmp_196_62_cast_fu_42068_p1 = esl_zext<9,8>(grp_fu_25196_p26.read());
}

void batch_align2D_region::thread_tmp_196_6_cast_fu_28734_p1() {
    tmp_196_6_cast_fu_28734_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_7_cast_fu_29136_p1() {
    tmp_196_7_cast_fu_29136_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_8_cast_fu_29539_p1() {
    tmp_196_8_cast_fu_29539_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_196_9_cast_fu_29673_p1() {
    tmp_196_9_cast_fu_29673_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_196_cast_fu_29687_p1() {
    tmp_196_cast_fu_29687_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_200_1_cast_fu_27575_p1() {
    tmp_200_1_cast_fu_27575_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_200_2_cast_fu_27738_p1() {
    tmp_200_2_cast_fu_27738_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_200_3_cast_fu_27890_p1() {
    tmp_200_3_cast_fu_27890_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_200_4_cast_fu_28183_p1() {
    tmp_200_4_cast_fu_28183_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_200_5_cast_fu_28335_p1() {
    tmp_200_5_cast_fu_28335_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_200_6_cast_fu_28868_p1() {
    tmp_200_6_cast_fu_28868_p1 = esl_zext<9,8>(reg_25538.read());
}

void batch_align2D_region::thread_tmp_200_7_cast_fu_29140_p1() {
    tmp_200_7_cast_fu_29140_p1 = esl_zext<9,8>(reg_25534.read());
}

void batch_align2D_region::thread_tmp_201_10_fu_29955_p2() {
    tmp_201_10_fu_29955_p2 = (!tmp_196_10_cast_fu_29951_p1.read().is_01() || !tmp_185_2_cast_reg_79554.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_10_cast_fu_29951_p1.read()) - sc_biguint<9>(tmp_185_2_cast_reg_79554.read()));
}

void batch_align2D_region::thread_tmp_201_11_fu_29969_p2() {
    tmp_201_11_fu_29969_p2 = (!tmp_196_11_cast_fu_29965_p1.read().is_01() || !tmp_185_3_cast_reg_79582.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_11_cast_fu_29965_p1.read()) - sc_biguint<9>(tmp_185_3_cast_reg_79582.read()));
}

void batch_align2D_region::thread_tmp_201_12_fu_30353_p2() {
    tmp_201_12_fu_30353_p2 = (!tmp_196_12_cast_fu_30349_p1.read().is_01() || !tmp_185_4_cast_reg_79609.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_12_cast_fu_30349_p1.read()) - sc_biguint<9>(tmp_185_4_cast_reg_79609.read()));
}

void batch_align2D_region::thread_tmp_201_13_fu_30367_p2() {
    tmp_201_13_fu_30367_p2 = (!tmp_196_13_cast_fu_30363_p1.read().is_01() || !tmp_185_5_cast_reg_79637.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_13_cast_fu_30363_p1.read()) - sc_biguint<9>(tmp_185_5_cast_reg_79637.read()));
}

void batch_align2D_region::thread_tmp_201_14_fu_30644_p2() {
    tmp_201_14_fu_30644_p2 = (!tmp_196_14_cast_fu_30640_p1.read().is_01() || !tmp_185_6_cast_reg_79664.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_14_cast_fu_30640_p1.read()) - sc_biguint<9>(tmp_185_6_cast_reg_79664.read()));
}

void batch_align2D_region::thread_tmp_201_15_fu_30921_p2() {
    tmp_201_15_fu_30921_p2 = (!tmp_196_15_cast_fu_30917_p1.read().is_01() || !tmp_175_cast_reg_79515.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_15_cast_fu_30917_p1.read()) - sc_biguint<9>(tmp_175_cast_reg_79515.read()));
}

void batch_align2D_region::thread_tmp_201_16_fu_31304_p2() {
    tmp_201_16_fu_31304_p2 = (!tmp_196_16_cast_fu_31300_p1.read().is_01() || !tmp_196_1_cast_reg_79542.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_16_cast_fu_31300_p1.read()) - sc_biguint<9>(tmp_196_1_cast_reg_79542.read()));
}

void batch_align2D_region::thread_tmp_201_17_fu_31318_p2() {
    tmp_201_17_fu_31318_p2 = (!tmp_196_17_cast_fu_31314_p1.read().is_01() || !tmp_196_2_cast_reg_79565.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_17_cast_fu_31314_p1.read()) - sc_biguint<9>(tmp_196_2_cast_reg_79565.read()));
}

void batch_align2D_region::thread_tmp_201_18_fu_31701_p2() {
    tmp_201_18_fu_31701_p2 = (!tmp_196_18_cast_fu_31697_p1.read().is_01() || !tmp_196_3_cast_reg_79593.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_18_cast_fu_31697_p1.read()) - sc_biguint<9>(tmp_196_3_cast_reg_79593.read()));
}

void batch_align2D_region::thread_tmp_201_19_fu_31715_p2() {
    tmp_201_19_fu_31715_p2 = (!tmp_196_19_cast_fu_31711_p1.read().is_01() || !tmp_196_4_cast_reg_79620.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_19_cast_fu_31711_p1.read()) - sc_biguint<9>(tmp_196_4_cast_reg_79620.read()));
}

void batch_align2D_region::thread_tmp_201_1_fu_27579_p2() {
    tmp_201_1_fu_27579_p2 = (!tmp_196_1_cast_fu_27571_p1.read().is_01() || !tmp_200_1_cast_fu_27575_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_1_cast_fu_27571_p1.read()) - sc_biguint<9>(tmp_200_1_cast_fu_27575_p1.read()));
}

void batch_align2D_region::thread_tmp_201_20_fu_32098_p2() {
    tmp_201_20_fu_32098_p2 = (!tmp_196_20_cast_fu_32094_p1.read().is_01() || !tmp_196_5_cast_reg_79648.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_20_cast_fu_32094_p1.read()) - sc_biguint<9>(tmp_196_5_cast_reg_79648.read()));
}

void batch_align2D_region::thread_tmp_201_21_fu_32112_p2() {
    tmp_201_21_fu_32112_p2 = (!tmp_196_21_cast_fu_32108_p1.read().is_01() || !tmp_196_6_cast_reg_79674.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_21_cast_fu_32108_p1.read()) - sc_biguint<9>(tmp_196_6_cast_reg_79674.read()));
}

void batch_align2D_region::thread_tmp_201_22_fu_32509_p2() {
    tmp_201_22_fu_32509_p2 = (!tmp_196_22_cast_fu_32505_p1.read().is_01() || !tmp_196_7_cast_reg_79696.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_22_cast_fu_32505_p1.read()) - sc_biguint<9>(tmp_196_7_cast_reg_79696.read()));
}

void batch_align2D_region::thread_tmp_201_23_fu_32906_p2() {
    tmp_201_23_fu_32906_p2 = (!tmp_196_23_cast_fu_32902_p1.read().is_01() || !tmp_196_8_cast_reg_79716.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_23_cast_fu_32902_p1.read()) - sc_biguint<9>(tmp_196_8_cast_reg_79716.read()));
}

void batch_align2D_region::thread_tmp_201_24_fu_33289_p2() {
    tmp_201_24_fu_33289_p2 = (!tmp_196_24_cast_fu_33285_p1.read().is_01() || !tmp_196_9_cast_reg_79727.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_24_cast_fu_33285_p1.read()) - sc_biguint<9>(tmp_196_9_cast_reg_79727.read()));
}

void batch_align2D_region::thread_tmp_201_25_fu_33303_p2() {
    tmp_201_25_fu_33303_p2 = (!tmp_196_25_cast_fu_33299_p1.read().is_01() || !tmp_196_cast_reg_79739.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_25_cast_fu_33299_p1.read()) - sc_biguint<9>(tmp_196_cast_reg_79739.read()));
}

void batch_align2D_region::thread_tmp_201_26_fu_33686_p2() {
    tmp_201_26_fu_33686_p2 = (!tmp_196_26_cast_fu_33682_p1.read().is_01() || !tmp_196_10_cast_reg_79755.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_26_cast_fu_33682_p1.read()) - sc_biguint<9>(tmp_196_10_cast_reg_79755.read()));
}

void batch_align2D_region::thread_tmp_201_27_fu_33700_p2() {
    tmp_201_27_fu_33700_p2 = (!tmp_196_27_cast_fu_33696_p1.read().is_01() || !tmp_196_11_cast_reg_79766.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_27_cast_fu_33696_p1.read()) - sc_biguint<9>(tmp_196_11_cast_reg_79766.read()));
}

void batch_align2D_region::thread_tmp_201_28_fu_34083_p2() {
    tmp_201_28_fu_34083_p2 = (!tmp_196_28_cast_fu_34079_p1.read().is_01() || !tmp_196_12_cast_reg_79783.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_28_cast_fu_34079_p1.read()) - sc_biguint<9>(tmp_196_12_cast_reg_79783.read()));
}

void batch_align2D_region::thread_tmp_201_29_fu_34097_p2() {
    tmp_201_29_fu_34097_p2 = (!tmp_196_29_cast_fu_34093_p1.read().is_01() || !tmp_196_13_cast_reg_79795.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_29_cast_fu_34093_p1.read()) - sc_biguint<9>(tmp_196_13_cast_reg_79795.read()));
}

void batch_align2D_region::thread_tmp_201_2_fu_27742_p2() {
    tmp_201_2_fu_27742_p2 = (!tmp_196_2_cast_reg_79565.read().is_01() || !tmp_200_2_cast_fu_27738_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_2_cast_reg_79565.read()) - sc_biguint<9>(tmp_200_2_cast_fu_27738_p1.read()));
}

void batch_align2D_region::thread_tmp_201_30_fu_34494_p2() {
    tmp_201_30_fu_34494_p2 = (!tmp_196_30_cast_fu_34490_p1.read().is_01() || !tmp_196_14_cast_reg_79817.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_30_cast_fu_34490_p1.read()) - sc_biguint<9>(tmp_196_14_cast_reg_79817.read()));
}

void batch_align2D_region::thread_tmp_201_31_fu_34891_p2() {
    tmp_201_31_fu_34891_p2 = (!tmp_196_31_cast_fu_34887_p1.read().is_01() || !tmp_196_15_cast_reg_79846.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_31_cast_fu_34887_p1.read()) - sc_biguint<9>(tmp_196_15_cast_reg_79846.read()));
}

void batch_align2D_region::thread_tmp_201_32_fu_35274_p2() {
    tmp_201_32_fu_35274_p2 = (!tmp_196_32_cast_fu_35270_p1.read().is_01() || !tmp_196_16_cast_reg_79870.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_32_cast_fu_35270_p1.read()) - sc_biguint<9>(tmp_196_16_cast_reg_79870.read()));
}

void batch_align2D_region::thread_tmp_201_33_fu_35288_p2() {
    tmp_201_33_fu_35288_p2 = (!tmp_196_33_cast_fu_35284_p1.read().is_01() || !tmp_196_17_cast_reg_79882.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_33_cast_fu_35284_p1.read()) - sc_biguint<9>(tmp_196_17_cast_reg_79882.read()));
}

void batch_align2D_region::thread_tmp_201_34_fu_35671_p2() {
    tmp_201_34_fu_35671_p2 = (!tmp_196_34_cast_fu_35667_p1.read().is_01() || !tmp_196_18_cast_reg_79899.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_34_cast_fu_35667_p1.read()) - sc_biguint<9>(tmp_196_18_cast_reg_79899.read()));
}

void batch_align2D_region::thread_tmp_201_35_fu_35685_p2() {
    tmp_201_35_fu_35685_p2 = (!tmp_196_35_cast_fu_35681_p1.read().is_01() || !tmp_196_19_cast_reg_79911.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_35_cast_fu_35681_p1.read()) - sc_biguint<9>(tmp_196_19_cast_reg_79911.read()));
}

void batch_align2D_region::thread_tmp_201_36_fu_36068_p2() {
    tmp_201_36_fu_36068_p2 = (!tmp_196_36_cast_fu_36064_p1.read().is_01() || !tmp_196_20_cast_reg_79936.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_36_cast_fu_36064_p1.read()) - sc_biguint<9>(tmp_196_20_cast_reg_79936.read()));
}

void batch_align2D_region::thread_tmp_201_37_fu_36091_p2() {
    tmp_201_37_fu_36091_p2 = (!tmp_196_37_cast_fu_36087_p1.read().is_01() || !tmp_196_21_cast_reg_79948.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_37_cast_fu_36087_p1.read()) - sc_biguint<9>(tmp_196_21_cast_reg_79948.read()));
}

void batch_align2D_region::thread_tmp_201_38_fu_36479_p2() {
    tmp_201_38_fu_36479_p2 = (!tmp_196_38_cast_fu_36475_p1.read().is_01() || !tmp_196_22_cast_reg_79978.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_38_cast_fu_36475_p1.read()) - sc_biguint<9>(tmp_196_22_cast_reg_79978.read()));
}

void batch_align2D_region::thread_tmp_201_39_fu_36876_p2() {
    tmp_201_39_fu_36876_p2 = (!tmp_196_39_cast_fu_36872_p1.read().is_01() || !tmp_196_23_cast_reg_79999.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_39_cast_fu_36872_p1.read()) - sc_biguint<9>(tmp_196_23_cast_reg_79999.read()));
}

void batch_align2D_region::thread_tmp_201_3_fu_27894_p2() {
    tmp_201_3_fu_27894_p2 = (!tmp_196_3_cast_fu_27886_p1.read().is_01() || !tmp_200_3_cast_fu_27890_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_3_cast_fu_27886_p1.read()) - sc_biguint<9>(tmp_200_3_cast_fu_27890_p1.read()));
}

void batch_align2D_region::thread_tmp_201_40_fu_37259_p2() {
    tmp_201_40_fu_37259_p2 = (!tmp_196_40_cast_fu_37255_p1.read().is_01() || !tmp_196_24_cast_reg_80015.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_40_cast_fu_37255_p1.read()) - sc_biguint<9>(tmp_196_24_cast_reg_80015.read()));
}

void batch_align2D_region::thread_tmp_201_41_fu_37273_p2() {
    tmp_201_41_fu_37273_p2 = (!tmp_196_41_cast_fu_37269_p1.read().is_01() || !tmp_196_25_cast_reg_80027.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_41_cast_fu_37269_p1.read()) - sc_biguint<9>(tmp_196_25_cast_reg_80027.read()));
}

void batch_align2D_region::thread_tmp_201_42_fu_37656_p2() {
    tmp_201_42_fu_37656_p2 = (!tmp_196_42_cast_fu_37652_p1.read().is_01() || !tmp_196_26_cast_reg_80044.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_42_cast_fu_37652_p1.read()) - sc_biguint<9>(tmp_196_26_cast_reg_80044.read()));
}

void batch_align2D_region::thread_tmp_201_43_fu_37679_p2() {
    tmp_201_43_fu_37679_p2 = (!tmp_196_43_cast_fu_37675_p1.read().is_01() || !tmp_196_27_cast_reg_80056.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_43_cast_fu_37675_p1.read()) - sc_biguint<9>(tmp_196_27_cast_reg_80056.read()));
}

void batch_align2D_region::thread_tmp_201_44_fu_38062_p2() {
    tmp_201_44_fu_38062_p2 = (!tmp_196_44_cast_fu_38058_p1.read().is_01() || !tmp_196_28_cast_reg_80073.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_44_cast_fu_38058_p1.read()) - sc_biguint<9>(tmp_196_28_cast_reg_80073.read()));
}

void batch_align2D_region::thread_tmp_201_45_fu_38445_p2() {
    tmp_201_45_fu_38445_p2 = (!tmp_196_45_cast_fu_38441_p1.read().is_01() || !tmp_196_29_cast_reg_80085.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_45_cast_fu_38441_p1.read()) - sc_biguint<9>(tmp_196_29_cast_reg_80085.read()));
}

void batch_align2D_region::thread_tmp_201_46_fu_38473_p2() {
    tmp_201_46_fu_38473_p2 = (!tmp_196_46_cast_fu_38469_p1.read().is_01() || !tmp_196_30_cast_reg_80115.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_46_cast_fu_38469_p1.read()) - sc_biguint<9>(tmp_196_30_cast_reg_80115.read()));
}

void batch_align2D_region::thread_tmp_201_47_fu_38861_p2() {
    tmp_201_47_fu_38861_p2 = (!tmp_196_47_cast_fu_38857_p1.read().is_01() || !tmp_196_31_cast_reg_80136.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_47_cast_fu_38857_p1.read()) - sc_biguint<9>(tmp_196_31_cast_reg_80136.read()));
}

void batch_align2D_region::thread_tmp_201_48_fu_39244_p2() {
    tmp_201_48_fu_39244_p2 = (!tmp_196_48_cast_fu_39240_p1.read().is_01() || !tmp_196_32_cast_reg_80152.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_48_cast_fu_39240_p1.read()) - sc_biguint<9>(tmp_196_32_cast_reg_80152.read()));
}

void batch_align2D_region::thread_tmp_201_49_fu_39267_p2() {
    tmp_201_49_fu_39267_p2 = (!tmp_196_49_cast_fu_39263_p1.read().is_01() || !tmp_196_33_cast_reg_80164.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_49_cast_fu_39263_p1.read()) - sc_biguint<9>(tmp_196_33_cast_reg_80164.read()));
}

void batch_align2D_region::thread_tmp_201_4_fu_28187_p2() {
    tmp_201_4_fu_28187_p2 = (!tmp_196_4_cast_reg_79620.read().is_01() || !tmp_200_4_cast_fu_28183_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_4_cast_reg_79620.read()) - sc_biguint<9>(tmp_200_4_cast_fu_28183_p1.read()));
}

void batch_align2D_region::thread_tmp_201_50_fu_39650_p2() {
    tmp_201_50_fu_39650_p2 = (!tmp_196_50_cast_fu_39646_p1.read().is_01() || !tmp_196_34_cast_reg_80181.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_50_cast_fu_39646_p1.read()) - sc_biguint<9>(tmp_196_34_cast_reg_80181.read()));
}

void batch_align2D_region::thread_tmp_201_51_fu_40033_p2() {
    tmp_201_51_fu_40033_p2 = (!tmp_196_51_cast_fu_40029_p1.read().is_01() || !tmp_196_35_cast_reg_80193.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_51_cast_fu_40029_p1.read()) - sc_biguint<9>(tmp_196_35_cast_reg_80193.read()));
}

void batch_align2D_region::thread_tmp_201_52_fu_40056_p2() {
    tmp_201_52_fu_40056_p2 = (!tmp_196_52_cast_fu_40052_p1.read().is_01() || !tmp_196_36_cast_reg_80210.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_52_cast_fu_40052_p1.read()) - sc_biguint<9>(tmp_196_36_cast_reg_80210.read()));
}

void batch_align2D_region::thread_tmp_201_53_fu_40439_p2() {
    tmp_201_53_fu_40439_p2 = (!tmp_196_53_cast_fu_40435_p1.read().is_01() || !tmp_196_37_cast_reg_80227.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_53_cast_fu_40435_p1.read()) - sc_biguint<9>(tmp_196_37_cast_reg_80227.read()));
}

void batch_align2D_region::thread_tmp_201_54_fu_40836_p2() {
    tmp_201_54_fu_40836_p2 = (!tmp_196_54_cast_fu_40832_p1.read().is_01() || !tmp_196_38_cast_reg_80244.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_54_cast_fu_40832_p1.read()) - sc_biguint<9>(tmp_196_38_cast_reg_80244.read()));
}

void batch_align2D_region::thread_tmp_201_55_fu_40467_p2() {
    tmp_201_55_fu_40467_p2 = (!tmp_196_55_cast_fu_40463_p1.read().is_01() || !tmp_196_39_cast_reg_80273.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_55_cast_fu_40463_p1.read()) - sc_biguint<9>(tmp_196_39_cast_reg_80273.read()));
}

void batch_align2D_region::thread_tmp_201_56_fu_40868_p2() {
    tmp_201_56_fu_40868_p2 = (!tmp_196_56_cast_fu_40864_p1.read().is_01() || !tmp_196_40_cast_reg_80289.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_56_cast_fu_40864_p1.read()) - sc_biguint<9>(tmp_196_40_cast_reg_80289.read()));
}

void batch_align2D_region::thread_tmp_201_57_fu_40877_p2() {
    tmp_201_57_fu_40877_p2 = (!tmp_196_57_cast_fu_40873_p1.read().is_01() || !tmp_196_41_cast_reg_80301.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_57_cast_fu_40873_p1.read()) - sc_biguint<9>(tmp_196_41_cast_reg_80301.read()));
}

void batch_align2D_region::thread_tmp_201_58_fu_41268_p2() {
    tmp_201_58_fu_41268_p2 = (!tmp_196_58_cast_fu_41264_p1.read().is_01() || !tmp_196_42_cast_reg_80318.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_58_cast_fu_41264_p1.read()) - sc_biguint<9>(tmp_196_42_cast_reg_80318.read()));
}

void batch_align2D_region::thread_tmp_201_59_fu_41277_p2() {
    tmp_201_59_fu_41277_p2 = (!tmp_196_59_cast_fu_41273_p1.read().is_01() || !tmp_196_43_cast_reg_80335.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_59_cast_fu_41273_p1.read()) - sc_biguint<9>(tmp_196_43_cast_reg_80335.read()));
}

void batch_align2D_region::thread_tmp_201_5_fu_28339_p2() {
    tmp_201_5_fu_28339_p2 = (!tmp_196_5_cast_fu_28331_p1.read().is_01() || !tmp_200_5_cast_fu_28335_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_5_cast_fu_28331_p1.read()) - sc_biguint<9>(tmp_200_5_cast_fu_28335_p1.read()));
}

void batch_align2D_region::thread_tmp_201_60_fu_41663_p2() {
    tmp_201_60_fu_41663_p2 = (!tmp_196_60_cast_fu_41659_p1.read().is_01() || !tmp_196_44_cast_reg_80352.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_60_cast_fu_41659_p1.read()) - sc_biguint<9>(tmp_196_44_cast_reg_80352.read()));
}

void batch_align2D_region::thread_tmp_201_61_fu_41672_p2() {
    tmp_201_61_fu_41672_p2 = (!tmp_196_61_cast_fu_41668_p1.read().is_01() || !tmp_196_45_cast_reg_80369.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_61_cast_fu_41668_p1.read()) - sc_biguint<9>(tmp_196_45_cast_reg_80369.read()));
}

void batch_align2D_region::thread_tmp_201_62_fu_42072_p2() {
    tmp_201_62_fu_42072_p2 = (!tmp_196_62_cast_fu_42068_p1.read().is_01() || !tmp_196_46_cast_reg_80386.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_62_cast_fu_42068_p1.read()) - sc_biguint<9>(tmp_196_46_cast_reg_80386.read()));
}

void batch_align2D_region::thread_tmp_201_6_fu_28872_p2() {
    tmp_201_6_fu_28872_p2 = (!tmp_196_6_cast_reg_79674.read().is_01() || !tmp_200_6_cast_fu_28868_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_6_cast_reg_79674.read()) - sc_biguint<9>(tmp_200_6_cast_fu_28868_p1.read()));
}

void batch_align2D_region::thread_tmp_201_7_fu_29144_p2() {
    tmp_201_7_fu_29144_p2 = (!tmp_196_7_cast_fu_29136_p1.read().is_01() || !tmp_200_7_cast_fu_29140_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_7_cast_fu_29136_p1.read()) - sc_biguint<9>(tmp_200_7_cast_fu_29140_p1.read()));
}

void batch_align2D_region::thread_tmp_201_8_fu_29543_p2() {
    tmp_201_8_fu_29543_p2 = (!tmp_196_8_cast_fu_29539_p1.read().is_01() || !tmp_189_1_cast_reg_79532.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_8_cast_fu_29539_p1.read()) - sc_biguint<9>(tmp_189_1_cast_reg_79532.read()));
}

void batch_align2D_region::thread_tmp_201_9_fu_29677_p2() {
    tmp_201_9_fu_29677_p2 = (!tmp_196_9_cast_fu_29673_p1.read().is_01() || !tmp_164_cast_reg_79504.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_9_cast_fu_29673_p1.read()) - sc_biguint<9>(tmp_164_cast_reg_79504.read()));
}

void batch_align2D_region::thread_tmp_201_s_fu_29691_p2() {
    tmp_201_s_fu_29691_p2 = (!tmp_196_cast_fu_29687_p1.read().is_01() || !tmp_185_1_cast_reg_79526.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_196_cast_fu_29687_p1.read()) - sc_biguint<9>(tmp_185_1_cast_reg_79526.read()));
}

void batch_align2D_region::thread_tmp_230_fu_26868_p1() {
    tmp_230_fu_26868_p1 = indvar1_reg_21425.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_231_fu_27258_p1() {
    tmp_231_fu_27258_p1 = indvar6_reg_21470.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_232_fu_27222_p2() {
    tmp_232_fu_27222_p2 = (!next_urem_fu_27216_p2.read().is_01() || !ap_const_lv12_64.is_01())? sc_lv<1>(): (sc_biguint<12>(next_urem_fu_27216_p2.read()) < sc_biguint<12>(ap_const_lv12_64));
}

void batch_align2D_region::thread_tmp_87_fu_27188_p1() {
    tmp_87_fu_27188_p1 = esl_zext<64,12>(phi_urem_reg_21458.read());
}

void batch_align2D_region::thread_tmp_90_fu_27522_p2() {
    tmp_90_fu_27522_p2 = (!tmp_164_cast_fu_27514_p1.read().is_01() || !tmp_169_cast_fu_27518_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_164_cast_fu_27514_p1.read()) - sc_biguint<9>(tmp_169_cast_fu_27518_p1.read()));
}

void batch_align2D_region::thread_tmp_92_fu_27541_p2() {
    tmp_92_fu_27541_p2 = (!tmp_175_cast_fu_27533_p1.read().is_01() || !tmp_178_cast_fu_27537_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_175_cast_fu_27533_p1.read()) - sc_biguint<9>(tmp_178_cast_fu_27537_p1.read()));
}

void batch_align2D_region::thread_tmp_cast_fu_26819_p1() {
    tmp_cast_fu_26819_p1 = esl_zext<64,12>(tmp_159_reg_59593_pp0_iter1_reg.read());
}

void batch_align2D_region::thread_tmp_fu_26784_p1() {
    tmp_fu_26784_p1 = esl_zext<64,30>(my_cur_px_estimate_p_reg_59554.read());
}

void batch_align2D_region::thread_tmp_s_fu_26754_p1() {
    tmp_s_fu_26754_p1 = esl_sext<64,32>(my_ref_patch_with_border_ptr.read());
}

}

