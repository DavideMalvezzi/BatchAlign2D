#include "batch_align2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D::thread_UnifiedRetVal_i_fu_19733_p3() {
    UnifiedRetVal_i_fu_19733_p3 = (!sel_tmp12_i_fu_19727_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i_fu_19727_p2.read()[0].to_bool())? cur_px_estimate_3_0.read(): sel_tmp11_i_fu_19719_p3.read());
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
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[43];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[49];
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

void batch_align2D::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[30];
}

void batch_align2D::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[31];
}

void batch_align2D::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[32];
}

void batch_align2D::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[33];
}

void batch_align2D::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[34];
}

void batch_align2D::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[35];
}

void batch_align2D::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[36];
}

void batch_align2D::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[37];
}

void batch_align2D::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[39];
}

void batch_align2D::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[40];
}

void batch_align2D::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[41];
}

void batch_align2D::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[42];
}

void batch_align2D::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[44];
}

void batch_align2D::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[48];
}

void batch_align2D::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[54];
}

void batch_align2D::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void batch_align2D::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_25392.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_25392.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
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
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state50_io.read()));
}

void batch_align2D::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state50_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_01001() {
    ap_block_pp4_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state57_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state57_io.read()));
}

void batch_align2D::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state19_pp1_stage0_iter0() {
    ap_block_state19_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state20_pp1_stage0_iter1() {
    ap_block_state20_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_25392.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
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

void batch_align2D::thread_ap_block_state31_io() {
    ap_block_state31_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_AWREADY.read()));
}

void batch_align2D::thread_ap_block_state35_on_subcall_done() {
    ap_block_state35_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_3_fu_4698_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_2_fu_4802_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_1_fu_4906_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_5010_ap_done.read()));
}

void batch_align2D::thread_ap_block_state40_io() {
    ap_block_state40_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_WREADY.read()));
}

void batch_align2D::thread_ap_block_state49_pp3_stage0_iter0() {
    ap_block_state49_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state50_io() {
    ap_block_state50_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_28482.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_WREADY.read()));
}

void batch_align2D::thread_ap_block_state50_pp3_stage0_iter1() {
    ap_block_state50_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state56_pp4_stage0_iter0() {
    ap_block_state56_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state57_io() {
    ap_block_state57_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28496.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_WREADY.read()));
}

void batch_align2D::thread_ap_block_state57_pp4_stage0_iter1() {
    ap_block_state57_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_condition_8858() {
    ap_condition_8858 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_28482.read()));
}

