#include "batch_align2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D::thread_UnifiedRetVal_i_fu_19679_p3() {
    UnifiedRetVal_i_fu_19679_p3 = (!sel_tmp12_i_fu_19673_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i_fu_19673_p2.read()[0].to_bool())? cur_px_estimate_3_0.read(): sel_tmp11_i_fu_19665_p3.read());
}

void batch_align2D::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[8];
}

void batch_align2D::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[16];
}

void batch_align2D::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[24];
}

void batch_align2D::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[42];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[48];
}

void batch_align2D::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void batch_align2D::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void batch_align2D::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void batch_align2D::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void batch_align2D::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[17];
}

void batch_align2D::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[23];
}

void batch_align2D::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[25];
}

void batch_align2D::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[26];
}

void batch_align2D::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[27];
}

void batch_align2D::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[28];
}

void batch_align2D::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[29];
}

void batch_align2D::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[31];
}

void batch_align2D::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[32];
}

void batch_align2D::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[35];
}

void batch_align2D::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[36];
}

void batch_align2D::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[41];
}

void batch_align2D::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[43];
}

void batch_align2D::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[47];
}

void batch_align2D::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[53];
}

void batch_align2D::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void batch_align2D::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_25335.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_25335.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pos_r_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pos_r_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage0_01001() {
    ap_block_pp3_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state49_io.read()));
}

void batch_align2D::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state49_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_01001() {
    ap_block_pp4_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state56_io.read()));
}

void batch_align2D::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state19_pp1_stage0_iter0() {
    ap_block_state19_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state20_pp1_stage0_iter1() {
    ap_block_state20_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_25335.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_state21_pp1_stage0_iter2() {
    ap_block_state21_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state29_pp2_stage0_iter0() {
    ap_block_state29_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state30_pp2_stage0_iter1() {
    ap_block_state30_pp2_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, pos_r_RVALID.read());
}

void batch_align2D::thread_ap_block_state32_on_subcall_done() {
    ap_block_state32_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_4660_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_4764_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_4868_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_4972_ap_done.read()));
}

void batch_align2D::thread_ap_block_state33_io() {
    ap_block_state33_io = (esl_seteq<1,1,1>(exitcond_fu_19426_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_AWREADY.read()));
}

void batch_align2D::thread_ap_block_state48_pp3_stage0_iter0() {
    ap_block_state48_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state49_io() {
    ap_block_state49_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28417.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_WREADY.read()));
}

void batch_align2D::thread_ap_block_state49_pp3_stage0_iter1() {
    ap_block_state49_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state55_pp4_stage0_iter0() {
    ap_block_state55_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state56_io() {
    ap_block_state56_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_28431.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_WREADY.read()));
}

void batch_align2D::thread_ap_block_state56_pp4_stage0_iter1() {
    ap_block_state56_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_condition_2946() {
    ap_condition_2946 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_28431.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_01001.read(), ap_const_boolean_0));
}

void batch_align2D::thread_ap_condition_8779() {
    ap_condition_8779 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28417.read()));
}

void batch_align2D::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_5139_p2.read())) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp1_exit_iter0_state19() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_10756_p2.read())) {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp2_exit_iter0_state29() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_14008_p2.read())) {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp3_exit_iter0_state48() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_19487_p2.read())) {
        ap_condition_pp3_exit_iter0_state48 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state48 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp4_exit_iter0_state55() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_19541_p2.read())) {
        ap_condition_pp4_exit_iter0_state55 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state55 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
         esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_phi_mux_indvar_phi_fu_4575_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_phi_fu_4575_p4 = indvar_next_reg_19725.read();
    } else {
        ap_phi_mux_indvar_phi_fu_4575_p4 = indvar_reg_4571.read();
    }
}

