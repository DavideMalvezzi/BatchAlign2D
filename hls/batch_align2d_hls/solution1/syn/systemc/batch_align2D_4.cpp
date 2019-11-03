#include "batch_align2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

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
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[31];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[37];
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

void batch_align2D::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[25];
}

void batch_align2D::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[26];
}

void batch_align2D::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[27];
}

void batch_align2D::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[28];
}

void batch_align2D::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[29];
}

void batch_align2D::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[30];
}

void batch_align2D::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[32];
}

void batch_align2D::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[36];
}

void batch_align2D::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[42];
}

void batch_align2D::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void batch_align2D::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
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
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state39_io.read()));
}

void batch_align2D::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state39_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_01001() {
    ap_block_pp4_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state46_io.read()));
}

void batch_align2D::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state46_io.read()));
}

void batch_align2D::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state19_pp1_stage0_iter0() {
    ap_block_state19_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state20_pp1_stage0_iter1() {
    ap_block_state20_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
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

void batch_align2D::thread_ap_block_state31_pp2_stage0_iter2() {
    ap_block_state31_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state35_on_subcall_done() {
    ap_block_state35_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_3381_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_3485_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_compute_inverse_hess_fu_3589_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_gauss_newton_optim_fu_2835_ap_done.read()));
}

void batch_align2D::thread_ap_block_state37_on_subcall_done() {
    ap_block_state37_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_gauss_newton_optim_fu_2835_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_gauss_newton_optim_fu_3017_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_gauss_newton_optim_fu_3199_ap_done.read()));
}

void batch_align2D::thread_ap_block_state38_pp3_stage0_iter0() {
    ap_block_state38_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state39_io() {
    ap_block_state39_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_125898.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_WREADY.read()));
}

void batch_align2D::thread_ap_block_state39_pp3_stage0_iter1() {
    ap_block_state39_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state45_pp4_stage0_iter0() {
    ap_block_state45_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state46_io() {
    ap_block_state46_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_125912.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_WREADY.read()));
}

void batch_align2D::thread_ap_block_state46_pp4_stage0_iter1() {
    ap_block_state46_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_condition_75449() {
    ap_condition_75449 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_125898.read()));
}

void batch_align2D::thread_ap_condition_75453() {
    ap_condition_75453 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_125912.read()));
}