void batch_align2D::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(exitcond3_fu_5189_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp1_exit_iter0_state19() {
    if (esl_seteq<1,1,1>(exitcond1_fu_10806_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp2_exit_iter0_state29() {
    if (esl_seteq<1,1,1>(exitcond2_fu_14058_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp3_exit_iter0_state49() {
    if (esl_seteq<1,1,1>(exitcond4_fu_19541_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state49 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state49 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp4_exit_iter0_state56() {
    if (esl_seteq<1,1,1>(exitcond5_fu_19595_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state56 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state56 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && 
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

void batch_align2D::thread_ap_phi_mux_indvar_phi_fu_4624_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_phi_fu_4624_p4 = indvar_next_reg_19782.read();
    } else {
        ap_phi_mux_indvar_phi_fu_4624_p4 = indvar_reg_4620.read();
    }
}

void batch_align2D::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         esl_seteq<1,1,1>(ap_block_state40_io.read(), ap_const_boolean_0))) {
        converged_ap_vld = ap_const_logic_1;
    } else {
        converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D::thread_cur_px_estimate_ptr5_fu_5153_p4() {
    cur_px_estimate_ptr5_fu_5153_p4 = cur_px_estimate_ptr.read().range(63, 2);
}

void batch_align2D::thread_cur_px_estimate_ptr6_1_fu_15896_p2() {
    cur_px_estimate_ptr6_1_fu_15896_p2 = (!tmp_66_cast_reg_19751.read().is_01() || !ap_const_lv63_2.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_66_cast_reg_19751.read()) + sc_biguint<63>(ap_const_lv63_2));
}

void batch_align2D::thread_cur_px_estimate_ptr6_2_fu_15911_p2() {
    cur_px_estimate_ptr6_2_fu_15911_p2 = (!tmp_66_cast_reg_19751.read().is_01() || !ap_const_lv63_4.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_66_cast_reg_19751.read()) + sc_biguint<63>(ap_const_lv63_4));
}

void batch_align2D::thread_cur_px_estimate_ptr6_3_fu_15926_p2() {
    cur_px_estimate_ptr6_3_fu_15926_p2 = (!tmp_66_cast_reg_19751.read().is_01() || !ap_const_lv63_6.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_66_cast_reg_19751.read()) + sc_biguint<63>(ap_const_lv63_6));
}

void batch_align2D::thread_cur_px_estimate_ptr6_4_fu_15916_p1() {
    cur_px_estimate_ptr6_4_fu_15916_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_2_fu_15911_p2.read());
}

void batch_align2D::thread_cur_px_estimate_ptr6_5_fu_15931_p1() {
    cur_px_estimate_ptr6_5_fu_15931_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_3_fu_15926_p2.read());
}

void batch_align2D::thread_cur_px_estimate_ptr6_fu_15901_p1() {
    cur_px_estimate_ptr6_fu_15901_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_1_fu_15896_p2.read());
}

void batch_align2D::thread_debug_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_AWREADY.read()))) {
        debug_AWVALID = ap_const_logic_1;
    } else {
        debug_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) && 
         esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
        debug_BREADY = ap_const_logic_1;
    } else {
        debug_BREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_28482.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_WREADY.read()))) {
        debug_WVALID = ap_const_logic_1;
    } else {
        debug_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        debug_blk_n_AW = m_axi_debug_AWREADY.read();
    } else {
        debug_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        debug_blk_n_B = m_axi_debug_BVALID.read();
    } else {
        debug_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_28482.read()))) {
        debug_blk_n_W = m_axi_debug_WREADY.read();
    } else {
        debug_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D::thread_exitcond1_fu_10806_p2() {
    exitcond1_fu_10806_p2 = (!indvar1_reg_4632.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_4632.read() == ap_const_lv9_190);
}

void batch_align2D::thread_exitcond2_fu_14058_p2() {
    exitcond2_fu_14058_p2 = (!indvar3_reg_4665.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_4665.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond3_fu_5189_p2() {
    exitcond3_fu_5189_p2 = (!ap_phi_mux_indvar_phi_fu_4624_p4.read().is_01() || !ap_const_lv19_73AA0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_4624_p4.read() == ap_const_lv19_73AA0);
}

void batch_align2D::thread_exitcond4_fu_19541_p2() {
    exitcond4_fu_19541_p2 = (!indvar6_reg_4676.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_reg_4676.read() == ap_const_lv6_24);
}

void batch_align2D::thread_exitcond5_fu_19595_p2() {
    exitcond5_fu_19595_p2 = (!indvar8_reg_4687.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_reg_4687.read() == ap_const_lv4_8);
}

void batch_align2D::thread_grp_compute_inverse_hess_1_fu_4906_ap_start() {
    grp_compute_inverse_hess_1_fu_4906_ap_start = grp_compute_inverse_hess_1_fu_4906_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_2_fu_4802_ap_start() {
    grp_compute_inverse_hess_2_fu_4802_ap_start = grp_compute_inverse_hess_2_fu_4802_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_3_fu_4698_ap_start() {
    grp_compute_inverse_hess_3_fu_4698_ap_start = grp_compute_inverse_hess_3_fu_4698_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_5010_ap_start() {
    grp_compute_inverse_hess_fu_5010_ap_start = grp_compute_inverse_hess_fu_5010_ap_start_reg.read();
}

void batch_align2D::thread_grp_fu_5114_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
          esl_seteq<1,1,1>(ap_block_state40_io.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_WREADY.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_WREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)))) {
        grp_fu_5114_ce = ap_const_logic_1;
    } else {
        grp_fu_5114_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_5114_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_fu_5114_p0 = H_inv_3_0_reg_28398.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_fu_5114_p0 = H_inv_2_0_reg_28347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_5114_p0 = H_inv_1_0_reg_28301.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_fu_5114_p0 = H_inv_0_0_reg_28250.read();
    } else {
        grp_fu_5114_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_grp_fu_5114_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_fu_5114_p1 = tmp_82_3_reg_28471.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_fu_5114_p1 = tmp_82_2_reg_28460.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_fu_5114_p1 = tmp_82_1_reg_28444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_fu_5114_p1 = tmp_478_reg_28296.read();
    } else {
        grp_fu_5114_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_grp_fu_5118_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
          esl_seteq<1,1,1>(ap_block_state35_on_subcall_done.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)))) {
        grp_fu_5118_ce = ap_const_logic_1;
    } else {
        grp_fu_5118_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_5118_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_fu_5118_p0 = tmp_81_3_fu_15891_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_fu_5118_p0 = tmp_81_2_fu_15850_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        grp_fu_5118_p0 = tmp_81_1_fu_15737_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_fu_5118_p0 = tmp_477_fu_14132_p1.read();
    } else {
        grp_fu_5118_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_idx_urem_fu_10850_p3() {
    idx_urem_fu_10850_p3 = (!tmp_69_fu_10844_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_69_fu_10844_p2.read()[0].to_bool())? next_urem_fu_10838_p2.read(): ap_const_lv9_0);
}

void batch_align2D::thread_indvar4_fu_5201_p1() {
    indvar4_fu_5201_p1 = esl_zext<64,19>(indvar_reg_4620_pp0_iter1_reg.read());
}

void batch_align2D::thread_indvar_next1_fu_10812_p2() {
    indvar_next1_fu_10812_p2 = (!indvar1_reg_4632.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar1_reg_4632.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void batch_align2D::thread_indvar_next2_fu_14064_p2() {
    indvar_next2_fu_14064_p2 = (!indvar3_reg_4665.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar3_reg_4665.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next3_fu_19547_p2() {
    indvar_next3_fu_19547_p2 = (!indvar6_reg_4676.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar6_reg_4676.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D::thread_indvar_next4_fu_19601_p2() {
    indvar_next4_fu_19601_p2 = (!indvar8_reg_4687.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar8_reg_4687.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next_fu_5195_p2() {
    indvar_next_fu_5195_p2 = (!ap_phi_mux_indvar_phi_fu_4624_p4.read().is_01() || !ap_const_lv19_1.is_01())? sc_lv<19>(): (sc_biguint<19>(ap_phi_mux_indvar_phi_fu_4624_p4.read()) + sc_biguint<19>(ap_const_lv19_1));
}

void batch_align2D::thread_inv_out7_fu_5133_p4() {
    inv_out7_fu_5133_p4 = inv_out.read().range(63, 2);
}

void batch_align2D::thread_next_mul_fu_10818_p2() {
    next_mul_fu_10818_p2 = (!ap_const_lv19_290.is_01() || !phi_mul_reg_4643.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_290) + sc_biguint<19>(phi_mul_reg_4643.read()));
}

void batch_align2D::thread_next_urem_fu_10838_p2() {
    next_urem_fu_10838_p2 = (!phi_urem_reg_4654.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_urem_reg_4654.read()) + sc_biguint<9>(ap_const_lv9_1));
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_25392.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_25392.read()))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_3_reg_28476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_2_reg_28465.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_1_reg_28454.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWADDR = pos_addr_reg_19758.read();
    } else {
        pos_r_AWADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_AWLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWLEN = ap_const_lv32_8;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWLEN = ap_const_lv32_1;
    } else {
        pos_r_AWLEN = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_pos_r_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWVALID = ap_const_logic_1;
    } else {
        pos_r_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28496.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_01001.read(), ap_const_boolean_0))) {
        pos_r_WDATA = UnifiedRetVal_i_reg_28505.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())))) {
        pos_r_WDATA = reg_5125.read();
    } else {
        pos_r_WDATA = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void batch_align2D::thread_pos_r_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28496.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        pos_r_blk_n_AW = m_axi_pos_r_AWREADY.read();
    } else {
        pos_r_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_28496.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()))) {
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
         esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0) && 
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
         esl_seteq<1,1,1>(exitcond3_reg_19778.read(), ap_const_lv1_0))) {
        pyr_blk_n_R = m_axi_pyr_RVALID.read();
    } else {
        pyr_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_data_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        pyr_data_address0 = ap_const_lv19_3;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        pyr_data_address0 = ap_const_lv19_2;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        pyr_data_address0 = ap_const_lv19_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        pyr_data_address0 = ap_const_lv19_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_data_address0 =  (sc_lv<19>) (indvar4_fu_5201_p1.read());
    } else {
        pyr_data_address0 =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pyr_data_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
          esl_seteq<1,1,1>(ap_block_state31_io.read(), ap_const_boolean_0)) || 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_19778_pp0_iter1_reg.read()))) {
        pyr_data_we0 = ap_const_logic_1;
    } else {
        pyr_data_we0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_sel_tmp10_i_fu_19713_p2() {
    sel_tmp10_i_fu_19713_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_5);
}