void batch_align2D::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
         esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void batch_align2D::thread_ap_sig_ioackin_debug_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_AWREADY.read())) {
        ap_sig_ioackin_debug_AWREADY = debug_AWREADY.read();
    } else {
        ap_sig_ioackin_debug_AWREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_debug_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_WREADY.read())) {
        ap_sig_ioackin_debug_WREADY = debug_WREADY.read();
    } else {
        ap_sig_ioackin_debug_WREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_patches_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_patches_ARREADY.read())) {
        ap_sig_ioackin_patches_ARREADY = patches_ARREADY.read();
    } else {
        ap_sig_ioackin_patches_ARREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_pos_r_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_ARREADY.read())) {
        ap_sig_ioackin_pos_r_ARREADY = pos_r_ARREADY.read();
    } else {
        ap_sig_ioackin_pos_r_ARREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_pos_r_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) {
        ap_sig_ioackin_pos_r_AWREADY = pos_r_AWREADY.read();
    } else {
        ap_sig_ioackin_pos_r_AWREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_pos_r_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) {
        ap_sig_ioackin_pos_r_WREADY = pos_r_WREADY.read();
    } else {
        ap_sig_ioackin_pos_r_WREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_ap_sig_ioackin_pyr_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pyr_ARREADY.read())) {
        ap_sig_ioackin_pyr_ARREADY = pyr_ARREADY.read();
    } else {
        ap_sig_ioackin_pyr_ARREADY = ap_const_logic_1;
    }
}

void batch_align2D::thread_converged_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
         esl_seteq<1,1,1>(ap_block_state32_on_subcall_done.read(), ap_const_boolean_0))) {
        converged_ap_vld = ap_const_logic_1;
    } else {
        converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D::thread_cur_px_estimate_ptr5_fu_5103_p4() {
    cur_px_estimate_ptr5_fu_5103_p4 = cur_px_estimate_ptr.read().range(63, 2);
}

void batch_align2D::thread_cur_px_estimate_ptr6_1_fu_19459_p2() {
    cur_px_estimate_ptr6_1_fu_19459_p2 = (!tmp_867_cast_reg_19697.read().is_01() || !tmp_870_cast_fu_19455_p1.read().is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_867_cast_reg_19697.read()) + sc_biguint<63>(tmp_870_cast_fu_19455_p1.read()));
}

void batch_align2D::thread_cur_px_estimate_ptr6_fu_19464_p1() {
    cur_px_estimate_ptr6_fu_19464_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_1_fu_19459_p2.read());
}

