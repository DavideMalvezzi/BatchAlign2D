// ==============================================================
// File generated on Sat Oct 26 12:54:51 CEST 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __batch_align2D_ama_addmuladd_7ns_3s_7s_7ns_7_1_1__HH__
#define __batch_align2D_ama_addmuladd_7ns_3s_7s_7ns_7_1_1__HH__
#include "simcore_ama_0.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int din3_WIDTH,
    int dout_WIDTH>
SC_MODULE(batch_align2D_ama_addmuladd_7ns_3s_7s_7ns_7_1_1) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_in< sc_dt::sc_lv<din3_WIDTH> >   din3;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    simcore_ama_0<ID, 1, din0_WIDTH, din1_WIDTH, din2_WIDTH, din3_WIDTH, dout_WIDTH> simcore_ama_0_U;

    SC_CTOR(batch_align2D_ama_addmuladd_7ns_3s_7s_7ns_7_1_1):  simcore_ama_0_U ("simcore_ama_0_U") {
        simcore_ama_0_U.din0(din0);
        simcore_ama_0_U.din1(din1);
        simcore_ama_0_U.din2(din2);
        simcore_ama_0_U.din3(din3);
        simcore_ama_0_U.dout(dout);

    }

};

#endif //
