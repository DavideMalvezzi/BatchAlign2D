#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_it_0_sum_i_1_3_cast_fu_17071_p1() {
    it_0_sum_i_1_3_cast_fu_17071_p1 = esl_sext<64,13>(it_0_sum_i_1_3_fu_17066_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_3_fu_17066_p2() {
    it_0_sum_i_1_3_fu_17066_p2 = (!tmp_165_1_fu_16996_p2.read().is_01() || !tmp_157_1_cast1_reg_41473.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_1_fu_16996_p2.read()) + sc_biguint<13>(tmp_157_1_cast1_reg_41473.read()));
}

void batch_align2D_region::thread_it_0_sum_i_1_4_cast_fu_17246_p1() {
    it_0_sum_i_1_4_cast_fu_17246_p1 = esl_sext<64,13>(it_0_sum_i_1_4_fu_17241_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_4_fu_17241_p2() {
    it_0_sum_i_1_4_fu_17241_p2 = (!it_0_sum_i_1_3_reg_41560.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_1_3_reg_41560.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_1_5_cast_fu_17296_p1() {
    it_0_sum_i_1_5_cast_fu_17296_p1 = esl_sext<64,13>(it_0_sum_i_1_5_fu_17291_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_5_fu_17291_p2() {
    it_0_sum_i_1_5_fu_17291_p2 = (!p_sum12_i_1_reg_41525.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_1_reg_41525.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_1_6_cast_fu_17331_p1() {
    it_0_sum_i_1_6_cast_fu_17331_p1 = esl_sext<64,13>(it_0_sum_i_1_6_fu_17326_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_6_fu_17326_p2() {
    it_0_sum_i_1_6_fu_17326_p2 = (!p_sum12_i_1_reg_41525.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_1_reg_41525.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_1_7_cast_fu_17356_p1() {
    it_0_sum_i_1_7_cast_fu_17356_p1 = esl_sext<64,13>(it_0_sum_i_1_7_fu_17351_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_7_fu_17351_p2() {
    it_0_sum_i_1_7_fu_17351_p2 = (!p_sum12_i_1_reg_41525.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_1_reg_41525.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_1_cast_fu_17081_p1() {
    it_0_sum_i_1_cast_fu_17081_p1 = esl_sext<64,13>(it_0_sum_i_1_fu_17076_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_1_fu_17076_p2() {
    it_0_sum_i_1_fu_17076_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_1_reg_41525.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_1_reg_41525.read()));
}

void batch_align2D_region::thread_it_0_sum_i_2_1_cast_fu_20353_p1() {
    it_0_sum_i_2_1_cast_fu_20353_p1 = esl_sext<64,13>(it_0_sum_i_2_1_fu_20348_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_1_fu_20348_p2() {
    it_0_sum_i_2_1_fu_20348_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_2_2_cast_fu_20398_p1() {
    it_0_sum_i_2_2_cast_fu_20398_p1 = esl_sext<64,13>(it_0_sum_i_2_2_fu_20393_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_2_fu_20393_p2() {
    it_0_sum_i_2_2_fu_20393_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_2_3_cast_fu_20283_p1() {
    it_0_sum_i_2_3_cast_fu_20283_p1 = esl_sext<64,13>(it_0_sum_i_2_3_fu_20278_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_3_fu_20278_p2() {
    it_0_sum_i_2_3_fu_20278_p2 = (!tmp_165_2_fu_20208_p2.read().is_01() || !tmp_157_2_cast1_reg_43094.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_2_fu_20208_p2.read()) + sc_biguint<13>(tmp_157_2_cast1_reg_43094.read()));
}

void batch_align2D_region::thread_it_0_sum_i_2_4_cast_fu_20458_p1() {
    it_0_sum_i_2_4_cast_fu_20458_p1 = esl_sext<64,13>(it_0_sum_i_2_4_fu_20453_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_4_fu_20453_p2() {
    it_0_sum_i_2_4_fu_20453_p2 = (!it_0_sum_i_2_3_reg_43181.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_2_3_reg_43181.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_2_5_cast_fu_20508_p1() {
    it_0_sum_i_2_5_cast_fu_20508_p1 = esl_sext<64,13>(it_0_sum_i_2_5_fu_20503_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_5_fu_20503_p2() {
    it_0_sum_i_2_5_fu_20503_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_2_6_cast_fu_20543_p1() {
    it_0_sum_i_2_6_cast_fu_20543_p1 = esl_sext<64,13>(it_0_sum_i_2_6_fu_20538_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_6_fu_20538_p2() {
    it_0_sum_i_2_6_fu_20538_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_2_7_cast_fu_20568_p1() {
    it_0_sum_i_2_7_cast_fu_20568_p1 = esl_sext<64,13>(it_0_sum_i_2_7_fu_20563_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_7_fu_20563_p2() {
    it_0_sum_i_2_7_fu_20563_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_2_cast_fu_20293_p1() {
    it_0_sum_i_2_cast_fu_20293_p1 = esl_sext<64,13>(it_0_sum_i_2_fu_20288_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_2_fu_20288_p2() {
    it_0_sum_i_2_fu_20288_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_2_reg_43146.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_2_reg_43146.read()));
}

void batch_align2D_region::thread_it_0_sum_i_3_1_cast_fu_23565_p1() {
    it_0_sum_i_3_1_cast_fu_23565_p1 = esl_sext<64,13>(it_0_sum_i_3_1_fu_23560_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_1_fu_23560_p2() {
    it_0_sum_i_3_1_fu_23560_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_3_2_cast_fu_23610_p1() {
    it_0_sum_i_3_2_cast_fu_23610_p1 = esl_sext<64,13>(it_0_sum_i_3_2_fu_23605_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_2_fu_23605_p2() {
    it_0_sum_i_3_2_fu_23605_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_3_3_cast_fu_23495_p1() {
    it_0_sum_i_3_3_cast_fu_23495_p1 = esl_sext<64,13>(it_0_sum_i_3_3_fu_23490_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_3_fu_23490_p2() {
    it_0_sum_i_3_3_fu_23490_p2 = (!tmp_165_3_fu_23420_p2.read().is_01() || !tmp_157_3_cast1_reg_44720.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_3_fu_23420_p2.read()) + sc_biguint<13>(tmp_157_3_cast1_reg_44720.read()));
}

void batch_align2D_region::thread_it_0_sum_i_3_4_cast_fu_23670_p1() {
    it_0_sum_i_3_4_cast_fu_23670_p1 = esl_sext<64,13>(it_0_sum_i_3_4_fu_23665_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_4_fu_23665_p2() {
    it_0_sum_i_3_4_fu_23665_p2 = (!it_0_sum_i_3_3_reg_44807.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_3_3_reg_44807.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_3_5_cast_fu_23720_p1() {
    it_0_sum_i_3_5_cast_fu_23720_p1 = esl_sext<64,13>(it_0_sum_i_3_5_fu_23715_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_5_fu_23715_p2() {
    it_0_sum_i_3_5_fu_23715_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_3_6_cast_fu_23755_p1() {
    it_0_sum_i_3_6_cast_fu_23755_p1 = esl_sext<64,13>(it_0_sum_i_3_6_fu_23750_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_6_fu_23750_p2() {
    it_0_sum_i_3_6_fu_23750_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_3_7_cast_fu_23780_p1() {
    it_0_sum_i_3_7_cast_fu_23780_p1 = esl_sext<64,13>(it_0_sum_i_3_7_fu_23775_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_7_fu_23775_p2() {
    it_0_sum_i_3_7_fu_23775_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_3_cast_fu_23505_p1() {
    it_0_sum_i_3_cast_fu_23505_p1 = esl_sext<64,13>(it_0_sum_i_3_fu_23500_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_3_fu_23500_p2() {
    it_0_sum_i_3_fu_23500_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_3_reg_44772.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_3_reg_44772.read()));
}

void batch_align2D_region::thread_it_0_sum_i_4_1_cast_fu_26777_p1() {
    it_0_sum_i_4_1_cast_fu_26777_p1 = esl_sext<64,13>(it_0_sum_i_4_1_fu_26772_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_1_fu_26772_p2() {
    it_0_sum_i_4_1_fu_26772_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_4_2_cast_fu_26822_p1() {
    it_0_sum_i_4_2_cast_fu_26822_p1 = esl_sext<64,13>(it_0_sum_i_4_2_fu_26817_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_2_fu_26817_p2() {
    it_0_sum_i_4_2_fu_26817_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_4_3_cast_fu_26707_p1() {
    it_0_sum_i_4_3_cast_fu_26707_p1 = esl_sext<64,13>(it_0_sum_i_4_3_fu_26702_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_3_fu_26702_p2() {
    it_0_sum_i_4_3_fu_26702_p2 = (!tmp_165_4_fu_26632_p2.read().is_01() || !tmp_157_4_cast1_reg_46341.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_4_fu_26632_p2.read()) + sc_biguint<13>(tmp_157_4_cast1_reg_46341.read()));
}

void batch_align2D_region::thread_it_0_sum_i_4_4_cast_fu_26882_p1() {
    it_0_sum_i_4_4_cast_fu_26882_p1 = esl_sext<64,13>(it_0_sum_i_4_4_fu_26877_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_4_fu_26877_p2() {
    it_0_sum_i_4_4_fu_26877_p2 = (!it_0_sum_i_4_3_reg_46428.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_4_3_reg_46428.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_4_5_cast_fu_26932_p1() {
    it_0_sum_i_4_5_cast_fu_26932_p1 = esl_sext<64,13>(it_0_sum_i_4_5_fu_26927_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_5_fu_26927_p2() {
    it_0_sum_i_4_5_fu_26927_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_4_6_cast_fu_26967_p1() {
    it_0_sum_i_4_6_cast_fu_26967_p1 = esl_sext<64,13>(it_0_sum_i_4_6_fu_26962_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_6_fu_26962_p2() {
    it_0_sum_i_4_6_fu_26962_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_4_7_cast_fu_26992_p1() {
    it_0_sum_i_4_7_cast_fu_26992_p1 = esl_sext<64,13>(it_0_sum_i_4_7_fu_26987_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_7_fu_26987_p2() {
    it_0_sum_i_4_7_fu_26987_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_4_cast_fu_26717_p1() {
    it_0_sum_i_4_cast_fu_26717_p1 = esl_sext<64,13>(it_0_sum_i_4_fu_26712_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_4_fu_26712_p2() {
    it_0_sum_i_4_fu_26712_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_4_reg_46393.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_4_reg_46393.read()));
}

void batch_align2D_region::thread_it_0_sum_i_5_1_cast_fu_29989_p1() {
    it_0_sum_i_5_1_cast_fu_29989_p1 = esl_sext<64,13>(it_0_sum_i_5_1_fu_29984_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_1_fu_29984_p2() {
    it_0_sum_i_5_1_fu_29984_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_5_2_cast_fu_30034_p1() {
    it_0_sum_i_5_2_cast_fu_30034_p1 = esl_sext<64,13>(it_0_sum_i_5_2_fu_30029_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_2_fu_30029_p2() {
    it_0_sum_i_5_2_fu_30029_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_5_3_cast_fu_29919_p1() {
    it_0_sum_i_5_3_cast_fu_29919_p1 = esl_sext<64,13>(it_0_sum_i_5_3_fu_29914_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_3_fu_29914_p2() {
    it_0_sum_i_5_3_fu_29914_p2 = (!tmp_165_5_fu_29844_p2.read().is_01() || !tmp_157_5_cast1_reg_47967.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_5_fu_29844_p2.read()) + sc_biguint<13>(tmp_157_5_cast1_reg_47967.read()));
}

void batch_align2D_region::thread_it_0_sum_i_5_4_cast_fu_30094_p1() {
    it_0_sum_i_5_4_cast_fu_30094_p1 = esl_sext<64,13>(it_0_sum_i_5_4_fu_30089_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_4_fu_30089_p2() {
    it_0_sum_i_5_4_fu_30089_p2 = (!it_0_sum_i_5_3_reg_48049.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_5_3_reg_48049.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_5_5_cast_fu_30144_p1() {
    it_0_sum_i_5_5_cast_fu_30144_p1 = esl_sext<64,13>(it_0_sum_i_5_5_fu_30139_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_5_fu_30139_p2() {
    it_0_sum_i_5_5_fu_30139_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_5_6_cast_fu_30179_p1() {
    it_0_sum_i_5_6_cast_fu_30179_p1 = esl_sext<64,13>(it_0_sum_i_5_6_fu_30174_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_6_fu_30174_p2() {
    it_0_sum_i_5_6_fu_30174_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_5_7_cast_fu_30204_p1() {
    it_0_sum_i_5_7_cast_fu_30204_p1 = esl_sext<64,13>(it_0_sum_i_5_7_fu_30199_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_7_fu_30199_p2() {
    it_0_sum_i_5_7_fu_30199_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_5_cast_fu_29929_p1() {
    it_0_sum_i_5_cast_fu_29929_p1 = esl_sext<64,13>(it_0_sum_i_5_fu_29924_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_5_fu_29924_p2() {
    it_0_sum_i_5_fu_29924_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_5_reg_48014.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_5_reg_48014.read()));
}

void batch_align2D_region::thread_it_0_sum_i_6_1_cast_fu_33201_p1() {
    it_0_sum_i_6_1_cast_fu_33201_p1 = esl_sext<64,13>(it_0_sum_i_6_1_fu_33196_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_1_fu_33196_p2() {
    it_0_sum_i_6_1_fu_33196_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_6_2_cast_fu_33246_p1() {
    it_0_sum_i_6_2_cast_fu_33246_p1 = esl_sext<64,13>(it_0_sum_i_6_2_fu_33241_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_2_fu_33241_p2() {
    it_0_sum_i_6_2_fu_33241_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_6_3_cast_fu_33131_p1() {
    it_0_sum_i_6_3_cast_fu_33131_p1 = esl_sext<64,13>(it_0_sum_i_6_3_fu_33126_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_3_fu_33126_p2() {
    it_0_sum_i_6_3_fu_33126_p2 = (!tmp_165_6_fu_33056_p2.read().is_01() || !tmp_157_6_cast1_reg_49583.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_6_fu_33056_p2.read()) + sc_biguint<13>(tmp_157_6_cast1_reg_49583.read()));
}

void batch_align2D_region::thread_it_0_sum_i_6_4_cast_fu_33306_p1() {
    it_0_sum_i_6_4_cast_fu_33306_p1 = esl_sext<64,13>(it_0_sum_i_6_4_fu_33301_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_4_fu_33301_p2() {
    it_0_sum_i_6_4_fu_33301_p2 = (!it_0_sum_i_6_3_reg_49670.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_6_3_reg_49670.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_6_5_cast_fu_33356_p1() {
    it_0_sum_i_6_5_cast_fu_33356_p1 = esl_sext<64,13>(it_0_sum_i_6_5_fu_33351_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_5_fu_33351_p2() {
    it_0_sum_i_6_5_fu_33351_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_6_6_cast_fu_33391_p1() {
    it_0_sum_i_6_6_cast_fu_33391_p1 = esl_sext<64,13>(it_0_sum_i_6_6_fu_33386_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_6_fu_33386_p2() {
    it_0_sum_i_6_6_fu_33386_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_6_7_cast_fu_33416_p1() {
    it_0_sum_i_6_7_cast_fu_33416_p1 = esl_sext<64,13>(it_0_sum_i_6_7_fu_33411_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_7_fu_33411_p2() {
    it_0_sum_i_6_7_fu_33411_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_6_cast_fu_33141_p1() {
    it_0_sum_i_6_cast_fu_33141_p1 = esl_sext<64,13>(it_0_sum_i_6_fu_33136_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_6_fu_33136_p2() {
    it_0_sum_i_6_fu_33136_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_6_reg_49635.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_6_reg_49635.read()));
}

void batch_align2D_region::thread_it_0_sum_i_7_1_cast_fu_36414_p1() {
    it_0_sum_i_7_1_cast_fu_36414_p1 = esl_sext<64,13>(it_0_sum_i_7_1_fu_36409_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_1_fu_36409_p2() {
    it_0_sum_i_7_1_fu_36409_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_2.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_2));
}

void batch_align2D_region::thread_it_0_sum_i_7_2_cast_fu_36459_p1() {
    it_0_sum_i_7_2_cast_fu_36459_p1 = esl_sext<64,13>(it_0_sum_i_7_2_fu_36454_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_2_fu_36454_p2() {
    it_0_sum_i_7_2_fu_36454_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_3.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_3));
}

void batch_align2D_region::thread_it_0_sum_i_7_3_cast_fu_36344_p1() {
    it_0_sum_i_7_3_cast_fu_36344_p1 = esl_sext<64,13>(it_0_sum_i_7_3_fu_36339_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_3_fu_36339_p2() {
    it_0_sum_i_7_3_fu_36339_p2 = (!tmp_165_7_fu_36269_p2.read().is_01() || !tmp_157_7_cast1_reg_51198.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_165_7_fu_36269_p2.read()) + sc_biguint<13>(tmp_157_7_cast1_reg_51198.read()));
}

void batch_align2D_region::thread_it_0_sum_i_7_4_cast_fu_36519_p1() {
    it_0_sum_i_7_4_cast_fu_36519_p1 = esl_sext<64,13>(it_0_sum_i_7_4_fu_36514_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_4_fu_36514_p2() {
    it_0_sum_i_7_4_fu_36514_p2 = (!it_0_sum_i_7_3_reg_51285.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_bigint<13>(it_0_sum_i_7_3_reg_51285.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void batch_align2D_region::thread_it_0_sum_i_7_5_cast_fu_36569_p1() {
    it_0_sum_i_7_5_cast_fu_36569_p1 = esl_sext<64,13>(it_0_sum_i_7_5_fu_36564_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_5_fu_36564_p2() {
    it_0_sum_i_7_5_fu_36564_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_6.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_6));
}

void batch_align2D_region::thread_it_0_sum_i_7_6_cast_fu_36604_p1() {
    it_0_sum_i_7_6_cast_fu_36604_p1 = esl_sext<64,13>(it_0_sum_i_7_6_fu_36599_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_6_fu_36599_p2() {
    it_0_sum_i_7_6_fu_36599_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_7.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_7));
}

void batch_align2D_region::thread_it_0_sum_i_7_7_cast_fu_36629_p1() {
    it_0_sum_i_7_7_cast_fu_36629_p1 = esl_sext<64,13>(it_0_sum_i_7_7_fu_36624_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_7_fu_36624_p2() {
    it_0_sum_i_7_7_fu_36624_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_8.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_8));
}

void batch_align2D_region::thread_it_0_sum_i_7_cast_fu_36354_p1() {
    it_0_sum_i_7_cast_fu_36354_p1 = esl_sext<64,13>(it_0_sum_i_7_fu_36349_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_7_fu_36349_p2() {
    it_0_sum_i_7_fu_36349_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_7_reg_51250.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_7_reg_51250.read()));
}

void batch_align2D_region::thread_it_0_sum_i_cast_fu_13869_p1() {
    it_0_sum_i_cast_fu_13869_p1 = esl_sext<64,13>(it_0_sum_i_fu_13864_p2.read());
}

void batch_align2D_region::thread_it_0_sum_i_fu_13864_p2() {
    it_0_sum_i_fu_13864_p2 = (!ap_const_lv13_1.is_01() || !p_sum12_i_reg_39904.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_bigint<13>(p_sum12_i_reg_39904.read()));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_1_fu_17459_p2() {
    it_ref_dx_0_i_addr_1_fu_17459_p2 = (!it_ref_dx_0_i_1_rec_reg_7856.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_1_rec_reg_7856.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_2_fu_20671_p2() {
    it_ref_dx_0_i_addr_2_fu_20671_p2 = (!it_ref_dx_0_i_2_rec_reg_8244.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_2_rec_reg_8244.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_3_fu_23883_p2() {
    it_ref_dx_0_i_addr_3_fu_23883_p2 = (!it_ref_dx_0_i_3_rec_reg_8632.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_3_rec_reg_8632.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_4_fu_27095_p2() {
    it_ref_dx_0_i_addr_4_fu_27095_p2 = (!it_ref_dx_0_i_4_rec_reg_9020.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_4_rec_reg_9020.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_5_fu_30307_p2() {
    it_ref_dx_0_i_addr_5_fu_30307_p2 = (!it_ref_dx_0_i_5_rec_reg_9407.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_5_rec_reg_9407.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_6_fu_33519_p2() {
    it_ref_dx_0_i_addr_6_fu_33519_p2 = (!it_ref_dx_0_i_6_rec_reg_9794.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_6_rec_reg_9794.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_7_fu_36732_p2() {
    it_ref_dx_0_i_addr_7_fu_36732_p2 = (!it_ref_dx_0_i_7_rec_reg_10182.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_7_rec_reg_10182.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_addr_fu_14247_p2() {
    it_ref_dx_0_i_addr_fu_14247_p2 = (!it_ref_dx_0_i_0_rec_reg_7469.read().is_01() || !ap_const_lv7_8.is_01())? sc_lv<7>(): (sc_biguint<7>(it_ref_dx_0_i_0_rec_reg_7469.read()) + sc_biguint<7>(ap_const_lv7_8));
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_1_fu_14511_p3() {
    it_ref_dx_0_i_load_0_1_fu_14511_p3 = (!tmp_42_reg_40326.read()[0].is_01())? sc_lv<32>(): ((tmp_42_reg_40326.read()[0].to_bool())? ref_patch_dx_0_63_50_fu_838.read(): tmp_41_reg_40321.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_2_fu_14686_p3() {
    it_ref_dx_0_i_load_0_2_fu_14686_p3 = (!tmp_170_reg_40377.read()[0].is_01())? sc_lv<32>(): ((tmp_170_reg_40377.read()[0].to_bool())? ref_patch_dx_0_63_51_fu_842.read(): tmp_169_reg_40372.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_3_fu_14909_p3() {
    it_ref_dx_0_i_load_0_3_fu_14909_p3 = (!tmp_195_fu_14903_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_195_fu_14903_p2.read()[0].to_bool())? ref_patch_dx_0_63_52_fu_846.read(): tmp_194_fu_14895_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_4_fu_15116_p3() {
    it_ref_dx_0_i_load_0_4_fu_15116_p3 = (!tmp_217_fu_15110_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_217_fu_15110_p2.read()[0].to_bool())? ref_patch_dx_0_63_53_fu_850.read(): tmp_216_fu_15102_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_5_fu_15323_p3() {
    it_ref_dx_0_i_load_0_5_fu_15323_p3 = (!tmp_236_reg_40448.read()[0].is_01())? sc_lv<32>(): ((tmp_236_reg_40448.read()[0].to_bool())? ref_patch_dx_0_63_54_fu_854.read(): tmp_235_reg_40443.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_6_fu_15522_p3() {
    it_ref_dx_0_i_load_0_6_fu_15522_p3 = (!tmp_255_fu_15516_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_255_fu_15516_p2.read()[0].to_bool())? ref_patch_dx_0_63_55_fu_858.read(): tmp_254_fu_15508_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_0_7_fu_15729_p3() {
    it_ref_dx_0_i_load_0_7_fu_15729_p3 = (!tmp_290_fu_15723_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_290_fu_15723_p2.read()[0].to_bool())? ref_patch_dx_0_63_56_fu_862.read(): tmp_289_fu_15715_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_1_fu_17723_p3() {
    it_ref_dx_0_i_load_1_1_fu_17723_p3 = (!tmp_315_reg_41947.read()[0].is_01())? sc_lv<32>(): ((tmp_315_reg_41947.read()[0].to_bool())? ref_patch_dx_1_63_50_fu_1350.read(): tmp_314_reg_41942.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_2_fu_17898_p3() {
    it_ref_dx_0_i_load_1_2_fu_17898_p3 = (!tmp_334_reg_41998.read()[0].is_01())? sc_lv<32>(): ((tmp_334_reg_41998.read()[0].to_bool())? ref_patch_dx_1_63_51_fu_1354.read(): tmp_333_reg_41993.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_3_fu_18121_p3() {
    it_ref_dx_0_i_load_1_3_fu_18121_p3 = (!tmp_354_fu_18115_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_354_fu_18115_p2.read()[0].to_bool())? ref_patch_dx_1_63_52_fu_1358.read(): tmp_353_fu_18107_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_4_fu_18328_p3() {
    it_ref_dx_0_i_load_1_4_fu_18328_p3 = (!tmp_373_fu_18322_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_373_fu_18322_p2.read()[0].to_bool())? ref_patch_dx_1_63_53_fu_1362.read(): tmp_372_fu_18314_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_5_fu_18535_p3() {
    it_ref_dx_0_i_load_1_5_fu_18535_p3 = (!tmp_393_reg_42069.read()[0].is_01())? sc_lv<32>(): ((tmp_393_reg_42069.read()[0].to_bool())? ref_patch_dx_1_63_54_fu_1366.read(): tmp_392_reg_42064.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_6_fu_18734_p3() {
    it_ref_dx_0_i_load_1_6_fu_18734_p3 = (!tmp_412_fu_18728_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_412_fu_18728_p2.read()[0].to_bool())? ref_patch_dx_1_63_55_fu_1370.read(): tmp_411_fu_18720_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_1_7_fu_18941_p3() {
    it_ref_dx_0_i_load_1_7_fu_18941_p3 = (!tmp_432_fu_18935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_432_fu_18935_p2.read()[0].to_bool())? ref_patch_dx_1_63_56_fu_1374.read(): tmp_431_fu_18927_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_1_fu_20935_p3() {
    it_ref_dx_0_i_load_2_1_fu_20935_p3 = (!tmp_470_reg_43568.read()[0].is_01())? sc_lv<32>(): ((tmp_470_reg_43568.read()[0].to_bool())? ref_patch_dx_2_63_50_fu_1862.read(): tmp_469_reg_43563.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_2_fu_21110_p3() {
    it_ref_dx_0_i_load_2_2_fu_21110_p3 = (!tmp_489_reg_43619.read()[0].is_01())? sc_lv<32>(): ((tmp_489_reg_43619.read()[0].to_bool())? ref_patch_dx_2_63_51_fu_1866.read(): tmp_488_reg_43614.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_3_fu_21333_p3() {
    it_ref_dx_0_i_load_2_3_fu_21333_p3 = (!tmp_508_fu_21327_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_508_fu_21327_p2.read()[0].to_bool())? ref_patch_dx_2_63_52_fu_1870.read(): tmp_507_fu_21319_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_4_fu_21540_p3() {
    it_ref_dx_0_i_load_2_4_fu_21540_p3 = (!tmp_528_fu_21534_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_528_fu_21534_p2.read()[0].to_bool())? ref_patch_dx_2_63_53_fu_1874.read(): tmp_527_fu_21526_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_5_fu_21747_p3() {
    it_ref_dx_0_i_load_2_5_fu_21747_p3 = (!tmp_547_reg_43690.read()[0].is_01())? sc_lv<32>(): ((tmp_547_reg_43690.read()[0].to_bool())? ref_patch_dx_2_63_54_fu_1878.read(): tmp_546_reg_43685.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_6_fu_21946_p3() {
    it_ref_dx_0_i_load_2_6_fu_21946_p3 = (!tmp_567_fu_21940_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_567_fu_21940_p2.read()[0].to_bool())? ref_patch_dx_2_63_55_fu_1882.read(): tmp_566_fu_21932_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_2_7_fu_22153_p3() {
    it_ref_dx_0_i_load_2_7_fu_22153_p3 = (!tmp_586_fu_22147_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_586_fu_22147_p2.read()[0].to_bool())? ref_patch_dx_2_63_56_fu_1886.read(): tmp_585_fu_22139_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_1_fu_24147_p3() {
    it_ref_dx_0_i_load_3_1_fu_24147_p3 = (!tmp_626_reg_45194.read()[0].is_01())? sc_lv<32>(): ((tmp_626_reg_45194.read()[0].to_bool())? ref_patch_dx_3_63_50_fu_2374.read(): tmp_625_reg_45189.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_2_fu_24322_p3() {
    it_ref_dx_0_i_load_3_2_fu_24322_p3 = (!tmp_645_reg_45245.read()[0].is_01())? sc_lv<32>(): ((tmp_645_reg_45245.read()[0].to_bool())? ref_patch_dx_3_63_51_fu_2378.read(): tmp_644_reg_45240.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_3_fu_24545_p3() {
    it_ref_dx_0_i_load_3_3_fu_24545_p3 = (!tmp_664_fu_24539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_664_fu_24539_p2.read()[0].to_bool())? ref_patch_dx_3_63_52_fu_2382.read(): tmp_663_fu_24531_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_4_fu_24752_p3() {
    it_ref_dx_0_i_load_3_4_fu_24752_p3 = (!tmp_683_fu_24746_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_683_fu_24746_p2.read()[0].to_bool())? ref_patch_dx_3_63_53_fu_2386.read(): tmp_682_fu_24738_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_5_fu_24959_p3() {
    it_ref_dx_0_i_load_3_5_fu_24959_p3 = (!tmp_702_reg_45316.read()[0].is_01())? sc_lv<32>(): ((tmp_702_reg_45316.read()[0].to_bool())? ref_patch_dx_3_63_54_fu_2390.read(): tmp_701_reg_45311.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_6_fu_25158_p3() {
    it_ref_dx_0_i_load_3_6_fu_25158_p3 = (!tmp_722_fu_25152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_722_fu_25152_p2.read()[0].to_bool())? ref_patch_dx_3_63_55_fu_2394.read(): tmp_721_fu_25144_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_3_7_fu_25365_p3() {
    it_ref_dx_0_i_load_3_7_fu_25365_p3 = (!tmp_741_fu_25359_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_741_fu_25359_p2.read()[0].to_bool())? ref_patch_dx_3_63_56_fu_2398.read(): tmp_740_fu_25351_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_1_fu_27359_p3() {
    it_ref_dx_0_i_load_4_1_fu_27359_p3 = (!tmp_782_reg_46815.read()[0].is_01())? sc_lv<32>(): ((tmp_782_reg_46815.read()[0].to_bool())? ref_patch_dx_4_63_50_fu_2886.read(): tmp_781_reg_46810.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_2_fu_27534_p3() {
    it_ref_dx_0_i_load_4_2_fu_27534_p3 = (!tmp_801_reg_46866.read()[0].is_01())? sc_lv<32>(): ((tmp_801_reg_46866.read()[0].to_bool())? ref_patch_dx_4_63_51_fu_2890.read(): tmp_800_reg_46861.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_3_fu_27757_p3() {
    it_ref_dx_0_i_load_4_3_fu_27757_p3 = (!tmp_820_fu_27751_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_820_fu_27751_p2.read()[0].to_bool())? ref_patch_dx_4_63_52_fu_2894.read(): tmp_819_fu_27743_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_4_fu_27964_p3() {
    it_ref_dx_0_i_load_4_4_fu_27964_p3 = (!tmp_839_fu_27958_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_839_fu_27958_p2.read()[0].to_bool())? ref_patch_dx_4_63_53_fu_2898.read(): tmp_838_fu_27950_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_5_fu_28171_p3() {
    it_ref_dx_0_i_load_4_5_fu_28171_p3 = (!tmp_858_reg_46937.read()[0].is_01())? sc_lv<32>(): ((tmp_858_reg_46937.read()[0].to_bool())? ref_patch_dx_4_63_54_fu_2902.read(): tmp_857_reg_46932.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_6_fu_28370_p3() {
    it_ref_dx_0_i_load_4_6_fu_28370_p3 = (!tmp_877_fu_28364_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_877_fu_28364_p2.read()[0].to_bool())? ref_patch_dx_4_63_55_fu_2906.read(): tmp_876_fu_28356_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_4_7_fu_28577_p3() {
    it_ref_dx_0_i_load_4_7_fu_28577_p3 = (!tmp_896_fu_28571_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_896_fu_28571_p2.read()[0].to_bool())? ref_patch_dx_4_63_56_fu_2910.read(): tmp_895_fu_28563_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_1_fu_30571_p3() {
    it_ref_dx_0_i_load_5_1_fu_30571_p3 = (!tmp_938_reg_48436.read()[0].is_01())? sc_lv<32>(): ((tmp_938_reg_48436.read()[0].to_bool())? ref_patch_dx_5_63_50_fu_3398.read(): tmp_937_reg_48431.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_2_fu_30746_p3() {
    it_ref_dx_0_i_load_5_2_fu_30746_p3 = (!tmp_957_reg_48487.read()[0].is_01())? sc_lv<32>(): ((tmp_957_reg_48487.read()[0].to_bool())? ref_patch_dx_5_63_51_fu_3402.read(): tmp_956_reg_48482.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_3_fu_30969_p3() {
    it_ref_dx_0_i_load_5_3_fu_30969_p3 = (!tmp_976_fu_30963_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_976_fu_30963_p2.read()[0].to_bool())? ref_patch_dx_5_63_52_fu_3406.read(): tmp_975_fu_30955_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_4_fu_31176_p3() {
    it_ref_dx_0_i_load_5_4_fu_31176_p3 = (!tmp_995_fu_31170_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_995_fu_31170_p2.read()[0].to_bool())? ref_patch_dx_5_63_53_fu_3410.read(): tmp_994_fu_31162_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_5_fu_31383_p3() {
    it_ref_dx_0_i_load_5_5_fu_31383_p3 = (!tmp_1014_reg_48558.read()[0].is_01())? sc_lv<32>(): ((tmp_1014_reg_48558.read()[0].to_bool())? ref_patch_dx_5_63_54_fu_3414.read(): tmp_1013_reg_48553.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_6_fu_31582_p3() {
    it_ref_dx_0_i_load_5_6_fu_31582_p3 = (!tmp_1033_fu_31576_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1033_fu_31576_p2.read()[0].to_bool())? ref_patch_dx_5_63_55_fu_3418.read(): tmp_1032_fu_31568_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_5_7_fu_31789_p3() {
    it_ref_dx_0_i_load_5_7_fu_31789_p3 = (!tmp_1052_fu_31783_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1052_fu_31783_p2.read()[0].to_bool())? ref_patch_dx_5_63_56_fu_3422.read(): tmp_1051_fu_31775_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_1_fu_33783_p3() {
    it_ref_dx_0_i_load_6_1_fu_33783_p3 = (!tmp_1094_reg_50057.read()[0].is_01())? sc_lv<32>(): ((tmp_1094_reg_50057.read()[0].to_bool())? ref_patch_dx_6_63_50_fu_3910.read(): tmp_1093_reg_50052.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_2_fu_33958_p3() {
    it_ref_dx_0_i_load_6_2_fu_33958_p3 = (!tmp_1113_reg_50108.read()[0].is_01())? sc_lv<32>(): ((tmp_1113_reg_50108.read()[0].to_bool())? ref_patch_dx_6_63_51_fu_3914.read(): tmp_1112_reg_50103.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_3_fu_34181_p3() {
    it_ref_dx_0_i_load_6_3_fu_34181_p3 = (!tmp_1132_fu_34175_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1132_fu_34175_p2.read()[0].to_bool())? ref_patch_dx_6_63_52_fu_3918.read(): tmp_1131_fu_34167_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_4_fu_34388_p3() {
    it_ref_dx_0_i_load_6_4_fu_34388_p3 = (!tmp_1151_fu_34382_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1151_fu_34382_p2.read()[0].to_bool())? ref_patch_dx_6_63_53_fu_3922.read(): tmp_1150_fu_34374_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_5_fu_34571_p3() {
    it_ref_dx_0_i_load_6_5_fu_34571_p3 = (!tmp_1170_fu_34565_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1170_fu_34565_p2.read()[0].to_bool())? ref_patch_dx_6_63_54_fu_3926.read(): tmp_1169_fu_34557_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_6_fu_34795_p3() {
    it_ref_dx_0_i_load_6_6_fu_34795_p3 = (!tmp_1189_fu_34789_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1189_fu_34789_p2.read()[0].to_bool())? ref_patch_dx_6_63_55_fu_3930.read(): tmp_1188_fu_34781_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_6_7_fu_35002_p3() {
    it_ref_dx_0_i_load_6_7_fu_35002_p3 = (!tmp_1208_fu_34996_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1208_fu_34996_p2.read()[0].to_bool())? ref_patch_dx_6_63_56_fu_3934.read(): tmp_1207_fu_34988_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_1_fu_36996_p3() {
    it_ref_dx_0_i_load_7_1_fu_36996_p3 = (!tmp_1250_reg_51672.read()[0].is_01())? sc_lv<32>(): ((tmp_1250_reg_51672.read()[0].to_bool())? ref_patch_dx_7_63_50_fu_4422.read(): tmp_1249_reg_51667.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_2_fu_37171_p3() {
    it_ref_dx_0_i_load_7_2_fu_37171_p3 = (!tmp_1269_reg_51723.read()[0].is_01())? sc_lv<32>(): ((tmp_1269_reg_51723.read()[0].to_bool())? ref_patch_dx_7_63_51_fu_4426.read(): tmp_1268_reg_51718.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_3_fu_37394_p3() {
    it_ref_dx_0_i_load_7_3_fu_37394_p3 = (!tmp_1288_fu_37388_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1288_fu_37388_p2.read()[0].to_bool())? ref_patch_dx_7_63_52_fu_4430.read(): tmp_1287_fu_37380_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_4_fu_37601_p3() {
    it_ref_dx_0_i_load_7_4_fu_37601_p3 = (!tmp_1307_fu_37595_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1307_fu_37595_p2.read()[0].to_bool())? ref_patch_dx_7_63_53_fu_4434.read(): tmp_1306_fu_37587_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_5_fu_37808_p3() {
    it_ref_dx_0_i_load_7_5_fu_37808_p3 = (!tmp_1326_reg_51801.read()[0].is_01())? sc_lv<32>(): ((tmp_1326_reg_51801.read()[0].to_bool())? ref_patch_dx_7_63_54_fu_4438.read(): tmp_1325_reg_51796.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_6_fu_38007_p3() {
    it_ref_dx_0_i_load_7_6_fu_38007_p3 = (!tmp_1345_fu_38001_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1345_fu_38001_p2.read()[0].to_bool())? ref_patch_dx_7_63_55_fu_4442.read(): tmp_1344_fu_37993_p3.read());
}

void batch_align2D_region::thread_it_ref_dx_0_i_load_7_7_fu_38214_p3() {
    it_ref_dx_0_i_load_7_7_fu_38214_p3 = (!tmp_1364_fu_38208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1364_fu_38208_p2.read()[0].to_bool())? ref_patch_dx_7_63_56_fu_4446.read(): tmp_1363_fu_38200_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_1_fu_14588_p2() {
    it_ref_dy_0_i_0_sum1_1_fu_14588_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_2_fu_14814_p2() {
    it_ref_dy_0_i_0_sum1_2_fu_14814_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_3_fu_15021_p2() {
    it_ref_dy_0_i_0_sum1_3_fu_15021_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_4_fu_15201_p2() {
    it_ref_dy_0_i_0_sum1_4_fu_15201_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_5_fu_15427_p2() {
    it_ref_dy_0_i_0_sum1_5_fu_15427_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_6_fu_15634_p2() {
    it_ref_dy_0_i_0_sum1_6_fu_15634_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_0_sum1_fu_14389_p2() {
    it_ref_dy_0_i_0_sum1_fu_14389_p2 = (tmp_1388_reg_39876_pp5_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_1_fu_17800_p2() {
    it_ref_dy_0_i_1_sum1_1_fu_17800_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_2_fu_18026_p2() {
    it_ref_dy_0_i_1_sum1_2_fu_18026_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_3_fu_18233_p2() {
    it_ref_dy_0_i_1_sum1_3_fu_18233_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_4_fu_18413_p2() {
    it_ref_dy_0_i_1_sum1_4_fu_18413_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_5_fu_18639_p2() {
    it_ref_dy_0_i_1_sum1_5_fu_18639_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_6_fu_18846_p2() {
    it_ref_dy_0_i_1_sum1_6_fu_18846_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_1_sum1_fu_17601_p2() {
    it_ref_dy_0_i_1_sum1_fu_17601_p2 = (tmp_1403_reg_41497_pp7_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_1_fu_21012_p2() {
    it_ref_dy_0_i_2_sum1_1_fu_21012_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_2_fu_21238_p2() {
    it_ref_dy_0_i_2_sum1_2_fu_21238_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_3_fu_21445_p2() {
    it_ref_dy_0_i_2_sum1_3_fu_21445_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_4_fu_21625_p2() {
    it_ref_dy_0_i_2_sum1_4_fu_21625_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_5_fu_21851_p2() {
    it_ref_dy_0_i_2_sum1_5_fu_21851_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_6_fu_22058_p2() {
    it_ref_dy_0_i_2_sum1_6_fu_22058_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_2_sum1_fu_20813_p2() {
    it_ref_dy_0_i_2_sum1_fu_20813_p2 = (tmp_1444_reg_43118_pp9_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_1_fu_24224_p2() {
    it_ref_dy_0_i_3_sum1_1_fu_24224_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_2_fu_24450_p2() {
    it_ref_dy_0_i_3_sum1_2_fu_24450_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_3_fu_24657_p2() {
    it_ref_dy_0_i_3_sum1_3_fu_24657_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_4_fu_24837_p2() {
    it_ref_dy_0_i_3_sum1_4_fu_24837_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_5_fu_25063_p2() {
    it_ref_dy_0_i_3_sum1_5_fu_25063_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_6_fu_25270_p2() {
    it_ref_dy_0_i_3_sum1_6_fu_25270_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_3_sum1_fu_24025_p2() {
    it_ref_dy_0_i_3_sum1_fu_24025_p2 = (tmp_1455_reg_44744_pp11_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum1_fu_28482_p2() {
    it_ref_dy_0_i_4_sum1_fu_28482_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum8_fu_27237_p2() {
    it_ref_dy_0_i_4_sum8_fu_27237_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum9_1_fu_27662_p2() {
    it_ref_dy_0_i_4_sum9_1_fu_27662_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum9_2_fu_27869_p2() {
    it_ref_dy_0_i_4_sum9_2_fu_27869_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum9_3_fu_28049_p2() {
    it_ref_dy_0_i_4_sum9_3_fu_28049_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum9_4_fu_28275_p2() {
    it_ref_dy_0_i_4_sum9_4_fu_28275_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_4_sum9_fu_27436_p2() {
    it_ref_dy_0_i_4_sum9_fu_27436_p2 = (tmp_1466_reg_46365_pp13_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum7_1_fu_30648_p2() {
    it_ref_dy_0_i_5_sum7_1_fu_30648_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum7_2_fu_30874_p2() {
    it_ref_dy_0_i_5_sum7_2_fu_30874_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum7_fu_30449_p2() {
    it_ref_dy_0_i_5_sum7_fu_30449_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum8_1_fu_31261_p2() {
    it_ref_dy_0_i_5_sum8_1_fu_31261_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum8_2_fu_31487_p2() {
    it_ref_dy_0_i_5_sum8_2_fu_31487_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum8_3_fu_31694_p2() {
    it_ref_dy_0_i_5_sum8_3_fu_31694_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_5_sum8_fu_31081_p2() {
    it_ref_dy_0_i_5_sum8_fu_31081_p2 = (tmp_1477_reg_47986_pp15_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum6_1_fu_33860_p2() {
    it_ref_dy_0_i_6_sum6_1_fu_33860_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum6_2_fu_34086_p2() {
    it_ref_dy_0_i_6_sum6_2_fu_34086_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum6_3_fu_34293_p2() {
    it_ref_dy_0_i_6_sum6_3_fu_34293_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum6_4_fu_34476_p2() {
    it_ref_dy_0_i_6_sum6_4_fu_34476_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum6_fu_33661_p2() {
    it_ref_dy_0_i_6_sum6_fu_33661_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum7_1_fu_34907_p2() {
    it_ref_dy_0_i_6_sum7_1_fu_34907_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_6_sum7_fu_34700_p2() {
    it_ref_dy_0_i_6_sum7_fu_34700_p2 = (tmp_1488_reg_49607_pp17_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum4_1_fu_37073_p2() {
    it_ref_dy_0_i_7_sum4_1_fu_37073_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_2);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum4_fu_36874_p2() {
    it_ref_dy_0_i_7_sum4_fu_36874_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum5_1_fu_37506_p2() {
    it_ref_dy_0_i_7_sum5_1_fu_37506_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_4);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum5_2_fu_37686_p2() {
    it_ref_dy_0_i_7_sum5_2_fu_37686_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_5);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum5_3_fu_37912_p2() {
    it_ref_dy_0_i_7_sum5_3_fu_37912_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_6);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum5_4_fu_38119_p2() {
    it_ref_dy_0_i_7_sum5_4_fu_38119_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_it_ref_dy_0_i_7_sum5_fu_37299_p2() {
    it_ref_dy_0_i_7_sum5_fu_37299_p2 = (tmp_1499_reg_51222_pp19_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_1_fu_14560_p3() {
    it_ref_dy_0_i_load_0_1_fu_14560_p3 = (!tmp_42_reg_40326.read()[0].is_01())? sc_lv<32>(): ((tmp_42_reg_40326.read()[0].to_bool())? ref_patch_dy_0_63_49_fu_1090.read(): tmp_125_fu_14553_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_2_fu_14759_p3() {
    it_ref_dy_0_i_load_0_2_fu_14759_p3 = (!tmp_170_reg_40377.read()[0].is_01())? sc_lv<32>(): ((tmp_170_reg_40377.read()[0].to_bool())? ref_patch_dy_0_63_50_fu_1094.read(): tmp_181_fu_14752_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_3_fu_14965_p3() {
    it_ref_dy_0_i_load_0_3_fu_14965_p3 = (!tmp_195_fu_14903_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_195_fu_14903_p2.read()[0].to_bool())? ref_patch_dy_0_63_51_fu_1098.read(): tmp_202_fu_14957_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_4_fu_15172_p3() {
    it_ref_dy_0_i_load_0_4_fu_15172_p3 = (!tmp_217_fu_15110_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_217_fu_15110_p2.read()[0].to_bool())? ref_patch_dy_0_63_52_fu_1102.read(): tmp_223_fu_15164_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_5_fu_15372_p3() {
    it_ref_dy_0_i_load_0_5_fu_15372_p3 = (!tmp_236_reg_40448.read()[0].is_01())? sc_lv<32>(): ((tmp_236_reg_40448.read()[0].to_bool())? ref_patch_dy_0_63_53_fu_1106.read(): tmp_242_fu_15365_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_6_fu_15578_p3() {
    it_ref_dy_0_i_load_0_6_fu_15578_p3 = (!tmp_255_fu_15516_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_255_fu_15516_p2.read()[0].to_bool())? ref_patch_dy_0_63_54_fu_1110.read(): tmp_263_fu_15570_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_0_7_fu_15785_p3() {
    it_ref_dy_0_i_load_0_7_fu_15785_p3 = (!tmp_290_fu_15723_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_290_fu_15723_p2.read()[0].to_bool())? ref_patch_dy_0_63_55_fu_1114.read(): tmp_296_fu_15777_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_1_fu_17772_p3() {
    it_ref_dy_0_i_load_1_1_fu_17772_p3 = (!tmp_315_reg_41947.read()[0].is_01())? sc_lv<32>(): ((tmp_315_reg_41947.read()[0].to_bool())? ref_patch_dy_1_63_49_fu_1602.read(): tmp_321_fu_17765_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_2_fu_17971_p3() {
    it_ref_dy_0_i_load_1_2_fu_17971_p3 = (!tmp_334_reg_41998.read()[0].is_01())? sc_lv<32>(): ((tmp_334_reg_41998.read()[0].to_bool())? ref_patch_dy_1_63_50_fu_1606.read(): tmp_340_fu_17964_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_3_fu_18177_p3() {
    it_ref_dy_0_i_load_1_3_fu_18177_p3 = (!tmp_354_fu_18115_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_354_fu_18115_p2.read()[0].to_bool())? ref_patch_dy_1_63_51_fu_1610.read(): tmp_360_fu_18169_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_4_fu_18384_p3() {
    it_ref_dy_0_i_load_1_4_fu_18384_p3 = (!tmp_373_fu_18322_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_373_fu_18322_p2.read()[0].to_bool())? ref_patch_dy_1_63_52_fu_1614.read(): tmp_379_fu_18376_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_5_fu_18584_p3() {
    it_ref_dy_0_i_load_1_5_fu_18584_p3 = (!tmp_393_reg_42069.read()[0].is_01())? sc_lv<32>(): ((tmp_393_reg_42069.read()[0].to_bool())? ref_patch_dy_1_63_53_fu_1618.read(): tmp_399_fu_18577_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_6_fu_18790_p3() {
    it_ref_dy_0_i_load_1_6_fu_18790_p3 = (!tmp_412_fu_18728_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_412_fu_18728_p2.read()[0].to_bool())? ref_patch_dy_1_63_54_fu_1622.read(): tmp_419_fu_18782_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_7_fu_18997_p3() {
    it_ref_dy_0_i_load_1_7_fu_18997_p3 = (!tmp_432_fu_18935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_432_fu_18935_p2.read()[0].to_bool())? ref_patch_dy_1_63_55_fu_1626.read(): tmp_438_fu_18989_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_1_fu_17572_p3() {
    it_ref_dy_0_i_load_1_fu_17572_p3 = (!tmp_286_fu_17567_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_286_fu_17567_p2.read()[0].to_bool())? ref_patch_dy_1_63_48_fu_1598.read(): tmp_285_fu_17559_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_1_fu_20984_p3() {
    it_ref_dy_0_i_load_2_1_fu_20984_p3 = (!tmp_470_reg_43568.read()[0].is_01())? sc_lv<32>(): ((tmp_470_reg_43568.read()[0].to_bool())? ref_patch_dy_2_63_49_fu_2114.read(): tmp_476_fu_20977_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_2_fu_21183_p3() {
    it_ref_dy_0_i_load_2_2_fu_21183_p3 = (!tmp_489_reg_43619.read()[0].is_01())? sc_lv<32>(): ((tmp_489_reg_43619.read()[0].to_bool())? ref_patch_dy_2_63_50_fu_2118.read(): tmp_495_fu_21176_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_3_fu_21389_p3() {
    it_ref_dy_0_i_load_2_3_fu_21389_p3 = (!tmp_508_fu_21327_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_508_fu_21327_p2.read()[0].to_bool())? ref_patch_dy_2_63_51_fu_2122.read(): tmp_515_fu_21381_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_4_fu_21596_p3() {
    it_ref_dy_0_i_load_2_4_fu_21596_p3 = (!tmp_528_fu_21534_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_528_fu_21534_p2.read()[0].to_bool())? ref_patch_dy_2_63_52_fu_2126.read(): tmp_534_fu_21588_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_5_fu_21796_p3() {
    it_ref_dy_0_i_load_2_5_fu_21796_p3 = (!tmp_547_reg_43690.read()[0].is_01())? sc_lv<32>(): ((tmp_547_reg_43690.read()[0].to_bool())? ref_patch_dy_2_63_53_fu_2130.read(): tmp_553_fu_21789_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_6_fu_22002_p3() {
    it_ref_dy_0_i_load_2_6_fu_22002_p3 = (!tmp_567_fu_21940_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_567_fu_21940_p2.read()[0].to_bool())? ref_patch_dy_2_63_54_fu_2134.read(): tmp_573_fu_21994_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_7_fu_22209_p3() {
    it_ref_dy_0_i_load_2_7_fu_22209_p3 = (!tmp_586_fu_22147_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_586_fu_22147_p2.read()[0].to_bool())? ref_patch_dy_2_63_55_fu_2138.read(): tmp_592_fu_22201_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_2_fu_20784_p3() {
    it_ref_dy_0_i_load_2_fu_20784_p3 = (!tmp_457_fu_20779_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_457_fu_20779_p2.read()[0].to_bool())? ref_patch_dy_2_63_48_fu_2110.read(): tmp_456_fu_20771_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_1_fu_24196_p3() {
    it_ref_dy_0_i_load_3_1_fu_24196_p3 = (!tmp_626_reg_45194.read()[0].is_01())? sc_lv<32>(): ((tmp_626_reg_45194.read()[0].to_bool())? ref_patch_dy_3_63_49_fu_2626.read(): tmp_632_fu_24189_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_2_fu_24395_p3() {
    it_ref_dy_0_i_load_3_2_fu_24395_p3 = (!tmp_645_reg_45245.read()[0].is_01())? sc_lv<32>(): ((tmp_645_reg_45245.read()[0].to_bool())? ref_patch_dy_3_63_50_fu_2630.read(): tmp_651_fu_24388_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_3_fu_24601_p3() {
    it_ref_dy_0_i_load_3_3_fu_24601_p3 = (!tmp_664_fu_24539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_664_fu_24539_p2.read()[0].to_bool())? ref_patch_dy_3_63_51_fu_2634.read(): tmp_670_fu_24593_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_4_fu_24808_p3() {
    it_ref_dy_0_i_load_3_4_fu_24808_p3 = (!tmp_683_fu_24746_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_683_fu_24746_p2.read()[0].to_bool())? ref_patch_dy_3_63_52_fu_2638.read(): tmp_689_fu_24800_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_5_fu_25008_p3() {
    it_ref_dy_0_i_load_3_5_fu_25008_p3 = (!tmp_702_reg_45316.read()[0].is_01())? sc_lv<32>(): ((tmp_702_reg_45316.read()[0].to_bool())? ref_patch_dy_3_63_53_fu_2642.read(): tmp_708_fu_25001_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_6_fu_25214_p3() {
    it_ref_dy_0_i_load_3_6_fu_25214_p3 = (!tmp_722_fu_25152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_722_fu_25152_p2.read()[0].to_bool())? ref_patch_dy_3_63_54_fu_2646.read(): tmp_728_fu_25206_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_7_fu_25421_p3() {
    it_ref_dy_0_i_load_3_7_fu_25421_p3 = (!tmp_741_fu_25359_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_741_fu_25359_p2.read()[0].to_bool())? ref_patch_dy_3_63_55_fu_2650.read(): tmp_747_fu_25413_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_3_fu_23996_p3() {
    it_ref_dy_0_i_load_3_fu_23996_p3 = (!tmp_613_fu_23991_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_613_fu_23991_p2.read()[0].to_bool())? ref_patch_dy_3_63_48_fu_2622.read(): tmp_612_fu_23983_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_1_fu_27408_p3() {
    it_ref_dy_0_i_load_4_1_fu_27408_p3 = (!tmp_782_reg_46815.read()[0].is_01())? sc_lv<32>(): ((tmp_782_reg_46815.read()[0].to_bool())? ref_patch_dy_4_63_49_fu_3138.read(): tmp_788_fu_27401_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_2_fu_27607_p3() {
    it_ref_dy_0_i_load_4_2_fu_27607_p3 = (!tmp_801_reg_46866.read()[0].is_01())? sc_lv<32>(): ((tmp_801_reg_46866.read()[0].to_bool())? ref_patch_dy_4_63_50_fu_3142.read(): tmp_807_fu_27600_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_3_fu_27813_p3() {
    it_ref_dy_0_i_load_4_3_fu_27813_p3 = (!tmp_820_fu_27751_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_820_fu_27751_p2.read()[0].to_bool())? ref_patch_dy_4_63_51_fu_3146.read(): tmp_826_fu_27805_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_4_fu_28020_p3() {
    it_ref_dy_0_i_load_4_4_fu_28020_p3 = (!tmp_839_fu_27958_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_839_fu_27958_p2.read()[0].to_bool())? ref_patch_dy_4_63_52_fu_3150.read(): tmp_845_fu_28012_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_5_fu_28220_p3() {
    it_ref_dy_0_i_load_4_5_fu_28220_p3 = (!tmp_858_reg_46937.read()[0].is_01())? sc_lv<32>(): ((tmp_858_reg_46937.read()[0].to_bool())? ref_patch_dy_4_63_53_fu_3154.read(): tmp_864_fu_28213_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_6_fu_28426_p3() {
    it_ref_dy_0_i_load_4_6_fu_28426_p3 = (!tmp_877_fu_28364_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_877_fu_28364_p2.read()[0].to_bool())? ref_patch_dy_4_63_54_fu_3158.read(): tmp_883_fu_28418_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_7_fu_28633_p3() {
    it_ref_dy_0_i_load_4_7_fu_28633_p3 = (!tmp_896_fu_28571_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_896_fu_28571_p2.read()[0].to_bool())? ref_patch_dy_4_63_55_fu_3162.read(): tmp_902_fu_28625_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_4_fu_27208_p3() {
    it_ref_dy_0_i_load_4_fu_27208_p3 = (!tmp_769_fu_27203_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_769_fu_27203_p2.read()[0].to_bool())? ref_patch_dy_4_63_48_fu_3134.read(): tmp_768_fu_27195_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_1_fu_30620_p3() {
    it_ref_dy_0_i_load_5_1_fu_30620_p3 = (!tmp_938_reg_48436.read()[0].is_01())? sc_lv<32>(): ((tmp_938_reg_48436.read()[0].to_bool())? ref_patch_dy_5_63_49_fu_3650.read(): tmp_944_fu_30613_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_2_fu_30819_p3() {
    it_ref_dy_0_i_load_5_2_fu_30819_p3 = (!tmp_957_reg_48487.read()[0].is_01())? sc_lv<32>(): ((tmp_957_reg_48487.read()[0].to_bool())? ref_patch_dy_5_63_50_fu_3654.read(): tmp_963_fu_30812_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_3_fu_31025_p3() {
    it_ref_dy_0_i_load_5_3_fu_31025_p3 = (!tmp_976_fu_30963_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_976_fu_30963_p2.read()[0].to_bool())? ref_patch_dy_5_63_51_fu_3658.read(): tmp_982_fu_31017_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_4_fu_31232_p3() {
    it_ref_dy_0_i_load_5_4_fu_31232_p3 = (!tmp_995_fu_31170_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_995_fu_31170_p2.read()[0].to_bool())? ref_patch_dy_5_63_52_fu_3662.read(): tmp_1001_fu_31224_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_5_fu_31432_p3() {
    it_ref_dy_0_i_load_5_5_fu_31432_p3 = (!tmp_1014_reg_48558.read()[0].is_01())? sc_lv<32>(): ((tmp_1014_reg_48558.read()[0].to_bool())? ref_patch_dy_5_63_53_fu_3666.read(): tmp_1020_fu_31425_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_6_fu_31638_p3() {
    it_ref_dy_0_i_load_5_6_fu_31638_p3 = (!tmp_1033_fu_31576_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1033_fu_31576_p2.read()[0].to_bool())? ref_patch_dy_5_63_54_fu_3670.read(): tmp_1039_fu_31630_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_7_fu_31845_p3() {
    it_ref_dy_0_i_load_5_7_fu_31845_p3 = (!tmp_1052_fu_31783_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1052_fu_31783_p2.read()[0].to_bool())? ref_patch_dy_5_63_55_fu_3674.read(): tmp_1058_fu_31837_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_5_fu_30420_p3() {
    it_ref_dy_0_i_load_5_fu_30420_p3 = (!tmp_925_fu_30415_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_925_fu_30415_p2.read()[0].to_bool())? ref_patch_dy_5_63_48_fu_3646.read(): tmp_924_fu_30407_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_1_fu_33832_p3() {
    it_ref_dy_0_i_load_6_1_fu_33832_p3 = (!tmp_1094_reg_50057.read()[0].is_01())? sc_lv<32>(): ((tmp_1094_reg_50057.read()[0].to_bool())? ref_patch_dy_6_63_49_fu_4162.read(): tmp_1100_fu_33825_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_2_fu_34031_p3() {
    it_ref_dy_0_i_load_6_2_fu_34031_p3 = (!tmp_1113_reg_50108.read()[0].is_01())? sc_lv<32>(): ((tmp_1113_reg_50108.read()[0].to_bool())? ref_patch_dy_6_63_50_fu_4166.read(): tmp_1119_fu_34024_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_3_fu_34237_p3() {
    it_ref_dy_0_i_load_6_3_fu_34237_p3 = (!tmp_1132_fu_34175_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1132_fu_34175_p2.read()[0].to_bool())? ref_patch_dy_6_63_51_fu_4170.read(): tmp_1138_fu_34229_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_4_fu_34444_p3() {
    it_ref_dy_0_i_load_6_4_fu_34444_p3 = (!tmp_1151_fu_34382_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1151_fu_34382_p2.read()[0].to_bool())? ref_patch_dy_6_63_52_fu_4174.read(): tmp_1157_fu_34436_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_5_fu_34645_p3() {
    it_ref_dy_0_i_load_6_5_fu_34645_p3 = (!tmp_1170_reg_50174.read()[0].is_01())? sc_lv<32>(): ((tmp_1170_reg_50174.read()[0].to_bool())? ref_patch_dy_6_63_53_fu_4178.read(): tmp_1176_fu_34638_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_6_fu_34851_p3() {
    it_ref_dy_0_i_load_6_6_fu_34851_p3 = (!tmp_1189_fu_34789_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1189_fu_34789_p2.read()[0].to_bool())? ref_patch_dy_6_63_54_fu_4182.read(): tmp_1195_fu_34843_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_7_fu_35058_p3() {
    it_ref_dy_0_i_load_6_7_fu_35058_p3 = (!tmp_1208_fu_34996_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1208_fu_34996_p2.read()[0].to_bool())? ref_patch_dy_6_63_55_fu_4186.read(): tmp_1214_fu_35050_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_6_fu_33632_p3() {
    it_ref_dy_0_i_load_6_fu_33632_p3 = (!tmp_1081_fu_33627_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1081_fu_33627_p2.read()[0].to_bool())? ref_patch_dy_6_63_48_fu_4158.read(): tmp_1080_fu_33619_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_1_fu_37045_p3() {
    it_ref_dy_0_i_load_7_1_fu_37045_p3 = (!tmp_1250_reg_51672.read()[0].is_01())? sc_lv<32>(): ((tmp_1250_reg_51672.read()[0].to_bool())? ref_patch_dy_7_63_49_fu_4674.read(): tmp_1256_fu_37038_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_2_fu_37244_p3() {
    it_ref_dy_0_i_load_7_2_fu_37244_p3 = (!tmp_1269_reg_51723.read()[0].is_01())? sc_lv<32>(): ((tmp_1269_reg_51723.read()[0].to_bool())? ref_patch_dy_7_63_50_fu_4678.read(): tmp_1275_fu_37237_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_3_fu_37450_p3() {
    it_ref_dy_0_i_load_7_3_fu_37450_p3 = (!tmp_1288_fu_37388_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1288_fu_37388_p2.read()[0].to_bool())? ref_patch_dy_7_63_51_fu_4682.read(): tmp_1294_fu_37442_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_4_fu_37657_p3() {
    it_ref_dy_0_i_load_7_4_fu_37657_p3 = (!tmp_1307_fu_37595_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1307_fu_37595_p2.read()[0].to_bool())? ref_patch_dy_7_63_52_fu_4686.read(): tmp_1313_fu_37649_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_5_fu_37857_p3() {
    it_ref_dy_0_i_load_7_5_fu_37857_p3 = (!tmp_1326_reg_51801.read()[0].is_01())? sc_lv<32>(): ((tmp_1326_reg_51801.read()[0].to_bool())? ref_patch_dy_7_63_53_fu_4690.read(): tmp_1332_fu_37850_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_6_fu_38063_p3() {
    it_ref_dy_0_i_load_7_6_fu_38063_p3 = (!tmp_1345_fu_38001_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1345_fu_38001_p2.read()[0].to_bool())? ref_patch_dy_7_63_54_fu_4694.read(): tmp_1351_fu_38055_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_7_fu_38270_p3() {
    it_ref_dy_0_i_load_7_7_fu_38270_p3 = (!tmp_1364_fu_38208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1364_fu_38208_p2.read()[0].to_bool())? ref_patch_dy_7_63_55_fu_4698.read(): tmp_1370_fu_38262_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_7_fu_36845_p3() {
    it_ref_dy_0_i_load_7_fu_36845_p3 = (!tmp_1237_fu_36840_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1237_fu_36840_p2.read()[0].to_bool())? ref_patch_dy_7_63_48_fu_4670.read(): tmp_1236_fu_36832_p3.read());
}

void batch_align2D_region::thread_it_ref_dy_0_i_load_fu_14360_p3() {
    it_ref_dy_0_i_load_fu_14360_p3 = (!tmp_26_fu_14355_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_26_fu_14355_p2.read()[0].to_bool())? ref_patch_dy_0_63_48_fu_1086.read(): tmp_25_fu_14347_p3.read());
}

void batch_align2D_region::thread_iter_1_fu_16785_p2() {
    iter_1_fu_16785_p2 = (!iter_0_i_1_reg_7789.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_1_reg_7789.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_2_fu_19997_p2() {
    iter_2_fu_19997_p2 = (!iter_0_i_2_reg_8177.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_2_reg_8177.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_3_fu_23209_p2() {
    iter_3_fu_23209_p2 = (!iter_0_i_3_reg_8565.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_3_reg_8565.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_4_fu_26421_p2() {
    iter_4_fu_26421_p2 = (!iter_0_i_4_reg_8953.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_4_reg_8953.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_5_fu_29633_p2() {
    iter_5_fu_29633_p2 = (!iter_0_i_5_reg_9341.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_5_reg_9341.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_6_fu_32845_p2() {
    iter_6_fu_32845_p2 = (!iter_0_i_6_reg_9727.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_6_reg_9727.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_7_fu_36058_p2() {
    iter_7_fu_36058_p2 = (!iter_0_i_7_reg_10115.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_7_reg_10115.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_iter_fu_13573_p2() {
    iter_fu_13573_p2 = (!iter_0_i_reg_7402.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(iter_0_i_reg_7402.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void batch_align2D_region::thread_j_0_1_fu_15824_p2() {
    j_0_1_fu_15824_p2 = (!j_0_i_i_0_1_reg_7562.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_0_1_reg_7562.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_0_2_fu_15849_p2() {
    j_0_2_fu_15849_p2 = (!j_0_i_i_0_2_reg_7598.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_0_2_reg_7598.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_1_fu_19036_p2() {
    j_1_1_fu_19036_p2 = (!j_0_i_i_1_1_reg_7949.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_1_reg_7949.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_2_fu_19061_p2() {
    j_1_2_fu_19061_p2 = (!j_0_i_i_1_2_reg_7985.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_2_reg_7985.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_1_fu_19011_p2() {
    j_1_fu_19011_p2 = (!j_0_i_i_1_reg_7913.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_1_reg_7913.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_1_fu_22248_p2() {
    j_2_1_fu_22248_p2 = (!j_0_i_i_2_1_reg_8337.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_1_reg_8337.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_2_fu_22273_p2() {
    j_2_2_fu_22273_p2 = (!j_0_i_i_2_2_reg_8373.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_2_reg_8373.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_2_fu_22223_p2() {
    j_2_fu_22223_p2 = (!j_0_i_i_2_reg_8301.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_2_reg_8301.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_1_fu_25460_p2() {
    j_3_1_fu_25460_p2 = (!j_0_i_i_3_1_reg_8725.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_1_reg_8725.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_2_fu_25485_p2() {
    j_3_2_fu_25485_p2 = (!j_0_i_i_3_2_reg_8761.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_2_reg_8761.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_3_fu_25435_p2() {
    j_3_fu_25435_p2 = (!j_0_i_i_3_reg_8689.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_3_reg_8689.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_1_fu_28672_p2() {
    j_4_1_fu_28672_p2 = (!j_0_i_i_4_1_reg_9113.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_1_reg_9113.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_2_fu_28697_p2() {
    j_4_2_fu_28697_p2 = (!j_0_i_i_4_2_reg_9149.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_2_reg_9149.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_4_fu_28647_p2() {
    j_4_fu_28647_p2 = (!j_0_i_i_4_reg_9077.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_4_reg_9077.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_1_fu_31884_p2() {
    j_5_1_fu_31884_p2 = (!j_0_i_i_5_1_reg_9500.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_1_reg_9500.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_2_fu_31909_p2() {
    j_5_2_fu_31909_p2 = (!j_0_i_i_5_2_reg_9536.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_2_reg_9536.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_5_fu_31859_p2() {
    j_5_fu_31859_p2 = (!j_0_i_i_5_reg_9464.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_5_reg_9464.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_1_fu_35097_p2() {
    j_6_1_fu_35097_p2 = (!j_0_i_i_6_1_reg_9887.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_1_reg_9887.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_2_fu_35122_p2() {
    j_6_2_fu_35122_p2 = (!j_0_i_i_6_2_reg_9923.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_2_reg_9923.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_6_fu_35072_p2() {
    j_6_fu_35072_p2 = (!j_0_i_i_6_reg_9851.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_6_reg_9851.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_1_fu_38309_p2() {
    j_7_1_fu_38309_p2 = (!j_0_i_i_7_1_reg_10275.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_1_reg_10275.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_2_fu_38334_p2() {
    j_7_2_fu_38334_p2 = (!j_0_i_i_7_2_reg_10311.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_2_reg_10311.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_7_fu_38284_p2() {
    j_7_fu_38284_p2 = (!j_0_i_i_7_reg_10239.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_7_reg_10239.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_j_fu_15799_p2() {
    j_fu_15799_p2 = (!j_0_i_i_reg_7526.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_i_i_reg_7526.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void batch_align2D_region::thread_m_axi_my_debug_ARADDR() {
    m_axi_my_debug_ARADDR = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARBURST() {
    m_axi_my_debug_ARBURST = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARCACHE() {
    m_axi_my_debug_ARCACHE = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARID() {
    m_axi_my_debug_ARID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARLEN() {
    m_axi_my_debug_ARLEN = ap_const_lv8_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARLOCK() {
    m_axi_my_debug_ARLOCK = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARPROT() {
    m_axi_my_debug_ARPROT = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARQOS() {
    m_axi_my_debug_ARQOS = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARREGION() {
    m_axi_my_debug_ARREGION = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARSIZE() {
    m_axi_my_debug_ARSIZE = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARUSER() {
    m_axi_my_debug_ARUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_ARVALID() {
    m_axi_my_debug_ARVALID = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWADDR() {
    m_axi_my_debug_AWADDR = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWBURST() {
    m_axi_my_debug_AWBURST = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWCACHE() {
    m_axi_my_debug_AWCACHE = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWID() {
    m_axi_my_debug_AWID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWLEN() {
    m_axi_my_debug_AWLEN = ap_const_lv8_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWLOCK() {
    m_axi_my_debug_AWLOCK = ap_const_lv2_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWPROT() {
    m_axi_my_debug_AWPROT = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWQOS() {
    m_axi_my_debug_AWQOS = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWREGION() {
    m_axi_my_debug_AWREGION = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWSIZE() {
    m_axi_my_debug_AWSIZE = ap_const_lv3_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWUSER() {
    m_axi_my_debug_AWUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_AWVALID() {
    m_axi_my_debug_AWVALID = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_BREADY() {
    m_axi_my_debug_BREADY = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_RREADY() {
    m_axi_my_debug_RREADY = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WDATA() {
    m_axi_my_debug_WDATA = ap_const_lv32_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WID() {
    m_axi_my_debug_WID = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WLAST() {
    m_axi_my_debug_WLAST = ap_const_logic_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WSTRB() {
    m_axi_my_debug_WSTRB = ap_const_lv4_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WUSER() {
    m_axi_my_debug_WUSER = ap_const_lv1_0;
}

void batch_align2D_region::thread_m_axi_my_debug_WVALID() {
    m_axi_my_debug_WVALID = ap_const_logic_0;
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        my_converged_ap_vld = ap_const_logic_1;
    } else {
        my_converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_cur_px_estimate_p_fu_12179_p4() {
    my_cur_px_estimate_p_fu_12179_p4 = my_cur_px_estimate_ptr.read().range(31, 2);
}

void batch_align2D_region::thread_my_patches_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_patches_ARREADY.read()))) {
        my_patches_ARVALID = ap_const_logic_1;
    } else {
        my_patches_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_patches_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_38833.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        my_patches_RREADY = ap_const_logic_1;
    } else {
        my_patches_RREADY = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_patches_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        my_patches_blk_n_AR = m_axi_my_patches_ARREADY.read();
    } else {
        my_patches_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_patches_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_38833.read()))) {
        my_patches_blk_n_R = m_axi_my_patches_RVALID.read();
    } else {
        my_patches_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_ARREADY.read()))) {
        my_pos_ARVALID = ap_const_logic_1;
    } else {
        my_pos_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2123.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_AWREADY.read()))) {
        my_pos_AWVALID = ap_const_logic_1;
    } else {
        my_pos_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2137.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_51884.read()) && 
         esl_seteq<1,1,1>(ap_block_pp20_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_my_pos_WREADY.read()))) {
        my_pos_WVALID = ap_const_logic_1;
    } else {
        my_pos_WVALID = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        my_pos_blk_n_AR = m_axi_my_pos_ARREADY.read();
    } else {
        my_pos_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2123.read())) {
        my_pos_blk_n_AW = m_axi_my_pos_AWREADY.read();
    } else {
        my_pos_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_my_pos_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2137.read())) {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_51884.read()))) {
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
         esl_seteq<1,1,1>(exitcond1_reg_38742.read(), ap_const_lv1_0) && 
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
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond1_reg_38742.read(), ap_const_lv1_0))) {
        my_region_fcoord_blk_n_R = m_axi_my_region_fcoord_RVALID.read();
    } else {
        my_region_fcoord_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D_region::thread_next_mul_fu_12514_p2() {
    next_mul_fu_12514_p2 = (!phi_mul_reg_7241.read().is_01() || !ap_const_lv21_51F.is_01())? sc_lv<21>(): (sc_biguint<21>(phi_mul_reg_7241.read()) + sc_biguint<21>(ap_const_lv21_51F));
}

void batch_align2D_region::thread_next_urem_fu_12542_p2() {
    next_urem_fu_12542_p2 = (!phi_urem_reg_7252.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(phi_urem_reg_7252.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void batch_align2D_region::thread_or_cond16_i_1_fu_16853_p2() {
    or_cond16_i_1_fu_16853_p2 = (tmp134_fu_16847_p2.read() | tmp133_fu_16841_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_2_fu_20065_p2() {
    or_cond16_i_2_fu_20065_p2 = (tmp157_fu_20059_p2.read() | tmp156_fu_20053_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_3_fu_23277_p2() {
    or_cond16_i_3_fu_23277_p2 = (tmp180_fu_23271_p2.read() | tmp179_fu_23265_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_4_fu_26489_p2() {
    or_cond16_i_4_fu_26489_p2 = (tmp203_fu_26483_p2.read() | tmp202_fu_26477_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_5_fu_29701_p2() {
    or_cond16_i_5_fu_29701_p2 = (tmp226_fu_29695_p2.read() | tmp225_fu_29689_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_6_fu_32913_p2() {
    or_cond16_i_6_fu_32913_p2 = (tmp249_fu_32907_p2.read() | tmp248_fu_32901_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_7_fu_36126_p2() {
    or_cond16_i_7_fu_36126_p2 = (tmp272_fu_36120_p2.read() | tmp271_fu_36114_p2.read());
}

void batch_align2D_region::thread_or_cond16_i_fu_13641_p2() {
    or_cond16_i_fu_13641_p2 = (tmp8_fu_13635_p2.read() | tmp7_fu_13629_p2.read());
}

void batch_align2D_region::thread_p_Val2_10_fu_16859_p1() {
    p_Val2_10_fu_16859_p1 = x_assign_8_reg_7755.read();
}

void batch_align2D_region::thread_p_Val2_11_fu_16895_p1() {
    p_Val2_11_fu_16895_p1 = x_assign_7_reg_7745.read();
}

void batch_align2D_region::thread_p_Val2_12_fu_20071_p1() {
    p_Val2_12_fu_20071_p1 = x_assign_s_reg_8143.read();
}

void batch_align2D_region::thread_p_Val2_13_fu_20107_p1() {
    p_Val2_13_fu_20107_p1 = x_assign_9_reg_8133.read();
}

void batch_align2D_region::thread_p_Val2_14_fu_23283_p1() {
    p_Val2_14_fu_23283_p1 = x_assign_2_reg_8531.read();
}

void batch_align2D_region::thread_p_Val2_15_fu_23319_p1() {
    p_Val2_15_fu_23319_p1 = x_assign_1_reg_8521.read();
}

void batch_align2D_region::thread_p_Val2_16_fu_26495_p1() {
    p_Val2_16_fu_26495_p1 = x_assign_4_reg_8919.read();
}

void batch_align2D_region::thread_p_Val2_17_fu_26531_p1() {
    p_Val2_17_fu_26531_p1 = x_assign_3_reg_8909.read();
}

void batch_align2D_region::thread_p_Val2_18_fu_29707_p1() {
    p_Val2_18_fu_29707_p1 = x_assign_10_reg_9307.read();
}

void batch_align2D_region::thread_p_Val2_19_fu_29743_p1() {
    p_Val2_19_fu_29743_p1 = x_assign_5_reg_9297.read();
}

void batch_align2D_region::thread_p_Val2_20_fu_32919_p1() {
    p_Val2_20_fu_32919_p1 = x_assign_12_reg_9693.read();
}

void batch_align2D_region::thread_p_Val2_21_fu_32955_p1() {
    p_Val2_21_fu_32955_p1 = x_assign_11_reg_9683.read();
}

void batch_align2D_region::thread_p_Val2_22_fu_36132_p1() {
    p_Val2_22_fu_36132_p1 = x_assign_14_reg_10081.read();
}

void batch_align2D_region::thread_p_Val2_23_fu_36168_p1() {
    p_Val2_23_fu_36168_p1 = x_assign_13_reg_10071.read();
}

void batch_align2D_region::thread_p_Val2_9_fu_13683_p1() {
    p_Val2_9_fu_13683_p1 = x_assign_reg_7358.read();
}

void batch_align2D_region::thread_p_Val2_s_fu_13647_p1() {
    p_Val2_s_fu_13647_p1 = x_assign_6_reg_7368.read();
}

void batch_align2D_region::thread_p_shl7_1_cast_fu_15934_p1() {
    p_shl7_1_cast_fu_15934_p1 = esl_zext<7,4>(p_shl7_1_fu_15926_p3.read());
}

void batch_align2D_region::thread_p_shl7_1_fu_15926_p3() {
    p_shl7_1_fu_15926_p3 = esl_concat<3,1>(tmp_1381_fu_15904_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_2_cast_fu_19140_p1() {
    p_shl7_2_cast_fu_19140_p1 = esl_zext<7,4>(p_shl7_2_fu_19132_p3.read());
}

void batch_align2D_region::thread_p_shl7_2_fu_19132_p3() {
    p_shl7_2_fu_19132_p3 = esl_concat<3,1>(tmp_1383_fu_19110_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_3_cast_fu_22352_p1() {
    p_shl7_3_cast_fu_22352_p1 = esl_zext<7,4>(p_shl7_3_fu_22344_p3.read());
}

void batch_align2D_region::thread_p_shl7_3_fu_22344_p3() {
    p_shl7_3_fu_22344_p3 = esl_concat<3,1>(tmp_1384_fu_22322_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_4_cast_fu_25564_p1() {
    p_shl7_4_cast_fu_25564_p1 = esl_zext<7,4>(p_shl7_4_fu_25556_p3.read());
}

void batch_align2D_region::thread_p_shl7_4_fu_25556_p3() {
    p_shl7_4_fu_25556_p3 = esl_concat<3,1>(tmp_1385_fu_25534_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_5_cast_fu_28776_p1() {
    p_shl7_5_cast_fu_28776_p1 = esl_zext<7,4>(p_shl7_5_fu_28768_p3.read());
}

void batch_align2D_region::thread_p_shl7_5_fu_28768_p3() {
    p_shl7_5_fu_28768_p3 = esl_concat<3,1>(tmp_1389_fu_28746_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_6_cast_fu_31994_p1() {
    p_shl7_6_cast_fu_31994_p1 = esl_zext<7,4>(p_shl7_6_fu_31986_p3.read());
}

void batch_align2D_region::thread_p_shl7_6_fu_31986_p3() {
    p_shl7_6_fu_31986_p3 = esl_concat<3,1>(tmp_1393_fu_31964_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_7_cast_fu_35201_p1() {
    p_shl7_7_cast_fu_35201_p1 = esl_zext<7,4>(p_shl7_7_fu_35193_p3.read());
}

void batch_align2D_region::thread_p_shl7_7_fu_35193_p3() {
    p_shl7_7_fu_35193_p3 = esl_concat<3,1>(tmp_1397_fu_35171_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl7_cast_fu_12722_p1() {
    p_shl7_cast_fu_12722_p1 = esl_zext<7,4>(p_shl7_fu_12714_p3.read());
}

void batch_align2D_region::thread_p_shl7_fu_12714_p3() {
    p_shl7_fu_12714_p3 = esl_concat<3,1>(tmp_1377_fu_12692_p4.read(), ap_const_lv1_0);
}

void batch_align2D_region::thread_p_shl8_1_cast_fu_17014_p1() {
    p_shl8_1_cast_fu_17014_p1 = esl_zext<7,6>(p_shl8_1_fu_17006_p3.read());
}

void batch_align2D_region::thread_p_shl8_1_fu_17006_p3() {
    p_shl8_1_fu_17006_p3 = esl_concat<3,3>(tmp_1404_fu_17002_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_2_cast_fu_20226_p1() {
    p_shl8_2_cast_fu_20226_p1 = esl_zext<7,6>(p_shl8_2_fu_20218_p3.read());
}

void batch_align2D_region::thread_p_shl8_2_fu_20218_p3() {
    p_shl8_2_fu_20218_p3 = esl_concat<3,3>(tmp_1445_fu_20214_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_3_cast_fu_23438_p1() {
    p_shl8_3_cast_fu_23438_p1 = esl_zext<7,6>(p_shl8_3_fu_23430_p3.read());
}

void batch_align2D_region::thread_p_shl8_3_fu_23430_p3() {
    p_shl8_3_fu_23430_p3 = esl_concat<3,3>(tmp_1456_fu_23426_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_4_cast_fu_26650_p1() {
    p_shl8_4_cast_fu_26650_p1 = esl_zext<7,6>(p_shl8_4_fu_26642_p3.read());
}

void batch_align2D_region::thread_p_shl8_4_fu_26642_p3() {
    p_shl8_4_fu_26642_p3 = esl_concat<3,3>(tmp_1467_fu_26638_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_5_cast_fu_29862_p1() {
    p_shl8_5_cast_fu_29862_p1 = esl_zext<7,6>(p_shl8_5_fu_29854_p3.read());
}

void batch_align2D_region::thread_p_shl8_5_fu_29854_p3() {
    p_shl8_5_fu_29854_p3 = esl_concat<3,3>(tmp_1478_fu_29850_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_6_cast_fu_33074_p1() {
    p_shl8_6_cast_fu_33074_p1 = esl_zext<7,6>(p_shl8_6_fu_33066_p3.read());
}

void batch_align2D_region::thread_p_shl8_6_fu_33066_p3() {
    p_shl8_6_fu_33066_p3 = esl_concat<3,3>(tmp_1489_fu_33062_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_7_cast_fu_36287_p1() {
    p_shl8_7_cast_fu_36287_p1 = esl_zext<7,6>(p_shl8_7_fu_36279_p3.read());
}

void batch_align2D_region::thread_p_shl8_7_fu_36279_p3() {
    p_shl8_7_fu_36279_p3 = esl_concat<3,3>(tmp_1500_fu_36275_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl8_cast_fu_13802_p1() {
    p_shl8_cast_fu_13802_p1 = esl_zext<7,6>(p_shl8_fu_13794_p3.read());
}

void batch_align2D_region::thread_p_shl8_fu_13794_p3() {
    p_shl8_fu_13794_p3 = esl_concat<3,3>(tmp_1390_fu_13790_p1.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl9_1_cast_fu_17024_p1() {
    p_shl9_1_cast_fu_17024_p1 = esl_zext<7,4>(tmp_1406_fu_17018_p2.read());
}

void batch_align2D_region::thread_p_shl9_2_cast_fu_20236_p1() {
    p_shl9_2_cast_fu_20236_p1 = esl_zext<7,4>(tmp_1446_fu_20230_p2.read());
}

void batch_align2D_region::thread_p_shl9_3_cast_fu_23448_p1() {
    p_shl9_3_cast_fu_23448_p1 = esl_zext<7,4>(tmp_1457_fu_23442_p2.read());
}

void batch_align2D_region::thread_p_shl9_4_cast_fu_26660_p1() {
    p_shl9_4_cast_fu_26660_p1 = esl_zext<7,4>(tmp_1468_fu_26654_p2.read());
}

void batch_align2D_region::thread_p_shl9_5_cast_fu_29872_p1() {
    p_shl9_5_cast_fu_29872_p1 = esl_zext<7,4>(tmp_1479_fu_29866_p2.read());
}

void batch_align2D_region::thread_p_shl9_6_cast_fu_33084_p1() {
    p_shl9_6_cast_fu_33084_p1 = esl_zext<7,4>(tmp_1490_fu_33078_p2.read());
}

void batch_align2D_region::thread_p_shl9_7_cast_fu_36297_p1() {
    p_shl9_7_cast_fu_36297_p1 = esl_zext<7,4>(tmp_1501_fu_36291_p2.read());
}

void batch_align2D_region::thread_p_shl9_cast_fu_13812_p1() {
    p_shl9_cast_fu_13812_p1 = esl_zext<7,4>(tmp_1391_fu_13806_p2.read());
}

void batch_align2D_region::thread_p_shl_1_cast_fu_15922_p1() {
    p_shl_1_cast_fu_15922_p1 = esl_zext<7,6>(p_shl_1_fu_15914_p3.read());
}

void batch_align2D_region::thread_p_shl_1_fu_15914_p3() {
    p_shl_1_fu_15914_p3 = esl_concat<3,3>(tmp_1381_fu_15904_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_2_cast_fu_19128_p1() {
    p_shl_2_cast_fu_19128_p1 = esl_zext<7,6>(p_shl_2_fu_19120_p3.read());
}

void batch_align2D_region::thread_p_shl_2_fu_19120_p3() {
    p_shl_2_fu_19120_p3 = esl_concat<3,3>(tmp_1383_fu_19110_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_3_cast_fu_22340_p1() {
    p_shl_3_cast_fu_22340_p1 = esl_zext<7,6>(p_shl_3_fu_22332_p3.read());
}

void batch_align2D_region::thread_p_shl_3_fu_22332_p3() {
    p_shl_3_fu_22332_p3 = esl_concat<3,3>(tmp_1384_fu_22322_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_4_cast_fu_25552_p1() {
    p_shl_4_cast_fu_25552_p1 = esl_zext<7,6>(p_shl_4_fu_25544_p3.read());
}

void batch_align2D_region::thread_p_shl_4_fu_25544_p3() {
    p_shl_4_fu_25544_p3 = esl_concat<3,3>(tmp_1385_fu_25534_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_5_cast_fu_28764_p1() {
    p_shl_5_cast_fu_28764_p1 = esl_zext<7,6>(p_shl_5_fu_28756_p3.read());
}

void batch_align2D_region::thread_p_shl_5_fu_28756_p3() {
    p_shl_5_fu_28756_p3 = esl_concat<3,3>(tmp_1389_fu_28746_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_6_cast_fu_31982_p1() {
    p_shl_6_cast_fu_31982_p1 = esl_zext<7,6>(p_shl_6_fu_31974_p3.read());
}

void batch_align2D_region::thread_p_shl_6_fu_31974_p3() {
    p_shl_6_fu_31974_p3 = esl_concat<3,3>(tmp_1393_fu_31964_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_7_cast_fu_35189_p1() {
    p_shl_7_cast_fu_35189_p1 = esl_zext<7,6>(p_shl_7_fu_35181_p3.read());
}

void batch_align2D_region::thread_p_shl_7_fu_35181_p3() {
    p_shl_7_fu_35181_p3 = esl_concat<3,3>(tmp_1397_fu_35171_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_shl_cast_fu_12710_p1() {
    p_shl_cast_fu_12710_p1 = esl_zext<7,6>(p_shl_fu_12702_p3.read());
}

void batch_align2D_region::thread_p_shl_fu_12702_p3() {
    p_shl_fu_12702_p3 = esl_concat<3,3>(tmp_1377_fu_12692_p4.read(), ap_const_lv3_0);
}

void batch_align2D_region::thread_p_sum12_i_0_5_cast_fu_14069_p1() {
    p_sum12_i_0_5_cast_fu_14069_p1 = esl_sext<64,13>(p_sum12_i_0_5_fu_14064_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_0_5_fu_14064_p2() {
    p_sum12_i_0_5_fu_14064_p2 = (!p_sum12_i_reg_39904.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_reg_39904.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_1_5_cast_fu_17281_p1() {
    p_sum12_i_1_5_cast_fu_17281_p1 = esl_sext<64,13>(p_sum12_i_1_5_fu_17276_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_1_5_fu_17276_p2() {
    p_sum12_i_1_5_fu_17276_p2 = (!p_sum12_i_1_reg_41525.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_1_reg_41525.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_1_cast_fu_17039_p1() {
    p_sum12_i_1_cast_fu_17039_p1 = esl_sext<64,13>(p_sum12_i_1_fu_17034_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_1_fu_17034_p2() {
    p_sum12_i_1_fu_17034_p2 = (!tmp135_cast_reg_41483.read().is_01() || !tmp_165_1_fu_16996_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp135_cast_reg_41483.read()) + sc_biguint<13>(tmp_165_1_fu_16996_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_2_5_cast_fu_20493_p1() {
    p_sum12_i_2_5_cast_fu_20493_p1 = esl_sext<64,13>(p_sum12_i_2_5_fu_20488_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_2_5_fu_20488_p2() {
    p_sum12_i_2_5_fu_20488_p2 = (!p_sum12_i_2_reg_43146.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_2_reg_43146.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_2_cast_fu_20251_p1() {
    p_sum12_i_2_cast_fu_20251_p1 = esl_sext<64,13>(p_sum12_i_2_fu_20246_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_2_fu_20246_p2() {
    p_sum12_i_2_fu_20246_p2 = (!tmp158_cast_reg_43104.read().is_01() || !tmp_165_2_fu_20208_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp158_cast_reg_43104.read()) + sc_biguint<13>(tmp_165_2_fu_20208_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_3_5_cast_fu_23705_p1() {
    p_sum12_i_3_5_cast_fu_23705_p1 = esl_sext<64,13>(p_sum12_i_3_5_fu_23700_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_3_5_fu_23700_p2() {
    p_sum12_i_3_5_fu_23700_p2 = (!p_sum12_i_3_reg_44772.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_3_reg_44772.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_3_cast_fu_23463_p1() {
    p_sum12_i_3_cast_fu_23463_p1 = esl_sext<64,13>(p_sum12_i_3_fu_23458_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_3_fu_23458_p2() {
    p_sum12_i_3_fu_23458_p2 = (!tmp181_cast_reg_44730.read().is_01() || !tmp_165_3_fu_23420_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp181_cast_reg_44730.read()) + sc_biguint<13>(tmp_165_3_fu_23420_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_4_5_cast_fu_26917_p1() {
    p_sum12_i_4_5_cast_fu_26917_p1 = esl_sext<64,13>(p_sum12_i_4_5_fu_26912_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_4_5_fu_26912_p2() {
    p_sum12_i_4_5_fu_26912_p2 = (!p_sum12_i_4_reg_46393.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_4_reg_46393.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_4_cast_fu_26675_p1() {
    p_sum12_i_4_cast_fu_26675_p1 = esl_sext<64,13>(p_sum12_i_4_fu_26670_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_4_fu_26670_p2() {
    p_sum12_i_4_fu_26670_p2 = (!tmp204_cast_reg_46351.read().is_01() || !tmp_165_4_fu_26632_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp204_cast_reg_46351.read()) + sc_biguint<13>(tmp_165_4_fu_26632_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_5_5_cast_fu_30129_p1() {
    p_sum12_i_5_5_cast_fu_30129_p1 = esl_sext<64,13>(p_sum12_i_5_5_fu_30124_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_5_5_fu_30124_p2() {
    p_sum12_i_5_5_fu_30124_p2 = (!p_sum12_i_5_reg_48014.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_5_reg_48014.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_5_cast_fu_29887_p1() {
    p_sum12_i_5_cast_fu_29887_p1 = esl_sext<64,13>(p_sum12_i_5_fu_29882_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_5_fu_29882_p2() {
    p_sum12_i_5_fu_29882_p2 = (!tmp227_cast_reg_47972.read().is_01() || !tmp_165_5_fu_29844_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp227_cast_reg_47972.read()) + sc_biguint<13>(tmp_165_5_fu_29844_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_6_5_cast_fu_33341_p1() {
    p_sum12_i_6_5_cast_fu_33341_p1 = esl_sext<64,13>(p_sum12_i_6_5_fu_33336_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_6_5_fu_33336_p2() {
    p_sum12_i_6_5_fu_33336_p2 = (!p_sum12_i_6_reg_49635.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_6_reg_49635.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_6_cast_fu_33099_p1() {
    p_sum12_i_6_cast_fu_33099_p1 = esl_sext<64,13>(p_sum12_i_6_fu_33094_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_6_fu_33094_p2() {
    p_sum12_i_6_fu_33094_p2 = (!tmp250_cast_reg_49593.read().is_01() || !tmp_165_6_fu_33056_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp250_cast_reg_49593.read()) + sc_biguint<13>(tmp_165_6_fu_33056_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_7_5_cast_fu_36554_p1() {
    p_sum12_i_7_5_cast_fu_36554_p1 = esl_sext<64,13>(p_sum12_i_7_5_fu_36549_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_7_5_fu_36549_p2() {
    p_sum12_i_7_5_fu_36549_p2 = (!p_sum12_i_7_reg_51250.read().is_01() || !ap_const_lv13_5.is_01())? sc_lv<13>(): (sc_bigint<13>(p_sum12_i_7_reg_51250.read()) + sc_biguint<13>(ap_const_lv13_5));
}

void batch_align2D_region::thread_p_sum12_i_7_cast_fu_36312_p1() {
    p_sum12_i_7_cast_fu_36312_p1 = esl_sext<64,13>(p_sum12_i_7_fu_36307_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_7_fu_36307_p2() {
    p_sum12_i_7_fu_36307_p2 = (!tmp273_cast_reg_51208.read().is_01() || !tmp_165_7_fu_36269_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp273_cast_reg_51208.read()) + sc_biguint<13>(tmp_165_7_fu_36269_p2.read()));
}

void batch_align2D_region::thread_p_sum12_i_cast_fu_13827_p1() {
    p_sum12_i_cast_fu_13827_p1 = esl_sext<64,13>(p_sum12_i_fu_13822_p2.read());
}

void batch_align2D_region::thread_p_sum12_i_fu_13822_p2() {
    p_sum12_i_fu_13822_p2 = (!tmp112_cast_reg_39862.read().is_01() || !tmp_133_fu_13784_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp112_cast_reg_39862.read()) + sc_biguint<13>(tmp_133_fu_13784_p2.read()));
}

void batch_align2D_region::thread_pyr_region_data_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum_i_0_7_cast_fu_14144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum_i_0_6_cast_fu_14119_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum13_i_0_5_cas_fu_14094_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (p_sum12_i_0_5_cast_fu_14069_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum13_i_0_4_cas_fu_14044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum14_i_0_3_cas_fu_14019_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum_i_0_2_cast_fu_13974_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum_i_0_1_cast_fu_13929_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (it_0_sum13_i_cast_fu_13879_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (p_sum12_i_cast_fu_13827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_0_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_0_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp5_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_7_cas_fu_14159_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_6_cas_fu_14134_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_5_cas_fu_14109_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum_i_0_5_cast_fu_14084_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_4_cas_fu_14059_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum_i_0_4_cast_fu_14034_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_2_cas_fu_14009_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_0_1_cas_fu_13964_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum14_i_cast_fu_13919_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum_i_cast_fu_13869_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_0_address1 =  (sc_lv<12>) (it_0_sum_i_0_3_cast_fu_13859_p1.read());
        } else {
            pyr_region_data_0_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_0_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_0))) {
        pyr_region_data_0_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_0_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum_i_1_7_cast_fu_17356_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum_i_1_6_cast_fu_17331_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum13_i_1_5_cas_fu_17306_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (p_sum12_i_1_5_cast_fu_17281_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum13_i_1_4_cas_fu_17256_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum14_i_1_3_cas_fu_17231_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum_i_1_2_cast_fu_17186_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum_i_1_1_cast_fu_17141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (it_0_sum13_i_1_cast_fu_17091_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (p_sum12_i_1_cast_fu_17039_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_1_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_1_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp7_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_7_cas_fu_17371_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_6_cas_fu_17346_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_5_cas_fu_17321_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum_i_1_5_cast_fu_17296_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_4_cas_fu_17271_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum_i_1_4_cast_fu_17246_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_2_cas_fu_17221_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_1_cas_fu_17176_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum14_i_1_cast_fu_17131_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum_i_1_cast_fu_17081_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_1_address1 =  (sc_lv<12>) (it_0_sum_i_1_3_cast_fu_17071_p1.read());
        } else {
            pyr_region_data_1_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_1_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_1))) {
        pyr_region_data_1_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_1_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum_i_2_7_cast_fu_20568_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum_i_2_6_cast_fu_20543_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum13_i_2_5_cas_fu_20518_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (p_sum12_i_2_5_cast_fu_20493_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum13_i_2_4_cas_fu_20468_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum14_i_2_3_cas_fu_20443_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum_i_2_2_cast_fu_20398_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum_i_2_1_cast_fu_20353_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (it_0_sum13_i_2_cast_fu_20303_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (p_sum12_i_2_cast_fu_20251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_2_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_2_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp9_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_7_cas_fu_20583_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_6_cas_fu_20558_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_5_cas_fu_20533_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum_i_2_5_cast_fu_20508_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_4_cas_fu_20483_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum_i_2_4_cast_fu_20458_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_2_cas_fu_20433_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_1_cas_fu_20388_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum14_i_2_cast_fu_20343_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum_i_2_cast_fu_20293_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_2_address1 =  (sc_lv<12>) (it_0_sum_i_2_3_cast_fu_20283_p1.read());
        } else {
            pyr_region_data_2_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_2_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_2))) {
        pyr_region_data_2_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_2_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum_i_3_7_cast_fu_23780_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum_i_3_6_cast_fu_23755_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum13_i_3_5_cas_fu_23730_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (p_sum12_i_3_5_cast_fu_23705_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum13_i_3_4_cas_fu_23680_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum14_i_3_3_cas_fu_23655_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum_i_3_2_cast_fu_23610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum_i_3_1_cast_fu_23565_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (it_0_sum13_i_3_cast_fu_23515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (p_sum12_i_3_cast_fu_23463_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_3_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_3_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp11_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_7_cas_fu_23795_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_6_cas_fu_23770_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_5_cas_fu_23745_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum_i_3_5_cast_fu_23720_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_4_cas_fu_23695_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum_i_3_4_cast_fu_23670_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_2_cas_fu_23645_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_1_cas_fu_23600_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum14_i_3_cast_fu_23555_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum_i_3_cast_fu_23505_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_3_address1 =  (sc_lv<12>) (it_0_sum_i_3_3_cast_fu_23495_p1.read());
        } else {
            pyr_region_data_3_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_3_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_3))) {
        pyr_region_data_3_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_3_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum_i_4_7_cast_fu_26992_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum_i_4_6_cast_fu_26967_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum13_i_4_5_cas_fu_26942_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (p_sum12_i_4_5_cast_fu_26917_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum13_i_4_4_cas_fu_26892_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum14_i_4_3_cas_fu_26867_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum_i_4_2_cast_fu_26822_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum_i_4_1_cast_fu_26777_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (it_0_sum13_i_4_cast_fu_26727_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (p_sum12_i_4_cast_fu_26675_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_4_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_4_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp13_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_7_cas_fu_27007_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_6_cas_fu_26982_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_5_cas_fu_26957_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum_i_4_5_cast_fu_26932_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_4_cas_fu_26907_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum_i_4_4_cast_fu_26882_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_2_cas_fu_26857_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_1_cas_fu_26812_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum14_i_4_cast_fu_26767_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum_i_4_cast_fu_26717_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_4_address1 =  (sc_lv<12>) (it_0_sum_i_4_3_cast_fu_26707_p1.read());
        } else {
            pyr_region_data_4_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_4_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_4))) {
        pyr_region_data_4_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_4_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum_i_5_7_cast_fu_30204_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum_i_5_6_cast_fu_30179_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum13_i_5_5_cas_fu_30154_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (p_sum12_i_5_5_cast_fu_30129_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum13_i_5_4_cas_fu_30104_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum14_i_5_3_cas_fu_30079_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum_i_5_2_cast_fu_30034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum_i_5_1_cast_fu_29989_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (it_0_sum13_i_5_cast_fu_29939_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (p_sum12_i_5_cast_fu_29887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_5_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_5_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp15_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_7_cas_fu_30219_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_6_cas_fu_30194_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_5_cas_fu_30169_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum_i_5_5_cast_fu_30144_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_4_cas_fu_30119_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum_i_5_4_cast_fu_30094_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_2_cas_fu_30069_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_1_cas_fu_30024_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum14_i_5_cast_fu_29979_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum_i_5_cast_fu_29929_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_5_address1 =  (sc_lv<12>) (it_0_sum_i_5_3_cast_fu_29919_p1.read());
        } else {
            pyr_region_data_5_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_5_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_5))) {
        pyr_region_data_5_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_5_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum_i_6_7_cast_fu_33416_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum_i_6_6_cast_fu_33391_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum13_i_6_5_cas_fu_33366_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (p_sum12_i_6_5_cast_fu_33341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum13_i_6_4_cas_fu_33316_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum14_i_6_3_cas_fu_33291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum_i_6_2_cast_fu_33246_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum_i_6_1_cast_fu_33201_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (it_0_sum13_i_6_cast_fu_33151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (p_sum12_i_6_cast_fu_33099_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_6_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_6_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp17_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_7_cas_fu_33431_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_6_cas_fu_33406_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_5_cas_fu_33381_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum_i_6_5_cast_fu_33356_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_4_cas_fu_33331_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum_i_6_4_cast_fu_33306_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_2_cas_fu_33281_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_1_cas_fu_33236_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum14_i_6_cast_fu_33191_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum_i_6_cast_fu_33141_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_6_address1 =  (sc_lv<12>) (it_0_sum_i_6_3_cast_fu_33131_p1.read());
        } else {
            pyr_region_data_6_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_6_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_6))) {
        pyr_region_data_6_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_6_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_pyr_region_data_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage9.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum_i_7_7_cast_fu_36629_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage8.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum_i_7_6_cast_fu_36604_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage7.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum13_i_7_5_cas_fu_36579_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage6.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (p_sum12_i_7_5_cast_fu_36554_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage5.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum13_i_7_4_cas_fu_36529_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage4.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum14_i_7_3_cas_fu_36504_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum_i_7_2_cast_fu_36459_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum_i_7_1_cast_fu_36414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (it_0_sum13_i_7_cast_fu_36364_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (p_sum12_i_7_cast_fu_36312_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_region_data_7_address0 =  (sc_lv<12>) (tmp_cast_fu_12287_p1.read());
    } else {
        pyr_region_data_7_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void batch_align2D_region::thread_pyr_region_data_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp19_stage10.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_7_cas_fu_36644_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage9.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage9.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_6_cas_fu_36619_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage8.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage8.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_5_cas_fu_36594_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage7.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage7.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum_i_7_5_cast_fu_36569_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage6.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_4_cas_fu_36544_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage5.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum_i_7_4_cast_fu_36519_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage4.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_2_cas_fu_36494_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_1_cas_fu_36449_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum14_i_7_cast_fu_36404_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum_i_7_cast_fu_36354_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
            pyr_region_data_7_address1 =  (sc_lv<12>) (it_0_sum_i_7_3_cast_fu_36344_p1.read());
        } else {
            pyr_region_data_7_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
        }
    } else {
        pyr_region_data_7_address1 =  (sc_lv<12>) ("XXXXXXXXXXXX");
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
         esl_seteq<1,3,3>(p_t_reg_38670_pp0_iter1_reg.read(), ap_const_lv3_7))) {
        pyr_region_data_7_we0 = ap_const_logic_1;
    } else {
        pyr_region_data_7_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_dx_0_01_fu_12854_p1() {
    ref_patch_dx_0_01_fu_12854_p1 = esl_sext<32,9>(tmp_95_reg_39752.read());
}

void batch_align2D_region::thread_ref_patch_dx_1_01_fu_16066_p1() {
    ref_patch_dx_1_01_fu_16066_p1 = esl_sext<32,9>(tmp_113_1_reg_41373.read());
}

void batch_align2D_region::thread_ref_patch_dx_2_01_fu_19278_p1() {
    ref_patch_dx_2_01_fu_19278_p1 = esl_sext<32,9>(tmp_113_2_reg_42994.read());
}

void batch_align2D_region::thread_ref_patch_dx_3_01_fu_22490_p1() {
    ref_patch_dx_3_01_fu_22490_p1 = esl_sext<32,9>(tmp_113_3_reg_44615.read());
}

void batch_align2D_region::thread_ref_patch_dx_4_01_fu_25702_p1() {
    ref_patch_dx_4_01_fu_25702_p1 = esl_sext<32,9>(tmp_113_4_reg_46241.read());
}

void batch_align2D_region::thread_ref_patch_dx_5_01_fu_28914_p1() {
    ref_patch_dx_5_01_fu_28914_p1 = esl_sext<32,9>(tmp_113_5_reg_47862.read());
}

void batch_align2D_region::thread_ref_patch_dx_6_01_fu_32126_p1() {
    ref_patch_dx_6_01_fu_32126_p1 = esl_sext<32,9>(tmp_113_6_reg_49483.read());
}

void batch_align2D_region::thread_ref_patch_dx_7_01_fu_35339_p1() {
    ref_patch_dx_7_01_fu_35339_p1 = esl_sext<32,9>(tmp_113_7_reg_51098.read());
}

void batch_align2D_region::thread_ref_patch_dy_0_01_fu_12872_p1() {
    ref_patch_dy_0_01_fu_12872_p1 = esl_sext<32,9>(tmp_103_reg_39772.read());
}

void batch_align2D_region::thread_ref_patch_dy_1_01_fu_16084_p1() {
    ref_patch_dy_1_01_fu_16084_p1 = esl_sext<32,9>(tmp_124_1_reg_41393.read());
}

void batch_align2D_region::thread_ref_patch_dy_2_01_fu_19296_p1() {
    ref_patch_dy_2_01_fu_19296_p1 = esl_sext<32,9>(tmp_124_2_reg_43014.read());
}

void batch_align2D_region::thread_ref_patch_dy_3_01_fu_22508_p1() {
    ref_patch_dy_3_01_fu_22508_p1 = esl_sext<32,9>(tmp_124_3_reg_44635.read());
}

void batch_align2D_region::thread_ref_patch_dy_4_01_fu_25720_p1() {
    ref_patch_dy_4_01_fu_25720_p1 = esl_sext<32,9>(tmp_124_4_reg_46261.read());
}

void batch_align2D_region::thread_ref_patch_dy_5_01_fu_28932_p1() {
    ref_patch_dy_5_01_fu_28932_p1 = esl_sext<32,9>(tmp_124_5_reg_47882.read());
}

void batch_align2D_region::thread_ref_patch_dy_6_01_fu_32144_p1() {
    ref_patch_dy_6_01_fu_32144_p1 = esl_sext<32,9>(tmp_124_6_reg_49503.read());
}

void batch_align2D_region::thread_ref_patch_dy_7_01_fu_35357_p1() {
    ref_patch_dy_7_01_fu_35357_p1 = esl_sext<32,9>(tmp_124_7_reg_51118.read());
}

void batch_align2D_region::thread_ref_patch_with_borde_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_194_6_7_fu_33266_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_194_6_5_fu_33221_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_194_6_3_fu_33176_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_194_6_1_fu_33121_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_122_6_fu_32121_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_107_6_fu_32020_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp17_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_194_6_6_fu_33256_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_194_6_4_fu_33211_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_194_6_2_fu_33166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_194_6_fu_33110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_118_6_fu_32101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_1_address1 =  (sc_lv<7>) (tmp_111_6_fu_32041_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)))) {
        ref_patch_with_borde_1_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_1_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_6))) {
        ref_patch_with_borde_1_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_1_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_194_5_7_fu_30054_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_194_5_5_fu_30009_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_194_5_3_fu_29964_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_194_5_1_fu_29909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_122_5_fu_28909_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_107_5_fu_28802_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_194_5_6_fu_30044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_194_5_4_fu_29999_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_194_5_2_fu_29954_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_194_5_fu_29898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_118_5_fu_28889_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_2_address1 =  (sc_lv<7>) (tmp_111_5_fu_28823_p1.read());
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
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_5))) {
        ref_patch_with_borde_2_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_2_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_194_4_7_fu_26842_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_194_4_5_fu_26797_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_194_4_3_fu_26752_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_194_4_1_fu_26697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_122_4_fu_25697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_107_4_fu_25590_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_194_4_6_fu_26832_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_194_4_4_fu_26787_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_194_4_2_fu_26742_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_194_4_fu_26686_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_118_4_fu_25677_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_3_address1 =  (sc_lv<7>) (tmp_111_4_fu_25611_p1.read());
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
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_4))) {
        ref_patch_with_borde_3_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_3_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_194_3_7_fu_23630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_194_3_5_fu_23585_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_194_3_3_fu_23540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_194_3_1_fu_23485_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_122_3_fu_22485_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_107_3_fu_22378_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_194_3_6_fu_23620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_194_3_4_fu_23575_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_194_3_2_fu_23530_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_194_3_fu_23474_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_118_3_fu_22465_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_4_address1 =  (sc_lv<7>) (tmp_111_3_fu_22399_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())))) {
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())))) {
        ref_patch_with_borde_4_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_4_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_3))) {
        ref_patch_with_borde_4_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_4_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_194_2_7_fu_20418_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_194_2_5_fu_20373_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_194_2_3_fu_20328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_194_2_1_fu_20273_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_122_2_fu_19273_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_107_2_fu_19166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp9_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_194_2_6_fu_20408_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_194_2_4_fu_20363_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_194_2_2_fu_20318_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_194_2_fu_20262_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_118_2_fu_19253_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_5_address1 =  (sc_lv<7>) (tmp_111_2_fu_19187_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())))) {
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())))) {
        ref_patch_with_borde_5_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_2))) {
        ref_patch_with_borde_5_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_5_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_194_1_7_fu_17206_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_194_1_5_fu_17161_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_194_1_3_fu_17116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_194_1_1_fu_17061_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_122_1_fu_16061_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_107_1_fu_15960_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_194_1_6_fu_17196_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_194_1_4_fu_17151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_194_1_2_fu_17106_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_194_1_fu_17050_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_118_1_fu_16041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_6_address1 =  (sc_lv<7>) (tmp_111_1_fu_15981_p1.read());
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
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_1))) {
        ref_patch_with_borde_6_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_6_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_194_0_7_fu_13994_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_194_0_5_fu_13949_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_194_0_3_fu_13904_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_194_0_1_fu_13849_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_102_fu_12849_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_91_fu_12748_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_7_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_194_0_6_fu_13984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_194_0_4_fu_13939_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_194_0_2_fu_13894_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_148_fu_13838_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_99_fu_12829_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_7_address1 =  (sc_lv<7>) (tmp_94_fu_12769_p1.read());
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
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_0))) {
        ref_patch_with_borde_7_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_7_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_194_7_7_fu_36479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_194_7_5_fu_36434_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_194_7_3_fu_36389_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_194_7_1_fu_36334_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_122_7_fu_35334_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_107_7_fu_35227_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        ref_patch_with_borde_address0 =  (sc_lv<7>) (tmp_s_fu_12530_p1.read());
    } else {
        ref_patch_with_borde_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp19_stage3.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_194_7_6_fu_36469_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage2.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_194_7_4_fu_36424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_194_7_2_fu_36379_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_194_7_fu_36323_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_118_7_fu_35314_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        ref_patch_with_borde_address1 =  (sc_lv<7>) (tmp_111_7_fu_35248_p1.read());
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())))) {
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
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())))) {
        ref_patch_with_borde_ce1 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_ce1 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_ref_patch_with_borde_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,3,3>(div_t_reg_38847_pp2_iter1_reg.read(), ap_const_lv3_7))) {
        ref_patch_with_borde_we0 = ap_const_logic_1;
    } else {
        ref_patch_with_borde_we0 = ap_const_logic_0;
    }
}

void batch_align2D_region::thread_tmp107_cast_fu_12738_p1() {
    tmp107_cast_fu_12738_p1 = esl_zext<7,5>(tmp4_fu_12732_p2.read());
}

void batch_align2D_region::thread_tmp108_cast_fu_12759_p1() {
    tmp108_cast_fu_12759_p1 = esl_zext<7,5>(tmp5_fu_12753_p2.read());
}

void batch_align2D_region::thread_tmp109_cast_fu_12820_p1() {
    tmp109_cast_fu_12820_p1 = esl_zext<7,5>(tmp6_fu_12815_p2.read());
}

void batch_align2D_region::thread_tmp112_cast_fu_13747_p1() {
    tmp112_cast_fu_13747_p1 = esl_sext<13,7>(tmp9_fu_13741_p2.read());
}

void batch_align2D_region::thread_tmp130_cast_fu_15950_p1() {
    tmp130_cast_fu_15950_p1 = esl_zext<7,5>(tmp130_fu_15944_p2.read());
}

void batch_align2D_region::thread_tmp130_fu_15944_p2() {
    tmp130_fu_15944_p2 = (!ap_const_lv5_C.is_01() || !x_cast_172_fu_15900_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_cast_172_fu_15900_p1.read()));
}

void batch_align2D_region::thread_tmp131_cast_fu_15971_p1() {
    tmp131_cast_fu_15971_p1 = esl_zext<7,5>(tmp131_fu_15965_p2.read());
}

void batch_align2D_region::thread_tmp131_fu_15965_p2() {
    tmp131_fu_15965_p2 = (!ap_const_lv5_A.is_01() || !x_cast_172_fu_15900_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_cast_172_fu_15900_p1.read()));
}

void batch_align2D_region::thread_tmp132_cast_fu_16032_p1() {
    tmp132_cast_fu_16032_p1 = esl_zext<7,5>(tmp132_fu_16027_p2.read());
}

void batch_align2D_region::thread_tmp132_fu_16027_p2() {
    tmp132_fu_16027_p2 = (!x_cast_172_reg_41312.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_cast_172_reg_41312.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp133_fu_16841_p2() {
    tmp133_fu_16841_p2 = (icmp2_fu_16807_p2.read() | icmp3_fu_16823_p2.read());
}

void batch_align2D_region::thread_tmp134_fu_16847_p2() {
    tmp134_fu_16847_p2 = (tmp_140_1_fu_16829_p2.read() | tmp_141_1_fu_16835_p2.read());
}

void batch_align2D_region::thread_tmp135_cast_fu_16959_p1() {
    tmp135_cast_fu_16959_p1 = esl_sext<13,7>(tmp135_fu_16953_p2.read());
}

void batch_align2D_region::thread_tmp135_fu_16953_p2() {
    tmp135_fu_16953_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1400_fu_16945_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1400_fu_16945_p1.read()));
}

void batch_align2D_region::thread_tmp153_cast_fu_19156_p1() {
    tmp153_cast_fu_19156_p1 = esl_zext<7,5>(tmp153_fu_19150_p2.read());
}

void batch_align2D_region::thread_tmp153_fu_19150_p2() {
    tmp153_fu_19150_p2 = (!ap_const_lv5_C.is_01() || !x_2_cast_fu_19106_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_2_cast_fu_19106_p1.read()));
}

void batch_align2D_region::thread_tmp154_cast_fu_19177_p1() {
    tmp154_cast_fu_19177_p1 = esl_zext<7,5>(tmp154_fu_19171_p2.read());
}

void batch_align2D_region::thread_tmp154_fu_19171_p2() {
    tmp154_fu_19171_p2 = (!ap_const_lv5_A.is_01() || !x_2_cast_fu_19106_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_2_cast_fu_19106_p1.read()));
}

void batch_align2D_region::thread_tmp155_cast_fu_19244_p1() {
    tmp155_cast_fu_19244_p1 = esl_zext<7,5>(tmp155_fu_19239_p2.read());
}

void batch_align2D_region::thread_tmp155_fu_19239_p2() {
    tmp155_fu_19239_p2 = (!x_2_cast_reg_42928.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_2_cast_reg_42928.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp156_fu_20053_p2() {
    tmp156_fu_20053_p2 = (icmp4_fu_20019_p2.read() | icmp5_fu_20035_p2.read());
}

void batch_align2D_region::thread_tmp157_fu_20059_p2() {
    tmp157_fu_20059_p2 = (tmp_140_2_fu_20041_p2.read() | tmp_141_2_fu_20047_p2.read());
}

void batch_align2D_region::thread_tmp158_cast_fu_20171_p1() {
    tmp158_cast_fu_20171_p1 = esl_sext<13,7>(tmp158_fu_20165_p2.read());
}

void batch_align2D_region::thread_tmp158_fu_20165_p2() {
    tmp158_fu_20165_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1442_fu_20157_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1442_fu_20157_p1.read()));
}

void batch_align2D_region::thread_tmp176_cast_fu_22368_p1() {
    tmp176_cast_fu_22368_p1 = esl_zext<7,5>(tmp176_fu_22362_p2.read());
}

void batch_align2D_region::thread_tmp176_fu_22362_p2() {
    tmp176_fu_22362_p2 = (!ap_const_lv5_C.is_01() || !x_3_cast_fu_22318_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_3_cast_fu_22318_p1.read()));
}

void batch_align2D_region::thread_tmp177_cast_fu_22389_p1() {
    tmp177_cast_fu_22389_p1 = esl_zext<7,5>(tmp177_fu_22383_p2.read());
}

void batch_align2D_region::thread_tmp177_fu_22383_p2() {
    tmp177_fu_22383_p2 = (!ap_const_lv5_A.is_01() || !x_3_cast_fu_22318_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_3_cast_fu_22318_p1.read()));
}

void batch_align2D_region::thread_tmp178_cast_fu_22456_p1() {
    tmp178_cast_fu_22456_p1 = esl_zext<7,5>(tmp178_fu_22451_p2.read());
}

void batch_align2D_region::thread_tmp178_fu_22451_p2() {
    tmp178_fu_22451_p2 = (!x_3_cast_reg_44549.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_3_cast_reg_44549.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp179_fu_23265_p2() {
    tmp179_fu_23265_p2 = (icmp6_fu_23231_p2.read() | icmp7_fu_23247_p2.read());
}

void batch_align2D_region::thread_tmp180_fu_23271_p2() {
    tmp180_fu_23271_p2 = (tmp_140_3_fu_23253_p2.read() | tmp_141_3_fu_23259_p2.read());
}

void batch_align2D_region::thread_tmp181_cast_fu_23383_p1() {
    tmp181_cast_fu_23383_p1 = esl_sext<13,7>(tmp181_fu_23377_p2.read());
}

void batch_align2D_region::thread_tmp181_fu_23377_p2() {
    tmp181_fu_23377_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1453_fu_23369_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1453_fu_23369_p1.read()));
}

void batch_align2D_region::thread_tmp199_cast_fu_25580_p1() {
    tmp199_cast_fu_25580_p1 = esl_zext<7,5>(tmp199_fu_25574_p2.read());
}

void batch_align2D_region::thread_tmp199_fu_25574_p2() {
    tmp199_fu_25574_p2 = (!ap_const_lv5_C.is_01() || !x_4_cast_fu_25530_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_4_cast_fu_25530_p1.read()));
}

void batch_align2D_region::thread_tmp200_cast_fu_25601_p1() {
    tmp200_cast_fu_25601_p1 = esl_zext<7,5>(tmp200_fu_25595_p2.read());
}

void batch_align2D_region::thread_tmp200_fu_25595_p2() {
    tmp200_fu_25595_p2 = (!ap_const_lv5_A.is_01() || !x_4_cast_fu_25530_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_4_cast_fu_25530_p1.read()));
}

void batch_align2D_region::thread_tmp201_cast_fu_25668_p1() {
    tmp201_cast_fu_25668_p1 = esl_zext<7,5>(tmp201_fu_25663_p2.read());
}

void batch_align2D_region::thread_tmp201_fu_25663_p2() {
    tmp201_fu_25663_p2 = (!x_4_cast_reg_46175.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_4_cast_reg_46175.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp202_fu_26477_p2() {
    tmp202_fu_26477_p2 = (icmp8_fu_26443_p2.read() | icmp9_fu_26459_p2.read());
}

void batch_align2D_region::thread_tmp203_fu_26483_p2() {
    tmp203_fu_26483_p2 = (tmp_140_4_fu_26465_p2.read() | tmp_141_4_fu_26471_p2.read());
}

void batch_align2D_region::thread_tmp204_cast_fu_26595_p1() {
    tmp204_cast_fu_26595_p1 = esl_sext<13,7>(tmp204_fu_26589_p2.read());
}

void batch_align2D_region::thread_tmp204_fu_26589_p2() {
    tmp204_fu_26589_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1464_fu_26581_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1464_fu_26581_p1.read()));
}

void batch_align2D_region::thread_tmp222_cast_fu_28792_p1() {
    tmp222_cast_fu_28792_p1 = esl_zext<7,5>(tmp222_fu_28786_p2.read());
}

void batch_align2D_region::thread_tmp222_fu_28786_p2() {
    tmp222_fu_28786_p2 = (!ap_const_lv5_C.is_01() || !x_5_cast_fu_28742_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_5_cast_fu_28742_p1.read()));
}

void batch_align2D_region::thread_tmp223_cast_fu_28813_p1() {
    tmp223_cast_fu_28813_p1 = esl_zext<7,5>(tmp223_fu_28807_p2.read());
}

void batch_align2D_region::thread_tmp223_fu_28807_p2() {
    tmp223_fu_28807_p2 = (!ap_const_lv5_A.is_01() || !x_5_cast_fu_28742_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_5_cast_fu_28742_p1.read()));
}

void batch_align2D_region::thread_tmp224_cast_fu_28880_p1() {
    tmp224_cast_fu_28880_p1 = esl_zext<7,5>(tmp224_fu_28875_p2.read());
}

void batch_align2D_region::thread_tmp224_fu_28875_p2() {
    tmp224_fu_28875_p2 = (!x_5_cast_reg_47796.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_5_cast_reg_47796.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp225_fu_29689_p2() {
    tmp225_fu_29689_p2 = (icmp10_fu_29655_p2.read() | icmp11_fu_29671_p2.read());
}

void batch_align2D_region::thread_tmp226_fu_29695_p2() {
    tmp226_fu_29695_p2 = (tmp_140_5_fu_29677_p2.read() | tmp_141_5_fu_29683_p2.read());
}

void batch_align2D_region::thread_tmp227_cast_fu_29807_p1() {
    tmp227_cast_fu_29807_p1 = esl_sext<13,7>(tmp227_fu_29801_p2.read());
}

void batch_align2D_region::thread_tmp227_fu_29801_p2() {
    tmp227_fu_29801_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1475_fu_29797_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1475_fu_29797_p1.read()));
}

void batch_align2D_region::thread_tmp245_cast_fu_32010_p1() {
    tmp245_cast_fu_32010_p1 = esl_zext<7,5>(tmp245_fu_32004_p2.read());
}

void batch_align2D_region::thread_tmp245_fu_32004_p2() {
    tmp245_fu_32004_p2 = (!ap_const_lv5_C.is_01() || !x_6_cast_fu_31960_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_6_cast_fu_31960_p1.read()));
}

void batch_align2D_region::thread_tmp246_cast_fu_32031_p1() {
    tmp246_cast_fu_32031_p1 = esl_zext<7,5>(tmp246_fu_32025_p2.read());
}

void batch_align2D_region::thread_tmp246_fu_32025_p2() {
    tmp246_fu_32025_p2 = (!ap_const_lv5_A.is_01() || !x_6_cast_fu_31960_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_6_cast_fu_31960_p1.read()));
}

void batch_align2D_region::thread_tmp247_cast_fu_32092_p1() {
    tmp247_cast_fu_32092_p1 = esl_zext<7,5>(tmp247_fu_32087_p2.read());
}

void batch_align2D_region::thread_tmp247_fu_32087_p2() {
    tmp247_fu_32087_p2 = (!x_6_cast_reg_49422.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_6_cast_reg_49422.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp248_fu_32901_p2() {
    tmp248_fu_32901_p2 = (icmp12_fu_32867_p2.read() | icmp13_fu_32883_p2.read());
}

void batch_align2D_region::thread_tmp249_fu_32907_p2() {
    tmp249_fu_32907_p2 = (tmp_140_6_fu_32889_p2.read() | tmp_141_6_fu_32895_p2.read());
}

void batch_align2D_region::thread_tmp250_cast_fu_33019_p1() {
    tmp250_cast_fu_33019_p1 = esl_sext<13,7>(tmp250_fu_33013_p2.read());
}

void batch_align2D_region::thread_tmp250_fu_33013_p2() {
    tmp250_fu_33013_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1486_fu_33005_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1486_fu_33005_p1.read()));
}

void batch_align2D_region::thread_tmp268_cast_fu_35217_p1() {
    tmp268_cast_fu_35217_p1 = esl_zext<7,5>(tmp268_fu_35211_p2.read());
}

void batch_align2D_region::thread_tmp268_fu_35211_p2() {
    tmp268_fu_35211_p2 = (!ap_const_lv5_C.is_01() || !x_7_cast_fu_35167_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_7_cast_fu_35167_p1.read()));
}

void batch_align2D_region::thread_tmp269_cast_fu_35238_p1() {
    tmp269_cast_fu_35238_p1 = esl_zext<7,5>(tmp269_fu_35232_p2.read());
}

void batch_align2D_region::thread_tmp269_fu_35232_p2() {
    tmp269_fu_35232_p2 = (!ap_const_lv5_A.is_01() || !x_7_cast_fu_35167_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_7_cast_fu_35167_p1.read()));
}

void batch_align2D_region::thread_tmp270_cast_fu_35305_p1() {
    tmp270_cast_fu_35305_p1 = esl_zext<7,5>(tmp270_fu_35300_p2.read());
}

void batch_align2D_region::thread_tmp270_fu_35300_p2() {
    tmp270_fu_35300_p2 = (!x_7_cast_reg_51032.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_7_cast_reg_51032.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp271_fu_36114_p2() {
    tmp271_fu_36114_p2 = (icmp14_fu_36080_p2.read() | icmp15_fu_36096_p2.read());
}

void batch_align2D_region::thread_tmp272_fu_36120_p2() {
    tmp272_fu_36120_p2 = (tmp_140_7_fu_36102_p2.read() | tmp_141_7_fu_36108_p2.read());
}

void batch_align2D_region::thread_tmp273_cast_fu_36232_p1() {
    tmp273_cast_fu_36232_p1 = esl_sext<13,7>(tmp273_fu_36226_p2.read());
}

void batch_align2D_region::thread_tmp273_fu_36226_p2() {
    tmp273_fu_36226_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1497_fu_36218_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1497_fu_36218_p1.read()));
}

void batch_align2D_region::thread_tmp4_fu_12732_p2() {
    tmp4_fu_12732_p2 = (!ap_const_lv5_C.is_01() || !x_cast_fu_12688_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(x_cast_fu_12688_p1.read()));
}

void batch_align2D_region::thread_tmp5_fu_12753_p2() {
    tmp5_fu_12753_p2 = (!ap_const_lv5_A.is_01() || !x_cast_fu_12688_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(x_cast_fu_12688_p1.read()));
}

void batch_align2D_region::thread_tmp6_fu_12815_p2() {
    tmp6_fu_12815_p2 = (!x_cast_reg_39691.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(x_cast_reg_39691.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D_region::thread_tmp7_fu_13629_p2() {
    tmp7_fu_13629_p2 = (icmp_fu_13595_p2.read() | icmp1_fu_13611_p2.read());
}

void batch_align2D_region::thread_tmp8_fu_13635_p2() {
    tmp8_fu_13635_p2 = (tmp_106_fu_13617_p2.read() | tmp_107_fu_13623_p2.read());
}

void batch_align2D_region::thread_tmp9_fu_13741_p2() {
    tmp9_fu_13741_p2 = (!ap_const_lv7_7C.is_01() || !tmp_1386_fu_13733_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_7C) + sc_biguint<7>(tmp_1386_fu_13733_p1.read()));
}

void batch_align2D_region::thread_tmp_1000_fu_31216_p3() {
    tmp_1000_fu_31216_p3 = (!tmp_991_fu_31142_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_991_fu_31142_p2.read()[0].to_bool())? ref_patch_dy_5_63_36_fu_3598.read(): tmp_999_fu_31208_p3.read());
}

void batch_align2D_region::thread_tmp_1001_fu_31224_p3() {
    tmp_1001_fu_31224_p3 = (!tmp_993_fu_31156_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_993_fu_31156_p2.read()[0].to_bool())? ref_patch_dy_5_63_44_fu_3630.read(): tmp_1000_fu_31216_p3.read());
}

void batch_align2D_region::thread_tmp_1002_fu_31266_p2() {
    tmp_1002_fu_31266_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1003_fu_31272_p3() {
    tmp_1003_fu_31272_p3 = (!tmp_1002_fu_31266_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1002_fu_31266_p2.read()[0].to_bool())? ref_patch_dx_5_63_12_fu_3246.read(): ref_patch_dx_5_63_61_fu_3442.read());
}

void batch_align2D_region::thread_tmp_1004_fu_31280_p2() {
    tmp_1004_fu_31280_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_1005_fu_31286_p3() {
    tmp_1005_fu_31286_p3 = (!tmp_1004_fu_31280_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1004_fu_31280_p2.read()[0].to_bool())? ref_patch_dx_5_63_19_fu_3274.read(): tmp_1003_fu_31272_p3.read());
}

void batch_align2D_region::thread_tmp_1006_fu_31294_p2() {
    tmp_1006_fu_31294_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1007_fu_31300_p3() {
    tmp_1007_fu_31300_p3 = (!tmp_1006_fu_31294_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1006_fu_31294_p2.read()[0].to_bool())? ref_patch_dx_5_63_26_fu_3302.read(): tmp_1005_fu_31286_p3.read());
}

void batch_align2D_region::thread_tmp_1008_fu_31308_p2() {
    tmp_1008_fu_31308_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_1009_fu_31314_p3() {
    tmp_1009_fu_31314_p3 = (!tmp_1008_fu_31308_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1008_fu_31308_p2.read()[0].to_bool())? ref_patch_dx_5_63_33_fu_3330.read(): tmp_1007_fu_31300_p3.read());
}

void batch_align2D_region::thread_tmp_100_fu_12834_p2() {
    tmp_100_fu_12834_p2 = (tmp_89_reg_39696.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1010_fu_31322_p2() {
    tmp_1010_fu_31322_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_1011_fu_31328_p3() {
    tmp_1011_fu_31328_p3 = (!tmp_1010_fu_31322_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1010_fu_31322_p2.read()[0].to_bool())? ref_patch_dx_5_63_40_fu_3358.read(): tmp_1009_fu_31314_p3.read());
}

void batch_align2D_region::thread_tmp_1012_fu_31336_p2() {
    tmp_1012_fu_31336_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1013_fu_31342_p3() {
    tmp_1013_fu_31342_p3 = (!tmp_1012_fu_31336_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1012_fu_31336_p2.read()[0].to_bool())? ref_patch_dx_5_63_47_fu_3386.read(): tmp_1011_fu_31328_p3.read());
}

void batch_align2D_region::thread_tmp_1014_fu_31350_p2() {
    tmp_1014_fu_31350_p2 = (!it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_1_fu_31261_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_1015_fu_31390_p3() {
    tmp_1015_fu_31390_p3 = (!tmp_1002_reg_48523.read()[0].is_01())? sc_lv<32>(): ((tmp_1002_reg_48523.read()[0].to_bool())? ref_patch_dy_5_63_5_fu_3474.read(): ref_patch_dy_5_63_61_fu_3698.read());
}

void batch_align2D_region::thread_tmp_1016_fu_31397_p3() {
    tmp_1016_fu_31397_p3 = (!tmp_1004_reg_48528.read()[0].is_01())? sc_lv<32>(): ((tmp_1004_reg_48528.read()[0].to_bool())? ref_patch_dy_5_63_13_fu_3506.read(): tmp_1015_fu_31390_p3.read());
}

void batch_align2D_region::thread_tmp_1017_fu_31404_p3() {
    tmp_1017_fu_31404_p3 = (!tmp_1006_reg_48533.read()[0].is_01())? sc_lv<32>(): ((tmp_1006_reg_48533.read()[0].to_bool())? ref_patch_dy_5_63_21_fu_3538.read(): tmp_1016_fu_31397_p3.read());
}

void batch_align2D_region::thread_tmp_1018_fu_31411_p3() {
    tmp_1018_fu_31411_p3 = (!tmp_1008_reg_48538.read()[0].is_01())? sc_lv<32>(): ((tmp_1008_reg_48538.read()[0].to_bool())? ref_patch_dy_5_63_29_fu_3570.read(): tmp_1017_fu_31404_p3.read());
}

void batch_align2D_region::thread_tmp_1019_fu_31418_p3() {
    tmp_1019_fu_31418_p3 = (!tmp_1010_reg_48543.read()[0].is_01())? sc_lv<32>(): ((tmp_1010_reg_48543.read()[0].to_bool())? ref_patch_dy_5_63_37_fu_3602.read(): tmp_1018_fu_31411_p3.read());
}

void batch_align2D_region::thread_tmp_101_fu_12843_p2() {
    tmp_101_fu_12843_p2 = (!x_cast1_fu_12798_p1.read().is_01() || !tmp_116_cast_fu_12839_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_cast1_fu_12798_p1.read()) + sc_biguint<8>(tmp_116_cast_fu_12839_p1.read()));
}

void batch_align2D_region::thread_tmp_1020_fu_31425_p3() {
    tmp_1020_fu_31425_p3 = (!tmp_1012_reg_48548.read()[0].is_01())? sc_lv<32>(): ((tmp_1012_reg_48548.read()[0].to_bool())? ref_patch_dy_5_63_45_fu_3634.read(): tmp_1019_fu_31418_p3.read());
}

void batch_align2D_region::thread_tmp_1021_fu_31492_p2() {
    tmp_1021_fu_31492_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1022_fu_31498_p3() {
    tmp_1022_fu_31498_p3 = (!tmp_1021_fu_31492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1021_fu_31492_p2.read()[0].to_bool())? ref_patch_dx_5_63_13_fu_3250.read(): ref_patch_dx_5_63_62_fu_3446.read());
}

void batch_align2D_region::thread_tmp_1023_fu_31506_p2() {
    tmp_1023_fu_31506_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_1024_fu_31512_p3() {
    tmp_1024_fu_31512_p3 = (!tmp_1023_fu_31506_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1023_fu_31506_p2.read()[0].to_bool())? ref_patch_dx_5_63_20_fu_3278.read(): tmp_1022_fu_31498_p3.read());
}

void batch_align2D_region::thread_tmp_1025_fu_31520_p2() {
    tmp_1025_fu_31520_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1026_fu_31526_p3() {
    tmp_1026_fu_31526_p3 = (!tmp_1025_fu_31520_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1025_fu_31520_p2.read()[0].to_bool())? ref_patch_dx_5_63_27_fu_3306.read(): tmp_1024_fu_31512_p3.read());
}

void batch_align2D_region::thread_tmp_1027_fu_31534_p2() {
    tmp_1027_fu_31534_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_1028_fu_31540_p3() {
    tmp_1028_fu_31540_p3 = (!tmp_1027_fu_31534_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1027_fu_31534_p2.read()[0].to_bool())? ref_patch_dx_5_63_34_fu_3334.read(): tmp_1026_fu_31526_p3.read());
}

void batch_align2D_region::thread_tmp_1029_fu_31548_p2() {
    tmp_1029_fu_31548_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_102_fu_12849_p1() {
    tmp_102_fu_12849_p1 = esl_zext<64,8>(tmp_101_fu_12843_p2.read());
}

void batch_align2D_region::thread_tmp_1030_fu_31554_p3() {
    tmp_1030_fu_31554_p3 = (!tmp_1029_fu_31548_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1029_fu_31548_p2.read()[0].to_bool())? ref_patch_dx_5_63_41_fu_3362.read(): tmp_1028_fu_31540_p3.read());
}

void batch_align2D_region::thread_tmp_1031_fu_31562_p2() {
    tmp_1031_fu_31562_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1032_fu_31568_p3() {
    tmp_1032_fu_31568_p3 = (!tmp_1031_fu_31562_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1031_fu_31562_p2.read()[0].to_bool())? ref_patch_dx_5_63_48_fu_3390.read(): tmp_1030_fu_31554_p3.read());
}

void batch_align2D_region::thread_tmp_1033_fu_31576_p2() {
    tmp_1033_fu_31576_p2 = (!it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_2_fu_31487_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_1034_fu_31590_p3() {
    tmp_1034_fu_31590_p3 = (!tmp_1021_fu_31492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1021_fu_31492_p2.read()[0].to_bool())? ref_patch_dy_5_63_6_fu_3478.read(): ref_patch_dy_5_63_62_fu_3702.read());
}

void batch_align2D_region::thread_tmp_1035_fu_31598_p3() {
    tmp_1035_fu_31598_p3 = (!tmp_1023_fu_31506_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1023_fu_31506_p2.read()[0].to_bool())? ref_patch_dy_5_63_14_fu_3510.read(): tmp_1034_fu_31590_p3.read());
}

void batch_align2D_region::thread_tmp_1036_fu_31606_p3() {
    tmp_1036_fu_31606_p3 = (!tmp_1025_fu_31520_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1025_fu_31520_p2.read()[0].to_bool())? ref_patch_dy_5_63_22_fu_3542.read(): tmp_1035_fu_31598_p3.read());
}

void batch_align2D_region::thread_tmp_1037_fu_31614_p3() {
    tmp_1037_fu_31614_p3 = (!tmp_1027_fu_31534_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1027_fu_31534_p2.read()[0].to_bool())? ref_patch_dy_5_63_30_fu_3574.read(): tmp_1036_fu_31606_p3.read());
}

void batch_align2D_region::thread_tmp_1038_fu_31622_p3() {
    tmp_1038_fu_31622_p3 = (!tmp_1029_fu_31548_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1029_fu_31548_p2.read()[0].to_bool())? ref_patch_dy_5_63_38_fu_3606.read(): tmp_1037_fu_31614_p3.read());
}

void batch_align2D_region::thread_tmp_1039_fu_31630_p3() {
    tmp_1039_fu_31630_p3 = (!tmp_1031_fu_31562_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1031_fu_31562_p2.read()[0].to_bool())? ref_patch_dy_5_63_46_fu_3638.read(): tmp_1038_fu_31622_p3.read());
}

void batch_align2D_region::thread_tmp_103_cast_fu_12801_p1() {
    tmp_103_cast_fu_12801_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q0.read());
}

void batch_align2D_region::thread_tmp_103_fu_12866_p2() {
    tmp_103_fu_12866_p2 = (!tmp_114_cast_fu_12858_p1.read().is_01() || !tmp_119_cast_fu_12862_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_114_cast_fu_12858_p1.read()) - sc_biguint<9>(tmp_119_cast_fu_12862_p1.read()));
}

void batch_align2D_region::thread_tmp_1040_fu_31699_p2() {
    tmp_1040_fu_31699_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_1041_fu_31705_p3() {
    tmp_1041_fu_31705_p3 = (!tmp_1040_fu_31699_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1040_fu_31699_p2.read()[0].to_bool())? ref_patch_dx_5_63_14_fu_3254.read(): ref_patch_dx_5_63_63_fu_3450.read());
}

void batch_align2D_region::thread_tmp_1042_fu_31713_p2() {
    tmp_1042_fu_31713_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1043_fu_31719_p3() {
    tmp_1043_fu_31719_p3 = (!tmp_1042_fu_31713_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1042_fu_31713_p2.read()[0].to_bool())? ref_patch_dx_5_63_21_fu_3282.read(): tmp_1041_fu_31705_p3.read());
}

void batch_align2D_region::thread_tmp_1044_fu_31727_p2() {
    tmp_1044_fu_31727_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_1045_fu_31733_p3() {
    tmp_1045_fu_31733_p3 = (!tmp_1044_fu_31727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1044_fu_31727_p2.read()[0].to_bool())? ref_patch_dx_5_63_28_fu_3310.read(): tmp_1043_fu_31719_p3.read());
}

void batch_align2D_region::thread_tmp_1046_fu_31741_p2() {
    tmp_1046_fu_31741_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1047_fu_31747_p3() {
    tmp_1047_fu_31747_p3 = (!tmp_1046_fu_31741_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1046_fu_31741_p2.read()[0].to_bool())? ref_patch_dx_5_63_35_fu_3338.read(): tmp_1045_fu_31733_p3.read());
}

void batch_align2D_region::thread_tmp_1048_fu_31755_p2() {
    tmp_1048_fu_31755_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1049_fu_31761_p3() {
    tmp_1049_fu_31761_p3 = (!tmp_1048_fu_31755_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1048_fu_31755_p2.read()[0].to_bool())? ref_patch_dx_5_63_42_fu_3366.read(): tmp_1047_fu_31747_p3.read());
}

void batch_align2D_region::thread_tmp_104_1_fu_15938_p2() {
    tmp_104_1_fu_15938_p2 = (!p_shl7_1_cast_fu_15934_p1.read().is_01() || !p_shl_1_cast_fu_15922_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_1_cast_fu_15934_p1.read()) + sc_biguint<7>(p_shl_1_cast_fu_15922_p1.read()));
}

void batch_align2D_region::thread_tmp_104_2_fu_19144_p2() {
    tmp_104_2_fu_19144_p2 = (!p_shl7_2_cast_fu_19140_p1.read().is_01() || !p_shl_2_cast_fu_19128_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_2_cast_fu_19140_p1.read()) + sc_biguint<7>(p_shl_2_cast_fu_19128_p1.read()));
}

void batch_align2D_region::thread_tmp_104_3_fu_22356_p2() {
    tmp_104_3_fu_22356_p2 = (!p_shl7_3_cast_fu_22352_p1.read().is_01() || !p_shl_3_cast_fu_22340_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_3_cast_fu_22352_p1.read()) + sc_biguint<7>(p_shl_3_cast_fu_22340_p1.read()));
}

void batch_align2D_region::thread_tmp_104_4_fu_25568_p2() {
    tmp_104_4_fu_25568_p2 = (!p_shl7_4_cast_fu_25564_p1.read().is_01() || !p_shl_4_cast_fu_25552_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_4_cast_fu_25564_p1.read()) + sc_biguint<7>(p_shl_4_cast_fu_25552_p1.read()));
}

void batch_align2D_region::thread_tmp_104_5_fu_28780_p2() {
    tmp_104_5_fu_28780_p2 = (!p_shl7_5_cast_fu_28776_p1.read().is_01() || !p_shl_5_cast_fu_28764_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_5_cast_fu_28776_p1.read()) + sc_biguint<7>(p_shl_5_cast_fu_28764_p1.read()));
}

void batch_align2D_region::thread_tmp_104_6_fu_31998_p2() {
    tmp_104_6_fu_31998_p2 = (!p_shl7_6_cast_fu_31994_p1.read().is_01() || !p_shl_6_cast_fu_31982_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_6_cast_fu_31994_p1.read()) + sc_biguint<7>(p_shl_6_cast_fu_31982_p1.read()));
}

void batch_align2D_region::thread_tmp_104_7_fu_35205_p2() {
    tmp_104_7_fu_35205_p2 = (!p_shl7_7_cast_fu_35201_p1.read().is_01() || !p_shl_7_cast_fu_35189_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_7_cast_fu_35201_p1.read()) + sc_biguint<7>(p_shl_7_cast_fu_35189_p1.read()));
}

void batch_align2D_region::thread_tmp_104_fu_12273_p1() {
    tmp_104_fu_12273_p1 = indvar_reg_7208.read().range(12-1, 0);
}

void batch_align2D_region::thread_tmp_1050_fu_31769_p2() {
    tmp_1050_fu_31769_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_1051_fu_31775_p3() {
    tmp_1051_fu_31775_p3 = (!tmp_1050_fu_31769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1050_fu_31769_p2.read()[0].to_bool())? ref_patch_dx_5_63_49_fu_3394.read(): tmp_1049_fu_31761_p3.read());
}

void batch_align2D_region::thread_tmp_1052_fu_31783_p2() {
    tmp_1052_fu_31783_p2 = (!it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_3_fu_31694_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1053_fu_31797_p3() {
    tmp_1053_fu_31797_p3 = (!tmp_1040_fu_31699_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1040_fu_31699_p2.read()[0].to_bool())? ref_patch_dy_5_63_7_fu_3482.read(): ref_patch_dy_5_63_63_fu_3706.read());
}

void batch_align2D_region::thread_tmp_1054_fu_31805_p3() {
    tmp_1054_fu_31805_p3 = (!tmp_1042_fu_31713_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1042_fu_31713_p2.read()[0].to_bool())? ref_patch_dy_5_63_15_fu_3514.read(): tmp_1053_fu_31797_p3.read());
}

void batch_align2D_region::thread_tmp_1055_fu_31813_p3() {
    tmp_1055_fu_31813_p3 = (!tmp_1044_fu_31727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1044_fu_31727_p2.read()[0].to_bool())? ref_patch_dy_5_63_23_fu_3546.read(): tmp_1054_fu_31805_p3.read());
}

void batch_align2D_region::thread_tmp_1056_fu_31821_p3() {
    tmp_1056_fu_31821_p3 = (!tmp_1046_fu_31741_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1046_fu_31741_p2.read()[0].to_bool())? ref_patch_dy_5_63_31_fu_3578.read(): tmp_1055_fu_31813_p3.read());
}

void batch_align2D_region::thread_tmp_1057_fu_31829_p3() {
    tmp_1057_fu_31829_p3 = (!tmp_1048_fu_31755_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1048_fu_31755_p2.read()[0].to_bool())? ref_patch_dy_5_63_39_fu_3610.read(): tmp_1056_fu_31821_p3.read());
}

void batch_align2D_region::thread_tmp_1058_fu_31837_p3() {
    tmp_1058_fu_31837_p3 = (!tmp_1050_fu_31769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1050_fu_31769_p2.read()[0].to_bool())? ref_patch_dy_5_63_47_fu_3642.read(): tmp_1057_fu_31829_p3.read());
}

void batch_align2D_region::thread_tmp_105_fu_12352_p1() {
    tmp_105_fu_12352_p1 = indvar1_reg_7219.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_1069_fu_33549_p2() {
    tmp_1069_fu_33549_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_106_1_fu_15954_p2() {
    tmp_106_1_fu_15954_p2 = (!tmp_104_1_fu_15938_p2.read().is_01() || !tmp130_cast_fu_15950_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_1_fu_15938_p2.read()) + sc_biguint<7>(tmp130_cast_fu_15950_p1.read()));
}

void batch_align2D_region::thread_tmp_106_2_fu_19160_p2() {
    tmp_106_2_fu_19160_p2 = (!tmp_104_2_fu_19144_p2.read().is_01() || !tmp153_cast_fu_19156_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_2_fu_19144_p2.read()) + sc_biguint<7>(tmp153_cast_fu_19156_p1.read()));
}

void batch_align2D_region::thread_tmp_106_3_fu_22372_p2() {
    tmp_106_3_fu_22372_p2 = (!tmp_104_3_fu_22356_p2.read().is_01() || !tmp176_cast_fu_22368_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_3_fu_22356_p2.read()) + sc_biguint<7>(tmp176_cast_fu_22368_p1.read()));
}

void batch_align2D_region::thread_tmp_106_4_fu_25584_p2() {
    tmp_106_4_fu_25584_p2 = (!tmp_104_4_fu_25568_p2.read().is_01() || !tmp199_cast_fu_25580_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_4_fu_25568_p2.read()) + sc_biguint<7>(tmp199_cast_fu_25580_p1.read()));
}

void batch_align2D_region::thread_tmp_106_5_fu_28796_p2() {
    tmp_106_5_fu_28796_p2 = (!tmp_104_5_fu_28780_p2.read().is_01() || !tmp222_cast_fu_28792_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_5_fu_28780_p2.read()) + sc_biguint<7>(tmp222_cast_fu_28792_p1.read()));
}

void batch_align2D_region::thread_tmp_106_6_fu_32014_p2() {
    tmp_106_6_fu_32014_p2 = (!tmp_104_6_fu_31998_p2.read().is_01() || !tmp245_cast_fu_32010_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_6_fu_31998_p2.read()) + sc_biguint<7>(tmp245_cast_fu_32010_p1.read()));
}

void batch_align2D_region::thread_tmp_106_7_fu_35221_p2() {
    tmp_106_7_fu_35221_p2 = (!tmp_104_7_fu_35205_p2.read().is_01() || !tmp268_cast_fu_35217_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_7_fu_35205_p2.read()) + sc_biguint<7>(tmp268_cast_fu_35217_p1.read()));
}

void batch_align2D_region::thread_tmp_106_fu_13617_p2() {
    tmp_106_fu_13617_p2 = (!px_r_0_i_reg_7413.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_reg_7413.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_1070_fu_33554_p3() {
    tmp_1070_fu_33554_p3 = (!tmp_1069_fu_33549_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1069_fu_33549_p2.read()[0].to_bool())? ref_patch_dy_6_63_fu_3966.read(): ref_patch_dy_6_63_56_fu_4190.read());
}

void batch_align2D_region::thread_tmp_1071_fu_33562_p2() {
    tmp_1071_fu_33562_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_1072_fu_33567_p3() {
    tmp_1072_fu_33567_p3 = (!tmp_1071_fu_33562_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1071_fu_33562_p2.read()[0].to_bool())? ref_patch_dy_6_63_8_fu_3998.read(): tmp_1070_fu_33554_p3.read());
}

void batch_align2D_region::thread_tmp_1073_fu_33575_p2() {
    tmp_1073_fu_33575_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_1074_fu_33580_p3() {
    tmp_1074_fu_33580_p3 = (!tmp_1073_fu_33575_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1073_fu_33575_p2.read()[0].to_bool())? ref_patch_dy_6_63_16_fu_4030.read(): tmp_1072_fu_33567_p3.read());
}

void batch_align2D_region::thread_tmp_1075_fu_33588_p2() {
    tmp_1075_fu_33588_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_1076_fu_33593_p3() {
    tmp_1076_fu_33593_p3 = (!tmp_1075_fu_33588_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1075_fu_33588_p2.read()[0].to_bool())? ref_patch_dy_6_63_24_fu_4062.read(): tmp_1074_fu_33580_p3.read());
}

void batch_align2D_region::thread_tmp_1077_fu_33601_p2() {
    tmp_1077_fu_33601_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_1078_fu_33606_p3() {
    tmp_1078_fu_33606_p3 = (!tmp_1077_fu_33601_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1077_fu_33601_p2.read()[0].to_bool())? ref_patch_dy_6_63_32_fu_4094.read(): tmp_1076_fu_33593_p3.read());
}

void batch_align2D_region::thread_tmp_1079_fu_33614_p2() {
    tmp_1079_fu_33614_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_107_1_fu_15960_p1() {
    tmp_107_1_fu_15960_p1 = esl_zext<64,7>(tmp_106_1_fu_15954_p2.read());
}

void batch_align2D_region::thread_tmp_107_2_fu_19166_p1() {
    tmp_107_2_fu_19166_p1 = esl_zext<64,7>(tmp_106_2_fu_19160_p2.read());
}

void batch_align2D_region::thread_tmp_107_3_fu_22378_p1() {
    tmp_107_3_fu_22378_p1 = esl_zext<64,7>(tmp_106_3_fu_22372_p2.read());
}

void batch_align2D_region::thread_tmp_107_4_fu_25590_p1() {
    tmp_107_4_fu_25590_p1 = esl_zext<64,7>(tmp_106_4_fu_25584_p2.read());
}

void batch_align2D_region::thread_tmp_107_5_fu_28802_p1() {
    tmp_107_5_fu_28802_p1 = esl_zext<64,7>(tmp_106_5_fu_28796_p2.read());
}

void batch_align2D_region::thread_tmp_107_6_fu_32020_p1() {
    tmp_107_6_fu_32020_p1 = esl_zext<64,7>(tmp_106_6_fu_32014_p2.read());
}

void batch_align2D_region::thread_tmp_107_7_fu_35227_p1() {
    tmp_107_7_fu_35227_p1 = esl_zext<64,7>(tmp_106_7_fu_35221_p2.read());
}

void batch_align2D_region::thread_tmp_107_cast_fu_12805_p1() {
    tmp_107_cast_fu_12805_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_107_fu_13623_p2() {
    tmp_107_fu_13623_p2 = (!py_r_0_i_reg_7423.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_reg_7423.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_1080_fu_33619_p3() {
    tmp_1080_fu_33619_p3 = (!tmp_1079_fu_33614_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1079_fu_33614_p2.read()[0].to_bool())? ref_patch_dy_6_63_40_fu_4126.read(): tmp_1078_fu_33606_p3.read());
}

void batch_align2D_region::thread_tmp_1081_fu_33627_p2() {
    tmp_1081_fu_33627_p2 = (!tmp_1488_reg_49607_pp17_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1488_reg_49607_pp17_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_1082_fu_33666_p2() {
    tmp_1082_fu_33666_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_1083_fu_33672_p3() {
    tmp_1083_fu_33672_p3 = (!tmp_1082_fu_33666_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1082_fu_33666_p2.read()[0].to_bool())? ref_patch_dx_6_63_8_fu_3742.read(): ref_patch_dx_6_63_57_fu_3938.read());
}

void batch_align2D_region::thread_tmp_1084_fu_33680_p2() {
    tmp_1084_fu_33680_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_1085_fu_33686_p3() {
    tmp_1085_fu_33686_p3 = (!tmp_1084_fu_33680_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1084_fu_33680_p2.read()[0].to_bool())? ref_patch_dx_6_63_15_fu_3770.read(): tmp_1083_fu_33672_p3.read());
}

void batch_align2D_region::thread_tmp_1086_fu_33694_p2() {
    tmp_1086_fu_33694_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_1087_fu_33700_p3() {
    tmp_1087_fu_33700_p3 = (!tmp_1086_fu_33694_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1086_fu_33694_p2.read()[0].to_bool())? ref_patch_dx_6_63_22_fu_3798.read(): tmp_1085_fu_33686_p3.read());
}

void batch_align2D_region::thread_tmp_1088_fu_33708_p2() {
    tmp_1088_fu_33708_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_1089_fu_33714_p3() {
    tmp_1089_fu_33714_p3 = (!tmp_1088_fu_33708_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1088_fu_33708_p2.read()[0].to_bool())? ref_patch_dx_6_63_29_fu_3826.read(): tmp_1087_fu_33700_p3.read());
}

void batch_align2D_region::thread_tmp_108_1_cast_fu_16013_p1() {
    tmp_108_1_cast_fu_16013_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q0.read());
}

void batch_align2D_region::thread_tmp_108_2_cast_fu_19225_p1() {
    tmp_108_2_cast_fu_19225_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q0.read());
}

void batch_align2D_region::thread_tmp_108_3_cast_fu_22437_p1() {
    tmp_108_3_cast_fu_22437_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q0.read());
}

void batch_align2D_region::thread_tmp_108_4_cast_fu_25649_p1() {
    tmp_108_4_cast_fu_25649_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q0.read());
}

void batch_align2D_region::thread_tmp_108_5_cast_fu_28861_p1() {
    tmp_108_5_cast_fu_28861_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q0.read());
}

void batch_align2D_region::thread_tmp_108_6_cast_fu_32073_p1() {
    tmp_108_6_cast_fu_32073_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q0.read());
}

void batch_align2D_region::thread_tmp_108_7_cast_fu_35286_p1() {
    tmp_108_7_cast_fu_35286_p1 = esl_zext<9,8>(ref_patch_with_borde_q0.read());
}

void batch_align2D_region::thread_tmp_1090_fu_33722_p2() {
    tmp_1090_fu_33722_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_1091_fu_33728_p3() {
    tmp_1091_fu_33728_p3 = (!tmp_1090_fu_33722_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1090_fu_33722_p2.read()[0].to_bool())? ref_patch_dx_6_63_36_fu_3854.read(): tmp_1089_fu_33714_p3.read());
}

void batch_align2D_region::thread_tmp_1092_fu_33736_p2() {
    tmp_1092_fu_33736_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_1093_fu_33742_p3() {
    tmp_1093_fu_33742_p3 = (!tmp_1092_fu_33736_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1092_fu_33736_p2.read()[0].to_bool())? ref_patch_dx_6_63_43_fu_3882.read(): tmp_1091_fu_33728_p3.read());
}

void batch_align2D_region::thread_tmp_1094_fu_33750_p2() {
    tmp_1094_fu_33750_p2 = (!it_ref_dy_0_i_6_sum6_fu_33661_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_fu_33661_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_1095_fu_33790_p3() {
    tmp_1095_fu_33790_p3 = (!tmp_1082_reg_50022.read()[0].is_01())? sc_lv<32>(): ((tmp_1082_reg_50022.read()[0].to_bool())? ref_patch_dy_6_63_1_fu_3970.read(): ref_patch_dy_6_63_57_fu_4194.read());
}

void batch_align2D_region::thread_tmp_1096_fu_33797_p3() {
    tmp_1096_fu_33797_p3 = (!tmp_1084_reg_50027.read()[0].is_01())? sc_lv<32>(): ((tmp_1084_reg_50027.read()[0].to_bool())? ref_patch_dy_6_63_9_fu_4002.read(): tmp_1095_fu_33790_p3.read());
}

void batch_align2D_region::thread_tmp_1097_fu_33804_p3() {
    tmp_1097_fu_33804_p3 = (!tmp_1086_reg_50032.read()[0].is_01())? sc_lv<32>(): ((tmp_1086_reg_50032.read()[0].to_bool())? ref_patch_dy_6_63_17_fu_4034.read(): tmp_1096_fu_33797_p3.read());
}

void batch_align2D_region::thread_tmp_1098_fu_33811_p3() {
    tmp_1098_fu_33811_p3 = (!tmp_1088_reg_50037.read()[0].is_01())? sc_lv<32>(): ((tmp_1088_reg_50037.read()[0].to_bool())? ref_patch_dy_6_63_25_fu_4066.read(): tmp_1097_fu_33804_p3.read());
}

void batch_align2D_region::thread_tmp_1099_cast_fu_33039_p1() {
    tmp_1099_cast_fu_33039_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_6_phi_fu_9810_p4.read());
}

void batch_align2D_region::thread_tmp_1099_fu_33818_p3() {
    tmp_1099_fu_33818_p3 = (!tmp_1090_reg_50042.read()[0].is_01())? sc_lv<32>(): ((tmp_1090_reg_50042.read()[0].to_bool())? ref_patch_dy_6_63_33_fu_4098.read(): tmp_1098_fu_33811_p3.read());
}

void batch_align2D_region::thread_tmp_10_cast_fu_13767_p1() {
    tmp_10_cast_fu_13767_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_phi_fu_7485_p4.read());
}

void batch_align2D_region::thread_tmp_1100_fu_33825_p3() {
    tmp_1100_fu_33825_p3 = (!tmp_1092_reg_50047.read()[0].is_01())? sc_lv<32>(): ((tmp_1092_reg_50047.read()[0].to_bool())? ref_patch_dy_6_63_41_fu_4130.read(): tmp_1099_fu_33818_p3.read());
}

void batch_align2D_region::thread_tmp_1101_fu_33865_p2() {
    tmp_1101_fu_33865_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_1102_fu_33871_p3() {
    tmp_1102_fu_33871_p3 = (!tmp_1101_fu_33865_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1101_fu_33865_p2.read()[0].to_bool())? ref_patch_dx_6_63_9_fu_3746.read(): ref_patch_dx_6_63_58_fu_3942.read());
}

void batch_align2D_region::thread_tmp_1103_fu_33879_p2() {
    tmp_1103_fu_33879_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_1104_fu_33885_p3() {
    tmp_1104_fu_33885_p3 = (!tmp_1103_fu_33879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1103_fu_33879_p2.read()[0].to_bool())? ref_patch_dx_6_63_16_fu_3774.read(): tmp_1102_fu_33871_p3.read());
}

void batch_align2D_region::thread_tmp_1105_fu_33893_p2() {
    tmp_1105_fu_33893_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_1106_fu_33899_p3() {
    tmp_1106_fu_33899_p3 = (!tmp_1105_fu_33893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1105_fu_33893_p2.read()[0].to_bool())? ref_patch_dx_6_63_23_fu_3802.read(): tmp_1104_fu_33885_p3.read());
}

void batch_align2D_region::thread_tmp_1107_fu_33907_p2() {
    tmp_1107_fu_33907_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_1108_fu_33913_p3() {
    tmp_1108_fu_33913_p3 = (!tmp_1107_fu_33907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1107_fu_33907_p2.read()[0].to_bool())? ref_patch_dx_6_63_30_fu_3830.read(): tmp_1106_fu_33899_p3.read());
}

void batch_align2D_region::thread_tmp_1109_fu_33921_p2() {
    tmp_1109_fu_33921_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_110_1_fu_15975_p2() {
    tmp_110_1_fu_15975_p2 = (!tmp_104_1_fu_15938_p2.read().is_01() || !tmp131_cast_fu_15971_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_1_fu_15938_p2.read()) + sc_biguint<7>(tmp131_cast_fu_15971_p1.read()));
}

void batch_align2D_region::thread_tmp_110_2_fu_19181_p2() {
    tmp_110_2_fu_19181_p2 = (!tmp_104_2_fu_19144_p2.read().is_01() || !tmp154_cast_fu_19177_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_2_fu_19144_p2.read()) + sc_biguint<7>(tmp154_cast_fu_19177_p1.read()));
}

void batch_align2D_region::thread_tmp_110_3_fu_22393_p2() {
    tmp_110_3_fu_22393_p2 = (!tmp_104_3_fu_22356_p2.read().is_01() || !tmp177_cast_fu_22389_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_3_fu_22356_p2.read()) + sc_biguint<7>(tmp177_cast_fu_22389_p1.read()));
}

void batch_align2D_region::thread_tmp_110_4_fu_25605_p2() {
    tmp_110_4_fu_25605_p2 = (!tmp_104_4_fu_25568_p2.read().is_01() || !tmp200_cast_fu_25601_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_4_fu_25568_p2.read()) + sc_biguint<7>(tmp200_cast_fu_25601_p1.read()));
}

void batch_align2D_region::thread_tmp_110_5_fu_28817_p2() {
    tmp_110_5_fu_28817_p2 = (!tmp_104_5_fu_28780_p2.read().is_01() || !tmp223_cast_fu_28813_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_5_fu_28780_p2.read()) + sc_biguint<7>(tmp223_cast_fu_28813_p1.read()));
}

void batch_align2D_region::thread_tmp_110_6_fu_32035_p2() {
    tmp_110_6_fu_32035_p2 = (!tmp_104_6_fu_31998_p2.read().is_01() || !tmp246_cast_fu_32031_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_6_fu_31998_p2.read()) + sc_biguint<7>(tmp246_cast_fu_32031_p1.read()));
}

void batch_align2D_region::thread_tmp_110_7_fu_35242_p2() {
    tmp_110_7_fu_35242_p2 = (!tmp_104_7_fu_35205_p2.read().is_01() || !tmp269_cast_fu_35238_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_104_7_fu_35205_p2.read()) + sc_biguint<7>(tmp269_cast_fu_35238_p1.read()));
}

void batch_align2D_region::thread_tmp_1110_fu_33927_p3() {
    tmp_1110_fu_33927_p3 = (!tmp_1109_fu_33921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1109_fu_33921_p2.read()[0].to_bool())? ref_patch_dx_6_63_37_fu_3858.read(): tmp_1108_fu_33913_p3.read());
}

void batch_align2D_region::thread_tmp_1111_fu_33935_p2() {
    tmp_1111_fu_33935_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_1112_fu_33941_p3() {
    tmp_1112_fu_33941_p3 = (!tmp_1111_fu_33935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1111_fu_33935_p2.read()[0].to_bool())? ref_patch_dx_6_63_44_fu_3886.read(): tmp_1110_fu_33927_p3.read());
}

void batch_align2D_region::thread_tmp_1113_fu_33949_p2() {
    tmp_1113_fu_33949_p2 = (!it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_1_fu_33860_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_1114_fu_33989_p3() {
    tmp_1114_fu_33989_p3 = (!tmp_1101_reg_50073.read()[0].is_01())? sc_lv<32>(): ((tmp_1101_reg_50073.read()[0].to_bool())? ref_patch_dy_6_63_2_fu_3974.read(): ref_patch_dy_6_63_58_fu_4198.read());
}

void batch_align2D_region::thread_tmp_1115_fu_33996_p3() {
    tmp_1115_fu_33996_p3 = (!tmp_1103_reg_50078.read()[0].is_01())? sc_lv<32>(): ((tmp_1103_reg_50078.read()[0].to_bool())? ref_patch_dy_6_63_10_fu_4006.read(): tmp_1114_fu_33989_p3.read());
}

void batch_align2D_region::thread_tmp_1116_fu_34003_p3() {
    tmp_1116_fu_34003_p3 = (!tmp_1105_reg_50083.read()[0].is_01())? sc_lv<32>(): ((tmp_1105_reg_50083.read()[0].to_bool())? ref_patch_dy_6_63_18_fu_4038.read(): tmp_1115_fu_33996_p3.read());
}

void batch_align2D_region::thread_tmp_1117_fu_34010_p3() {
    tmp_1117_fu_34010_p3 = (!tmp_1107_reg_50088.read()[0].is_01())? sc_lv<32>(): ((tmp_1107_reg_50088.read()[0].to_bool())? ref_patch_dy_6_63_26_fu_4070.read(): tmp_1116_fu_34003_p3.read());
}

void batch_align2D_region::thread_tmp_1118_fu_34017_p3() {
    tmp_1118_fu_34017_p3 = (!tmp_1109_reg_50093.read()[0].is_01())? sc_lv<32>(): ((tmp_1109_reg_50093.read()[0].to_bool())? ref_patch_dy_6_63_34_fu_4102.read(): tmp_1117_fu_34010_p3.read());
}

void batch_align2D_region::thread_tmp_1119_fu_34024_p3() {
    tmp_1119_fu_34024_p3 = (!tmp_1111_reg_50098.read()[0].is_01())? sc_lv<32>(): ((tmp_1111_reg_50098.read()[0].to_bool())? ref_patch_dy_6_63_42_fu_4134.read(): tmp_1118_fu_34017_p3.read());
}

void batch_align2D_region::thread_tmp_111_1_fu_15981_p1() {
    tmp_111_1_fu_15981_p1 = esl_zext<64,7>(tmp_110_1_fu_15975_p2.read());
}

void batch_align2D_region::thread_tmp_111_2_fu_19187_p1() {
    tmp_111_2_fu_19187_p1 = esl_zext<64,7>(tmp_110_2_fu_19181_p2.read());
}

void batch_align2D_region::thread_tmp_111_3_fu_22399_p1() {
    tmp_111_3_fu_22399_p1 = esl_zext<64,7>(tmp_110_3_fu_22393_p2.read());
}

void batch_align2D_region::thread_tmp_111_4_fu_25611_p1() {
    tmp_111_4_fu_25611_p1 = esl_zext<64,7>(tmp_110_4_fu_25605_p2.read());
}

void batch_align2D_region::thread_tmp_111_5_fu_28823_p1() {
    tmp_111_5_fu_28823_p1 = esl_zext<64,7>(tmp_110_5_fu_28817_p2.read());
}

void batch_align2D_region::thread_tmp_111_6_fu_32041_p1() {
    tmp_111_6_fu_32041_p1 = esl_zext<64,7>(tmp_110_6_fu_32035_p2.read());
}

void batch_align2D_region::thread_tmp_111_7_fu_35248_p1() {
    tmp_111_7_fu_35248_p1 = esl_zext<64,7>(tmp_110_7_fu_35242_p2.read());
}

void batch_align2D_region::thread_tmp_1120_fu_34091_p2() {
    tmp_1120_fu_34091_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_1121_fu_34097_p3() {
    tmp_1121_fu_34097_p3 = (!tmp_1120_fu_34091_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1120_fu_34091_p2.read()[0].to_bool())? ref_patch_dx_6_63_10_fu_3750.read(): ref_patch_dx_6_63_59_fu_3946.read());
}

void batch_align2D_region::thread_tmp_1122_fu_34105_p2() {
    tmp_1122_fu_34105_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_1123_fu_34111_p3() {
    tmp_1123_fu_34111_p3 = (!tmp_1122_fu_34105_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1122_fu_34105_p2.read()[0].to_bool())? ref_patch_dx_6_63_17_fu_3778.read(): tmp_1121_fu_34097_p3.read());
}

void batch_align2D_region::thread_tmp_1124_fu_34119_p2() {
    tmp_1124_fu_34119_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_1125_fu_34125_p3() {
    tmp_1125_fu_34125_p3 = (!tmp_1124_fu_34119_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1124_fu_34119_p2.read()[0].to_bool())? ref_patch_dx_6_63_24_fu_3806.read(): tmp_1123_fu_34111_p3.read());
}

void batch_align2D_region::thread_tmp_1126_fu_34133_p2() {
    tmp_1126_fu_34133_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_1127_fu_34139_p3() {
    tmp_1127_fu_34139_p3 = (!tmp_1126_fu_34133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1126_fu_34133_p2.read()[0].to_bool())? ref_patch_dx_6_63_31_fu_3834.read(): tmp_1125_fu_34125_p3.read());
}

void batch_align2D_region::thread_tmp_1128_fu_34147_p2() {
    tmp_1128_fu_34147_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_1129_fu_34153_p3() {
    tmp_1129_fu_34153_p3 = (!tmp_1128_fu_34147_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1128_fu_34147_p2.read()[0].to_bool())? ref_patch_dx_6_63_38_fu_3862.read(): tmp_1127_fu_34139_p3.read());
}

void batch_align2D_region::thread_tmp_112_1_cast_fu_16017_p1() {
    tmp_112_1_cast_fu_16017_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_112_2_cast_fu_19229_p1() {
    tmp_112_2_cast_fu_19229_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_112_3_cast_fu_22441_p1() {
    tmp_112_3_cast_fu_22441_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_112_4_cast_fu_25653_p1() {
    tmp_112_4_cast_fu_25653_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_112_5_cast_fu_28865_p1() {
    tmp_112_5_cast_fu_28865_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_112_6_cast_fu_32077_p1() {
    tmp_112_6_cast_fu_32077_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_112_7_cast_fu_35290_p1() {
    tmp_112_7_cast_fu_35290_p1 = esl_zext<9,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_1130_fu_34161_p2() {
    tmp_1130_fu_34161_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_1131_fu_34167_p3() {
    tmp_1131_fu_34167_p3 = (!tmp_1130_fu_34161_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1130_fu_34161_p2.read()[0].to_bool())? ref_patch_dx_6_63_45_fu_3890.read(): tmp_1129_fu_34153_p3.read());
}

void batch_align2D_region::thread_tmp_1132_fu_34175_p2() {
    tmp_1132_fu_34175_p2 = (!it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_2_fu_34086_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_1133_fu_34189_p3() {
    tmp_1133_fu_34189_p3 = (!tmp_1120_fu_34091_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1120_fu_34091_p2.read()[0].to_bool())? ref_patch_dy_6_63_3_fu_3978.read(): ref_patch_dy_6_63_59_fu_4202.read());
}

void batch_align2D_region::thread_tmp_1134_fu_34197_p3() {
    tmp_1134_fu_34197_p3 = (!tmp_1122_fu_34105_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1122_fu_34105_p2.read()[0].to_bool())? ref_patch_dy_6_63_11_fu_4010.read(): tmp_1133_fu_34189_p3.read());
}

void batch_align2D_region::thread_tmp_1135_fu_34205_p3() {
    tmp_1135_fu_34205_p3 = (!tmp_1124_fu_34119_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1124_fu_34119_p2.read()[0].to_bool())? ref_patch_dy_6_63_19_fu_4042.read(): tmp_1134_fu_34197_p3.read());
}

void batch_align2D_region::thread_tmp_1136_fu_34213_p3() {
    tmp_1136_fu_34213_p3 = (!tmp_1126_fu_34133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1126_fu_34133_p2.read()[0].to_bool())? ref_patch_dy_6_63_27_fu_4074.read(): tmp_1135_fu_34205_p3.read());
}

void batch_align2D_region::thread_tmp_1137_fu_34221_p3() {
    tmp_1137_fu_34221_p3 = (!tmp_1128_fu_34147_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1128_fu_34147_p2.read()[0].to_bool())? ref_patch_dy_6_63_35_fu_4106.read(): tmp_1136_fu_34213_p3.read());
}

void batch_align2D_region::thread_tmp_1138_fu_34229_p3() {
    tmp_1138_fu_34229_p3 = (!tmp_1130_fu_34161_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1130_fu_34161_p2.read()[0].to_bool())? ref_patch_dy_6_63_43_fu_4138.read(): tmp_1137_fu_34221_p3.read());
}

void batch_align2D_region::thread_tmp_1139_fu_34298_p2() {
    tmp_1139_fu_34298_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_113_1_fu_16021_p2() {
    tmp_113_1_fu_16021_p2 = (!tmp_108_1_cast_fu_16013_p1.read().is_01() || !tmp_112_1_cast_fu_16017_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_1_cast_fu_16013_p1.read()) - sc_biguint<9>(tmp_112_1_cast_fu_16017_p1.read()));
}

void batch_align2D_region::thread_tmp_113_2_fu_19233_p2() {
    tmp_113_2_fu_19233_p2 = (!tmp_108_2_cast_fu_19225_p1.read().is_01() || !tmp_112_2_cast_fu_19229_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_2_cast_fu_19225_p1.read()) - sc_biguint<9>(tmp_112_2_cast_fu_19229_p1.read()));
}

void batch_align2D_region::thread_tmp_113_3_fu_22445_p2() {
    tmp_113_3_fu_22445_p2 = (!tmp_108_3_cast_fu_22437_p1.read().is_01() || !tmp_112_3_cast_fu_22441_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_3_cast_fu_22437_p1.read()) - sc_biguint<9>(tmp_112_3_cast_fu_22441_p1.read()));
}

void batch_align2D_region::thread_tmp_113_4_fu_25657_p2() {
    tmp_113_4_fu_25657_p2 = (!tmp_108_4_cast_fu_25649_p1.read().is_01() || !tmp_112_4_cast_fu_25653_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_4_cast_fu_25649_p1.read()) - sc_biguint<9>(tmp_112_4_cast_fu_25653_p1.read()));
}

void batch_align2D_region::thread_tmp_113_5_fu_28869_p2() {
    tmp_113_5_fu_28869_p2 = (!tmp_108_5_cast_fu_28861_p1.read().is_01() || !tmp_112_5_cast_fu_28865_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_5_cast_fu_28861_p1.read()) - sc_biguint<9>(tmp_112_5_cast_fu_28865_p1.read()));
}

void batch_align2D_region::thread_tmp_113_6_fu_32081_p2() {
    tmp_113_6_fu_32081_p2 = (!tmp_108_6_cast_fu_32073_p1.read().is_01() || !tmp_112_6_cast_fu_32077_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_6_cast_fu_32073_p1.read()) - sc_biguint<9>(tmp_112_6_cast_fu_32077_p1.read()));
}

void batch_align2D_region::thread_tmp_113_7_fu_35294_p2() {
    tmp_113_7_fu_35294_p2 = (!tmp_108_7_cast_fu_35286_p1.read().is_01() || !tmp_112_7_cast_fu_35290_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_108_7_cast_fu_35286_p1.read()) - sc_biguint<9>(tmp_112_7_cast_fu_35290_p1.read()));
}

void batch_align2D_region::thread_tmp_1140_fu_34304_p3() {
    tmp_1140_fu_34304_p3 = (!tmp_1139_fu_34298_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1139_fu_34298_p2.read()[0].to_bool())? ref_patch_dx_6_63_11_fu_3754.read(): ref_patch_dx_6_63_60_fu_3950.read());
}

void batch_align2D_region::thread_tmp_1141_fu_34312_p2() {
    tmp_1141_fu_34312_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_1142_fu_34318_p3() {
    tmp_1142_fu_34318_p3 = (!tmp_1141_fu_34312_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1141_fu_34312_p2.read()[0].to_bool())? ref_patch_dx_6_63_18_fu_3782.read(): tmp_1140_fu_34304_p3.read());
}

void batch_align2D_region::thread_tmp_1143_fu_34326_p2() {
    tmp_1143_fu_34326_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_1144_fu_34332_p3() {
    tmp_1144_fu_34332_p3 = (!tmp_1143_fu_34326_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1143_fu_34326_p2.read()[0].to_bool())? ref_patch_dx_6_63_25_fu_3810.read(): tmp_1142_fu_34318_p3.read());
}

void batch_align2D_region::thread_tmp_1145_fu_34340_p2() {
    tmp_1145_fu_34340_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_1146_fu_34346_p3() {
    tmp_1146_fu_34346_p3 = (!tmp_1145_fu_34340_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1145_fu_34340_p2.read()[0].to_bool())? ref_patch_dx_6_63_32_fu_3838.read(): tmp_1144_fu_34332_p3.read());
}

void batch_align2D_region::thread_tmp_1147_fu_34354_p2() {
    tmp_1147_fu_34354_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_1148_fu_34360_p3() {
    tmp_1148_fu_34360_p3 = (!tmp_1147_fu_34354_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1147_fu_34354_p2.read()[0].to_bool())? ref_patch_dx_6_63_39_fu_3866.read(): tmp_1146_fu_34346_p3.read());
}

void batch_align2D_region::thread_tmp_1149_fu_34368_p2() {
    tmp_1149_fu_34368_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_114_cast_fu_12858_p1() {
    tmp_114_cast_fu_12858_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_1150_fu_34374_p3() {
    tmp_1150_fu_34374_p3 = (!tmp_1149_fu_34368_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1149_fu_34368_p2.read()[0].to_bool())? ref_patch_dx_6_63_46_fu_3894.read(): tmp_1148_fu_34360_p3.read());
}

void batch_align2D_region::thread_tmp_1151_fu_34382_p2() {
    tmp_1151_fu_34382_p2 = (!it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_3_fu_34293_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_1152_fu_34396_p3() {
    tmp_1152_fu_34396_p3 = (!tmp_1139_fu_34298_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1139_fu_34298_p2.read()[0].to_bool())? ref_patch_dy_6_63_4_fu_3982.read(): ref_patch_dy_6_63_60_fu_4206.read());
}

void batch_align2D_region::thread_tmp_1153_fu_34404_p3() {
    tmp_1153_fu_34404_p3 = (!tmp_1141_fu_34312_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1141_fu_34312_p2.read()[0].to_bool())? ref_patch_dy_6_63_12_fu_4014.read(): tmp_1152_fu_34396_p3.read());
}

void batch_align2D_region::thread_tmp_1154_fu_34412_p3() {
    tmp_1154_fu_34412_p3 = (!tmp_1143_fu_34326_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1143_fu_34326_p2.read()[0].to_bool())? ref_patch_dy_6_63_20_fu_4046.read(): tmp_1153_fu_34404_p3.read());
}

void batch_align2D_region::thread_tmp_1155_fu_34420_p3() {
    tmp_1155_fu_34420_p3 = (!tmp_1145_fu_34340_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1145_fu_34340_p2.read()[0].to_bool())? ref_patch_dy_6_63_28_fu_4078.read(): tmp_1154_fu_34412_p3.read());
}

void batch_align2D_region::thread_tmp_1156_fu_34428_p3() {
    tmp_1156_fu_34428_p3 = (!tmp_1147_fu_34354_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1147_fu_34354_p2.read()[0].to_bool())? ref_patch_dy_6_63_36_fu_4110.read(): tmp_1155_fu_34420_p3.read());
}

void batch_align2D_region::thread_tmp_1157_fu_34436_p3() {
    tmp_1157_fu_34436_p3 = (!tmp_1149_fu_34368_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1149_fu_34368_p2.read()[0].to_bool())? ref_patch_dy_6_63_44_fu_4142.read(): tmp_1156_fu_34428_p3.read());
}

void batch_align2D_region::thread_tmp_1158_fu_34481_p2() {
    tmp_1158_fu_34481_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1159_fu_34487_p3() {
    tmp_1159_fu_34487_p3 = (!tmp_1158_fu_34481_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1158_fu_34481_p2.read()[0].to_bool())? ref_patch_dx_6_63_12_fu_3758.read(): ref_patch_dx_6_63_61_fu_3954.read());
}

void batch_align2D_region::thread_tmp_115_fu_14546_p3() {
    tmp_115_fu_14546_p3 = (!tmp_38_reg_40311.read()[0].is_01())? sc_lv<32>(): ((tmp_38_reg_40311.read()[0].to_bool())? ref_patch_dy_0_63_33_fu_1026.read(): tmp_93_fu_14539_p3.read());
}

void batch_align2D_region::thread_tmp_1160_fu_34495_p2() {
    tmp_1160_fu_34495_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_1161_fu_34501_p3() {
    tmp_1161_fu_34501_p3 = (!tmp_1160_fu_34495_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1160_fu_34495_p2.read()[0].to_bool())? ref_patch_dx_6_63_19_fu_3786.read(): tmp_1159_fu_34487_p3.read());
}

void batch_align2D_region::thread_tmp_1162_fu_34509_p2() {
    tmp_1162_fu_34509_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1163_fu_34515_p3() {
    tmp_1163_fu_34515_p3 = (!tmp_1162_fu_34509_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1162_fu_34509_p2.read()[0].to_bool())? ref_patch_dx_6_63_26_fu_3814.read(): tmp_1161_fu_34501_p3.read());
}

void batch_align2D_region::thread_tmp_1164_fu_34523_p2() {
    tmp_1164_fu_34523_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_1165_fu_34529_p3() {
    tmp_1165_fu_34529_p3 = (!tmp_1164_fu_34523_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1164_fu_34523_p2.read()[0].to_bool())? ref_patch_dx_6_63_33_fu_3842.read(): tmp_1163_fu_34515_p3.read());
}

void batch_align2D_region::thread_tmp_1166_fu_34537_p2() {
    tmp_1166_fu_34537_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_1167_fu_34543_p3() {
    tmp_1167_fu_34543_p3 = (!tmp_1166_fu_34537_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1166_fu_34537_p2.read()[0].to_bool())? ref_patch_dx_6_63_40_fu_3870.read(): tmp_1165_fu_34529_p3.read());
}

void batch_align2D_region::thread_tmp_1168_fu_34551_p2() {
    tmp_1168_fu_34551_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1169_fu_34557_p3() {
    tmp_1169_fu_34557_p3 = (!tmp_1168_fu_34551_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1168_fu_34551_p2.read()[0].to_bool())? ref_patch_dx_6_63_47_fu_3898.read(): tmp_1167_fu_34543_p3.read());
}

void batch_align2D_region::thread_tmp_116_cast_fu_12839_p1() {
    tmp_116_cast_fu_12839_p1 = esl_zext<8,7>(tmp_100_fu_12834_p2.read());
}

void batch_align2D_region::thread_tmp_1170_fu_34565_p2() {
    tmp_1170_fu_34565_p2 = (!it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum6_4_fu_34476_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_1171_fu_34603_p3() {
    tmp_1171_fu_34603_p3 = (!tmp_1158_reg_50144.read()[0].is_01())? sc_lv<32>(): ((tmp_1158_reg_50144.read()[0].to_bool())? ref_patch_dy_6_63_5_fu_3986.read(): ref_patch_dy_6_63_61_fu_4210.read());
}

void batch_align2D_region::thread_tmp_1172_fu_34610_p3() {
    tmp_1172_fu_34610_p3 = (!tmp_1160_reg_50149.read()[0].is_01())? sc_lv<32>(): ((tmp_1160_reg_50149.read()[0].to_bool())? ref_patch_dy_6_63_13_fu_4018.read(): tmp_1171_fu_34603_p3.read());
}

void batch_align2D_region::thread_tmp_1173_fu_34617_p3() {
    tmp_1173_fu_34617_p3 = (!tmp_1162_reg_50154.read()[0].is_01())? sc_lv<32>(): ((tmp_1162_reg_50154.read()[0].to_bool())? ref_patch_dy_6_63_21_fu_4050.read(): tmp_1172_fu_34610_p3.read());
}

void batch_align2D_region::thread_tmp_1174_fu_34624_p3() {
    tmp_1174_fu_34624_p3 = (!tmp_1164_reg_50159.read()[0].is_01())? sc_lv<32>(): ((tmp_1164_reg_50159.read()[0].to_bool())? ref_patch_dy_6_63_29_fu_4082.read(): tmp_1173_fu_34617_p3.read());
}

void batch_align2D_region::thread_tmp_1175_fu_34631_p3() {
    tmp_1175_fu_34631_p3 = (!tmp_1166_reg_50164.read()[0].is_01())? sc_lv<32>(): ((tmp_1166_reg_50164.read()[0].to_bool())? ref_patch_dy_6_63_37_fu_4114.read(): tmp_1174_fu_34624_p3.read());
}

void batch_align2D_region::thread_tmp_1176_fu_34638_p3() {
    tmp_1176_fu_34638_p3 = (!tmp_1168_reg_50169.read()[0].is_01())? sc_lv<32>(): ((tmp_1168_reg_50169.read()[0].to_bool())? ref_patch_dy_6_63_45_fu_4146.read(): tmp_1175_fu_34631_p3.read());
}

void batch_align2D_region::thread_tmp_1177_fu_34705_p2() {
    tmp_1177_fu_34705_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1178_fu_34711_p3() {
    tmp_1178_fu_34711_p3 = (!tmp_1177_fu_34705_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1177_fu_34705_p2.read()[0].to_bool())? ref_patch_dx_6_63_13_fu_3762.read(): ref_patch_dx_6_63_62_fu_3958.read());
}

void batch_align2D_region::thread_tmp_1179_fu_34719_p2() {
    tmp_1179_fu_34719_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_117_1_fu_16036_p2() {
    tmp_117_1_fu_16036_p2 = (!tmp132_cast_fu_16032_p1.read().is_01() || !tmp_104_1_reg_41317.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp132_cast_fu_16032_p1.read()) + sc_biguint<7>(tmp_104_1_reg_41317.read()));
}

void batch_align2D_region::thread_tmp_117_2_fu_19248_p2() {
    tmp_117_2_fu_19248_p2 = (!tmp155_cast_fu_19244_p1.read().is_01() || !tmp_104_2_reg_42933.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp155_cast_fu_19244_p1.read()) + sc_biguint<7>(tmp_104_2_reg_42933.read()));
}

void batch_align2D_region::thread_tmp_117_3_fu_22460_p2() {
    tmp_117_3_fu_22460_p2 = (!tmp178_cast_fu_22456_p1.read().is_01() || !tmp_104_3_reg_44554.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp178_cast_fu_22456_p1.read()) + sc_biguint<7>(tmp_104_3_reg_44554.read()));
}

void batch_align2D_region::thread_tmp_117_4_fu_25672_p2() {
    tmp_117_4_fu_25672_p2 = (!tmp201_cast_fu_25668_p1.read().is_01() || !tmp_104_4_reg_46180.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp201_cast_fu_25668_p1.read()) + sc_biguint<7>(tmp_104_4_reg_46180.read()));
}

void batch_align2D_region::thread_tmp_117_5_fu_28884_p2() {
    tmp_117_5_fu_28884_p2 = (!tmp224_cast_fu_28880_p1.read().is_01() || !tmp_104_5_reg_47801.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp224_cast_fu_28880_p1.read()) + sc_biguint<7>(tmp_104_5_reg_47801.read()));
}

void batch_align2D_region::thread_tmp_117_6_fu_32096_p2() {
    tmp_117_6_fu_32096_p2 = (!tmp247_cast_fu_32092_p1.read().is_01() || !tmp_104_6_reg_49427.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp247_cast_fu_32092_p1.read()) + sc_biguint<7>(tmp_104_6_reg_49427.read()));
}

void batch_align2D_region::thread_tmp_117_7_fu_35309_p2() {
    tmp_117_7_fu_35309_p2 = (!tmp270_cast_fu_35305_p1.read().is_01() || !tmp_104_7_reg_51037.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp270_cast_fu_35305_p1.read()) + sc_biguint<7>(tmp_104_7_reg_51037.read()));
}

void batch_align2D_region::thread_tmp_117_fu_13719_p1() {
    tmp_117_fu_13719_p1 = esl_zext<32,8>(px_r_0_i_reg_7413.read());
}

void batch_align2D_region::thread_tmp_1180_fu_34725_p3() {
    tmp_1180_fu_34725_p3 = (!tmp_1179_fu_34719_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1179_fu_34719_p2.read()[0].to_bool())? ref_patch_dx_6_63_20_fu_3790.read(): tmp_1178_fu_34711_p3.read());
}

void batch_align2D_region::thread_tmp_1181_fu_34733_p2() {
    tmp_1181_fu_34733_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1182_fu_34739_p3() {
    tmp_1182_fu_34739_p3 = (!tmp_1181_fu_34733_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1181_fu_34733_p2.read()[0].to_bool())? ref_patch_dx_6_63_27_fu_3818.read(): tmp_1180_fu_34725_p3.read());
}

void batch_align2D_region::thread_tmp_1183_fu_34747_p2() {
    tmp_1183_fu_34747_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_1184_fu_34753_p3() {
    tmp_1184_fu_34753_p3 = (!tmp_1183_fu_34747_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1183_fu_34747_p2.read()[0].to_bool())? ref_patch_dx_6_63_34_fu_3846.read(): tmp_1182_fu_34739_p3.read());
}

void batch_align2D_region::thread_tmp_1185_fu_34761_p2() {
    tmp_1185_fu_34761_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_1186_fu_34767_p3() {
    tmp_1186_fu_34767_p3 = (!tmp_1185_fu_34761_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1185_fu_34761_p2.read()[0].to_bool())? ref_patch_dx_6_63_41_fu_3874.read(): tmp_1184_fu_34753_p3.read());
}

void batch_align2D_region::thread_tmp_1187_fu_34775_p2() {
    tmp_1187_fu_34775_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1188_fu_34781_p3() {
    tmp_1188_fu_34781_p3 = (!tmp_1187_fu_34775_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1187_fu_34775_p2.read()[0].to_bool())? ref_patch_dx_6_63_48_fu_3902.read(): tmp_1186_fu_34767_p3.read());
}

void batch_align2D_region::thread_tmp_1189_fu_34789_p2() {
    tmp_1189_fu_34789_p2 = (!it_ref_dy_0_i_6_sum7_fu_34700_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_fu_34700_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_118_1_fu_16041_p1() {
    tmp_118_1_fu_16041_p1 = esl_zext<64,7>(tmp_117_1_fu_16036_p2.read());
}

void batch_align2D_region::thread_tmp_118_2_fu_19253_p1() {
    tmp_118_2_fu_19253_p1 = esl_zext<64,7>(tmp_117_2_fu_19248_p2.read());
}

void batch_align2D_region::thread_tmp_118_3_fu_22465_p1() {
    tmp_118_3_fu_22465_p1 = esl_zext<64,7>(tmp_117_3_fu_22460_p2.read());
}

void batch_align2D_region::thread_tmp_118_4_fu_25677_p1() {
    tmp_118_4_fu_25677_p1 = esl_zext<64,7>(tmp_117_4_fu_25672_p2.read());
}

void batch_align2D_region::thread_tmp_118_5_fu_28889_p1() {
    tmp_118_5_fu_28889_p1 = esl_zext<64,7>(tmp_117_5_fu_28884_p2.read());
}

void batch_align2D_region::thread_tmp_118_6_fu_32101_p1() {
    tmp_118_6_fu_32101_p1 = esl_zext<64,7>(tmp_117_6_fu_32096_p2.read());
}

void batch_align2D_region::thread_tmp_118_7_fu_35314_p1() {
    tmp_118_7_fu_35314_p1 = esl_zext<64,7>(tmp_117_7_fu_35309_p2.read());
}

void batch_align2D_region::thread_tmp_1190_fu_34803_p3() {
    tmp_1190_fu_34803_p3 = (!tmp_1177_fu_34705_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1177_fu_34705_p2.read()[0].to_bool())? ref_patch_dy_6_63_6_fu_3990.read(): ref_patch_dy_6_63_62_fu_4214.read());
}

void batch_align2D_region::thread_tmp_1191_fu_34811_p3() {
    tmp_1191_fu_34811_p3 = (!tmp_1179_fu_34719_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1179_fu_34719_p2.read()[0].to_bool())? ref_patch_dy_6_63_14_fu_4022.read(): tmp_1190_fu_34803_p3.read());
}

void batch_align2D_region::thread_tmp_1192_fu_34819_p3() {
    tmp_1192_fu_34819_p3 = (!tmp_1181_fu_34733_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1181_fu_34733_p2.read()[0].to_bool())? ref_patch_dy_6_63_22_fu_4054.read(): tmp_1191_fu_34811_p3.read());
}

void batch_align2D_region::thread_tmp_1193_fu_34827_p3() {
    tmp_1193_fu_34827_p3 = (!tmp_1183_fu_34747_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1183_fu_34747_p2.read()[0].to_bool())? ref_patch_dy_6_63_30_fu_4086.read(): tmp_1192_fu_34819_p3.read());
}

void batch_align2D_region::thread_tmp_1194_fu_34835_p3() {
    tmp_1194_fu_34835_p3 = (!tmp_1185_fu_34761_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1185_fu_34761_p2.read()[0].to_bool())? ref_patch_dy_6_63_38_fu_4118.read(): tmp_1193_fu_34827_p3.read());
}

void batch_align2D_region::thread_tmp_1195_fu_34843_p3() {
    tmp_1195_fu_34843_p3 = (!tmp_1187_fu_34775_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1187_fu_34775_p2.read()[0].to_bool())? ref_patch_dy_6_63_46_fu_4150.read(): tmp_1194_fu_34835_p3.read());
}

void batch_align2D_region::thread_tmp_1196_fu_34912_p2() {
    tmp_1196_fu_34912_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_1197_fu_34918_p3() {
    tmp_1197_fu_34918_p3 = (!tmp_1196_fu_34912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1196_fu_34912_p2.read()[0].to_bool())? ref_patch_dx_6_63_14_fu_3766.read(): ref_patch_dx_6_63_63_fu_3962.read());
}

void batch_align2D_region::thread_tmp_1198_fu_34926_p2() {
    tmp_1198_fu_34926_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1199_fu_34932_p3() {
    tmp_1199_fu_34932_p3 = (!tmp_1198_fu_34926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1198_fu_34926_p2.read()[0].to_bool())? ref_patch_dx_6_63_21_fu_3794.read(): tmp_1197_fu_34918_p3.read());
}

void batch_align2D_region::thread_tmp_119_1_cast_fu_16070_p1() {
    tmp_119_1_cast_fu_16070_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_119_2_cast_fu_19282_p1() {
    tmp_119_2_cast_fu_19282_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_119_3_cast_fu_22494_p1() {
    tmp_119_3_cast_fu_22494_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_119_4_cast_fu_25706_p1() {
    tmp_119_4_cast_fu_25706_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_119_5_cast_fu_28918_p1() {
    tmp_119_5_cast_fu_28918_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_119_6_cast_fu_32130_p1() {
    tmp_119_6_cast_fu_32130_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_119_7_cast_fu_35343_p1() {
    tmp_119_7_cast_fu_35343_p1 = esl_zext<9,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_119_cast_fu_12862_p1() {
    tmp_119_cast_fu_12862_p1 = esl_zext<9,8>(ref_patch_with_borde_7_q0.read());
}

void batch_align2D_region::thread_tmp_119_fu_13724_p1() {
    tmp_119_fu_13724_p1 = esl_zext<32,8>(py_r_0_i_reg_7423.read());
}

void batch_align2D_region::thread_tmp_1200_fu_34940_p2() {
    tmp_1200_fu_34940_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_1201_1_cast_fu_16051_p1() {
    tmp_1201_1_cast_fu_16051_p1 = esl_zext<8,7>(tmp_1201_1_fu_16046_p2.read());
}

void batch_align2D_region::thread_tmp_1201_1_fu_16046_p2() {
    tmp_1201_1_fu_16046_p2 = (tmp_104_1_reg_41317.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_2_cast_fu_19263_p1() {
    tmp_1201_2_cast_fu_19263_p1 = esl_zext<8,7>(tmp_1201_2_fu_19258_p2.read());
}

void batch_align2D_region::thread_tmp_1201_2_fu_19258_p2() {
    tmp_1201_2_fu_19258_p2 = (tmp_104_2_reg_42933.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_3_cast_fu_22475_p1() {
    tmp_1201_3_cast_fu_22475_p1 = esl_zext<8,7>(tmp_1201_3_fu_22470_p2.read());
}

void batch_align2D_region::thread_tmp_1201_3_fu_22470_p2() {
    tmp_1201_3_fu_22470_p2 = (tmp_104_3_reg_44554.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_4_cast_fu_25687_p1() {
    tmp_1201_4_cast_fu_25687_p1 = esl_zext<8,7>(tmp_1201_4_fu_25682_p2.read());
}

void batch_align2D_region::thread_tmp_1201_4_fu_25682_p2() {
    tmp_1201_4_fu_25682_p2 = (tmp_104_4_reg_46180.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_5_cast_fu_28899_p1() {
    tmp_1201_5_cast_fu_28899_p1 = esl_zext<8,7>(tmp_1201_5_fu_28894_p2.read());
}

void batch_align2D_region::thread_tmp_1201_5_fu_28894_p2() {
    tmp_1201_5_fu_28894_p2 = (tmp_104_5_reg_47801.read() | ap_const_lv7_1);
}

}