void batch_align2D::thread_debug_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_19426_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_AWREADY.read()))) {
        debug_AWVALID = ap_const_logic_1;
    } else {
        debug_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
        debug_BREADY = ap_const_logic_1;
    } else {
        debug_BREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28417.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_WREADY.read()))) {
        debug_WVALID = ap_const_logic_1;
    } else {
        debug_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_19426_p2.read(), ap_const_lv1_1))) {
        debug_blk_n_AW = m_axi_debug_AWREADY.read();
    } else {
        debug_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        debug_blk_n_B = m_axi_debug_BVALID.read();
    } else {
        debug_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28417.read()))) {
        debug_blk_n_W = m_axi_debug_WREADY.read();
    } else {
        debug_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D::thread_exitcond2_fu_10756_p2() {
    exitcond2_fu_10756_p2 = (!indvar1_reg_4583.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_4583.read() == ap_const_lv9_190);
}

void batch_align2D::thread_exitcond3_fu_14008_p2() {
    exitcond3_fu_14008_p2 = (!indvar3_reg_4616.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_4616.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond4_fu_5139_p2() {
    exitcond4_fu_5139_p2 = (!ap_phi_mux_indvar_phi_fu_4575_p4.read().is_01() || !ap_const_lv19_73AA0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_4575_p4.read() == ap_const_lv19_73AA0);
}

void batch_align2D::thread_exitcond5_fu_19487_p2() {
    exitcond5_fu_19487_p2 = (!indvar6_reg_4638.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_reg_4638.read() == ap_const_lv6_24);
}

void batch_align2D::thread_exitcond6_fu_19541_p2() {
    exitcond6_fu_19541_p2 = (!indvar8_reg_4649.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_reg_4649.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond_fu_19426_p2() {
    exitcond_fu_19426_p2 = (!k_1_reg_4627.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k_1_reg_4627.read() == ap_const_lv3_4);
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_4660_ap_start() {
    grp_compute_inverse_hess_fu_4660_ap_start = grp_compute_inverse_hess_fu_4660_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_4764_ap_start() {
    grp_compute_inverse_hess_fu_4764_ap_start = grp_compute_inverse_hess_fu_4764_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_4868_ap_start() {
    grp_compute_inverse_hess_fu_4868_ap_start = grp_compute_inverse_hess_fu_4868_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_4972_ap_start() {
    grp_compute_inverse_hess_fu_4972_ap_start = grp_compute_inverse_hess_fu_4972_ap_start_reg.read();
}

void batch_align2D::thread_grp_fu_5080_p0() {
    grp_fu_5080_p0 = esl_zext<32,8>(pyr_data_load_reg_28397.read());
}

void batch_align2D::thread_idx_urem_fu_10800_p3() {
    idx_urem_fu_10800_p3 = (!tmp_469_fu_10794_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_469_fu_10794_p2.read()[0].to_bool())? next_urem_fu_10788_p2.read(): ap_const_lv9_0);
}

void batch_align2D::thread_indvar5_fu_5151_p1() {
    indvar5_fu_5151_p1 = esl_zext<64,19>(indvar_reg_4571_pp0_iter1_reg.read());
}

void batch_align2D::thread_indvar_next1_fu_10762_p2() {
    indvar_next1_fu_10762_p2 = (!indvar1_reg_4583.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar1_reg_4583.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void batch_align2D::thread_indvar_next2_fu_14014_p2() {
    indvar_next2_fu_14014_p2 = (!indvar3_reg_4616.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar3_reg_4616.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next3_fu_19493_p2() {
    indvar_next3_fu_19493_p2 = (!indvar6_reg_4638.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar6_reg_4638.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D::thread_indvar_next4_fu_19547_p2() {
    indvar_next4_fu_19547_p2 = (!indvar8_reg_4649.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar8_reg_4649.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next_fu_5145_p2() {
    indvar_next_fu_5145_p2 = (!ap_phi_mux_indvar_phi_fu_4575_p4.read().is_01() || !ap_const_lv19_1.is_01())? sc_lv<19>(): (sc_biguint<19>(ap_phi_mux_indvar_phi_fu_4575_p4.read()) + sc_biguint<19>(ap_const_lv19_1));
}

void batch_align2D::thread_inv_out7_fu_5083_p4() {
    inv_out7_fu_5083_p4 = inv_out.read().range(63, 2);
}

void batch_align2D::thread_k_fu_19432_p2() {
    k_fu_19432_p2 = (!k_1_reg_4627.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_1_reg_4627.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D::thread_next_mul_fu_10768_p2() {
    next_mul_fu_10768_p2 = (!ap_const_lv19_290.is_01() || !phi_mul_reg_4594.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_290) + sc_biguint<19>(phi_mul_reg_4594.read()));
}

void batch_align2D::thread_next_urem_fu_10788_p2() {
    next_urem_fu_10788_p2 = (!phi_urem_reg_4605.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_urem_reg_4605.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void batch_align2D::thread_patches_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_patches_ARREADY.read()))) {
        patches_ARVALID = ap_const_logic_1;
    } else {
        patches_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_patches_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_25335.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        patches_RREADY = ap_const_logic_1;
    } else {
        patches_RREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_patches_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        patches_blk_n_AR = m_axi_patches_ARREADY.read();
    } else {
        patches_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D::thread_patches_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_25335.read()))) {
        patches_blk_n_R = m_axi_patches_RVALID.read();
    } else {
        patches_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_ARREADY.read()))) {
        pos_r_ARVALID = ap_const_logic_1;
    } else {
        pos_r_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_AWADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
            pos_r_AWADDR = pos_addr_1_reg_28386.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
            pos_r_AWADDR = pos_addr_reg_19702.read();
        } else {
            pos_r_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        pos_r_AWADDR = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_pos_r_AWLEN() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
            pos_r_AWLEN = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
            pos_r_AWLEN = ap_const_lv32_8;
        } else {
            pos_r_AWLEN =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        pos_r_AWLEN =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWVALID = ap_const_logic_1;
    } else {
        pos_r_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)))) {
        pos_r_BREADY = ap_const_logic_1;
    } else {
        pos_r_BREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        pos_r_RREADY = ap_const_logic_1;
    } else {
        pos_r_RREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_WDATA() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) {
        if (esl_seteq<1,1,1>(ap_condition_2946.read(), ap_const_boolean_1)) {
            pos_r_WDATA = UnifiedRetVal_i_reg_28440.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
            pos_r_WDATA = tmp_79_reg_28412.read();
        } else {
            pos_r_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        pos_r_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_28431.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_01001.read(), ap_const_boolean_0)))) {
        pos_r_WVALID = ap_const_logic_1;
    } else {
        pos_r_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        pos_r_blk_n_AR = m_axi_pos_r_ARREADY.read();
    } else {
        pos_r_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        pos_r_blk_n_AW = m_axi_pos_r_AWREADY.read();
    } else {
        pos_r_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        pos_r_blk_n_B = m_axi_pos_r_BVALID.read();
    } else {
        pos_r_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        pos_r_blk_n_R = m_axi_pos_r_RVALID.read();
    } else {
        pos_r_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_W() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_28431.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()))) {
        pos_r_blk_n_W = m_axi_pos_r_WREADY.read();
    } else {
        pos_r_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pyr_ARREADY.read()))) {
        pyr_ARVALID = ap_const_logic_1;
    } else {
        pyr_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pyr_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        pyr_RREADY = ap_const_logic_1;
    } else {
        pyr_RREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_pyr_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        pyr_blk_n_AR = m_axi_pyr_ARREADY.read();
    } else {
        pyr_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond4_reg_19721.read(), ap_const_lv1_0))) {
        pyr_blk_n_R = m_axi_pyr_RVALID.read();
    } else {
        pyr_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_data_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        pyr_data_address0 =  (sc_lv<19>) (tmp_s_fu_19438_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_data_address0 =  (sc_lv<19>) (indvar5_fu_5151_p1.read());
    } else {
        pyr_data_address0 =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pyr_data_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
          esl_seteq<1,1,1>(ap_block_state33_io.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_data_ce0 = ap_const_logic_1;
    } else {
        pyr_data_ce0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_pyr_data_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_19721_pp0_iter1_reg.read()))) {
        pyr_data_we0 = ap_const_logic_1;
    } else {
        pyr_data_we0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_sel_tmp10_i_fu_19659_p2() {
    sel_tmp10_i_fu_19659_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_5);
}

void batch_align2D::thread_sel_tmp11_i_fu_19665_p3() {
    sel_tmp11_i_fu_19665_p3 = (!sel_tmp10_i_fu_19659_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i_fu_19659_p2.read()[0].to_bool())? cur_px_estimate_2_1.read(): sel_tmp9_i_fu_19651_p3.read());
}

