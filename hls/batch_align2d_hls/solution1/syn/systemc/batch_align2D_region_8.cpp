#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_it_0_sum_i_1_2_cast_fu_16586_p1() {
    it_0_sum_i_1_2_cast_fu_16586_p1 = esl_sext<64,11>(it_0_sum_i_1_2_fu_16581_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_2_fu_16581_p2() {
    it_0_sum_i_1_2_fu_16581_p2 = (!p_sum10_i_1_reg_40649.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_1_reg_40649.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_1_3_cast_fu_16471_p1() {
    it_0_sum_i_1_3_cast_fu_16471_p1 = esl_sext<64,11>(it_0_sum_i_1_3_fu_16466_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_3_fu_16466_p2() {
    it_0_sum_i_1_3_fu_16466_p2 = (!tmp_166_1_fu_16392_p2.read().is_01() || !tmp_158_1_cast1_reg_40615.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_1_fu_16392_p2.read()) + sc_biguint<11>(tmp_158_1_cast1_reg_40615.read()));
}

void batch_align2D_region::thread_it_0_sum_i_1_4_cast_fu_16646_p1() {
    it_0_sum_i_1_4_cast_fu_16646_p1 = esl_sext<64,11>(it_0_sum_i_1_4_fu_16641_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_4_fu_16641_p2() {
    it_0_sum_i_1_4_fu_16641_p2 = (!it_0_sum_i_1_3_reg_40698.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_1_3_reg_40698.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_1_5_cast_fu_16696_p1() {
    it_0_sum_i_1_5_cast_fu_16696_p1 = esl_sext<64,11>(it_0_sum_i_1_5_fu_16691_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_5_fu_16691_p2() {
    it_0_sum_i_1_5_fu_16691_p2 = (!p_sum10_i_1_reg_40649.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_1_reg_40649.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_1_6_cast_fu_16731_p1() {
    it_0_sum_i_1_6_cast_fu_16731_p1 = esl_sext<64,11>(it_0_sum_i_1_6_fu_16726_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_6_fu_16726_p2() {
    it_0_sum_i_1_6_fu_16726_p2 = (!p_sum10_i_1_reg_40649.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_1_reg_40649.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_1_7_cast_fu_16756_p1() {
    it_0_sum_i_1_7_cast_fu_16756_p1 = esl_sext<64,11>(it_0_sum_i_1_7_fu_16751_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_7_fu_16751_p2() {
    it_0_sum_i_1_7_fu_16751_p2 = (!p_sum10_i_1_reg_40649.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_1_reg_40649.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_1_cast_fu_16481_p1() {
    it_0_sum_i_1_cast_fu_16481_p1 = esl_sext<64,11>(it_0_sum_i_1_fu_16476_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_fu_16476_p2() {
    it_0_sum_i_1_fu_16476_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_1_reg_40649.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_1_reg_40649.read()));
}

void batch_align2D_region::thread_it_0_sum_i_2_1_cast_fu_19708_p1() {
    it_0_sum_i_2_1_cast_fu_19708_p1 = esl_sext<64,11>(it_0_sum_i_2_1_fu_19703_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_1_fu_19703_p2() {
    it_0_sum_i_2_1_fu_19703_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_2_2_cast_fu_19753_p1() {
    it_0_sum_i_2_2_cast_fu_19753_p1 = esl_sext<64,11>(it_0_sum_i_2_2_fu_19748_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_2_fu_19748_p2() {
    it_0_sum_i_2_2_fu_19748_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_2_3_cast_fu_19638_p1() {
    it_0_sum_i_2_3_cast_fu_19638_p1 = esl_sext<64,11>(it_0_sum_i_2_3_fu_19633_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_3_fu_19633_p2() {
    it_0_sum_i_2_3_fu_19633_p2 = (!tmp_166_2_fu_19559_p2.read().is_01() || !tmp_158_2_cast1_reg_42283.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_2_fu_19559_p2.read()) + sc_biguint<11>(tmp_158_2_cast1_reg_42283.read()));
}

void batch_align2D_region::thread_it_0_sum_i_2_4_cast_fu_19813_p1() {
    it_0_sum_i_2_4_cast_fu_19813_p1 = esl_sext<64,11>(it_0_sum_i_2_4_fu_19808_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_4_fu_19808_p2() {
    it_0_sum_i_2_4_fu_19808_p2 = (!it_0_sum_i_2_3_reg_42366.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_2_3_reg_42366.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_2_5_cast_fu_19863_p1() {
    it_0_sum_i_2_5_cast_fu_19863_p1 = esl_sext<64,11>(it_0_sum_i_2_5_fu_19858_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_5_fu_19858_p2() {
    it_0_sum_i_2_5_fu_19858_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_2_6_cast_fu_19898_p1() {
    it_0_sum_i_2_6_cast_fu_19898_p1 = esl_sext<64,11>(it_0_sum_i_2_6_fu_19893_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_6_fu_19893_p2() {
    it_0_sum_i_2_6_fu_19893_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_2_7_cast_fu_19923_p1() {
    it_0_sum_i_2_7_cast_fu_19923_p1 = esl_sext<64,11>(it_0_sum_i_2_7_fu_19918_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_7_fu_19918_p2() {
    it_0_sum_i_2_7_fu_19918_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_2_cast_fu_19648_p1() {
    it_0_sum_i_2_cast_fu_19648_p1 = esl_sext<64,11>(it_0_sum_i_2_fu_19643_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_fu_19643_p2() {
    it_0_sum_i_2_fu_19643_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_2_reg_42317.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_2_reg_42317.read()));
}

void batch_align2D_region::thread_it_0_sum_i_3_1_cast_fu_22875_p1() {
    it_0_sum_i_3_1_cast_fu_22875_p1 = esl_sext<64,11>(it_0_sum_i_3_1_fu_22870_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_1_fu_22870_p2() {
    it_0_sum_i_3_1_fu_22870_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_3_2_cast_fu_22920_p1() {
    it_0_sum_i_3_2_cast_fu_22920_p1 = esl_sext<64,11>(it_0_sum_i_3_2_fu_22915_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_2_fu_22915_p2() {
    it_0_sum_i_3_2_fu_22915_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_3_3_cast_fu_22805_p1() {
    it_0_sum_i_3_3_cast_fu_22805_p1 = esl_sext<64,11>(it_0_sum_i_3_3_fu_22800_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_3_fu_22800_p2() {
    it_0_sum_i_3_3_fu_22800_p2 = (!tmp_166_3_fu_22726_p2.read().is_01() || !tmp_158_3_cast1_reg_43956.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_3_fu_22726_p2.read()) + sc_biguint<11>(tmp_158_3_cast1_reg_43956.read()));
}

void batch_align2D_region::thread_it_0_sum_i_3_4_cast_fu_22980_p1() {
    it_0_sum_i_3_4_cast_fu_22980_p1 = esl_sext<64,11>(it_0_sum_i_3_4_fu_22975_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_4_fu_22975_p2() {
    it_0_sum_i_3_4_fu_22975_p2 = (!it_0_sum_i_3_3_reg_44034.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_3_3_reg_44034.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_3_5_cast_fu_23030_p1() {
    it_0_sum_i_3_5_cast_fu_23030_p1 = esl_sext<64,11>(it_0_sum_i_3_5_fu_23025_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_5_fu_23025_p2() {
    it_0_sum_i_3_5_fu_23025_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_3_6_cast_fu_23065_p1() {
    it_0_sum_i_3_6_cast_fu_23065_p1 = esl_sext<64,11>(it_0_sum_i_3_6_fu_23060_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_6_fu_23060_p2() {
    it_0_sum_i_3_6_fu_23060_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_3_7_cast_fu_23090_p1() {
    it_0_sum_i_3_7_cast_fu_23090_p1 = esl_sext<64,11>(it_0_sum_i_3_7_fu_23085_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_7_fu_23085_p2() {
    it_0_sum_i_3_7_fu_23085_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_3_cast_fu_22815_p1() {
    it_0_sum_i_3_cast_fu_22815_p1 = esl_sext<64,11>(it_0_sum_i_3_fu_22810_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_fu_22810_p2() {
    it_0_sum_i_3_fu_22810_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_3_reg_43985.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_3_reg_43985.read()));
}

void batch_align2D_region::thread_it_0_sum_i_4_1_cast_fu_26042_p1() {
    it_0_sum_i_4_1_cast_fu_26042_p1 = esl_sext<64,11>(it_0_sum_i_4_1_fu_26037_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_1_fu_26037_p2() {
    it_0_sum_i_4_1_fu_26037_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_4_2_cast_fu_26087_p1() {
    it_0_sum_i_4_2_cast_fu_26087_p1 = esl_sext<64,11>(it_0_sum_i_4_2_fu_26082_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_2_fu_26082_p2() {
    it_0_sum_i_4_2_fu_26082_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_4_3_cast_fu_25972_p1() {
    it_0_sum_i_4_3_cast_fu_25972_p1 = esl_sext<64,11>(it_0_sum_i_4_3_fu_25967_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_3_fu_25967_p2() {
    it_0_sum_i_4_3_fu_25967_p2 = (!tmp_166_4_fu_25893_p2.read().is_01() || !tmp_158_4_cast1_reg_45619.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_4_fu_25893_p2.read()) + sc_biguint<11>(tmp_158_4_cast1_reg_45619.read()));
}

void batch_align2D_region::thread_it_0_sum_i_4_4_cast_fu_26147_p1() {
    it_0_sum_i_4_4_cast_fu_26147_p1 = esl_sext<64,11>(it_0_sum_i_4_4_fu_26142_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_4_fu_26142_p2() {
    it_0_sum_i_4_4_fu_26142_p2 = (!it_0_sum_i_4_3_reg_45702.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_4_3_reg_45702.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_4_5_cast_fu_26197_p1() {
    it_0_sum_i_4_5_cast_fu_26197_p1 = esl_sext<64,11>(it_0_sum_i_4_5_fu_26192_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_5_fu_26192_p2() {
    it_0_sum_i_4_5_fu_26192_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_4_6_cast_fu_26232_p1() {
    it_0_sum_i_4_6_cast_fu_26232_p1 = esl_sext<64,11>(it_0_sum_i_4_6_fu_26227_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_6_fu_26227_p2() {
    it_0_sum_i_4_6_fu_26227_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_4_7_cast_fu_26257_p1() {
    it_0_sum_i_4_7_cast_fu_26257_p1 = esl_sext<64,11>(it_0_sum_i_4_7_fu_26252_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_7_fu_26252_p2() {
    it_0_sum_i_4_7_fu_26252_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_4_cast_fu_25982_p1() {
    it_0_sum_i_4_cast_fu_25982_p1 = esl_sext<64,11>(it_0_sum_i_4_fu_25977_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_fu_25977_p2() {
    it_0_sum_i_4_fu_25977_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_4_reg_45653.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_4_reg_45653.read()));
}

void batch_align2D_region::thread_it_0_sum_i_5_1_cast_fu_29210_p1() {
    it_0_sum_i_5_1_cast_fu_29210_p1 = esl_sext<64,11>(it_0_sum_i_5_1_fu_29205_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_1_fu_29205_p2() {
    it_0_sum_i_5_1_fu_29205_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_5_2_cast_fu_29255_p1() {
    it_0_sum_i_5_2_cast_fu_29255_p1 = esl_sext<64,11>(it_0_sum_i_5_2_fu_29250_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_2_fu_29250_p2() {
    it_0_sum_i_5_2_fu_29250_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_5_3_cast_fu_29140_p1() {
    it_0_sum_i_5_3_cast_fu_29140_p1 = esl_sext<64,11>(it_0_sum_i_5_3_fu_29135_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_3_fu_29135_p2() {
    it_0_sum_i_5_3_fu_29135_p2 = (!tmp_166_5_fu_29061_p2.read().is_01() || !tmp_158_5_cast1_reg_47281.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_5_fu_29061_p2.read()) + sc_biguint<11>(tmp_158_5_cast1_reg_47281.read()));
}

void batch_align2D_region::thread_it_0_sum_i_5_4_cast_fu_29315_p1() {
    it_0_sum_i_5_4_cast_fu_29315_p1 = esl_sext<64,11>(it_0_sum_i_5_4_fu_29310_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_4_fu_29310_p2() {
    it_0_sum_i_5_4_fu_29310_p2 = (!it_0_sum_i_5_3_reg_47364.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_5_3_reg_47364.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_5_5_cast_fu_29365_p1() {
    it_0_sum_i_5_5_cast_fu_29365_p1 = esl_sext<64,11>(it_0_sum_i_5_5_fu_29360_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_5_fu_29360_p2() {
    it_0_sum_i_5_5_fu_29360_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_5_6_cast_fu_29400_p1() {
    it_0_sum_i_5_6_cast_fu_29400_p1 = esl_sext<64,11>(it_0_sum_i_5_6_fu_29395_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_6_fu_29395_p2() {
    it_0_sum_i_5_6_fu_29395_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_5_7_cast_fu_29425_p1() {
    it_0_sum_i_5_7_cast_fu_29425_p1 = esl_sext<64,11>(it_0_sum_i_5_7_fu_29420_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_7_fu_29420_p2() {
    it_0_sum_i_5_7_fu_29420_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_5_cast_fu_29150_p1() {
    it_0_sum_i_5_cast_fu_29150_p1 = esl_sext<64,11>(it_0_sum_i_5_fu_29145_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_fu_29145_p2() {
    it_0_sum_i_5_fu_29145_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_5_reg_47315.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_5_reg_47315.read()));
}

void batch_align2D_region::thread_it_0_sum_i_6_1_cast_fu_32377_p1() {
    it_0_sum_i_6_1_cast_fu_32377_p1 = esl_sext<64,11>(it_0_sum_i_6_1_fu_32372_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_1_fu_32372_p2() {
    it_0_sum_i_6_1_fu_32372_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_6_2_cast_fu_32422_p1() {
    it_0_sum_i_6_2_cast_fu_32422_p1 = esl_sext<64,11>(it_0_sum_i_6_2_fu_32417_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_2_fu_32417_p2() {
    it_0_sum_i_6_2_fu_32417_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_6_3_cast_fu_32307_p1() {
    it_0_sum_i_6_3_cast_fu_32307_p1 = esl_sext<64,11>(it_0_sum_i_6_3_fu_32302_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_3_fu_32302_p2() {
    it_0_sum_i_6_3_fu_32302_p2 = (!tmp_166_6_fu_32228_p2.read().is_01() || !tmp_158_6_cast1_reg_48949.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_6_fu_32228_p2.read()) + sc_biguint<11>(tmp_158_6_cast1_reg_48949.read()));
}

void batch_align2D_region::thread_it_0_sum_i_6_4_cast_fu_32482_p1() {
    it_0_sum_i_6_4_cast_fu_32482_p1 = esl_sext<64,11>(it_0_sum_i_6_4_fu_32477_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_4_fu_32477_p2() {
    it_0_sum_i_6_4_fu_32477_p2 = (!it_0_sum_i_6_3_reg_49032.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_6_3_reg_49032.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_6_5_cast_fu_32532_p1() {
    it_0_sum_i_6_5_cast_fu_32532_p1 = esl_sext<64,11>(it_0_sum_i_6_5_fu_32527_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_5_fu_32527_p2() {
    it_0_sum_i_6_5_fu_32527_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_6_6_cast_fu_32567_p1() {
    it_0_sum_i_6_6_cast_fu_32567_p1 = esl_sext<64,11>(it_0_sum_i_6_6_fu_32562_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_6_fu_32562_p2() {
    it_0_sum_i_6_6_fu_32562_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_6_7_cast_fu_32592_p1() {
    it_0_sum_i_6_7_cast_fu_32592_p1 = esl_sext<64,11>(it_0_sum_i_6_7_fu_32587_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_7_fu_32587_p2() {
    it_0_sum_i_6_7_fu_32587_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_6_cast_fu_32317_p1() {
    it_0_sum_i_6_cast_fu_32317_p1 = esl_sext<64,11>(it_0_sum_i_6_fu_32312_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_fu_32312_p2() {
    it_0_sum_i_6_fu_32312_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_6_reg_48983.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_6_reg_48983.read()));
}

void batch_align2D_region::thread_it_0_sum_i_7_1_cast_fu_35544_p1() {
    it_0_sum_i_7_1_cast_fu_35544_p1 = esl_sext<64,11>(it_0_sum_i_7_1_fu_35539_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_1_fu_35539_p2() {
    it_0_sum_i_7_1_fu_35539_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_2.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_2));
}

void batch_align2D_region::thread_it_0_sum_i_7_2_cast_fu_35589_p1() {
    it_0_sum_i_7_2_cast_fu_35589_p1 = esl_sext<64,11>(it_0_sum_i_7_2_fu_35584_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_2_fu_35584_p2() {
    it_0_sum_i_7_2_fu_35584_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_3.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_3));
}

void batch_align2D_region::thread_it_0_sum_i_7_3_cast_fu_35474_p1() {
    it_0_sum_i_7_3_cast_fu_35474_p1 = esl_sext<64,11>(it_0_sum_i_7_3_fu_35469_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_3_fu_35469_p2() {
    it_0_sum_i_7_3_fu_35469_p2 = (!tmp_166_7_fu_35395_p2.read().is_01() || !tmp_158_7_cast1_reg_50617.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_166_7_fu_35395_p2.read()) + sc_biguint<11>(tmp_158_7_cast1_reg_50617.read()));
}

void batch_align2D_region::thread_it_0_sum_i_7_4_cast_fu_35649_p1() {
    it_0_sum_i_7_4_cast_fu_35649_p1 = esl_sext<64,11>(it_0_sum_i_7_4_fu_35644_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_4_fu_35644_p2() {
    it_0_sum_i_7_4_fu_35644_p2 = (!it_0_sum_i_7_3_reg_50700.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_bigint<11>(it_0_sum_i_7_3_reg_50700.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void batch_align2D_region::thread_it_0_sum_i_7_5_cast_fu_35699_p1() {
    it_0_sum_i_7_5_cast_fu_35699_p1 = esl_sext<64,11>(it_0_sum_i_7_5_fu_35694_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_5_fu_35694_p2() {
    it_0_sum_i_7_5_fu_35694_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_6.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_6));
}

void batch_align2D_region::thread_it_0_sum_i_7_6_cast_fu_35734_p1() {
    it_0_sum_i_7_6_cast_fu_35734_p1 = esl_sext<64,11>(it_0_sum_i_7_6_fu_35729_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_6_fu_35729_p2() {
    it_0_sum_i_7_6_fu_35729_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_7.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_7));
}

void batch_align2D_region::thread_it_0_sum_i_7_7_cast_fu_35759_p1() {
    it_0_sum_i_7_7_cast_fu_35759_p1 = esl_sext<64,11>(it_0_sum_i_7_7_fu_35754_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_7_fu_35754_p2() {
    it_0_sum_i_7_7_fu_35754_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_8.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_8));
}

void batch_align2D_region::thread_it_0_sum_i_7_cast_fu_35484_p1() {
    it_0_sum_i_7_cast_fu_35484_p1 = esl_sext<64,11>(it_0_sum_i_7_fu_35479_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_fu_35479_p2() {
    it_0_sum_i_7_fu_35479_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_7_reg_50651.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_7_reg_50651.read()));
}

void batch_align2D_region::thread_it_0_sum_i_cast_fu_13314_p1() {
    it_0_sum_i_cast_fu_13314_p1 = esl_sext<64,11>(it_0_sum_i_fu_13309_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_fu_13309_p2() {
    it_0_sum_i_fu_13309_p2 = (!ap_const_lv11_1.is_01() || !p_sum10_i_reg_38981.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_bigint<11>(p_sum10_i_reg_38981.read()));
}

void batch_align2D_region::thread_iter_1_fu_16235_p2() {
    iter_1_fu_16235_p2 = (!iter_0_i_1_reg_7721.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_1_reg_7721.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_2_fu_19402_p2() {
    iter_2_fu_19402_p2 = (!iter_0_i_2_reg_8064.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_2_reg_8064.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_3_fu_22569_p2() {
    iter_3_fu_22569_p2 = (!iter_0_i_3_reg_8407.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_3_reg_8407.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_4_fu_25736_p2() {
    iter_4_fu_25736_p2 = (!iter_0_i_4_reg_8751.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_4_reg_8751.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_5_fu_28904_p2() {
    iter_5_fu_28904_p2 = (!iter_0_i_5_reg_9095.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_5_reg_9095.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_6_fu_32071_p2() {
    iter_6_fu_32071_p2 = (!iter_0_i_6_reg_9439.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_6_reg_9439.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_7_fu_35238_p2() {
    iter_7_fu_35238_p2 = (!iter_0_i_7_reg_9782.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_7_reg_9782.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_iter_fu_13068_p2() {
    iter_fu_13068_p2 = (!iter_0_i_reg_7378.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(iter_0_i_reg_7378.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_j_0_1_fu_15269_p2() {
    j_0_1_fu_15269_p2 = (!j_0_i_i_0_1_reg_7518.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_0_1_reg_7518.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_0_2_fu_15294_p2() {
    j_0_2_fu_15294_p2 = (!j_0_i_i_0_2_reg_7554.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_0_2_reg_7554.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_1_fu_18436_p2() {
    j_1_1_fu_18436_p2 = (!j_0_i_i_1_1_reg_7861.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_1_reg_7861.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_2_fu_18461_p2() {
    j_1_2_fu_18461_p2 = (!j_0_i_i_1_2_reg_7897.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_2_reg_7897.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_fu_18411_p2() {
    j_1_fu_18411_p2 = (!j_0_i_i_1_reg_7825.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_reg_7825.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_1_fu_21603_p2() {
    j_2_1_fu_21603_p2 = (!j_0_i_i_2_1_reg_8204.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_1_reg_8204.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_2_fu_21628_p2() {
    j_2_2_fu_21628_p2 = (!j_0_i_i_2_2_reg_8240.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_2_reg_8240.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_fu_21578_p2() {
    j_2_fu_21578_p2 = (!j_0_i_i_2_reg_8168.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_reg_8168.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_1_fu_24770_p2() {
    j_3_1_fu_24770_p2 = (!j_0_i_i_3_1_reg_8547.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_1_reg_8547.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_2_fu_24795_p2() {
    j_3_2_fu_24795_p2 = (!j_0_i_i_3_2_reg_8583.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_2_reg_8583.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_fu_24745_p2() {
    j_3_fu_24745_p2 = (!j_0_i_i_3_reg_8511.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_reg_8511.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_1_fu_27938_p2() {
    j_4_1_fu_27938_p2 = (!j_0_i_i_4_1_reg_8891.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_1_reg_8891.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_2_fu_27963_p2() {
    j_4_2_fu_27963_p2 = (!j_0_i_i_4_2_reg_8927.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_2_reg_8927.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_fu_27913_p2() {
    j_4_fu_27913_p2 = (!j_0_i_i_4_reg_8855.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_reg_8855.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_1_fu_31105_p2() {
    j_5_1_fu_31105_p2 = (!j_0_i_i_5_1_reg_9235.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_1_reg_9235.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_2_fu_31130_p2() {
    j_5_2_fu_31130_p2 = (!j_0_i_i_5_2_reg_9271.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_2_reg_9271.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_fu_31080_p2() {
    j_5_fu_31080_p2 = (!j_0_i_i_5_reg_9199.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_reg_9199.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_1_fu_34272_p2() {
    j_6_1_fu_34272_p2 = (!j_0_i_i_6_1_reg_9579.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_1_reg_9579.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_2_fu_34297_p2() {
    j_6_2_fu_34297_p2 = (!j_0_i_i_6_2_reg_9615.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_2_reg_9615.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_fu_34247_p2() {
    j_6_fu_34247_p2 = (!j_0_i_i_6_reg_9543.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_reg_9543.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_1_fu_37439_p2() {
    j_7_1_fu_37439_p2 = (!j_0_i_i_7_1_reg_9922.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_1_reg_9922.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_2_fu_37464_p2() {
    j_7_2_fu_37464_p2 = (!j_0_i_i_7_2_reg_9958.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_2_reg_9958.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_fu_37414_p2() {
    j_7_fu_37414_p2 = (!j_0_i_i_7_reg_9886.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_reg_9886.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_fu_15244_p2() {
    j_fu_15244_p2 = (!j_0_i_i_reg_7482.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_reg_7482.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARADDR() {
    m_axi_my_debug_array_ARADDR = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARBURST() {
    m_axi_my_debug_array_ARBURST = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARCACHE() {
    m_axi_my_debug_array_ARCACHE = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARID() {
    m_axi_my_debug_array_ARID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARLEN() {
    m_axi_my_debug_array_ARLEN = ap_const_lv8_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARLOCK() {
    m_axi_my_debug_array_ARLOCK = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARPROT() {
    m_axi_my_debug_array_ARPROT = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARQOS() {
    m_axi_my_debug_array_ARQOS = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARREGION() {
    m_axi_my_debug_array_ARREGION = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARSIZE() {
    m_axi_my_debug_array_ARSIZE = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARUSER() {
    m_axi_my_debug_array_ARUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_ARVALID() {
    m_axi_my_debug_array_ARVALID = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWADDR() {
    m_axi_my_debug_array_AWADDR = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWBURST() {
    m_axi_my_debug_array_AWBURST = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWCACHE() {
    m_axi_my_debug_array_AWCACHE = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWID() {
    m_axi_my_debug_array_AWID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWLEN() {
    m_axi_my_debug_array_AWLEN = ap_const_lv8_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWLOCK() {
    m_axi_my_debug_array_AWLOCK = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWPROT() {
    m_axi_my_debug_array_AWPROT = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWQOS() {
    m_axi_my_debug_array_AWQOS = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWREGION() {
    m_axi_my_debug_array_AWREGION = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWSIZE() {
    m_axi_my_debug_array_AWSIZE = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWUSER() {
    m_axi_my_debug_array_AWUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_AWVALID() {
    m_axi_my_debug_array_AWVALID = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_BREADY() {
    m_axi_my_debug_array_BREADY = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_RREADY() {
    m_axi_my_debug_array_RREADY = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WDATA() {
    m_axi_my_debug_array_WDATA = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WID() {
    m_axi_my_debug_array_WID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WLAST() {
    m_axi_my_debug_array_WLAST = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WSTRB() {
    m_axi_my_debug_array_WSTRB = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WUSER() {
    m_axi_my_debug_array_WUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_array_WVALID() {
    m_axi_my_debug_array_WVALID = ap_const_logic_0;
}

void batch_align2D_region::thread_my_converged_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        my_converged_ap_vld = ap_const_logic_1;
    } else {
        my_converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_cur_px_estimate_p_fu_11783_p4() {
    my_cur_px_estimate_p_fu_11783_p4 = my_cur_px_estimate_ptr.read().range(31, 2);
}

void batch_align2D_region::thread_my_debug_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2132.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_debug_AWREADY.read()))) {
        my_debug_AWVALID = ap_const_logic_1;
    } else {
        my_debug_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_debug_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2143.read()) && 
         esl_seteq<1,1,1>(my_debug_BVALID.read(), ap_const_logic_1))) {
        my_debug_BREADY = ap_const_logic_1;
    } else {
        my_debug_BREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_debug_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp21_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_51325.read()) && 
         esl_seteq<1,1,1>(ap_block_pp21_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_debug_WREADY.read()))) {
        my_debug_WVALID = ap_const_logic_1;
    } else {
        my_debug_WVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_debug_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2132.read())) {
        my_debug_blk_n_AW = m_axi_my_debug_AWREADY.read();
    } else {
        my_debug_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_debug_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2143.read())) {
        my_debug_blk_n_B = m_axi_my_debug_BVALID.read();
    } else {
        my_debug_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_debug_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp21_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_51325.read()))) {
        my_debug_blk_n_W = m_axi_my_debug_WREADY.read();
    } else {
        my_debug_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_inv_out9_fu_11763_p4() {
    my_inv_out9_fu_11763_p4 = my_inv_out.read().range(31, 2);
}

void batch_align2D_region::thread_my_patches_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_patches_ARREADY.read()))) {
        my_patches_ARVALID = ap_const_logic_1;
    } else {
        my_patches_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_patches_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_37889.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        my_patches_RREADY = ap_const_logic_1;
    } else {
        my_patches_RREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_patches_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        my_patches_blk_n_AR = m_axi_my_patches_ARREADY.read();
    } else {
        my_patches_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_patches_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond2_reg_37889.read(), ap_const_lv1_0))) {
        my_patches_blk_n_R = m_axi_my_patches_RVALID.read();
    } else {
        my_patches_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_ARREADY.read()))) {
        my_pos_ARVALID = ap_const_logic_1;
    } else {
        my_pos_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2122.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_AWREADY.read()))) {
        my_pos_AWVALID = ap_const_logic_1;
    } else {
        my_pos_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2136.read()) && 
         esl_seteq<1,1,1>(my_pos_BVALID.read(), ap_const_logic_1))) {
        my_pos_BREADY = ap_const_logic_1;
    } else {
        my_pos_BREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        my_pos_RREADY = ap_const_logic_1;
    } else {
        my_pos_RREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp20_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_51311.read()) && 
         esl_seteq<1,1,1>(ap_block_pp20_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_WREADY.read()))) {
        my_pos_WVALID = ap_const_logic_1;
    } else {
        my_pos_WVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        my_pos_blk_n_AR = m_axi_my_pos_ARREADY.read();
    } else {
        my_pos_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2122.read())) {
        my_pos_blk_n_AW = m_axi_my_pos_AWREADY.read();
    } else {
        my_pos_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2136.read())) {
        my_pos_blk_n_B = m_axi_my_pos_BVALID.read();
    } else {
        my_pos_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        my_pos_blk_n_R = m_axi_my_pos_RVALID.read();
    } else {
        my_pos_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp20_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_51311.read()))) {
        my_pos_blk_n_W = m_axi_my_pos_WREADY.read();
    } else {
        my_pos_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_region_data_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_region_data_ARREADY.read()))) {
        my_region_data_ARVALID = ap_const_logic_1;
    } else {
        my_region_data_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_region_data_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        my_region_data_RREADY = ap_const_logic_1;
    } else {
        my_region_data_RREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_region_data_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        my_region_data_blk_n_AR = m_axi_my_region_data_ARREADY.read();
    } else {
        my_region_data_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_region_data_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        my_region_data_blk_n_R = m_axi_my_region_data_RVALID.read();
    } else {
        my_region_data_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_region_fcoord_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_region_fcoord_ARREADY.read()))) {
        my_region_fcoord_ARVALID = ap_const_logic_1;
    } else {
        my_region_fcoord_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_region_fcoord_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        my_region_fcoord_RREADY = ap_const_logic_1;
    } else {
        my_region_fcoord_RREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_region_fcoord_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        my_region_fcoord_blk_n_AR = m_axi_my_region_fcoord_ARREADY.read();
    } else {
        my_region_fcoord_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_region_fcoord_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        my_region_fcoord_blk_n_R = m_axi_my_region_fcoord_RVALID.read();
    } else {
        my_region_fcoord_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_next_mul_fu_12004_p2() {
    next_mul_fu_12004_p2 = (!phi_mul_reg_7241.read().is_01() || !ap_const_lv21_51F.is_01())? sc_lv<21>(): (sc_biguint<21>(phi_mul_reg_7241.read()) + sc_biguint<21>(ap_const_lv21_51F));
}

void batch_align2D_region::thread_next_urem_fu_12032_p2() {
    next_urem_fu_12032_p2 = (!phi_urem_reg_7252.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(phi_urem_reg_7252.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void batch_align2D_region::thread_or_cond14_i_1_fu_16253_p2() {
    or_cond14_i_1_fu_16253_p2 = (tmp134_fu_16247_p2.read() | tmp133_fu_16241_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_2_fu_19420_p2() {
    or_cond14_i_2_fu_19420_p2 = (tmp157_fu_19414_p2.read() | tmp156_fu_19408_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_3_fu_22587_p2() {
    or_cond14_i_3_fu_22587_p2 = (tmp180_fu_22581_p2.read() | tmp179_fu_22575_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_4_fu_25754_p2() {
    or_cond14_i_4_fu_25754_p2 = (tmp203_fu_25748_p2.read() | tmp202_fu_25742_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_5_fu_28922_p2() {
    or_cond14_i_5_fu_28922_p2 = (tmp226_fu_28916_p2.read() | tmp225_fu_28910_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_6_fu_32089_p2() {
    or_cond14_i_6_fu_32089_p2 = (tmp249_fu_32083_p2.read() | tmp248_fu_32077_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_7_fu_35256_p2() {
    or_cond14_i_7_fu_35256_p2 = (tmp272_fu_35250_p2.read() | tmp271_fu_35244_p2.read());
}

void batch_align2D_region::thread_or_cond14_i_fu_13086_p2() {
    or_cond14_i_fu_13086_p2 = (tmp7_fu_13080_p2.read() | tmp6_fu_13074_p2.read());
}

void batch_align2D_region::thread_p_Val2_10_fu_16259_p1() {
    p_Val2_10_fu_16259_p1 = x_assign_8_reg_7701.read();
}

void batch_align2D_region::thread_p_Val2_11_fu_16295_p1() {
    p_Val2_11_fu_16295_p1 = x_assign_7_reg_7711.read();
}

void batch_align2D_region::thread_p_Val2_12_fu_19426_p1() {
    p_Val2_12_fu_19426_p1 = x_assign_s_reg_8044.read();
}

void batch_align2D_region::thread_p_Val2_13_fu_19462_p1() {
    p_Val2_13_fu_19462_p1 = x_assign_9_reg_8054.read();
}

void batch_align2D_region::thread_p_Val2_14_fu_22593_p1() {
    p_Val2_14_fu_22593_p1 = x_assign_1_reg_8387.read();
}

void batch_align2D_region::thread_p_Val2_15_fu_22629_p1() {
    p_Val2_15_fu_22629_p1 = x_assign_2_reg_8397.read();
}

void batch_align2D_region::thread_p_Val2_16_fu_25760_p1() {
    p_Val2_16_fu_25760_p1 = x_assign_3_reg_8731.read();
}

void batch_align2D_region::thread_p_Val2_17_fu_25796_p1() {
    p_Val2_17_fu_25796_p1 = x_assign_4_reg_8741.read();
}

void batch_align2D_region::thread_p_Val2_18_fu_28928_p1() {
    p_Val2_18_fu_28928_p1 = x_assign_5_reg_9075.read();
}

void batch_align2D_region::thread_p_Val2_19_fu_28964_p1() {
    p_Val2_19_fu_28964_p1 = x_assign_10_reg_9085.read();
}

void batch_align2D_region::thread_p_Val2_20_fu_32095_p1() {
    p_Val2_20_fu_32095_p1 = x_assign_11_reg_9419.read();
}

void batch_align2D_region::thread_p_Val2_21_fu_32131_p1() {
    p_Val2_21_fu_32131_p1 = x_assign_12_reg_9429.read();
}

void batch_align2D_region::thread_p_Val2_22_fu_35262_p1() {
    p_Val2_22_fu_35262_p1 = x_assign_13_reg_9762.read();
}

void batch_align2D_region::thread_p_Val2_23_fu_35298_p1() {
    p_Val2_23_fu_35298_p1 = x_assign_14_reg_9772.read();
}

void batch_align2D_region::thread_p_Val2_9_fu_13128_p1() {
    p_Val2_9_fu_13128_p1 = x_assign_reg_7368.read();
}

void batch_align2D_region::thread_p_Val2_s_fu_13092_p1() {
    p_Val2_s_fu_13092_p1 = x_assign_6_reg_7358.read();
}

void batch_align2D_region::thread_p_shl10_1_cast_fu_16420_p1() {
    p_shl10_1_cast_fu_16420_p1 = esl_zext<7,4>(tmp_1405_fu_16414_p2.read());
}

void batch_align2D_region::thread_p_shl10_2_cast_fu_19587_p1() {
    p_shl10_2_cast_fu_19587_p1 = esl_zext<7,4>(tmp_1446_fu_19581_p2.read());
}

void batch_align2D_region::thread_p_shl10_3_cast_fu_22754_p1() {
    p_shl10_3_cast_fu_22754_p1 = esl_zext<7,4>(tmp_1457_fu_22748_p2.read());
}

void batch_align2D_region::thread_p_shl10_4_cast_fu_25921_p1() {
    p_shl10_4_cast_fu_25921_p1 = esl_zext<7,4>(tmp_1468_fu_25915_p2.read());
}

void batch_align2D_region::thread_p_shl10_5_cast_fu_29089_p1() {
    p_shl10_5_cast_fu_29089_p1 = esl_zext<7,4>(tmp_1479_fu_29083_p2.read());
}

void batch_align2D_region::thread_p_shl10_6_cast_fu_32256_p1() {
    p_shl10_6_cast_fu_32256_p1 = esl_zext<7,4>(tmp_1490_fu_32250_p2.read());
}

void batch_align2D_region::thread_p_shl10_7_cast_fu_35423_p1() {
    p_shl10_7_cast_fu_35423_p1 = esl_zext<7,4>(tmp_1501_fu_35417_p2.read());
}

void batch_align2D_region::thread_p_shl1_cast_fu_13253_p1() {
    p_shl1_cast_fu_13253_p1 = esl_zext<7,4>(tmp_1391_fu_13247_p2.read());
}

void batch_align2D_region::thread_p_shl8_1_cast_fu_15379_p1() {
    p_shl8_1_cast_fu_15379_p1 = esl_zext<7,4>(p_shl8_1_fu_15371_p3.read());
}

void batch_align2D_region::thread_p_shl8_1_fu_15371_p3() {
    p_shl8_1_fu_15371_p3 = esl_concat<3,1>(tmp_1382_fu_15349_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_2_cast_fu_18546_p1() {
    p_shl8_2_cast_fu_18546_p1 = esl_zext<7,4>(p_shl8_2_fu_18538_p3.read());
}

void batch_align2D_region::thread_p_shl8_2_fu_18538_p3() {
    p_shl8_2_fu_18538_p3 = esl_concat<3,1>(tmp_1384_fu_18516_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_3_cast_fu_21713_p1() {
    p_shl8_3_cast_fu_21713_p1 = esl_zext<7,4>(p_shl8_3_fu_21705_p3.read());
}

void batch_align2D_region::thread_p_shl8_3_fu_21705_p3() {
    p_shl8_3_fu_21705_p3 = esl_concat<3,1>(tmp_1385_fu_21683_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_4_cast_fu_24874_p1() {
    p_shl8_4_cast_fu_24874_p1 = esl_zext<7,4>(p_shl8_4_fu_24866_p3.read());
}

void batch_align2D_region::thread_p_shl8_4_fu_24866_p3() {
    p_shl8_4_fu_24866_p3 = esl_concat<3,1>(tmp_1386_fu_24844_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_5_cast_fu_28042_p1() {
    p_shl8_5_cast_fu_28042_p1 = esl_zext<7,4>(p_shl8_5_fu_28034_p3.read());
}

void batch_align2D_region::thread_p_shl8_5_fu_28034_p3() {
    p_shl8_5_fu_28034_p3 = esl_concat<3,1>(tmp_1390_fu_28012_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_6_cast_fu_31209_p1() {
    p_shl8_6_cast_fu_31209_p1 = esl_zext<7,4>(p_shl8_6_fu_31201_p3.read());
}

void batch_align2D_region::thread_p_shl8_6_fu_31201_p3() {
    p_shl8_6_fu_31201_p3 = esl_concat<3,1>(tmp_1394_fu_31179_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_7_cast_fu_34382_p1() {
    p_shl8_7_cast_fu_34382_p1 = esl_zext<7,4>(p_shl8_7_fu_34374_p3.read());
}

void batch_align2D_region::thread_p_shl8_7_fu_34374_p3() {
    p_shl8_7_fu_34374_p3 = esl_concat<3,1>(tmp_1398_fu_34352_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_cast_fu_12212_p1() {
    p_shl8_cast_fu_12212_p1 = esl_zext<7,4>(p_shl8_fu_12204_p3.read());
}

void batch_align2D_region::thread_p_shl8_fu_12204_p3() {
    p_shl8_fu_12204_p3 = esl_concat<3,1>(tmp_1378_fu_12182_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl9_1_cast_fu_16410_p1() {
    p_shl9_1_cast_fu_16410_p1 = esl_zext<7,6>(p_shl9_1_fu_16402_p3.read());
}

void batch_align2D_region::thread_p_shl9_1_fu_16402_p3() {
    p_shl9_1_fu_16402_p3 = esl_concat<3,3>(tmp_1404_fu_16398_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_2_cast_fu_19577_p1() {
    p_shl9_2_cast_fu_19577_p1 = esl_zext<7,6>(p_shl9_2_fu_19569_p3.read());
}

void batch_align2D_region::thread_p_shl9_2_fu_19569_p3() {
    p_shl9_2_fu_19569_p3 = esl_concat<3,3>(tmp_1445_fu_19565_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_3_cast_fu_22744_p1() {
    p_shl9_3_cast_fu_22744_p1 = esl_zext<7,6>(p_shl9_3_fu_22736_p3.read());
}

void batch_align2D_region::thread_p_shl9_3_fu_22736_p3() {
    p_shl9_3_fu_22736_p3 = esl_concat<3,3>(tmp_1456_fu_22732_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_4_cast_fu_25911_p1() {
    p_shl9_4_cast_fu_25911_p1 = esl_zext<7,6>(p_shl9_4_fu_25903_p3.read());
}

void batch_align2D_region::thread_p_shl9_4_fu_25903_p3() {
    p_shl9_4_fu_25903_p3 = esl_concat<3,3>(tmp_1467_fu_25899_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_5_cast_fu_29079_p1() {
    p_shl9_5_cast_fu_29079_p1 = esl_zext<7,6>(p_shl9_5_fu_29071_p3.read());
}

void batch_align2D_region::thread_p_shl9_5_fu_29071_p3() {
    p_shl9_5_fu_29071_p3 = esl_concat<3,3>(tmp_1478_fu_29067_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_6_cast_fu_32246_p1() {
    p_shl9_6_cast_fu_32246_p1 = esl_zext<7,6>(p_shl9_6_fu_32238_p3.read());
}

void batch_align2D_region::thread_p_shl9_6_fu_32238_p3() {
    p_shl9_6_fu_32238_p3 = esl_concat<3,3>(tmp_1489_fu_32234_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_7_cast_fu_35413_p1() {
    p_shl9_7_cast_fu_35413_p1 = esl_zext<7,6>(p_shl9_7_fu_35405_p3.read());
}

void batch_align2D_region::thread_p_shl9_7_fu_35405_p3() {
    p_shl9_7_fu_35405_p3 = esl_concat<3,3>(tmp_1500_fu_35401_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_cast_fu_13243_p1() {
    p_shl9_cast_fu_13243_p1 = esl_zext<7,6>(p_shl9_fu_13235_p3.read());
}

void batch_align2D_region::thread_p_shl9_fu_13235_p3() {
    p_shl9_fu_13235_p3 = esl_concat<3,3>(tmp_1389_fu_13231_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_1_cast_fu_15367_p1() {
    p_shl_1_cast_fu_15367_p1 = esl_zext<7,6>(p_shl_1_fu_15359_p3.read());
}

void batch_align2D_region::thread_p_shl_1_fu_15359_p3() {
    p_shl_1_fu_15359_p3 = esl_concat<3,3>(tmp_1382_fu_15349_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_2_cast_fu_18534_p1() {
    p_shl_2_cast_fu_18534_p1 = esl_zext<7,6>(p_shl_2_fu_18526_p3.read());
}

void batch_align2D_region::thread_p_shl_2_fu_18526_p3() {
    p_shl_2_fu_18526_p3 = esl_concat<3,3>(tmp_1384_fu_18516_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_3_cast_fu_21701_p1() {
    p_shl_3_cast_fu_21701_p1 = esl_zext<7,6>(p_shl_3_fu_21693_p3.read());
}

void batch_align2D_region::thread_p_shl_3_fu_21693_p3() {
    p_shl_3_fu_21693_p3 = esl_concat<3,3>(tmp_1385_fu_21683_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_4_cast_fu_24862_p1() {
    p_shl_4_cast_fu_24862_p1 = esl_zext<7,6>(p_shl_4_fu_24854_p3.read());
}

void batch_align2D_region::thread_p_shl_4_fu_24854_p3() {
    p_shl_4_fu_24854_p3 = esl_concat<3,3>(tmp_1386_fu_24844_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_5_cast_fu_28030_p1() {
    p_shl_5_cast_fu_28030_p1 = esl_zext<7,6>(p_shl_5_fu_28022_p3.read());
}

void batch_align2D_region::thread_p_shl_5_fu_28022_p3() {
    p_shl_5_fu_28022_p3 = esl_concat<3,3>(tmp_1390_fu_28012_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_6_cast_fu_31197_p1() {
    p_shl_6_cast_fu_31197_p1 = esl_zext<7,6>(p_shl_6_fu_31189_p3.read());
}

void batch_align2D_region::thread_p_shl_6_fu_31189_p3() {
    p_shl_6_fu_31189_p3 = esl_concat<3,3>(tmp_1394_fu_31179_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_7_cast_fu_34370_p1() {
    p_shl_7_cast_fu_34370_p1 = esl_zext<7,6>(p_shl_7_fu_34362_p3.read());
}

void batch_align2D_region::thread_p_shl_7_fu_34362_p3() {
    p_shl_7_fu_34362_p3 = esl_concat<3,3>(tmp_1398_fu_34352_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_cast_fu_12200_p1() {
    p_shl_cast_fu_12200_p1 = esl_zext<7,6>(p_shl_fu_12192_p3.read());
}

void batch_align2D_region::thread_p_shl_fu_12192_p3() {
    p_shl_fu_12192_p3 = esl_concat<3,3>(tmp_1378_fu_12182_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_sum10_i_0_5_cast_fu_13514_p1() {
    p_sum10_i_0_5_cast_fu_13514_p1 = esl_sext<64,11>(p_sum10_i_0_5_fu_13509_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_0_5_fu_13509_p2() {
    p_sum10_i_0_5_fu_13509_p2 = (!p_sum10_i_reg_38981.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_reg_38981.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_1_5_cast_fu_16681_p1() {
    p_sum10_i_1_5_cast_fu_16681_p1 = esl_sext<64,11>(p_sum10_i_1_5_fu_16676_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_1_5_fu_16676_p2() {
    p_sum10_i_1_5_fu_16676_p2 = (!p_sum10_i_1_reg_40649.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_1_reg_40649.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_1_cast_fu_16435_p1() {
    p_sum10_i_1_cast_fu_16435_p1 = esl_sext<64,11>(p_sum10_i_1_fu_16430_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_1_fu_16430_p2() {
    p_sum10_i_1_fu_16430_p2 = (!tmp135_cast_reg_40625.read().is_01() || !tmp_166_1_fu_16392_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp135_cast_reg_40625.read()) + sc_biguint<11>(tmp_166_1_fu_16392_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_2_5_cast_fu_19848_p1() {
    p_sum10_i_2_5_cast_fu_19848_p1 = esl_sext<64,11>(p_sum10_i_2_5_fu_19843_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_2_5_fu_19843_p2() {
    p_sum10_i_2_5_fu_19843_p2 = (!p_sum10_i_2_reg_42317.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_2_reg_42317.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_2_cast_fu_19602_p1() {
    p_sum10_i_2_cast_fu_19602_p1 = esl_sext<64,11>(p_sum10_i_2_fu_19597_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_2_fu_19597_p2() {
    p_sum10_i_2_fu_19597_p2 = (!tmp158_cast_reg_42293.read().is_01() || !tmp_166_2_fu_19559_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp158_cast_reg_42293.read()) + sc_biguint<11>(tmp_166_2_fu_19559_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_3_5_cast_fu_23015_p1() {
    p_sum10_i_3_5_cast_fu_23015_p1 = esl_sext<64,11>(p_sum10_i_3_5_fu_23010_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_3_5_fu_23010_p2() {
    p_sum10_i_3_5_fu_23010_p2 = (!p_sum10_i_3_reg_43985.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_3_reg_43985.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_3_cast_fu_22769_p1() {
    p_sum10_i_3_cast_fu_22769_p1 = esl_sext<64,11>(p_sum10_i_3_fu_22764_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_3_fu_22764_p2() {
    p_sum10_i_3_fu_22764_p2 = (!tmp181_cast_reg_43961.read().is_01() || !tmp_166_3_fu_22726_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp181_cast_reg_43961.read()) + sc_biguint<11>(tmp_166_3_fu_22726_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_4_5_cast_fu_26182_p1() {
    p_sum10_i_4_5_cast_fu_26182_p1 = esl_sext<64,11>(p_sum10_i_4_5_fu_26177_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_4_5_fu_26177_p2() {
    p_sum10_i_4_5_fu_26177_p2 = (!p_sum10_i_4_reg_45653.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_4_reg_45653.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_4_cast_fu_25936_p1() {
    p_sum10_i_4_cast_fu_25936_p1 = esl_sext<64,11>(p_sum10_i_4_fu_25931_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_4_fu_25931_p2() {
    p_sum10_i_4_fu_25931_p2 = (!tmp204_cast_reg_45629.read().is_01() || !tmp_166_4_fu_25893_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp204_cast_reg_45629.read()) + sc_biguint<11>(tmp_166_4_fu_25893_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_5_5_cast_fu_29350_p1() {
    p_sum10_i_5_5_cast_fu_29350_p1 = esl_sext<64,11>(p_sum10_i_5_5_fu_29345_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_5_5_fu_29345_p2() {
    p_sum10_i_5_5_fu_29345_p2 = (!p_sum10_i_5_reg_47315.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_5_reg_47315.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_5_cast_fu_29104_p1() {
    p_sum10_i_5_cast_fu_29104_p1 = esl_sext<64,11>(p_sum10_i_5_fu_29099_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_5_fu_29099_p2() {
    p_sum10_i_5_fu_29099_p2 = (!tmp227_cast_reg_47291.read().is_01() || !tmp_166_5_fu_29061_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp227_cast_reg_47291.read()) + sc_biguint<11>(tmp_166_5_fu_29061_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_6_5_cast_fu_32517_p1() {
    p_sum10_i_6_5_cast_fu_32517_p1 = esl_sext<64,11>(p_sum10_i_6_5_fu_32512_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_6_5_fu_32512_p2() {
    p_sum10_i_6_5_fu_32512_p2 = (!p_sum10_i_6_reg_48983.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_6_reg_48983.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_6_cast_fu_32271_p1() {
    p_sum10_i_6_cast_fu_32271_p1 = esl_sext<64,11>(p_sum10_i_6_fu_32266_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_6_fu_32266_p2() {
    p_sum10_i_6_fu_32266_p2 = (!tmp250_cast_reg_48959.read().is_01() || !tmp_166_6_fu_32228_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp250_cast_reg_48959.read()) + sc_biguint<11>(tmp_166_6_fu_32228_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_7_5_cast_fu_35684_p1() {
    p_sum10_i_7_5_cast_fu_35684_p1 = esl_sext<64,11>(p_sum10_i_7_5_fu_35679_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_7_5_fu_35679_p2() {
    p_sum10_i_7_5_fu_35679_p2 = (!p_sum10_i_7_reg_50651.read().is_01() || !ap_const_lv11_5.is_01())? sc_lv<11>(): (sc_bigint<11>(p_sum10_i_7_reg_50651.read()) + sc_biguint<11>(ap_const_lv11_5));
}

void batch_align2D_region::thread_p_sum10_i_7_cast_fu_35438_p1() {
    p_sum10_i_7_cast_fu_35438_p1 = esl_sext<64,11>(p_sum10_i_7_fu_35433_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_7_fu_35433_p2() {
    p_sum10_i_7_fu_35433_p2 = (!tmp273_cast_reg_50627.read().is_01() || !tmp_166_7_fu_35395_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp273_cast_reg_50627.read()) + sc_biguint<11>(tmp_166_7_fu_35395_p2.read()));
}

void batch_align2D_region::thread_p_sum10_i_cast_fu_13268_p1() {
    p_sum10_i_cast_fu_13268_p1 = esl_sext<64,11>(p_sum10_i_fu_13263_p2.read());
}

void batch_align2D_region::thread_p_sum10_i_fu_13263_p2() {
    p_sum10_i_fu_13263_p2 = (!tmp112_cast_reg_38957.read().is_01() || !tmp_131_fu_13225_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(tmp112_cast_reg_38957.read()) + sc_biguint<11>(tmp_131_fu_13225_p2.read()));
}

void batch_align2D_region::thread_pos_1_fu_16859_p2() {
    pos_1_fu_16859_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_1_reg_7768.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_1_reg_7768.read()));
}

void batch_align2D_region::thread_pos_2_fu_20026_p2() {
    pos_2_fu_20026_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_2_reg_8111.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_2_reg_8111.read()));
}

void batch_align2D_region::thread_pos_3_fu_23193_p2() {
    pos_3_fu_23193_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_3_reg_8454.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_3_reg_8454.read()));
}

void batch_align2D_region::thread_pos_4_fu_26360_p2() {
    pos_4_fu_26360_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_4_reg_8798.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_4_reg_8798.read()));
}

void batch_align2D_region::thread_pos_5_fu_29528_p2() {
    pos_5_fu_29528_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_5_reg_9142.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_5_reg_9142.read()));
}

void batch_align2D_region::thread_pos_6_fu_32695_p2() {
    pos_6_fu_32695_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_6_reg_9486.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_6_reg_9486.read()));
}

void batch_align2D_region::thread_pos_7_fu_35862_p2() {
    pos_7_fu_35862_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_7_reg_9829.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_7_reg_9829.read()));
}

void batch_align2D_region::thread_pos_fu_13692_p2() {
    pos_fu_13692_p2 = (!ap_const_lv7_8.is_01() || !pos_0_i_reg_7425.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(pos_0_i_reg_7425.read()));
}

void batch_align2D_region::thread_pyr_region_data_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum_i_0_7_cast_fu_13589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum_i_0_6_cast_fu_13564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum11_i_0_5_cas_fu_13539_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (p_sum10_i_0_5_cast_fu_13514_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum11_i_0_4_cas_fu_13489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum12_i_0_3_cas_fu_13464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum_i_0_2_cast_fu_13419_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum_i_0_1_cast_fu_13374_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (it_0_sum11_i_cast_fu_13324_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (p_sum10_i_cast_fu_13268_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_0_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp5_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_7_cas_fu_13604_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_6_cas_fu_13579_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_5_cas_fu_13554_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum_i_0_5_cast_fu_13529_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_4_cas_fu_13504_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum_i_0_4_cast_fu_13479_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_2_cas_fu_13454_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_0_1_cas_fu_13409_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum12_i_cast_fu_13364_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum_i_cast_fu_13314_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<10>) (it_0_sum_i_0_3_cast_fu_13304_p1.read());
        } else {
            pyr_region_data_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_0_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_0_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_0_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_0_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_0))) {
        pyr_region_data_0_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_0_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum_i_1_7_cast_fu_16756_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum_i_1_6_cast_fu_16731_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum11_i_1_5_cas_fu_16706_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (p_sum10_i_1_5_cast_fu_16681_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum11_i_1_4_cas_fu_16656_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum12_i_1_3_cas_fu_16631_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum_i_1_2_cast_fu_16586_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum_i_1_1_cast_fu_16541_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (it_0_sum11_i_1_cast_fu_16491_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (p_sum10_i_1_cast_fu_16435_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_1_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp7_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_7_cas_fu_16771_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_6_cas_fu_16746_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_5_cas_fu_16721_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum_i_1_5_cast_fu_16696_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_4_cas_fu_16671_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum_i_1_4_cast_fu_16646_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_2_cas_fu_16621_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_1_cas_fu_16576_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum12_i_1_cast_fu_16531_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum_i_1_cast_fu_16481_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<10>) (it_0_sum_i_1_3_cast_fu_16471_p1.read());
        } else {
            pyr_region_data_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_1_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_1_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_1_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_1_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_1))) {
        pyr_region_data_1_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_1_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum_i_2_7_cast_fu_19923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum_i_2_6_cast_fu_19898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum11_i_2_5_cas_fu_19873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (p_sum10_i_2_5_cast_fu_19848_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum11_i_2_4_cas_fu_19823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum12_i_2_3_cas_fu_19798_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum_i_2_2_cast_fu_19753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum_i_2_1_cast_fu_19708_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (it_0_sum11_i_2_cast_fu_19658_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (p_sum10_i_2_cast_fu_19602_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_2_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp9_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_7_cas_fu_19938_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_6_cas_fu_19913_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_5_cas_fu_19888_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum_i_2_5_cast_fu_19863_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_4_cas_fu_19838_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum_i_2_4_cast_fu_19813_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_2_cas_fu_19788_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_1_cas_fu_19743_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum12_i_2_cast_fu_19698_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum_i_2_cast_fu_19648_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<10>) (it_0_sum_i_2_3_cast_fu_19638_p1.read());
        } else {
            pyr_region_data_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_2_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_2_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_2_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_2_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_2))) {
        pyr_region_data_2_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_2_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum_i_3_7_cast_fu_23090_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum_i_3_6_cast_fu_23065_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum11_i_3_5_cas_fu_23040_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (p_sum10_i_3_5_cast_fu_23015_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum11_i_3_4_cas_fu_22990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum12_i_3_3_cas_fu_22965_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum_i_3_2_cast_fu_22920_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum_i_3_1_cast_fu_22875_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (it_0_sum11_i_3_cast_fu_22825_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (p_sum10_i_3_cast_fu_22769_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_3_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp11_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_7_cas_fu_23105_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_6_cas_fu_23080_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_5_cas_fu_23055_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum_i_3_5_cast_fu_23030_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_4_cas_fu_23005_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum_i_3_4_cast_fu_22980_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_2_cas_fu_22955_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_1_cas_fu_22910_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum12_i_3_cast_fu_22865_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum_i_3_cast_fu_22815_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<10>) (it_0_sum_i_3_3_cast_fu_22805_p1.read());
        } else {
            pyr_region_data_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_3_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_3_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_3_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_3_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_3))) {
        pyr_region_data_3_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_3_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum_i_4_7_cast_fu_26257_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum_i_4_6_cast_fu_26232_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum11_i_4_5_cas_fu_26207_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (p_sum10_i_4_5_cast_fu_26182_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum11_i_4_4_cas_fu_26157_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum12_i_4_3_cas_fu_26132_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum_i_4_2_cast_fu_26087_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum_i_4_1_cast_fu_26042_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (it_0_sum11_i_4_cast_fu_25992_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (p_sum10_i_4_cast_fu_25936_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_4_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp13_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_7_cas_fu_26272_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_6_cas_fu_26247_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_5_cas_fu_26222_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum_i_4_5_cast_fu_26197_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_4_cas_fu_26172_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum_i_4_4_cast_fu_26147_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_2_cas_fu_26122_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_1_cas_fu_26077_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum12_i_4_cast_fu_26032_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum_i_4_cast_fu_25982_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<10>) (it_0_sum_i_4_3_cast_fu_25972_p1.read());
        } else {
            pyr_region_data_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_4_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_4_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_4_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_4_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_4))) {
        pyr_region_data_4_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_4_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum_i_5_7_cast_fu_29425_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum_i_5_6_cast_fu_29400_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum11_i_5_5_cas_fu_29375_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (p_sum10_i_5_5_cast_fu_29350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum11_i_5_4_cas_fu_29325_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum12_i_5_3_cas_fu_29300_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum_i_5_2_cast_fu_29255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum_i_5_1_cast_fu_29210_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (it_0_sum11_i_5_cast_fu_29160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (p_sum10_i_5_cast_fu_29104_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_5_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp15_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_7_cas_fu_29440_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_6_cas_fu_29415_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_5_cas_fu_29390_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum_i_5_5_cast_fu_29365_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_4_cas_fu_29340_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum_i_5_4_cast_fu_29315_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_2_cas_fu_29290_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_1_cas_fu_29245_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum12_i_5_cast_fu_29200_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum_i_5_cast_fu_29150_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<10>) (it_0_sum_i_5_3_cast_fu_29140_p1.read());
        } else {
            pyr_region_data_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_5_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_5_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_5_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_5_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_5))) {
        pyr_region_data_5_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_5_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum_i_6_7_cast_fu_32592_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum_i_6_6_cast_fu_32567_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum11_i_6_5_cas_fu_32542_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (p_sum10_i_6_5_cast_fu_32517_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum11_i_6_4_cas_fu_32492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum12_i_6_3_cas_fu_32467_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum_i_6_2_cast_fu_32422_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum_i_6_1_cast_fu_32377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (it_0_sum11_i_6_cast_fu_32327_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (p_sum10_i_6_cast_fu_32271_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_6_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp17_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_7_cas_fu_32607_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_6_cas_fu_32582_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_5_cas_fu_32557_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum_i_6_5_cast_fu_32532_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_4_cas_fu_32507_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum_i_6_4_cast_fu_32482_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_2_cas_fu_32457_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_1_cas_fu_32412_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum12_i_6_cast_fu_32367_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum_i_6_cast_fu_32317_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<10>) (it_0_sum_i_6_3_cast_fu_32307_p1.read());
        } else {
            pyr_region_data_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_6_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_6_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_6_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_6_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_6))) {
        pyr_region_data_6_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_6_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum_i_7_7_cast_fu_35759_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum_i_7_6_cast_fu_35734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum11_i_7_5_cas_fu_35709_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (p_sum10_i_7_5_cast_fu_35684_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum11_i_7_4_cas_fu_35659_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum12_i_7_3_cas_fu_35634_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum_i_7_2_cast_fu_35589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum_i_7_1_cast_fu_35544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (it_0_sum11_i_7_cast_fu_35494_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (p_sum10_i_7_cast_fu_35438_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_7_address0 =  (sc_lv<10>) (tmp_cast_fu_11859_p1.read());
    } else {
        pyr_region_data_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp19_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_7_cas_fu_35774_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_6_cas_fu_35749_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_5_cas_fu_35724_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum_i_7_5_cast_fu_35699_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_4_cas_fu_35674_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum_i_7_4_cast_fu_35649_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_2_cas_fu_35624_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_1_cas_fu_35579_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum12_i_7_cast_fu_35534_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum_i_7_cast_fu_35484_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<10>) (it_0_sum_i_7_3_cast_fu_35474_p1.read());
        } else {
            pyr_region_data_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        pyr_region_data_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        pyr_region_data_7_ce0 = ap_const_logic_1;
    } else {
        pyr_region_data_7_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage8_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage10_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)))) {
        pyr_region_data_7_ce1 = ap_const_logic_1;
    } else {
        pyr_region_data_7_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,3,3>(p_t_reg_37856_pp0_iter1_reg.read(), ap_const_lv3_7))) {
        pyr_region_data_7_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_7_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_dx_0_01_fu_12344_p1() {
    ref_patch_dx_0_01_fu_12344_p1 = esl_sext<32,9>(tmp_94_reg_38808.read());
}

void batch_align2D_region::thread_ref_patch_dx_1_01_fu_15511_p1() {
    ref_patch_dx_1_01_fu_15511_p1 = esl_sext<32,9>(tmp_115_1_reg_40476.read());
}

void batch_align2D_region::thread_ref_patch_dx_2_01_fu_18678_p1() {
    ref_patch_dx_2_01_fu_18678_p1 = esl_sext<32,9>(tmp_115_2_reg_42144.read());
}

void batch_align2D_region::thread_ref_patch_dx_3_01_fu_21845_p1() {
    ref_patch_dx_3_01_fu_21845_p1 = esl_sext<32,9>(tmp_115_3_reg_43812.read());
}

void batch_align2D_region::thread_ref_patch_dx_4_01_fu_25012_p1() {
    ref_patch_dx_4_01_fu_25012_p1 = esl_sext<32,9>(tmp_115_4_reg_45480.read());
}

void batch_align2D_region::thread_ref_patch_dx_5_01_fu_28180_p1() {
    ref_patch_dx_5_01_fu_28180_p1 = esl_sext<32,9>(tmp_115_5_reg_47142.read());
}

void batch_align2D_region::thread_ref_patch_dx_6_01_fu_31347_p1() {
    ref_patch_dx_6_01_fu_31347_p1 = esl_sext<32,9>(tmp_115_6_reg_48810.read());
}

void batch_align2D_region::thread_ref_patch_dx_7_01_fu_34514_p1() {
    ref_patch_dx_7_01_fu_34514_p1 = esl_sext<32,9>(tmp_115_7_reg_50478.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_1_fu_13956_p3() {
    ref_patch_dx_load_0_1_fu_13956_p3 = (!tmp_46_reg_39422.read()[0].is_01())? sc_lv<32>(): ((tmp_46_reg_39422.read()[0].to_bool())? ref_patch_dx_0_63_50_fu_816.read(): tmp_44_reg_39417.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_2_fu_14131_p3() {
    ref_patch_dx_load_0_2_fu_14131_p3 = (!tmp_169_reg_39473.read()[0].is_01())? sc_lv<32>(): ((tmp_169_reg_39473.read()[0].to_bool())? ref_patch_dx_0_63_51_fu_820.read(): tmp_168_reg_39468.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_3_fu_14354_p3() {
    ref_patch_dx_load_0_3_fu_14354_p3 = (!tmp_194_fu_14348_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_194_fu_14348_p2.read()[0].to_bool())? ref_patch_dx_0_63_52_fu_824.read(): tmp_193_fu_14340_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_4_fu_14561_p3() {
    ref_patch_dx_load_0_4_fu_14561_p3 = (!tmp_216_fu_14555_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_216_fu_14555_p2.read()[0].to_bool())? ref_patch_dx_0_63_53_fu_828.read(): tmp_215_fu_14547_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_5_fu_14768_p3() {
    ref_patch_dx_load_0_5_fu_14768_p3 = (!tmp_235_reg_39551.read()[0].is_01())? sc_lv<32>(): ((tmp_235_reg_39551.read()[0].to_bool())? ref_patch_dx_0_63_54_fu_832.read(): tmp_234_reg_39546.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_6_fu_14967_p3() {
    ref_patch_dx_load_0_6_fu_14967_p3 = (!tmp_256_fu_14961_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_256_fu_14961_p2.read()[0].to_bool())? ref_patch_dx_0_63_55_fu_836.read(): tmp_253_fu_14953_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_0_7_fu_15174_p3() {
    ref_patch_dx_load_0_7_fu_15174_p3 = (!tmp_289_fu_15168_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_289_fu_15168_p2.read()[0].to_bool())? ref_patch_dx_0_63_56_fu_840.read(): tmp_288_fu_15160_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_1_fu_17123_p3() {
    ref_patch_dx_load_1_1_fu_17123_p3 = (!tmp_314_reg_41090.read()[0].is_01())? sc_lv<32>(): ((tmp_314_reg_41090.read()[0].to_bool())? ref_patch_dx_1_63_50_fu_1328.read(): tmp_313_reg_41085.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_2_fu_17298_p3() {
    ref_patch_dx_load_1_2_fu_17298_p3 = (!tmp_333_reg_41141.read()[0].is_01())? sc_lv<32>(): ((tmp_333_reg_41141.read()[0].to_bool())? ref_patch_dx_1_63_51_fu_1332.read(): tmp_332_reg_41136.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_3_fu_17521_p3() {
    ref_patch_dx_load_1_3_fu_17521_p3 = (!tmp_353_fu_17515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_353_fu_17515_p2.read()[0].to_bool())? ref_patch_dx_1_63_52_fu_1336.read(): tmp_352_fu_17507_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_4_fu_17728_p3() {
    ref_patch_dx_load_1_4_fu_17728_p3 = (!tmp_372_fu_17722_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_372_fu_17722_p2.read()[0].to_bool())? ref_patch_dx_1_63_53_fu_1340.read(): tmp_371_fu_17714_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_5_fu_17935_p3() {
    ref_patch_dx_load_1_5_fu_17935_p3 = (!tmp_392_reg_41219.read()[0].is_01())? sc_lv<32>(): ((tmp_392_reg_41219.read()[0].to_bool())? ref_patch_dx_1_63_54_fu_1344.read(): tmp_391_reg_41214.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_6_fu_18134_p3() {
    ref_patch_dx_load_1_6_fu_18134_p3 = (!tmp_411_fu_18128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_411_fu_18128_p2.read()[0].to_bool())? ref_patch_dx_1_63_55_fu_1348.read(): tmp_410_fu_18120_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_1_7_fu_18341_p3() {
    ref_patch_dx_load_1_7_fu_18341_p3 = (!tmp_431_fu_18335_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_431_fu_18335_p2.read()[0].to_bool())? ref_patch_dx_1_63_56_fu_1352.read(): tmp_430_fu_18327_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_1_fu_20290_p3() {
    ref_patch_dx_load_2_1_fu_20290_p3 = (!tmp_469_reg_42758.read()[0].is_01())? sc_lv<32>(): ((tmp_469_reg_42758.read()[0].to_bool())? ref_patch_dx_2_63_50_fu_1840.read(): tmp_468_reg_42753.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_2_fu_20465_p3() {
    ref_patch_dx_load_2_2_fu_20465_p3 = (!tmp_488_reg_42809.read()[0].is_01())? sc_lv<32>(): ((tmp_488_reg_42809.read()[0].to_bool())? ref_patch_dx_2_63_51_fu_1844.read(): tmp_487_reg_42804.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_3_fu_20688_p3() {
    ref_patch_dx_load_2_3_fu_20688_p3 = (!tmp_507_fu_20682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_507_fu_20682_p2.read()[0].to_bool())? ref_patch_dx_2_63_52_fu_1848.read(): tmp_506_fu_20674_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_4_fu_20895_p3() {
    ref_patch_dx_load_2_4_fu_20895_p3 = (!tmp_527_fu_20889_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_527_fu_20889_p2.read()[0].to_bool())? ref_patch_dx_2_63_53_fu_1852.read(): tmp_526_fu_20881_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_5_fu_21102_p3() {
    ref_patch_dx_load_2_5_fu_21102_p3 = (!tmp_546_reg_42887.read()[0].is_01())? sc_lv<32>(): ((tmp_546_reg_42887.read()[0].to_bool())? ref_patch_dx_2_63_54_fu_1856.read(): tmp_545_reg_42882.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_6_fu_21301_p3() {
    ref_patch_dx_load_2_6_fu_21301_p3 = (!tmp_565_fu_21295_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_565_fu_21295_p2.read()[0].to_bool())? ref_patch_dx_2_63_55_fu_1860.read(): tmp_564_fu_21287_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_2_7_fu_21508_p3() {
    ref_patch_dx_load_2_7_fu_21508_p3 = (!tmp_585_fu_21502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_585_fu_21502_p2.read()[0].to_bool())? ref_patch_dx_2_63_56_fu_1864.read(): tmp_584_fu_21494_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_1_fu_23457_p3() {
    ref_patch_dx_load_3_1_fu_23457_p3 = (!tmp_625_reg_44426.read()[0].is_01())? sc_lv<32>(): ((tmp_625_reg_44426.read()[0].to_bool())? ref_patch_dx_3_63_50_fu_2352.read(): tmp_624_reg_44421.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_2_fu_23632_p3() {
    ref_patch_dx_load_3_2_fu_23632_p3 = (!tmp_644_reg_44477.read()[0].is_01())? sc_lv<32>(): ((tmp_644_reg_44477.read()[0].to_bool())? ref_patch_dx_3_63_51_fu_2356.read(): tmp_643_reg_44472.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_3_fu_23855_p3() {
    ref_patch_dx_load_3_3_fu_23855_p3 = (!tmp_663_fu_23849_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_663_fu_23849_p2.read()[0].to_bool())? ref_patch_dx_3_63_52_fu_2360.read(): tmp_662_fu_23841_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_4_fu_24062_p3() {
    ref_patch_dx_load_3_4_fu_24062_p3 = (!tmp_682_fu_24056_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_682_fu_24056_p2.read()[0].to_bool())? ref_patch_dx_3_63_53_fu_2364.read(): tmp_681_fu_24048_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_5_fu_24269_p3() {
    ref_patch_dx_load_3_5_fu_24269_p3 = (!tmp_701_reg_44555.read()[0].is_01())? sc_lv<32>(): ((tmp_701_reg_44555.read()[0].to_bool())? ref_patch_dx_3_63_54_fu_2368.read(): tmp_700_reg_44550.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_6_fu_24468_p3() {
    ref_patch_dx_load_3_6_fu_24468_p3 = (!tmp_720_fu_24462_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_720_fu_24462_p2.read()[0].to_bool())? ref_patch_dx_3_63_55_fu_2372.read(): tmp_719_fu_24454_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_3_7_fu_24675_p3() {
    ref_patch_dx_load_3_7_fu_24675_p3 = (!tmp_739_fu_24669_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_739_fu_24669_p2.read()[0].to_bool())? ref_patch_dx_3_63_56_fu_2376.read(): tmp_738_fu_24661_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_1_fu_26600_p3() {
    ref_patch_dx_load_4_1_fu_26600_p3 = (!tmp_781_fu_26594_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_781_fu_26594_p2.read()[0].to_bool())? ref_patch_dx_4_63_50_fu_2864.read(): tmp_780_fu_26586_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_2_fu_26800_p3() {
    ref_patch_dx_load_4_2_fu_26800_p3 = (!tmp_800_reg_46139.read()[0].is_01())? sc_lv<32>(): ((tmp_800_reg_46139.read()[0].to_bool())? ref_patch_dx_4_63_51_fu_2868.read(): tmp_799_reg_46134.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_3_fu_27023_p3() {
    ref_patch_dx_load_4_3_fu_27023_p3 = (!tmp_819_fu_27017_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_819_fu_27017_p2.read()[0].to_bool())? ref_patch_dx_4_63_52_fu_2872.read(): tmp_818_fu_27009_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_4_fu_27230_p3() {
    ref_patch_dx_load_4_4_fu_27230_p3 = (!tmp_838_fu_27224_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_838_fu_27224_p2.read()[0].to_bool())? ref_patch_dx_4_63_53_fu_2876.read(): tmp_837_fu_27216_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_5_fu_27437_p3() {
    ref_patch_dx_load_4_5_fu_27437_p3 = (!tmp_857_reg_46217.read()[0].is_01())? sc_lv<32>(): ((tmp_857_reg_46217.read()[0].to_bool())? ref_patch_dx_4_63_54_fu_2880.read(): tmp_856_reg_46212.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_6_fu_27636_p3() {
    ref_patch_dx_load_4_6_fu_27636_p3 = (!tmp_876_fu_27630_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_876_fu_27630_p2.read()[0].to_bool())? ref_patch_dx_4_63_55_fu_2884.read(): tmp_875_fu_27622_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_4_7_fu_27843_p3() {
    ref_patch_dx_load_4_7_fu_27843_p3 = (!tmp_895_fu_27837_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_895_fu_27837_p2.read()[0].to_bool())? ref_patch_dx_4_63_56_fu_2888.read(): tmp_894_fu_27829_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_1_fu_29792_p3() {
    ref_patch_dx_load_5_1_fu_29792_p3 = (!tmp_937_reg_47756.read()[0].is_01())? sc_lv<32>(): ((tmp_937_reg_47756.read()[0].to_bool())? ref_patch_dx_5_63_50_fu_3376.read(): tmp_936_reg_47751.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_2_fu_29967_p3() {
    ref_patch_dx_load_5_2_fu_29967_p3 = (!tmp_956_reg_47807.read()[0].is_01())? sc_lv<32>(): ((tmp_956_reg_47807.read()[0].to_bool())? ref_patch_dx_5_63_51_fu_3380.read(): tmp_955_reg_47802.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_3_fu_30190_p3() {
    ref_patch_dx_load_5_3_fu_30190_p3 = (!tmp_975_fu_30184_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_975_fu_30184_p2.read()[0].to_bool())? ref_patch_dx_5_63_52_fu_3384.read(): tmp_974_fu_30176_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_4_fu_30397_p3() {
    ref_patch_dx_load_5_4_fu_30397_p3 = (!tmp_994_fu_30391_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_994_fu_30391_p2.read()[0].to_bool())? ref_patch_dx_5_63_53_fu_3388.read(): tmp_993_fu_30383_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_5_fu_30604_p3() {
    ref_patch_dx_load_5_5_fu_30604_p3 = (!tmp_1013_reg_47885.read()[0].is_01())? sc_lv<32>(): ((tmp_1013_reg_47885.read()[0].to_bool())? ref_patch_dx_5_63_54_fu_3392.read(): tmp_1012_reg_47880.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_6_fu_30803_p3() {
    ref_patch_dx_load_5_6_fu_30803_p3 = (!tmp_1032_fu_30797_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1032_fu_30797_p2.read()[0].to_bool())? ref_patch_dx_5_63_55_fu_3396.read(): tmp_1031_fu_30789_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_5_7_fu_31010_p3() {
    ref_patch_dx_load_5_7_fu_31010_p3 = (!tmp_1051_fu_31004_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1051_fu_31004_p2.read()[0].to_bool())? ref_patch_dx_5_63_56_fu_3400.read(): tmp_1050_fu_30996_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_1_fu_32959_p3() {
    ref_patch_dx_load_6_1_fu_32959_p3 = (!tmp_1093_reg_49424.read()[0].is_01())? sc_lv<32>(): ((tmp_1093_reg_49424.read()[0].to_bool())? ref_patch_dx_6_63_50_fu_3888.read(): tmp_1092_reg_49419.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_2_fu_33134_p3() {
    ref_patch_dx_load_6_2_fu_33134_p3 = (!tmp_1112_reg_49475.read()[0].is_01())? sc_lv<32>(): ((tmp_1112_reg_49475.read()[0].to_bool())? ref_patch_dx_6_63_51_fu_3892.read(): tmp_1111_reg_49470.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_3_fu_33357_p3() {
    ref_patch_dx_load_6_3_fu_33357_p3 = (!tmp_1131_fu_33351_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1131_fu_33351_p2.read()[0].to_bool())? ref_patch_dx_6_63_52_fu_3896.read(): tmp_1130_fu_33343_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_4_fu_33564_p3() {
    ref_patch_dx_load_6_4_fu_33564_p3 = (!tmp_1150_fu_33558_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1150_fu_33558_p2.read()[0].to_bool())? ref_patch_dx_6_63_53_fu_3900.read(): tmp_1149_fu_33550_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_5_fu_33771_p3() {
    ref_patch_dx_load_6_5_fu_33771_p3 = (!tmp_1169_reg_49553.read()[0].is_01())? sc_lv<32>(): ((tmp_1169_reg_49553.read()[0].to_bool())? ref_patch_dx_6_63_54_fu_3904.read(): tmp_1168_reg_49548.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_6_fu_33970_p3() {
    ref_patch_dx_load_6_6_fu_33970_p3 = (!tmp_1188_fu_33964_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1188_fu_33964_p2.read()[0].to_bool())? ref_patch_dx_6_63_55_fu_3908.read(): tmp_1187_fu_33956_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_6_7_fu_34177_p3() {
    ref_patch_dx_load_6_7_fu_34177_p3 = (!tmp_1207_fu_34171_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1207_fu_34171_p2.read()[0].to_bool())? ref_patch_dx_6_63_56_fu_3912.read(): tmp_1206_fu_34163_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_1_fu_36126_p3() {
    ref_patch_dx_load_7_1_fu_36126_p3 = (!tmp_1249_reg_51092.read()[0].is_01())? sc_lv<32>(): ((tmp_1249_reg_51092.read()[0].to_bool())? ref_patch_dx_7_63_50_fu_4400.read(): tmp_1248_reg_51087.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_2_fu_36301_p3() {
    ref_patch_dx_load_7_2_fu_36301_p3 = (!tmp_1268_reg_51143.read()[0].is_01())? sc_lv<32>(): ((tmp_1268_reg_51143.read()[0].to_bool())? ref_patch_dx_7_63_51_fu_4404.read(): tmp_1267_reg_51138.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_3_fu_36524_p3() {
    ref_patch_dx_load_7_3_fu_36524_p3 = (!tmp_1287_fu_36518_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1287_fu_36518_p2.read()[0].to_bool())? ref_patch_dx_7_63_52_fu_4408.read(): tmp_1286_fu_36510_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_4_fu_36731_p3() {
    ref_patch_dx_load_7_4_fu_36731_p3 = (!tmp_1306_fu_36725_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1306_fu_36725_p2.read()[0].to_bool())? ref_patch_dx_7_63_53_fu_4412.read(): tmp_1305_fu_36717_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_5_fu_36938_p3() {
    ref_patch_dx_load_7_5_fu_36938_p3 = (!tmp_1325_reg_51228.read()[0].is_01())? sc_lv<32>(): ((tmp_1325_reg_51228.read()[0].to_bool())? ref_patch_dx_7_63_54_fu_4416.read(): tmp_1324_reg_51223.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_6_fu_37137_p3() {
    ref_patch_dx_load_7_6_fu_37137_p3 = (!tmp_1344_fu_37131_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1344_fu_37131_p2.read()[0].to_bool())? ref_patch_dx_7_63_55_fu_4420.read(): tmp_1343_fu_37123_p3.read());
}

void batch_align2D_region::thread_ref_patch_dx_load_7_7_fu_37344_p3() {
    ref_patch_dx_load_7_7_fu_37344_p3 = (!tmp_1363_fu_37338_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1363_fu_37338_p2.read()[0].to_bool())? ref_patch_dx_7_63_56_fu_4424.read(): tmp_1362_fu_37330_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_0_01_fu_12362_p1() {
    ref_patch_dy_0_01_fu_12362_p1 = esl_sext<32,9>(tmp_105_reg_38828.read());
}

void batch_align2D_region::thread_ref_patch_dy_1_01_fu_15529_p1() {
    ref_patch_dy_1_01_fu_15529_p1 = esl_sext<32,9>(tmp_126_1_reg_40496.read());
}

void batch_align2D_region::thread_ref_patch_dy_2_01_fu_18696_p1() {
    ref_patch_dy_2_01_fu_18696_p1 = esl_sext<32,9>(tmp_126_2_reg_42164.read());
}

void batch_align2D_region::thread_ref_patch_dy_3_01_fu_21863_p1() {
    ref_patch_dy_3_01_fu_21863_p1 = esl_sext<32,9>(tmp_126_3_reg_43832.read());
}

void batch_align2D_region::thread_ref_patch_dy_4_01_fu_25030_p1() {
    ref_patch_dy_4_01_fu_25030_p1 = esl_sext<32,9>(tmp_126_4_reg_45500.read());
}

void batch_align2D_region::thread_ref_patch_dy_5_01_fu_28198_p1() {
    ref_patch_dy_5_01_fu_28198_p1 = esl_sext<32,9>(tmp_126_5_reg_47162.read());
}

void batch_align2D_region::thread_ref_patch_dy_6_01_fu_31365_p1() {
    ref_patch_dy_6_01_fu_31365_p1 = esl_sext<32,9>(tmp_126_6_reg_48830.read());
}

void batch_align2D_region::thread_ref_patch_dy_7_01_fu_34532_p1() {
    ref_patch_dy_7_01_fu_34532_p1 = esl_sext<32,9>(tmp_126_7_reg_50498.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_1_fu_14005_p3() {
    ref_patch_dy_load_0_1_fu_14005_p3 = (!tmp_46_reg_39422.read()[0].is_01())? sc_lv<32>(): ((tmp_46_reg_39422.read()[0].to_bool())? ref_patch_dy_0_63_49_fu_1068.read(): tmp_155_fu_13998_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_2_fu_14204_p3() {
    ref_patch_dy_load_0_2_fu_14204_p3 = (!tmp_169_reg_39473.read()[0].is_01())? sc_lv<32>(): ((tmp_169_reg_39473.read()[0].to_bool())? ref_patch_dy_0_63_50_fu_1072.read(): tmp_180_fu_14197_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_3_fu_14410_p3() {
    ref_patch_dy_load_0_3_fu_14410_p3 = (!tmp_194_fu_14348_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_194_fu_14348_p2.read()[0].to_bool())? ref_patch_dy_0_63_51_fu_1076.read(): tmp_200_fu_14402_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_4_fu_14617_p3() {
    ref_patch_dy_load_0_4_fu_14617_p3 = (!tmp_216_fu_14555_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_216_fu_14555_p2.read()[0].to_bool())? ref_patch_dy_0_63_52_fu_1080.read(): tmp_222_fu_14609_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_5_fu_14817_p3() {
    ref_patch_dy_load_0_5_fu_14817_p3 = (!tmp_235_reg_39551.read()[0].is_01())? sc_lv<32>(): ((tmp_235_reg_39551.read()[0].to_bool())? ref_patch_dy_0_63_53_fu_1084.read(): tmp_241_fu_14810_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_6_fu_15023_p3() {
    ref_patch_dy_load_0_6_fu_15023_p3 = (!tmp_256_fu_14961_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_256_fu_14961_p2.read()[0].to_bool())? ref_patch_dy_0_63_54_fu_1088.read(): tmp_262_fu_15015_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_7_fu_15230_p3() {
    ref_patch_dy_load_0_7_fu_15230_p3 = (!tmp_289_fu_15168_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_289_fu_15168_p2.read()[0].to_bool())? ref_patch_dy_0_63_55_fu_1092.read(): tmp_295_fu_15222_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_0_s_fu_13805_p3() {
    ref_patch_dy_load_0_s_fu_13805_p3 = (!tmp_26_fu_13800_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_26_fu_13800_p2.read()[0].to_bool())? ref_patch_dy_0_63_48_fu_1064.read(): tmp_25_fu_13792_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_1_fu_17172_p3() {
    ref_patch_dy_load_1_1_fu_17172_p3 = (!tmp_314_reg_41090.read()[0].is_01())? sc_lv<32>(): ((tmp_314_reg_41090.read()[0].to_bool())? ref_patch_dy_1_63_49_fu_1580.read(): tmp_320_fu_17165_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_2_fu_17371_p3() {
    ref_patch_dy_load_1_2_fu_17371_p3 = (!tmp_333_reg_41141.read()[0].is_01())? sc_lv<32>(): ((tmp_333_reg_41141.read()[0].to_bool())? ref_patch_dy_1_63_50_fu_1584.read(): tmp_339_fu_17364_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_3_fu_17577_p3() {
    ref_patch_dy_load_1_3_fu_17577_p3 = (!tmp_353_fu_17515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_353_fu_17515_p2.read()[0].to_bool())? ref_patch_dy_1_63_51_fu_1588.read(): tmp_359_fu_17569_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_4_fu_17784_p3() {
    ref_patch_dy_load_1_4_fu_17784_p3 = (!tmp_372_fu_17722_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_372_fu_17722_p2.read()[0].to_bool())? ref_patch_dy_1_63_52_fu_1592.read(): tmp_378_fu_17776_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_5_fu_17984_p3() {
    ref_patch_dy_load_1_5_fu_17984_p3 = (!tmp_392_reg_41219.read()[0].is_01())? sc_lv<32>(): ((tmp_392_reg_41219.read()[0].to_bool())? ref_patch_dy_1_63_53_fu_1596.read(): tmp_398_fu_17977_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_6_fu_18190_p3() {
    ref_patch_dy_load_1_6_fu_18190_p3 = (!tmp_411_fu_18128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_411_fu_18128_p2.read()[0].to_bool())? ref_patch_dy_1_63_54_fu_1600.read(): tmp_417_fu_18182_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_7_fu_18397_p3() {
    ref_patch_dy_load_1_7_fu_18397_p3 = (!tmp_431_fu_18335_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_431_fu_18335_p2.read()[0].to_bool())? ref_patch_dy_1_63_55_fu_1604.read(): tmp_437_fu_18389_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_1_s_fu_16972_p3() {
    ref_patch_dy_load_1_s_fu_16972_p3 = (!tmp_284_fu_16967_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_284_fu_16967_p2.read()[0].to_bool())? ref_patch_dy_1_63_48_fu_1576.read(): tmp_283_fu_16959_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_1_fu_20339_p3() {
    ref_patch_dy_load_2_1_fu_20339_p3 = (!tmp_469_reg_42758.read()[0].is_01())? sc_lv<32>(): ((tmp_469_reg_42758.read()[0].to_bool())? ref_patch_dy_2_63_49_fu_2092.read(): tmp_475_fu_20332_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_2_fu_20538_p3() {
    ref_patch_dy_load_2_2_fu_20538_p3 = (!tmp_488_reg_42809.read()[0].is_01())? sc_lv<32>(): ((tmp_488_reg_42809.read()[0].to_bool())? ref_patch_dy_2_63_50_fu_2096.read(): tmp_494_fu_20531_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_3_fu_20744_p3() {
    ref_patch_dy_load_2_3_fu_20744_p3 = (!tmp_507_fu_20682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_507_fu_20682_p2.read()[0].to_bool())? ref_patch_dy_2_63_51_fu_2100.read(): tmp_513_fu_20736_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_4_fu_20951_p3() {
    ref_patch_dy_load_2_4_fu_20951_p3 = (!tmp_527_fu_20889_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_527_fu_20889_p2.read()[0].to_bool())? ref_patch_dy_2_63_52_fu_2104.read(): tmp_533_fu_20943_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_5_fu_21151_p3() {
    ref_patch_dy_load_2_5_fu_21151_p3 = (!tmp_546_reg_42887.read()[0].is_01())? sc_lv<32>(): ((tmp_546_reg_42887.read()[0].to_bool())? ref_patch_dy_2_63_53_fu_2108.read(): tmp_552_fu_21144_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_6_fu_21357_p3() {
    ref_patch_dy_load_2_6_fu_21357_p3 = (!tmp_565_fu_21295_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_565_fu_21295_p2.read()[0].to_bool())? ref_patch_dy_2_63_54_fu_2112.read(): tmp_572_fu_21349_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_7_fu_21564_p3() {
    ref_patch_dy_load_2_7_fu_21564_p3 = (!tmp_585_fu_21502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_585_fu_21502_p2.read()[0].to_bool())? ref_patch_dy_2_63_55_fu_2116.read(): tmp_591_fu_21556_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_2_s_fu_20139_p3() {
    ref_patch_dy_load_2_s_fu_20139_p3 = (!tmp_456_fu_20134_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_456_fu_20134_p2.read()[0].to_bool())? ref_patch_dy_2_63_48_fu_2088.read(): tmp_455_fu_20126_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_1_fu_23506_p3() {
    ref_patch_dy_load_3_1_fu_23506_p3 = (!tmp_625_reg_44426.read()[0].is_01())? sc_lv<32>(): ((tmp_625_reg_44426.read()[0].to_bool())? ref_patch_dy_3_63_49_fu_2604.read(): tmp_631_fu_23499_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_2_fu_23705_p3() {
    ref_patch_dy_load_3_2_fu_23705_p3 = (!tmp_644_reg_44477.read()[0].is_01())? sc_lv<32>(): ((tmp_644_reg_44477.read()[0].to_bool())? ref_patch_dy_3_63_50_fu_2608.read(): tmp_650_fu_23698_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_3_fu_23911_p3() {
    ref_patch_dy_load_3_3_fu_23911_p3 = (!tmp_663_fu_23849_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_663_fu_23849_p2.read()[0].to_bool())? ref_patch_dy_3_63_51_fu_2612.read(): tmp_669_fu_23903_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_4_fu_24118_p3() {
    ref_patch_dy_load_3_4_fu_24118_p3 = (!tmp_682_fu_24056_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_682_fu_24056_p2.read()[0].to_bool())? ref_patch_dy_3_63_52_fu_2616.read(): tmp_688_fu_24110_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_5_fu_24318_p3() {
    ref_patch_dy_load_3_5_fu_24318_p3 = (!tmp_701_reg_44555.read()[0].is_01())? sc_lv<32>(): ((tmp_701_reg_44555.read()[0].to_bool())? ref_patch_dy_3_63_53_fu_2620.read(): tmp_707_fu_24311_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_6_fu_24524_p3() {
    ref_patch_dy_load_3_6_fu_24524_p3 = (!tmp_720_fu_24462_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_720_fu_24462_p2.read()[0].to_bool())? ref_patch_dy_3_63_54_fu_2624.read(): tmp_726_fu_24516_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_7_fu_24731_p3() {
    ref_patch_dy_load_3_7_fu_24731_p3 = (!tmp_739_fu_24669_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_739_fu_24669_p2.read()[0].to_bool())? ref_patch_dy_3_63_55_fu_2628.read(): tmp_745_fu_24723_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_3_s_fu_23306_p3() {
    ref_patch_dy_load_3_s_fu_23306_p3 = (!tmp_612_fu_23301_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_612_fu_23301_p2.read()[0].to_bool())? ref_patch_dy_3_63_48_fu_2600.read(): tmp_611_fu_23293_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_1_fu_26674_p3() {
    ref_patch_dy_load_4_1_fu_26674_p3 = (!tmp_781_reg_46089.read()[0].is_01())? sc_lv<32>(): ((tmp_781_reg_46089.read()[0].to_bool())? ref_patch_dy_4_63_49_fu_3116.read(): tmp_787_fu_26667_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_2_fu_26873_p3() {
    ref_patch_dy_load_4_2_fu_26873_p3 = (!tmp_800_reg_46139.read()[0].is_01())? sc_lv<32>(): ((tmp_800_reg_46139.read()[0].to_bool())? ref_patch_dy_4_63_50_fu_3120.read(): tmp_806_fu_26866_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_3_fu_27079_p3() {
    ref_patch_dy_load_4_3_fu_27079_p3 = (!tmp_819_fu_27017_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_819_fu_27017_p2.read()[0].to_bool())? ref_patch_dy_4_63_51_fu_3124.read(): tmp_825_fu_27071_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_4_fu_27286_p3() {
    ref_patch_dy_load_4_4_fu_27286_p3 = (!tmp_838_fu_27224_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_838_fu_27224_p2.read()[0].to_bool())? ref_patch_dy_4_63_52_fu_3128.read(): tmp_844_fu_27278_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_5_fu_27486_p3() {
    ref_patch_dy_load_4_5_fu_27486_p3 = (!tmp_857_reg_46217.read()[0].is_01())? sc_lv<32>(): ((tmp_857_reg_46217.read()[0].to_bool())? ref_patch_dy_4_63_53_fu_3132.read(): tmp_863_fu_27479_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_6_fu_27692_p3() {
    ref_patch_dy_load_4_6_fu_27692_p3 = (!tmp_876_fu_27630_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_876_fu_27630_p2.read()[0].to_bool())? ref_patch_dy_4_63_54_fu_3136.read(): tmp_882_fu_27684_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_7_fu_27899_p3() {
    ref_patch_dy_load_4_7_fu_27899_p3 = (!tmp_895_fu_27837_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_895_fu_27837_p2.read()[0].to_bool())? ref_patch_dy_4_63_55_fu_3140.read(): tmp_901_fu_27891_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_4_s_fu_26473_p3() {
    ref_patch_dy_load_4_s_fu_26473_p3 = (!tmp_768_fu_26468_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_768_fu_26468_p2.read()[0].to_bool())? ref_patch_dy_4_63_48_fu_3112.read(): tmp_767_fu_26460_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_1_fu_29841_p3() {
    ref_patch_dy_load_5_1_fu_29841_p3 = (!tmp_937_reg_47756.read()[0].is_01())? sc_lv<32>(): ((tmp_937_reg_47756.read()[0].to_bool())? ref_patch_dy_5_63_49_fu_3628.read(): tmp_943_fu_29834_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_2_fu_30040_p3() {
    ref_patch_dy_load_5_2_fu_30040_p3 = (!tmp_956_reg_47807.read()[0].is_01())? sc_lv<32>(): ((tmp_956_reg_47807.read()[0].to_bool())? ref_patch_dy_5_63_50_fu_3632.read(): tmp_962_fu_30033_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_3_fu_30246_p3() {
    ref_patch_dy_load_5_3_fu_30246_p3 = (!tmp_975_fu_30184_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_975_fu_30184_p2.read()[0].to_bool())? ref_patch_dy_5_63_51_fu_3636.read(): tmp_981_fu_30238_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_4_fu_30453_p3() {
    ref_patch_dy_load_5_4_fu_30453_p3 = (!tmp_994_fu_30391_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_994_fu_30391_p2.read()[0].to_bool())? ref_patch_dy_5_63_52_fu_3640.read(): tmp_1000_fu_30445_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_5_fu_30653_p3() {
    ref_patch_dy_load_5_5_fu_30653_p3 = (!tmp_1013_reg_47885.read()[0].is_01())? sc_lv<32>(): ((tmp_1013_reg_47885.read()[0].to_bool())? ref_patch_dy_5_63_53_fu_3644.read(): tmp_1019_fu_30646_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_6_fu_30859_p3() {
    ref_patch_dy_load_5_6_fu_30859_p3 = (!tmp_1032_fu_30797_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1032_fu_30797_p2.read()[0].to_bool())? ref_patch_dy_5_63_54_fu_3648.read(): tmp_1038_fu_30851_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_7_fu_31066_p3() {
    ref_patch_dy_load_5_7_fu_31066_p3 = (!tmp_1051_fu_31004_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1051_fu_31004_p2.read()[0].to_bool())? ref_patch_dy_5_63_55_fu_3652.read(): tmp_1057_fu_31058_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_5_s_fu_29641_p3() {
    ref_patch_dy_load_5_s_fu_29641_p3 = (!tmp_924_fu_29636_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_924_fu_29636_p2.read()[0].to_bool())? ref_patch_dy_5_63_48_fu_3624.read(): tmp_923_fu_29628_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_1_fu_33008_p3() {
    ref_patch_dy_load_6_1_fu_33008_p3 = (!tmp_1093_reg_49424.read()[0].is_01())? sc_lv<32>(): ((tmp_1093_reg_49424.read()[0].to_bool())? ref_patch_dy_6_63_49_fu_4140.read(): tmp_1099_fu_33001_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_2_fu_33207_p3() {
    ref_patch_dy_load_6_2_fu_33207_p3 = (!tmp_1112_reg_49475.read()[0].is_01())? sc_lv<32>(): ((tmp_1112_reg_49475.read()[0].to_bool())? ref_patch_dy_6_63_50_fu_4144.read(): tmp_1118_fu_33200_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_3_fu_33413_p3() {
    ref_patch_dy_load_6_3_fu_33413_p3 = (!tmp_1131_fu_33351_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1131_fu_33351_p2.read()[0].to_bool())? ref_patch_dy_6_63_51_fu_4148.read(): tmp_1137_fu_33405_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_4_fu_33620_p3() {
    ref_patch_dy_load_6_4_fu_33620_p3 = (!tmp_1150_fu_33558_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1150_fu_33558_p2.read()[0].to_bool())? ref_patch_dy_6_63_52_fu_4152.read(): tmp_1156_fu_33612_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_5_fu_33820_p3() {
    ref_patch_dy_load_6_5_fu_33820_p3 = (!tmp_1169_reg_49553.read()[0].is_01())? sc_lv<32>(): ((tmp_1169_reg_49553.read()[0].to_bool())? ref_patch_dy_6_63_53_fu_4156.read(): tmp_1175_fu_33813_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_6_fu_34026_p3() {
    ref_patch_dy_load_6_6_fu_34026_p3 = (!tmp_1188_fu_33964_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1188_fu_33964_p2.read()[0].to_bool())? ref_patch_dy_6_63_54_fu_4160.read(): tmp_1194_fu_34018_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_7_fu_34233_p3() {
    ref_patch_dy_load_6_7_fu_34233_p3 = (!tmp_1207_fu_34171_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1207_fu_34171_p2.read()[0].to_bool())? ref_patch_dy_6_63_55_fu_4164.read(): tmp_1213_fu_34225_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_6_s_fu_32808_p3() {
    ref_patch_dy_load_6_s_fu_32808_p3 = (!tmp_1080_fu_32803_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1080_fu_32803_p2.read()[0].to_bool())? ref_patch_dy_6_63_48_fu_4136.read(): tmp_1079_fu_32795_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_1_fu_36175_p3() {
    ref_patch_dy_load_7_1_fu_36175_p3 = (!tmp_1249_reg_51092.read()[0].is_01())? sc_lv<32>(): ((tmp_1249_reg_51092.read()[0].to_bool())? ref_patch_dy_7_63_49_fu_4652.read(): tmp_1255_fu_36168_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_2_fu_36374_p3() {
    ref_patch_dy_load_7_2_fu_36374_p3 = (!tmp_1268_reg_51143.read()[0].is_01())? sc_lv<32>(): ((tmp_1268_reg_51143.read()[0].to_bool())? ref_patch_dy_7_63_50_fu_4656.read(): tmp_1274_fu_36367_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_3_fu_36580_p3() {
    ref_patch_dy_load_7_3_fu_36580_p3 = (!tmp_1287_fu_36518_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1287_fu_36518_p2.read()[0].to_bool())? ref_patch_dy_7_63_51_fu_4660.read(): tmp_1293_fu_36572_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_4_fu_36787_p3() {
    ref_patch_dy_load_7_4_fu_36787_p3 = (!tmp_1306_fu_36725_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1306_fu_36725_p2.read()[0].to_bool())? ref_patch_dy_7_63_52_fu_4664.read(): tmp_1312_fu_36779_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_5_fu_36987_p3() {
    ref_patch_dy_load_7_5_fu_36987_p3 = (!tmp_1325_reg_51228.read()[0].is_01())? sc_lv<32>(): ((tmp_1325_reg_51228.read()[0].to_bool())? ref_patch_dy_7_63_53_fu_4668.read(): tmp_1331_fu_36980_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_6_fu_37193_p3() {
    ref_patch_dy_load_7_6_fu_37193_p3 = (!tmp_1344_fu_37131_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1344_fu_37131_p2.read()[0].to_bool())? ref_patch_dy_7_63_54_fu_4672.read(): tmp_1350_fu_37185_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_7_fu_37400_p3() {
    ref_patch_dy_load_7_7_fu_37400_p3 = (!tmp_1363_fu_37338_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1363_fu_37338_p2.read()[0].to_bool())? ref_patch_dy_7_63_55_fu_4676.read(): tmp_1369_fu_37392_p3.read());
}

void batch_align2D_region::thread_ref_patch_dy_load_7_s_fu_35975_p3() {
    ref_patch_dy_load_7_s_fu_35975_p3 = (!tmp_1236_fu_35970_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1236_fu_35970_p2.read()[0].to_bool())? ref_patch_dy_7_63_48_fu_4648.read(): tmp_1235_fu_35962_p3.read());
}

void batch_align2D_region::thread_ref_patch_with_borde_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_195_6_7_fu_32442_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_195_6_5_fu_32397_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_195_6_3_fu_32352_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_195_6_1_fu_32297_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_124_6_fu_31342_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_109_6_fu_31235_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_195_6_6_fu_32432_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_195_6_4_fu_32387_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_195_6_2_fu_32342_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_195_6_fu_32282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_120_6_fu_31322_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_113_6_fu_31256_p1.read());
    } else {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())))) {
        ref_patch_with_borde_1_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_1_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())))) {
        ref_patch_with_borde_1_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_1_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_6))) {
        ref_patch_with_borde_1_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_1_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_195_5_7_fu_29275_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_195_5_5_fu_29230_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_195_5_3_fu_29185_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_195_5_1_fu_29130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_124_5_fu_28175_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_109_5_fu_28068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_195_5_6_fu_29265_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_195_5_4_fu_29220_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_195_5_2_fu_29175_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_195_5_fu_29115_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_120_5_fu_28155_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_113_5_fu_28089_p1.read());
    } else {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())))) {
        ref_patch_with_borde_2_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_2_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())))) {
        ref_patch_with_borde_2_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_2_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_5))) {
        ref_patch_with_borde_2_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_2_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_195_4_7_fu_26107_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_195_4_5_fu_26062_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_195_4_3_fu_26017_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_195_4_1_fu_25962_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_124_4_fu_25007_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_109_4_fu_24900_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_195_4_6_fu_26097_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_195_4_4_fu_26052_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_195_4_2_fu_26007_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_195_4_fu_25947_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_120_4_fu_24987_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_113_4_fu_24921_p1.read());
    } else {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read())))) {
        ref_patch_with_borde_3_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_3_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read())))) {
        ref_patch_with_borde_3_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_3_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_4))) {
        ref_patch_with_borde_3_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_3_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_195_3_7_fu_22940_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_195_3_5_fu_22895_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_195_3_3_fu_22850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_195_3_1_fu_22795_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_124_3_fu_21840_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_109_3_fu_21739_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_195_3_6_fu_22930_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_195_3_4_fu_22885_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_195_3_2_fu_22840_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_195_3_fu_22780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_120_3_fu_21820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_113_3_fu_21760_p1.read());
    } else {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_4_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_4_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_4_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_4_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_3))) {
        ref_patch_with_borde_4_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_4_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_195_2_7_fu_19773_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_195_2_5_fu_19728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_195_2_3_fu_19683_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_195_2_1_fu_19628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_124_2_fu_18673_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_109_2_fu_18572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_195_2_6_fu_19763_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_195_2_4_fu_19718_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_195_2_2_fu_19673_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_195_2_fu_19613_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_120_2_fu_18653_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_113_2_fu_18593_p1.read());
    } else {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_5_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_5_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_2))) {
        ref_patch_with_borde_5_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_195_1_7_fu_16606_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_195_1_5_fu_16561_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_195_1_3_fu_16516_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_195_1_1_fu_16461_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_124_1_fu_15506_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_109_1_fu_15405_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_195_1_6_fu_16596_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_195_1_4_fu_16551_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_195_1_2_fu_16506_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_195_1_fu_16446_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_120_1_fu_15486_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_113_1_fu_15426_p1.read());
    } else {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_6_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_6_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_6_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_6_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_1))) {
        ref_patch_with_borde_6_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_6_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_195_0_7_fu_13439_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_195_0_5_fu_13394_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_195_0_3_fu_13349_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_195_0_1_fu_13294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_104_fu_12339_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_90_fu_12238_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_195_0_6_fu_13429_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_195_0_4_fu_13384_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_195_0_2_fu_13339_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_146_fu_13279_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_101_fu_12319_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_92_fu_12259_p1.read());
    } else {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_7_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_7_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_7_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_7_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_0))) {
        ref_patch_with_borde_7_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_7_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_195_7_7_fu_35609_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_195_7_5_fu_35564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_195_7_3_fu_35519_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_195_7_1_fu_35464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_124_7_fu_34509_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_109_7_fu_34408_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_s_fu_12020_p1.read());
    } else {
        ref_patch_with_borde_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_195_7_6_fu_35599_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_195_7_4_fu_35554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_195_7_2_fu_35509_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_195_7_fu_35449_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_120_7_fu_34489_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_113_7_fu_34429_p1.read());
    } else {
        ref_patch_with_borde_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_ce0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_ce0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_37903_pp2_iter1_reg.read(), ap_const_lv3_7))) {
        ref_patch_with_borde_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_tmp107_cast_fu_12228_p1() {
    tmp107_cast_fu_12228_p1 = esl_zext<7,5>(tmp4_fu_12222_p2.read());
}

void batch_align2D_region::thread_tmp108_cast_fu_12249_p1() {
    tmp108_cast_fu_12249_p1 = esl_zext<7,5>(tmp5_fu_12243_p2.read());
}

void batch_align2D_region::thread_tmp109_cast_fu_12310_p1() {
    tmp109_cast_fu_12310_p1 = esl_zext<7,5>(tmp8_fu_12305_p2.read());
}

void batch_align2D_region::thread_tmp112_cast_fu_13192_p1() {
    tmp112_cast_fu_13192_p1 = esl_sext<11,6>(tmp9_fu_13186_p2.read());
}

void batch_align2D_region::thread_tmp130_cast_fu_15395_p1() {
    tmp130_cast_fu_15395_p1 = esl_zext<7,5>(tmp130_fu_15389_p2.read());
}

void batch_align2D_region::thread_tmp130_fu_15389_p2() {
    tmp130_fu_15389_p2 = (!ap_const_lv5_C.is_01() || !x_cast_172_fu_15345_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_cast_172_fu_15345_p1.read()));
}

void batch_align2D_region::thread_tmp131_cast_fu_15416_p1() {
    tmp131_cast_fu_15416_p1 = esl_zext<7,5>(tmp131_fu_15410_p2.read());
}

void batch_align2D_region::thread_tmp131_fu_15410_p2() {
    tmp131_fu_15410_p2 = (!ap_const_lv5_A.is_01() || !x_cast_172_fu_15345_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_cast_172_fu_15345_p1.read()));
}

void batch_align2D_region::thread_tmp132_cast_fu_15477_p1() {
    tmp132_cast_fu_15477_p1 = esl_zext<7,5>(tmp132_fu_15472_p2.read());
}

void batch_align2D_region::thread_tmp132_fu_15472_p2() {
    tmp132_fu_15472_p2 = (!x_cast_172_reg_40415.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_cast_172_reg_40415.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp133_fu_16241_p2() {
    tmp133_fu_16241_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp134_fu_16247_p2() {
    tmp134_fu_16247_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp135_cast_fu_16359_p1() {
    tmp135_cast_fu_16359_p1 = esl_sext<11,6>(tmp135_fu_16353_p2.read());
}

void batch_align2D_region::thread_tmp135_fu_16353_p2() {
    tmp135_fu_16353_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1401_fu_16345_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1401_fu_16345_p1.read()));
}

void batch_align2D_region::thread_tmp153_cast_fu_18562_p1() {
    tmp153_cast_fu_18562_p1 = esl_zext<7,5>(tmp153_fu_18556_p2.read());
}

void batch_align2D_region::thread_tmp153_fu_18556_p2() {
    tmp153_fu_18556_p2 = (!ap_const_lv5_C.is_01() || !x_2_cast_fu_18512_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_2_cast_fu_18512_p1.read()));
}

void batch_align2D_region::thread_tmp154_cast_fu_18583_p1() {
    tmp154_cast_fu_18583_p1 = esl_zext<7,5>(tmp154_fu_18577_p2.read());
}

void batch_align2D_region::thread_tmp154_fu_18577_p2() {
    tmp154_fu_18577_p2 = (!ap_const_lv5_A.is_01() || !x_2_cast_fu_18512_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_2_cast_fu_18512_p1.read()));
}

void batch_align2D_region::thread_tmp155_cast_fu_18644_p1() {
    tmp155_cast_fu_18644_p1 = esl_zext<7,5>(tmp155_fu_18639_p2.read());
}

void batch_align2D_region::thread_tmp155_fu_18639_p2() {
    tmp155_fu_18639_p2 = (!x_2_cast_reg_42083.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_2_cast_reg_42083.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp156_fu_19408_p2() {
    tmp156_fu_19408_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp157_fu_19414_p2() {
    tmp157_fu_19414_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp158_cast_fu_19526_p1() {
    tmp158_cast_fu_19526_p1 = esl_sext<11,6>(tmp158_fu_19520_p2.read());
}

void batch_align2D_region::thread_tmp158_fu_19520_p2() {
    tmp158_fu_19520_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1443_fu_19512_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1443_fu_19512_p1.read()));
}

void batch_align2D_region::thread_tmp176_cast_fu_21729_p1() {
    tmp176_cast_fu_21729_p1 = esl_zext<7,5>(tmp176_fu_21723_p2.read());
}

void batch_align2D_region::thread_tmp176_fu_21723_p2() {
    tmp176_fu_21723_p2 = (!ap_const_lv5_C.is_01() || !x_3_cast_fu_21679_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_3_cast_fu_21679_p1.read()));
}

void batch_align2D_region::thread_tmp177_cast_fu_21750_p1() {
    tmp177_cast_fu_21750_p1 = esl_zext<7,5>(tmp177_fu_21744_p2.read());
}

void batch_align2D_region::thread_tmp177_fu_21744_p2() {
    tmp177_fu_21744_p2 = (!ap_const_lv5_A.is_01() || !x_3_cast_fu_21679_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_3_cast_fu_21679_p1.read()));
}

void batch_align2D_region::thread_tmp178_cast_fu_21811_p1() {
    tmp178_cast_fu_21811_p1 = esl_zext<7,5>(tmp178_fu_21806_p2.read());
}

void batch_align2D_region::thread_tmp178_fu_21806_p2() {
    tmp178_fu_21806_p2 = (!x_3_cast_reg_43751.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_3_cast_reg_43751.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp179_fu_22575_p2() {
    tmp179_fu_22575_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp180_fu_22581_p2() {
    tmp180_fu_22581_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp181_cast_fu_22693_p1() {
    tmp181_cast_fu_22693_p1 = esl_sext<11,6>(tmp181_fu_22687_p2.read());
}

void batch_align2D_region::thread_tmp181_fu_22687_p2() {
    tmp181_fu_22687_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1454_fu_22683_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1454_fu_22683_p1.read()));
}

void batch_align2D_region::thread_tmp199_cast_fu_24890_p1() {
    tmp199_cast_fu_24890_p1 = esl_zext<7,5>(tmp199_fu_24884_p2.read());
}

void batch_align2D_region::thread_tmp199_fu_24884_p2() {
    tmp199_fu_24884_p2 = (!ap_const_lv5_C.is_01() || !x_4_cast_fu_24840_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_4_cast_fu_24840_p1.read()));
}

void batch_align2D_region::thread_tmp200_cast_fu_24911_p1() {
    tmp200_cast_fu_24911_p1 = esl_zext<7,5>(tmp200_fu_24905_p2.read());
}

void batch_align2D_region::thread_tmp200_fu_24905_p2() {
    tmp200_fu_24905_p2 = (!ap_const_lv5_A.is_01() || !x_4_cast_fu_24840_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_4_cast_fu_24840_p1.read()));
}

void batch_align2D_region::thread_tmp201_cast_fu_24978_p1() {
    tmp201_cast_fu_24978_p1 = esl_zext<7,5>(tmp201_fu_24973_p2.read());
}

void batch_align2D_region::thread_tmp201_fu_24973_p2() {
    tmp201_fu_24973_p2 = (!x_4_cast_reg_45414.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_4_cast_reg_45414.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp202_fu_25742_p2() {
    tmp202_fu_25742_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp203_fu_25748_p2() {
    tmp203_fu_25748_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp204_cast_fu_25860_p1() {
    tmp204_cast_fu_25860_p1 = esl_sext<11,6>(tmp204_fu_25854_p2.read());
}

void batch_align2D_region::thread_tmp204_fu_25854_p2() {
    tmp204_fu_25854_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1465_fu_25846_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1465_fu_25846_p1.read()));
}

void batch_align2D_region::thread_tmp222_cast_fu_28058_p1() {
    tmp222_cast_fu_28058_p1 = esl_zext<7,5>(tmp222_fu_28052_p2.read());
}

void batch_align2D_region::thread_tmp222_fu_28052_p2() {
    tmp222_fu_28052_p2 = (!ap_const_lv5_C.is_01() || !x_5_cast_fu_28008_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_5_cast_fu_28008_p1.read()));
}

void batch_align2D_region::thread_tmp223_cast_fu_28079_p1() {
    tmp223_cast_fu_28079_p1 = esl_zext<7,5>(tmp223_fu_28073_p2.read());
}

void batch_align2D_region::thread_tmp223_fu_28073_p2() {
    tmp223_fu_28073_p2 = (!ap_const_lv5_A.is_01() || !x_5_cast_fu_28008_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_5_cast_fu_28008_p1.read()));
}

void batch_align2D_region::thread_tmp224_cast_fu_28146_p1() {
    tmp224_cast_fu_28146_p1 = esl_zext<7,5>(tmp224_fu_28141_p2.read());
}

void batch_align2D_region::thread_tmp224_fu_28141_p2() {
    tmp224_fu_28141_p2 = (!x_5_cast_reg_47076.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_5_cast_reg_47076.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp225_fu_28910_p2() {
    tmp225_fu_28910_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp226_fu_28916_p2() {
    tmp226_fu_28916_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp227_cast_fu_29028_p1() {
    tmp227_cast_fu_29028_p1 = esl_sext<11,6>(tmp227_fu_29022_p2.read());
}

void batch_align2D_region::thread_tmp227_fu_29022_p2() {
    tmp227_fu_29022_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1476_fu_29014_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1476_fu_29014_p1.read()));
}

void batch_align2D_region::thread_tmp245_cast_fu_31225_p1() {
    tmp245_cast_fu_31225_p1 = esl_zext<7,5>(tmp245_fu_31219_p2.read());
}

void batch_align2D_region::thread_tmp245_fu_31219_p2() {
    tmp245_fu_31219_p2 = (!ap_const_lv5_C.is_01() || !x_6_cast_fu_31175_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_6_cast_fu_31175_p1.read()));
}

void batch_align2D_region::thread_tmp246_cast_fu_31246_p1() {
    tmp246_cast_fu_31246_p1 = esl_zext<7,5>(tmp246_fu_31240_p2.read());
}

void batch_align2D_region::thread_tmp246_fu_31240_p2() {
    tmp246_fu_31240_p2 = (!ap_const_lv5_A.is_01() || !x_6_cast_fu_31175_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_6_cast_fu_31175_p1.read()));
}

void batch_align2D_region::thread_tmp247_cast_fu_31313_p1() {
    tmp247_cast_fu_31313_p1 = esl_zext<7,5>(tmp247_fu_31308_p2.read());
}

void batch_align2D_region::thread_tmp247_fu_31308_p2() {
    tmp247_fu_31308_p2 = (!x_6_cast_reg_48744.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_6_cast_reg_48744.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp248_fu_32077_p2() {
    tmp248_fu_32077_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp249_fu_32083_p2() {
    tmp249_fu_32083_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp250_cast_fu_32195_p1() {
    tmp250_cast_fu_32195_p1 = esl_sext<11,6>(tmp250_fu_32189_p2.read());
}

void batch_align2D_region::thread_tmp250_fu_32189_p2() {
    tmp250_fu_32189_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1487_fu_32181_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1487_fu_32181_p1.read()));
}

void batch_align2D_region::thread_tmp268_cast_fu_34398_p1() {
    tmp268_cast_fu_34398_p1 = esl_zext<7,5>(tmp268_fu_34392_p2.read());
}

void batch_align2D_region::thread_tmp268_fu_34392_p2() {
    tmp268_fu_34392_p2 = (!ap_const_lv5_C.is_01() || !x_7_cast_fu_34348_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_7_cast_fu_34348_p1.read()));
}

void batch_align2D_region::thread_tmp269_cast_fu_34419_p1() {
    tmp269_cast_fu_34419_p1 = esl_zext<7,5>(tmp269_fu_34413_p2.read());
}

void batch_align2D_region::thread_tmp269_fu_34413_p2() {
    tmp269_fu_34413_p2 = (!ap_const_lv5_A.is_01() || !x_7_cast_fu_34348_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_7_cast_fu_34348_p1.read()));
}

void batch_align2D_region::thread_tmp270_cast_fu_34480_p1() {
    tmp270_cast_fu_34480_p1 = esl_zext<7,5>(tmp270_fu_34475_p2.read());
}

void batch_align2D_region::thread_tmp270_fu_34475_p2() {
    tmp270_fu_34475_p2 = (!x_7_cast_reg_50417.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_7_cast_reg_50417.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp271_fu_35244_p2() {
    tmp271_fu_35244_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp272_fu_35250_p2() {
    tmp272_fu_35250_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp273_cast_fu_35362_p1() {
    tmp273_cast_fu_35362_p1 = esl_sext<11,6>(tmp273_fu_35356_p2.read());
}

void batch_align2D_region::thread_tmp273_fu_35356_p2() {
    tmp273_fu_35356_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1498_fu_35348_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1498_fu_35348_p1.read()));
}

void batch_align2D_region::thread_tmp4_fu_12222_p2() {
    tmp4_fu_12222_p2 = (!ap_const_lv5_C.is_01() || !x_cast_fu_12178_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_cast_fu_12178_p1.read()));
}

void batch_align2D_region::thread_tmp5_fu_12243_p2() {
    tmp5_fu_12243_p2 = (!ap_const_lv5_A.is_01() || !x_cast_fu_12178_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_cast_fu_12178_p1.read()));
}

void batch_align2D_region::thread_tmp6_fu_13074_p2() {
    tmp6_fu_13074_p2 = (grp_fu_10538_p2.read() | grp_fu_10554_p2.read());
}

void batch_align2D_region::thread_tmp7_fu_13080_p2() {
    tmp7_fu_13080_p2 = (grp_fu_10560_p2.read() | grp_fu_10566_p2.read());
}

void batch_align2D_region::thread_tmp8_fu_12305_p2() {
    tmp8_fu_12305_p2 = (!x_cast_reg_38747.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_cast_reg_38747.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp9_fu_13186_p2() {
    tmp9_fu_13186_p2 = (!ap_const_lv6_3C.is_01() || !tmp_1387_fu_13178_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3C) + sc_biguint<6>(tmp_1387_fu_13178_p1.read()));
}

void batch_align2D_region::thread_tmp_1000_fu_30445_p3() {
    tmp_1000_fu_30445_p3 = (!tmp_992_fu_30377_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_992_fu_30377_p2.read()[0].to_bool())? ref_patch_dy_5_63_44_fu_3608.read(): tmp_999_fu_30437_p3.read());
}

void batch_align2D_region::thread_tmp_1001_fu_30487_p2() {
    tmp_1001_fu_30487_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1002_fu_30493_p3() {
    tmp_1002_fu_30493_p3 = (!tmp_1001_fu_30487_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1001_fu_30487_p2.read()[0].to_bool())? ref_patch_dx_5_63_12_fu_3224.read(): ref_patch_dx_5_63_61_fu_3420.read());
}

void batch_align2D_region::thread_tmp_1003_fu_30501_p2() {
    tmp_1003_fu_30501_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_1004_fu_30507_p3() {
    tmp_1004_fu_30507_p3 = (!tmp_1003_fu_30501_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1003_fu_30501_p2.read()[0].to_bool())? ref_patch_dx_5_63_19_fu_3252.read(): tmp_1002_fu_30493_p3.read());
}

void batch_align2D_region::thread_tmp_1005_fu_30515_p2() {
    tmp_1005_fu_30515_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1006_fu_30521_p3() {
    tmp_1006_fu_30521_p3 = (!tmp_1005_fu_30515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1005_fu_30515_p2.read()[0].to_bool())? ref_patch_dx_5_63_26_fu_3280.read(): tmp_1004_fu_30507_p3.read());
}

void batch_align2D_region::thread_tmp_1007_fu_30529_p2() {
    tmp_1007_fu_30529_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_1008_fu_30535_p3() {
    tmp_1008_fu_30535_p3 = (!tmp_1007_fu_30529_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1007_fu_30529_p2.read()[0].to_bool())? ref_patch_dx_5_63_33_fu_3308.read(): tmp_1006_fu_30521_p3.read());
}

void batch_align2D_region::thread_tmp_1009_fu_30543_p2() {
    tmp_1009_fu_30543_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_100_fu_12314_p2() {
    tmp_100_fu_12314_p2 = (!tmp109_cast_fu_12310_p1.read().is_01() || !tmp_88_reg_38752.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp109_cast_fu_12310_p1.read()) + sc_biguint<7>(tmp_88_reg_38752.read()));
}

void batch_align2D_region::thread_tmp_1010_fu_30549_p3() {
    tmp_1010_fu_30549_p3 = (!tmp_1009_fu_30543_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1009_fu_30543_p2.read()[0].to_bool())? ref_patch_dx_5_63_40_fu_3336.read(): tmp_1008_fu_30535_p3.read());
}

void batch_align2D_region::thread_tmp_1011_fu_30557_p2() {
    tmp_1011_fu_30557_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1012_fu_30563_p3() {
    tmp_1012_fu_30563_p3 = (!tmp_1011_fu_30557_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1011_fu_30557_p2.read()[0].to_bool())? ref_patch_dx_5_63_47_fu_3364.read(): tmp_1010_fu_30549_p3.read());
}

void batch_align2D_region::thread_tmp_1013_fu_30571_p2() {
    tmp_1013_fu_30571_p2 = (!tmp_205_5_4_t_fu_30482_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_4_t_fu_30482_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_1014_fu_30611_p3() {
    tmp_1014_fu_30611_p3 = (!tmp_1001_reg_47850.read()[0].is_01())? sc_lv<32>(): ((tmp_1001_reg_47850.read()[0].to_bool())? ref_patch_dy_5_63_5_fu_3452.read(): ref_patch_dy_5_63_61_fu_3676.read());
}

void batch_align2D_region::thread_tmp_1015_fu_30618_p3() {
    tmp_1015_fu_30618_p3 = (!tmp_1003_reg_47855.read()[0].is_01())? sc_lv<32>(): ((tmp_1003_reg_47855.read()[0].to_bool())? ref_patch_dy_5_63_13_fu_3484.read(): tmp_1014_fu_30611_p3.read());
}

void batch_align2D_region::thread_tmp_1016_fu_30625_p3() {
    tmp_1016_fu_30625_p3 = (!tmp_1005_reg_47860.read()[0].is_01())? sc_lv<32>(): ((tmp_1005_reg_47860.read()[0].to_bool())? ref_patch_dy_5_63_21_fu_3516.read(): tmp_1015_fu_30618_p3.read());
}

void batch_align2D_region::thread_tmp_1017_fu_30632_p3() {
    tmp_1017_fu_30632_p3 = (!tmp_1007_reg_47865.read()[0].is_01())? sc_lv<32>(): ((tmp_1007_reg_47865.read()[0].to_bool())? ref_patch_dy_5_63_29_fu_3548.read(): tmp_1016_fu_30625_p3.read());
}

void batch_align2D_region::thread_tmp_1018_fu_30639_p3() {
    tmp_1018_fu_30639_p3 = (!tmp_1009_reg_47870.read()[0].is_01())? sc_lv<32>(): ((tmp_1009_reg_47870.read()[0].to_bool())? ref_patch_dy_5_63_37_fu_3580.read(): tmp_1017_fu_30632_p3.read());
}

void batch_align2D_region::thread_tmp_1019_fu_30646_p3() {
    tmp_1019_fu_30646_p3 = (!tmp_1011_reg_47875.read()[0].is_01())? sc_lv<32>(): ((tmp_1011_reg_47875.read()[0].to_bool())? ref_patch_dy_5_63_45_fu_3612.read(): tmp_1018_fu_30639_p3.read());
}

void batch_align2D_region::thread_tmp_101_1_fu_16196_p1() {
    tmp_101_1_fu_16196_p1 = esl_zext<32,8>(pyr_region_fcoord_1_1.read());
}

void batch_align2D_region::thread_tmp_101_2_fu_19363_p1() {
    tmp_101_2_fu_19363_p1 = esl_zext<32,8>(pyr_region_fcoord_2_1.read());
}

void batch_align2D_region::thread_tmp_101_3_fu_22530_p1() {
    tmp_101_3_fu_22530_p1 = esl_zext<32,8>(pyr_region_fcoord_3_1.read());
}

void batch_align2D_region::thread_tmp_101_4_fu_25697_p1() {
    tmp_101_4_fu_25697_p1 = esl_zext<32,8>(pyr_region_fcoord_4_1.read());
}

void batch_align2D_region::thread_tmp_101_5_fu_28865_p1() {
    tmp_101_5_fu_28865_p1 = esl_zext<32,8>(pyr_region_fcoord_5_1.read());
}

void batch_align2D_region::thread_tmp_101_6_fu_32032_p1() {
    tmp_101_6_fu_32032_p1 = esl_zext<32,8>(pyr_region_fcoord_6_1.read());
}

void batch_align2D_region::thread_tmp_101_7_fu_35199_p1() {
    tmp_101_7_fu_35199_p1 = esl_zext<32,8>(pyr_region_fcoord_7_1.read());
}

void batch_align2D_region::thread_tmp_101_fu_12319_p1() {
    tmp_101_fu_12319_p1 = esl_zext<64,7>(tmp_100_fu_12314_p2.read());
}

void batch_align2D_region::thread_tmp_1020_fu_30713_p2() {
    tmp_1020_fu_30713_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1021_fu_30719_p3() {
    tmp_1021_fu_30719_p3 = (!tmp_1020_fu_30713_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1020_fu_30713_p2.read()[0].to_bool())? ref_patch_dx_5_63_13_fu_3228.read(): ref_patch_dx_5_63_62_fu_3424.read());
}

void batch_align2D_region::thread_tmp_1022_fu_30727_p2() {
    tmp_1022_fu_30727_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_1023_fu_30733_p3() {
    tmp_1023_fu_30733_p3 = (!tmp_1022_fu_30727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1022_fu_30727_p2.read()[0].to_bool())? ref_patch_dx_5_63_20_fu_3256.read(): tmp_1021_fu_30719_p3.read());
}

void batch_align2D_region::thread_tmp_1024_fu_30741_p2() {
    tmp_1024_fu_30741_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1025_fu_30747_p3() {
    tmp_1025_fu_30747_p3 = (!tmp_1024_fu_30741_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1024_fu_30741_p2.read()[0].to_bool())? ref_patch_dx_5_63_27_fu_3284.read(): tmp_1023_fu_30733_p3.read());
}

void batch_align2D_region::thread_tmp_1026_fu_30755_p2() {
    tmp_1026_fu_30755_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_1027_fu_30761_p3() {
    tmp_1027_fu_30761_p3 = (!tmp_1026_fu_30755_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1026_fu_30755_p2.read()[0].to_bool())? ref_patch_dx_5_63_34_fu_3312.read(): tmp_1025_fu_30747_p3.read());
}

void batch_align2D_region::thread_tmp_1028_fu_30769_p2() {
    tmp_1028_fu_30769_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_1029_fu_30775_p3() {
    tmp_1029_fu_30775_p3 = (!tmp_1028_fu_30769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1028_fu_30769_p2.read()[0].to_bool())? ref_patch_dx_5_63_41_fu_3340.read(): tmp_1027_fu_30761_p3.read());
}

void batch_align2D_region::thread_tmp_102_cast_fu_12291_p1() {
    tmp_102_cast_fu_12291_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q0.read());
}

void batch_align2D_region::thread_tmp_102_fu_12324_p2() {
    tmp_102_fu_12324_p2 = (tmp_88_reg_38752.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1030_fu_30783_p2() {
    tmp_1030_fu_30783_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1031_fu_30789_p3() {
    tmp_1031_fu_30789_p3 = (!tmp_1030_fu_30783_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1030_fu_30783_p2.read()[0].to_bool())? ref_patch_dx_5_63_48_fu_3368.read(): tmp_1029_fu_30775_p3.read());
}

void batch_align2D_region::thread_tmp_1032_fu_30797_p2() {
    tmp_1032_fu_30797_p2 = (!tmp_205_5_5_t_fu_30708_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_5_t_fu_30708_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_1033_fu_30811_p3() {
    tmp_1033_fu_30811_p3 = (!tmp_1020_fu_30713_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1020_fu_30713_p2.read()[0].to_bool())? ref_patch_dy_5_63_6_fu_3456.read(): ref_patch_dy_5_63_62_fu_3680.read());
}

void batch_align2D_region::thread_tmp_1034_fu_30819_p3() {
    tmp_1034_fu_30819_p3 = (!tmp_1022_fu_30727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1022_fu_30727_p2.read()[0].to_bool())? ref_patch_dy_5_63_14_fu_3488.read(): tmp_1033_fu_30811_p3.read());
}

void batch_align2D_region::thread_tmp_1035_fu_30827_p3() {
    tmp_1035_fu_30827_p3 = (!tmp_1024_fu_30741_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1024_fu_30741_p2.read()[0].to_bool())? ref_patch_dy_5_63_22_fu_3520.read(): tmp_1034_fu_30819_p3.read());
}

void batch_align2D_region::thread_tmp_1036_fu_30835_p3() {
    tmp_1036_fu_30835_p3 = (!tmp_1026_fu_30755_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1026_fu_30755_p2.read()[0].to_bool())? ref_patch_dy_5_63_30_fu_3552.read(): tmp_1035_fu_30827_p3.read());
}

void batch_align2D_region::thread_tmp_1037_fu_30843_p3() {
    tmp_1037_fu_30843_p3 = (!tmp_1028_fu_30769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1028_fu_30769_p2.read()[0].to_bool())? ref_patch_dy_5_63_38_fu_3584.read(): tmp_1036_fu_30835_p3.read());
}

void batch_align2D_region::thread_tmp_1038_fu_30851_p3() {
    tmp_1038_fu_30851_p3 = (!tmp_1030_fu_30783_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1030_fu_30783_p2.read()[0].to_bool())? ref_patch_dy_5_63_46_fu_3616.read(): tmp_1037_fu_30843_p3.read());
}

void batch_align2D_region::thread_tmp_1039_fu_30920_p2() {
    tmp_1039_fu_30920_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_103_fu_12333_p2() {
    tmp_103_fu_12333_p2 = (!x_cast1_fu_12288_p1.read().is_01() || !tmp_118_cast_fu_12329_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_cast1_fu_12288_p1.read()) + sc_biguint<8>(tmp_118_cast_fu_12329_p1.read()));
}

void batch_align2D_region::thread_tmp_1040_fu_30926_p3() {
    tmp_1040_fu_30926_p3 = (!tmp_1039_fu_30920_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1039_fu_30920_p2.read()[0].to_bool())? ref_patch_dx_5_63_14_fu_3232.read(): ref_patch_dx_5_63_63_fu_3428.read());
}

void batch_align2D_region::thread_tmp_1041_fu_30934_p2() {
    tmp_1041_fu_30934_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1042_fu_30940_p3() {
    tmp_1042_fu_30940_p3 = (!tmp_1041_fu_30934_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1041_fu_30934_p2.read()[0].to_bool())? ref_patch_dx_5_63_21_fu_3260.read(): tmp_1040_fu_30926_p3.read());
}

void batch_align2D_region::thread_tmp_1043_fu_30948_p2() {
    tmp_1043_fu_30948_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_1044_fu_30954_p3() {
    tmp_1044_fu_30954_p3 = (!tmp_1043_fu_30948_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1043_fu_30948_p2.read()[0].to_bool())? ref_patch_dx_5_63_28_fu_3288.read(): tmp_1042_fu_30940_p3.read());
}

void batch_align2D_region::thread_tmp_1045_fu_30962_p2() {
    tmp_1045_fu_30962_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1046_fu_30968_p3() {
    tmp_1046_fu_30968_p3 = (!tmp_1045_fu_30962_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1045_fu_30962_p2.read()[0].to_bool())? ref_patch_dx_5_63_35_fu_3316.read(): tmp_1044_fu_30954_p3.read());
}

void batch_align2D_region::thread_tmp_1047_fu_30976_p2() {
    tmp_1047_fu_30976_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1048_fu_30982_p3() {
    tmp_1048_fu_30982_p3 = (!tmp_1047_fu_30976_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1047_fu_30976_p2.read()[0].to_bool())? ref_patch_dx_5_63_42_fu_3344.read(): tmp_1046_fu_30968_p3.read());
}

void batch_align2D_region::thread_tmp_1049_fu_30990_p2() {
    tmp_1049_fu_30990_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_104_fu_12339_p1() {
    tmp_104_fu_12339_p1 = esl_zext<64,8>(tmp_103_fu_12333_p2.read());
}

void batch_align2D_region::thread_tmp_1050_fu_30996_p3() {
    tmp_1050_fu_30996_p3 = (!tmp_1049_fu_30990_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1049_fu_30990_p2.read()[0].to_bool())? ref_patch_dx_5_63_49_fu_3372.read(): tmp_1048_fu_30982_p3.read());
}

void batch_align2D_region::thread_tmp_1051_fu_31004_p2() {
    tmp_1051_fu_31004_p2 = (!tmp_205_5_652_t_fu_30915_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_652_t_fu_30915_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1052_fu_31018_p3() {
    tmp_1052_fu_31018_p3 = (!tmp_1039_fu_30920_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1039_fu_30920_p2.read()[0].to_bool())? ref_patch_dy_5_63_7_fu_3460.read(): ref_patch_dy_5_63_63_fu_3684.read());
}

void batch_align2D_region::thread_tmp_1053_fu_31026_p3() {
    tmp_1053_fu_31026_p3 = (!tmp_1041_fu_30934_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1041_fu_30934_p2.read()[0].to_bool())? ref_patch_dy_5_63_15_fu_3492.read(): tmp_1052_fu_31018_p3.read());
}

void batch_align2D_region::thread_tmp_1054_fu_31034_p3() {
    tmp_1054_fu_31034_p3 = (!tmp_1043_fu_30948_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1043_fu_30948_p2.read()[0].to_bool())? ref_patch_dy_5_63_23_fu_3524.read(): tmp_1053_fu_31026_p3.read());
}

void batch_align2D_region::thread_tmp_1055_fu_31042_p3() {
    tmp_1055_fu_31042_p3 = (!tmp_1045_fu_30962_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1045_fu_30962_p2.read()[0].to_bool())? ref_patch_dy_5_63_31_fu_3556.read(): tmp_1054_fu_31034_p3.read());
}

void batch_align2D_region::thread_tmp_1056_fu_31050_p3() {
    tmp_1056_fu_31050_p3 = (!tmp_1047_fu_30976_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1047_fu_30976_p2.read()[0].to_bool())? ref_patch_dy_5_63_39_fu_3588.read(): tmp_1055_fu_31042_p3.read());
}

void batch_align2D_region::thread_tmp_1057_fu_31058_p3() {
    tmp_1057_fu_31058_p3 = (!tmp_1049_fu_30990_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1049_fu_30990_p2.read()[0].to_bool())? ref_patch_dy_5_63_47_fu_3620.read(): tmp_1056_fu_31050_p3.read());
}

void batch_align2D_region::thread_tmp_105_fu_12356_p2() {
    tmp_105_fu_12356_p2 = (!tmp_117_cast_fu_12348_p1.read().is_01() || !tmp_121_cast_fu_12352_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_117_cast_fu_12348_p1.read()) - sc_biguint<9>(tmp_121_cast_fu_12352_p1.read()));
}

void batch_align2D_region::thread_tmp_1068_fu_32725_p2() {
    tmp_1068_fu_32725_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1069_fu_32730_p3() {
    tmp_1069_fu_32730_p3 = (!tmp_1068_fu_32725_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1068_fu_32725_p2.read()[0].to_bool())? ref_patch_dy_6_63_fu_3944.read(): ref_patch_dy_6_63_56_fu_4168.read());
}

void batch_align2D_region::thread_tmp_106_1_fu_15383_p2() {
    tmp_106_1_fu_15383_p2 = (!p_shl8_1_cast_fu_15379_p1.read().is_01() || !p_shl_1_cast_fu_15367_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_1_cast_fu_15379_p1.read()) + sc_biguint<7>(p_shl_1_cast_fu_15367_p1.read()));
}

void batch_align2D_region::thread_tmp_106_2_fu_18550_p2() {
    tmp_106_2_fu_18550_p2 = (!p_shl8_2_cast_fu_18546_p1.read().is_01() || !p_shl_2_cast_fu_18534_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_2_cast_fu_18546_p1.read()) + sc_biguint<7>(p_shl_2_cast_fu_18534_p1.read()));
}

void batch_align2D_region::thread_tmp_106_3_fu_21717_p2() {
    tmp_106_3_fu_21717_p2 = (!p_shl8_3_cast_fu_21713_p1.read().is_01() || !p_shl_3_cast_fu_21701_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_3_cast_fu_21713_p1.read()) + sc_biguint<7>(p_shl_3_cast_fu_21701_p1.read()));
}

void batch_align2D_region::thread_tmp_106_4_fu_24878_p2() {
    tmp_106_4_fu_24878_p2 = (!p_shl8_4_cast_fu_24874_p1.read().is_01() || !p_shl_4_cast_fu_24862_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_4_cast_fu_24874_p1.read()) + sc_biguint<7>(p_shl_4_cast_fu_24862_p1.read()));
}

void batch_align2D_region::thread_tmp_106_5_fu_28046_p2() {
    tmp_106_5_fu_28046_p2 = (!p_shl8_5_cast_fu_28042_p1.read().is_01() || !p_shl_5_cast_fu_28030_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_5_cast_fu_28042_p1.read()) + sc_biguint<7>(p_shl_5_cast_fu_28030_p1.read()));
}

void batch_align2D_region::thread_tmp_106_6_fu_31213_p2() {
    tmp_106_6_fu_31213_p2 = (!p_shl8_6_cast_fu_31209_p1.read().is_01() || !p_shl_6_cast_fu_31197_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_6_cast_fu_31209_p1.read()) + sc_biguint<7>(p_shl_6_cast_fu_31197_p1.read()));
}

void batch_align2D_region::thread_tmp_106_7_fu_34386_p2() {
    tmp_106_7_fu_34386_p2 = (!p_shl8_7_cast_fu_34382_p1.read().is_01() || !p_shl_7_cast_fu_34370_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_7_cast_fu_34382_p1.read()) + sc_biguint<7>(p_shl_7_cast_fu_34370_p1.read()));
}

void batch_align2D_region::thread_tmp_106_cast_fu_12295_p1() {
    tmp_106_cast_fu_12295_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_1070_fu_32738_p2() {
    tmp_1070_fu_32738_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_1071_fu_32743_p3() {
    tmp_1071_fu_32743_p3 = (!tmp_1070_fu_32738_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1070_fu_32738_p2.read()[0].to_bool())? ref_patch_dy_6_63_8_fu_3976.read(): tmp_1069_fu_32730_p3.read());
}

void batch_align2D_region::thread_tmp_1072_fu_32751_p2() {
    tmp_1072_fu_32751_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_1073_fu_32756_p3() {
    tmp_1073_fu_32756_p3 = (!tmp_1072_fu_32751_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1072_fu_32751_p2.read()[0].to_bool())? ref_patch_dy_6_63_16_fu_4008.read(): tmp_1071_fu_32743_p3.read());
}

void batch_align2D_region::thread_tmp_1074_fu_32764_p2() {
    tmp_1074_fu_32764_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_1075_fu_32769_p3() {
    tmp_1075_fu_32769_p3 = (!tmp_1074_fu_32764_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1074_fu_32764_p2.read()[0].to_bool())? ref_patch_dy_6_63_24_fu_4040.read(): tmp_1073_fu_32756_p3.read());
}

void batch_align2D_region::thread_tmp_1076_fu_32777_p2() {
    tmp_1076_fu_32777_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_1077_fu_32782_p3() {
    tmp_1077_fu_32782_p3 = (!tmp_1076_fu_32777_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1076_fu_32777_p2.read()[0].to_bool())? ref_patch_dy_6_63_32_fu_4072.read(): tmp_1075_fu_32769_p3.read());
}

void batch_align2D_region::thread_tmp_1078_fu_32790_p2() {
    tmp_1078_fu_32790_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_1079_fu_32795_p3() {
    tmp_1079_fu_32795_p3 = (!tmp_1078_fu_32790_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1078_fu_32790_p2.read()[0].to_bool())? ref_patch_dy_6_63_40_fu_4104.read(): tmp_1077_fu_32782_p3.read());
}

void batch_align2D_region::thread_tmp_1080_fu_32803_p2() {
    tmp_1080_fu_32803_p2 = (!tmp_1491_reg_49013_pp17_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1491_reg_49013_pp17_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_1081_fu_32842_p2() {
    tmp_1081_fu_32842_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_1082_fu_32848_p3() {
    tmp_1082_fu_32848_p3 = (!tmp_1081_fu_32842_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1081_fu_32842_p2.read()[0].to_bool())? ref_patch_dx_6_63_8_fu_3720.read(): ref_patch_dx_6_63_57_fu_3916.read());
}

void batch_align2D_region::thread_tmp_1083_fu_32856_p2() {
    tmp_1083_fu_32856_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_1084_fu_32862_p3() {
    tmp_1084_fu_32862_p3 = (!tmp_1083_fu_32856_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1083_fu_32856_p2.read()[0].to_bool())? ref_patch_dx_6_63_15_fu_3748.read(): tmp_1082_fu_32848_p3.read());
}

void batch_align2D_region::thread_tmp_1085_fu_32870_p2() {
    tmp_1085_fu_32870_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_1086_fu_32876_p3() {
    tmp_1086_fu_32876_p3 = (!tmp_1085_fu_32870_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1085_fu_32870_p2.read()[0].to_bool())? ref_patch_dx_6_63_22_fu_3776.read(): tmp_1084_fu_32862_p3.read());
}

void batch_align2D_region::thread_tmp_1087_fu_32884_p2() {
    tmp_1087_fu_32884_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_1088_fu_32890_p3() {
    tmp_1088_fu_32890_p3 = (!tmp_1087_fu_32884_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1087_fu_32884_p2.read()[0].to_bool())? ref_patch_dx_6_63_29_fu_3804.read(): tmp_1086_fu_32876_p3.read());
}

void batch_align2D_region::thread_tmp_1089_fu_32898_p2() {
    tmp_1089_fu_32898_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_108_1_fu_15399_p2() {
    tmp_108_1_fu_15399_p2 = (!tmp_106_1_fu_15383_p2.read().is_01() || !tmp130_cast_fu_15395_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_1_fu_15383_p2.read()) + sc_biguint<7>(tmp130_cast_fu_15395_p1.read()));
}

void batch_align2D_region::thread_tmp_108_2_fu_18566_p2() {
    tmp_108_2_fu_18566_p2 = (!tmp_106_2_fu_18550_p2.read().is_01() || !tmp153_cast_fu_18562_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_2_fu_18550_p2.read()) + sc_biguint<7>(tmp153_cast_fu_18562_p1.read()));
}

void batch_align2D_region::thread_tmp_108_3_fu_21733_p2() {
    tmp_108_3_fu_21733_p2 = (!tmp_106_3_fu_21717_p2.read().is_01() || !tmp176_cast_fu_21729_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_3_fu_21717_p2.read()) + sc_biguint<7>(tmp176_cast_fu_21729_p1.read()));
}

void batch_align2D_region::thread_tmp_108_4_fu_24894_p2() {
    tmp_108_4_fu_24894_p2 = (!tmp_106_4_fu_24878_p2.read().is_01() || !tmp199_cast_fu_24890_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_4_fu_24878_p2.read()) + sc_biguint<7>(tmp199_cast_fu_24890_p1.read()));
}

void batch_align2D_region::thread_tmp_108_5_fu_28062_p2() {
    tmp_108_5_fu_28062_p2 = (!tmp_106_5_fu_28046_p2.read().is_01() || !tmp222_cast_fu_28058_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_5_fu_28046_p2.read()) + sc_biguint<7>(tmp222_cast_fu_28058_p1.read()));
}

void batch_align2D_region::thread_tmp_108_6_fu_31229_p2() {
    tmp_108_6_fu_31229_p2 = (!tmp_106_6_fu_31213_p2.read().is_01() || !tmp245_cast_fu_31225_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_6_fu_31213_p2.read()) + sc_biguint<7>(tmp245_cast_fu_31225_p1.read()));
}

void batch_align2D_region::thread_tmp_108_7_fu_34402_p2() {
    tmp_108_7_fu_34402_p2 = (!tmp_106_7_fu_34386_p2.read().is_01() || !tmp268_cast_fu_34398_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_7_fu_34386_p2.read()) + sc_biguint<7>(tmp268_cast_fu_34398_p1.read()));
}

void batch_align2D_region::thread_tmp_1090_fu_32904_p3() {
    tmp_1090_fu_32904_p3 = (!tmp_1089_fu_32898_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1089_fu_32898_p2.read()[0].to_bool())? ref_patch_dx_6_63_36_fu_3832.read(): tmp_1088_fu_32890_p3.read());
}

void batch_align2D_region::thread_tmp_1091_fu_32912_p2() {
    tmp_1091_fu_32912_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_1092_fu_32918_p3() {
    tmp_1092_fu_32918_p3 = (!tmp_1091_fu_32912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1091_fu_32912_p2.read()[0].to_bool())? ref_patch_dx_6_63_43_fu_3860.read(): tmp_1090_fu_32904_p3.read());
}

void batch_align2D_region::thread_tmp_1093_fu_32926_p2() {
    tmp_1093_fu_32926_p2 = (!tmp_205_6_047_t_fu_32837_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_047_t_fu_32837_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_1094_fu_32966_p3() {
    tmp_1094_fu_32966_p3 = (!tmp_1081_reg_49389.read()[0].is_01())? sc_lv<32>(): ((tmp_1081_reg_49389.read()[0].to_bool())? ref_patch_dy_6_63_1_fu_3948.read(): ref_patch_dy_6_63_57_fu_4172.read());
}

void batch_align2D_region::thread_tmp_1095_fu_32973_p3() {
    tmp_1095_fu_32973_p3 = (!tmp_1083_reg_49394.read()[0].is_01())? sc_lv<32>(): ((tmp_1083_reg_49394.read()[0].to_bool())? ref_patch_dy_6_63_9_fu_3980.read(): tmp_1094_fu_32966_p3.read());
}

void batch_align2D_region::thread_tmp_1096_fu_32980_p3() {
    tmp_1096_fu_32980_p3 = (!tmp_1085_reg_49399.read()[0].is_01())? sc_lv<32>(): ((tmp_1085_reg_49399.read()[0].to_bool())? ref_patch_dy_6_63_17_fu_4012.read(): tmp_1095_fu_32973_p3.read());
}

void batch_align2D_region::thread_tmp_1097_fu_32987_p3() {
    tmp_1097_fu_32987_p3 = (!tmp_1087_reg_49404.read()[0].is_01())? sc_lv<32>(): ((tmp_1087_reg_49404.read()[0].to_bool())? ref_patch_dy_6_63_25_fu_4044.read(): tmp_1096_fu_32980_p3.read());
}

void batch_align2D_region::thread_tmp_1098_fu_32994_p3() {
    tmp_1098_fu_32994_p3 = (!tmp_1089_reg_49409.read()[0].is_01())? sc_lv<32>(): ((tmp_1089_reg_49409.read()[0].to_bool())? ref_patch_dy_6_63_33_fu_4076.read(): tmp_1097_fu_32987_p3.read());
}

void batch_align2D_region::thread_tmp_1099_fu_33001_p3() {
    tmp_1099_fu_33001_p3 = (!tmp_1091_reg_49414.read()[0].is_01())? sc_lv<32>(): ((tmp_1091_reg_49414.read()[0].to_bool())? ref_patch_dy_6_63_41_fu_4108.read(): tmp_1098_fu_32994_p3.read());
}

void batch_align2D_region::thread_tmp_109_1_fu_15405_p1() {
    tmp_109_1_fu_15405_p1 = esl_zext<64,7>(tmp_108_1_fu_15399_p2.read());
}

void batch_align2D_region::thread_tmp_109_2_fu_18572_p1() {
    tmp_109_2_fu_18572_p1 = esl_zext<64,7>(tmp_108_2_fu_18566_p2.read());
}

void batch_align2D_region::thread_tmp_109_3_fu_21739_p1() {
    tmp_109_3_fu_21739_p1 = esl_zext<64,7>(tmp_108_3_fu_21733_p2.read());
}

void batch_align2D_region::thread_tmp_109_4_fu_24900_p1() {
    tmp_109_4_fu_24900_p1 = esl_zext<64,7>(tmp_108_4_fu_24894_p2.read());
}

void batch_align2D_region::thread_tmp_109_5_fu_28068_p1() {
    tmp_109_5_fu_28068_p1 = esl_zext<64,7>(tmp_108_5_fu_28062_p2.read());
}

void batch_align2D_region::thread_tmp_109_6_fu_31235_p1() {
    tmp_109_6_fu_31235_p1 = esl_zext<64,7>(tmp_108_6_fu_31229_p2.read());
}

void batch_align2D_region::thread_tmp_109_7_fu_34408_p1() {
    tmp_109_7_fu_34408_p1 = esl_zext<64,7>(tmp_108_7_fu_34402_p2.read());
}

void batch_align2D_region::thread_tmp_1100_fu_33041_p2() {
    tmp_1100_fu_33041_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_1101_fu_33047_p3() {
    tmp_1101_fu_33047_p3 = (!tmp_1100_fu_33041_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1100_fu_33041_p2.read()[0].to_bool())? ref_patch_dx_6_63_9_fu_3724.read(): ref_patch_dx_6_63_58_fu_3920.read());
}

void batch_align2D_region::thread_tmp_1102_fu_33055_p2() {
    tmp_1102_fu_33055_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_1103_fu_33061_p3() {
    tmp_1103_fu_33061_p3 = (!tmp_1102_fu_33055_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1102_fu_33055_p2.read()[0].to_bool())? ref_patch_dx_6_63_16_fu_3752.read(): tmp_1101_fu_33047_p3.read());
}

void batch_align2D_region::thread_tmp_1104_fu_33069_p2() {
    tmp_1104_fu_33069_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_1105_fu_33075_p3() {
    tmp_1105_fu_33075_p3 = (!tmp_1104_fu_33069_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1104_fu_33069_p2.read()[0].to_bool())? ref_patch_dx_6_63_23_fu_3780.read(): tmp_1103_fu_33061_p3.read());
}

void batch_align2D_region::thread_tmp_1106_fu_33083_p2() {
    tmp_1106_fu_33083_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_1107_fu_33089_p3() {
    tmp_1107_fu_33089_p3 = (!tmp_1106_fu_33083_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1106_fu_33083_p2.read()[0].to_bool())? ref_patch_dx_6_63_30_fu_3808.read(): tmp_1105_fu_33075_p3.read());
}

void batch_align2D_region::thread_tmp_1108_fu_33097_p2() {
    tmp_1108_fu_33097_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_1109_fu_33103_p3() {
    tmp_1109_fu_33103_p3 = (!tmp_1108_fu_33097_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1108_fu_33097_p2.read()[0].to_bool())? ref_patch_dx_6_63_37_fu_3836.read(): tmp_1107_fu_33089_p3.read());
}

void batch_align2D_region::thread_tmp_110_1_cast_fu_15458_p1() {
    tmp_110_1_cast_fu_15458_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q0.read());
}

void batch_align2D_region::thread_tmp_110_2_cast_fu_18625_p1() {
    tmp_110_2_cast_fu_18625_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q0.read());
}

void batch_align2D_region::thread_tmp_110_3_cast_fu_21792_p1() {
    tmp_110_3_cast_fu_21792_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q0.read());
}

void batch_align2D_region::thread_tmp_110_4_cast_fu_24959_p1() {
    tmp_110_4_cast_fu_24959_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q0.read());
}

void batch_align2D_region::thread_tmp_110_5_cast_fu_28127_p1() {
    tmp_110_5_cast_fu_28127_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q0.read());
}

void batch_align2D_region::thread_tmp_110_6_cast_fu_31294_p1() {
    tmp_110_6_cast_fu_31294_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q0.read());
}

void batch_align2D_region::thread_tmp_110_7_cast_fu_34461_p1() {
    tmp_110_7_cast_fu_34461_p1 = esl_zext<9,8>(ref_patch_with_borde_q0.read());
}

void batch_align2D_region::thread_tmp_1110_fu_33111_p2() {
    tmp_1110_fu_33111_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_1111_fu_33117_p3() {
    tmp_1111_fu_33117_p3 = (!tmp_1110_fu_33111_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1110_fu_33111_p2.read()[0].to_bool())? ref_patch_dx_6_63_44_fu_3864.read(): tmp_1109_fu_33103_p3.read());
}

void batch_align2D_region::thread_tmp_1112_fu_33125_p2() {
    tmp_1112_fu_33125_p2 = (!tmp_205_6_1_t_fu_33036_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_1_t_fu_33036_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_1113_fu_33165_p3() {
    tmp_1113_fu_33165_p3 = (!tmp_1100_reg_49440.read()[0].is_01())? sc_lv<32>(): ((tmp_1100_reg_49440.read()[0].to_bool())? ref_patch_dy_6_63_2_fu_3952.read(): ref_patch_dy_6_63_58_fu_4176.read());
}

void batch_align2D_region::thread_tmp_1114_fu_33172_p3() {
    tmp_1114_fu_33172_p3 = (!tmp_1102_reg_49445.read()[0].is_01())? sc_lv<32>(): ((tmp_1102_reg_49445.read()[0].to_bool())? ref_patch_dy_6_63_10_fu_3984.read(): tmp_1113_fu_33165_p3.read());
}

void batch_align2D_region::thread_tmp_1115_fu_33179_p3() {
    tmp_1115_fu_33179_p3 = (!tmp_1104_reg_49450.read()[0].is_01())? sc_lv<32>(): ((tmp_1104_reg_49450.read()[0].to_bool())? ref_patch_dy_6_63_18_fu_4016.read(): tmp_1114_fu_33172_p3.read());
}

void batch_align2D_region::thread_tmp_1116_fu_33186_p3() {
    tmp_1116_fu_33186_p3 = (!tmp_1106_reg_49455.read()[0].is_01())? sc_lv<32>(): ((tmp_1106_reg_49455.read()[0].to_bool())? ref_patch_dy_6_63_26_fu_4048.read(): tmp_1115_fu_33179_p3.read());
}

void batch_align2D_region::thread_tmp_1117_fu_33193_p3() {
    tmp_1117_fu_33193_p3 = (!tmp_1108_reg_49460.read()[0].is_01())? sc_lv<32>(): ((tmp_1108_reg_49460.read()[0].to_bool())? ref_patch_dy_6_63_34_fu_4080.read(): tmp_1116_fu_33186_p3.read());
}

void batch_align2D_region::thread_tmp_1118_fu_33200_p3() {
    tmp_1118_fu_33200_p3 = (!tmp_1110_reg_49465.read()[0].is_01())? sc_lv<32>(): ((tmp_1110_reg_49465.read()[0].to_bool())? ref_patch_dy_6_63_42_fu_4112.read(): tmp_1117_fu_33193_p3.read());
}

void batch_align2D_region::thread_tmp_1119_fu_33267_p2() {
    tmp_1119_fu_33267_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_1120_fu_33273_p3() {
    tmp_1120_fu_33273_p3 = (!tmp_1119_fu_33267_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1119_fu_33267_p2.read()[0].to_bool())? ref_patch_dx_6_63_10_fu_3728.read(): ref_patch_dx_6_63_59_fu_3924.read());
}

void batch_align2D_region::thread_tmp_1121_fu_33281_p2() {
    tmp_1121_fu_33281_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_1122_fu_33287_p3() {
    tmp_1122_fu_33287_p3 = (!tmp_1121_fu_33281_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1121_fu_33281_p2.read()[0].to_bool())? ref_patch_dx_6_63_17_fu_3756.read(): tmp_1120_fu_33273_p3.read());
}

void batch_align2D_region::thread_tmp_1123_fu_33295_p2() {
    tmp_1123_fu_33295_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_1124_fu_33301_p3() {
    tmp_1124_fu_33301_p3 = (!tmp_1123_fu_33295_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1123_fu_33295_p2.read()[0].to_bool())? ref_patch_dx_6_63_24_fu_3784.read(): tmp_1122_fu_33287_p3.read());
}

void batch_align2D_region::thread_tmp_1125_fu_33309_p2() {
    tmp_1125_fu_33309_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_1126_fu_33315_p3() {
    tmp_1126_fu_33315_p3 = (!tmp_1125_fu_33309_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1125_fu_33309_p2.read()[0].to_bool())? ref_patch_dx_6_63_31_fu_3812.read(): tmp_1124_fu_33301_p3.read());
}

void batch_align2D_region::thread_tmp_1127_fu_33323_p2() {
    tmp_1127_fu_33323_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_1128_fu_33329_p3() {
    tmp_1128_fu_33329_p3 = (!tmp_1127_fu_33323_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1127_fu_33323_p2.read()[0].to_bool())? ref_patch_dx_6_63_38_fu_3840.read(): tmp_1126_fu_33315_p3.read());
}

void batch_align2D_region::thread_tmp_1129_fu_33337_p2() {
    tmp_1129_fu_33337_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_112_1_fu_15420_p2() {
    tmp_112_1_fu_15420_p2 = (!tmp_106_1_fu_15383_p2.read().is_01() || !tmp131_cast_fu_15416_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_1_fu_15383_p2.read()) + sc_biguint<7>(tmp131_cast_fu_15416_p1.read()));
}

void batch_align2D_region::thread_tmp_112_2_fu_18587_p2() {
    tmp_112_2_fu_18587_p2 = (!tmp_106_2_fu_18550_p2.read().is_01() || !tmp154_cast_fu_18583_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_2_fu_18550_p2.read()) + sc_biguint<7>(tmp154_cast_fu_18583_p1.read()));
}

void batch_align2D_region::thread_tmp_112_3_fu_21754_p2() {
    tmp_112_3_fu_21754_p2 = (!tmp_106_3_fu_21717_p2.read().is_01() || !tmp177_cast_fu_21750_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_3_fu_21717_p2.read()) + sc_biguint<7>(tmp177_cast_fu_21750_p1.read()));
}

void batch_align2D_region::thread_tmp_112_4_fu_24915_p2() {
    tmp_112_4_fu_24915_p2 = (!tmp_106_4_fu_24878_p2.read().is_01() || !tmp200_cast_fu_24911_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_4_fu_24878_p2.read()) + sc_biguint<7>(tmp200_cast_fu_24911_p1.read()));
}

void batch_align2D_region::thread_tmp_112_5_fu_28083_p2() {
    tmp_112_5_fu_28083_p2 = (!tmp_106_5_fu_28046_p2.read().is_01() || !tmp223_cast_fu_28079_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_5_fu_28046_p2.read()) + sc_biguint<7>(tmp223_cast_fu_28079_p1.read()));
}

void batch_align2D_region::thread_tmp_112_6_fu_31250_p2() {
    tmp_112_6_fu_31250_p2 = (!tmp_106_6_fu_31213_p2.read().is_01() || !tmp246_cast_fu_31246_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_6_fu_31213_p2.read()) + sc_biguint<7>(tmp246_cast_fu_31246_p1.read()));
}

void batch_align2D_region::thread_tmp_112_7_fu_34423_p2() {
    tmp_112_7_fu_34423_p2 = (!tmp_106_7_fu_34386_p2.read().is_01() || !tmp269_cast_fu_34419_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_106_7_fu_34386_p2.read()) + sc_biguint<7>(tmp269_cast_fu_34419_p1.read()));
}

void batch_align2D_region::thread_tmp_1130_fu_33343_p3() {
    tmp_1130_fu_33343_p3 = (!tmp_1129_fu_33337_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1129_fu_33337_p2.read()[0].to_bool())? ref_patch_dx_6_63_45_fu_3868.read(): tmp_1128_fu_33329_p3.read());
}

void batch_align2D_region::thread_tmp_1131_fu_33351_p2() {
    tmp_1131_fu_33351_p2 = (!tmp_205_6_248_t_fu_33262_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_248_t_fu_33262_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_1132_fu_33365_p3() {
    tmp_1132_fu_33365_p3 = (!tmp_1119_fu_33267_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1119_fu_33267_p2.read()[0].to_bool())? ref_patch_dy_6_63_3_fu_3956.read(): ref_patch_dy_6_63_59_fu_4180.read());
}

void batch_align2D_region::thread_tmp_1133_fu_33373_p3() {
    tmp_1133_fu_33373_p3 = (!tmp_1121_fu_33281_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1121_fu_33281_p2.read()[0].to_bool())? ref_patch_dy_6_63_11_fu_3988.read(): tmp_1132_fu_33365_p3.read());
}

void batch_align2D_region::thread_tmp_1134_fu_33381_p3() {
    tmp_1134_fu_33381_p3 = (!tmp_1123_fu_33295_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1123_fu_33295_p2.read()[0].to_bool())? ref_patch_dy_6_63_19_fu_4020.read(): tmp_1133_fu_33373_p3.read());
}

void batch_align2D_region::thread_tmp_1135_fu_33389_p3() {
    tmp_1135_fu_33389_p3 = (!tmp_1125_fu_33309_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1125_fu_33309_p2.read()[0].to_bool())? ref_patch_dy_6_63_27_fu_4052.read(): tmp_1134_fu_33381_p3.read());
}

void batch_align2D_region::thread_tmp_1136_fu_33397_p3() {
    tmp_1136_fu_33397_p3 = (!tmp_1127_fu_33323_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1127_fu_33323_p2.read()[0].to_bool())? ref_patch_dy_6_63_35_fu_4084.read(): tmp_1135_fu_33389_p3.read());
}

void batch_align2D_region::thread_tmp_1137_fu_33405_p3() {
    tmp_1137_fu_33405_p3 = (!tmp_1129_fu_33337_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1129_fu_33337_p2.read()[0].to_bool())? ref_patch_dy_6_63_43_fu_4116.read(): tmp_1136_fu_33397_p3.read());
}

void batch_align2D_region::thread_tmp_1138_fu_33474_p2() {
    tmp_1138_fu_33474_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_1139_fu_33480_p3() {
    tmp_1139_fu_33480_p3 = (!tmp_1138_fu_33474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1138_fu_33474_p2.read()[0].to_bool())? ref_patch_dx_6_63_11_fu_3732.read(): ref_patch_dx_6_63_60_fu_3928.read());
}

void batch_align2D_region::thread_tmp_113_1_fu_15426_p1() {
    tmp_113_1_fu_15426_p1 = esl_zext<64,7>(tmp_112_1_fu_15420_p2.read());
}

void batch_align2D_region::thread_tmp_113_2_fu_18593_p1() {
    tmp_113_2_fu_18593_p1 = esl_zext<64,7>(tmp_112_2_fu_18587_p2.read());
}

void batch_align2D_region::thread_tmp_113_3_fu_21760_p1() {
    tmp_113_3_fu_21760_p1 = esl_zext<64,7>(tmp_112_3_fu_21754_p2.read());
}

void batch_align2D_region::thread_tmp_113_4_fu_24921_p1() {
    tmp_113_4_fu_24921_p1 = esl_zext<64,7>(tmp_112_4_fu_24915_p2.read());
}

void batch_align2D_region::thread_tmp_113_5_fu_28089_p1() {
    tmp_113_5_fu_28089_p1 = esl_zext<64,7>(tmp_112_5_fu_28083_p2.read());
}

void batch_align2D_region::thread_tmp_113_6_fu_31256_p1() {
    tmp_113_6_fu_31256_p1 = esl_zext<64,7>(tmp_112_6_fu_31250_p2.read());
}

void batch_align2D_region::thread_tmp_113_7_fu_34429_p1() {
    tmp_113_7_fu_34429_p1 = esl_zext<64,7>(tmp_112_7_fu_34423_p2.read());
}

void batch_align2D_region::thread_tmp_1140_fu_33488_p2() {
    tmp_1140_fu_33488_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_1141_fu_33494_p3() {
    tmp_1141_fu_33494_p3 = (!tmp_1140_fu_33488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1140_fu_33488_p2.read()[0].to_bool())? ref_patch_dx_6_63_18_fu_3760.read(): tmp_1139_fu_33480_p3.read());
}

void batch_align2D_region::thread_tmp_1142_fu_33502_p2() {
    tmp_1142_fu_33502_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_1143_fu_33508_p3() {
    tmp_1143_fu_33508_p3 = (!tmp_1142_fu_33502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1142_fu_33502_p2.read()[0].to_bool())? ref_patch_dx_6_63_25_fu_3788.read(): tmp_1141_fu_33494_p3.read());
}

void batch_align2D_region::thread_tmp_1144_fu_33516_p2() {
    tmp_1144_fu_33516_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_1145_fu_33522_p3() {
    tmp_1145_fu_33522_p3 = (!tmp_1144_fu_33516_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1144_fu_33516_p2.read()[0].to_bool())? ref_patch_dx_6_63_32_fu_3816.read(): tmp_1143_fu_33508_p3.read());
}

void batch_align2D_region::thread_tmp_1146_fu_33530_p2() {
    tmp_1146_fu_33530_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_1147_fu_33536_p3() {
    tmp_1147_fu_33536_p3 = (!tmp_1146_fu_33530_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1146_fu_33530_p2.read()[0].to_bool())? ref_patch_dx_6_63_39_fu_3844.read(): tmp_1145_fu_33522_p3.read());
}

void batch_align2D_region::thread_tmp_1148_fu_33544_p2() {
    tmp_1148_fu_33544_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_1149_fu_33550_p3() {
    tmp_1149_fu_33550_p3 = (!tmp_1148_fu_33544_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1148_fu_33544_p2.read()[0].to_bool())? ref_patch_dx_6_63_46_fu_3872.read(): tmp_1147_fu_33536_p3.read());
}

void batch_align2D_region::thread_tmp_114_1_cast_fu_15462_p1() {
    tmp_114_1_cast_fu_15462_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_114_2_cast_fu_18629_p1() {
    tmp_114_2_cast_fu_18629_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_114_3_cast_fu_21796_p1() {
    tmp_114_3_cast_fu_21796_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_114_4_cast_fu_24963_p1() {
    tmp_114_4_cast_fu_24963_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_114_5_cast_fu_28131_p1() {
    tmp_114_5_cast_fu_28131_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_114_6_cast_fu_31298_p1() {
    tmp_114_6_cast_fu_31298_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_114_7_cast_fu_34465_p1() {
    tmp_114_7_cast_fu_34465_p1 = esl_zext<9,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_114_fu_13164_p1() {
    tmp_114_fu_13164_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_1150_fu_33558_p2() {
    tmp_1150_fu_33558_p2 = (!tmp_205_6_3_t_fu_33469_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_3_t_fu_33469_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_1151_fu_33572_p3() {
    tmp_1151_fu_33572_p3 = (!tmp_1138_fu_33474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1138_fu_33474_p2.read()[0].to_bool())? ref_patch_dy_6_63_4_fu_3960.read(): ref_patch_dy_6_63_60_fu_4184.read());
}

void batch_align2D_region::thread_tmp_1152_fu_33580_p3() {
    tmp_1152_fu_33580_p3 = (!tmp_1140_fu_33488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1140_fu_33488_p2.read()[0].to_bool())? ref_patch_dy_6_63_12_fu_3992.read(): tmp_1151_fu_33572_p3.read());
}

void batch_align2D_region::thread_tmp_1153_fu_33588_p3() {
    tmp_1153_fu_33588_p3 = (!tmp_1142_fu_33502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1142_fu_33502_p2.read()[0].to_bool())? ref_patch_dy_6_63_20_fu_4024.read(): tmp_1152_fu_33580_p3.read());
}

void batch_align2D_region::thread_tmp_1154_fu_33596_p3() {
    tmp_1154_fu_33596_p3 = (!tmp_1144_fu_33516_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1144_fu_33516_p2.read()[0].to_bool())? ref_patch_dy_6_63_28_fu_4056.read(): tmp_1153_fu_33588_p3.read());
}

void batch_align2D_region::thread_tmp_1155_fu_33604_p3() {
    tmp_1155_fu_33604_p3 = (!tmp_1146_fu_33530_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1146_fu_33530_p2.read()[0].to_bool())? ref_patch_dy_6_63_36_fu_4088.read(): tmp_1154_fu_33596_p3.read());
}

void batch_align2D_region::thread_tmp_1156_fu_33612_p3() {
    tmp_1156_fu_33612_p3 = (!tmp_1148_fu_33544_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1148_fu_33544_p2.read()[0].to_bool())? ref_patch_dy_6_63_44_fu_4120.read(): tmp_1155_fu_33604_p3.read());
}

void batch_align2D_region::thread_tmp_1157_fu_33654_p2() {
    tmp_1157_fu_33654_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1158_fu_33660_p3() {
    tmp_1158_fu_33660_p3 = (!tmp_1157_fu_33654_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1157_fu_33654_p2.read()[0].to_bool())? ref_patch_dx_6_63_12_fu_3736.read(): ref_patch_dx_6_63_61_fu_3932.read());
}

void batch_align2D_region::thread_tmp_1159_fu_33668_p2() {
    tmp_1159_fu_33668_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_115_1_fu_15466_p2() {
    tmp_115_1_fu_15466_p2 = (!tmp_110_1_cast_fu_15458_p1.read().is_01() || !tmp_114_1_cast_fu_15462_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_1_cast_fu_15458_p1.read()) - sc_biguint<9>(tmp_114_1_cast_fu_15462_p1.read()));
}

void batch_align2D_region::thread_tmp_115_2_fu_18633_p2() {
    tmp_115_2_fu_18633_p2 = (!tmp_110_2_cast_fu_18625_p1.read().is_01() || !tmp_114_2_cast_fu_18629_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_2_cast_fu_18625_p1.read()) - sc_biguint<9>(tmp_114_2_cast_fu_18629_p1.read()));
}

void batch_align2D_region::thread_tmp_115_3_fu_21800_p2() {
    tmp_115_3_fu_21800_p2 = (!tmp_110_3_cast_fu_21792_p1.read().is_01() || !tmp_114_3_cast_fu_21796_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_3_cast_fu_21792_p1.read()) - sc_biguint<9>(tmp_114_3_cast_fu_21796_p1.read()));
}

void batch_align2D_region::thread_tmp_115_4_fu_24967_p2() {
    tmp_115_4_fu_24967_p2 = (!tmp_110_4_cast_fu_24959_p1.read().is_01() || !tmp_114_4_cast_fu_24963_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_4_cast_fu_24959_p1.read()) - sc_biguint<9>(tmp_114_4_cast_fu_24963_p1.read()));
}

void batch_align2D_region::thread_tmp_115_5_fu_28135_p2() {
    tmp_115_5_fu_28135_p2 = (!tmp_110_5_cast_fu_28127_p1.read().is_01() || !tmp_114_5_cast_fu_28131_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_5_cast_fu_28127_p1.read()) - sc_biguint<9>(tmp_114_5_cast_fu_28131_p1.read()));
}

void batch_align2D_region::thread_tmp_115_6_fu_31302_p2() {
    tmp_115_6_fu_31302_p2 = (!tmp_110_6_cast_fu_31294_p1.read().is_01() || !tmp_114_6_cast_fu_31298_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_6_cast_fu_31294_p1.read()) - sc_biguint<9>(tmp_114_6_cast_fu_31298_p1.read()));
}

void batch_align2D_region::thread_tmp_115_7_fu_34469_p2() {
    tmp_115_7_fu_34469_p2 = (!tmp_110_7_cast_fu_34461_p1.read().is_01() || !tmp_114_7_cast_fu_34465_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_110_7_cast_fu_34461_p1.read()) - sc_biguint<9>(tmp_114_7_cast_fu_34465_p1.read()));
}

void batch_align2D_region::thread_tmp_1160_fu_33674_p3() {
    tmp_1160_fu_33674_p3 = (!tmp_1159_fu_33668_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1159_fu_33668_p2.read()[0].to_bool())? ref_patch_dx_6_63_19_fu_3764.read(): tmp_1158_fu_33660_p3.read());
}

void batch_align2D_region::thread_tmp_1161_fu_33682_p2() {
    tmp_1161_fu_33682_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1162_fu_33688_p3() {
    tmp_1162_fu_33688_p3 = (!tmp_1161_fu_33682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1161_fu_33682_p2.read()[0].to_bool())? ref_patch_dx_6_63_26_fu_3792.read(): tmp_1160_fu_33674_p3.read());
}

void batch_align2D_region::thread_tmp_1163_fu_33696_p2() {
    tmp_1163_fu_33696_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_1164_fu_33702_p3() {
    tmp_1164_fu_33702_p3 = (!tmp_1163_fu_33696_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1163_fu_33696_p2.read()[0].to_bool())? ref_patch_dx_6_63_33_fu_3820.read(): tmp_1162_fu_33688_p3.read());
}

void batch_align2D_region::thread_tmp_1165_fu_33710_p2() {
    tmp_1165_fu_33710_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_1166_fu_33716_p3() {
    tmp_1166_fu_33716_p3 = (!tmp_1165_fu_33710_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1165_fu_33710_p2.read()[0].to_bool())? ref_patch_dx_6_63_40_fu_3848.read(): tmp_1164_fu_33702_p3.read());
}

void batch_align2D_region::thread_tmp_1167_fu_33724_p2() {
    tmp_1167_fu_33724_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1168_fu_33730_p3() {
    tmp_1168_fu_33730_p3 = (!tmp_1167_fu_33724_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1167_fu_33724_p2.read()[0].to_bool())? ref_patch_dx_6_63_47_fu_3876.read(): tmp_1166_fu_33716_p3.read());
}

void batch_align2D_region::thread_tmp_1169_fu_33738_p2() {
    tmp_1169_fu_33738_p2 = (!tmp_205_6_4_t_fu_33649_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_4_t_fu_33649_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_116_fu_13984_p3() {
    tmp_116_fu_13984_p3 = (!tmp_39_reg_39402.read()[0].is_01())? sc_lv<32>(): ((tmp_39_reg_39402.read()[0].to_bool())? ref_patch_dy_0_63_25_fu_972.read(): tmp_93_fu_13977_p3.read());
}

void batch_align2D_region::thread_tmp_1170_fu_33778_p3() {
    tmp_1170_fu_33778_p3 = (!tmp_1157_reg_49518.read()[0].is_01())? sc_lv<32>(): ((tmp_1157_reg_49518.read()[0].to_bool())? ref_patch_dy_6_63_5_fu_3964.read(): ref_patch_dy_6_63_61_fu_4188.read());
}

void batch_align2D_region::thread_tmp_1171_fu_33785_p3() {
    tmp_1171_fu_33785_p3 = (!tmp_1159_reg_49523.read()[0].is_01())? sc_lv<32>(): ((tmp_1159_reg_49523.read()[0].to_bool())? ref_patch_dy_6_63_13_fu_3996.read(): tmp_1170_fu_33778_p3.read());
}

void batch_align2D_region::thread_tmp_1172_fu_33792_p3() {
    tmp_1172_fu_33792_p3 = (!tmp_1161_reg_49528.read()[0].is_01())? sc_lv<32>(): ((tmp_1161_reg_49528.read()[0].to_bool())? ref_patch_dy_6_63_21_fu_4028.read(): tmp_1171_fu_33785_p3.read());
}

void batch_align2D_region::thread_tmp_1173_fu_33799_p3() {
    tmp_1173_fu_33799_p3 = (!tmp_1163_reg_49533.read()[0].is_01())? sc_lv<32>(): ((tmp_1163_reg_49533.read()[0].to_bool())? ref_patch_dy_6_63_29_fu_4060.read(): tmp_1172_fu_33792_p3.read());
}

void batch_align2D_region::thread_tmp_1174_fu_33806_p3() {
    tmp_1174_fu_33806_p3 = (!tmp_1165_reg_49538.read()[0].is_01())? sc_lv<32>(): ((tmp_1165_reg_49538.read()[0].to_bool())? ref_patch_dy_6_63_37_fu_4092.read(): tmp_1173_fu_33799_p3.read());
}

void batch_align2D_region::thread_tmp_1175_fu_33813_p3() {
    tmp_1175_fu_33813_p3 = (!tmp_1167_reg_49543.read()[0].is_01())? sc_lv<32>(): ((tmp_1167_reg_49543.read()[0].to_bool())? ref_patch_dy_6_63_45_fu_4124.read(): tmp_1174_fu_33806_p3.read());
}

void batch_align2D_region::thread_tmp_1176_fu_33880_p2() {
    tmp_1176_fu_33880_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1177_fu_33886_p3() {
    tmp_1177_fu_33886_p3 = (!tmp_1176_fu_33880_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1176_fu_33880_p2.read()[0].to_bool())? ref_patch_dx_6_63_13_fu_3740.read(): ref_patch_dx_6_63_62_fu_3936.read());
}

void batch_align2D_region::thread_tmp_1178_fu_33894_p2() {
    tmp_1178_fu_33894_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_1179_fu_33900_p3() {
    tmp_1179_fu_33900_p3 = (!tmp_1178_fu_33894_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1178_fu_33894_p2.read()[0].to_bool())? ref_patch_dx_6_63_20_fu_3768.read(): tmp_1177_fu_33886_p3.read());
}

void batch_align2D_region::thread_tmp_117_cast_fu_12348_p1() {
    tmp_117_cast_fu_12348_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_117_fu_13169_p1() {
    tmp_117_fu_13169_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_1180_fu_33908_p2() {
    tmp_1180_fu_33908_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1181_fu_33914_p3() {
    tmp_1181_fu_33914_p3 = (!tmp_1180_fu_33908_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1180_fu_33908_p2.read()[0].to_bool())? ref_patch_dx_6_63_27_fu_3796.read(): tmp_1179_fu_33900_p3.read());
}

void batch_align2D_region::thread_tmp_1182_fu_33922_p2() {
    tmp_1182_fu_33922_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_1183_fu_33928_p3() {
    tmp_1183_fu_33928_p3 = (!tmp_1182_fu_33922_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1182_fu_33922_p2.read()[0].to_bool())? ref_patch_dx_6_63_34_fu_3824.read(): tmp_1181_fu_33914_p3.read());
}

void batch_align2D_region::thread_tmp_1184_fu_33936_p2() {
    tmp_1184_fu_33936_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_1185_fu_33942_p3() {
    tmp_1185_fu_33942_p3 = (!tmp_1184_fu_33936_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1184_fu_33936_p2.read()[0].to_bool())? ref_patch_dx_6_63_41_fu_3852.read(): tmp_1183_fu_33928_p3.read());
}

void batch_align2D_region::thread_tmp_1186_fu_33950_p2() {
    tmp_1186_fu_33950_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1187_fu_33956_p3() {
    tmp_1187_fu_33956_p3 = (!tmp_1186_fu_33950_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1186_fu_33950_p2.read()[0].to_bool())? ref_patch_dx_6_63_48_fu_3880.read(): tmp_1185_fu_33942_p3.read());
}

void batch_align2D_region::thread_tmp_1188_fu_33964_p2() {
    tmp_1188_fu_33964_p2 = (!tmp_205_6_5_t_fu_33875_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_5_t_fu_33875_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_1189_fu_33978_p3() {
    tmp_1189_fu_33978_p3 = (!tmp_1176_fu_33880_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1176_fu_33880_p2.read()[0].to_bool())? ref_patch_dy_6_63_6_fu_3968.read(): ref_patch_dy_6_63_62_fu_4192.read());
}

void batch_align2D_region::thread_tmp_118_cast_fu_12329_p1() {
    tmp_118_cast_fu_12329_p1 = esl_zext<8,7>(tmp_102_fu_12324_p2.read());
}

void batch_align2D_region::thread_tmp_1190_fu_33986_p3() {
    tmp_1190_fu_33986_p3 = (!tmp_1178_fu_33894_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1178_fu_33894_p2.read()[0].to_bool())? ref_patch_dy_6_63_14_fu_4000.read(): tmp_1189_fu_33978_p3.read());
}

void batch_align2D_region::thread_tmp_1191_fu_33994_p3() {
    tmp_1191_fu_33994_p3 = (!tmp_1180_fu_33908_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1180_fu_33908_p2.read()[0].to_bool())? ref_patch_dy_6_63_22_fu_4032.read(): tmp_1190_fu_33986_p3.read());
}

void batch_align2D_region::thread_tmp_1192_fu_34002_p3() {
    tmp_1192_fu_34002_p3 = (!tmp_1182_fu_33922_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1182_fu_33922_p2.read()[0].to_bool())? ref_patch_dy_6_63_30_fu_4064.read(): tmp_1191_fu_33994_p3.read());
}

void batch_align2D_region::thread_tmp_1193_fu_34010_p3() {
    tmp_1193_fu_34010_p3 = (!tmp_1184_fu_33936_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1184_fu_33936_p2.read()[0].to_bool())? ref_patch_dy_6_63_38_fu_4096.read(): tmp_1192_fu_34002_p3.read());
}

void batch_align2D_region::thread_tmp_1194_fu_34018_p3() {
    tmp_1194_fu_34018_p3 = (!tmp_1186_fu_33950_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1186_fu_33950_p2.read()[0].to_bool())? ref_patch_dy_6_63_46_fu_4128.read(): tmp_1193_fu_34010_p3.read());
}

void batch_align2D_region::thread_tmp_1195_fu_34087_p2() {
    tmp_1195_fu_34087_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_1196_fu_34093_p3() {
    tmp_1196_fu_34093_p3 = (!tmp_1195_fu_34087_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1195_fu_34087_p2.read()[0].to_bool())? ref_patch_dx_6_63_14_fu_3744.read(): ref_patch_dx_6_63_63_fu_3940.read());
}

void batch_align2D_region::thread_tmp_1197_fu_34101_p2() {
    tmp_1197_fu_34101_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1198_fu_34107_p3() {
    tmp_1198_fu_34107_p3 = (!tmp_1197_fu_34101_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1197_fu_34101_p2.read()[0].to_bool())? ref_patch_dx_6_63_21_fu_3772.read(): tmp_1196_fu_34093_p3.read());
}

void batch_align2D_region::thread_tmp_1199_fu_34115_p2() {
    tmp_1199_fu_34115_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_119_1_fu_15481_p2() {
    tmp_119_1_fu_15481_p2 = (!tmp132_cast_fu_15477_p1.read().is_01() || !tmp_106_1_reg_40420.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp132_cast_fu_15477_p1.read()) + sc_biguint<7>(tmp_106_1_reg_40420.read()));
}

void batch_align2D_region::thread_tmp_119_2_fu_18648_p2() {
    tmp_119_2_fu_18648_p2 = (!tmp155_cast_fu_18644_p1.read().is_01() || !tmp_106_2_reg_42088.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp155_cast_fu_18644_p1.read()) + sc_biguint<7>(tmp_106_2_reg_42088.read()));
}

void batch_align2D_region::thread_tmp_119_3_fu_21815_p2() {
    tmp_119_3_fu_21815_p2 = (!tmp178_cast_fu_21811_p1.read().is_01() || !tmp_106_3_reg_43756.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp178_cast_fu_21811_p1.read()) + sc_biguint<7>(tmp_106_3_reg_43756.read()));
}

void batch_align2D_region::thread_tmp_119_4_fu_24982_p2() {
    tmp_119_4_fu_24982_p2 = (!tmp201_cast_fu_24978_p1.read().is_01() || !tmp_106_4_reg_45419.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp201_cast_fu_24978_p1.read()) + sc_biguint<7>(tmp_106_4_reg_45419.read()));
}

void batch_align2D_region::thread_tmp_119_5_fu_28150_p2() {
    tmp_119_5_fu_28150_p2 = (!tmp224_cast_fu_28146_p1.read().is_01() || !tmp_106_5_reg_47081.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp224_cast_fu_28146_p1.read()) + sc_biguint<7>(tmp_106_5_reg_47081.read()));
}

void batch_align2D_region::thread_tmp_119_6_fu_31317_p2() {
    tmp_119_6_fu_31317_p2 = (!tmp247_cast_fu_31313_p1.read().is_01() || !tmp_106_6_reg_48749.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp247_cast_fu_31313_p1.read()) + sc_biguint<7>(tmp_106_6_reg_48749.read()));
}

void batch_align2D_region::thread_tmp_119_7_fu_34484_p2() {
    tmp_119_7_fu_34484_p2 = (!tmp270_cast_fu_34480_p1.read().is_01() || !tmp_106_7_reg_50422.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp270_cast_fu_34480_p1.read()) + sc_biguint<7>(tmp_106_7_reg_50422.read()));
}

void batch_align2D_region::thread_tmp_1200_fu_34121_p3() {
    tmp_1200_fu_34121_p3 = (!tmp_1199_fu_34115_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1199_fu_34115_p2.read()[0].to_bool())? ref_patch_dx_6_63_28_fu_3800.read(): tmp_1198_fu_34107_p3.read());
}

void batch_align2D_region::thread_tmp_1201_fu_34129_p2() {
    tmp_1201_fu_34129_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1202_fu_34135_p3() {
    tmp_1202_fu_34135_p3 = (!tmp_1201_fu_34129_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1201_fu_34129_p2.read()[0].to_bool())? ref_patch_dx_6_63_35_fu_3828.read(): tmp_1200_fu_34121_p3.read());
}

void batch_align2D_region::thread_tmp_1203_fu_34143_p2() {
    tmp_1203_fu_34143_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1204_fu_34149_p3() {
    tmp_1204_fu_34149_p3 = (!tmp_1203_fu_34143_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1203_fu_34143_p2.read()[0].to_bool())? ref_patch_dx_6_63_42_fu_3856.read(): tmp_1202_fu_34135_p3.read());
}

void batch_align2D_region::thread_tmp_1205_fu_34157_p2() {
    tmp_1205_fu_34157_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_1206_fu_34163_p3() {
    tmp_1206_fu_34163_p3 = (!tmp_1205_fu_34157_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1205_fu_34157_p2.read()[0].to_bool())? ref_patch_dx_6_63_49_fu_3884.read(): tmp_1204_fu_34149_p3.read());
}

void batch_align2D_region::thread_tmp_1207_fu_34171_p2() {
    tmp_1207_fu_34171_p2 = (!tmp_205_6_649_t_fu_34082_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_6_649_t_fu_34082_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1208_fu_34185_p3() {
    tmp_1208_fu_34185_p3 = (!tmp_1195_fu_34087_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1195_fu_34087_p2.read()[0].to_bool())? ref_patch_dy_6_63_7_fu_3972.read(): ref_patch_dy_6_63_63_fu_4196.read());
}

void batch_align2D_region::thread_tmp_1209_fu_34193_p3() {
    tmp_1209_fu_34193_p3 = (!tmp_1197_fu_34101_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1197_fu_34101_p2.read()[0].to_bool())? ref_patch_dy_6_63_15_fu_4004.read(): tmp_1208_fu_34185_p3.read());
}

void batch_align2D_region::thread_tmp_120_1_fu_15486_p1() {
    tmp_120_1_fu_15486_p1 = esl_zext<64,7>(tmp_119_1_fu_15481_p2.read());
}

void batch_align2D_region::thread_tmp_120_2_fu_18653_p1() {
    tmp_120_2_fu_18653_p1 = esl_zext<64,7>(tmp_119_2_fu_18648_p2.read());
}

void batch_align2D_region::thread_tmp_120_3_fu_21820_p1() {
    tmp_120_3_fu_21820_p1 = esl_zext<64,7>(tmp_119_3_fu_21815_p2.read());
}

void batch_align2D_region::thread_tmp_120_4_fu_24987_p1() {
    tmp_120_4_fu_24987_p1 = esl_zext<64,7>(tmp_119_4_fu_24982_p2.read());
}

void batch_align2D_region::thread_tmp_120_5_fu_28155_p1() {
    tmp_120_5_fu_28155_p1 = esl_zext<64,7>(tmp_119_5_fu_28150_p2.read());
}

void batch_align2D_region::thread_tmp_120_6_fu_31322_p1() {
    tmp_120_6_fu_31322_p1 = esl_zext<64,7>(tmp_119_6_fu_31317_p2.read());
}

void batch_align2D_region::thread_tmp_120_7_fu_34489_p1() {
    tmp_120_7_fu_34489_p1 = esl_zext<64,7>(tmp_119_7_fu_34484_p2.read());
}

void batch_align2D_region::thread_tmp_1210_fu_34201_p3() {
    tmp_1210_fu_34201_p3 = (!tmp_1199_fu_34115_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1199_fu_34115_p2.read()[0].to_bool())? ref_patch_dy_6_63_23_fu_4036.read(): tmp_1209_fu_34193_p3.read());
}

void batch_align2D_region::thread_tmp_1211_fu_34209_p3() {
    tmp_1211_fu_34209_p3 = (!tmp_1201_fu_34129_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1201_fu_34129_p2.read()[0].to_bool())? ref_patch_dy_6_63_31_fu_4068.read(): tmp_1210_fu_34201_p3.read());
}

void batch_align2D_region::thread_tmp_1212_fu_34217_p3() {
    tmp_1212_fu_34217_p3 = (!tmp_1203_fu_34143_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1203_fu_34143_p2.read()[0].to_bool())? ref_patch_dy_6_63_39_fu_4100.read(): tmp_1211_fu_34209_p3.read());
}

void batch_align2D_region::thread_tmp_1213_fu_34225_p3() {
    tmp_1213_fu_34225_p3 = (!tmp_1205_fu_34157_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1205_fu_34157_p2.read()[0].to_bool())? ref_patch_dy_6_63_47_fu_4132.read(): tmp_1212_fu_34217_p3.read());
}

void batch_align2D_region::thread_tmp_121_1_cast_fu_15515_p1() {
    tmp_121_1_cast_fu_15515_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_121_2_cast_fu_18682_p1() {
    tmp_121_2_cast_fu_18682_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_121_3_cast_fu_21849_p1() {
    tmp_121_3_cast_fu_21849_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_121_4_cast_fu_25016_p1() {
    tmp_121_4_cast_fu_25016_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_121_5_cast_fu_28184_p1() {
    tmp_121_5_cast_fu_28184_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_121_6_cast_fu_31351_p1() {
    tmp_121_6_cast_fu_31351_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_121_7_cast_fu_34518_p1() {
    tmp_121_7_cast_fu_34518_p1 = esl_zext<9,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_121_cast_fu_12352_p1() {
    tmp_121_cast_fu_12352_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q0.read());
}

void batch_align2D_region::thread_tmp_1221_1_cast_fu_15496_p1() {
    tmp_1221_1_cast_fu_15496_p1 = esl_zext<8,7>(tmp_1221_1_fu_15491_p2.read());
}

void batch_align2D_region::thread_tmp_1221_1_fu_15491_p2() {
    tmp_1221_1_fu_15491_p2 = (tmp_106_1_reg_40420.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_2_cast_fu_18663_p1() {
    tmp_1221_2_cast_fu_18663_p1 = esl_zext<8,7>(tmp_1221_2_fu_18658_p2.read());
}

void batch_align2D_region::thread_tmp_1221_2_fu_18658_p2() {
    tmp_1221_2_fu_18658_p2 = (tmp_106_2_reg_42088.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_3_cast_fu_21830_p1() {
    tmp_1221_3_cast_fu_21830_p1 = esl_zext<8,7>(tmp_1221_3_fu_21825_p2.read());
}

void batch_align2D_region::thread_tmp_1221_3_fu_21825_p2() {
    tmp_1221_3_fu_21825_p2 = (tmp_106_3_reg_43756.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_4_cast_fu_24997_p1() {
    tmp_1221_4_cast_fu_24997_p1 = esl_zext<8,7>(tmp_1221_4_fu_24992_p2.read());
}

void batch_align2D_region::thread_tmp_1221_4_fu_24992_p2() {
    tmp_1221_4_fu_24992_p2 = (tmp_106_4_reg_45419.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_5_cast_fu_28165_p1() {
    tmp_1221_5_cast_fu_28165_p1 = esl_zext<8,7>(tmp_1221_5_fu_28160_p2.read());
}

void batch_align2D_region::thread_tmp_1221_5_fu_28160_p2() {
    tmp_1221_5_fu_28160_p2 = (tmp_106_5_reg_47081.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_6_cast_fu_31332_p1() {
    tmp_1221_6_cast_fu_31332_p1 = esl_zext<8,7>(tmp_1221_6_fu_31327_p2.read());
}

void batch_align2D_region::thread_tmp_1221_6_fu_31327_p2() {
    tmp_1221_6_fu_31327_p2 = (tmp_106_6_reg_48749.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1221_7_cast_fu_34499_p1() {
    tmp_1221_7_cast_fu_34499_p1 = esl_zext<8,7>(tmp_1221_7_fu_34494_p2.read());
}

void batch_align2D_region::thread_tmp_1221_7_fu_34494_p2() {
    tmp_1221_7_fu_34494_p2 = (tmp_106_7_reg_50422.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1224_fu_35892_p2() {
    tmp_1224_fu_35892_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1225_fu_35897_p3() {
    tmp_1225_fu_35897_p3 = (!tmp_1224_fu_35892_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1224_fu_35892_p2.read()[0].to_bool())? ref_patch_dy_7_63_fu_4456.read(): ref_patch_dy_7_63_56_fu_4680.read());
}

void batch_align2D_region::thread_tmp_1226_fu_35905_p2() {
    tmp_1226_fu_35905_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_1227_fu_35910_p3() {
    tmp_1227_fu_35910_p3 = (!tmp_1226_fu_35905_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1226_fu_35905_p2.read()[0].to_bool())? ref_patch_dy_7_63_8_fu_4488.read(): tmp_1225_fu_35897_p3.read());
}

void batch_align2D_region::thread_tmp_1228_fu_35918_p2() {
    tmp_1228_fu_35918_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_1229_fu_35923_p3() {
    tmp_1229_fu_35923_p3 = (!tmp_1228_fu_35918_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1228_fu_35918_p2.read()[0].to_bool())? ref_patch_dy_7_63_16_fu_4520.read(): tmp_1227_fu_35910_p3.read());
}

void batch_align2D_region::thread_tmp_122_fu_13991_p3() {
    tmp_122_fu_13991_p3 = (!tmp_41_reg_39407.read()[0].is_01())? sc_lv<32>(): ((tmp_41_reg_39407.read()[0].to_bool())? ref_patch_dy_0_63_33_fu_1004.read(): tmp_116_fu_13984_p3.read());
}

void batch_align2D_region::thread_tmp_1230_fu_35931_p2() {
    tmp_1230_fu_35931_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_1231_fu_35936_p3() {
    tmp_1231_fu_35936_p3 = (!tmp_1230_fu_35931_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1230_fu_35931_p2.read()[0].to_bool())? ref_patch_dy_7_63_24_fu_4552.read(): tmp_1229_fu_35923_p3.read());
}

void batch_align2D_region::thread_tmp_1232_fu_35944_p2() {
    tmp_1232_fu_35944_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_1233_fu_35949_p3() {
    tmp_1233_fu_35949_p3 = (!tmp_1232_fu_35944_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1232_fu_35944_p2.read()[0].to_bool())? ref_patch_dy_7_63_32_fu_4584.read(): tmp_1231_fu_35936_p3.read());
}

void batch_align2D_region::thread_tmp_1234_fu_35957_p2() {
    tmp_1234_fu_35957_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_1235_fu_35962_p3() {
    tmp_1235_fu_35962_p3 = (!tmp_1234_fu_35957_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1234_fu_35957_p2.read()[0].to_bool())? ref_patch_dy_7_63_40_fu_4616.read(): tmp_1233_fu_35949_p3.read());
}

void batch_align2D_region::thread_tmp_1236_fu_35970_p2() {
    tmp_1236_fu_35970_p2 = (!tmp_1502_reg_50681_pp19_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_reg_50681_pp19_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_1237_fu_36009_p2() {
    tmp_1237_fu_36009_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_1238_fu_36015_p3() {
    tmp_1238_fu_36015_p3 = (!tmp_1237_fu_36009_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1237_fu_36009_p2.read()[0].to_bool())? ref_patch_dx_7_63_8_fu_4232.read(): ref_patch_dx_7_63_57_fu_4428.read());
}

void batch_align2D_region::thread_tmp_1239_fu_36023_p2() {
    tmp_1239_fu_36023_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_123_1_fu_15500_p2() {
    tmp_123_1_fu_15500_p2 = (!x_cast1_171_fu_15455_p1.read().is_01() || !tmp_1221_1_cast_fu_15496_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_cast1_171_fu_15455_p1.read()) + sc_biguint<8>(tmp_1221_1_cast_fu_15496_p1.read()));
}

void batch_align2D_region::thread_tmp_123_2_fu_18667_p2() {
    tmp_123_2_fu_18667_p2 = (!x_2_cast1_fu_18622_p1.read().is_01() || !tmp_1221_2_cast_fu_18663_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_2_cast1_fu_18622_p1.read()) + sc_biguint<8>(tmp_1221_2_cast_fu_18663_p1.read()));
}

void batch_align2D_region::thread_tmp_123_3_fu_21834_p2() {
    tmp_123_3_fu_21834_p2 = (!x_3_cast1_fu_21789_p1.read().is_01() || !tmp_1221_3_cast_fu_21830_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_3_cast1_fu_21789_p1.read()) + sc_biguint<8>(tmp_1221_3_cast_fu_21830_p1.read()));
}

void batch_align2D_region::thread_tmp_123_4_fu_25001_p2() {
    tmp_123_4_fu_25001_p2 = (!x_4_cast1_fu_24956_p1.read().is_01() || !tmp_1221_4_cast_fu_24997_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_4_cast1_fu_24956_p1.read()) + sc_biguint<8>(tmp_1221_4_cast_fu_24997_p1.read()));
}

void batch_align2D_region::thread_tmp_123_5_fu_28169_p2() {
    tmp_123_5_fu_28169_p2 = (!x_5_cast1_fu_28124_p1.read().is_01() || !tmp_1221_5_cast_fu_28165_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_5_cast1_fu_28124_p1.read()) + sc_biguint<8>(tmp_1221_5_cast_fu_28165_p1.read()));
}

void batch_align2D_region::thread_tmp_123_6_fu_31336_p2() {
    tmp_123_6_fu_31336_p2 = (!x_6_cast1_fu_31291_p1.read().is_01() || !tmp_1221_6_cast_fu_31332_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_6_cast1_fu_31291_p1.read()) + sc_biguint<8>(tmp_1221_6_cast_fu_31332_p1.read()));
}

void batch_align2D_region::thread_tmp_123_7_fu_34503_p2() {
    tmp_123_7_fu_34503_p2 = (!x_7_cast1_fu_34458_p1.read().is_01() || !tmp_1221_7_cast_fu_34499_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_7_cast1_fu_34458_p1.read()) + sc_biguint<8>(tmp_1221_7_cast_fu_34499_p1.read()));
}

void batch_align2D_region::thread_tmp_1240_fu_36029_p3() {
    tmp_1240_fu_36029_p3 = (!tmp_1239_fu_36023_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1239_fu_36023_p2.read()[0].to_bool())? ref_patch_dx_7_63_15_fu_4260.read(): tmp_1238_fu_36015_p3.read());
}

void batch_align2D_region::thread_tmp_1241_fu_36037_p2() {
    tmp_1241_fu_36037_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_1242_fu_36043_p3() {
    tmp_1242_fu_36043_p3 = (!tmp_1241_fu_36037_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1241_fu_36037_p2.read()[0].to_bool())? ref_patch_dx_7_63_22_fu_4288.read(): tmp_1240_fu_36029_p3.read());
}

void batch_align2D_region::thread_tmp_1243_fu_36051_p2() {
    tmp_1243_fu_36051_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_1244_fu_36057_p3() {
    tmp_1244_fu_36057_p3 = (!tmp_1243_fu_36051_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1243_fu_36051_p2.read()[0].to_bool())? ref_patch_dx_7_63_29_fu_4316.read(): tmp_1242_fu_36043_p3.read());
}

void batch_align2D_region::thread_tmp_1245_fu_36065_p2() {
    tmp_1245_fu_36065_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_1246_fu_36071_p3() {
    tmp_1246_fu_36071_p3 = (!tmp_1245_fu_36065_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1245_fu_36065_p2.read()[0].to_bool())? ref_patch_dx_7_63_36_fu_4344.read(): tmp_1244_fu_36057_p3.read());
}

void batch_align2D_region::thread_tmp_1247_fu_36079_p2() {
    tmp_1247_fu_36079_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_1248_fu_36085_p3() {
    tmp_1248_fu_36085_p3 = (!tmp_1247_fu_36079_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1247_fu_36079_p2.read()[0].to_bool())? ref_patch_dx_7_63_43_fu_4372.read(): tmp_1246_fu_36071_p3.read());
}

void batch_align2D_region::thread_tmp_1249_fu_36093_p2() {
    tmp_1249_fu_36093_p2 = (!tmp_205_7_044_t_fu_36004_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_044_t_fu_36004_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_124_1_fu_15506_p1() {
    tmp_124_1_fu_15506_p1 = esl_zext<64,8>(tmp_123_1_fu_15500_p2.read());
}

void batch_align2D_region::thread_tmp_124_2_fu_18673_p1() {
    tmp_124_2_fu_18673_p1 = esl_zext<64,8>(tmp_123_2_fu_18667_p2.read());
}

void batch_align2D_region::thread_tmp_124_3_fu_21840_p1() {
    tmp_124_3_fu_21840_p1 = esl_zext<64,8>(tmp_123_3_fu_21834_p2.read());
}

void batch_align2D_region::thread_tmp_124_4_fu_25007_p1() {
    tmp_124_4_fu_25007_p1 = esl_zext<64,8>(tmp_123_4_fu_25001_p2.read());
}

void batch_align2D_region::thread_tmp_124_5_fu_28175_p1() {
    tmp_124_5_fu_28175_p1 = esl_zext<64,8>(tmp_123_5_fu_28169_p2.read());
}

void batch_align2D_region::thread_tmp_124_6_fu_31342_p1() {
    tmp_124_6_fu_31342_p1 = esl_zext<64,8>(tmp_123_6_fu_31336_p2.read());
}

void batch_align2D_region::thread_tmp_124_7_fu_34509_p1() {
    tmp_124_7_fu_34509_p1 = esl_zext<64,8>(tmp_123_7_fu_34503_p2.read());
}

void batch_align2D_region::thread_tmp_1250_fu_36133_p3() {
    tmp_1250_fu_36133_p3 = (!tmp_1237_reg_51057.read()[0].is_01())? sc_lv<32>(): ((tmp_1237_reg_51057.read()[0].to_bool())? ref_patch_dy_7_63_1_fu_4460.read(): ref_patch_dy_7_63_57_fu_4684.read());
}

void batch_align2D_region::thread_tmp_1251_fu_36140_p3() {
    tmp_1251_fu_36140_p3 = (!tmp_1239_reg_51062.read()[0].is_01())? sc_lv<32>(): ((tmp_1239_reg_51062.read()[0].to_bool())? ref_patch_dy_7_63_9_fu_4492.read(): tmp_1250_fu_36133_p3.read());
}

void batch_align2D_region::thread_tmp_1252_fu_36147_p3() {
    tmp_1252_fu_36147_p3 = (!tmp_1241_reg_51067.read()[0].is_01())? sc_lv<32>(): ((tmp_1241_reg_51067.read()[0].to_bool())? ref_patch_dy_7_63_17_fu_4524.read(): tmp_1251_fu_36140_p3.read());
}

void batch_align2D_region::thread_tmp_1253_fu_36154_p3() {
    tmp_1253_fu_36154_p3 = (!tmp_1243_reg_51072.read()[0].is_01())? sc_lv<32>(): ((tmp_1243_reg_51072.read()[0].to_bool())? ref_patch_dy_7_63_25_fu_4556.read(): tmp_1252_fu_36147_p3.read());
}

void batch_align2D_region::thread_tmp_1254_fu_36161_p3() {
    tmp_1254_fu_36161_p3 = (!tmp_1245_reg_51077.read()[0].is_01())? sc_lv<32>(): ((tmp_1245_reg_51077.read()[0].to_bool())? ref_patch_dy_7_63_33_fu_4588.read(): tmp_1253_fu_36154_p3.read());
}

void batch_align2D_region::thread_tmp_1255_fu_36168_p3() {
    tmp_1255_fu_36168_p3 = (!tmp_1247_reg_51082.read()[0].is_01())? sc_lv<32>(): ((tmp_1247_reg_51082.read()[0].to_bool())? ref_patch_dy_7_63_41_fu_4620.read(): tmp_1254_fu_36161_p3.read());
}

void batch_align2D_region::thread_tmp_1256_fu_36208_p2() {
    tmp_1256_fu_36208_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_1257_fu_36214_p3() {
    tmp_1257_fu_36214_p3 = (!tmp_1256_fu_36208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1256_fu_36208_p2.read()[0].to_bool())? ref_patch_dx_7_63_9_fu_4236.read(): ref_patch_dx_7_63_58_fu_4432.read());
}

void batch_align2D_region::thread_tmp_1258_fu_36222_p2() {
    tmp_1258_fu_36222_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_1259_fu_36228_p3() {
    tmp_1259_fu_36228_p3 = (!tmp_1258_fu_36222_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1258_fu_36222_p2.read()[0].to_bool())? ref_patch_dx_7_63_16_fu_4264.read(): tmp_1257_fu_36214_p3.read());
}

void batch_align2D_region::thread_tmp_125_1_cast_fu_15519_p1() {
    tmp_125_1_cast_fu_15519_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q0.read());
}

void batch_align2D_region::thread_tmp_125_2_cast_fu_18686_p1() {
    tmp_125_2_cast_fu_18686_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q0.read());
}

void batch_align2D_region::thread_tmp_125_3_cast_fu_21853_p1() {
    tmp_125_3_cast_fu_21853_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q0.read());
}

void batch_align2D_region::thread_tmp_125_4_cast_fu_25020_p1() {
    tmp_125_4_cast_fu_25020_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q0.read());
}

void batch_align2D_region::thread_tmp_125_5_cast_fu_28188_p1() {
    tmp_125_5_cast_fu_28188_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q0.read());
}

void batch_align2D_region::thread_tmp_125_6_cast_fu_31355_p1() {
    tmp_125_6_cast_fu_31355_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q0.read());
}

void batch_align2D_region::thread_tmp_125_7_cast_fu_34522_p1() {
    tmp_125_7_cast_fu_34522_p1 = esl_zext<9,8>(ref_patch_with_borde_q0.read());
}

void batch_align2D_region::thread_tmp_125_demorgan_fu_13122_p2() {
    tmp_125_demorgan_fu_13122_p2 = (tmp_i_i4_fu_13110_p2.read() & tmp_1_i_i5_fu_13116_p2.read());
}

}

