#include "batch_align2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state9.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state9.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state9.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state19.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state19.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state19.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
            ap_enable_reg_pp1_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state29.read()))) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state29.read())) {
                ap_enable_reg_pp2_iter1 = (ap_condition_pp2_exit_iter0_state29.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp2_iter1 = ap_enable_reg_pp2_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter2 = ap_enable_reg_pp2_iter1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
            ap_enable_reg_pp2_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state38.read()))) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                    esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state38.read()))) {
            ap_enable_reg_pp3_iter1 = (ap_condition_pp3_exit_iter0_state38.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp3_iter1 = ap_enable_reg_pp3_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
                    esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp3_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp4_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp4_exit_iter0_state45.read()))) {
            ap_enable_reg_pp4_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
                    esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
            ap_enable_reg_pp4_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp4_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp4_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp4_exit_iter0_state45.read()))) {
            ap_enable_reg_pp4_iter1 = (ap_condition_pp4_exit_iter0_state45.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp4_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp4_iter1 = ap_enable_reg_pp4_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
                    esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
            ap_enable_reg_pp4_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_debug_AWREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
            if (esl_seteq<1,1,1>(ap_sig_ioackin_debug_AWREADY.read(), ap_const_logic_1)) {
                ap_reg_ioackin_debug_AWREADY = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, debug_AWREADY.read())) {
                ap_reg_ioackin_debug_AWREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_debug_WREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_condition_75449.read(), ap_const_boolean_1)) {
            if (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) {
                ap_reg_ioackin_debug_WREADY = ap_const_logic_0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, debug_WREADY.read()) && 
                        esl_seteq<1,1,1>(ap_block_pp3_stage0_01001.read(), ap_const_boolean_0))) {
                ap_reg_ioackin_debug_WREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_patches_ARREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
            if (esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1)) {
                ap_reg_ioackin_patches_ARREADY = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, patches_ARREADY.read())) {
                ap_reg_ioackin_patches_ARREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_pos_r_ARREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
            if (esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_ARREADY.read(), ap_const_logic_1)) {
                ap_reg_ioackin_pos_r_ARREADY = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, pos_r_ARREADY.read())) {
                ap_reg_ioackin_pos_r_ARREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_pos_r_AWREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
            if (esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) {
                ap_reg_ioackin_pos_r_AWREADY = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, pos_r_AWREADY.read())) {
                ap_reg_ioackin_pos_r_AWREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_pos_r_WREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_condition_75453.read(), ap_const_boolean_1)) {
            if (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) {
                ap_reg_ioackin_pos_r_WREADY = ap_const_logic_0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, pos_r_WREADY.read()) && 
                        esl_seteq<1,1,1>(ap_block_pp4_stage0_01001.read(), ap_const_boolean_0))) {
                ap_reg_ioackin_pos_r_WREADY = ap_const_logic_1;
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_reg_ioackin_pyr_ARREADY = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
            if (esl_seteq<1,1,1>(ap_sig_ioackin_pyr_ARREADY.read(), ap_const_logic_1)) {
                ap_reg_ioackin_pyr_ARREADY = ap_const_logic_0;
            } else if (esl_seteq<1,1,1>(ap_const_logic_1, pyr_ARREADY.read())) {
                ap_reg_ioackin_pyr_ARREADY = ap_const_logic_1;
            }
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state35_on_subcall_done.read()))) {
        cur_px_estimate_0_0 = grp_gauss_newton_optim_fu_2835_ap_return_0.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_107_reg_122576_pp2_iter1_reg.read()))) {
        cur_px_estimate_0_0 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state35_on_subcall_done.read()))) {
        cur_px_estimate_0_1 = grp_gauss_newton_optim_fu_2835_ap_return_1.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_0) && 
                esl_seteq<1,1,1>(tmp_107_reg_122576_pp2_iter1_reg.read(), ap_const_lv1_1))) {
        cur_px_estimate_0_1 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_1_0 = grp_gauss_newton_optim_fu_2835_ap_return_0.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_107_reg_122576_pp2_iter1_reg.read()) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_1))) {
        cur_px_estimate_1_0 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_1_1 = grp_gauss_newton_optim_fu_2835_ap_return_1.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(tmp_107_reg_122576_pp2_iter1_reg.read(), ap_const_lv1_1) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_1))) {
        cur_px_estimate_1_1 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_2_0 = grp_gauss_newton_optim_fu_3017_ap_return_0.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_107_reg_122576_pp2_iter1_reg.read()) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_2))) {
        cur_px_estimate_2_0 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_2_1 = grp_gauss_newton_optim_fu_3017_ap_return_1.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(tmp_107_reg_122576_pp2_iter1_reg.read(), ap_const_lv1_1) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_2))) {
        cur_px_estimate_2_1 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_3_0 = grp_gauss_newton_optim_fu_3199_ap_return_0.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_107_reg_122576_pp2_iter1_reg.read()) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_3))) {
        cur_px_estimate_3_0 = pos_addr_read_reg_122580.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_3_1 = grp_gauss_newton_optim_fu_3199_ap_return_1.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
                esl_seteq<1,1,1>(tmp_107_reg_122576_pp2_iter1_reg.read(), ap_const_lv1_1) && 
                esl_seteq<1,2,2>(p_t2_reg_122572_pp2_iter1_reg.read(), ap_const_lv2_3))) {
        cur_px_estimate_3_1 = pos_addr_read_reg_122580.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_compute_inverse_hess_fu_3381_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
              esl_seteq<1,1,1>(ap_sig_ioackin_debug_AWREADY.read(), ap_const_logic_1)) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
            grp_compute_inverse_hess_fu_3381_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_inverse_hess_fu_3381_ap_ready.read())) {
            grp_compute_inverse_hess_fu_3381_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_compute_inverse_hess_fu_3485_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
            grp_compute_inverse_hess_fu_3485_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_inverse_hess_fu_3485_ap_ready.read())) {
            grp_compute_inverse_hess_fu_3485_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_compute_inverse_hess_fu_3589_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
            grp_compute_inverse_hess_fu_3589_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_compute_inverse_hess_fu_3589_ap_ready.read())) {
            grp_compute_inverse_hess_fu_3589_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_gauss_newton_optim_fu_2835_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
            grp_gauss_newton_optim_fu_2835_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_gauss_newton_optim_fu_2835_ap_ready.read())) {
            grp_gauss_newton_optim_fu_2835_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_gauss_newton_optim_fu_3017_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
            grp_gauss_newton_optim_fu_3017_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_gauss_newton_optim_fu_3017_ap_ready.read())) {
            grp_gauss_newton_optim_fu_3017_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_gauss_newton_optim_fu_3199_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
            grp_gauss_newton_optim_fu_3199_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_gauss_newton_optim_fu_3199_ap_ready.read())) {
            grp_gauss_newton_optim_fu_3199_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_9612_p2.read()))) {
        indvar1_reg_2769 = indvar_next1_fu_9618_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        indvar1_reg_2769 = ap_const_lv9_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        indvar3_reg_2802 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_115552_p2.read()))) {
        indvar3_reg_2802 = indvar_next2_fu_115558_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        indvar6_reg_2813 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_fu_118676_p2.read()))) {
        indvar6_reg_2813 = indvar_next3_fu_118682_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
         esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
        indvar8_reg_2824 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_fu_118730_p2.read()))) {
        indvar8_reg_2824 = indvar_next4_fu_118736_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        indvar_reg_2757 = ap_const_lv19_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        indvar_reg_2757 = indvar_next_reg_118810.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_9612_p2.read()))) {
        phi_mul_reg_2780 = next_mul_fu_9624_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        phi_mul_reg_2780 = ap_const_lv19_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_9612_p2.read()))) {
        phi_urem_reg_2791 = idx_urem_fu_9656_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        phi_urem_reg_2791 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1000_fu_1822 = ref_patch_with_borde_2200_fu_35376_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1000_fu_1822 = ref_patch_with_borde_599.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1001_fu_1818 = ref_patch_with_borde_398_fu_35116_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1001_fu_1818 = ref_patch_with_borde_600.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1002_fu_1814 = ref_patch_with_borde_397_fu_34856_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1002_fu_1814 = ref_patch_with_borde_611.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1003_fu_1810 = ref_patch_with_borde_396_fu_34596_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1003_fu_1810 = ref_patch_with_borde_622.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1004_fu_1806 = ref_patch_with_borde_395_fu_34336_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1004_fu_1806 = ref_patch_with_borde_633.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1005_fu_1802 = ref_patch_with_borde_394_fu_34076_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1005_fu_1802 = ref_patch_with_borde_644.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1006_fu_1798 = ref_patch_with_borde_393_fu_33816_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1006_fu_1798 = ref_patch_with_borde_655.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1007_fu_1794 = ref_patch_with_borde_392_fu_33556_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1007_fu_1794 = ref_patch_with_borde_666.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1008_fu_1790 = ref_patch_with_borde_391_fu_33296_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1008_fu_1790 = ref_patch_with_borde_677.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1009_fu_1786 = ref_patch_with_borde_390_fu_33036_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1009_fu_1786 = ref_patch_with_borde_688.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1010_fu_1782 = ref_patch_with_borde_389_fu_32776_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1010_fu_1782 = ref_patch_with_borde_601.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1011_fu_1778 = ref_patch_with_borde_388_fu_32516_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1011_fu_1778 = ref_patch_with_borde_602.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1012_fu_1774 = ref_patch_with_borde_387_fu_32256_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1012_fu_1774 = ref_patch_with_borde_603.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1013_fu_1770 = ref_patch_with_borde_386_fu_31996_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1013_fu_1770 = ref_patch_with_borde_604.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1014_fu_1766 = ref_patch_with_borde_385_fu_31736_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1014_fu_1766 = ref_patch_with_borde_605.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1015_fu_1762 = ref_patch_with_borde_384_fu_31476_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1015_fu_1762 = ref_patch_with_borde_606.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1016_fu_1758 = ref_patch_with_borde_383_fu_31216_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1016_fu_1758 = ref_patch_with_borde_607.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1017_fu_1754 = ref_patch_with_borde_382_fu_30956_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1017_fu_1754 = ref_patch_with_borde_608.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1018_fu_1750 = ref_patch_with_borde_381_fu_30696_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1018_fu_1750 = ref_patch_with_borde_609.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1019_fu_1746 = ref_patch_with_borde_380_fu_30436_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1019_fu_1746 = ref_patch_with_borde_610.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1020_fu_1742 = ref_patch_with_borde_379_fu_30176_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1020_fu_1742 = ref_patch_with_borde_612.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1021_fu_1738 = ref_patch_with_borde_378_fu_29916_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1021_fu_1738 = ref_patch_with_borde_613.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1022_fu_1734 = ref_patch_with_borde_377_fu_29656_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1022_fu_1734 = ref_patch_with_borde_614.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1023_fu_1730 = ref_patch_with_borde_376_fu_29396_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1023_fu_1730 = ref_patch_with_borde_615.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1024_fu_1726 = ref_patch_with_borde_375_fu_29136_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1024_fu_1726 = ref_patch_with_borde_616.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1025_fu_1722 = ref_patch_with_borde_374_fu_28876_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1025_fu_1722 = ref_patch_with_borde_617.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1026_fu_1718 = ref_patch_with_borde_373_fu_28616_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1026_fu_1718 = ref_patch_with_borde_618.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1027_fu_1714 = ref_patch_with_borde_372_fu_28356_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1027_fu_1714 = ref_patch_with_borde_619.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1028_fu_1710 = ref_patch_with_borde_371_fu_28096_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1028_fu_1710 = ref_patch_with_borde_620.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1029_fu_1706 = ref_patch_with_borde_370_fu_27836_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1029_fu_1706 = ref_patch_with_borde_621.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1030_fu_1702 = ref_patch_with_borde_369_fu_27576_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1030_fu_1702 = ref_patch_with_borde_623.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1031_fu_1698 = ref_patch_with_borde_368_fu_27316_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1031_fu_1698 = ref_patch_with_borde_624.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1032_fu_1694 = ref_patch_with_borde_367_fu_27056_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1032_fu_1694 = ref_patch_with_borde_625.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1033_fu_1690 = ref_patch_with_borde_366_fu_26796_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1033_fu_1690 = ref_patch_with_borde_626.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1034_fu_1686 = ref_patch_with_borde_365_fu_26536_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1034_fu_1686 = ref_patch_with_borde_627.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1035_fu_1682 = ref_patch_with_borde_364_fu_26276_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1035_fu_1682 = ref_patch_with_borde_628.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1036_fu_1678 = ref_patch_with_borde_363_fu_26016_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1036_fu_1678 = ref_patch_with_borde_629.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1037_fu_1674 = ref_patch_with_borde_362_fu_25756_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1037_fu_1674 = ref_patch_with_borde_630.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1038_fu_1670 = ref_patch_with_borde_361_fu_25496_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1038_fu_1670 = ref_patch_with_borde_631.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1039_fu_1666 = ref_patch_with_borde_360_fu_25236_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1039_fu_1666 = ref_patch_with_borde_632.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1040_fu_1662 = ref_patch_with_borde_359_fu_24976_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1040_fu_1662 = ref_patch_with_borde_634.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1041_fu_1658 = ref_patch_with_borde_358_fu_24716_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1041_fu_1658 = ref_patch_with_borde_635.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1042_fu_1654 = ref_patch_with_borde_357_fu_24456_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1042_fu_1654 = ref_patch_with_borde_636.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1043_fu_1650 = ref_patch_with_borde_356_fu_24196_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1043_fu_1650 = ref_patch_with_borde_637.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1044_fu_1646 = ref_patch_with_borde_355_fu_23936_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1044_fu_1646 = ref_patch_with_borde_638.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1045_fu_1642 = ref_patch_with_borde_354_fu_23676_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1045_fu_1642 = ref_patch_with_borde_639.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1046_fu_1638 = ref_patch_with_borde_353_fu_23416_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1046_fu_1638 = ref_patch_with_borde_640.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1047_fu_1634 = ref_patch_with_borde_352_fu_23156_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1047_fu_1634 = ref_patch_with_borde_641.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1048_fu_1630 = ref_patch_with_borde_351_fu_22896_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1048_fu_1630 = ref_patch_with_borde_642.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1049_fu_1626 = ref_patch_with_borde_350_fu_22636_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1049_fu_1626 = ref_patch_with_borde_643.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1050_fu_1622 = ref_patch_with_borde_349_fu_22376_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1050_fu_1622 = ref_patch_with_borde_645.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1051_fu_1618 = ref_patch_with_borde_348_fu_22116_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1051_fu_1618 = ref_patch_with_borde_646.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1052_fu_1614 = ref_patch_with_borde_347_fu_21856_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1052_fu_1614 = ref_patch_with_borde_647.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1053_fu_1610 = ref_patch_with_borde_346_fu_21596_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1053_fu_1610 = ref_patch_with_borde_648.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1054_fu_1606 = ref_patch_with_borde_345_fu_21336_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1054_fu_1606 = ref_patch_with_borde_649.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1055_fu_1602 = ref_patch_with_borde_344_fu_21076_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1055_fu_1602 = ref_patch_with_borde_650.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1056_fu_1598 = ref_patch_with_borde_343_fu_20816_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1056_fu_1598 = ref_patch_with_borde_651.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1057_fu_1594 = ref_patch_with_borde_342_fu_20556_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1057_fu_1594 = ref_patch_with_borde_652.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1058_fu_1590 = ref_patch_with_borde_341_fu_20296_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1058_fu_1590 = ref_patch_with_borde_653.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1059_fu_1586 = ref_patch_with_borde_340_fu_20036_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1059_fu_1586 = ref_patch_with_borde_654.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1060_fu_1582 = ref_patch_with_borde_339_fu_19776_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1060_fu_1582 = ref_patch_with_borde_656.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1061_fu_1578 = ref_patch_with_borde_338_fu_19516_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1061_fu_1578 = ref_patch_with_borde_657.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1062_fu_1574 = ref_patch_with_borde_337_fu_19256_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1062_fu_1574 = ref_patch_with_borde_658.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1063_fu_1570 = ref_patch_with_borde_336_fu_18996_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1063_fu_1570 = ref_patch_with_borde_659.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1064_fu_1566 = ref_patch_with_borde_335_fu_18736_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1064_fu_1566 = ref_patch_with_borde_660.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1065_fu_1562 = ref_patch_with_borde_334_fu_18476_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1065_fu_1562 = ref_patch_with_borde_661.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1066_fu_1558 = ref_patch_with_borde_333_fu_18216_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1066_fu_1558 = ref_patch_with_borde_662.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1067_fu_1554 = ref_patch_with_borde_332_fu_17956_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1067_fu_1554 = ref_patch_with_borde_663.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1068_fu_1550 = ref_patch_with_borde_331_fu_17696_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1068_fu_1550 = ref_patch_with_borde_664.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1069_fu_1546 = ref_patch_with_borde_330_fu_17436_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1069_fu_1546 = ref_patch_with_borde_665.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1070_fu_1542 = ref_patch_with_borde_329_fu_17176_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1070_fu_1542 = ref_patch_with_borde_667.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1071_fu_1538 = ref_patch_with_borde_328_fu_16916_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1071_fu_1538 = ref_patch_with_borde_668.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1072_fu_1534 = ref_patch_with_borde_327_fu_16656_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1072_fu_1534 = ref_patch_with_borde_669.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1073_fu_1530 = ref_patch_with_borde_326_fu_16396_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1073_fu_1530 = ref_patch_with_borde_670.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1074_fu_1526 = ref_patch_with_borde_325_fu_16136_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1074_fu_1526 = ref_patch_with_borde_671.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1075_fu_1522 = ref_patch_with_borde_324_fu_15876_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1075_fu_1522 = ref_patch_with_borde_672.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1076_fu_1518 = ref_patch_with_borde_323_fu_15616_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1076_fu_1518 = ref_patch_with_borde_673.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1077_fu_1514 = ref_patch_with_borde_322_fu_15356_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1077_fu_1514 = ref_patch_with_borde_674.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1078_fu_1510 = ref_patch_with_borde_321_fu_15096_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1078_fu_1510 = ref_patch_with_borde_675.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1079_fu_1506 = ref_patch_with_borde_320_fu_14836_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1079_fu_1506 = ref_patch_with_borde_676.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1080_fu_1502 = ref_patch_with_borde_319_fu_14576_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1080_fu_1502 = ref_patch_with_borde_678.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1081_fu_1498 = ref_patch_with_borde_318_fu_14316_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1081_fu_1498 = ref_patch_with_borde_679.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1082_fu_1494 = ref_patch_with_borde_317_fu_14056_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1082_fu_1494 = ref_patch_with_borde_680.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1083_fu_1490 = ref_patch_with_borde_316_fu_13796_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1083_fu_1490 = ref_patch_with_borde_681.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1084_fu_1486 = ref_patch_with_borde_315_fu_13536_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1084_fu_1486 = ref_patch_with_borde_682.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1085_fu_1482 = ref_patch_with_borde_314_fu_13276_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1085_fu_1482 = ref_patch_with_borde_683.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1086_fu_1478 = ref_patch_with_borde_313_fu_13016_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1086_fu_1478 = ref_patch_with_borde_684.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1087_fu_1474 = ref_patch_with_borde_312_fu_12756_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1087_fu_1474 = ref_patch_with_borde_685.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1088_fu_1470 = ref_patch_with_borde_311_fu_12496_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1088_fu_1470 = ref_patch_with_borde_686.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1089_fu_1466 = ref_patch_with_borde_310_fu_12236_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1089_fu_1466 = ref_patch_with_borde_687.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1090_fu_1462 = ref_patch_with_borde_309_fu_11976_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1090_fu_1462 = ref_patch_with_borde_689.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1091_fu_1458 = ref_patch_with_borde_308_fu_11716_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1091_fu_1458 = ref_patch_with_borde_690.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1092_fu_1454 = ref_patch_with_borde_307_fu_11456_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1092_fu_1454 = ref_patch_with_borde_691.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1093_fu_1450 = ref_patch_with_borde_306_fu_11196_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1093_fu_1450 = ref_patch_with_borde_692.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1094_fu_1446 = ref_patch_with_borde_305_fu_10936_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1094_fu_1446 = ref_patch_with_borde_693.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1095_fu_1442 = ref_patch_with_borde_304_fu_10676_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1095_fu_1442 = ref_patch_with_borde_694.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1096_fu_1438 = ref_patch_with_borde_303_fu_10416_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1096_fu_1438 = ref_patch_with_borde_695.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1097_fu_1434 = ref_patch_with_borde_302_fu_10156_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1097_fu_1434 = ref_patch_with_borde_696.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1098_fu_1430 = ref_patch_with_borde_301_fu_9896_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1098_fu_1430 = ref_patch_with_borde_697.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_2))) {
        ref_patch_with_borde_1099_fu_1426 = ref_patch_with_borde_300_fu_9664_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1099_fu_1426 = ref_patch_with_borde_698.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1100_fu_1422 = ref_patch_with_borde_2400_fu_114792_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1100_fu_1422 = ref_patch_with_borde_99.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1101_fu_1418 = ref_patch_with_borde_2399_fu_114532_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1101_fu_1418 = ref_patch_with_borde_98.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1102_fu_1414 = ref_patch_with_borde_2398_fu_114272_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1102_fu_1414 = ref_patch_with_borde_87.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1103_fu_1410 = ref_patch_with_borde_2397_fu_114012_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1103_fu_1410 = ref_patch_with_borde_76.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1104_fu_1406 = ref_patch_with_borde_2396_fu_113752_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1104_fu_1406 = ref_patch_with_borde_65.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1105_fu_1402 = ref_patch_with_borde_2395_fu_113492_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1105_fu_1402 = ref_patch_with_borde_54.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1106_fu_1398 = ref_patch_with_borde_2394_fu_113232_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1106_fu_1398 = ref_patch_with_borde_43.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1107_fu_1394 = ref_patch_with_borde_2393_fu_112972_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1107_fu_1394 = ref_patch_with_borde_32.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1108_fu_1390 = ref_patch_with_borde_2392_fu_112712_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1108_fu_1390 = ref_patch_with_borde_21.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1109_fu_1386 = ref_patch_with_borde_2391_fu_112452_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1109_fu_1386 = ref_patch_with_borde_10.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1110_fu_1382 = ref_patch_with_borde_2390_fu_112192_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1110_fu_1382 = ref_patch_with_borde_97.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1111_fu_1378 = ref_patch_with_borde_2389_fu_111932_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1111_fu_1378 = ref_patch_with_borde_96.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1112_fu_1374 = ref_patch_with_borde_2388_fu_111672_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1112_fu_1374 = ref_patch_with_borde_95.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1113_fu_1370 = ref_patch_with_borde_2387_fu_111412_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1113_fu_1370 = ref_patch_with_borde_94.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1114_fu_1366 = ref_patch_with_borde_2386_fu_111152_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1114_fu_1366 = ref_patch_with_borde_93.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1115_fu_1362 = ref_patch_with_borde_2385_fu_110892_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1115_fu_1362 = ref_patch_with_borde_92.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1116_fu_1358 = ref_patch_with_borde_2384_fu_110632_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1116_fu_1358 = ref_patch_with_borde_91.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1117_fu_1354 = ref_patch_with_borde_2383_fu_110372_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1117_fu_1354 = ref_patch_with_borde_90.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1118_fu_1350 = ref_patch_with_borde_2382_fu_110112_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1118_fu_1350 = ref_patch_with_borde_89.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1119_fu_1346 = ref_patch_with_borde_2381_fu_109852_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1119_fu_1346 = ref_patch_with_borde_88.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1120_fu_1342 = ref_patch_with_borde_2380_fu_109592_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1120_fu_1342 = ref_patch_with_borde_86.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1121_fu_1338 = ref_patch_with_borde_2379_fu_109332_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1121_fu_1338 = ref_patch_with_borde_85.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1122_fu_1334 = ref_patch_with_borde_2378_fu_109072_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1122_fu_1334 = ref_patch_with_borde_84.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1123_fu_1330 = ref_patch_with_borde_2377_fu_108812_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1123_fu_1330 = ref_patch_with_borde_83.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1124_fu_1326 = ref_patch_with_borde_2376_fu_108552_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1124_fu_1326 = ref_patch_with_borde_82.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1125_fu_1322 = ref_patch_with_borde_2375_fu_108292_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1125_fu_1322 = ref_patch_with_borde_81.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1126_fu_1318 = ref_patch_with_borde_2374_fu_108032_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1126_fu_1318 = ref_patch_with_borde_80.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1127_fu_1314 = ref_patch_with_borde_2373_fu_107772_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1127_fu_1314 = ref_patch_with_borde_79.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1128_fu_1310 = ref_patch_with_borde_2372_fu_107512_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1128_fu_1310 = ref_patch_with_borde_78.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1129_fu_1306 = ref_patch_with_borde_2371_fu_107252_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1129_fu_1306 = ref_patch_with_borde_77.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1130_fu_1302 = ref_patch_with_borde_2370_fu_106992_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1130_fu_1302 = ref_patch_with_borde_75.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1131_fu_1298 = ref_patch_with_borde_2369_fu_106732_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1131_fu_1298 = ref_patch_with_borde_74.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1132_fu_1294 = ref_patch_with_borde_2368_fu_106472_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1132_fu_1294 = ref_patch_with_borde_73.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1133_fu_1290 = ref_patch_with_borde_2367_fu_106212_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1133_fu_1290 = ref_patch_with_borde_72.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1134_fu_1286 = ref_patch_with_borde_2366_fu_105952_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1134_fu_1286 = ref_patch_with_borde_71.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1135_fu_1282 = ref_patch_with_borde_2365_fu_105692_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1135_fu_1282 = ref_patch_with_borde_70.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1136_fu_1278 = ref_patch_with_borde_2364_fu_105432_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1136_fu_1278 = ref_patch_with_borde_69.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1137_fu_1274 = ref_patch_with_borde_2363_fu_105172_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1137_fu_1274 = ref_patch_with_borde_68.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1138_fu_1270 = ref_patch_with_borde_2362_fu_104912_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1138_fu_1270 = ref_patch_with_borde_67.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1139_fu_1266 = ref_patch_with_borde_2361_fu_104652_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1139_fu_1266 = ref_patch_with_borde_66.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1140_fu_1262 = ref_patch_with_borde_2360_fu_104392_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1140_fu_1262 = ref_patch_with_borde_64.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1141_fu_1258 = ref_patch_with_borde_2359_fu_104132_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1141_fu_1258 = ref_patch_with_borde_63.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1142_fu_1254 = ref_patch_with_borde_2358_fu_103872_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1142_fu_1254 = ref_patch_with_borde_62.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1143_fu_1250 = ref_patch_with_borde_2357_fu_103612_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1143_fu_1250 = ref_patch_with_borde_61.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1144_fu_1246 = ref_patch_with_borde_2356_fu_103352_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1144_fu_1246 = ref_patch_with_borde_60.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1145_fu_1242 = ref_patch_with_borde_2355_fu_103092_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1145_fu_1242 = ref_patch_with_borde_59.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1146_fu_1238 = ref_patch_with_borde_2354_fu_102832_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1146_fu_1238 = ref_patch_with_borde_58.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1147_fu_1234 = ref_patch_with_borde_2353_fu_102572_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1147_fu_1234 = ref_patch_with_borde_57.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1148_fu_1230 = ref_patch_with_borde_2352_fu_102312_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1148_fu_1230 = ref_patch_with_borde_56.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1149_fu_1226 = ref_patch_with_borde_2351_fu_102052_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1149_fu_1226 = ref_patch_with_borde_55.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1150_fu_1222 = ref_patch_with_borde_2350_fu_101792_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1150_fu_1222 = ref_patch_with_borde_53.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1151_fu_1218 = ref_patch_with_borde_2349_fu_101532_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1151_fu_1218 = ref_patch_with_borde_52.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1152_fu_1214 = ref_patch_with_borde_2348_fu_101272_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1152_fu_1214 = ref_patch_with_borde_51.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1153_fu_1210 = ref_patch_with_borde_2347_fu_101012_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1153_fu_1210 = ref_patch_with_borde_50.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1154_fu_1206 = ref_patch_with_borde_2346_fu_100752_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1154_fu_1206 = ref_patch_with_borde_49.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1155_fu_1202 = ref_patch_with_borde_2345_fu_100492_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1155_fu_1202 = ref_patch_with_borde_48.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1156_fu_1198 = ref_patch_with_borde_2344_fu_100232_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1156_fu_1198 = ref_patch_with_borde_47.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1157_fu_1194 = ref_patch_with_borde_2343_fu_99972_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1157_fu_1194 = ref_patch_with_borde_46.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1158_fu_1190 = ref_patch_with_borde_2342_fu_99712_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1158_fu_1190 = ref_patch_with_borde_45.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1159_fu_1186 = ref_patch_with_borde_2341_fu_99452_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1159_fu_1186 = ref_patch_with_borde_44.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1160_fu_1182 = ref_patch_with_borde_2340_fu_99192_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1160_fu_1182 = ref_patch_with_borde_42.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1161_fu_1178 = ref_patch_with_borde_2339_fu_98932_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1161_fu_1178 = ref_patch_with_borde_41.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1162_fu_1174 = ref_patch_with_borde_2338_fu_98672_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1162_fu_1174 = ref_patch_with_borde_40.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1163_fu_1170 = ref_patch_with_borde_2337_fu_98412_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1163_fu_1170 = ref_patch_with_borde_39.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1164_fu_1166 = ref_patch_with_borde_2336_fu_98152_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1164_fu_1166 = ref_patch_with_borde_38.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1165_fu_1162 = ref_patch_with_borde_2335_fu_97892_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1165_fu_1162 = ref_patch_with_borde_37.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1166_fu_1158 = ref_patch_with_borde_2334_fu_97632_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1166_fu_1158 = ref_patch_with_borde_36.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1167_fu_1154 = ref_patch_with_borde_2333_fu_97372_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1167_fu_1154 = ref_patch_with_borde_35.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1168_fu_1150 = ref_patch_with_borde_2332_fu_97112_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1168_fu_1150 = ref_patch_with_borde_34.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1169_fu_1146 = ref_patch_with_borde_2331_fu_96852_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1169_fu_1146 = ref_patch_with_borde_33.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1170_fu_1142 = ref_patch_with_borde_2330_fu_96592_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1170_fu_1142 = ref_patch_with_borde_31.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1171_fu_1138 = ref_patch_with_borde_2329_fu_96332_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1171_fu_1138 = ref_patch_with_borde_30.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1172_fu_1134 = ref_patch_with_borde_2328_fu_96072_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1172_fu_1134 = ref_patch_with_borde_29.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1173_fu_1130 = ref_patch_with_borde_2327_fu_95812_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1173_fu_1130 = ref_patch_with_borde_28.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1174_fu_1126 = ref_patch_with_borde_2326_fu_95552_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1174_fu_1126 = ref_patch_with_borde_27.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1175_fu_1122 = ref_patch_with_borde_2325_fu_95292_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1175_fu_1122 = ref_patch_with_borde_26.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1176_fu_1118 = ref_patch_with_borde_2324_fu_95032_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1176_fu_1118 = ref_patch_with_borde_25.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1177_fu_1114 = ref_patch_with_borde_2323_fu_94772_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1177_fu_1114 = ref_patch_with_borde_24.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1178_fu_1110 = ref_patch_with_borde_2322_fu_94512_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1178_fu_1110 = ref_patch_with_borde_23.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1179_fu_1106 = ref_patch_with_borde_2321_fu_94252_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1179_fu_1106 = ref_patch_with_borde_22.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1180_fu_1102 = ref_patch_with_borde_2320_fu_93992_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1180_fu_1102 = ref_patch_with_borde_20.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1181_fu_1098 = ref_patch_with_borde_2319_fu_93732_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1181_fu_1098 = ref_patch_with_borde_19.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1182_fu_1094 = ref_patch_with_borde_2318_fu_93472_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1182_fu_1094 = ref_patch_with_borde_18.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1183_fu_1090 = ref_patch_with_borde_2317_fu_93212_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1183_fu_1090 = ref_patch_with_borde_17.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1184_fu_1086 = ref_patch_with_borde_2316_fu_92952_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1184_fu_1086 = ref_patch_with_borde_16.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1185_fu_1082 = ref_patch_with_borde_2315_fu_92692_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1185_fu_1082 = ref_patch_with_borde_15.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1186_fu_1078 = ref_patch_with_borde_2314_fu_92432_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1186_fu_1078 = ref_patch_with_borde_14.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1187_fu_1074 = ref_patch_with_borde_2313_fu_92172_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1187_fu_1074 = ref_patch_with_borde_13.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1188_fu_1070 = ref_patch_with_borde_2312_fu_91912_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1188_fu_1070 = ref_patch_with_borde_12.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1189_fu_1066 = ref_patch_with_borde_2311_fu_91652_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1189_fu_1066 = ref_patch_with_borde_11.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1190_fu_1062 = ref_patch_with_borde_2310_fu_91392_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1190_fu_1062 = ref_patch_with_borde_9.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1191_fu_1058 = ref_patch_with_borde_2309_fu_91132_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1191_fu_1058 = ref_patch_with_borde_8.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1192_fu_1054 = ref_patch_with_borde_2308_fu_90872_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1192_fu_1054 = ref_patch_with_borde_7.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1193_fu_1050 = ref_patch_with_borde_2307_fu_90612_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1193_fu_1050 = ref_patch_with_borde_6.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1194_fu_1046 = ref_patch_with_borde_2306_fu_90352_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1194_fu_1046 = ref_patch_with_borde_5.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1195_fu_1042 = ref_patch_with_borde_2305_fu_90092_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1195_fu_1042 = ref_patch_with_borde_4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1196_fu_1038 = ref_patch_with_borde_2304_fu_89832_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1196_fu_1038 = ref_patch_with_borde_3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1197_fu_1034 = ref_patch_with_borde_2303_fu_89572_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1197_fu_1034 = ref_patch_with_borde_2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1198_fu_1030 = ref_patch_with_borde_2302_fu_89312_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1198_fu_1030 = ref_patch_with_borde_1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_3))) {
        ref_patch_with_borde_1199_fu_1026 = ref_patch_with_borde_2301_fu_89080_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_1199_fu_1026 = ref_patch_with_borde.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_800_fu_2622 = ref_patch_with_borde_199_fu_88320_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_800_fu_2622 = ref_patch_with_borde_399.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_801_fu_2618 = ref_patch_with_borde_198_fu_88060_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_801_fu_2618 = ref_patch_with_borde_400.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_802_fu_2614 = ref_patch_with_borde_197_fu_87800_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_802_fu_2614 = ref_patch_with_borde_411.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_803_fu_2610 = ref_patch_with_borde_196_fu_87540_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_803_fu_2610 = ref_patch_with_borde_422.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_804_fu_2606 = ref_patch_with_borde_195_fu_87280_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_804_fu_2606 = ref_patch_with_borde_433.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_805_fu_2602 = ref_patch_with_borde_194_fu_87020_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_805_fu_2602 = ref_patch_with_borde_444.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_806_fu_2598 = ref_patch_with_borde_193_fu_86760_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_806_fu_2598 = ref_patch_with_borde_455.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_807_fu_2594 = ref_patch_with_borde_192_fu_86500_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_807_fu_2594 = ref_patch_with_borde_466.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_808_fu_2590 = ref_patch_with_borde_191_fu_86240_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_808_fu_2590 = ref_patch_with_borde_477.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_809_fu_2586 = ref_patch_with_borde_190_fu_85980_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_809_fu_2586 = ref_patch_with_borde_488.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_810_fu_2582 = ref_patch_with_borde_189_fu_85720_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_810_fu_2582 = ref_patch_with_borde_401.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_811_fu_2578 = ref_patch_with_borde_188_fu_85460_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_811_fu_2578 = ref_patch_with_borde_402.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_812_fu_2574 = ref_patch_with_borde_187_fu_85200_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_812_fu_2574 = ref_patch_with_borde_403.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_813_fu_2570 = ref_patch_with_borde_186_fu_84940_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_813_fu_2570 = ref_patch_with_borde_404.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_814_fu_2566 = ref_patch_with_borde_185_fu_84680_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_814_fu_2566 = ref_patch_with_borde_405.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_815_fu_2562 = ref_patch_with_borde_184_fu_84420_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_815_fu_2562 = ref_patch_with_borde_406.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_816_fu_2558 = ref_patch_with_borde_183_fu_84160_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_816_fu_2558 = ref_patch_with_borde_407.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_817_fu_2554 = ref_patch_with_borde_182_fu_83900_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_817_fu_2554 = ref_patch_with_borde_408.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_818_fu_2550 = ref_patch_with_borde_181_fu_83640_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_818_fu_2550 = ref_patch_with_borde_409.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_819_fu_2546 = ref_patch_with_borde_180_fu_83380_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_819_fu_2546 = ref_patch_with_borde_410.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_820_fu_2542 = ref_patch_with_borde_179_fu_83120_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_820_fu_2542 = ref_patch_with_borde_412.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_821_fu_2538 = ref_patch_with_borde_178_fu_82860_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_821_fu_2538 = ref_patch_with_borde_413.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_822_fu_2534 = ref_patch_with_borde_177_fu_82600_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_822_fu_2534 = ref_patch_with_borde_414.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_823_fu_2530 = ref_patch_with_borde_176_fu_82340_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_823_fu_2530 = ref_patch_with_borde_415.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_824_fu_2526 = ref_patch_with_borde_175_fu_82080_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_824_fu_2526 = ref_patch_with_borde_416.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_825_fu_2522 = ref_patch_with_borde_174_fu_81820_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_825_fu_2522 = ref_patch_with_borde_417.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_826_fu_2518 = ref_patch_with_borde_173_fu_81560_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_826_fu_2518 = ref_patch_with_borde_418.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_827_fu_2514 = ref_patch_with_borde_172_fu_81300_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_827_fu_2514 = ref_patch_with_borde_419.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_828_fu_2510 = ref_patch_with_borde_171_fu_81040_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_828_fu_2510 = ref_patch_with_borde_420.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_829_fu_2506 = ref_patch_with_borde_170_fu_80780_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_829_fu_2506 = ref_patch_with_borde_421.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_830_fu_2502 = ref_patch_with_borde_169_fu_80520_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_830_fu_2502 = ref_patch_with_borde_423.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_831_fu_2498 = ref_patch_with_borde_168_fu_80260_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_831_fu_2498 = ref_patch_with_borde_424.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_832_fu_2494 = ref_patch_with_borde_167_fu_80000_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_832_fu_2494 = ref_patch_with_borde_425.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_833_fu_2490 = ref_patch_with_borde_166_fu_79740_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_833_fu_2490 = ref_patch_with_borde_426.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_834_fu_2486 = ref_patch_with_borde_165_fu_79480_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_834_fu_2486 = ref_patch_with_borde_427.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_835_fu_2482 = ref_patch_with_borde_164_fu_79220_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_835_fu_2482 = ref_patch_with_borde_428.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_836_fu_2478 = ref_patch_with_borde_163_fu_78960_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_836_fu_2478 = ref_patch_with_borde_429.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_837_fu_2474 = ref_patch_with_borde_162_fu_78700_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_837_fu_2474 = ref_patch_with_borde_430.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_838_fu_2470 = ref_patch_with_borde_161_fu_78440_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_838_fu_2470 = ref_patch_with_borde_431.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_839_fu_2466 = ref_patch_with_borde_160_fu_78180_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_839_fu_2466 = ref_patch_with_borde_432.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_840_fu_2462 = ref_patch_with_borde_159_fu_77920_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_840_fu_2462 = ref_patch_with_borde_434.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_841_fu_2458 = ref_patch_with_borde_158_fu_77660_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_841_fu_2458 = ref_patch_with_borde_435.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_842_fu_2454 = ref_patch_with_borde_157_fu_77400_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_842_fu_2454 = ref_patch_with_borde_436.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_843_fu_2450 = ref_patch_with_borde_156_fu_77140_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_843_fu_2450 = ref_patch_with_borde_437.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_844_fu_2446 = ref_patch_with_borde_155_fu_76880_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_844_fu_2446 = ref_patch_with_borde_438.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_845_fu_2442 = ref_patch_with_borde_154_fu_76620_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_845_fu_2442 = ref_patch_with_borde_439.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_846_fu_2438 = ref_patch_with_borde_153_fu_76360_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_846_fu_2438 = ref_patch_with_borde_440.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_847_fu_2434 = ref_patch_with_borde_152_fu_76100_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_847_fu_2434 = ref_patch_with_borde_441.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_848_fu_2430 = ref_patch_with_borde_151_fu_75840_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_848_fu_2430 = ref_patch_with_borde_442.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_849_fu_2426 = ref_patch_with_borde_150_fu_75580_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_849_fu_2426 = ref_patch_with_borde_443.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_850_fu_2422 = ref_patch_with_borde_149_fu_75320_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_850_fu_2422 = ref_patch_with_borde_445.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_851_fu_2418 = ref_patch_with_borde_148_fu_75060_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_851_fu_2418 = ref_patch_with_borde_446.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_852_fu_2414 = ref_patch_with_borde_147_fu_74800_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_852_fu_2414 = ref_patch_with_borde_447.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_853_fu_2410 = ref_patch_with_borde_146_fu_74540_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_853_fu_2410 = ref_patch_with_borde_448.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_854_fu_2406 = ref_patch_with_borde_145_fu_74280_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_854_fu_2406 = ref_patch_with_borde_449.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_855_fu_2402 = ref_patch_with_borde_144_fu_74020_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_855_fu_2402 = ref_patch_with_borde_450.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_856_fu_2398 = ref_patch_with_borde_143_fu_73760_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_856_fu_2398 = ref_patch_with_borde_451.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_857_fu_2394 = ref_patch_with_borde_142_fu_73500_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_857_fu_2394 = ref_patch_with_borde_452.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_858_fu_2390 = ref_patch_with_borde_141_fu_73240_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_858_fu_2390 = ref_patch_with_borde_453.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_859_fu_2386 = ref_patch_with_borde_140_fu_72980_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_859_fu_2386 = ref_patch_with_borde_454.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_860_fu_2382 = ref_patch_with_borde_139_fu_72720_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_860_fu_2382 = ref_patch_with_borde_456.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_861_fu_2378 = ref_patch_with_borde_138_fu_72460_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_861_fu_2378 = ref_patch_with_borde_457.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_862_fu_2374 = ref_patch_with_borde_137_fu_72200_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_862_fu_2374 = ref_patch_with_borde_458.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_863_fu_2370 = ref_patch_with_borde_136_fu_71940_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_863_fu_2370 = ref_patch_with_borde_459.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_864_fu_2366 = ref_patch_with_borde_135_fu_71680_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_864_fu_2366 = ref_patch_with_borde_460.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_865_fu_2362 = ref_patch_with_borde_134_fu_71420_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_865_fu_2362 = ref_patch_with_borde_461.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_866_fu_2358 = ref_patch_with_borde_133_fu_71160_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_866_fu_2358 = ref_patch_with_borde_462.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_867_fu_2354 = ref_patch_with_borde_132_fu_70900_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_867_fu_2354 = ref_patch_with_borde_463.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_868_fu_2350 = ref_patch_with_borde_131_fu_70640_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_868_fu_2350 = ref_patch_with_borde_464.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_869_fu_2346 = ref_patch_with_borde_130_fu_70380_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_869_fu_2346 = ref_patch_with_borde_465.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_870_fu_2342 = ref_patch_with_borde_129_fu_70120_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_870_fu_2342 = ref_patch_with_borde_467.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_871_fu_2338 = ref_patch_with_borde_128_fu_69860_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_871_fu_2338 = ref_patch_with_borde_468.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_872_fu_2334 = ref_patch_with_borde_127_fu_69600_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_872_fu_2334 = ref_patch_with_borde_469.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_873_fu_2330 = ref_patch_with_borde_126_fu_69340_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_873_fu_2330 = ref_patch_with_borde_470.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_874_fu_2326 = ref_patch_with_borde_125_fu_69080_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_874_fu_2326 = ref_patch_with_borde_471.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_875_fu_2322 = ref_patch_with_borde_124_fu_68820_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_875_fu_2322 = ref_patch_with_borde_472.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_876_fu_2318 = ref_patch_with_borde_123_fu_68560_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_876_fu_2318 = ref_patch_with_borde_473.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_877_fu_2314 = ref_patch_with_borde_122_fu_68300_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_877_fu_2314 = ref_patch_with_borde_474.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_878_fu_2310 = ref_patch_with_borde_121_fu_68040_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_878_fu_2310 = ref_patch_with_borde_475.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_879_fu_2306 = ref_patch_with_borde_120_fu_67780_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_879_fu_2306 = ref_patch_with_borde_476.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_880_fu_2302 = ref_patch_with_borde_119_fu_67520_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_880_fu_2302 = ref_patch_with_borde_478.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_881_fu_2298 = ref_patch_with_borde_118_fu_67260_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_881_fu_2298 = ref_patch_with_borde_479.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_882_fu_2294 = ref_patch_with_borde_117_fu_67000_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_882_fu_2294 = ref_patch_with_borde_480.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_883_fu_2290 = ref_patch_with_borde_116_fu_66740_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_883_fu_2290 = ref_patch_with_borde_481.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_884_fu_2286 = ref_patch_with_borde_115_fu_66480_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_884_fu_2286 = ref_patch_with_borde_482.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_885_fu_2282 = ref_patch_with_borde_114_fu_66220_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_885_fu_2282 = ref_patch_with_borde_483.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_886_fu_2278 = ref_patch_with_borde_113_fu_65960_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_886_fu_2278 = ref_patch_with_borde_484.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_887_fu_2274 = ref_patch_with_borde_112_fu_65700_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_887_fu_2274 = ref_patch_with_borde_485.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_888_fu_2270 = ref_patch_with_borde_111_fu_65440_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_888_fu_2270 = ref_patch_with_borde_486.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_889_fu_2266 = ref_patch_with_borde_110_fu_65180_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_889_fu_2266 = ref_patch_with_borde_487.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_890_fu_2262 = ref_patch_with_borde_109_fu_64920_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_890_fu_2262 = ref_patch_with_borde_489.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_891_fu_2258 = ref_patch_with_borde_108_fu_64660_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_891_fu_2258 = ref_patch_with_borde_490.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_892_fu_2254 = ref_patch_with_borde_107_fu_64400_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_892_fu_2254 = ref_patch_with_borde_491.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_893_fu_2250 = ref_patch_with_borde_106_fu_64140_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_893_fu_2250 = ref_patch_with_borde_492.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_894_fu_2246 = ref_patch_with_borde_105_fu_63880_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_894_fu_2246 = ref_patch_with_borde_493.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_895_fu_2242 = ref_patch_with_borde_104_fu_63620_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_895_fu_2242 = ref_patch_with_borde_494.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_896_fu_2238 = ref_patch_with_borde_103_fu_63360_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_896_fu_2238 = ref_patch_with_borde_495.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_897_fu_2234 = ref_patch_with_borde_102_fu_63100_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_897_fu_2234 = ref_patch_with_borde_496.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_898_fu_2230 = ref_patch_with_borde_101_fu_62840_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_898_fu_2230 = ref_patch_with_borde_497.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_0))) {
        ref_patch_with_borde_899_fu_2226 = ref_patch_with_borde_100_fu_62608_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_899_fu_2226 = ref_patch_with_borde_498.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_900_fu_2222 = ref_patch_with_borde_299_fu_61848_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_900_fu_2222 = ref_patch_with_borde_499.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_901_fu_2218 = ref_patch_with_borde_298_fu_61588_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_901_fu_2218 = ref_patch_with_borde_500.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_902_fu_2214 = ref_patch_with_borde_297_fu_61328_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_902_fu_2214 = ref_patch_with_borde_511.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_903_fu_2210 = ref_patch_with_borde_296_fu_61068_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_903_fu_2210 = ref_patch_with_borde_522.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_904_fu_2206 = ref_patch_with_borde_295_fu_60808_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_904_fu_2206 = ref_patch_with_borde_533.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_905_fu_2202 = ref_patch_with_borde_294_fu_60548_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_905_fu_2202 = ref_patch_with_borde_544.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_906_fu_2198 = ref_patch_with_borde_293_fu_60288_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_906_fu_2198 = ref_patch_with_borde_555.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_907_fu_2194 = ref_patch_with_borde_292_fu_60028_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_907_fu_2194 = ref_patch_with_borde_566.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_908_fu_2190 = ref_patch_with_borde_291_fu_59768_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_908_fu_2190 = ref_patch_with_borde_577.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_909_fu_2186 = ref_patch_with_borde_290_fu_59508_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_909_fu_2186 = ref_patch_with_borde_588.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_910_fu_2182 = ref_patch_with_borde_289_fu_59248_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_910_fu_2182 = ref_patch_with_borde_501.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_911_fu_2178 = ref_patch_with_borde_288_fu_58988_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_911_fu_2178 = ref_patch_with_borde_502.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_912_fu_2174 = ref_patch_with_borde_287_fu_58728_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_912_fu_2174 = ref_patch_with_borde_503.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_913_fu_2170 = ref_patch_with_borde_286_fu_58468_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_913_fu_2170 = ref_patch_with_borde_504.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_914_fu_2166 = ref_patch_with_borde_285_fu_58208_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_914_fu_2166 = ref_patch_with_borde_505.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_915_fu_2162 = ref_patch_with_borde_284_fu_57948_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_915_fu_2162 = ref_patch_with_borde_506.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_916_fu_2158 = ref_patch_with_borde_283_fu_57688_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_916_fu_2158 = ref_patch_with_borde_507.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_917_fu_2154 = ref_patch_with_borde_282_fu_57428_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_917_fu_2154 = ref_patch_with_borde_508.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_918_fu_2150 = ref_patch_with_borde_281_fu_57168_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_918_fu_2150 = ref_patch_with_borde_509.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_919_fu_2146 = ref_patch_with_borde_280_fu_56908_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_919_fu_2146 = ref_patch_with_borde_510.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_920_fu_2142 = ref_patch_with_borde_279_fu_56648_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_920_fu_2142 = ref_patch_with_borde_512.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_921_fu_2138 = ref_patch_with_borde_278_fu_56388_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_921_fu_2138 = ref_patch_with_borde_513.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_922_fu_2134 = ref_patch_with_borde_277_fu_56128_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_922_fu_2134 = ref_patch_with_borde_514.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_923_fu_2130 = ref_patch_with_borde_276_fu_55868_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_923_fu_2130 = ref_patch_with_borde_515.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_924_fu_2126 = ref_patch_with_borde_275_fu_55608_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_924_fu_2126 = ref_patch_with_borde_516.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_925_fu_2122 = ref_patch_with_borde_274_fu_55348_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_925_fu_2122 = ref_patch_with_borde_517.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_926_fu_2118 = ref_patch_with_borde_273_fu_55088_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_926_fu_2118 = ref_patch_with_borde_518.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_927_fu_2114 = ref_patch_with_borde_272_fu_54828_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_927_fu_2114 = ref_patch_with_borde_519.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_928_fu_2110 = ref_patch_with_borde_271_fu_54568_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_928_fu_2110 = ref_patch_with_borde_520.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_929_fu_2106 = ref_patch_with_borde_270_fu_54308_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_929_fu_2106 = ref_patch_with_borde_521.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_930_fu_2102 = ref_patch_with_borde_269_fu_54048_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_930_fu_2102 = ref_patch_with_borde_523.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_931_fu_2098 = ref_patch_with_borde_268_fu_53788_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_931_fu_2098 = ref_patch_with_borde_524.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_932_fu_2094 = ref_patch_with_borde_267_fu_53528_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_932_fu_2094 = ref_patch_with_borde_525.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_933_fu_2090 = ref_patch_with_borde_266_fu_53268_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_933_fu_2090 = ref_patch_with_borde_526.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_934_fu_2086 = ref_patch_with_borde_265_fu_53008_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_934_fu_2086 = ref_patch_with_borde_527.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_935_fu_2082 = ref_patch_with_borde_264_fu_52748_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_935_fu_2082 = ref_patch_with_borde_528.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_936_fu_2078 = ref_patch_with_borde_263_fu_52488_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_936_fu_2078 = ref_patch_with_borde_529.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_937_fu_2074 = ref_patch_with_borde_262_fu_52228_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_937_fu_2074 = ref_patch_with_borde_530.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_938_fu_2070 = ref_patch_with_borde_261_fu_51968_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_938_fu_2070 = ref_patch_with_borde_531.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_939_fu_2066 = ref_patch_with_borde_260_fu_51708_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_939_fu_2066 = ref_patch_with_borde_532.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_940_fu_2062 = ref_patch_with_borde_259_fu_51448_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_940_fu_2062 = ref_patch_with_borde_534.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_941_fu_2058 = ref_patch_with_borde_258_fu_51188_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_941_fu_2058 = ref_patch_with_borde_535.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_942_fu_2054 = ref_patch_with_borde_257_fu_50928_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_942_fu_2054 = ref_patch_with_borde_536.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_943_fu_2050 = ref_patch_with_borde_256_fu_50668_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_943_fu_2050 = ref_patch_with_borde_537.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_944_fu_2046 = ref_patch_with_borde_255_fu_50408_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_944_fu_2046 = ref_patch_with_borde_538.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_945_fu_2042 = ref_patch_with_borde_254_fu_50148_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_945_fu_2042 = ref_patch_with_borde_539.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_946_fu_2038 = ref_patch_with_borde_253_fu_49888_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_946_fu_2038 = ref_patch_with_borde_540.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_947_fu_2034 = ref_patch_with_borde_252_fu_49628_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_947_fu_2034 = ref_patch_with_borde_541.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_948_fu_2030 = ref_patch_with_borde_251_fu_49368_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_948_fu_2030 = ref_patch_with_borde_542.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_949_fu_2026 = ref_patch_with_borde_250_fu_49108_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_949_fu_2026 = ref_patch_with_borde_543.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_950_fu_2022 = ref_patch_with_borde_249_fu_48848_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_950_fu_2022 = ref_patch_with_borde_545.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_951_fu_2018 = ref_patch_with_borde_248_fu_48588_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_951_fu_2018 = ref_patch_with_borde_546.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_952_fu_2014 = ref_patch_with_borde_247_fu_48328_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_952_fu_2014 = ref_patch_with_borde_547.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_953_fu_2010 = ref_patch_with_borde_246_fu_48068_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_953_fu_2010 = ref_patch_with_borde_548.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_954_fu_2006 = ref_patch_with_borde_245_fu_47808_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_954_fu_2006 = ref_patch_with_borde_549.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_955_fu_2002 = ref_patch_with_borde_244_fu_47548_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_955_fu_2002 = ref_patch_with_borde_550.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_956_fu_1998 = ref_patch_with_borde_243_fu_47288_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_956_fu_1998 = ref_patch_with_borde_551.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_957_fu_1994 = ref_patch_with_borde_242_fu_47028_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_957_fu_1994 = ref_patch_with_borde_552.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_958_fu_1990 = ref_patch_with_borde_241_fu_46768_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_958_fu_1990 = ref_patch_with_borde_553.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_959_fu_1986 = ref_patch_with_borde_240_fu_46508_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_959_fu_1986 = ref_patch_with_borde_554.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_960_fu_1982 = ref_patch_with_borde_239_fu_46248_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_960_fu_1982 = ref_patch_with_borde_556.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_961_fu_1978 = ref_patch_with_borde_238_fu_45988_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_961_fu_1978 = ref_patch_with_borde_557.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_962_fu_1974 = ref_patch_with_borde_237_fu_45728_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_962_fu_1974 = ref_patch_with_borde_558.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_963_fu_1970 = ref_patch_with_borde_236_fu_45468_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_963_fu_1970 = ref_patch_with_borde_559.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_964_fu_1966 = ref_patch_with_borde_235_fu_45208_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_964_fu_1966 = ref_patch_with_borde_560.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_965_fu_1962 = ref_patch_with_borde_234_fu_44948_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_965_fu_1962 = ref_patch_with_borde_561.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_966_fu_1958 = ref_patch_with_borde_233_fu_44688_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_966_fu_1958 = ref_patch_with_borde_562.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_967_fu_1954 = ref_patch_with_borde_232_fu_44428_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_967_fu_1954 = ref_patch_with_borde_563.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_968_fu_1950 = ref_patch_with_borde_231_fu_44168_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_968_fu_1950 = ref_patch_with_borde_564.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_969_fu_1946 = ref_patch_with_borde_230_fu_43908_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_969_fu_1946 = ref_patch_with_borde_565.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_970_fu_1942 = ref_patch_with_borde_229_fu_43648_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_970_fu_1942 = ref_patch_with_borde_567.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_971_fu_1938 = ref_patch_with_borde_228_fu_43388_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_971_fu_1938 = ref_patch_with_borde_568.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_972_fu_1934 = ref_patch_with_borde_227_fu_43128_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_972_fu_1934 = ref_patch_with_borde_569.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_973_fu_1930 = ref_patch_with_borde_226_fu_42868_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_973_fu_1930 = ref_patch_with_borde_570.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_974_fu_1926 = ref_patch_with_borde_225_fu_42608_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_974_fu_1926 = ref_patch_with_borde_571.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_975_fu_1922 = ref_patch_with_borde_224_fu_42348_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_975_fu_1922 = ref_patch_with_borde_572.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_976_fu_1918 = ref_patch_with_borde_223_fu_42088_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_976_fu_1918 = ref_patch_with_borde_573.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_977_fu_1914 = ref_patch_with_borde_222_fu_41828_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_977_fu_1914 = ref_patch_with_borde_574.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_978_fu_1910 = ref_patch_with_borde_221_fu_41568_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_978_fu_1910 = ref_patch_with_borde_575.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_979_fu_1906 = ref_patch_with_borde_220_fu_41308_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_979_fu_1906 = ref_patch_with_borde_576.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_980_fu_1902 = ref_patch_with_borde_219_fu_41048_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_980_fu_1902 = ref_patch_with_borde_578.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_981_fu_1898 = ref_patch_with_borde_218_fu_40788_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_981_fu_1898 = ref_patch_with_borde_579.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_982_fu_1894 = ref_patch_with_borde_217_fu_40528_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_982_fu_1894 = ref_patch_with_borde_580.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_983_fu_1890 = ref_patch_with_borde_216_fu_40268_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_983_fu_1890 = ref_patch_with_borde_581.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_984_fu_1886 = ref_patch_with_borde_215_fu_40008_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_984_fu_1886 = ref_patch_with_borde_582.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_985_fu_1882 = ref_patch_with_borde_214_fu_39748_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_985_fu_1882 = ref_patch_with_borde_583.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_986_fu_1878 = ref_patch_with_borde_213_fu_39488_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_986_fu_1878 = ref_patch_with_borde_584.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_987_fu_1874 = ref_patch_with_borde_212_fu_39228_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_987_fu_1874 = ref_patch_with_borde_585.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_988_fu_1870 = ref_patch_with_borde_211_fu_38968_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_988_fu_1870 = ref_patch_with_borde_586.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_989_fu_1866 = ref_patch_with_borde_210_fu_38708_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_989_fu_1866 = ref_patch_with_borde_587.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_990_fu_1862 = ref_patch_with_borde_209_fu_38448_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_990_fu_1862 = ref_patch_with_borde_589.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_991_fu_1858 = ref_patch_with_borde_208_fu_38188_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_991_fu_1858 = ref_patch_with_borde_590.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_992_fu_1854 = ref_patch_with_borde_207_fu_37928_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_992_fu_1854 = ref_patch_with_borde_591.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_993_fu_1850 = ref_patch_with_borde_206_fu_37668_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_993_fu_1850 = ref_patch_with_borde_592.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_994_fu_1846 = ref_patch_with_borde_205_fu_37408_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_994_fu_1846 = ref_patch_with_borde_593.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_995_fu_1842 = ref_patch_with_borde_204_fu_37148_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_995_fu_1842 = ref_patch_with_borde_594.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_996_fu_1838 = ref_patch_with_borde_203_fu_36888_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_996_fu_1838 = ref_patch_with_borde_595.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_997_fu_1834 = ref_patch_with_borde_202_fu_36628_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_997_fu_1834 = ref_patch_with_borde_596.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_998_fu_1830 = ref_patch_with_borde_201_fu_36368_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_998_fu_1830 = ref_patch_with_borde_597.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,2,2>(div_t_reg_121634_pp1_iter1_reg.read(), ap_const_lv2_1))) {
        ref_patch_with_borde_999_fu_1826 = ref_patch_with_borde_200_fu_36136_p130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_999_fu_1826 = ref_patch_with_borde_598.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(grp_compute_inverse_hess_fu_3381_ap_done.read(), ap_const_logic_1))) {
        H_inv_0_0_reg_123192 = grp_compute_inverse_hess_fu_3381_ap_return_0.read();
        H_inv_0_1_reg_123198 = grp_compute_inverse_hess_fu_3381_ap_return_1.read();
        H_inv_0_2_reg_123204 = grp_compute_inverse_hess_fu_3381_ap_return_2.read();
        H_inv_0_3_reg_123210 = grp_compute_inverse_hess_fu_3381_ap_return_3.read();
        H_inv_0_4_reg_123216 = grp_compute_inverse_hess_fu_3381_ap_return_4.read();
        H_inv_0_5_reg_123222 = grp_compute_inverse_hess_fu_3381_ap_return_5.read();
        H_inv_0_6_reg_123228 = grp_compute_inverse_hess_fu_3381_ap_return_6.read();
        H_inv_0_7_reg_123234 = grp_compute_inverse_hess_fu_3381_ap_return_7.read();
        H_inv_0_8_reg_123240 = grp_compute_inverse_hess_fu_3381_ap_return_8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state35_on_subcall_done.read()))) {
        H_inv_1_0_reg_125056 = grp_compute_inverse_hess_fu_3381_ap_return_0.read();
        H_inv_1_1_reg_125062 = grp_compute_inverse_hess_fu_3381_ap_return_1.read();
        H_inv_1_2_reg_125068 = grp_compute_inverse_hess_fu_3381_ap_return_2.read();
        H_inv_1_3_reg_125074 = grp_compute_inverse_hess_fu_3381_ap_return_3.read();
        H_inv_1_4_reg_125080 = grp_compute_inverse_hess_fu_3381_ap_return_4.read();
        H_inv_1_5_reg_125086 = grp_compute_inverse_hess_fu_3381_ap_return_5.read();
        H_inv_1_6_reg_125092 = grp_compute_inverse_hess_fu_3381_ap_return_6.read();
        H_inv_1_7_reg_125098 = grp_compute_inverse_hess_fu_3381_ap_return_7.read();
        H_inv_1_8_reg_125104 = grp_compute_inverse_hess_fu_3381_ap_return_8.read();
        H_inv_2_0_reg_125110 = grp_compute_inverse_hess_fu_3485_ap_return_0.read();
        H_inv_2_1_reg_125116 = grp_compute_inverse_hess_fu_3485_ap_return_1.read();
        H_inv_2_2_reg_125122 = grp_compute_inverse_hess_fu_3485_ap_return_2.read();
        H_inv_2_3_reg_125128 = grp_compute_inverse_hess_fu_3485_ap_return_3.read();
        H_inv_2_4_reg_125134 = grp_compute_inverse_hess_fu_3485_ap_return_4.read();
        H_inv_2_5_reg_125140 = grp_compute_inverse_hess_fu_3485_ap_return_5.read();
        H_inv_2_6_reg_125146 = grp_compute_inverse_hess_fu_3485_ap_return_6.read();
        H_inv_2_7_reg_125152 = grp_compute_inverse_hess_fu_3485_ap_return_7.read();
        H_inv_2_8_reg_125158 = grp_compute_inverse_hess_fu_3485_ap_return_8.read();
        H_inv_3_0_reg_125484 = grp_compute_inverse_hess_fu_3589_ap_return_0.read();
        H_inv_3_1_reg_125490 = grp_compute_inverse_hess_fu_3589_ap_return_1.read();
        H_inv_3_2_reg_125496 = grp_compute_inverse_hess_fu_3589_ap_return_2.read();
        H_inv_3_3_reg_125502 = grp_compute_inverse_hess_fu_3589_ap_return_3.read();
        H_inv_3_4_reg_125508 = grp_compute_inverse_hess_fu_3589_ap_return_4.read();
        H_inv_3_5_reg_125514 = grp_compute_inverse_hess_fu_3589_ap_return_5.read();
        H_inv_3_6_reg_125520 = grp_compute_inverse_hess_fu_3589_ap_return_6.read();
        H_inv_3_7_reg_125526 = grp_compute_inverse_hess_fu_3589_ap_return_7.read();
        H_inv_3_8_reg_125532 = grp_compute_inverse_hess_fu_3589_ap_return_8.read();
        ref_patch_dx_2_0_reg_125164 = grp_compute_inverse_hess_fu_3485_ap_return_9.read();
        ref_patch_dx_2_10_reg_125214 = grp_compute_inverse_hess_fu_3485_ap_return_19.read();
        ref_patch_dx_2_11_reg_125219 = grp_compute_inverse_hess_fu_3485_ap_return_20.read();
        ref_patch_dx_2_12_reg_125224 = grp_compute_inverse_hess_fu_3485_ap_return_21.read();
        ref_patch_dx_2_13_reg_125229 = grp_compute_inverse_hess_fu_3485_ap_return_22.read();
        ref_patch_dx_2_14_reg_125234 = grp_compute_inverse_hess_fu_3485_ap_return_23.read();
        ref_patch_dx_2_15_reg_125239 = grp_compute_inverse_hess_fu_3485_ap_return_24.read();
        ref_patch_dx_2_16_reg_125244 = grp_compute_inverse_hess_fu_3485_ap_return_25.read();
        ref_patch_dx_2_17_reg_125249 = grp_compute_inverse_hess_fu_3485_ap_return_26.read();
        ref_patch_dx_2_18_reg_125254 = grp_compute_inverse_hess_fu_3485_ap_return_27.read();
        ref_patch_dx_2_19_reg_125259 = grp_compute_inverse_hess_fu_3485_ap_return_28.read();
        ref_patch_dx_2_1_reg_125169 = grp_compute_inverse_hess_fu_3485_ap_return_10.read();
        ref_patch_dx_2_20_reg_125264 = grp_compute_inverse_hess_fu_3485_ap_return_29.read();
        ref_patch_dx_2_21_reg_125269 = grp_compute_inverse_hess_fu_3485_ap_return_30.read();
        ref_patch_dx_2_22_reg_125274 = grp_compute_inverse_hess_fu_3485_ap_return_31.read();
        ref_patch_dx_2_23_reg_125279 = grp_compute_inverse_hess_fu_3485_ap_return_32.read();
        ref_patch_dx_2_24_reg_125284 = grp_compute_inverse_hess_fu_3485_ap_return_33.read();
        ref_patch_dx_2_25_reg_125289 = grp_compute_inverse_hess_fu_3485_ap_return_34.read();
        ref_patch_dx_2_26_reg_125294 = grp_compute_inverse_hess_fu_3485_ap_return_35.read();
        ref_patch_dx_2_27_reg_125299 = grp_compute_inverse_hess_fu_3485_ap_return_36.read();
        ref_patch_dx_2_28_reg_125304 = grp_compute_inverse_hess_fu_3485_ap_return_37.read();
        ref_patch_dx_2_29_reg_125309 = grp_compute_inverse_hess_fu_3485_ap_return_38.read();
        ref_patch_dx_2_2_reg_125174 = grp_compute_inverse_hess_fu_3485_ap_return_11.read();
        ref_patch_dx_2_30_reg_125314 = grp_compute_inverse_hess_fu_3485_ap_return_39.read();
        ref_patch_dx_2_31_reg_125319 = grp_compute_inverse_hess_fu_3485_ap_return_40.read();
        ref_patch_dx_2_32_reg_125324 = grp_compute_inverse_hess_fu_3485_ap_return_41.read();
        ref_patch_dx_2_33_reg_125329 = grp_compute_inverse_hess_fu_3485_ap_return_42.read();
        ref_patch_dx_2_34_reg_125334 = grp_compute_inverse_hess_fu_3485_ap_return_43.read();
        ref_patch_dx_2_35_reg_125339 = grp_compute_inverse_hess_fu_3485_ap_return_44.read();
        ref_patch_dx_2_36_reg_125344 = grp_compute_inverse_hess_fu_3485_ap_return_45.read();
        ref_patch_dx_2_37_reg_125349 = grp_compute_inverse_hess_fu_3485_ap_return_46.read();
        ref_patch_dx_2_38_reg_125354 = grp_compute_inverse_hess_fu_3485_ap_return_47.read();
        ref_patch_dx_2_39_reg_125359 = grp_compute_inverse_hess_fu_3485_ap_return_48.read();
        ref_patch_dx_2_3_reg_125179 = grp_compute_inverse_hess_fu_3485_ap_return_12.read();
        ref_patch_dx_2_40_reg_125364 = grp_compute_inverse_hess_fu_3485_ap_return_49.read();
        ref_patch_dx_2_41_reg_125369 = grp_compute_inverse_hess_fu_3485_ap_return_50.read();
        ref_patch_dx_2_42_reg_125374 = grp_compute_inverse_hess_fu_3485_ap_return_51.read();
        ref_patch_dx_2_43_reg_125379 = grp_compute_inverse_hess_fu_3485_ap_return_52.read();
        ref_patch_dx_2_44_reg_125384 = grp_compute_inverse_hess_fu_3485_ap_return_53.read();
        ref_patch_dx_2_45_reg_125389 = grp_compute_inverse_hess_fu_3485_ap_return_54.read();
        ref_patch_dx_2_46_reg_125394 = grp_compute_inverse_hess_fu_3485_ap_return_55.read();
        ref_patch_dx_2_47_reg_125399 = grp_compute_inverse_hess_fu_3485_ap_return_56.read();
        ref_patch_dx_2_48_reg_125404 = grp_compute_inverse_hess_fu_3485_ap_return_57.read();
        ref_patch_dx_2_49_reg_125409 = grp_compute_inverse_hess_fu_3485_ap_return_58.read();
        ref_patch_dx_2_4_reg_125184 = grp_compute_inverse_hess_fu_3485_ap_return_13.read();
        ref_patch_dx_2_50_reg_125414 = grp_compute_inverse_hess_fu_3485_ap_return_59.read();
        ref_patch_dx_2_51_reg_125419 = grp_compute_inverse_hess_fu_3485_ap_return_60.read();
        ref_patch_dx_2_52_reg_125424 = grp_compute_inverse_hess_fu_3485_ap_return_61.read();
        ref_patch_dx_2_53_reg_125429 = grp_compute_inverse_hess_fu_3485_ap_return_62.read();
        ref_patch_dx_2_54_reg_125434 = grp_compute_inverse_hess_fu_3485_ap_return_63.read();
        ref_patch_dx_2_55_reg_125439 = grp_compute_inverse_hess_fu_3485_ap_return_64.read();
        ref_patch_dx_2_56_reg_125444 = grp_compute_inverse_hess_fu_3485_ap_return_65.read();
        ref_patch_dx_2_57_reg_125449 = grp_compute_inverse_hess_fu_3485_ap_return_66.read();
        ref_patch_dx_2_58_reg_125454 = grp_compute_inverse_hess_fu_3485_ap_return_67.read();
        ref_patch_dx_2_59_reg_125459 = grp_compute_inverse_hess_fu_3485_ap_return_68.read();
        ref_patch_dx_2_5_reg_125189 = grp_compute_inverse_hess_fu_3485_ap_return_14.read();
        ref_patch_dx_2_60_reg_125464 = grp_compute_inverse_hess_fu_3485_ap_return_69.read();
        ref_patch_dx_2_61_reg_125469 = grp_compute_inverse_hess_fu_3485_ap_return_70.read();
        ref_patch_dx_2_62_reg_125474 = grp_compute_inverse_hess_fu_3485_ap_return_71.read();
        ref_patch_dx_2_63_reg_125479 = grp_compute_inverse_hess_fu_3485_ap_return_72.read();
        ref_patch_dx_2_6_reg_125194 = grp_compute_inverse_hess_fu_3485_ap_return_15.read();
        ref_patch_dx_2_7_reg_125199 = grp_compute_inverse_hess_fu_3485_ap_return_16.read();
        ref_patch_dx_2_8_reg_125204 = grp_compute_inverse_hess_fu_3485_ap_return_17.read();
        ref_patch_dx_2_9_reg_125209 = grp_compute_inverse_hess_fu_3485_ap_return_18.read();
        ref_patch_dx_3_0_reg_125538 = grp_compute_inverse_hess_fu_3589_ap_return_9.read();
        ref_patch_dx_3_10_reg_125588 = grp_compute_inverse_hess_fu_3589_ap_return_19.read();
        ref_patch_dx_3_11_reg_125593 = grp_compute_inverse_hess_fu_3589_ap_return_20.read();
        ref_patch_dx_3_12_reg_125598 = grp_compute_inverse_hess_fu_3589_ap_return_21.read();
        ref_patch_dx_3_13_reg_125603 = grp_compute_inverse_hess_fu_3589_ap_return_22.read();
        ref_patch_dx_3_14_reg_125608 = grp_compute_inverse_hess_fu_3589_ap_return_23.read();
        ref_patch_dx_3_15_reg_125613 = grp_compute_inverse_hess_fu_3589_ap_return_24.read();
        ref_patch_dx_3_16_reg_125618 = grp_compute_inverse_hess_fu_3589_ap_return_25.read();
        ref_patch_dx_3_17_reg_125623 = grp_compute_inverse_hess_fu_3589_ap_return_26.read();
        ref_patch_dx_3_18_reg_125628 = grp_compute_inverse_hess_fu_3589_ap_return_27.read();
        ref_patch_dx_3_19_reg_125633 = grp_compute_inverse_hess_fu_3589_ap_return_28.read();
        ref_patch_dx_3_1_reg_125543 = grp_compute_inverse_hess_fu_3589_ap_return_10.read();
        ref_patch_dx_3_20_reg_125638 = grp_compute_inverse_hess_fu_3589_ap_return_29.read();
        ref_patch_dx_3_21_reg_125643 = grp_compute_inverse_hess_fu_3589_ap_return_30.read();
        ref_patch_dx_3_22_reg_125648 = grp_compute_inverse_hess_fu_3589_ap_return_31.read();
        ref_patch_dx_3_23_reg_125653 = grp_compute_inverse_hess_fu_3589_ap_return_32.read();
        ref_patch_dx_3_24_reg_125658 = grp_compute_inverse_hess_fu_3589_ap_return_33.read();
        ref_patch_dx_3_25_reg_125663 = grp_compute_inverse_hess_fu_3589_ap_return_34.read();
        ref_patch_dx_3_26_reg_125668 = grp_compute_inverse_hess_fu_3589_ap_return_35.read();
        ref_patch_dx_3_27_reg_125673 = grp_compute_inverse_hess_fu_3589_ap_return_36.read();
        ref_patch_dx_3_28_reg_125678 = grp_compute_inverse_hess_fu_3589_ap_return_37.read();
        ref_patch_dx_3_29_reg_125683 = grp_compute_inverse_hess_fu_3589_ap_return_38.read();
        ref_patch_dx_3_2_reg_125548 = grp_compute_inverse_hess_fu_3589_ap_return_11.read();
        ref_patch_dx_3_30_reg_125688 = grp_compute_inverse_hess_fu_3589_ap_return_39.read();
        ref_patch_dx_3_31_reg_125693 = grp_compute_inverse_hess_fu_3589_ap_return_40.read();
        ref_patch_dx_3_32_reg_125698 = grp_compute_inverse_hess_fu_3589_ap_return_41.read();
        ref_patch_dx_3_33_reg_125703 = grp_compute_inverse_hess_fu_3589_ap_return_42.read();
        ref_patch_dx_3_34_reg_125708 = grp_compute_inverse_hess_fu_3589_ap_return_43.read();
        ref_patch_dx_3_35_reg_125713 = grp_compute_inverse_hess_fu_3589_ap_return_44.read();
        ref_patch_dx_3_36_reg_125718 = grp_compute_inverse_hess_fu_3589_ap_return_45.read();
        ref_patch_dx_3_37_reg_125723 = grp_compute_inverse_hess_fu_3589_ap_return_46.read();
        ref_patch_dx_3_38_reg_125728 = grp_compute_inverse_hess_fu_3589_ap_return_47.read();
        ref_patch_dx_3_39_reg_125733 = grp_compute_inverse_hess_fu_3589_ap_return_48.read();
        ref_patch_dx_3_3_reg_125553 = grp_compute_inverse_hess_fu_3589_ap_return_12.read();
        ref_patch_dx_3_40_reg_125738 = grp_compute_inverse_hess_fu_3589_ap_return_49.read();
        ref_patch_dx_3_41_reg_125743 = grp_compute_inverse_hess_fu_3589_ap_return_50.read();
        ref_patch_dx_3_42_reg_125748 = grp_compute_inverse_hess_fu_3589_ap_return_51.read();
        ref_patch_dx_3_43_reg_125753 = grp_compute_inverse_hess_fu_3589_ap_return_52.read();
        ref_patch_dx_3_44_reg_125758 = grp_compute_inverse_hess_fu_3589_ap_return_53.read();
        ref_patch_dx_3_45_reg_125763 = grp_compute_inverse_hess_fu_3589_ap_return_54.read();
        ref_patch_dx_3_46_reg_125768 = grp_compute_inverse_hess_fu_3589_ap_return_55.read();
        ref_patch_dx_3_47_reg_125773 = grp_compute_inverse_hess_fu_3589_ap_return_56.read();
        ref_patch_dx_3_48_reg_125778 = grp_compute_inverse_hess_fu_3589_ap_return_57.read();
        ref_patch_dx_3_49_reg_125783 = grp_compute_inverse_hess_fu_3589_ap_return_58.read();
        ref_patch_dx_3_4_reg_125558 = grp_compute_inverse_hess_fu_3589_ap_return_13.read();
        ref_patch_dx_3_50_reg_125788 = grp_compute_inverse_hess_fu_3589_ap_return_59.read();
        ref_patch_dx_3_51_reg_125793 = grp_compute_inverse_hess_fu_3589_ap_return_60.read();
        ref_patch_dx_3_52_reg_125798 = grp_compute_inverse_hess_fu_3589_ap_return_61.read();
        ref_patch_dx_3_53_reg_125803 = grp_compute_inverse_hess_fu_3589_ap_return_62.read();
        ref_patch_dx_3_54_reg_125808 = grp_compute_inverse_hess_fu_3589_ap_return_63.read();
        ref_patch_dx_3_55_reg_125813 = grp_compute_inverse_hess_fu_3589_ap_return_64.read();
        ref_patch_dx_3_56_reg_125818 = grp_compute_inverse_hess_fu_3589_ap_return_65.read();
        ref_patch_dx_3_57_reg_125823 = grp_compute_inverse_hess_fu_3589_ap_return_66.read();
        ref_patch_dx_3_58_reg_125828 = grp_compute_inverse_hess_fu_3589_ap_return_67.read();
        ref_patch_dx_3_59_reg_125833 = grp_compute_inverse_hess_fu_3589_ap_return_68.read();
        ref_patch_dx_3_5_reg_125563 = grp_compute_inverse_hess_fu_3589_ap_return_14.read();
        ref_patch_dx_3_60_reg_125838 = grp_compute_inverse_hess_fu_3589_ap_return_69.read();
        ref_patch_dx_3_61_reg_125843 = grp_compute_inverse_hess_fu_3589_ap_return_70.read();
        ref_patch_dx_3_62_reg_125848 = grp_compute_inverse_hess_fu_3589_ap_return_71.read();
        ref_patch_dx_3_63_reg_125853 = grp_compute_inverse_hess_fu_3589_ap_return_72.read();
        ref_patch_dx_3_6_reg_125568 = grp_compute_inverse_hess_fu_3589_ap_return_15.read();
        ref_patch_dx_3_7_reg_125573 = grp_compute_inverse_hess_fu_3589_ap_return_16.read();
        ref_patch_dx_3_8_reg_125578 = grp_compute_inverse_hess_fu_3589_ap_return_17.read();
        ref_patch_dx_3_9_reg_125583 = grp_compute_inverse_hess_fu_3589_ap_return_18.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        cur_px_estimate_3_0_1_reg_125888 = grp_gauss_newton_optim_fu_3199_ap_return_0.read();
        cur_px_estimate_3_1_1_reg_125893 = grp_gauss_newton_optim_fu_3199_ap_return_1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        debug_addr_reg_118781 = tmp_120_fu_5953_p1.read();
        img_w_read_reg_118774 = img_w.read();
        patches_addr_reg_118794 = ref_patch_with_border_ptr.read();
        pos_addr_reg_118787 = tmp_121_fu_5973_p1.read();
        pyr_addr_reg_118800 = pyr_data_ptr.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_9612_p2.read()))) {
        div_t_reg_121634 = phi_mul_reg_2780.read().range(17, 16);
        tmp_reg_121638 = tmp_fu_9640_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        div_t_reg_121634_pp1_iter1_reg = div_t_reg_121634.read();
        exitcond2_reg_121620 = exitcond2_fu_9612_p2.read();
        tmp_reg_121638_pp1_iter1_reg = tmp_reg_121638.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond4_reg_118806 = exitcond4_fu_5995_p2.read();
        exitcond4_reg_118806_pp0_iter1_reg = exitcond4_reg_118806.read();
        indvar_reg_2757_pp0_iter1_reg = indvar_reg_2757.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond5_reg_125898 = exitcond5_fu_118676_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond6_reg_125912 = exitcond6_fu_118730_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        indvar_next_reg_118810 = indvar_next_fu_6001_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_115552_p2.read()))) {
        p_t2_reg_122572 = indvar3_reg_2802.read().range(2, 1);
        tmp_107_reg_122576 = tmp_107_fu_115574_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        p_t2_reg_122572_pp2_iter1_reg = p_t2_reg_122572.read();
        pos_addr_read_reg_122580 = pos_r_RDATA.read();
        tmp_107_reg_122576_pp2_iter1_reg = tmp_107_reg_122576.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        patches_addr_read_reg_122047 = patches_RDATA.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        pyr_addr_read_reg_118815 = pyr_RDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ref_patch_with_borde = ref_patch_with_borde_1199_fu_1026.read();
        ref_patch_with_borde_1 = ref_patch_with_borde_1198_fu_1030.read();
        ref_patch_with_borde_10 = ref_patch_with_borde_1109_fu_1386.read();
        ref_patch_with_borde_11 = ref_patch_with_borde_1189_fu_1066.read();
        ref_patch_with_borde_12 = ref_patch_with_borde_1188_fu_1070.read();
        ref_patch_with_borde_13 = ref_patch_with_borde_1187_fu_1074.read();
        ref_patch_with_borde_14 = ref_patch_with_borde_1186_fu_1078.read();
        ref_patch_with_borde_15 = ref_patch_with_borde_1185_fu_1082.read();
        ref_patch_with_borde_16 = ref_patch_with_borde_1184_fu_1086.read();
        ref_patch_with_borde_17 = ref_patch_with_borde_1183_fu_1090.read();
        ref_patch_with_borde_18 = ref_patch_with_borde_1182_fu_1094.read();
        ref_patch_with_borde_19 = ref_patch_with_borde_1181_fu_1098.read();
        ref_patch_with_borde_2 = ref_patch_with_borde_1197_fu_1034.read();
        ref_patch_with_borde_20 = ref_patch_with_borde_1180_fu_1102.read();
        ref_patch_with_borde_21 = ref_patch_with_borde_1108_fu_1390.read();
        ref_patch_with_borde_22 = ref_patch_with_borde_1179_fu_1106.read();
        ref_patch_with_borde_23 = ref_patch_with_borde_1178_fu_1110.read();
        ref_patch_with_borde_24 = ref_patch_with_borde_1177_fu_1114.read();
        ref_patch_with_borde_25 = ref_patch_with_borde_1176_fu_1118.read();
        ref_patch_with_borde_26 = ref_patch_with_borde_1175_fu_1122.read();
        ref_patch_with_borde_27 = ref_patch_with_borde_1174_fu_1126.read();
        ref_patch_with_borde_28 = ref_patch_with_borde_1173_fu_1130.read();
        ref_patch_with_borde_29 = ref_patch_with_borde_1172_fu_1134.read();
        ref_patch_with_borde_3 = ref_patch_with_borde_1196_fu_1038.read();
        ref_patch_with_borde_30 = ref_patch_with_borde_1171_fu_1138.read();
        ref_patch_with_borde_31 = ref_patch_with_borde_1170_fu_1142.read();
        ref_patch_with_borde_32 = ref_patch_with_borde_1107_fu_1394.read();
        ref_patch_with_borde_33 = ref_patch_with_borde_1169_fu_1146.read();
        ref_patch_with_borde_34 = ref_patch_with_borde_1168_fu_1150.read();
        ref_patch_with_borde_35 = ref_patch_with_borde_1167_fu_1154.read();
        ref_patch_with_borde_36 = ref_patch_with_borde_1166_fu_1158.read();
        ref_patch_with_borde_37 = ref_patch_with_borde_1165_fu_1162.read();
        ref_patch_with_borde_38 = ref_patch_with_borde_1164_fu_1166.read();
        ref_patch_with_borde_39 = ref_patch_with_borde_1163_fu_1170.read();
        ref_patch_with_borde_4 = ref_patch_with_borde_1195_fu_1042.read();
        ref_patch_with_borde_40 = ref_patch_with_borde_1162_fu_1174.read();
        ref_patch_with_borde_41 = ref_patch_with_borde_1161_fu_1178.read();
        ref_patch_with_borde_42 = ref_patch_with_borde_1160_fu_1182.read();
        ref_patch_with_borde_43 = ref_patch_with_borde_1106_fu_1398.read();
        ref_patch_with_borde_44 = ref_patch_with_borde_1159_fu_1186.read();
        ref_patch_with_borde_45 = ref_patch_with_borde_1158_fu_1190.read();
        ref_patch_with_borde_46 = ref_patch_with_borde_1157_fu_1194.read();
        ref_patch_with_borde_47 = ref_patch_with_borde_1156_fu_1198.read();
        ref_patch_with_borde_48 = ref_patch_with_borde_1155_fu_1202.read();
        ref_patch_with_borde_49 = ref_patch_with_borde_1154_fu_1206.read();
        ref_patch_with_borde_499 = ref_patch_with_borde_900_fu_2222.read();
        ref_patch_with_borde_5 = ref_patch_with_borde_1194_fu_1046.read();
        ref_patch_with_borde_50 = ref_patch_with_borde_1153_fu_1210.read();
        ref_patch_with_borde_500 = ref_patch_with_borde_901_fu_2218.read();
        ref_patch_with_borde_501 = ref_patch_with_borde_910_fu_2182.read();
        ref_patch_with_borde_502 = ref_patch_with_borde_911_fu_2178.read();
        ref_patch_with_borde_503 = ref_patch_with_borde_912_fu_2174.read();
        ref_patch_with_borde_504 = ref_patch_with_borde_913_fu_2170.read();
        ref_patch_with_borde_505 = ref_patch_with_borde_914_fu_2166.read();
        ref_patch_with_borde_506 = ref_patch_with_borde_915_fu_2162.read();
        ref_patch_with_borde_507 = ref_patch_with_borde_916_fu_2158.read();
        ref_patch_with_borde_508 = ref_patch_with_borde_917_fu_2154.read();
        ref_patch_with_borde_509 = ref_patch_with_borde_918_fu_2150.read();
        ref_patch_with_borde_51 = ref_patch_with_borde_1152_fu_1214.read();
        ref_patch_with_borde_510 = ref_patch_with_borde_919_fu_2146.read();
        ref_patch_with_borde_511 = ref_patch_with_borde_902_fu_2214.read();
        ref_patch_with_borde_512 = ref_patch_with_borde_920_fu_2142.read();
        ref_patch_with_borde_513 = ref_patch_with_borde_921_fu_2138.read();
        ref_patch_with_borde_514 = ref_patch_with_borde_922_fu_2134.read();
        ref_patch_with_borde_515 = ref_patch_with_borde_923_fu_2130.read();
        ref_patch_with_borde_516 = ref_patch_with_borde_924_fu_2126.read();
        ref_patch_with_borde_517 = ref_patch_with_borde_925_fu_2122.read();
        ref_patch_with_borde_518 = ref_patch_with_borde_926_fu_2118.read();
        ref_patch_with_borde_519 = ref_patch_with_borde_927_fu_2114.read();
        ref_patch_with_borde_52 = ref_patch_with_borde_1151_fu_1218.read();
        ref_patch_with_borde_520 = ref_patch_with_borde_928_fu_2110.read();
        ref_patch_with_borde_521 = ref_patch_with_borde_929_fu_2106.read();
        ref_patch_with_borde_522 = ref_patch_with_borde_903_fu_2210.read();
        ref_patch_with_borde_523 = ref_patch_with_borde_930_fu_2102.read();
        ref_patch_with_borde_524 = ref_patch_with_borde_931_fu_2098.read();
        ref_patch_with_borde_525 = ref_patch_with_borde_932_fu_2094.read();
        ref_patch_with_borde_526 = ref_patch_with_borde_933_fu_2090.read();
        ref_patch_with_borde_527 = ref_patch_with_borde_934_fu_2086.read();
        ref_patch_with_borde_528 = ref_patch_with_borde_935_fu_2082.read();
        ref_patch_with_borde_529 = ref_patch_with_borde_936_fu_2078.read();
        ref_patch_with_borde_53 = ref_patch_with_borde_1150_fu_1222.read();
        ref_patch_with_borde_530 = ref_patch_with_borde_937_fu_2074.read();
        ref_patch_with_borde_531 = ref_patch_with_borde_938_fu_2070.read();
        ref_patch_with_borde_532 = ref_patch_with_borde_939_fu_2066.read();
        ref_patch_with_borde_533 = ref_patch_with_borde_904_fu_2206.read();
        ref_patch_with_borde_534 = ref_patch_with_borde_940_fu_2062.read();
        ref_patch_with_borde_535 = ref_patch_with_borde_941_fu_2058.read();
        ref_patch_with_borde_536 = ref_patch_with_borde_942_fu_2054.read();
        ref_patch_with_borde_537 = ref_patch_with_borde_943_fu_2050.read();
        ref_patch_with_borde_538 = ref_patch_with_borde_944_fu_2046.read();
        ref_patch_with_borde_539 = ref_patch_with_borde_945_fu_2042.read();
        ref_patch_with_borde_54 = ref_patch_with_borde_1105_fu_1402.read();
        ref_patch_with_borde_540 = ref_patch_with_borde_946_fu_2038.read();
        ref_patch_with_borde_541 = ref_patch_with_borde_947_fu_2034.read();
        ref_patch_with_borde_542 = ref_patch_with_borde_948_fu_2030.read();
        ref_patch_with_borde_543 = ref_patch_with_borde_949_fu_2026.read();
        ref_patch_with_borde_544 = ref_patch_with_borde_905_fu_2202.read();
        ref_patch_with_borde_545 = ref_patch_with_borde_950_fu_2022.read();
        ref_patch_with_borde_546 = ref_patch_with_borde_951_fu_2018.read();
        ref_patch_with_borde_547 = ref_patch_with_borde_952_fu_2014.read();
        ref_patch_with_borde_548 = ref_patch_with_borde_953_fu_2010.read();
        ref_patch_with_borde_549 = ref_patch_with_borde_954_fu_2006.read();
        ref_patch_with_borde_55 = ref_patch_with_borde_1149_fu_1226.read();
        ref_patch_with_borde_550 = ref_patch_with_borde_955_fu_2002.read();
        ref_patch_with_borde_551 = ref_patch_with_borde_956_fu_1998.read();
        ref_patch_with_borde_552 = ref_patch_with_borde_957_fu_1994.read();
        ref_patch_with_borde_553 = ref_patch_with_borde_958_fu_1990.read();
        ref_patch_with_borde_554 = ref_patch_with_borde_959_fu_1986.read();
        ref_patch_with_borde_555 = ref_patch_with_borde_906_fu_2198.read();
        ref_patch_with_borde_556 = ref_patch_with_borde_960_fu_1982.read();
        ref_patch_with_borde_557 = ref_patch_with_borde_961_fu_1978.read();
        ref_patch_with_borde_558 = ref_patch_with_borde_962_fu_1974.read();
        ref_patch_with_borde_559 = ref_patch_with_borde_963_fu_1970.read();
        ref_patch_with_borde_56 = ref_patch_with_borde_1148_fu_1230.read();
        ref_patch_with_borde_560 = ref_patch_with_borde_964_fu_1966.read();
        ref_patch_with_borde_561 = ref_patch_with_borde_965_fu_1962.read();
        ref_patch_with_borde_562 = ref_patch_with_borde_966_fu_1958.read();
        ref_patch_with_borde_563 = ref_patch_with_borde_967_fu_1954.read();
        ref_patch_with_borde_564 = ref_patch_with_borde_968_fu_1950.read();
        ref_patch_with_borde_565 = ref_patch_with_borde_969_fu_1946.read();
        ref_patch_with_borde_566 = ref_patch_with_borde_907_fu_2194.read();
        ref_patch_with_borde_567 = ref_patch_with_borde_970_fu_1942.read();
        ref_patch_with_borde_568 = ref_patch_with_borde_971_fu_1938.read();
        ref_patch_with_borde_569 = ref_patch_with_borde_972_fu_1934.read();
        ref_patch_with_borde_57 = ref_patch_with_borde_1147_fu_1234.read();
        ref_patch_with_borde_570 = ref_patch_with_borde_973_fu_1930.read();
        ref_patch_with_borde_571 = ref_patch_with_borde_974_fu_1926.read();
        ref_patch_with_borde_572 = ref_patch_with_borde_975_fu_1922.read();
        ref_patch_with_borde_573 = ref_patch_with_borde_976_fu_1918.read();
        ref_patch_with_borde_574 = ref_patch_with_borde_977_fu_1914.read();
        ref_patch_with_borde_575 = ref_patch_with_borde_978_fu_1910.read();
        ref_patch_with_borde_576 = ref_patch_with_borde_979_fu_1906.read();
        ref_patch_with_borde_577 = ref_patch_with_borde_908_fu_2190.read();
        ref_patch_with_borde_578 = ref_patch_with_borde_980_fu_1902.read();
        ref_patch_with_borde_579 = ref_patch_with_borde_981_fu_1898.read();
        ref_patch_with_borde_58 = ref_patch_with_borde_1146_fu_1238.read();
        ref_patch_with_borde_580 = ref_patch_with_borde_982_fu_1894.read();
        ref_patch_with_borde_581 = ref_patch_with_borde_983_fu_1890.read();
        ref_patch_with_borde_582 = ref_patch_with_borde_984_fu_1886.read();
        ref_patch_with_borde_583 = ref_patch_with_borde_985_fu_1882.read();
        ref_patch_with_borde_584 = ref_patch_with_borde_986_fu_1878.read();
        ref_patch_with_borde_585 = ref_patch_with_borde_987_fu_1874.read();
        ref_patch_with_borde_586 = ref_patch_with_borde_988_fu_1870.read();
        ref_patch_with_borde_587 = ref_patch_with_borde_989_fu_1866.read();
        ref_patch_with_borde_588 = ref_patch_with_borde_909_fu_2186.read();
        ref_patch_with_borde_589 = ref_patch_with_borde_990_fu_1862.read();
        ref_patch_with_borde_59 = ref_patch_with_borde_1145_fu_1242.read();
        ref_patch_with_borde_590 = ref_patch_with_borde_991_fu_1858.read();
        ref_patch_with_borde_591 = ref_patch_with_borde_992_fu_1854.read();
        ref_patch_with_borde_592 = ref_patch_with_borde_993_fu_1850.read();
        ref_patch_with_borde_593 = ref_patch_with_borde_994_fu_1846.read();
        ref_patch_with_borde_594 = ref_patch_with_borde_995_fu_1842.read();
        ref_patch_with_borde_595 = ref_patch_with_borde_996_fu_1838.read();
        ref_patch_with_borde_596 = ref_patch_with_borde_997_fu_1834.read();
        ref_patch_with_borde_597 = ref_patch_with_borde_998_fu_1830.read();
        ref_patch_with_borde_598 = ref_patch_with_borde_999_fu_1826.read();
        ref_patch_with_borde_599 = ref_patch_with_borde_1000_fu_1822.read();
        ref_patch_with_borde_6 = ref_patch_with_borde_1193_fu_1050.read();
        ref_patch_with_borde_60 = ref_patch_with_borde_1144_fu_1246.read();
        ref_patch_with_borde_600 = ref_patch_with_borde_1001_fu_1818.read();
        ref_patch_with_borde_601 = ref_patch_with_borde_1010_fu_1782.read();
        ref_patch_with_borde_602 = ref_patch_with_borde_1011_fu_1778.read();
        ref_patch_with_borde_603 = ref_patch_with_borde_1012_fu_1774.read();
        ref_patch_with_borde_604 = ref_patch_with_borde_1013_fu_1770.read();
        ref_patch_with_borde_605 = ref_patch_with_borde_1014_fu_1766.read();
        ref_patch_with_borde_606 = ref_patch_with_borde_1015_fu_1762.read();
        ref_patch_with_borde_607 = ref_patch_with_borde_1016_fu_1758.read();
        ref_patch_with_borde_608 = ref_patch_with_borde_1017_fu_1754.read();
        ref_patch_with_borde_609 = ref_patch_with_borde_1018_fu_1750.read();
        ref_patch_with_borde_61 = ref_patch_with_borde_1143_fu_1250.read();
        ref_patch_with_borde_610 = ref_patch_with_borde_1019_fu_1746.read();
        ref_patch_with_borde_611 = ref_patch_with_borde_1002_fu_1814.read();
        ref_patch_with_borde_612 = ref_patch_with_borde_1020_fu_1742.read();
        ref_patch_with_borde_613 = ref_patch_with_borde_1021_fu_1738.read();
        ref_patch_with_borde_614 = ref_patch_with_borde_1022_fu_1734.read();
        ref_patch_with_borde_615 = ref_patch_with_borde_1023_fu_1730.read();
        ref_patch_with_borde_616 = ref_patch_with_borde_1024_fu_1726.read();
        ref_patch_with_borde_617 = ref_patch_with_borde_1025_fu_1722.read();
        ref_patch_with_borde_618 = ref_patch_with_borde_1026_fu_1718.read();
        ref_patch_with_borde_619 = ref_patch_with_borde_1027_fu_1714.read();
        ref_patch_with_borde_62 = ref_patch_with_borde_1142_fu_1254.read();
        ref_patch_with_borde_620 = ref_patch_with_borde_1028_fu_1710.read();
        ref_patch_with_borde_621 = ref_patch_with_borde_1029_fu_1706.read();
        ref_patch_with_borde_622 = ref_patch_with_borde_1003_fu_1810.read();
        ref_patch_with_borde_623 = ref_patch_with_borde_1030_fu_1702.read();
        ref_patch_with_borde_624 = ref_patch_with_borde_1031_fu_1698.read();
        ref_patch_with_borde_625 = ref_patch_with_borde_1032_fu_1694.read();
        ref_patch_with_borde_626 = ref_patch_with_borde_1033_fu_1690.read();
        ref_patch_with_borde_627 = ref_patch_with_borde_1034_fu_1686.read();
        ref_patch_with_borde_628 = ref_patch_with_borde_1035_fu_1682.read();
        ref_patch_with_borde_629 = ref_patch_with_borde_1036_fu_1678.read();
        ref_patch_with_borde_63 = ref_patch_with_borde_1141_fu_1258.read();
        ref_patch_with_borde_630 = ref_patch_with_borde_1037_fu_1674.read();
        ref_patch_with_borde_631 = ref_patch_with_borde_1038_fu_1670.read();
        ref_patch_with_borde_632 = ref_patch_with_borde_1039_fu_1666.read();
        ref_patch_with_borde_633 = ref_patch_with_borde_1004_fu_1806.read();
        ref_patch_with_borde_634 = ref_patch_with_borde_1040_fu_1662.read();
        ref_patch_with_borde_635 = ref_patch_with_borde_1041_fu_1658.read();
        ref_patch_with_borde_636 = ref_patch_with_borde_1042_fu_1654.read();
        ref_patch_with_borde_637 = ref_patch_with_borde_1043_fu_1650.read();
        ref_patch_with_borde_638 = ref_patch_with_borde_1044_fu_1646.read();
        ref_patch_with_borde_639 = ref_patch_with_borde_1045_fu_1642.read();
        ref_patch_with_borde_64 = ref_patch_with_borde_1140_fu_1262.read();
        ref_patch_with_borde_640 = ref_patch_with_borde_1046_fu_1638.read();
        ref_patch_with_borde_641 = ref_patch_with_borde_1047_fu_1634.read();
        ref_patch_with_borde_642 = ref_patch_with_borde_1048_fu_1630.read();
        ref_patch_with_borde_643 = ref_patch_with_borde_1049_fu_1626.read();
        ref_patch_with_borde_644 = ref_patch_with_borde_1005_fu_1802.read();
        ref_patch_with_borde_645 = ref_patch_with_borde_1050_fu_1622.read();
        ref_patch_with_borde_646 = ref_patch_with_borde_1051_fu_1618.read();
        ref_patch_with_borde_647 = ref_patch_with_borde_1052_fu_1614.read();
        ref_patch_with_borde_648 = ref_patch_with_borde_1053_fu_1610.read();
        ref_patch_with_borde_649 = ref_patch_with_borde_1054_fu_1606.read();
        ref_patch_with_borde_65 = ref_patch_with_borde_1104_fu_1406.read();
        ref_patch_with_borde_650 = ref_patch_with_borde_1055_fu_1602.read();
        ref_patch_with_borde_651 = ref_patch_with_borde_1056_fu_1598.read();
        ref_patch_with_borde_652 = ref_patch_with_borde_1057_fu_1594.read();
        ref_patch_with_borde_653 = ref_patch_with_borde_1058_fu_1590.read();
        ref_patch_with_borde_654 = ref_patch_with_borde_1059_fu_1586.read();
        ref_patch_with_borde_655 = ref_patch_with_borde_1006_fu_1798.read();
        ref_patch_with_borde_656 = ref_patch_with_borde_1060_fu_1582.read();
        ref_patch_with_borde_657 = ref_patch_with_borde_1061_fu_1578.read();
        ref_patch_with_borde_658 = ref_patch_with_borde_1062_fu_1574.read();
        ref_patch_with_borde_659 = ref_patch_with_borde_1063_fu_1570.read();
        ref_patch_with_borde_66 = ref_patch_with_borde_1139_fu_1266.read();
        ref_patch_with_borde_660 = ref_patch_with_borde_1064_fu_1566.read();
        ref_patch_with_borde_661 = ref_patch_with_borde_1065_fu_1562.read();
        ref_patch_with_borde_662 = ref_patch_with_borde_1066_fu_1558.read();
        ref_patch_with_borde_663 = ref_patch_with_borde_1067_fu_1554.read();
        ref_patch_with_borde_664 = ref_patch_with_borde_1068_fu_1550.read();
        ref_patch_with_borde_665 = ref_patch_with_borde_1069_fu_1546.read();
        ref_patch_with_borde_666 = ref_patch_with_borde_1007_fu_1794.read();
        ref_patch_with_borde_667 = ref_patch_with_borde_1070_fu_1542.read();
        ref_patch_with_borde_668 = ref_patch_with_borde_1071_fu_1538.read();
        ref_patch_with_borde_669 = ref_patch_with_borde_1072_fu_1534.read();
        ref_patch_with_borde_67 = ref_patch_with_borde_1138_fu_1270.read();
        ref_patch_with_borde_670 = ref_patch_with_borde_1073_fu_1530.read();
        ref_patch_with_borde_671 = ref_patch_with_borde_1074_fu_1526.read();
        ref_patch_with_borde_672 = ref_patch_with_borde_1075_fu_1522.read();
        ref_patch_with_borde_673 = ref_patch_with_borde_1076_fu_1518.read();
        ref_patch_with_borde_674 = ref_patch_with_borde_1077_fu_1514.read();
        ref_patch_with_borde_675 = ref_patch_with_borde_1078_fu_1510.read();
        ref_patch_with_borde_676 = ref_patch_with_borde_1079_fu_1506.read();
        ref_patch_with_borde_677 = ref_patch_with_borde_1008_fu_1790.read();
        ref_patch_with_borde_678 = ref_patch_with_borde_1080_fu_1502.read();
        ref_patch_with_borde_679 = ref_patch_with_borde_1081_fu_1498.read();
        ref_patch_with_borde_68 = ref_patch_with_borde_1137_fu_1274.read();
        ref_patch_with_borde_680 = ref_patch_with_borde_1082_fu_1494.read();
        ref_patch_with_borde_681 = ref_patch_with_borde_1083_fu_1490.read();
        ref_patch_with_borde_682 = ref_patch_with_borde_1084_fu_1486.read();
        ref_patch_with_borde_683 = ref_patch_with_borde_1085_fu_1482.read();
        ref_patch_with_borde_684 = ref_patch_with_borde_1086_fu_1478.read();
        ref_patch_with_borde_685 = ref_patch_with_borde_1087_fu_1474.read();
        ref_patch_with_borde_686 = ref_patch_with_borde_1088_fu_1470.read();
        ref_patch_with_borde_687 = ref_patch_with_borde_1089_fu_1466.read();
        ref_patch_with_borde_688 = ref_patch_with_borde_1009_fu_1786.read();
        ref_patch_with_borde_689 = ref_patch_with_borde_1090_fu_1462.read();
        ref_patch_with_borde_69 = ref_patch_with_borde_1136_fu_1278.read();
        ref_patch_with_borde_690 = ref_patch_with_borde_1091_fu_1458.read();
        ref_patch_with_borde_691 = ref_patch_with_borde_1092_fu_1454.read();
        ref_patch_with_borde_692 = ref_patch_with_borde_1093_fu_1450.read();
        ref_patch_with_borde_693 = ref_patch_with_borde_1094_fu_1446.read();
        ref_patch_with_borde_694 = ref_patch_with_borde_1095_fu_1442.read();
        ref_patch_with_borde_695 = ref_patch_with_borde_1096_fu_1438.read();
        ref_patch_with_borde_696 = ref_patch_with_borde_1097_fu_1434.read();
        ref_patch_with_borde_697 = ref_patch_with_borde_1098_fu_1430.read();
        ref_patch_with_borde_698 = ref_patch_with_borde_1099_fu_1426.read();
        ref_patch_with_borde_7 = ref_patch_with_borde_1192_fu_1054.read();
        ref_patch_with_borde_70 = ref_patch_with_borde_1135_fu_1282.read();
        ref_patch_with_borde_71 = ref_patch_with_borde_1134_fu_1286.read();
        ref_patch_with_borde_72 = ref_patch_with_borde_1133_fu_1290.read();
        ref_patch_with_borde_73 = ref_patch_with_borde_1132_fu_1294.read();
        ref_patch_with_borde_74 = ref_patch_with_borde_1131_fu_1298.read();
        ref_patch_with_borde_75 = ref_patch_with_borde_1130_fu_1302.read();
        ref_patch_with_borde_76 = ref_patch_with_borde_1103_fu_1410.read();
        ref_patch_with_borde_77 = ref_patch_with_borde_1129_fu_1306.read();
        ref_patch_with_borde_78 = ref_patch_with_borde_1128_fu_1310.read();
        ref_patch_with_borde_79 = ref_patch_with_borde_1127_fu_1314.read();
        ref_patch_with_borde_8 = ref_patch_with_borde_1191_fu_1058.read();
        ref_patch_with_borde_80 = ref_patch_with_borde_1126_fu_1318.read();
        ref_patch_with_borde_81 = ref_patch_with_borde_1125_fu_1322.read();
        ref_patch_with_borde_82 = ref_patch_with_borde_1124_fu_1326.read();
        ref_patch_with_borde_83 = ref_patch_with_borde_1123_fu_1330.read();
        ref_patch_with_borde_84 = ref_patch_with_borde_1122_fu_1334.read();
        ref_patch_with_borde_85 = ref_patch_with_borde_1121_fu_1338.read();
        ref_patch_with_borde_86 = ref_patch_with_borde_1120_fu_1342.read();
        ref_patch_with_borde_87 = ref_patch_with_borde_1102_fu_1414.read();
        ref_patch_with_borde_88 = ref_patch_with_borde_1119_fu_1346.read();
        ref_patch_with_borde_89 = ref_patch_with_borde_1118_fu_1350.read();
        ref_patch_with_borde_9 = ref_patch_with_borde_1190_fu_1062.read();
        ref_patch_with_borde_90 = ref_patch_with_borde_1117_fu_1354.read();
        ref_patch_with_borde_91 = ref_patch_with_borde_1116_fu_1358.read();
        ref_patch_with_borde_92 = ref_patch_with_borde_1115_fu_1362.read();
        ref_patch_with_borde_93 = ref_patch_with_borde_1114_fu_1366.read();
        ref_patch_with_borde_94 = ref_patch_with_borde_1113_fu_1370.read();
        ref_patch_with_borde_95 = ref_patch_with_borde_1112_fu_1374.read();
        ref_patch_with_borde_96 = ref_patch_with_borde_1111_fu_1378.read();
        ref_patch_with_borde_97 = ref_patch_with_borde_1110_fu_1382.read();
        ref_patch_with_borde_98 = ref_patch_with_borde_1101_fu_1418.read();
        ref_patch_with_borde_99 = ref_patch_with_borde_1100_fu_1422.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_debug_AWREADY.read(), ap_const_logic_1))) {
        ref_patch_with_borde_399 = ref_patch_with_borde_800_fu_2622.read();
        ref_patch_with_borde_400 = ref_patch_with_borde_801_fu_2618.read();
        ref_patch_with_borde_401 = ref_patch_with_borde_810_fu_2582.read();
        ref_patch_with_borde_402 = ref_patch_with_borde_811_fu_2578.read();
        ref_patch_with_borde_403 = ref_patch_with_borde_812_fu_2574.read();
        ref_patch_with_borde_404 = ref_patch_with_borde_813_fu_2570.read();
        ref_patch_with_borde_405 = ref_patch_with_borde_814_fu_2566.read();
        ref_patch_with_borde_406 = ref_patch_with_borde_815_fu_2562.read();
        ref_patch_with_borde_407 = ref_patch_with_borde_816_fu_2558.read();
        ref_patch_with_borde_408 = ref_patch_with_borde_817_fu_2554.read();
        ref_patch_with_borde_409 = ref_patch_with_borde_818_fu_2550.read();
        ref_patch_with_borde_410 = ref_patch_with_borde_819_fu_2546.read();
        ref_patch_with_borde_411 = ref_patch_with_borde_802_fu_2614.read();
        ref_patch_with_borde_412 = ref_patch_with_borde_820_fu_2542.read();
        ref_patch_with_borde_413 = ref_patch_with_borde_821_fu_2538.read();
        ref_patch_with_borde_414 = ref_patch_with_borde_822_fu_2534.read();
        ref_patch_with_borde_415 = ref_patch_with_borde_823_fu_2530.read();
        ref_patch_with_borde_416 = ref_patch_with_borde_824_fu_2526.read();
        ref_patch_with_borde_417 = ref_patch_with_borde_825_fu_2522.read();
        ref_patch_with_borde_418 = ref_patch_with_borde_826_fu_2518.read();
        ref_patch_with_borde_419 = ref_patch_with_borde_827_fu_2514.read();
        ref_patch_with_borde_420 = ref_patch_with_borde_828_fu_2510.read();
        ref_patch_with_borde_421 = ref_patch_with_borde_829_fu_2506.read();
        ref_patch_with_borde_422 = ref_patch_with_borde_803_fu_2610.read();
        ref_patch_with_borde_423 = ref_patch_with_borde_830_fu_2502.read();
        ref_patch_with_borde_424 = ref_patch_with_borde_831_fu_2498.read();
        ref_patch_with_borde_425 = ref_patch_with_borde_832_fu_2494.read();
        ref_patch_with_borde_426 = ref_patch_with_borde_833_fu_2490.read();
        ref_patch_with_borde_427 = ref_patch_with_borde_834_fu_2486.read();
        ref_patch_with_borde_428 = ref_patch_with_borde_835_fu_2482.read();
        ref_patch_with_borde_429 = ref_patch_with_borde_836_fu_2478.read();
        ref_patch_with_borde_430 = ref_patch_with_borde_837_fu_2474.read();
        ref_patch_with_borde_431 = ref_patch_with_borde_838_fu_2470.read();
        ref_patch_with_borde_432 = ref_patch_with_borde_839_fu_2466.read();
        ref_patch_with_borde_433 = ref_patch_with_borde_804_fu_2606.read();
        ref_patch_with_borde_434 = ref_patch_with_borde_840_fu_2462.read();
        ref_patch_with_borde_435 = ref_patch_with_borde_841_fu_2458.read();
        ref_patch_with_borde_436 = ref_patch_with_borde_842_fu_2454.read();
        ref_patch_with_borde_437 = ref_patch_with_borde_843_fu_2450.read();
        ref_patch_with_borde_438 = ref_patch_with_borde_844_fu_2446.read();
        ref_patch_with_borde_439 = ref_patch_with_borde_845_fu_2442.read();
        ref_patch_with_borde_440 = ref_patch_with_borde_846_fu_2438.read();
        ref_patch_with_borde_441 = ref_patch_with_borde_847_fu_2434.read();
        ref_patch_with_borde_442 = ref_patch_with_borde_848_fu_2430.read();
        ref_patch_with_borde_443 = ref_patch_with_borde_849_fu_2426.read();
        ref_patch_with_borde_444 = ref_patch_with_borde_805_fu_2602.read();
        ref_patch_with_borde_445 = ref_patch_with_borde_850_fu_2422.read();
        ref_patch_with_borde_446 = ref_patch_with_borde_851_fu_2418.read();
        ref_patch_with_borde_447 = ref_patch_with_borde_852_fu_2414.read();
        ref_patch_with_borde_448 = ref_patch_with_borde_853_fu_2410.read();
        ref_patch_with_borde_449 = ref_patch_with_borde_854_fu_2406.read();
        ref_patch_with_borde_450 = ref_patch_with_borde_855_fu_2402.read();
        ref_patch_with_borde_451 = ref_patch_with_borde_856_fu_2398.read();
        ref_patch_with_borde_452 = ref_patch_with_borde_857_fu_2394.read();
        ref_patch_with_borde_453 = ref_patch_with_borde_858_fu_2390.read();
        ref_patch_with_borde_454 = ref_patch_with_borde_859_fu_2386.read();
        ref_patch_with_borde_455 = ref_patch_with_borde_806_fu_2598.read();
        ref_patch_with_borde_456 = ref_patch_with_borde_860_fu_2382.read();
        ref_patch_with_borde_457 = ref_patch_with_borde_861_fu_2378.read();
        ref_patch_with_borde_458 = ref_patch_with_borde_862_fu_2374.read();
        ref_patch_with_borde_459 = ref_patch_with_borde_863_fu_2370.read();
        ref_patch_with_borde_460 = ref_patch_with_borde_864_fu_2366.read();
        ref_patch_with_borde_461 = ref_patch_with_borde_865_fu_2362.read();
        ref_patch_with_borde_462 = ref_patch_with_borde_866_fu_2358.read();
        ref_patch_with_borde_463 = ref_patch_with_borde_867_fu_2354.read();
        ref_patch_with_borde_464 = ref_patch_with_borde_868_fu_2350.read();
        ref_patch_with_borde_465 = ref_patch_with_borde_869_fu_2346.read();
        ref_patch_with_borde_466 = ref_patch_with_borde_807_fu_2594.read();
        ref_patch_with_borde_467 = ref_patch_with_borde_870_fu_2342.read();
        ref_patch_with_borde_468 = ref_patch_with_borde_871_fu_2338.read();
        ref_patch_with_borde_469 = ref_patch_with_borde_872_fu_2334.read();
        ref_patch_with_borde_470 = ref_patch_with_borde_873_fu_2330.read();
        ref_patch_with_borde_471 = ref_patch_with_borde_874_fu_2326.read();
        ref_patch_with_borde_472 = ref_patch_with_borde_875_fu_2322.read();
        ref_patch_with_borde_473 = ref_patch_with_borde_876_fu_2318.read();
        ref_patch_with_borde_474 = ref_patch_with_borde_877_fu_2314.read();
        ref_patch_with_borde_475 = ref_patch_with_borde_878_fu_2310.read();
        ref_patch_with_borde_476 = ref_patch_with_borde_879_fu_2306.read();
        ref_patch_with_borde_477 = ref_patch_with_borde_808_fu_2590.read();
        ref_patch_with_borde_478 = ref_patch_with_borde_880_fu_2302.read();
        ref_patch_with_borde_479 = ref_patch_with_borde_881_fu_2298.read();
        ref_patch_with_borde_480 = ref_patch_with_borde_882_fu_2294.read();
        ref_patch_with_borde_481 = ref_patch_with_borde_883_fu_2290.read();
        ref_patch_with_borde_482 = ref_patch_with_borde_884_fu_2286.read();
        ref_patch_with_borde_483 = ref_patch_with_borde_885_fu_2282.read();
        ref_patch_with_borde_484 = ref_patch_with_borde_886_fu_2278.read();
        ref_patch_with_borde_485 = ref_patch_with_borde_887_fu_2274.read();
        ref_patch_with_borde_486 = ref_patch_with_borde_888_fu_2270.read();
        ref_patch_with_borde_487 = ref_patch_with_borde_889_fu_2266.read();
        ref_patch_with_borde_488 = ref_patch_with_borde_809_fu_2586.read();
        ref_patch_with_borde_489 = ref_patch_with_borde_890_fu_2262.read();
        ref_patch_with_borde_490 = ref_patch_with_borde_891_fu_2258.read();
        ref_patch_with_borde_491 = ref_patch_with_borde_892_fu_2254.read();
        ref_patch_with_borde_492 = ref_patch_with_borde_893_fu_2250.read();
        ref_patch_with_borde_493 = ref_patch_with_borde_894_fu_2246.read();
        ref_patch_with_borde_494 = ref_patch_with_borde_895_fu_2242.read();
        ref_patch_with_borde_495 = ref_patch_with_borde_896_fu_2238.read();
        ref_patch_with_borde_496 = ref_patch_with_borde_897_fu_2234.read();
        ref_patch_with_borde_497 = ref_patch_with_borde_898_fu_2230.read();
        ref_patch_with_borde_498 = ref_patch_with_borde_899_fu_2226.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
  esl_seteq<1,1,1>(grp_compute_inverse_hess_fu_3381_ap_done.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state35_on_subcall_done.read())))) {
        reg_5623 = grp_compute_inverse_hess_fu_3381_ap_return_9.read();
        reg_5628 = grp_compute_inverse_hess_fu_3381_ap_return_10.read();
        reg_5633 = grp_compute_inverse_hess_fu_3381_ap_return_11.read();
        reg_5638 = grp_compute_inverse_hess_fu_3381_ap_return_12.read();
        reg_5643 = grp_compute_inverse_hess_fu_3381_ap_return_13.read();
        reg_5648 = grp_compute_inverse_hess_fu_3381_ap_return_14.read();
        reg_5653 = grp_compute_inverse_hess_fu_3381_ap_return_15.read();
        reg_5658 = grp_compute_inverse_hess_fu_3381_ap_return_16.read();
        reg_5663 = grp_compute_inverse_hess_fu_3381_ap_return_17.read();
        reg_5668 = grp_compute_inverse_hess_fu_3381_ap_return_18.read();
        reg_5673 = grp_compute_inverse_hess_fu_3381_ap_return_19.read();
        reg_5678 = grp_compute_inverse_hess_fu_3381_ap_return_20.read();
        reg_5683 = grp_compute_inverse_hess_fu_3381_ap_return_21.read();
        reg_5688 = grp_compute_inverse_hess_fu_3381_ap_return_22.read();
        reg_5693 = grp_compute_inverse_hess_fu_3381_ap_return_23.read();
        reg_5698 = grp_compute_inverse_hess_fu_3381_ap_return_24.read();
        reg_5703 = grp_compute_inverse_hess_fu_3381_ap_return_25.read();
        reg_5708 = grp_compute_inverse_hess_fu_3381_ap_return_26.read();
        reg_5713 = grp_compute_inverse_hess_fu_3381_ap_return_27.read();
        reg_5718 = grp_compute_inverse_hess_fu_3381_ap_return_28.read();
        reg_5723 = grp_compute_inverse_hess_fu_3381_ap_return_29.read();
        reg_5728 = grp_compute_inverse_hess_fu_3381_ap_return_30.read();
        reg_5733 = grp_compute_inverse_hess_fu_3381_ap_return_31.read();
        reg_5738 = grp_compute_inverse_hess_fu_3381_ap_return_32.read();
        reg_5743 = grp_compute_inverse_hess_fu_3381_ap_return_33.read();
        reg_5748 = grp_compute_inverse_hess_fu_3381_ap_return_34.read();
        reg_5753 = grp_compute_inverse_hess_fu_3381_ap_return_35.read();
        reg_5758 = grp_compute_inverse_hess_fu_3381_ap_return_36.read();
        reg_5763 = grp_compute_inverse_hess_fu_3381_ap_return_37.read();
        reg_5768 = grp_compute_inverse_hess_fu_3381_ap_return_38.read();
        reg_5773 = grp_compute_inverse_hess_fu_3381_ap_return_39.read();
        reg_5778 = grp_compute_inverse_hess_fu_3381_ap_return_40.read();
        reg_5783 = grp_compute_inverse_hess_fu_3381_ap_return_41.read();
        reg_5788 = grp_compute_inverse_hess_fu_3381_ap_return_42.read();
        reg_5793 = grp_compute_inverse_hess_fu_3381_ap_return_43.read();
        reg_5798 = grp_compute_inverse_hess_fu_3381_ap_return_44.read();
        reg_5803 = grp_compute_inverse_hess_fu_3381_ap_return_45.read();
        reg_5808 = grp_compute_inverse_hess_fu_3381_ap_return_46.read();
        reg_5813 = grp_compute_inverse_hess_fu_3381_ap_return_47.read();
        reg_5818 = grp_compute_inverse_hess_fu_3381_ap_return_48.read();
        reg_5823 = grp_compute_inverse_hess_fu_3381_ap_return_49.read();
        reg_5828 = grp_compute_inverse_hess_fu_3381_ap_return_50.read();
        reg_5833 = grp_compute_inverse_hess_fu_3381_ap_return_51.read();
        reg_5838 = grp_compute_inverse_hess_fu_3381_ap_return_52.read();
        reg_5843 = grp_compute_inverse_hess_fu_3381_ap_return_53.read();
        reg_5848 = grp_compute_inverse_hess_fu_3381_ap_return_54.read();
        reg_5853 = grp_compute_inverse_hess_fu_3381_ap_return_55.read();
        reg_5858 = grp_compute_inverse_hess_fu_3381_ap_return_56.read();
        reg_5863 = grp_compute_inverse_hess_fu_3381_ap_return_57.read();
        reg_5868 = grp_compute_inverse_hess_fu_3381_ap_return_58.read();
        reg_5873 = grp_compute_inverse_hess_fu_3381_ap_return_59.read();
        reg_5878 = grp_compute_inverse_hess_fu_3381_ap_return_60.read();
        reg_5883 = grp_compute_inverse_hess_fu_3381_ap_return_61.read();
        reg_5888 = grp_compute_inverse_hess_fu_3381_ap_return_62.read();
        reg_5893 = grp_compute_inverse_hess_fu_3381_ap_return_63.read();
        reg_5898 = grp_compute_inverse_hess_fu_3381_ap_return_64.read();
        reg_5903 = grp_compute_inverse_hess_fu_3381_ap_return_65.read();
        reg_5908 = grp_compute_inverse_hess_fu_3381_ap_return_66.read();
        reg_5913 = grp_compute_inverse_hess_fu_3381_ap_return_67.read();
        reg_5918 = grp_compute_inverse_hess_fu_3381_ap_return_68.read();
        reg_5923 = grp_compute_inverse_hess_fu_3381_ap_return_69.read();
        reg_5928 = grp_compute_inverse_hess_fu_3381_ap_return_70.read();
        reg_5933 = grp_compute_inverse_hess_fu_3381_ap_return_71.read();
        reg_5938 = grp_compute_inverse_hess_fu_3381_ap_return_72.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_fu_118676_p2.read()))) {
        tmp_125_reg_125907 = tmp_125_fu_118688_p38.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_fu_118730_p2.read()))) {
        tmp_127_reg_125921 = tmp_127_fu_118750_p10.read();
    }
}