void batch_align2D::thread_sel_tmp12_i_fu_19673_p2() {
    sel_tmp12_i_fu_19673_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_6);
}

void batch_align2D::thread_sel_tmp1_i_fu_19595_p3() {
    sel_tmp1_i_fu_19595_p3 = (!sel_tmp_i_fu_19589_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i_fu_19589_p2.read()[0].to_bool())? cur_px_estimate_0_0.read(): cur_px_estimate_3_1.read());
}

void batch_align2D::thread_sel_tmp2_i_fu_19603_p2() {
    sel_tmp2_i_fu_19603_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_1);
}

void batch_align2D::thread_sel_tmp3_i_fu_19609_p3() {
    sel_tmp3_i_fu_19609_p3 = (!sel_tmp2_i_fu_19603_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i_fu_19603_p2.read()[0].to_bool())? cur_px_estimate_0_1.read(): sel_tmp1_i_fu_19595_p3.read());
}

void batch_align2D::thread_sel_tmp4_i_fu_19617_p2() {
    sel_tmp4_i_fu_19617_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_2);
}

void batch_align2D::thread_sel_tmp5_i_fu_19623_p3() {
    sel_tmp5_i_fu_19623_p3 = (!sel_tmp4_i_fu_19617_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i_fu_19617_p2.read()[0].to_bool())? cur_px_estimate_1_0.read(): sel_tmp3_i_fu_19609_p3.read());
}