void batch_align2D::thread_sel_tmp11_i_fu_19719_p3() {
    sel_tmp11_i_fu_19719_p3 = (!sel_tmp10_i_fu_19713_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i_fu_19713_p2.read()[0].to_bool())? cur_px_estimate_2_1.read(): sel_tmp9_i_fu_19705_p3.read());
}

void batch_align2D::thread_sel_tmp12_i_fu_19727_p2() {
    sel_tmp12_i_fu_19727_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_6);
}

void batch_align2D::thread_sel_tmp1_i_fu_19649_p3() {
    sel_tmp1_i_fu_19649_p3 = (!sel_tmp_i_fu_19643_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i_fu_19643_p2.read()[0].to_bool())? cur_px_estimate_0_0.read(): cur_px_estimate_3_1.read());
}

void batch_align2D::thread_sel_tmp2_i_fu_19657_p2() {
    sel_tmp2_i_fu_19657_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_1);
}

void batch_align2D::thread_sel_tmp3_i_fu_19663_p3() {
    sel_tmp3_i_fu_19663_p3 = (!sel_tmp2_i_fu_19657_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i_fu_19657_p2.read()[0].to_bool())? cur_px_estimate_0_1.read(): sel_tmp1_i_fu_19649_p3.read());
}

void batch_align2D::thread_sel_tmp4_i_fu_19671_p2() {
    sel_tmp4_i_fu_19671_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_2);
}