void batch_align2D::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, transfer_pyr_read_read_fu_2632_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(transfer_pyr_read_read_fu_2632_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_pyr_ARREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 256 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond4_fu_5995_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond4_fu_5995_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_patches_ARREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 65536 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond2_fu_9612_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond2_fu_9612_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 131072 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_ARREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state23;
            } else {
                ap_NS_fsm = ap_ST_fsm_state22;
            }
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            break;
        case 16777216 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond3_fu_115552_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond3_fu_115552_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state32;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            }
            break;
        case 33554432 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_debug_AWREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state32;
            }
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(grp_compute_inverse_hess_fu_3381_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state34;
            } else {
                ap_NS_fsm = ap_ST_fsm_state33;
            }
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 268435456 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state35_on_subcall_done.read()))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 1073741824 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state37;
            }
            break;
        case 2147483648 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond5_fu_118676_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond5_fu_118676_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state40;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            }
            break;
        case 4294967296 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state41;
            } else {
                ap_NS_fsm = ap_ST_fsm_state40;
            }
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state42;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state43;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state44;
            break;
        case 68719476736 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state44;
            }
            break;
        case 137438953472 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond6_fu_118730_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond6_fu_118730_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state47;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp4_stage0;
            }
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state48;
            break;
        case 549755813888 : 
            ap_NS_fsm = ap_ST_fsm_state49;
            break;
        case 1099511627776 : 
            ap_NS_fsm = ap_ST_fsm_state50;
            break;
        case 2199023255552 : 
            ap_NS_fsm = ap_ST_fsm_state51;
            break;
        case 4398046511104 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state51;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<43>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