void batch_align2D::thread_sel_tmp6_i_fu_19631_p2() {
    sel_tmp6_i_fu_19631_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_3);
}

void batch_align2D::thread_sel_tmp7_i_fu_19637_p3() {
    sel_tmp7_i_fu_19637_p3 = (!sel_tmp6_i_fu_19631_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i_fu_19631_p2.read()[0].to_bool())? cur_px_estimate_1_1.read(): sel_tmp5_i_fu_19623_p3.read());
}

void batch_align2D::thread_sel_tmp8_i_fu_19645_p2() {
    sel_tmp8_i_fu_19645_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_4);
}

void batch_align2D::thread_sel_tmp9_i_fu_19651_p3() {
    sel_tmp9_i_fu_19651_p3 = (!sel_tmp8_i_fu_19645_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i_fu_19645_p2.read()[0].to_bool())? cur_px_estimate_2_0.read(): sel_tmp7_i_fu_19637_p3.read());
}

void batch_align2D::thread_sel_tmp_i_fu_19589_p2() {
    sel_tmp_i_fu_19589_p2 = (!tmp_472_fu_19553_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_19553_p1.read() == ap_const_lv3_0);
}

void batch_align2D::thread_tmp_465_fu_5093_p1() {
    tmp_465_fu_5093_p1 = esl_zext<64,62>(inv_out7_fu_5083_p4.read());
}

void batch_align2D::thread_tmp_466_fu_5113_p1() {
    tmp_466_fu_5113_p1 = esl_zext<64,62>(cur_px_estimate_ptr5_fu_5103_p4.read());
}

void batch_align2D::thread_tmp_467_fu_10784_p1() {
    tmp_467_fu_10784_p1 = phi_urem_reg_4605.read().range(7-1, 0);
}

void batch_align2D::thread_tmp_468_fu_14030_p1() {
    tmp_468_fu_14030_p1 = indvar3_reg_4616.read().range(1-1, 0);
}

void batch_align2D::thread_tmp_469_fu_10794_p2() {
    tmp_469_fu_10794_p2 = (!next_urem_fu_10788_p2.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<1>(): (sc_biguint<9>(next_urem_fu_10788_p2.read()) < sc_biguint<9>(ap_const_lv9_64));
}

void batch_align2D::thread_tmp_470_fu_19443_p1() {
    tmp_470_fu_19443_p1 = k_1_reg_4627.read().range(2-1, 0);
}

void batch_align2D::thread_tmp_471_fu_19447_p3() {
    tmp_471_fu_19447_p3 = esl_concat<3,1>(k_1_reg_4627.read(), ap_const_lv1_0);
}

void batch_align2D::thread_tmp_472_fu_19553_p1() {
    tmp_472_fu_19553_p1 = indvar8_reg_4649.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_867_cast_fu_5117_p1() {
    tmp_867_cast_fu_5117_p1 = esl_zext<63,62>(cur_px_estimate_ptr5_fu_5103_p4.read());
}

void batch_align2D::thread_tmp_870_cast_fu_19455_p1() {
    tmp_870_cast_fu_19455_p1 = esl_zext<63,4>(tmp_471_fu_19447_p3.read());
}

void batch_align2D::thread_tmp_s_fu_19438_p1() {
    tmp_s_fu_19438_p1 = esl_zext<64,3>(k_1_reg_4627.read());
}

void batch_align2D::thread_transfer_pyr_read_read_fu_4440_p2() {
    transfer_pyr_read_read_fu_4440_p2 = transfer_pyr.read();
}

}