void batch_align2D::thread_sel_tmp5_i_fu_19677_p3() {
    sel_tmp5_i_fu_19677_p3 = (!sel_tmp4_i_fu_19671_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i_fu_19671_p2.read()[0].to_bool())? cur_px_estimate_1_0.read(): sel_tmp3_i_fu_19663_p3.read());
}

void batch_align2D::thread_sel_tmp6_i_fu_19685_p2() {
    sel_tmp6_i_fu_19685_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_3);
}

void batch_align2D::thread_sel_tmp7_i_fu_19691_p3() {
    sel_tmp7_i_fu_19691_p3 = (!sel_tmp6_i_fu_19685_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i_fu_19685_p2.read()[0].to_bool())? cur_px_estimate_1_1.read(): sel_tmp5_i_fu_19677_p3.read());
}

void batch_align2D::thread_sel_tmp8_i_fu_19699_p2() {
    sel_tmp8_i_fu_19699_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_4);
}

void batch_align2D::thread_sel_tmp9_i_fu_19705_p3() {
    sel_tmp9_i_fu_19705_p3 = (!sel_tmp8_i_fu_19699_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i_fu_19699_p2.read()[0].to_bool())? cur_px_estimate_2_0.read(): sel_tmp7_i_fu_19691_p3.read());
}

void batch_align2D::thread_sel_tmp_i_fu_19643_p2() {
    sel_tmp_i_fu_19643_p2 = (!tmp_70_fu_19607_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_70_fu_19607_p1.read() == ap_const_lv3_0);
}

void batch_align2D::thread_tmp_477_fu_14132_p1() {
    tmp_477_fu_14132_p1 = esl_zext<32,8>(reg_5121.read());
}

void batch_align2D::thread_tmp_65_fu_5143_p1() {
    tmp_65_fu_5143_p1 = esl_zext<64,62>(inv_out7_fu_5133_p4.read());
}

void batch_align2D::thread_tmp_66_cast_fu_5167_p1() {
    tmp_66_cast_fu_5167_p1 = esl_zext<63,62>(cur_px_estimate_ptr5_fu_5153_p4.read());
}

void batch_align2D::thread_tmp_66_fu_5163_p1() {
    tmp_66_fu_5163_p1 = esl_zext<64,62>(cur_px_estimate_ptr5_fu_5153_p4.read());
}

void batch_align2D::thread_tmp_67_fu_10834_p1() {
    tmp_67_fu_10834_p1 = phi_urem_reg_4654.read().range(7-1, 0);
}

void batch_align2D::thread_tmp_68_fu_14080_p1() {
    tmp_68_fu_14080_p1 = indvar3_reg_4665.read().range(1-1, 0);
}

void batch_align2D::thread_tmp_69_fu_10844_p2() {
    tmp_69_fu_10844_p2 = (!next_urem_fu_10838_p2.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<1>(): (sc_biguint<9>(next_urem_fu_10838_p2.read()) < sc_biguint<9>(ap_const_lv9_64));
}

void batch_align2D::thread_tmp_70_fu_19607_p1() {
    tmp_70_fu_19607_p1 = indvar8_reg_4687.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_81_1_fu_15737_p1() {
    tmp_81_1_fu_15737_p1 = esl_zext<32,8>(reg_5121.read());
}

void batch_align2D::thread_tmp_81_2_fu_15850_p1() {
    tmp_81_2_fu_15850_p1 = esl_zext<32,8>(reg_5121.read());
}

void batch_align2D::thread_tmp_81_3_fu_15891_p1() {
    tmp_81_3_fu_15891_p1 = esl_zext<32,8>(reg_5121.read());
}

void batch_align2D::thread_transfer_pyr_read_read_fu_4452_p2() {
    transfer_pyr_read_read_fu_4452_p2 = transfer_pyr.read();
}

}