void batch_align2D::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(exitcond4_fu_5995_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp1_exit_iter0_state19() {
    if (esl_seteq<1,1,1>(exitcond2_fu_9612_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp2_exit_iter0_state29() {
    if (esl_seteq<1,1,1>(exitcond3_fu_115552_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state29 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp3_exit_iter0_state38() {
    if (esl_seteq<1,1,1>(exitcond5_fu_118676_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state38 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state38 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp4_exit_iter0_state45() {
    if (esl_seteq<1,1,1>(exitcond6_fu_118730_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state45 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state45 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()))) {
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

void batch_align2D::thread_ap_phi_mux_indvar_phi_fu_2761_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_phi_fu_2761_p4 = indvar_next_reg_118810.read();
    } else {
        ap_phi_mux_indvar_phi_fu_2761_p4 = indvar_reg_2757.read();
    }
}

void batch_align2D::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && 
         esl_seteq<1,1,1>(ap_block_state37_on_subcall_done.read(), ap_const_boolean_0))) {
        converged_ap_vld = ap_const_logic_1;
    } else {
        converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D::thread_cur_px_estimate_ptr5_fu_5963_p4() {
    cur_px_estimate_ptr5_fu_5963_p4 = cur_px_estimate_ptr.read().range(63, 2);
}

void batch_align2D::thread_debug_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_AWREADY.read()))) {
        debug_AWVALID = ap_const_logic_1;
    } else {
        debug_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
         esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
        debug_BREADY = ap_const_logic_1;
    } else {
        debug_BREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_125898.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_WREADY.read()))) {
        debug_WVALID = ap_const_logic_1;
    } else {
        debug_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        debug_blk_n_AW = m_axi_debug_AWREADY.read();
    } else {
        debug_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        debug_blk_n_B = m_axi_debug_BVALID.read();
    } else {
        debug_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_125898.read()))) {
        debug_blk_n_W = m_axi_debug_WREADY.read();
    } else {
        debug_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D::thread_exitcond2_fu_9612_p2() {
    exitcond2_fu_9612_p2 = (!indvar1_reg_2769.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_2769.read() == ap_const_lv9_190);
}

void batch_align2D::thread_exitcond3_fu_115552_p2() {
    exitcond3_fu_115552_p2 = (!indvar3_reg_2802.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_2802.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond4_fu_5995_p2() {
    exitcond4_fu_5995_p2 = (!ap_phi_mux_indvar_phi_fu_2761_p4.read().is_01() || !ap_const_lv19_73AA0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_2761_p4.read() == ap_const_lv19_73AA0);
}

void batch_align2D::thread_exitcond5_fu_118676_p2() {
    exitcond5_fu_118676_p2 = (!indvar6_reg_2813.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_reg_2813.read() == ap_const_lv6_24);
}

void batch_align2D::thread_exitcond6_fu_118730_p2() {
    exitcond6_fu_118730_p2 = (!indvar8_reg_2824.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_reg_2824.read() == ap_const_lv4_8);
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_ap_start() {
    grp_compute_inverse_hess_fu_3381_ap_start = grp_compute_inverse_hess_fu_3381_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read = ref_patch_with_borde_900_fu_2222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read = ref_patch_with_borde_800_fu_2622.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read1 = ref_patch_with_borde_901_fu_2218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read1 = ref_patch_with_borde_801_fu_2618.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read1 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read10 = ref_patch_with_borde_910_fu_2182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read10 = ref_patch_with_borde_810_fu_2582.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read10 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read11() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read11 = ref_patch_with_borde_911_fu_2178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read11 = ref_patch_with_borde_811_fu_2578.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read11 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read12() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read12 = ref_patch_with_borde_912_fu_2174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read12 = ref_patch_with_borde_812_fu_2574.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read12 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read13() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read13 = ref_patch_with_borde_913_fu_2170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read13 = ref_patch_with_borde_813_fu_2570.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read13 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read14() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read14 = ref_patch_with_borde_914_fu_2166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read14 = ref_patch_with_borde_814_fu_2566.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read14 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read15() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read15 = ref_patch_with_borde_915_fu_2162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read15 = ref_patch_with_borde_815_fu_2562.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read15 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read16() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read16 = ref_patch_with_borde_916_fu_2158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read16 = ref_patch_with_borde_816_fu_2558.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read16 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read17() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read17 = ref_patch_with_borde_917_fu_2154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read17 = ref_patch_with_borde_817_fu_2554.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read17 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read18() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read18 = ref_patch_with_borde_918_fu_2150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read18 = ref_patch_with_borde_818_fu_2550.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read18 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read19() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read19 = ref_patch_with_borde_919_fu_2146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read19 = ref_patch_with_borde_819_fu_2546.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read19 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read2 = ref_patch_with_borde_902_fu_2214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read2 = ref_patch_with_borde_802_fu_2614.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read2 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read20() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read20 = ref_patch_with_borde_920_fu_2142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read20 = ref_patch_with_borde_820_fu_2542.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read20 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read21() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read21 = ref_patch_with_borde_921_fu_2138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read21 = ref_patch_with_borde_821_fu_2538.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read21 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read22() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read22 = ref_patch_with_borde_922_fu_2134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read22 = ref_patch_with_borde_822_fu_2534.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read22 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read23() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read23 = ref_patch_with_borde_923_fu_2130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read23 = ref_patch_with_borde_823_fu_2530.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read23 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read24() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read24 = ref_patch_with_borde_924_fu_2126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read24 = ref_patch_with_borde_824_fu_2526.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read24 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read25() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read25 = ref_patch_with_borde_925_fu_2122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read25 = ref_patch_with_borde_825_fu_2522.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read25 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read26() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read26 = ref_patch_with_borde_926_fu_2118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read26 = ref_patch_with_borde_826_fu_2518.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read26 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read27() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read27 = ref_patch_with_borde_927_fu_2114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read27 = ref_patch_with_borde_827_fu_2514.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read27 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read28() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read28 = ref_patch_with_borde_928_fu_2110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read28 = ref_patch_with_borde_828_fu_2510.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read28 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read29() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read29 = ref_patch_with_borde_929_fu_2106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read29 = ref_patch_with_borde_829_fu_2506.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read29 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read3() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read3 = ref_patch_with_borde_903_fu_2210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read3 = ref_patch_with_borde_803_fu_2610.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read3 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read30() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read30 = ref_patch_with_borde_930_fu_2102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read30 = ref_patch_with_borde_830_fu_2502.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read30 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read31() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read31 = ref_patch_with_borde_931_fu_2098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read31 = ref_patch_with_borde_831_fu_2498.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read31 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read32() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read32 = ref_patch_with_borde_932_fu_2094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read32 = ref_patch_with_borde_832_fu_2494.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read32 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read33() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read33 = ref_patch_with_borde_933_fu_2090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read33 = ref_patch_with_borde_833_fu_2490.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read33 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read34() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read34 = ref_patch_with_borde_934_fu_2086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read34 = ref_patch_with_borde_834_fu_2486.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read34 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read35() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read35 = ref_patch_with_borde_935_fu_2082.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read35 = ref_patch_with_borde_835_fu_2482.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read35 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read36() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read36 = ref_patch_with_borde_936_fu_2078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read36 = ref_patch_with_borde_836_fu_2478.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read36 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read37() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read37 = ref_patch_with_borde_937_fu_2074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read37 = ref_patch_with_borde_837_fu_2474.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read37 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read38() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read38 = ref_patch_with_borde_938_fu_2070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read38 = ref_patch_with_borde_838_fu_2470.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read38 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read39() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read39 = ref_patch_with_borde_939_fu_2066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read39 = ref_patch_with_borde_839_fu_2466.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read39 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read4 = ref_patch_with_borde_904_fu_2206.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read4 = ref_patch_with_borde_804_fu_2606.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read4 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read40() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read40 = ref_patch_with_borde_940_fu_2062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read40 = ref_patch_with_borde_840_fu_2462.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read40 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read41() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read41 = ref_patch_with_borde_941_fu_2058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read41 = ref_patch_with_borde_841_fu_2458.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read41 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read42() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read42 = ref_patch_with_borde_942_fu_2054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read42 = ref_patch_with_borde_842_fu_2454.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read42 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read43() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read43 = ref_patch_with_borde_943_fu_2050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read43 = ref_patch_with_borde_843_fu_2450.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read43 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read44() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read44 = ref_patch_with_borde_944_fu_2046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read44 = ref_patch_with_borde_844_fu_2446.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read44 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read45() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read45 = ref_patch_with_borde_945_fu_2042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read45 = ref_patch_with_borde_845_fu_2442.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read45 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read46() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read46 = ref_patch_with_borde_946_fu_2038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read46 = ref_patch_with_borde_846_fu_2438.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read46 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read47() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read47 = ref_patch_with_borde_947_fu_2034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read47 = ref_patch_with_borde_847_fu_2434.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read47 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read48() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read48 = ref_patch_with_borde_948_fu_2030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read48 = ref_patch_with_borde_848_fu_2430.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read48 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read49() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read49 = ref_patch_with_borde_949_fu_2026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read49 = ref_patch_with_borde_849_fu_2426.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read49 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read5() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read5 = ref_patch_with_borde_905_fu_2202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read5 = ref_patch_with_borde_805_fu_2602.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read5 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read50() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read50 = ref_patch_with_borde_950_fu_2022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read50 = ref_patch_with_borde_850_fu_2422.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read50 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read51() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read51 = ref_patch_with_borde_951_fu_2018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read51 = ref_patch_with_borde_851_fu_2418.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read51 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read52() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read52 = ref_patch_with_borde_952_fu_2014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read52 = ref_patch_with_borde_852_fu_2414.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read52 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read53() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read53 = ref_patch_with_borde_953_fu_2010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read53 = ref_patch_with_borde_853_fu_2410.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read53 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read54() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read54 = ref_patch_with_borde_954_fu_2006.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read54 = ref_patch_with_borde_854_fu_2406.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read54 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read55() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read55 = ref_patch_with_borde_955_fu_2002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read55 = ref_patch_with_borde_855_fu_2402.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read55 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read56() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read56 = ref_patch_with_borde_956_fu_1998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read56 = ref_patch_with_borde_856_fu_2398.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read56 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read57() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read57 = ref_patch_with_borde_957_fu_1994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read57 = ref_patch_with_borde_857_fu_2394.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read57 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read58() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read58 = ref_patch_with_borde_958_fu_1990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read58 = ref_patch_with_borde_858_fu_2390.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read58 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read59() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read59 = ref_patch_with_borde_959_fu_1986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read59 = ref_patch_with_borde_859_fu_2386.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read59 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read6() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read6 = ref_patch_with_borde_906_fu_2198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read6 = ref_patch_with_borde_806_fu_2598.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read6 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read60() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read60 = ref_patch_with_borde_960_fu_1982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read60 = ref_patch_with_borde_860_fu_2382.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read60 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read61() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read61 = ref_patch_with_borde_961_fu_1978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read61 = ref_patch_with_borde_861_fu_2378.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read61 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read62() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read62 = ref_patch_with_borde_962_fu_1974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read62 = ref_patch_with_borde_862_fu_2374.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read62 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read63() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read63 = ref_patch_with_borde_963_fu_1970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read63 = ref_patch_with_borde_863_fu_2370.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read63 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read64() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read64 = ref_patch_with_borde_964_fu_1966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read64 = ref_patch_with_borde_864_fu_2366.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read64 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read65() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read65 = ref_patch_with_borde_965_fu_1962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read65 = ref_patch_with_borde_865_fu_2362.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read65 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read66() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read66 = ref_patch_with_borde_966_fu_1958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read66 = ref_patch_with_borde_866_fu_2358.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read66 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read67() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read67 = ref_patch_with_borde_967_fu_1954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read67 = ref_patch_with_borde_867_fu_2354.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read67 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read68() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read68 = ref_patch_with_borde_968_fu_1950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read68 = ref_patch_with_borde_868_fu_2350.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read68 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read69() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read69 = ref_patch_with_borde_969_fu_1946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read69 = ref_patch_with_borde_869_fu_2346.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read69 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read7() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read7 = ref_patch_with_borde_907_fu_2194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read7 = ref_patch_with_borde_807_fu_2594.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read7 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read70() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read70 = ref_patch_with_borde_970_fu_1942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read70 = ref_patch_with_borde_870_fu_2342.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read70 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read71() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read71 = ref_patch_with_borde_971_fu_1938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read71 = ref_patch_with_borde_871_fu_2338.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read71 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read72() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read72 = ref_patch_with_borde_972_fu_1934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read72 = ref_patch_with_borde_872_fu_2334.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read72 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read73() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read73 = ref_patch_with_borde_973_fu_1930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read73 = ref_patch_with_borde_873_fu_2330.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read73 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read74() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read74 = ref_patch_with_borde_974_fu_1926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read74 = ref_patch_with_borde_874_fu_2326.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read74 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read75() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read75 = ref_patch_with_borde_975_fu_1922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read75 = ref_patch_with_borde_875_fu_2322.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read75 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read76() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read76 = ref_patch_with_borde_976_fu_1918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read76 = ref_patch_with_borde_876_fu_2318.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read76 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read77() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read77 = ref_patch_with_borde_977_fu_1914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read77 = ref_patch_with_borde_877_fu_2314.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read77 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read78() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read78 = ref_patch_with_borde_978_fu_1910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read78 = ref_patch_with_borde_878_fu_2310.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read78 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read79() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read79 = ref_patch_with_borde_979_fu_1906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read79 = ref_patch_with_borde_879_fu_2306.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read79 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read8() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read8 = ref_patch_with_borde_908_fu_2190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read8 = ref_patch_with_borde_808_fu_2590.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read8 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read80() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read80 = ref_patch_with_borde_980_fu_1902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read80 = ref_patch_with_borde_880_fu_2302.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read80 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read81() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read81 = ref_patch_with_borde_981_fu_1898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read81 = ref_patch_with_borde_881_fu_2298.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read81 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read82() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read82 = ref_patch_with_borde_982_fu_1894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read82 = ref_patch_with_borde_882_fu_2294.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read82 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read83() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read83 = ref_patch_with_borde_983_fu_1890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read83 = ref_patch_with_borde_883_fu_2290.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read83 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read84() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read84 = ref_patch_with_borde_984_fu_1886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read84 = ref_patch_with_borde_884_fu_2286.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read84 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read85() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read85 = ref_patch_with_borde_985_fu_1882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read85 = ref_patch_with_borde_885_fu_2282.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read85 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read86() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read86 = ref_patch_with_borde_986_fu_1878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read86 = ref_patch_with_borde_886_fu_2278.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read86 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read87() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read87 = ref_patch_with_borde_987_fu_1874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read87 = ref_patch_with_borde_887_fu_2274.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read87 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read88() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read88 = ref_patch_with_borde_988_fu_1870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read88 = ref_patch_with_borde_888_fu_2270.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read88 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read89() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read89 = ref_patch_with_borde_989_fu_1866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read89 = ref_patch_with_borde_889_fu_2266.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read89 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read9() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read9 = ref_patch_with_borde_909_fu_2186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read9 = ref_patch_with_borde_809_fu_2586.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read9 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read90() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read90 = ref_patch_with_borde_990_fu_1862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read90 = ref_patch_with_borde_890_fu_2262.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read90 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read91() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read91 = ref_patch_with_borde_991_fu_1858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read91 = ref_patch_with_borde_891_fu_2258.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read91 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read92() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read92 = ref_patch_with_borde_992_fu_1854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read92 = ref_patch_with_borde_892_fu_2254.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read92 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read93() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read93 = ref_patch_with_borde_993_fu_1850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read93 = ref_patch_with_borde_893_fu_2250.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read93 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read94() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read94 = ref_patch_with_borde_994_fu_1846.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read94 = ref_patch_with_borde_894_fu_2246.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read94 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read95() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read95 = ref_patch_with_borde_995_fu_1842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read95 = ref_patch_with_borde_895_fu_2242.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read95 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read96() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read96 = ref_patch_with_borde_996_fu_1838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read96 = ref_patch_with_borde_896_fu_2238.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read96 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read97() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read97 = ref_patch_with_borde_997_fu_1834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read97 = ref_patch_with_borde_897_fu_2234.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read97 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read98() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read98 = ref_patch_with_borde_998_fu_1830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read98 = ref_patch_with_borde_898_fu_2230.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read98 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3381_p_read99() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_compute_inverse_hess_fu_3381_p_read99 = ref_patch_with_borde_999_fu_1826.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        grp_compute_inverse_hess_fu_3381_p_read99 = ref_patch_with_borde_899_fu_2226.read();
    } else {
        grp_compute_inverse_hess_fu_3381_p_read99 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3485_ap_start() {
    grp_compute_inverse_hess_fu_3485_ap_start = grp_compute_inverse_hess_fu_3485_ap_start_reg.read();
}

void batch_align2D::thread_grp_compute_inverse_hess_fu_3589_ap_start() {
    grp_compute_inverse_hess_fu_3589_ap_start = grp_compute_inverse_hess_fu_3589_ap_start_reg.read();
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_ap_start() {
    grp_gauss_newton_optim_fu_2835_ap_start = grp_gauss_newton_optim_fu_2835_ap_start_reg.read();
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_cur_px_estimate_0_r() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_0_r = cur_px_estimate_1_0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_0_r = cur_px_estimate_0_0.read();
    } else {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_0_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_cur_px_estimate_1_r() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_1_r = cur_px_estimate_1_1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_1_r = cur_px_estimate_0_1.read();
    } else {
        grp_gauss_newton_optim_fu_2835_cur_px_estimate_1_r =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read = ref_patch_with_borde_900_fu_2222.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read = ref_patch_with_borde_800_fu_2622.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read1 = ref_patch_with_borde_901_fu_2218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read1 = ref_patch_with_borde_801_fu_2618.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read1 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read10 = ref_patch_with_borde_910_fu_2182.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read10 = ref_patch_with_borde_810_fu_2582.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read10 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read100() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read100 = H_inv_1_0_reg_125056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read100 = H_inv_0_0_reg_123192.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read100 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read101() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read101 = H_inv_1_1_reg_125062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read101 = H_inv_0_1_reg_123198.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read101 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read102() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read102 = H_inv_1_2_reg_125068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read102 = H_inv_0_2_reg_123204.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read102 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read103() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read103 = H_inv_1_3_reg_125074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read103 = H_inv_0_3_reg_123210.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read103 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read104() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read104 = H_inv_1_4_reg_125080.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read104 = H_inv_0_4_reg_123216.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read104 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read105() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read105 = H_inv_1_5_reg_125086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read105 = H_inv_0_5_reg_123222.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read105 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read106() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read106 = H_inv_1_6_reg_125092.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read106 = H_inv_0_6_reg_123228.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read106 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read107() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read107 = H_inv_1_7_reg_125098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read107 = H_inv_0_7_reg_123234.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read107 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read108() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read108 = H_inv_1_8_reg_125104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read108 = H_inv_0_8_reg_123240.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read108 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read11() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read11 = ref_patch_with_borde_911_fu_2178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read11 = ref_patch_with_borde_811_fu_2578.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read11 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read12() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read12 = ref_patch_with_borde_912_fu_2174.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read12 = ref_patch_with_borde_812_fu_2574.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read12 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read13() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read13 = ref_patch_with_borde_913_fu_2170.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read13 = ref_patch_with_borde_813_fu_2570.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read13 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read14() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read14 = ref_patch_with_borde_914_fu_2166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read14 = ref_patch_with_borde_814_fu_2566.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read14 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read15() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read15 = ref_patch_with_borde_915_fu_2162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read15 = ref_patch_with_borde_815_fu_2562.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read15 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read16() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read16 = ref_patch_with_borde_916_fu_2158.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read16 = ref_patch_with_borde_816_fu_2558.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read16 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read17() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read17 = ref_patch_with_borde_917_fu_2154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read17 = ref_patch_with_borde_817_fu_2554.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read17 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read18() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read18 = ref_patch_with_borde_918_fu_2150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read18 = ref_patch_with_borde_818_fu_2550.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read18 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read19() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read19 = ref_patch_with_borde_919_fu_2146.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read19 = ref_patch_with_borde_819_fu_2546.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read19 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read2 = ref_patch_with_borde_902_fu_2214.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read2 = ref_patch_with_borde_802_fu_2614.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read2 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read20() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read20 = ref_patch_with_borde_920_fu_2142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read20 = ref_patch_with_borde_820_fu_2542.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read20 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read21() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read21 = ref_patch_with_borde_921_fu_2138.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read21 = ref_patch_with_borde_821_fu_2538.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read21 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read22() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read22 = ref_patch_with_borde_922_fu_2134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read22 = ref_patch_with_borde_822_fu_2534.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read22 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read23() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read23 = ref_patch_with_borde_923_fu_2130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read23 = ref_patch_with_borde_823_fu_2530.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read23 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read24() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read24 = ref_patch_with_borde_924_fu_2126.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read24 = ref_patch_with_borde_824_fu_2526.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read24 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read25() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read25 = ref_patch_with_borde_925_fu_2122.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read25 = ref_patch_with_borde_825_fu_2522.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read25 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read26() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read26 = ref_patch_with_borde_926_fu_2118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read26 = ref_patch_with_borde_826_fu_2518.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read26 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read27() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read27 = ref_patch_with_borde_927_fu_2114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read27 = ref_patch_with_borde_827_fu_2514.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read27 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read28() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read28 = ref_patch_with_borde_928_fu_2110.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read28 = ref_patch_with_borde_828_fu_2510.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read28 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read29() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read29 = ref_patch_with_borde_929_fu_2106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read29 = ref_patch_with_borde_829_fu_2506.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read29 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read3() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read3 = ref_patch_with_borde_903_fu_2210.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read3 = ref_patch_with_borde_803_fu_2610.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read3 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read30() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read30 = ref_patch_with_borde_930_fu_2102.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read30 = ref_patch_with_borde_830_fu_2502.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read30 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read31() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read31 = ref_patch_with_borde_931_fu_2098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read31 = ref_patch_with_borde_831_fu_2498.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read31 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read32() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read32 = ref_patch_with_borde_932_fu_2094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read32 = ref_patch_with_borde_832_fu_2494.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read32 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read33() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read33 = ref_patch_with_borde_933_fu_2090.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read33 = ref_patch_with_borde_833_fu_2490.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read33 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read34() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read34 = ref_patch_with_borde_934_fu_2086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read34 = ref_patch_with_borde_834_fu_2486.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read34 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read35() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read35 = ref_patch_with_borde_935_fu_2082.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read35 = ref_patch_with_borde_835_fu_2482.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read35 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read36() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read36 = ref_patch_with_borde_936_fu_2078.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read36 = ref_patch_with_borde_836_fu_2478.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read36 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read37() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read37 = ref_patch_with_borde_937_fu_2074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read37 = ref_patch_with_borde_837_fu_2474.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read37 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read38() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read38 = ref_patch_with_borde_938_fu_2070.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read38 = ref_patch_with_borde_838_fu_2470.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read38 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read39() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read39 = ref_patch_with_borde_939_fu_2066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read39 = ref_patch_with_borde_839_fu_2466.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read39 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read4 = ref_patch_with_borde_904_fu_2206.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read4 = ref_patch_with_borde_804_fu_2606.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read4 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read40() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read40 = ref_patch_with_borde_940_fu_2062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read40 = ref_patch_with_borde_840_fu_2462.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read40 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read41() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read41 = ref_patch_with_borde_941_fu_2058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read41 = ref_patch_with_borde_841_fu_2458.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read41 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read42() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read42 = ref_patch_with_borde_942_fu_2054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read42 = ref_patch_with_borde_842_fu_2454.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read42 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read43() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read43 = ref_patch_with_borde_943_fu_2050.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read43 = ref_patch_with_borde_843_fu_2450.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read43 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read44() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read44 = ref_patch_with_borde_944_fu_2046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read44 = ref_patch_with_borde_844_fu_2446.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read44 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read45() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read45 = ref_patch_with_borde_945_fu_2042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read45 = ref_patch_with_borde_845_fu_2442.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read45 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read46() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read46 = ref_patch_with_borde_946_fu_2038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read46 = ref_patch_with_borde_846_fu_2438.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read46 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read47() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read47 = ref_patch_with_borde_947_fu_2034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read47 = ref_patch_with_borde_847_fu_2434.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read47 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read48() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read48 = ref_patch_with_borde_948_fu_2030.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read48 = ref_patch_with_borde_848_fu_2430.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read48 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read49() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read49 = ref_patch_with_borde_949_fu_2026.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read49 = ref_patch_with_borde_849_fu_2426.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read49 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read5() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read5 = ref_patch_with_borde_905_fu_2202.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read5 = ref_patch_with_borde_805_fu_2602.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read5 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read50() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read50 = ref_patch_with_borde_950_fu_2022.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read50 = ref_patch_with_borde_850_fu_2422.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read50 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read51() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read51 = ref_patch_with_borde_951_fu_2018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read51 = ref_patch_with_borde_851_fu_2418.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read51 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read52() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read52 = ref_patch_with_borde_952_fu_2014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read52 = ref_patch_with_borde_852_fu_2414.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read52 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read53() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read53 = ref_patch_with_borde_953_fu_2010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read53 = ref_patch_with_borde_853_fu_2410.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read53 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read54() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read54 = ref_patch_with_borde_954_fu_2006.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read54 = ref_patch_with_borde_854_fu_2406.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read54 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read55() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read55 = ref_patch_with_borde_955_fu_2002.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read55 = ref_patch_with_borde_855_fu_2402.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read55 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read56() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read56 = ref_patch_with_borde_956_fu_1998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read56 = ref_patch_with_borde_856_fu_2398.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read56 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read57() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read57 = ref_patch_with_borde_957_fu_1994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read57 = ref_patch_with_borde_857_fu_2394.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read57 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read58() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read58 = ref_patch_with_borde_958_fu_1990.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read58 = ref_patch_with_borde_858_fu_2390.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read58 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read59() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read59 = ref_patch_with_borde_959_fu_1986.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read59 = ref_patch_with_borde_859_fu_2386.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read59 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read6() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read6 = ref_patch_with_borde_906_fu_2198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read6 = ref_patch_with_borde_806_fu_2598.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read6 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read60() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read60 = ref_patch_with_borde_960_fu_1982.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read60 = ref_patch_with_borde_860_fu_2382.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read60 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read61() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read61 = ref_patch_with_borde_961_fu_1978.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read61 = ref_patch_with_borde_861_fu_2378.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read61 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read62() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read62 = ref_patch_with_borde_962_fu_1974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read62 = ref_patch_with_borde_862_fu_2374.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read62 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read63() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read63 = ref_patch_with_borde_963_fu_1970.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read63 = ref_patch_with_borde_863_fu_2370.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read63 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read64() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read64 = ref_patch_with_borde_964_fu_1966.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read64 = ref_patch_with_borde_864_fu_2366.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read64 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read65() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read65 = ref_patch_with_borde_965_fu_1962.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read65 = ref_patch_with_borde_865_fu_2362.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read65 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read66() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read66 = ref_patch_with_borde_966_fu_1958.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read66 = ref_patch_with_borde_866_fu_2358.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read66 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read67() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read67 = ref_patch_with_borde_967_fu_1954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read67 = ref_patch_with_borde_867_fu_2354.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read67 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read68() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read68 = ref_patch_with_borde_968_fu_1950.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read68 = ref_patch_with_borde_868_fu_2350.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read68 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read69() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read69 = ref_patch_with_borde_969_fu_1946.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read69 = ref_patch_with_borde_869_fu_2346.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read69 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read7() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read7 = ref_patch_with_borde_907_fu_2194.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read7 = ref_patch_with_borde_807_fu_2594.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read7 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read70() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read70 = ref_patch_with_borde_970_fu_1942.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read70 = ref_patch_with_borde_870_fu_2342.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read70 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read71() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read71 = ref_patch_with_borde_971_fu_1938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read71 = ref_patch_with_borde_871_fu_2338.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read71 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read72() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read72 = ref_patch_with_borde_972_fu_1934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read72 = ref_patch_with_borde_872_fu_2334.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read72 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read73() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read73 = ref_patch_with_borde_973_fu_1930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read73 = ref_patch_with_borde_873_fu_2330.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read73 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read74() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read74 = ref_patch_with_borde_974_fu_1926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read74 = ref_patch_with_borde_874_fu_2326.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read74 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read75() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read75 = ref_patch_with_borde_975_fu_1922.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read75 = ref_patch_with_borde_875_fu_2322.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read75 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read76() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read76 = ref_patch_with_borde_976_fu_1918.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read76 = ref_patch_with_borde_876_fu_2318.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read76 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read77() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read77 = ref_patch_with_borde_977_fu_1914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read77 = ref_patch_with_borde_877_fu_2314.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read77 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read78() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read78 = ref_patch_with_borde_978_fu_1910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read78 = ref_patch_with_borde_878_fu_2310.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read78 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read79() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read79 = ref_patch_with_borde_979_fu_1906.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read79 = ref_patch_with_borde_879_fu_2306.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read79 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read8() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read8 = ref_patch_with_borde_908_fu_2190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read8 = ref_patch_with_borde_808_fu_2590.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read8 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read80() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read80 = ref_patch_with_borde_980_fu_1902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read80 = ref_patch_with_borde_880_fu_2302.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read80 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read81() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read81 = ref_patch_with_borde_981_fu_1898.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read81 = ref_patch_with_borde_881_fu_2298.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read81 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read82() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read82 = ref_patch_with_borde_982_fu_1894.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read82 = ref_patch_with_borde_882_fu_2294.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read82 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read83() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read83 = ref_patch_with_borde_983_fu_1890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read83 = ref_patch_with_borde_883_fu_2290.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read83 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read84() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read84 = ref_patch_with_borde_984_fu_1886.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read84 = ref_patch_with_borde_884_fu_2286.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read84 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read85() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read85 = ref_patch_with_borde_985_fu_1882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read85 = ref_patch_with_borde_885_fu_2282.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read85 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read86() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read86 = ref_patch_with_borde_986_fu_1878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read86 = ref_patch_with_borde_886_fu_2278.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read86 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read87() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read87 = ref_patch_with_borde_987_fu_1874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read87 = ref_patch_with_borde_887_fu_2274.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read87 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read88() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read88 = ref_patch_with_borde_988_fu_1870.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read88 = ref_patch_with_borde_888_fu_2270.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read88 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read89() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read89 = ref_patch_with_borde_989_fu_1866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read89 = ref_patch_with_borde_889_fu_2266.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read89 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read9() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read9 = ref_patch_with_borde_909_fu_2186.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read9 = ref_patch_with_borde_809_fu_2586.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read9 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read90() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read90 = ref_patch_with_borde_990_fu_1862.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read90 = ref_patch_with_borde_890_fu_2262.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read90 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read91() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read91 = ref_patch_with_borde_991_fu_1858.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read91 = ref_patch_with_borde_891_fu_2258.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read91 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read92() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read92 = ref_patch_with_borde_992_fu_1854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read92 = ref_patch_with_borde_892_fu_2254.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read92 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read93() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read93 = ref_patch_with_borde_993_fu_1850.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read93 = ref_patch_with_borde_893_fu_2250.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read93 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read94() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read94 = ref_patch_with_borde_994_fu_1846.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read94 = ref_patch_with_borde_894_fu_2246.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read94 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read95() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read95 = ref_patch_with_borde_995_fu_1842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read95 = ref_patch_with_borde_895_fu_2242.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read95 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read96() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read96 = ref_patch_with_borde_996_fu_1838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read96 = ref_patch_with_borde_896_fu_2238.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read96 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read97() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read97 = ref_patch_with_borde_997_fu_1834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read97 = ref_patch_with_borde_897_fu_2234.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read97 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read98() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read98 = ref_patch_with_borde_998_fu_1830.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read98 = ref_patch_with_borde_898_fu_2230.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read98 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_2835_p_read99() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_gauss_newton_optim_fu_2835_p_read99 = ref_patch_with_borde_999_fu_1826.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_gauss_newton_optim_fu_2835_p_read99 = ref_patch_with_borde_899_fu_2226.read();
    } else {
        grp_gauss_newton_optim_fu_2835_p_read99 = "XXXXXXXX";
    }
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_3017_ap_start() {
    grp_gauss_newton_optim_fu_3017_ap_start = grp_gauss_newton_optim_fu_3017_ap_start_reg.read();
}

void batch_align2D::thread_grp_gauss_newton_optim_fu_3199_ap_start() {
    grp_gauss_newton_optim_fu_3199_ap_start = grp_gauss_newton_optim_fu_3199_ap_start_reg.read();
}

void batch_align2D::thread_idx_urem_fu_9656_p3() {
    idx_urem_fu_9656_p3 = (!tmp_108_fu_9650_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_108_fu_9650_p2.read()[0].to_bool())? next_urem_fu_9644_p2.read(): ap_const_lv9_0);
}

void batch_align2D::thread_indvar5_fu_6007_p1() {
    indvar5_fu_6007_p1 = esl_zext<64,19>(indvar_reg_2757_pp0_iter1_reg.read());
}

void batch_align2D::thread_indvar_next1_fu_9618_p2() {
    indvar_next1_fu_9618_p2 = (!indvar1_reg_2769.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar1_reg_2769.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void batch_align2D::thread_indvar_next2_fu_115558_p2() {
    indvar_next2_fu_115558_p2 = (!indvar3_reg_2802.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar3_reg_2802.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next3_fu_118682_p2() {
    indvar_next3_fu_118682_p2 = (!indvar6_reg_2813.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar6_reg_2813.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D::thread_indvar_next4_fu_118736_p2() {
    indvar_next4_fu_118736_p2 = (!indvar8_reg_2824.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar8_reg_2824.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next_fu_6001_p2() {
    indvar_next_fu_6001_p2 = (!ap_phi_mux_indvar_phi_fu_2761_p4.read().is_01() || !ap_const_lv19_1.is_01())? sc_lv<19>(): (sc_biguint<19>(ap_phi_mux_indvar_phi_fu_2761_p4.read()) + sc_biguint<19>(ap_const_lv19_1));
}

void batch_align2D::thread_inv_out7_fu_5943_p4() {
    inv_out7_fu_5943_p4 = inv_out.read().range(63, 2);
}

void batch_align2D::thread_next_mul_fu_9624_p2() {
    next_mul_fu_9624_p2 = (!ap_const_lv19_290.is_01() || !phi_mul_reg_2780.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_290) + sc_biguint<19>(phi_mul_reg_2780.read()));
}

void batch_align2D::thread_next_urem_fu_9644_p2() {
    next_urem_fu_9644_p2 = (!phi_urem_reg_2791.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_urem_reg_2791.read()) + sc_biguint<9>(ap_const_lv9_1));
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_121620.read()))) {
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

void batch_align2D::thread_pos_r_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWVALID = ap_const_logic_1;
    } else {
        pos_r_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && 
         esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1))) {
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

void batch_align2D::thread_pos_r_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_125912.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read()))) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        pos_r_blk_n_AW = m_axi_pos_r_AWREADY.read();
    } else {
        pos_r_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_125912.read()))) {
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
         esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0) && 
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
         esl_seteq<1,1,1>(exitcond4_reg_118806.read(), ap_const_lv1_0))) {
        pyr_blk_n_R = m_axi_pyr_RVALID.read();
    } else {
        pyr_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_data_address0() {
    pyr_data_address0 =  (sc_lv<19>) (indvar5_fu_6007_p1.read());
}

void batch_align2D::thread_pyr_data_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_data_ce0 = ap_const_logic_1;
    } else {
        pyr_data_ce0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_pyr_data_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_118806_pp0_iter1_reg.read()))) {
        pyr_data_we0 = ap_const_logic_1;
    } else {
        pyr_data_we0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_tmp_107_fu_115574_p1() {
    tmp_107_fu_115574_p1 = indvar3_reg_2802.read().range(1-1, 0);
}

void batch_align2D::thread_tmp_108_fu_9650_p2() {
    tmp_108_fu_9650_p2 = (!next_urem_fu_9644_p2.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<1>(): (sc_biguint<9>(next_urem_fu_9644_p2.read()) < sc_biguint<9>(ap_const_lv9_64));
}

void batch_align2D::thread_tmp_109_fu_118742_p1() {
    tmp_109_fu_118742_p1 = indvar8_reg_2824.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_120_fu_5953_p1() {
    tmp_120_fu_5953_p1 = esl_zext<64,62>(inv_out7_fu_5943_p4.read());
}

void batch_align2D::thread_tmp_121_fu_5973_p1() {
    tmp_121_fu_5973_p1 = esl_zext<64,62>(cur_px_estimate_ptr5_fu_5963_p4.read());
}

void batch_align2D::thread_tmp_127_fu_118750_p9() {
    tmp_127_fu_118750_p9 = esl_zext<4,3>(tmp_109_fu_118742_p1.read());
}

void batch_align2D::thread_tmp_fu_9640_p1() {
    tmp_fu_9640_p1 = phi_urem_reg_2791.read().range(7-1, 0);
}

void batch_align2D::thread_transfer_pyr_read_read_fu_2632_p2() {
    transfer_pyr_read_read_fu_2632_p2 = transfer_pyr.read();
}

}

