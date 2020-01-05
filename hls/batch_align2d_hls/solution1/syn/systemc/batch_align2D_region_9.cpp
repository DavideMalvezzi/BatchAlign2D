#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_tmp_1201_6_cast_fu_32111_p1() {
    tmp_1201_6_cast_fu_32111_p1 = esl_zext<8,7>(tmp_1201_6_fu_32106_p2.read());
}

void batch_align2D_region::thread_tmp_1201_6_fu_32106_p2() {
    tmp_1201_6_fu_32106_p2 = (tmp_104_6_reg_49427.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_7_cast_fu_35324_p1() {
    tmp_1201_7_cast_fu_35324_p1 = esl_zext<8,7>(tmp_1201_7_fu_35319_p2.read());
}

void batch_align2D_region::thread_tmp_1201_7_fu_35319_p2() {
    tmp_1201_7_fu_35319_p2 = (tmp_104_7_reg_51037.read() | ap_const_lv7_1);
}

void batch_align2D_region::thread_tmp_1201_fu_34946_p3() {
    tmp_1201_fu_34946_p3 = (!tmp_1200_fu_34940_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1200_fu_34940_p2.read()[0].to_bool())? ref_patch_dx_6_63_28_fu_3822.read(): tmp_1199_fu_34932_p3.read());
}

void batch_align2D_region::thread_tmp_1202_fu_34954_p2() {
    tmp_1202_fu_34954_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1203_fu_34960_p3() {
    tmp_1203_fu_34960_p3 = (!tmp_1202_fu_34954_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1202_fu_34954_p2.read()[0].to_bool())? ref_patch_dx_6_63_35_fu_3850.read(): tmp_1201_fu_34946_p3.read());
}

void batch_align2D_region::thread_tmp_1204_fu_34968_p2() {
    tmp_1204_fu_34968_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1205_fu_34974_p3() {
    tmp_1205_fu_34974_p3 = (!tmp_1204_fu_34968_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1204_fu_34968_p2.read()[0].to_bool())? ref_patch_dx_6_63_42_fu_3878.read(): tmp_1203_fu_34960_p3.read());
}

void batch_align2D_region::thread_tmp_1206_fu_34982_p2() {
    tmp_1206_fu_34982_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_1207_fu_34988_p3() {
    tmp_1207_fu_34988_p3 = (!tmp_1206_fu_34982_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1206_fu_34982_p2.read()[0].to_bool())? ref_patch_dx_6_63_49_fu_3906.read(): tmp_1205_fu_34974_p3.read());
}

void batch_align2D_region::thread_tmp_1208_fu_34996_p2() {
    tmp_1208_fu_34996_p2 = (!it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_6_sum7_1_fu_34907_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1209_fu_35010_p3() {
    tmp_1209_fu_35010_p3 = (!tmp_1196_fu_34912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1196_fu_34912_p2.read()[0].to_bool())? ref_patch_dy_6_63_7_fu_3994.read(): ref_patch_dy_6_63_63_fu_4218.read());
}

void batch_align2D_region::thread_tmp_1210_fu_35018_p3() {
    tmp_1210_fu_35018_p3 = (!tmp_1198_fu_34926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1198_fu_34926_p2.read()[0].to_bool())? ref_patch_dy_6_63_15_fu_4026.read(): tmp_1209_fu_35010_p3.read());
}

void batch_align2D_region::thread_tmp_1211_fu_35026_p3() {
    tmp_1211_fu_35026_p3 = (!tmp_1200_fu_34940_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1200_fu_34940_p2.read()[0].to_bool())? ref_patch_dy_6_63_23_fu_4058.read(): tmp_1210_fu_35018_p3.read());
}

void batch_align2D_region::thread_tmp_1212_fu_35034_p3() {
    tmp_1212_fu_35034_p3 = (!tmp_1202_fu_34954_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1202_fu_34954_p2.read()[0].to_bool())? ref_patch_dy_6_63_31_fu_4090.read(): tmp_1211_fu_35026_p3.read());
}

void batch_align2D_region::thread_tmp_1213_fu_35042_p3() {
    tmp_1213_fu_35042_p3 = (!tmp_1204_fu_34968_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1204_fu_34968_p2.read()[0].to_bool())? ref_patch_dy_6_63_39_fu_4122.read(): tmp_1212_fu_35034_p3.read());
}

void batch_align2D_region::thread_tmp_1214_fu_35050_p3() {
    tmp_1214_fu_35050_p3 = (!tmp_1206_fu_34982_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1206_fu_34982_p2.read()[0].to_bool())? ref_patch_dy_6_63_47_fu_4154.read(): tmp_1213_fu_35042_p3.read());
}

void batch_align2D_region::thread_tmp_121_1_fu_16055_p2() {
    tmp_121_1_fu_16055_p2 = (!x_cast1_171_fu_16010_p1.read().is_01() || !tmp_1201_1_cast_fu_16051_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_cast1_171_fu_16010_p1.read()) + sc_biguint<8>(tmp_1201_1_cast_fu_16051_p1.read()));
}

void batch_align2D_region::thread_tmp_121_2_fu_19267_p2() {
    tmp_121_2_fu_19267_p2 = (!x_2_cast1_fu_19222_p1.read().is_01() || !tmp_1201_2_cast_fu_19263_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_2_cast1_fu_19222_p1.read()) + sc_biguint<8>(tmp_1201_2_cast_fu_19263_p1.read()));
}

void batch_align2D_region::thread_tmp_121_3_fu_22479_p2() {
    tmp_121_3_fu_22479_p2 = (!x_3_cast1_fu_22434_p1.read().is_01() || !tmp_1201_3_cast_fu_22475_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_3_cast1_fu_22434_p1.read()) + sc_biguint<8>(tmp_1201_3_cast_fu_22475_p1.read()));
}

void batch_align2D_region::thread_tmp_121_4_fu_25691_p2() {
    tmp_121_4_fu_25691_p2 = (!x_4_cast1_fu_25646_p1.read().is_01() || !tmp_1201_4_cast_fu_25687_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_4_cast1_fu_25646_p1.read()) + sc_biguint<8>(tmp_1201_4_cast_fu_25687_p1.read()));
}

void batch_align2D_region::thread_tmp_121_5_fu_28903_p2() {
    tmp_121_5_fu_28903_p2 = (!x_5_cast1_fu_28858_p1.read().is_01() || !tmp_1201_5_cast_fu_28899_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_5_cast1_fu_28858_p1.read()) + sc_biguint<8>(tmp_1201_5_cast_fu_28899_p1.read()));
}

void batch_align2D_region::thread_tmp_121_6_fu_32115_p2() {
    tmp_121_6_fu_32115_p2 = (!x_6_cast1_fu_32070_p1.read().is_01() || !tmp_1201_6_cast_fu_32111_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_6_cast1_fu_32070_p1.read()) + sc_biguint<8>(tmp_1201_6_cast_fu_32111_p1.read()));
}

void batch_align2D_region::thread_tmp_121_7_fu_35328_p2() {
    tmp_121_7_fu_35328_p2 = (!x_7_cast1_fu_35283_p1.read().is_01() || !tmp_1201_7_cast_fu_35324_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(x_7_cast1_fu_35283_p1.read()) + sc_biguint<8>(tmp_1201_7_cast_fu_35324_p1.read()));
}

void batch_align2D_region::thread_tmp_1225_fu_36762_p2() {
    tmp_1225_fu_36762_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1226_fu_36767_p3() {
    tmp_1226_fu_36767_p3 = (!tmp_1225_fu_36762_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1225_fu_36762_p2.read()[0].to_bool())? ref_patch_dy_7_63_fu_4478.read(): ref_patch_dy_7_63_56_fu_4702.read());
}

void batch_align2D_region::thread_tmp_1227_fu_36775_p2() {
    tmp_1227_fu_36775_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_1228_fu_36780_p3() {
    tmp_1228_fu_36780_p3 = (!tmp_1227_fu_36775_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1227_fu_36775_p2.read()[0].to_bool())? ref_patch_dy_7_63_8_fu_4510.read(): tmp_1226_fu_36767_p3.read());
}

void batch_align2D_region::thread_tmp_1229_fu_36788_p2() {
    tmp_1229_fu_36788_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_122_1_fu_16061_p1() {
    tmp_122_1_fu_16061_p1 = esl_zext<64,8>(tmp_121_1_fu_16055_p2.read());
}

void batch_align2D_region::thread_tmp_122_2_fu_19273_p1() {
    tmp_122_2_fu_19273_p1 = esl_zext<64,8>(tmp_121_2_fu_19267_p2.read());
}

void batch_align2D_region::thread_tmp_122_3_fu_22485_p1() {
    tmp_122_3_fu_22485_p1 = esl_zext<64,8>(tmp_121_3_fu_22479_p2.read());
}

void batch_align2D_region::thread_tmp_122_4_fu_25697_p1() {
    tmp_122_4_fu_25697_p1 = esl_zext<64,8>(tmp_121_4_fu_25691_p2.read());
}

void batch_align2D_region::thread_tmp_122_5_fu_28909_p1() {
    tmp_122_5_fu_28909_p1 = esl_zext<64,8>(tmp_121_5_fu_28903_p2.read());
}

void batch_align2D_region::thread_tmp_122_6_fu_32121_p1() {
    tmp_122_6_fu_32121_p1 = esl_zext<64,8>(tmp_121_6_fu_32115_p2.read());
}

void batch_align2D_region::thread_tmp_122_7_fu_35334_p1() {
    tmp_122_7_fu_35334_p1 = esl_zext<64,8>(tmp_121_7_fu_35328_p2.read());
}

void batch_align2D_region::thread_tmp_1230_fu_36793_p3() {
    tmp_1230_fu_36793_p3 = (!tmp_1229_fu_36788_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1229_fu_36788_p2.read()[0].to_bool())? ref_patch_dy_7_63_16_fu_4542.read(): tmp_1228_fu_36780_p3.read());
}

void batch_align2D_region::thread_tmp_1231_fu_36801_p2() {
    tmp_1231_fu_36801_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_1232_fu_36806_p3() {
    tmp_1232_fu_36806_p3 = (!tmp_1231_fu_36801_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1231_fu_36801_p2.read()[0].to_bool())? ref_patch_dy_7_63_24_fu_4574.read(): tmp_1230_fu_36793_p3.read());
}

void batch_align2D_region::thread_tmp_1233_fu_36814_p2() {
    tmp_1233_fu_36814_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_1234_fu_36819_p3() {
    tmp_1234_fu_36819_p3 = (!tmp_1233_fu_36814_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1233_fu_36814_p2.read()[0].to_bool())? ref_patch_dy_7_63_32_fu_4606.read(): tmp_1232_fu_36806_p3.read());
}

void batch_align2D_region::thread_tmp_1235_fu_36827_p2() {
    tmp_1235_fu_36827_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_1236_fu_36832_p3() {
    tmp_1236_fu_36832_p3 = (!tmp_1235_fu_36827_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1235_fu_36827_p2.read()[0].to_bool())? ref_patch_dy_7_63_40_fu_4638.read(): tmp_1234_fu_36819_p3.read());
}

void batch_align2D_region::thread_tmp_1237_fu_36840_p2() {
    tmp_1237_fu_36840_p2 = (!tmp_1499_reg_51222_pp19_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1499_reg_51222_pp19_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_1238_fu_36879_p2() {
    tmp_1238_fu_36879_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_1239_fu_36885_p3() {
    tmp_1239_fu_36885_p3 = (!tmp_1238_fu_36879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1238_fu_36879_p2.read()[0].to_bool())? ref_patch_dx_7_63_8_fu_4254.read(): ref_patch_dx_7_63_57_fu_4450.read());
}

void batch_align2D_region::thread_tmp_123_1_cast_fu_16074_p1() {
    tmp_123_1_cast_fu_16074_p1 = esl_zext<9,8>(ref_patch_with_borde_6_q0.read());
}

void batch_align2D_region::thread_tmp_123_2_cast_fu_19286_p1() {
    tmp_123_2_cast_fu_19286_p1 = esl_zext<9,8>(ref_patch_with_borde_5_q0.read());
}

void batch_align2D_region::thread_tmp_123_3_cast_fu_22498_p1() {
    tmp_123_3_cast_fu_22498_p1 = esl_zext<9,8>(ref_patch_with_borde_4_q0.read());
}

void batch_align2D_region::thread_tmp_123_4_cast_fu_25710_p1() {
    tmp_123_4_cast_fu_25710_p1 = esl_zext<9,8>(ref_patch_with_borde_3_q0.read());
}

void batch_align2D_region::thread_tmp_123_5_cast_fu_28922_p1() {
    tmp_123_5_cast_fu_28922_p1 = esl_zext<9,8>(ref_patch_with_borde_2_q0.read());
}

void batch_align2D_region::thread_tmp_123_6_cast_fu_32134_p1() {
    tmp_123_6_cast_fu_32134_p1 = esl_zext<9,8>(ref_patch_with_borde_1_q0.read());
}

void batch_align2D_region::thread_tmp_123_7_cast_fu_35347_p1() {
    tmp_123_7_cast_fu_35347_p1 = esl_zext<9,8>(ref_patch_with_borde_q0.read());
}

void batch_align2D_region::thread_tmp_1240_fu_36893_p2() {
    tmp_1240_fu_36893_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_1241_fu_36899_p3() {
    tmp_1241_fu_36899_p3 = (!tmp_1240_fu_36893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1240_fu_36893_p2.read()[0].to_bool())? ref_patch_dx_7_63_15_fu_4282.read(): tmp_1239_fu_36885_p3.read());
}

void batch_align2D_region::thread_tmp_1242_fu_36907_p2() {
    tmp_1242_fu_36907_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_1243_fu_36913_p3() {
    tmp_1243_fu_36913_p3 = (!tmp_1242_fu_36907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1242_fu_36907_p2.read()[0].to_bool())? ref_patch_dx_7_63_22_fu_4310.read(): tmp_1241_fu_36899_p3.read());
}

void batch_align2D_region::thread_tmp_1244_fu_36921_p2() {
    tmp_1244_fu_36921_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_1245_fu_36927_p3() {
    tmp_1245_fu_36927_p3 = (!tmp_1244_fu_36921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1244_fu_36921_p2.read()[0].to_bool())? ref_patch_dx_7_63_29_fu_4338.read(): tmp_1243_fu_36913_p3.read());
}

void batch_align2D_region::thread_tmp_1246_fu_36935_p2() {
    tmp_1246_fu_36935_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_1247_fu_36941_p3() {
    tmp_1247_fu_36941_p3 = (!tmp_1246_fu_36935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1246_fu_36935_p2.read()[0].to_bool())? ref_patch_dx_7_63_36_fu_4366.read(): tmp_1245_fu_36927_p3.read());
}

void batch_align2D_region::thread_tmp_1248_fu_36949_p2() {
    tmp_1248_fu_36949_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_1249_fu_36955_p3() {
    tmp_1249_fu_36955_p3 = (!tmp_1248_fu_36949_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1248_fu_36949_p2.read()[0].to_bool())? ref_patch_dx_7_63_43_fu_4394.read(): tmp_1247_fu_36941_p3.read());
}

void batch_align2D_region::thread_tmp_124_1_fu_16078_p2() {
    tmp_124_1_fu_16078_p2 = (!tmp_119_1_cast_fu_16070_p1.read().is_01() || !tmp_123_1_cast_fu_16074_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_1_cast_fu_16070_p1.read()) - sc_biguint<9>(tmp_123_1_cast_fu_16074_p1.read()));
}

void batch_align2D_region::thread_tmp_124_2_fu_19290_p2() {
    tmp_124_2_fu_19290_p2 = (!tmp_119_2_cast_fu_19282_p1.read().is_01() || !tmp_123_2_cast_fu_19286_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_2_cast_fu_19282_p1.read()) - sc_biguint<9>(tmp_123_2_cast_fu_19286_p1.read()));
}

void batch_align2D_region::thread_tmp_124_3_fu_22502_p2() {
    tmp_124_3_fu_22502_p2 = (!tmp_119_3_cast_fu_22494_p1.read().is_01() || !tmp_123_3_cast_fu_22498_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_3_cast_fu_22494_p1.read()) - sc_biguint<9>(tmp_123_3_cast_fu_22498_p1.read()));
}

void batch_align2D_region::thread_tmp_124_4_fu_25714_p2() {
    tmp_124_4_fu_25714_p2 = (!tmp_119_4_cast_fu_25706_p1.read().is_01() || !tmp_123_4_cast_fu_25710_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_4_cast_fu_25706_p1.read()) - sc_biguint<9>(tmp_123_4_cast_fu_25710_p1.read()));
}

void batch_align2D_region::thread_tmp_124_5_fu_28926_p2() {
    tmp_124_5_fu_28926_p2 = (!tmp_119_5_cast_fu_28918_p1.read().is_01() || !tmp_123_5_cast_fu_28922_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_5_cast_fu_28918_p1.read()) - sc_biguint<9>(tmp_123_5_cast_fu_28922_p1.read()));
}

void batch_align2D_region::thread_tmp_124_6_fu_32138_p2() {
    tmp_124_6_fu_32138_p2 = (!tmp_119_6_cast_fu_32130_p1.read().is_01() || !tmp_123_6_cast_fu_32134_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_6_cast_fu_32130_p1.read()) - sc_biguint<9>(tmp_123_6_cast_fu_32134_p1.read()));
}

void batch_align2D_region::thread_tmp_124_7_fu_35351_p2() {
    tmp_124_7_fu_35351_p2 = (!tmp_119_7_cast_fu_35343_p1.read().is_01() || !tmp_123_7_cast_fu_35347_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_119_7_cast_fu_35343_p1.read()) - sc_biguint<9>(tmp_123_7_cast_fu_35347_p1.read()));
}

void batch_align2D_region::thread_tmp_1250_fu_36963_p2() {
    tmp_1250_fu_36963_p2 = (!it_ref_dy_0_i_7_sum4_fu_36874_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_fu_36874_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_1251_fu_37003_p3() {
    tmp_1251_fu_37003_p3 = (!tmp_1238_reg_51637.read()[0].is_01())? sc_lv<32>(): ((tmp_1238_reg_51637.read()[0].to_bool())? ref_patch_dy_7_63_1_fu_4482.read(): ref_patch_dy_7_63_57_fu_4706.read());
}

void batch_align2D_region::thread_tmp_1252_fu_37010_p3() {
    tmp_1252_fu_37010_p3 = (!tmp_1240_reg_51642.read()[0].is_01())? sc_lv<32>(): ((tmp_1240_reg_51642.read()[0].to_bool())? ref_patch_dy_7_63_9_fu_4514.read(): tmp_1251_fu_37003_p3.read());
}

void batch_align2D_region::thread_tmp_1253_fu_37017_p3() {
    tmp_1253_fu_37017_p3 = (!tmp_1242_reg_51647.read()[0].is_01())? sc_lv<32>(): ((tmp_1242_reg_51647.read()[0].to_bool())? ref_patch_dy_7_63_17_fu_4546.read(): tmp_1252_fu_37010_p3.read());
}

void batch_align2D_region::thread_tmp_1254_fu_37024_p3() {
    tmp_1254_fu_37024_p3 = (!tmp_1244_reg_51652.read()[0].is_01())? sc_lv<32>(): ((tmp_1244_reg_51652.read()[0].to_bool())? ref_patch_dy_7_63_25_fu_4578.read(): tmp_1253_fu_37017_p3.read());
}

void batch_align2D_region::thread_tmp_1255_fu_37031_p3() {
    tmp_1255_fu_37031_p3 = (!tmp_1246_reg_51657.read()[0].is_01())? sc_lv<32>(): ((tmp_1246_reg_51657.read()[0].to_bool())? ref_patch_dy_7_63_33_fu_4610.read(): tmp_1254_fu_37024_p3.read());
}

void batch_align2D_region::thread_tmp_1256_fu_37038_p3() {
    tmp_1256_fu_37038_p3 = (!tmp_1248_reg_51662.read()[0].is_01())? sc_lv<32>(): ((tmp_1248_reg_51662.read()[0].to_bool())? ref_patch_dy_7_63_41_fu_4642.read(): tmp_1255_fu_37031_p3.read());
}

void batch_align2D_region::thread_tmp_1257_fu_37078_p2() {
    tmp_1257_fu_37078_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_1258_fu_37084_p3() {
    tmp_1258_fu_37084_p3 = (!tmp_1257_fu_37078_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1257_fu_37078_p2.read()[0].to_bool())? ref_patch_dx_7_63_9_fu_4258.read(): ref_patch_dx_7_63_58_fu_4454.read());
}

void batch_align2D_region::thread_tmp_1259_fu_37092_p2() {
    tmp_1259_fu_37092_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_125_fu_14553_p3() {
    tmp_125_fu_14553_p3 = (!tmp_40_reg_40316.read()[0].is_01())? sc_lv<32>(): ((tmp_40_reg_40316.read()[0].to_bool())? ref_patch_dy_0_63_41_fu_1058.read(): tmp_115_fu_14546_p3.read());
}

void batch_align2D_region::thread_tmp_1260_cast_fu_36252_p1() {
    tmp_1260_cast_fu_36252_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_7_phi_fu_10198_p4.read());
}

void batch_align2D_region::thread_tmp_1260_fu_37098_p3() {
    tmp_1260_fu_37098_p3 = (!tmp_1259_fu_37092_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1259_fu_37092_p2.read()[0].to_bool())? ref_patch_dx_7_63_16_fu_4286.read(): tmp_1258_fu_37084_p3.read());
}

void batch_align2D_region::thread_tmp_1261_fu_37106_p2() {
    tmp_1261_fu_37106_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_1262_fu_37112_p3() {
    tmp_1262_fu_37112_p3 = (!tmp_1261_fu_37106_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1261_fu_37106_p2.read()[0].to_bool())? ref_patch_dx_7_63_23_fu_4314.read(): tmp_1260_fu_37098_p3.read());
}

void batch_align2D_region::thread_tmp_1263_fu_37120_p2() {
    tmp_1263_fu_37120_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_1264_fu_37126_p3() {
    tmp_1264_fu_37126_p3 = (!tmp_1263_fu_37120_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1263_fu_37120_p2.read()[0].to_bool())? ref_patch_dx_7_63_30_fu_4342.read(): tmp_1262_fu_37112_p3.read());
}

void batch_align2D_region::thread_tmp_1265_fu_37134_p2() {
    tmp_1265_fu_37134_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_1266_fu_37140_p3() {
    tmp_1266_fu_37140_p3 = (!tmp_1265_fu_37134_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1265_fu_37134_p2.read()[0].to_bool())? ref_patch_dx_7_63_37_fu_4370.read(): tmp_1264_fu_37126_p3.read());
}

void batch_align2D_region::thread_tmp_1267_fu_37148_p2() {
    tmp_1267_fu_37148_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_1268_fu_37154_p3() {
    tmp_1268_fu_37154_p3 = (!tmp_1267_fu_37148_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1267_fu_37148_p2.read()[0].to_bool())? ref_patch_dx_7_63_44_fu_4398.read(): tmp_1266_fu_37140_p3.read());
}

void batch_align2D_region::thread_tmp_1269_fu_37162_p2() {
    tmp_1269_fu_37162_p2 = (!it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum4_1_fu_37073_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_1270_fu_37202_p3() {
    tmp_1270_fu_37202_p3 = (!tmp_1257_reg_51688.read()[0].is_01())? sc_lv<32>(): ((tmp_1257_reg_51688.read()[0].to_bool())? ref_patch_dy_7_63_2_fu_4486.read(): ref_patch_dy_7_63_58_fu_4710.read());
}

void batch_align2D_region::thread_tmp_1271_fu_37209_p3() {
    tmp_1271_fu_37209_p3 = (!tmp_1259_reg_51693.read()[0].is_01())? sc_lv<32>(): ((tmp_1259_reg_51693.read()[0].to_bool())? ref_patch_dy_7_63_10_fu_4518.read(): tmp_1270_fu_37202_p3.read());
}

void batch_align2D_region::thread_tmp_1272_fu_37216_p3() {
    tmp_1272_fu_37216_p3 = (!tmp_1261_reg_51698.read()[0].is_01())? sc_lv<32>(): ((tmp_1261_reg_51698.read()[0].to_bool())? ref_patch_dy_7_63_18_fu_4550.read(): tmp_1271_fu_37209_p3.read());
}

void batch_align2D_region::thread_tmp_1273_fu_37223_p3() {
    tmp_1273_fu_37223_p3 = (!tmp_1263_reg_51703.read()[0].is_01())? sc_lv<32>(): ((tmp_1263_reg_51703.read()[0].to_bool())? ref_patch_dy_7_63_26_fu_4582.read(): tmp_1272_fu_37216_p3.read());
}

void batch_align2D_region::thread_tmp_1274_fu_37230_p3() {
    tmp_1274_fu_37230_p3 = (!tmp_1265_reg_51708.read()[0].is_01())? sc_lv<32>(): ((tmp_1265_reg_51708.read()[0].to_bool())? ref_patch_dy_7_63_34_fu_4614.read(): tmp_1273_fu_37223_p3.read());
}

void batch_align2D_region::thread_tmp_1275_fu_37237_p3() {
    tmp_1275_fu_37237_p3 = (!tmp_1267_reg_51713.read()[0].is_01())? sc_lv<32>(): ((tmp_1267_reg_51713.read()[0].to_bool())? ref_patch_dy_7_63_42_fu_4646.read(): tmp_1274_fu_37230_p3.read());
}

void batch_align2D_region::thread_tmp_1276_fu_37304_p2() {
    tmp_1276_fu_37304_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_1277_fu_37310_p3() {
    tmp_1277_fu_37310_p3 = (!tmp_1276_fu_37304_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1276_fu_37304_p2.read()[0].to_bool())? ref_patch_dx_7_63_10_fu_4262.read(): ref_patch_dx_7_63_59_fu_4458.read());
}

void batch_align2D_region::thread_tmp_1278_fu_37318_p2() {
    tmp_1278_fu_37318_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_1279_fu_37324_p3() {
    tmp_1279_fu_37324_p3 = (!tmp_1278_fu_37318_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1278_fu_37318_p2.read()[0].to_bool())? ref_patch_dx_7_63_17_fu_4290.read(): tmp_1277_fu_37310_p3.read());
}

void batch_align2D_region::thread_tmp_1280_fu_37332_p2() {
    tmp_1280_fu_37332_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_1281_fu_37338_p3() {
    tmp_1281_fu_37338_p3 = (!tmp_1280_fu_37332_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1280_fu_37332_p2.read()[0].to_bool())? ref_patch_dx_7_63_24_fu_4318.read(): tmp_1279_fu_37324_p3.read());
}

void batch_align2D_region::thread_tmp_1282_fu_37346_p2() {
    tmp_1282_fu_37346_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_1283_fu_37352_p3() {
    tmp_1283_fu_37352_p3 = (!tmp_1282_fu_37346_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1282_fu_37346_p2.read()[0].to_bool())? ref_patch_dx_7_63_31_fu_4346.read(): tmp_1281_fu_37338_p3.read());
}

void batch_align2D_region::thread_tmp_1284_fu_37360_p2() {
    tmp_1284_fu_37360_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_1285_fu_37366_p3() {
    tmp_1285_fu_37366_p3 = (!tmp_1284_fu_37360_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1284_fu_37360_p2.read()[0].to_bool())? ref_patch_dx_7_63_38_fu_4374.read(): tmp_1283_fu_37352_p3.read());
}

void batch_align2D_region::thread_tmp_1286_fu_37374_p2() {
    tmp_1286_fu_37374_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_1287_fu_37380_p3() {
    tmp_1287_fu_37380_p3 = (!tmp_1286_fu_37374_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1286_fu_37374_p2.read()[0].to_bool())? ref_patch_dx_7_63_45_fu_4402.read(): tmp_1285_fu_37366_p3.read());
}

void batch_align2D_region::thread_tmp_1288_fu_37388_p2() {
    tmp_1288_fu_37388_p2 = (!it_ref_dy_0_i_7_sum5_fu_37299_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_fu_37299_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_1289_fu_37402_p3() {
    tmp_1289_fu_37402_p3 = (!tmp_1276_fu_37304_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1276_fu_37304_p2.read()[0].to_bool())? ref_patch_dy_7_63_3_fu_4490.read(): ref_patch_dy_7_63_59_fu_4714.read());
}

void batch_align2D_region::thread_tmp_1290_fu_37410_p3() {
    tmp_1290_fu_37410_p3 = (!tmp_1278_fu_37318_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1278_fu_37318_p2.read()[0].to_bool())? ref_patch_dy_7_63_11_fu_4522.read(): tmp_1289_fu_37402_p3.read());
}

void batch_align2D_region::thread_tmp_1291_fu_37418_p3() {
    tmp_1291_fu_37418_p3 = (!tmp_1280_fu_37332_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1280_fu_37332_p2.read()[0].to_bool())? ref_patch_dy_7_63_19_fu_4554.read(): tmp_1290_fu_37410_p3.read());
}

void batch_align2D_region::thread_tmp_1292_fu_37426_p3() {
    tmp_1292_fu_37426_p3 = (!tmp_1282_fu_37346_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1282_fu_37346_p2.read()[0].to_bool())? ref_patch_dy_7_63_27_fu_4586.read(): tmp_1291_fu_37418_p3.read());
}

void batch_align2D_region::thread_tmp_1293_fu_37434_p3() {
    tmp_1293_fu_37434_p3 = (!tmp_1284_fu_37360_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1284_fu_37360_p2.read()[0].to_bool())? ref_patch_dy_7_63_35_fu_4618.read(): tmp_1292_fu_37426_p3.read());
}

void batch_align2D_region::thread_tmp_1294_fu_37442_p3() {
    tmp_1294_fu_37442_p3 = (!tmp_1286_fu_37374_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1286_fu_37374_p2.read()[0].to_bool())? ref_patch_dy_7_63_43_fu_4650.read(): tmp_1293_fu_37434_p3.read());
}

void batch_align2D_region::thread_tmp_1295_fu_37511_p2() {
    tmp_1295_fu_37511_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_1296_fu_37517_p3() {
    tmp_1296_fu_37517_p3 = (!tmp_1295_fu_37511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1295_fu_37511_p2.read()[0].to_bool())? ref_patch_dx_7_63_11_fu_4266.read(): ref_patch_dx_7_63_60_fu_4462.read());
}

void batch_align2D_region::thread_tmp_1297_fu_37525_p2() {
    tmp_1297_fu_37525_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_1298_fu_37531_p3() {
    tmp_1298_fu_37531_p3 = (!tmp_1297_fu_37525_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1297_fu_37525_p2.read()[0].to_bool())? ref_patch_dx_7_63_18_fu_4294.read(): tmp_1296_fu_37517_p3.read());
}

void batch_align2D_region::thread_tmp_1299_fu_37539_p2() {
    tmp_1299_fu_37539_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_1300_fu_37545_p3() {
    tmp_1300_fu_37545_p3 = (!tmp_1299_fu_37539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1299_fu_37539_p2.read()[0].to_bool())? ref_patch_dx_7_63_25_fu_4322.read(): tmp_1298_fu_37531_p3.read());
}

void batch_align2D_region::thread_tmp_1301_fu_37553_p2() {
    tmp_1301_fu_37553_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_1302_fu_37559_p3() {
    tmp_1302_fu_37559_p3 = (!tmp_1301_fu_37553_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1301_fu_37553_p2.read()[0].to_bool())? ref_patch_dx_7_63_32_fu_4350.read(): tmp_1300_fu_37545_p3.read());
}

void batch_align2D_region::thread_tmp_1303_fu_37567_p2() {
    tmp_1303_fu_37567_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_1304_fu_37573_p3() {
    tmp_1304_fu_37573_p3 = (!tmp_1303_fu_37567_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1303_fu_37567_p2.read()[0].to_bool())? ref_patch_dx_7_63_39_fu_4378.read(): tmp_1302_fu_37559_p3.read());
}

void batch_align2D_region::thread_tmp_1305_fu_37581_p2() {
    tmp_1305_fu_37581_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_1306_fu_37587_p3() {
    tmp_1306_fu_37587_p3 = (!tmp_1305_fu_37581_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1305_fu_37581_p2.read()[0].to_bool())? ref_patch_dx_7_63_46_fu_4406.read(): tmp_1304_fu_37573_p3.read());
}

void batch_align2D_region::thread_tmp_1307_fu_37595_p2() {
    tmp_1307_fu_37595_p2 = (!it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_1_fu_37506_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_1308_fu_37609_p3() {
    tmp_1308_fu_37609_p3 = (!tmp_1295_fu_37511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1295_fu_37511_p2.read()[0].to_bool())? ref_patch_dy_7_63_4_fu_4494.read(): ref_patch_dy_7_63_60_fu_4718.read());
}

void batch_align2D_region::thread_tmp_1309_fu_37617_p3() {
    tmp_1309_fu_37617_p3 = (!tmp_1297_fu_37525_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1297_fu_37525_p2.read()[0].to_bool())? ref_patch_dy_7_63_12_fu_4526.read(): tmp_1308_fu_37609_p3.read());
}

void batch_align2D_region::thread_tmp_1310_fu_37625_p3() {
    tmp_1310_fu_37625_p3 = (!tmp_1299_fu_37539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1299_fu_37539_p2.read()[0].to_bool())? ref_patch_dy_7_63_20_fu_4558.read(): tmp_1309_fu_37617_p3.read());
}

void batch_align2D_region::thread_tmp_1311_fu_37633_p3() {
    tmp_1311_fu_37633_p3 = (!tmp_1301_fu_37553_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1301_fu_37553_p2.read()[0].to_bool())? ref_patch_dy_7_63_28_fu_4590.read(): tmp_1310_fu_37625_p3.read());
}

void batch_align2D_region::thread_tmp_1312_fu_37641_p3() {
    tmp_1312_fu_37641_p3 = (!tmp_1303_fu_37567_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1303_fu_37567_p2.read()[0].to_bool())? ref_patch_dy_7_63_36_fu_4622.read(): tmp_1311_fu_37633_p3.read());
}

void batch_align2D_region::thread_tmp_1313_fu_37649_p3() {
    tmp_1313_fu_37649_p3 = (!tmp_1305_fu_37581_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1305_fu_37581_p2.read()[0].to_bool())? ref_patch_dy_7_63_44_fu_4654.read(): tmp_1312_fu_37641_p3.read());
}

void batch_align2D_region::thread_tmp_1314_fu_37691_p2() {
    tmp_1314_fu_37691_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1315_fu_37697_p3() {
    tmp_1315_fu_37697_p3 = (!tmp_1314_fu_37691_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1314_fu_37691_p2.read()[0].to_bool())? ref_patch_dx_7_63_12_fu_4270.read(): ref_patch_dx_7_63_61_fu_4466.read());
}

void batch_align2D_region::thread_tmp_1316_fu_37705_p2() {
    tmp_1316_fu_37705_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_1317_fu_37711_p3() {
    tmp_1317_fu_37711_p3 = (!tmp_1316_fu_37705_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1316_fu_37705_p2.read()[0].to_bool())? ref_patch_dx_7_63_19_fu_4298.read(): tmp_1315_fu_37697_p3.read());
}

void batch_align2D_region::thread_tmp_1318_fu_37719_p2() {
    tmp_1318_fu_37719_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1319_fu_37725_p3() {
    tmp_1319_fu_37725_p3 = (!tmp_1318_fu_37719_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1318_fu_37719_p2.read()[0].to_bool())? ref_patch_dx_7_63_26_fu_4326.read(): tmp_1317_fu_37711_p3.read());
}

void batch_align2D_region::thread_tmp_131_fu_13771_p2() {
    tmp_131_fu_13771_p2 = (!tmp_10_cast_fu_13767_p1.read().is_01() || !tmp_1387_reg_39857.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_10_cast_fu_13767_p1.read()) + sc_biguint<7>(tmp_1387_reg_39857.read()));
}

void batch_align2D_region::thread_tmp_1320_fu_37733_p2() {
    tmp_1320_fu_37733_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_1321_fu_37739_p3() {
    tmp_1321_fu_37739_p3 = (!tmp_1320_fu_37733_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1320_fu_37733_p2.read()[0].to_bool())? ref_patch_dx_7_63_33_fu_4354.read(): tmp_1319_fu_37725_p3.read());
}

void batch_align2D_region::thread_tmp_1322_fu_37747_p2() {
    tmp_1322_fu_37747_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_1323_fu_37753_p3() {
    tmp_1323_fu_37753_p3 = (!tmp_1322_fu_37747_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1322_fu_37747_p2.read()[0].to_bool())? ref_patch_dx_7_63_40_fu_4382.read(): tmp_1321_fu_37739_p3.read());
}

void batch_align2D_region::thread_tmp_1324_fu_37761_p2() {
    tmp_1324_fu_37761_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1325_fu_37767_p3() {
    tmp_1325_fu_37767_p3 = (!tmp_1324_fu_37761_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1324_fu_37761_p2.read()[0].to_bool())? ref_patch_dx_7_63_47_fu_4410.read(): tmp_1323_fu_37753_p3.read());
}

void batch_align2D_region::thread_tmp_1326_fu_37775_p2() {
    tmp_1326_fu_37775_p2 = (!it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_2_fu_37686_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_1327_fu_37815_p3() {
    tmp_1327_fu_37815_p3 = (!tmp_1314_reg_51766.read()[0].is_01())? sc_lv<32>(): ((tmp_1314_reg_51766.read()[0].to_bool())? ref_patch_dy_7_63_5_fu_4498.read(): ref_patch_dy_7_63_61_fu_4722.read());
}

void batch_align2D_region::thread_tmp_1328_fu_37822_p3() {
    tmp_1328_fu_37822_p3 = (!tmp_1316_reg_51771.read()[0].is_01())? sc_lv<32>(): ((tmp_1316_reg_51771.read()[0].to_bool())? ref_patch_dy_7_63_13_fu_4530.read(): tmp_1327_fu_37815_p3.read());
}

void batch_align2D_region::thread_tmp_1329_fu_37829_p3() {
    tmp_1329_fu_37829_p3 = (!tmp_1318_reg_51776.read()[0].is_01())? sc_lv<32>(): ((tmp_1318_reg_51776.read()[0].to_bool())? ref_patch_dy_7_63_21_fu_4562.read(): tmp_1328_fu_37822_p3.read());
}

void batch_align2D_region::thread_tmp_132_fu_13776_p3() {
    tmp_132_fu_13776_p3 = esl_concat<7,6>(tmp_131_fu_13771_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1330_fu_37836_p3() {
    tmp_1330_fu_37836_p3 = (!tmp_1320_reg_51781.read()[0].is_01())? sc_lv<32>(): ((tmp_1320_reg_51781.read()[0].to_bool())? ref_patch_dy_7_63_29_fu_4594.read(): tmp_1329_fu_37829_p3.read());
}

void batch_align2D_region::thread_tmp_1331_fu_37843_p3() {
    tmp_1331_fu_37843_p3 = (!tmp_1322_reg_51786.read()[0].is_01())? sc_lv<32>(): ((tmp_1322_reg_51786.read()[0].to_bool())? ref_patch_dy_7_63_37_fu_4626.read(): tmp_1330_fu_37836_p3.read());
}

void batch_align2D_region::thread_tmp_1332_fu_37850_p3() {
    tmp_1332_fu_37850_p3 = (!tmp_1324_reg_51791.read()[0].is_01())? sc_lv<32>(): ((tmp_1324_reg_51791.read()[0].to_bool())? ref_patch_dy_7_63_45_fu_4658.read(): tmp_1331_fu_37843_p3.read());
}

void batch_align2D_region::thread_tmp_1333_fu_37917_p2() {
    tmp_1333_fu_37917_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1334_fu_37923_p3() {
    tmp_1334_fu_37923_p3 = (!tmp_1333_fu_37917_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1333_fu_37917_p2.read()[0].to_bool())? ref_patch_dx_7_63_13_fu_4274.read(): ref_patch_dx_7_63_62_fu_4470.read());
}

void batch_align2D_region::thread_tmp_1335_fu_37931_p2() {
    tmp_1335_fu_37931_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_1336_fu_37937_p3() {
    tmp_1336_fu_37937_p3 = (!tmp_1335_fu_37931_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1335_fu_37931_p2.read()[0].to_bool())? ref_patch_dx_7_63_20_fu_4302.read(): tmp_1334_fu_37923_p3.read());
}

void batch_align2D_region::thread_tmp_1337_fu_37945_p2() {
    tmp_1337_fu_37945_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1338_fu_37951_p3() {
    tmp_1338_fu_37951_p3 = (!tmp_1337_fu_37945_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1337_fu_37945_p2.read()[0].to_bool())? ref_patch_dx_7_63_27_fu_4330.read(): tmp_1336_fu_37937_p3.read());
}

void batch_align2D_region::thread_tmp_1339_fu_37959_p2() {
    tmp_1339_fu_37959_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_133_fu_13784_p2() {
    tmp_133_fu_13784_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_132_fu_13776_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_132_fu_13776_p3.read()));
}

void batch_align2D_region::thread_tmp_1340_fu_37965_p3() {
    tmp_1340_fu_37965_p3 = (!tmp_1339_fu_37959_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1339_fu_37959_p2.read()[0].to_bool())? ref_patch_dx_7_63_34_fu_4358.read(): tmp_1338_fu_37951_p3.read());
}

void batch_align2D_region::thread_tmp_1341_fu_37973_p2() {
    tmp_1341_fu_37973_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_1342_fu_37979_p3() {
    tmp_1342_fu_37979_p3 = (!tmp_1341_fu_37973_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1341_fu_37973_p2.read()[0].to_bool())? ref_patch_dx_7_63_41_fu_4386.read(): tmp_1340_fu_37965_p3.read());
}

void batch_align2D_region::thread_tmp_1343_fu_37987_p2() {
    tmp_1343_fu_37987_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1344_fu_37993_p3() {
    tmp_1344_fu_37993_p3 = (!tmp_1343_fu_37987_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1343_fu_37987_p2.read()[0].to_bool())? ref_patch_dx_7_63_48_fu_4414.read(): tmp_1342_fu_37979_p3.read());
}

void batch_align2D_region::thread_tmp_1345_fu_38001_p2() {
    tmp_1345_fu_38001_p2 = (!it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_3_fu_37912_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_1346_fu_38015_p3() {
    tmp_1346_fu_38015_p3 = (!tmp_1333_fu_37917_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1333_fu_37917_p2.read()[0].to_bool())? ref_patch_dy_7_63_6_fu_4502.read(): ref_patch_dy_7_63_62_fu_4726.read());
}

void batch_align2D_region::thread_tmp_1347_fu_38023_p3() {
    tmp_1347_fu_38023_p3 = (!tmp_1335_fu_37931_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1335_fu_37931_p2.read()[0].to_bool())? ref_patch_dy_7_63_14_fu_4534.read(): tmp_1346_fu_38015_p3.read());
}

void batch_align2D_region::thread_tmp_1348_fu_38031_p3() {
    tmp_1348_fu_38031_p3 = (!tmp_1337_fu_37945_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1337_fu_37945_p2.read()[0].to_bool())? ref_patch_dy_7_63_22_fu_4566.read(): tmp_1347_fu_38023_p3.read());
}

void batch_align2D_region::thread_tmp_1349_fu_38039_p3() {
    tmp_1349_fu_38039_p3 = (!tmp_1339_fu_37959_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1339_fu_37959_p2.read()[0].to_bool())? ref_patch_dy_7_63_30_fu_4598.read(): tmp_1348_fu_38031_p3.read());
}

void batch_align2D_region::thread_tmp_134_1_fu_16779_p2() {
    tmp_134_1_fu_16779_p2 = (!iter_0_i_1_reg_7789.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_1_reg_7789.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_2_fu_19991_p2() {
    tmp_134_2_fu_19991_p2 = (!iter_0_i_2_reg_8177.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_2_reg_8177.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_3_fu_23203_p2() {
    tmp_134_3_fu_23203_p2 = (!iter_0_i_3_reg_8565.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_3_reg_8565.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_4_fu_26415_p2() {
    tmp_134_4_fu_26415_p2 = (!iter_0_i_4_reg_8953.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_4_reg_8953.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_5_fu_29627_p2() {
    tmp_134_5_fu_29627_p2 = (!iter_0_i_5_reg_9341.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_5_reg_9341.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_6_fu_32839_p2() {
    tmp_134_6_fu_32839_p2 = (!iter_0_i_6_reg_9727.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_6_reg_9727.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_7_fu_36052_p2() {
    tmp_134_7_fu_36052_p2 = (!iter_0_i_7_reg_10115.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_7_reg_10115.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_134_fu_13816_p2() {
    tmp_134_fu_13816_p2 = (!p_shl9_cast_fu_13812_p1.read().is_01() || !p_shl8_cast_fu_13802_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_cast_fu_13812_p1.read()) + sc_biguint<7>(p_shl8_cast_fu_13802_p1.read()));
}

void batch_align2D_region::thread_tmp_1350_fu_38047_p3() {
    tmp_1350_fu_38047_p3 = (!tmp_1341_fu_37973_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1341_fu_37973_p2.read()[0].to_bool())? ref_patch_dy_7_63_38_fu_4630.read(): tmp_1349_fu_38039_p3.read());
}

void batch_align2D_region::thread_tmp_1351_fu_38055_p3() {
    tmp_1351_fu_38055_p3 = (!tmp_1343_fu_37987_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1343_fu_37987_p2.read()[0].to_bool())? ref_patch_dy_7_63_46_fu_4662.read(): tmp_1350_fu_38047_p3.read());
}

void batch_align2D_region::thread_tmp_1352_fu_38124_p2() {
    tmp_1352_fu_38124_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_1353_fu_38130_p3() {
    tmp_1353_fu_38130_p3 = (!tmp_1352_fu_38124_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1352_fu_38124_p2.read()[0].to_bool())? ref_patch_dx_7_63_14_fu_4278.read(): ref_patch_dx_7_63_63_fu_4474.read());
}

void batch_align2D_region::thread_tmp_1354_fu_38138_p2() {
    tmp_1354_fu_38138_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1355_fu_38144_p3() {
    tmp_1355_fu_38144_p3 = (!tmp_1354_fu_38138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1354_fu_38138_p2.read()[0].to_bool())? ref_patch_dx_7_63_21_fu_4306.read(): tmp_1353_fu_38130_p3.read());
}

void batch_align2D_region::thread_tmp_1356_fu_38152_p2() {
    tmp_1356_fu_38152_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_1357_fu_38158_p3() {
    tmp_1357_fu_38158_p3 = (!tmp_1356_fu_38152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1356_fu_38152_p2.read()[0].to_bool())? ref_patch_dx_7_63_28_fu_4334.read(): tmp_1355_fu_38144_p3.read());
}

void batch_align2D_region::thread_tmp_1358_fu_38166_p2() {
    tmp_1358_fu_38166_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1359_fu_38172_p3() {
    tmp_1359_fu_38172_p3 = (!tmp_1358_fu_38166_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1358_fu_38166_p2.read()[0].to_bool())? ref_patch_dx_7_63_35_fu_4362.read(): tmp_1357_fu_38158_p3.read());
}

void batch_align2D_region::thread_tmp_135_1_fu_16791_p2() {
    tmp_135_1_fu_16791_p2 = (!iter_0_i_1_reg_7789.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_1_reg_7789.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_2_fu_20003_p2() {
    tmp_135_2_fu_20003_p2 = (!iter_0_i_2_reg_8177.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_2_reg_8177.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_3_fu_23215_p2() {
    tmp_135_3_fu_23215_p2 = (!iter_0_i_3_reg_8565.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_3_reg_8565.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_4_fu_26427_p2() {
    tmp_135_4_fu_26427_p2 = (!iter_0_i_4_reg_8953.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_4_reg_8953.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_5_fu_29639_p2() {
    tmp_135_5_fu_29639_p2 = (!iter_0_i_5_reg_9341.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_5_reg_9341.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_6_fu_32851_p2() {
    tmp_135_6_fu_32851_p2 = (!iter_0_i_6_reg_9727.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_6_reg_9727.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_7_fu_36064_p2() {
    tmp_135_7_fu_36064_p2 = (!iter_0_i_7_reg_10115.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_7_reg_10115.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_135_demorgan_fu_13677_p2() {
    tmp_135_demorgan_fu_13677_p2 = (tmp_i_i4_fu_13665_p2.read() & tmp_1_i_i5_fu_13671_p2.read());
}

void batch_align2D_region::thread_tmp_135_fu_13909_p1() {
    tmp_135_fu_13909_p1 = esl_zext<32,8>(reg_11384.read());
}

void batch_align2D_region::thread_tmp_1360_fu_38180_p2() {
    tmp_1360_fu_38180_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1361_fu_38186_p3() {
    tmp_1361_fu_38186_p3 = (!tmp_1360_fu_38180_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1360_fu_38180_p2.read()[0].to_bool())? ref_patch_dx_7_63_42_fu_4390.read(): tmp_1359_fu_38172_p3.read());
}

void batch_align2D_region::thread_tmp_1362_fu_38194_p2() {
    tmp_1362_fu_38194_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_1363_fu_38200_p3() {
    tmp_1363_fu_38200_p3 = (!tmp_1362_fu_38194_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1362_fu_38194_p2.read()[0].to_bool())? ref_patch_dx_7_63_49_fu_4418.read(): tmp_1361_fu_38186_p3.read());
}

void batch_align2D_region::thread_tmp_1364_fu_38208_p2() {
    tmp_1364_fu_38208_p2 = (!it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_7_sum5_4_fu_38119_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1365_fu_38222_p3() {
    tmp_1365_fu_38222_p3 = (!tmp_1352_fu_38124_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1352_fu_38124_p2.read()[0].to_bool())? ref_patch_dy_7_63_7_fu_4506.read(): ref_patch_dy_7_63_63_fu_4730.read());
}

void batch_align2D_region::thread_tmp_1366_fu_38230_p3() {
    tmp_1366_fu_38230_p3 = (!tmp_1354_fu_38138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1354_fu_38138_p2.read()[0].to_bool())? ref_patch_dy_7_63_15_fu_4538.read(): tmp_1365_fu_38222_p3.read());
}

void batch_align2D_region::thread_tmp_1367_fu_38238_p3() {
    tmp_1367_fu_38238_p3 = (!tmp_1356_fu_38152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1356_fu_38152_p2.read()[0].to_bool())? ref_patch_dy_7_63_23_fu_4570.read(): tmp_1366_fu_38230_p3.read());
}

void batch_align2D_region::thread_tmp_1368_fu_38246_p3() {
    tmp_1368_fu_38246_p3 = (!tmp_1358_fu_38166_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1358_fu_38166_p2.read()[0].to_bool())? ref_patch_dy_7_63_31_fu_4602.read(): tmp_1367_fu_38238_p3.read());
}

void batch_align2D_region::thread_tmp_1369_fu_38254_p3() {
    tmp_1369_fu_38254_p3 = (!tmp_1360_fu_38180_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1360_fu_38180_p2.read()[0].to_bool())? ref_patch_dy_7_63_39_fu_4634.read(): tmp_1368_fu_38246_p3.read());
}

void batch_align2D_region::thread_tmp_1370_fu_38262_p3() {
    tmp_1370_fu_38262_p3 = (!tmp_1362_fu_38194_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1362_fu_38194_p2.read()[0].to_bool())? ref_patch_dy_7_63_47_fu_4666.read(): tmp_1369_fu_38254_p3.read());
}

void batch_align2D_region::thread_tmp_1375_fu_12584_p1() {
    tmp_1375_fu_12584_p1 = indvar6_reg_7264.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_1376_fu_12548_p2() {
    tmp_1376_fu_12548_p2 = (!next_urem_fu_12542_p2.read().is_01() || !ap_const_lv10_64.is_01())? sc_lv<1>(): (sc_biguint<10>(next_urem_fu_12542_p2.read()) < sc_biguint<10>(ap_const_lv10_64));
}

void batch_align2D_region::thread_tmp_1377_fu_12692_p4() {
    tmp_1377_fu_12692_p4 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1378_fu_12680_p1() {
    tmp_1378_fu_12680_p1 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1379_fu_12684_p1() {
    tmp_1379_fu_12684_p1 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_137_demorgan_fu_13713_p2() {
    tmp_137_demorgan_fu_13713_p2 = (tmp_i_i_fu_13701_p2.read() & tmp_1_i_i_fu_13707_p2.read());
}

void batch_align2D_region::thread_tmp_1380_fu_13585_p4() {
    tmp_1380_fu_13585_p4 = px_r_0_i_reg_7413.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1381_fu_15904_p4() {
    tmp_1381_fu_15904_p4 = ap_phi_mux_i_0_i_1_phi_fu_7666_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1382_fu_13601_p4() {
    tmp_1382_fu_13601_p4 = py_r_0_i_reg_7423.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1383_fu_19110_p4() {
    tmp_1383_fu_19110_p4 = ap_phi_mux_i_0_i_2_phi_fu_8053_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1384_fu_22322_p4() {
    tmp_1384_fu_22322_p4 = ap_phi_mux_i_0_i_3_phi_fu_8441_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1385_fu_25534_p4() {
    tmp_1385_fu_25534_p4 = ap_phi_mux_i_0_i_4_phi_fu_8829_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1386_fu_13733_p1() {
    tmp_1386_fu_13733_p1 = px_r_0_i_reg_7413.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1387_fu_13737_p1() {
    tmp_1387_fu_13737_p1 = py_r_0_i_reg_7423.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1388_fu_13763_p1() {
    tmp_1388_fu_13763_p1 = ap_phi_mux_it_ref_dx_0_i_0_rec_phi_fu_7473_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1389_fu_28746_p4() {
    tmp_1389_fu_28746_p4 = ap_phi_mux_i_0_i_5_phi_fu_9217_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_138_fu_13954_p1() {
    tmp_138_fu_13954_p1 = esl_zext<32,8>(reg_11384.read());
}

void batch_align2D_region::thread_tmp_1390_fu_13790_p1() {
    tmp_1390_fu_13790_p1 = ap_phi_mux_y_0_i_phi_fu_7485_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1391_fu_13806_p2() {
    tmp_1391_fu_13806_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_phi_fu_7485_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1392_fu_15892_p1() {
    tmp_1392_fu_15892_p1 = ap_phi_mux_i_0_i_1_phi_fu_7666_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1393_fu_31964_p4() {
    tmp_1393_fu_31964_p4 = ap_phi_mux_i_0_i_6_phi_fu_9604_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1394_fu_15896_p1() {
    tmp_1394_fu_15896_p1 = ap_phi_mux_i_0_i_1_phi_fu_7666_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1395_fu_16797_p4() {
    tmp_1395_fu_16797_p4 = px_r_0_i_1_reg_7800.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1396_fu_16813_p4() {
    tmp_1396_fu_16813_p4 = py_r_0_i_1_reg_7810.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1397_fu_35171_p4() {
    tmp_1397_fu_35171_p4 = ap_phi_mux_i_0_i_7_phi_fu_9991_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1398_fu_38381_p2() {
    tmp_1398_fu_38381_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_0);
}

void batch_align2D_region::thread_tmp_1399_fu_38387_p3() {
    tmp_1399_fu_38387_p3 = (!tmp_1398_fu_38381_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1398_fu_38381_p2.read()[0].to_bool())? reg_10932.read(): reg_11874.read());
}

void batch_align2D_region::thread_tmp_13_fu_14277_p2() {
    tmp_13_fu_14277_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1400_fu_16945_p1() {
    tmp_1400_fu_16945_p1 = px_r_0_i_1_reg_7800.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1401_fu_38395_p2() {
    tmp_1401_fu_38395_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_1);
}

void batch_align2D_region::thread_tmp_1402_fu_16949_p1() {
    tmp_1402_fu_16949_p1 = py_r_0_i_1_reg_7810.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1403_fu_16975_p1() {
    tmp_1403_fu_16975_p1 = ap_phi_mux_it_ref_dx_0_i_1_rec_phi_fu_7860_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1404_fu_17002_p1() {
    tmp_1404_fu_17002_p1 = ap_phi_mux_y_0_i_1_phi_fu_7872_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1405_fu_38401_p3() {
    tmp_1405_fu_38401_p3 = (!tmp_1401_fu_38395_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1401_fu_38395_p2.read()[0].to_bool())? reg_11133.read(): tmp_1399_fu_38387_p3.read());
}

void batch_align2D_region::thread_tmp_1406_fu_17018_p2() {
    tmp_1406_fu_17018_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_1_phi_fu_7872_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1407_fu_19098_p1() {
    tmp_1407_fu_19098_p1 = ap_phi_mux_i_0_i_2_phi_fu_8053_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1408_fu_19102_p1() {
    tmp_1408_fu_19102_p1 = ap_phi_mux_i_0_i_2_phi_fu_8053_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1409_fu_38409_p2() {
    tmp_1409_fu_38409_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_2);
}

void batch_align2D_region::thread_tmp_140_1_fu_16829_p2() {
    tmp_140_1_fu_16829_p2 = (!px_r_0_i_1_reg_7800.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_1_reg_7800.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_2_fu_20041_p2() {
    tmp_140_2_fu_20041_p2 = (!px_r_0_i_2_reg_8188.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_2_reg_8188.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_3_fu_23253_p2() {
    tmp_140_3_fu_23253_p2 = (!px_r_0_i_3_reg_8576.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_3_reg_8576.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_4_fu_26465_p2() {
    tmp_140_4_fu_26465_p2 = (!px_r_0_i_4_reg_8964.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_4_reg_8964.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_5_fu_29677_p2() {
    tmp_140_5_fu_29677_p2 = (!px_r_0_i_5_reg_9352.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_5_reg_9352.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_6_fu_32889_p2() {
    tmp_140_6_fu_32889_p2 = (!px_r_0_i_6_reg_9738.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_6_reg_9738.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_140_7_fu_36102_p2() {
    tmp_140_7_fu_36102_p2 = (!px_r_0_i_7_reg_10126.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(px_r_0_i_7_reg_10126.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_1410_fu_38415_p3() {
    tmp_1410_fu_38415_p3 = (!tmp_1409_fu_38409_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1409_fu_38409_p2.read()[0].to_bool())? reg_10947.read(): tmp_1405_fu_38401_p3.read());
}

void batch_align2D_region::thread_tmp_1411_fu_38423_p2() {
    tmp_1411_fu_38423_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_3);
}

void batch_align2D_region::thread_tmp_1412_fu_38429_p3() {
    tmp_1412_fu_38429_p3 = (!tmp_1411_fu_38423_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1411_fu_38423_p2.read()[0].to_bool())? reg_11151.read(): tmp_1410_fu_38415_p3.read());
}

void batch_align2D_region::thread_tmp_1413_fu_38437_p2() {
    tmp_1413_fu_38437_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_4);
}

void batch_align2D_region::thread_tmp_1414_fu_38443_p3() {
    tmp_1414_fu_38443_p3 = (!tmp_1413_fu_38437_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1413_fu_38437_p2.read()[0].to_bool())? reg_10964.read(): tmp_1412_fu_38429_p3.read());
}

void batch_align2D_region::thread_tmp_1415_fu_38451_p2() {
    tmp_1415_fu_38451_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_5);
}

void batch_align2D_region::thread_tmp_1416_fu_38457_p3() {
    tmp_1416_fu_38457_p3 = (!tmp_1415_fu_38451_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1415_fu_38451_p2.read()[0].to_bool())? reg_11187.read(): tmp_1414_fu_38443_p3.read());
}

void batch_align2D_region::thread_tmp_1417_fu_38465_p2() {
    tmp_1417_fu_38465_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_6);
}

void batch_align2D_region::thread_tmp_1418_fu_38471_p3() {
    tmp_1418_fu_38471_p3 = (!tmp_1417_fu_38465_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1417_fu_38465_p2.read()[0].to_bool())? reg_10984.read(): tmp_1416_fu_38457_p3.read());
}

void batch_align2D_region::thread_tmp_1419_fu_38479_p2() {
    tmp_1419_fu_38479_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_7);
}

void batch_align2D_region::thread_tmp_141_1_fu_16835_p2() {
    tmp_141_1_fu_16835_p2 = (!py_r_0_i_1_reg_7810.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_1_reg_7810.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_2_fu_20047_p2() {
    tmp_141_2_fu_20047_p2 = (!py_r_0_i_2_reg_8198.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_2_reg_8198.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_3_fu_23259_p2() {
    tmp_141_3_fu_23259_p2 = (!py_r_0_i_3_reg_8586.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_3_reg_8586.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_4_fu_26471_p2() {
    tmp_141_4_fu_26471_p2 = (!py_r_0_i_4_reg_8974.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_4_reg_8974.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_5_fu_29683_p2() {
    tmp_141_5_fu_29683_p2 = (!py_r_0_i_5_reg_9362.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_5_reg_9362.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_6_fu_32895_p2() {
    tmp_141_6_fu_32895_p2 = (!py_r_0_i_6_reg_9748.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_6_reg_9748.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_7_fu_36108_p2() {
    tmp_141_7_fu_36108_p2 = (!py_r_0_i_7_reg_10136.read().is_01() || !ap_const_lv8_3B.is_01())? sc_lv<1>(): (sc_biguint<8>(py_r_0_i_7_reg_10136.read()) > sc_biguint<8>(ap_const_lv8_3B));
}

void batch_align2D_region::thread_tmp_141_fu_13999_p1() {
    tmp_141_fu_13999_p1 = esl_zext<32,8>(reg_11393.read());
}

void batch_align2D_region::thread_tmp_1420_fu_38485_p3() {
    tmp_1420_fu_38485_p3 = (!tmp_1419_fu_38479_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1419_fu_38479_p2.read()[0].to_bool())? reg_11587.read(): tmp_1418_fu_38471_p3.read());
}

void batch_align2D_region::thread_tmp_1421_fu_38493_p2() {
    tmp_1421_fu_38493_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_8);
}

void batch_align2D_region::thread_tmp_1422_fu_38499_p3() {
    tmp_1422_fu_38499_p3 = (!tmp_1421_fu_38493_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1421_fu_38493_p2.read()[0].to_bool())? reg_11006.read(): tmp_1420_fu_38485_p3.read());
}

void batch_align2D_region::thread_tmp_1423_fu_38507_p2() {
    tmp_1423_fu_38507_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_9);
}

void batch_align2D_region::thread_tmp_1424_fu_38513_p3() {
    tmp_1424_fu_38513_p3 = (!tmp_1423_fu_38507_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1423_fu_38507_p2.read()[0].to_bool())? reg_11607.read(): tmp_1422_fu_38499_p3.read());
}

void batch_align2D_region::thread_tmp_1425_fu_38521_p2() {
    tmp_1425_fu_38521_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_A);
}

void batch_align2D_region::thread_tmp_1426_fu_38527_p3() {
    tmp_1426_fu_38527_p3 = (!tmp_1425_fu_38521_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1425_fu_38521_p2.read()[0].to_bool())? reg_11477.read(): tmp_1424_fu_38513_p3.read());
}

void batch_align2D_region::thread_tmp_1427_fu_38535_p2() {
    tmp_1427_fu_38535_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_B);
}

void batch_align2D_region::thread_tmp_1428_fu_38541_p3() {
    tmp_1428_fu_38541_p3 = (!tmp_1427_fu_38535_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1427_fu_38535_p2.read()[0].to_bool())? reg_11715.read(): tmp_1426_fu_38527_p3.read());
}

void batch_align2D_region::thread_tmp_1429_fu_38549_p2() {
    tmp_1429_fu_38549_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_C);
}

void batch_align2D_region::thread_tmp_1430_fu_38555_p3() {
    tmp_1430_fu_38555_p3 = (!tmp_1429_fu_38549_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1429_fu_38549_p2.read()[0].to_bool())? reg_11502.read(): tmp_1428_fu_38541_p3.read());
}

void batch_align2D_region::thread_tmp_1431_fu_38563_p2() {
    tmp_1431_fu_38563_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_D);
}

void batch_align2D_region::thread_tmp_1432_fu_38569_p3() {
    tmp_1432_fu_38569_p3 = (!tmp_1431_fu_38563_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1431_fu_38563_p2.read()[0].to_bool())? reg_11746.read(): tmp_1430_fu_38555_p3.read());
}

void batch_align2D_region::thread_tmp_1433_fu_38577_p2() {
    tmp_1433_fu_38577_p2 = (!tmp_1502_fu_38377_p1.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1502_fu_38377_p1.read() == ap_const_lv4_E);
}

void batch_align2D_region::thread_tmp_1438_fu_20009_p4() {
    tmp_1438_fu_20009_p4 = px_r_0_i_2_reg_8188.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1439_fu_20025_p4() {
    tmp_1439_fu_20025_p4 = py_r_0_i_2_reg_8198.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_143_1_demorgan_fu_16889_p2() {
    tmp_143_1_demorgan_fu_16889_p2 = (tmp_i_i1_fu_16877_p2.read() & tmp_1_i_i1_fu_16883_p2.read());
}

void batch_align2D_region::thread_tmp_143_2_demorgan_fu_20101_p2() {
    tmp_143_2_demorgan_fu_20101_p2 = (tmp_i_i3_fu_20089_p2.read() & tmp_1_i_i3_fu_20095_p2.read());
}

void batch_align2D_region::thread_tmp_143_3_demorgan_fu_23313_p2() {
    tmp_143_3_demorgan_fu_23313_p2 = (tmp_i_i6_fu_23301_p2.read() & tmp_1_i_i6_fu_23307_p2.read());
}

void batch_align2D_region::thread_tmp_143_4_demorgan_fu_26525_p2() {
    tmp_143_4_demorgan_fu_26525_p2 = (tmp_i_i8_fu_26513_p2.read() & tmp_1_i_i8_fu_26519_p2.read());
}

void batch_align2D_region::thread_tmp_143_5_demorgan_fu_29737_p2() {
    tmp_143_5_demorgan_fu_29737_p2 = (tmp_i_i10_fu_29725_p2.read() & tmp_1_i_i10_fu_29731_p2.read());
}

void batch_align2D_region::thread_tmp_143_6_demorgan_fu_32949_p2() {
    tmp_143_6_demorgan_fu_32949_p2 = (tmp_i_i12_fu_32937_p2.read() & tmp_1_i_i12_fu_32943_p2.read());
}

void batch_align2D_region::thread_tmp_143_7_demorgan_fu_36162_p2() {
    tmp_143_7_demorgan_fu_36162_p2 = (tmp_i_i14_fu_36150_p2.read() & tmp_1_i_i14_fu_36156_p2.read());
}

void batch_align2D_region::thread_tmp_1442_fu_20157_p1() {
    tmp_1442_fu_20157_p1 = px_r_0_i_2_reg_8188.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1443_fu_20161_p1() {
    tmp_1443_fu_20161_p1 = py_r_0_i_2_reg_8198.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1444_fu_20187_p1() {
    tmp_1444_fu_20187_p1 = ap_phi_mux_it_ref_dx_0_i_2_rec_phi_fu_8248_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1445_fu_20214_p1() {
    tmp_1445_fu_20214_p1 = ap_phi_mux_y_0_i_2_phi_fu_8260_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1446_fu_20230_p2() {
    tmp_1446_fu_20230_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_2_phi_fu_8260_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1447_fu_22310_p1() {
    tmp_1447_fu_22310_p1 = ap_phi_mux_i_0_i_3_phi_fu_8441_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1448_fu_22314_p1() {
    tmp_1448_fu_22314_p1 = ap_phi_mux_i_0_i_3_phi_fu_8441_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1449_fu_23221_p4() {
    tmp_1449_fu_23221_p4 = px_r_0_i_3_reg_8576.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_144_fu_14024_p1() {
    tmp_144_fu_14024_p1 = esl_zext<32,8>(reg_11384.read());
}

void batch_align2D_region::thread_tmp_1450_fu_23237_p4() {
    tmp_1450_fu_23237_p4 = py_r_0_i_3_reg_8586.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1453_fu_23369_p1() {
    tmp_1453_fu_23369_p1 = px_r_0_i_3_reg_8576.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1454_fu_23373_p1() {
    tmp_1454_fu_23373_p1 = py_r_0_i_3_reg_8586.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1455_fu_23399_p1() {
    tmp_1455_fu_23399_p1 = ap_phi_mux_it_ref_dx_0_i_3_rec_phi_fu_8636_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1456_fu_23426_p1() {
    tmp_1456_fu_23426_p1 = ap_phi_mux_y_0_i_3_phi_fu_8648_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1457_fu_23442_p2() {
    tmp_1457_fu_23442_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_3_phi_fu_8648_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1458_fu_25522_p1() {
    tmp_1458_fu_25522_p1 = ap_phi_mux_i_0_i_4_phi_fu_8829_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1459_fu_25526_p1() {
    tmp_1459_fu_25526_p1 = ap_phi_mux_i_0_i_4_phi_fu_8829_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_145_1_demorgan_fu_16925_p2() {
    tmp_145_1_demorgan_fu_16925_p2 = (tmp_i_i2_fu_16913_p2.read() & tmp_1_i_i2_fu_16919_p2.read());
}

void batch_align2D_region::thread_tmp_145_2_demorgan_fu_20137_p2() {
    tmp_145_2_demorgan_fu_20137_p2 = (tmp_i_i5_fu_20125_p2.read() & tmp_1_i_i4_fu_20131_p2.read());
}

void batch_align2D_region::thread_tmp_145_3_demorgan_fu_23349_p2() {
    tmp_145_3_demorgan_fu_23349_p2 = (tmp_i_i7_fu_23337_p2.read() & tmp_1_i_i7_fu_23343_p2.read());
}

void batch_align2D_region::thread_tmp_145_4_demorgan_fu_26561_p2() {
    tmp_145_4_demorgan_fu_26561_p2 = (tmp_i_i9_fu_26549_p2.read() & tmp_1_i_i9_fu_26555_p2.read());
}

void batch_align2D_region::thread_tmp_145_5_demorgan_fu_29773_p2() {
    tmp_145_5_demorgan_fu_29773_p2 = (tmp_i_i11_fu_29761_p2.read() & tmp_1_i_i11_fu_29767_p2.read());
}

void batch_align2D_region::thread_tmp_145_6_demorgan_fu_32985_p2() {
    tmp_145_6_demorgan_fu_32985_p2 = (tmp_i_i13_fu_32973_p2.read() & tmp_1_i_i13_fu_32979_p2.read());
}

void batch_align2D_region::thread_tmp_145_7_demorgan_fu_36198_p2() {
    tmp_145_7_demorgan_fu_36198_p2 = (tmp_i_i15_fu_36186_p2.read() & tmp_1_i_i15_fu_36192_p2.read());
}

void batch_align2D_region::thread_tmp_1460_fu_26433_p4() {
    tmp_1460_fu_26433_p4 = px_r_0_i_4_reg_8964.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1461_fu_26449_p4() {
    tmp_1461_fu_26449_p4 = py_r_0_i_4_reg_8974.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1464_fu_26581_p1() {
    tmp_1464_fu_26581_p1 = px_r_0_i_4_reg_8964.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1465_fu_26585_p1() {
    tmp_1465_fu_26585_p1 = py_r_0_i_4_reg_8974.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1466_fu_26611_p1() {
    tmp_1466_fu_26611_p1 = ap_phi_mux_it_ref_dx_0_i_4_rec_phi_fu_9024_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1467_fu_26638_p1() {
    tmp_1467_fu_26638_p1 = ap_phi_mux_y_0_i_4_phi_fu_9036_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1468_fu_26654_p2() {
    tmp_1468_fu_26654_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_4_phi_fu_9036_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1469_fu_28734_p1() {
    tmp_1469_fu_28734_p1 = ap_phi_mux_i_0_i_5_phi_fu_9217_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_146_1_fu_16931_p1() {
    tmp_146_1_fu_16931_p1 = esl_zext<32,8>(px_r_0_i_1_reg_7800.read());
}

void batch_align2D_region::thread_tmp_146_2_fu_20143_p1() {
    tmp_146_2_fu_20143_p1 = esl_zext<32,8>(px_r_0_i_2_reg_8188.read());
}

void batch_align2D_region::thread_tmp_146_3_fu_23355_p1() {
    tmp_146_3_fu_23355_p1 = esl_zext<32,8>(px_r_0_i_3_reg_8576.read());
}

void batch_align2D_region::thread_tmp_146_4_fu_26567_p1() {
    tmp_146_4_fu_26567_p1 = esl_zext<32,8>(px_r_0_i_4_reg_8964.read());
}

void batch_align2D_region::thread_tmp_146_5_fu_29779_p1() {
    tmp_146_5_fu_29779_p1 = esl_zext<32,8>(px_r_0_i_5_reg_9352.read());
}

void batch_align2D_region::thread_tmp_146_6_fu_32991_p1() {
    tmp_146_6_fu_32991_p1 = esl_zext<32,8>(px_r_0_i_6_reg_9738.read());
}

void batch_align2D_region::thread_tmp_146_7_fu_36204_p1() {
    tmp_146_7_fu_36204_p1 = esl_zext<32,8>(px_r_0_i_7_reg_10126.read());
}

void batch_align2D_region::thread_tmp_1470_fu_28738_p1() {
    tmp_1470_fu_28738_p1 = ap_phi_mux_i_0_i_5_phi_fu_9217_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1471_fu_29645_p4() {
    tmp_1471_fu_29645_p4 = px_r_0_i_5_reg_9352.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1472_fu_29661_p4() {
    tmp_1472_fu_29661_p4 = py_r_0_i_5_reg_9362.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1475_fu_29797_p1() {
    tmp_1475_fu_29797_p1 = px_r_0_i_5_reg_9352.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1476_fu_29789_p1() {
    tmp_1476_fu_29789_p1 = py_r_0_i_5_reg_9362.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1477_fu_29823_p1() {
    tmp_1477_fu_29823_p1 = ap_phi_mux_it_ref_dx_0_i_5_rec_phi_fu_9411_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1478_fu_29850_p1() {
    tmp_1478_fu_29850_p1 = ap_phi_mux_y_0_i_5_phi_fu_9423_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1479_fu_29866_p2() {
    tmp_1479_fu_29866_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_5_phi_fu_9423_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_147_fu_13832_p2() {
    tmp_147_fu_13832_p2 = (!ap_const_lv7_B.is_01() || !tmp_134_fu_13816_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_134_fu_13816_p2.read()));
}

void batch_align2D_region::thread_tmp_1480_fu_31952_p1() {
    tmp_1480_fu_31952_p1 = ap_phi_mux_i_0_i_6_phi_fu_9604_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1481_fu_31956_p1() {
    tmp_1481_fu_31956_p1 = ap_phi_mux_i_0_i_6_phi_fu_9604_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1482_fu_32857_p4() {
    tmp_1482_fu_32857_p4 = px_r_0_i_6_reg_9738.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1483_fu_32873_p4() {
    tmp_1483_fu_32873_p4 = py_r_0_i_6_reg_9748.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1486_fu_33005_p1() {
    tmp_1486_fu_33005_p1 = px_r_0_i_6_reg_9738.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1487_fu_33009_p1() {
    tmp_1487_fu_33009_p1 = py_r_0_i_6_reg_9748.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1488_fu_33035_p1() {
    tmp_1488_fu_33035_p1 = ap_phi_mux_it_ref_dx_0_i_6_rec_phi_fu_9798_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1489_fu_33062_p1() {
    tmp_1489_fu_33062_p1 = ap_phi_mux_y_0_i_6_phi_fu_9810_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_148_1_fu_16936_p1() {
    tmp_148_1_fu_16936_p1 = esl_zext<32,8>(py_r_0_i_1_reg_7810.read());
}

void batch_align2D_region::thread_tmp_148_2_fu_20148_p1() {
    tmp_148_2_fu_20148_p1 = esl_zext<32,8>(py_r_0_i_2_reg_8198.read());
}

void batch_align2D_region::thread_tmp_148_3_fu_23360_p1() {
    tmp_148_3_fu_23360_p1 = esl_zext<32,8>(py_r_0_i_3_reg_8586.read());
}

void batch_align2D_region::thread_tmp_148_4_fu_26572_p1() {
    tmp_148_4_fu_26572_p1 = esl_zext<32,8>(py_r_0_i_4_reg_8974.read());
}

void batch_align2D_region::thread_tmp_148_5_fu_29784_p1() {
    tmp_148_5_fu_29784_p1 = esl_zext<32,8>(py_r_0_i_5_reg_9362.read());
}

void batch_align2D_region::thread_tmp_148_6_fu_32996_p1() {
    tmp_148_6_fu_32996_p1 = esl_zext<32,8>(py_r_0_i_6_reg_9748.read());
}

void batch_align2D_region::thread_tmp_148_7_fu_36209_p1() {
    tmp_148_7_fu_36209_p1 = esl_zext<32,8>(py_r_0_i_7_reg_10136.read());
}

void batch_align2D_region::thread_tmp_148_fu_13838_p1() {
    tmp_148_fu_13838_p1 = esl_zext<64,7>(tmp_147_fu_13832_p2.read());
}

void batch_align2D_region::thread_tmp_1490_fu_33078_p2() {
    tmp_1490_fu_33078_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_6_phi_fu_9810_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1491_fu_35159_p1() {
    tmp_1491_fu_35159_p1 = ap_phi_mux_i_0_i_7_phi_fu_9991_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1492_fu_35163_p1() {
    tmp_1492_fu_35163_p1 = ap_phi_mux_i_0_i_7_phi_fu_9991_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1493_fu_36070_p4() {
    tmp_1493_fu_36070_p4 = px_r_0_i_7_reg_10126.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1494_fu_36086_p4() {
    tmp_1494_fu_36086_p4 = py_r_0_i_7_reg_10136.read().range(7, 2);
}

void batch_align2D_region::thread_tmp_1497_fu_36218_p1() {
    tmp_1497_fu_36218_p1 = px_r_0_i_7_reg_10126.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1498_fu_36222_p1() {
    tmp_1498_fu_36222_p1 = py_r_0_i_7_reg_10136.read().range(7-1, 0);
}

void batch_align2D_region::thread_tmp_1499_fu_36248_p1() {
    tmp_1499_fu_36248_p1 = ap_phi_mux_it_ref_dx_0_i_7_rec_phi_fu_10186_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_149_cast1_fu_13729_p1() {
    tmp_149_cast1_fu_13729_p1 = esl_zext<13,8>(px_r_0_i_reg_7413.read());
}

void batch_align2D_region::thread_tmp_149_fu_13884_p1() {
    tmp_149_fu_13884_p1 = esl_zext<32,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_14_fu_14282_p3() {
    tmp_14_fu_14282_p3 = (!tmp_13_fu_14277_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_13_fu_14277_p2.read()[0].to_bool())? ref_patch_dy_0_63_fu_894.read(): ref_patch_dy_0_63_56_fu_1118.read());
}

void batch_align2D_region::thread_tmp_1500_fu_36275_p1() {
    tmp_1500_fu_36275_p1 = ap_phi_mux_y_0_i_7_phi_fu_10198_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1501_fu_36291_p2() {
    tmp_1501_fu_36291_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_7_phi_fu_10198_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1502_fu_38377_p1() {
    tmp_1502_fu_38377_p1 = indvar8_reg_10375.read().range(4-1, 0);
}

void batch_align2D_region::thread_tmp_157_1_cast1_fu_16941_p1() {
    tmp_157_1_cast1_fu_16941_p1 = esl_zext<13,8>(px_r_0_i_1_reg_7800.read());
}

void batch_align2D_region::thread_tmp_157_2_cast1_fu_20153_p1() {
    tmp_157_2_cast1_fu_20153_p1 = esl_zext<13,8>(px_r_0_i_2_reg_8188.read());
}

void batch_align2D_region::thread_tmp_157_3_cast1_fu_23365_p1() {
    tmp_157_3_cast1_fu_23365_p1 = esl_zext<13,8>(px_r_0_i_3_reg_8576.read());
}

void batch_align2D_region::thread_tmp_157_4_cast1_fu_26577_p1() {
    tmp_157_4_cast1_fu_26577_p1 = esl_zext<13,8>(px_r_0_i_4_reg_8964.read());
}

void batch_align2D_region::thread_tmp_157_5_cast1_fu_29793_p1() {
    tmp_157_5_cast1_fu_29793_p1 = esl_zext<13,8>(px_r_0_i_5_reg_9352.read());
}

void batch_align2D_region::thread_tmp_157_6_cast1_fu_33001_p1() {
    tmp_157_6_cast1_fu_33001_p1 = esl_zext<13,8>(px_r_0_i_6_reg_9738.read());
}

void batch_align2D_region::thread_tmp_157_7_cast1_fu_36214_p1() {
    tmp_157_7_cast1_fu_36214_p1 = esl_zext<13,8>(px_r_0_i_7_reg_10126.read());
}

void batch_align2D_region::thread_tmp_157_fu_14593_p2() {
    tmp_157_fu_14593_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_158_fu_14599_p3() {
    tmp_158_fu_14599_p3 = (!tmp_157_fu_14593_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_157_fu_14593_p2.read()[0].to_bool())? ref_patch_dx_0_63_9_fu_674.read(): ref_patch_dx_0_63_58_fu_870.read());
}

void batch_align2D_region::thread_tmp_159_fu_14607_p2() {
    tmp_159_fu_14607_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_15_fu_14290_p2() {
    tmp_15_fu_14290_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_160_fu_14613_p3() {
    tmp_160_fu_14613_p3 = (!tmp_159_fu_14607_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_159_fu_14607_p2.read()[0].to_bool())? ref_patch_dx_0_63_16_fu_702.read(): tmp_158_fu_14599_p3.read());
}

void batch_align2D_region::thread_tmp_161_fu_14621_p2() {
    tmp_161_fu_14621_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_16310_1_fu_16983_p2() {
    tmp_16310_1_fu_16983_p2 = (!tmp_258_cast_fu_16979_p1.read().is_01() || !tmp_1402_reg_41478.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_258_cast_fu_16979_p1.read()) + sc_biguint<7>(tmp_1402_reg_41478.read()));
}

void batch_align2D_region::thread_tmp_16310_2_fu_20195_p2() {
    tmp_16310_2_fu_20195_p2 = (!tmp_455_cast_fu_20191_p1.read().is_01() || !tmp_1443_reg_43099.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_455_cast_fu_20191_p1.read()) + sc_biguint<7>(tmp_1443_reg_43099.read()));
}

void batch_align2D_region::thread_tmp_16310_3_fu_23407_p2() {
    tmp_16310_3_fu_23407_p2 = (!tmp_616_cast_fu_23403_p1.read().is_01() || !tmp_1454_reg_44725.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_616_cast_fu_23403_p1.read()) + sc_biguint<7>(tmp_1454_reg_44725.read()));
}

void batch_align2D_region::thread_tmp_16310_4_fu_26619_p2() {
    tmp_16310_4_fu_26619_p2 = (!tmp_777_cast_fu_26615_p1.read().is_01() || !tmp_1465_reg_46346.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_777_cast_fu_26615_p1.read()) + sc_biguint<7>(tmp_1465_reg_46346.read()));
}

void batch_align2D_region::thread_tmp_16310_5_fu_29831_p2() {
    tmp_16310_5_fu_29831_p2 = (!tmp_938_cast_fu_29827_p1.read().is_01() || !tmp_1476_reg_47962.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_938_cast_fu_29827_p1.read()) + sc_biguint<7>(tmp_1476_reg_47962.read()));
}

void batch_align2D_region::thread_tmp_16310_6_fu_33043_p2() {
    tmp_16310_6_fu_33043_p2 = (!tmp_1099_cast_fu_33039_p1.read().is_01() || !tmp_1487_reg_49588.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_1099_cast_fu_33039_p1.read()) + sc_biguint<7>(tmp_1487_reg_49588.read()));
}

void batch_align2D_region::thread_tmp_16310_7_fu_36256_p2() {
    tmp_16310_7_fu_36256_p2 = (!tmp_1260_cast_fu_36252_p1.read().is_01() || !tmp_1498_reg_51203.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_1260_cast_fu_36252_p1.read()) + sc_biguint<7>(tmp_1498_reg_51203.read()));
}

void batch_align2D_region::thread_tmp_163_fu_14627_p3() {
    tmp_163_fu_14627_p3 = (!tmp_161_fu_14621_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_161_fu_14621_p2.read()[0].to_bool())? ref_patch_dx_0_63_23_fu_730.read(): tmp_160_fu_14613_p3.read());
}

void batch_align2D_region::thread_tmp_164_1_fu_16988_p3() {
    tmp_164_1_fu_16988_p3 = esl_concat<7,6>(tmp_16310_1_fu_16983_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_2_fu_20200_p3() {
    tmp_164_2_fu_20200_p3 = esl_concat<7,6>(tmp_16310_2_fu_20195_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_3_fu_23412_p3() {
    tmp_164_3_fu_23412_p3 = esl_concat<7,6>(tmp_16310_3_fu_23407_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_4_fu_26624_p3() {
    tmp_164_4_fu_26624_p3 = esl_concat<7,6>(tmp_16310_4_fu_26619_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_5_fu_29836_p3() {
    tmp_164_5_fu_29836_p3 = esl_concat<7,6>(tmp_16310_5_fu_29831_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_6_fu_33048_p3() {
    tmp_164_6_fu_33048_p3 = esl_concat<7,6>(tmp_16310_6_fu_33043_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_7_fu_36261_p3() {
    tmp_164_7_fu_36261_p3 = esl_concat<7,6>(tmp_16310_7_fu_36256_p2.read(), ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_164_fu_14635_p2() {
    tmp_164_fu_14635_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_165_1_fu_16996_p2() {
    tmp_165_1_fu_16996_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_1_fu_16988_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_1_fu_16988_p3.read()));
}

void batch_align2D_region::thread_tmp_165_2_fu_20208_p2() {
    tmp_165_2_fu_20208_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_2_fu_20200_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_2_fu_20200_p3.read()));
}

void batch_align2D_region::thread_tmp_165_3_fu_23420_p2() {
    tmp_165_3_fu_23420_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_3_fu_23412_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_3_fu_23412_p3.read()));
}

void batch_align2D_region::thread_tmp_165_4_fu_26632_p2() {
    tmp_165_4_fu_26632_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_4_fu_26624_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_4_fu_26624_p3.read()));
}

void batch_align2D_region::thread_tmp_165_5_fu_29844_p2() {
    tmp_165_5_fu_29844_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_5_fu_29836_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_5_fu_29836_p3.read()));
}

void batch_align2D_region::thread_tmp_165_6_fu_33056_p2() {
    tmp_165_6_fu_33056_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_6_fu_33048_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_6_fu_33048_p3.read()));
}

void batch_align2D_region::thread_tmp_165_7_fu_36269_p2() {
    tmp_165_7_fu_36269_p2 = (!ap_const_lv13_1F00.is_01() || !tmp_164_7_fu_36261_p3.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1F00) + sc_biguint<13>(tmp_164_7_fu_36261_p3.read()));
}

void batch_align2D_region::thread_tmp_165_fu_14641_p3() {
    tmp_165_fu_14641_p3 = (!tmp_164_fu_14635_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_164_fu_14635_p2.read()[0].to_bool())? ref_patch_dx_0_63_30_fu_758.read(): tmp_163_fu_14627_p3.read());
}

void batch_align2D_region::thread_tmp_166_fu_14649_p2() {
    tmp_166_fu_14649_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_167_1_fu_17028_p2() {
    tmp_167_1_fu_17028_p2 = (!p_shl9_1_cast_fu_17024_p1.read().is_01() || !p_shl8_1_cast_fu_17014_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_1_cast_fu_17024_p1.read()) + sc_biguint<7>(p_shl8_1_cast_fu_17014_p1.read()));
}

void batch_align2D_region::thread_tmp_167_2_fu_20240_p2() {
    tmp_167_2_fu_20240_p2 = (!p_shl9_2_cast_fu_20236_p1.read().is_01() || !p_shl8_2_cast_fu_20226_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_2_cast_fu_20236_p1.read()) + sc_biguint<7>(p_shl8_2_cast_fu_20226_p1.read()));
}

void batch_align2D_region::thread_tmp_167_3_fu_23452_p2() {
    tmp_167_3_fu_23452_p2 = (!p_shl9_3_cast_fu_23448_p1.read().is_01() || !p_shl8_3_cast_fu_23438_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_3_cast_fu_23448_p1.read()) + sc_biguint<7>(p_shl8_3_cast_fu_23438_p1.read()));
}

void batch_align2D_region::thread_tmp_167_4_fu_26664_p2() {
    tmp_167_4_fu_26664_p2 = (!p_shl9_4_cast_fu_26660_p1.read().is_01() || !p_shl8_4_cast_fu_26650_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_4_cast_fu_26660_p1.read()) + sc_biguint<7>(p_shl8_4_cast_fu_26650_p1.read()));
}

void batch_align2D_region::thread_tmp_167_5_fu_29876_p2() {
    tmp_167_5_fu_29876_p2 = (!p_shl9_5_cast_fu_29872_p1.read().is_01() || !p_shl8_5_cast_fu_29862_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_5_cast_fu_29872_p1.read()) + sc_biguint<7>(p_shl8_5_cast_fu_29862_p1.read()));
}

void batch_align2D_region::thread_tmp_167_6_fu_33088_p2() {
    tmp_167_6_fu_33088_p2 = (!p_shl9_6_cast_fu_33084_p1.read().is_01() || !p_shl8_6_cast_fu_33074_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_6_cast_fu_33084_p1.read()) + sc_biguint<7>(p_shl8_6_cast_fu_33074_p1.read()));
}

void batch_align2D_region::thread_tmp_167_7_fu_36301_p2() {
    tmp_167_7_fu_36301_p2 = (!p_shl9_7_cast_fu_36297_p1.read().is_01() || !p_shl8_7_cast_fu_36287_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl9_7_cast_fu_36297_p1.read()) + sc_biguint<7>(p_shl8_7_cast_fu_36287_p1.read()));
}

void batch_align2D_region::thread_tmp_167_fu_14655_p3() {
    tmp_167_fu_14655_p3 = (!tmp_166_fu_14649_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_166_fu_14649_p2.read()[0].to_bool())? ref_patch_dx_0_63_37_fu_786.read(): tmp_165_fu_14641_p3.read());
}

void batch_align2D_region::thread_tmp_168_fu_14663_p2() {
    tmp_168_fu_14663_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_169_fu_14669_p3() {
    tmp_169_fu_14669_p3 = (!tmp_168_fu_14663_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_168_fu_14663_p2.read()[0].to_bool())? ref_patch_dx_0_63_44_fu_814.read(): tmp_167_fu_14655_p3.read());
}

void batch_align2D_region::thread_tmp_16_fu_14295_p3() {
    tmp_16_fu_14295_p3 = (!tmp_15_fu_14290_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_15_fu_14290_p2.read()[0].to_bool())? ref_patch_dy_0_63_8_fu_926.read(): tmp_14_fu_14282_p3.read());
}

void batch_align2D_region::thread_tmp_170_fu_14677_p2() {
    tmp_170_fu_14677_p2 = (!it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_1_fu_14588_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_176_fu_14717_p3() {
    tmp_176_fu_14717_p3 = (!tmp_157_reg_40342.read()[0].is_01())? sc_lv<32>(): ((tmp_157_reg_40342.read()[0].to_bool())? ref_patch_dy_0_63_2_fu_902.read(): ref_patch_dy_0_63_58_fu_1126.read());
}

void batch_align2D_region::thread_tmp_177_fu_14724_p3() {
    tmp_177_fu_14724_p3 = (!tmp_159_reg_40347.read()[0].is_01())? sc_lv<32>(): ((tmp_159_reg_40347.read()[0].to_bool())? ref_patch_dy_0_63_10_fu_934.read(): tmp_176_fu_14717_p3.read());
}

void batch_align2D_region::thread_tmp_178_0_5_fu_14183_p1() {
    tmp_178_0_5_fu_14183_p1 = esl_zext<32,8>(pyr_region_data_0_lo_13_reg_40116.read());
}

void batch_align2D_region::thread_tmp_178_1_5_fu_17395_p1() {
    tmp_178_1_5_fu_17395_p1 = esl_zext<32,8>(pyr_region_data_1_lo_13_reg_41737.read());
}

void batch_align2D_region::thread_tmp_178_1_fu_17121_p1() {
    tmp_178_1_fu_17121_p1 = esl_zext<32,8>(reg_11845.read());
}

void batch_align2D_region::thread_tmp_178_2_5_fu_20607_p1() {
    tmp_178_2_5_fu_20607_p1 = esl_zext<32,8>(pyr_region_data_2_lo_13_reg_43358.read());
}

void batch_align2D_region::thread_tmp_178_2_fu_20333_p1() {
    tmp_178_2_fu_20333_p1 = esl_zext<32,8>(reg_11908.read());
}

void batch_align2D_region::thread_tmp_178_3_5_fu_23819_p1() {
    tmp_178_3_5_fu_23819_p1 = esl_zext<32,8>(pyr_region_data_3_lo_13_reg_44984.read());
}

void batch_align2D_region::thread_tmp_178_3_fu_23545_p1() {
    tmp_178_3_fu_23545_p1 = esl_zext<32,8>(reg_11962.read());
}

void batch_align2D_region::thread_tmp_178_4_5_fu_27031_p1() {
    tmp_178_4_5_fu_27031_p1 = esl_zext<32,8>(pyr_region_data_4_lo_13_reg_46605.read());
}

void batch_align2D_region::thread_tmp_178_4_fu_26757_p1() {
    tmp_178_4_fu_26757_p1 = esl_zext<32,8>(reg_12013.read());
}

void batch_align2D_region::thread_tmp_178_5_5_fu_30243_p1() {
    tmp_178_5_5_fu_30243_p1 = esl_zext<32,8>(pyr_region_data_5_lo_13_reg_48226.read());
}

void batch_align2D_region::thread_tmp_178_5_fu_29969_p1() {
    tmp_178_5_fu_29969_p1 = esl_zext<32,8>(reg_12061.read());
}

void batch_align2D_region::thread_tmp_178_6_5_fu_33455_p1() {
    tmp_178_6_5_fu_33455_p1 = esl_zext<32,8>(pyr_region_data_6_lo_13_reg_49847.read());
}

void batch_align2D_region::thread_tmp_178_6_fu_33181_p1() {
    tmp_178_6_fu_33181_p1 = esl_zext<32,8>(reg_12108.read());
}

void batch_align2D_region::thread_tmp_178_7_5_fu_36668_p1() {
    tmp_178_7_5_fu_36668_p1 = esl_zext<32,8>(pyr_region_data_7_lo_13_reg_51462.read());
}

void batch_align2D_region::thread_tmp_178_7_fu_36394_p1() {
    tmp_178_7_fu_36394_p1 = esl_zext<32,8>(reg_12150.read());
}

void batch_align2D_region::thread_tmp_178_fu_14731_p3() {
    tmp_178_fu_14731_p3 = (!tmp_161_reg_40352.read()[0].is_01())? sc_lv<32>(): ((tmp_161_reg_40352.read()[0].to_bool())? ref_patch_dy_0_63_18_fu_966.read(): tmp_177_fu_14724_p3.read());
}

void batch_align2D_region::thread_tmp_179_fu_14738_p3() {
    tmp_179_fu_14738_p3 = (!tmp_164_reg_40357.read()[0].is_01())? sc_lv<32>(): ((tmp_164_reg_40357.read()[0].to_bool())? ref_patch_dy_0_63_26_fu_998.read(): tmp_178_fu_14731_p3.read());
}

void batch_align2D_region::thread_tmp_17_fu_14303_p2() {
    tmp_17_fu_14303_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_180_fu_14745_p3() {
    tmp_180_fu_14745_p3 = (!tmp_166_reg_40362.read()[0].is_01())? sc_lv<32>(): ((tmp_166_reg_40362.read()[0].to_bool())? ref_patch_dy_0_63_34_fu_1030.read(): tmp_179_fu_14738_p3.read());
}

void batch_align2D_region::thread_tmp_181_0_1_fu_14049_p1() {
    tmp_181_0_1_fu_14049_p1 = esl_zext<32,8>(reg_11398.read());
}

void batch_align2D_region::thread_tmp_181_0_2_fu_14099_p1() {
    tmp_181_0_2_fu_14099_p1 = esl_zext<32,8>(reg_11403.read());
}

void batch_align2D_region::thread_tmp_181_0_3_fu_14149_p1() {
    tmp_181_0_3_fu_14149_p1 = esl_zext<32,8>(reg_11389.read());
}

void batch_align2D_region::thread_tmp_181_0_4_fu_14169_p1() {
    tmp_181_0_4_fu_14169_p1 = esl_zext<32,8>(reg_11398.read());
}

void batch_align2D_region::thread_tmp_181_0_5_fu_14187_p1() {
    tmp_181_0_5_fu_14187_p1 = esl_zext<32,8>(reg_11403.read());
}

void batch_align2D_region::thread_tmp_181_0_6_fu_14205_p1() {
    tmp_181_0_6_fu_14205_p1 = esl_zext<32,8>(pyr_region_data_0_lo_17_reg_40156.read());
}

void batch_align2D_region::thread_tmp_181_0_7_fu_14218_p1() {
    tmp_181_0_7_fu_14218_p1 = esl_zext<32,8>(pyr_region_data_0_lo_19_reg_40176.read());
}

void batch_align2D_region::thread_tmp_181_1_1_fu_17261_p1() {
    tmp_181_1_1_fu_17261_p1 = esl_zext<32,8>(reg_11859.read());
}

void batch_align2D_region::thread_tmp_181_1_2_fu_17311_p1() {
    tmp_181_1_2_fu_17311_p1 = esl_zext<32,8>(reg_11864.read());
}

void batch_align2D_region::thread_tmp_181_1_3_fu_17361_p1() {
    tmp_181_1_3_fu_17361_p1 = esl_zext<32,8>(reg_11850.read());
}

void batch_align2D_region::thread_tmp_181_1_4_fu_17381_p1() {
    tmp_181_1_4_fu_17381_p1 = esl_zext<32,8>(reg_11859.read());
}

void batch_align2D_region::thread_tmp_181_1_5_fu_17399_p1() {
    tmp_181_1_5_fu_17399_p1 = esl_zext<32,8>(reg_11864.read());
}

void batch_align2D_region::thread_tmp_181_1_6_fu_17417_p1() {
    tmp_181_1_6_fu_17417_p1 = esl_zext<32,8>(pyr_region_data_1_lo_17_reg_41777.read());
}

void batch_align2D_region::thread_tmp_181_1_7_fu_17430_p1() {
    tmp_181_1_7_fu_17430_p1 = esl_zext<32,8>(pyr_region_data_1_lo_19_reg_41797.read());
}

void batch_align2D_region::thread_tmp_181_1_fu_17166_p1() {
    tmp_181_1_fu_17166_p1 = esl_zext<32,8>(reg_11845.read());
}

void batch_align2D_region::thread_tmp_181_2_1_fu_20473_p1() {
    tmp_181_2_1_fu_20473_p1 = esl_zext<32,8>(reg_11922.read());
}

void batch_align2D_region::thread_tmp_181_2_2_fu_20523_p1() {
    tmp_181_2_2_fu_20523_p1 = esl_zext<32,8>(reg_11927.read());
}

void batch_align2D_region::thread_tmp_181_2_3_fu_20573_p1() {
    tmp_181_2_3_fu_20573_p1 = esl_zext<32,8>(reg_11913.read());
}

void batch_align2D_region::thread_tmp_181_2_4_fu_20593_p1() {
    tmp_181_2_4_fu_20593_p1 = esl_zext<32,8>(reg_11922.read());
}

void batch_align2D_region::thread_tmp_181_2_5_fu_20611_p1() {
    tmp_181_2_5_fu_20611_p1 = esl_zext<32,8>(reg_11927.read());
}

void batch_align2D_region::thread_tmp_181_2_6_fu_20629_p1() {
    tmp_181_2_6_fu_20629_p1 = esl_zext<32,8>(pyr_region_data_2_lo_17_reg_43398.read());
}

void batch_align2D_region::thread_tmp_181_2_7_fu_20642_p1() {
    tmp_181_2_7_fu_20642_p1 = esl_zext<32,8>(pyr_region_data_2_lo_19_reg_43418.read());
}

void batch_align2D_region::thread_tmp_181_2_fu_20378_p1() {
    tmp_181_2_fu_20378_p1 = esl_zext<32,8>(reg_11908.read());
}

void batch_align2D_region::thread_tmp_181_3_1_fu_23685_p1() {
    tmp_181_3_1_fu_23685_p1 = esl_zext<32,8>(reg_11976.read());
}

void batch_align2D_region::thread_tmp_181_3_2_fu_23735_p1() {
    tmp_181_3_2_fu_23735_p1 = esl_zext<32,8>(reg_11981.read());
}

void batch_align2D_region::thread_tmp_181_3_3_fu_23785_p1() {
    tmp_181_3_3_fu_23785_p1 = esl_zext<32,8>(reg_11967.read());
}

void batch_align2D_region::thread_tmp_181_3_4_fu_23805_p1() {
    tmp_181_3_4_fu_23805_p1 = esl_zext<32,8>(reg_11976.read());
}

void batch_align2D_region::thread_tmp_181_3_5_fu_23823_p1() {
    tmp_181_3_5_fu_23823_p1 = esl_zext<32,8>(reg_11981.read());
}

void batch_align2D_region::thread_tmp_181_3_6_fu_23841_p1() {
    tmp_181_3_6_fu_23841_p1 = esl_zext<32,8>(pyr_region_data_3_lo_17_reg_45024.read());
}

void batch_align2D_region::thread_tmp_181_3_7_fu_23854_p1() {
    tmp_181_3_7_fu_23854_p1 = esl_zext<32,8>(pyr_region_data_3_lo_19_reg_45044.read());
}

void batch_align2D_region::thread_tmp_181_3_fu_23590_p1() {
    tmp_181_3_fu_23590_p1 = esl_zext<32,8>(reg_11962.read());
}

void batch_align2D_region::thread_tmp_181_4_1_fu_26897_p1() {
    tmp_181_4_1_fu_26897_p1 = esl_zext<32,8>(reg_12027.read());
}

void batch_align2D_region::thread_tmp_181_4_2_fu_26947_p1() {
    tmp_181_4_2_fu_26947_p1 = esl_zext<32,8>(reg_12032.read());
}

void batch_align2D_region::thread_tmp_181_4_3_fu_26997_p1() {
    tmp_181_4_3_fu_26997_p1 = esl_zext<32,8>(reg_12018.read());
}

void batch_align2D_region::thread_tmp_181_4_4_fu_27017_p1() {
    tmp_181_4_4_fu_27017_p1 = esl_zext<32,8>(reg_12027.read());
}

void batch_align2D_region::thread_tmp_181_4_5_fu_27035_p1() {
    tmp_181_4_5_fu_27035_p1 = esl_zext<32,8>(reg_12032.read());
}

void batch_align2D_region::thread_tmp_181_4_6_fu_27053_p1() {
    tmp_181_4_6_fu_27053_p1 = esl_zext<32,8>(pyr_region_data_4_lo_17_reg_46645.read());
}

void batch_align2D_region::thread_tmp_181_4_7_fu_27066_p1() {
    tmp_181_4_7_fu_27066_p1 = esl_zext<32,8>(pyr_region_data_4_lo_19_reg_46665.read());
}

void batch_align2D_region::thread_tmp_181_4_fu_26802_p1() {
    tmp_181_4_fu_26802_p1 = esl_zext<32,8>(reg_12013.read());
}

void batch_align2D_region::thread_tmp_181_5_1_fu_30109_p1() {
    tmp_181_5_1_fu_30109_p1 = esl_zext<32,8>(reg_12075.read());
}

void batch_align2D_region::thread_tmp_181_5_2_fu_30159_p1() {
    tmp_181_5_2_fu_30159_p1 = esl_zext<32,8>(reg_12080.read());
}

void batch_align2D_region::thread_tmp_181_5_3_fu_30209_p1() {
    tmp_181_5_3_fu_30209_p1 = esl_zext<32,8>(reg_12066.read());
}

void batch_align2D_region::thread_tmp_181_5_4_fu_30229_p1() {
    tmp_181_5_4_fu_30229_p1 = esl_zext<32,8>(reg_12075.read());
}

void batch_align2D_region::thread_tmp_181_5_5_fu_30247_p1() {
    tmp_181_5_5_fu_30247_p1 = esl_zext<32,8>(reg_12080.read());
}

void batch_align2D_region::thread_tmp_181_5_6_fu_30265_p1() {
    tmp_181_5_6_fu_30265_p1 = esl_zext<32,8>(pyr_region_data_5_lo_17_reg_48266.read());
}

void batch_align2D_region::thread_tmp_181_5_7_fu_30278_p1() {
    tmp_181_5_7_fu_30278_p1 = esl_zext<32,8>(pyr_region_data_5_lo_19_reg_48286.read());
}

void batch_align2D_region::thread_tmp_181_5_fu_30014_p1() {
    tmp_181_5_fu_30014_p1 = esl_zext<32,8>(reg_12061.read());
}

void batch_align2D_region::thread_tmp_181_6_1_fu_33321_p1() {
    tmp_181_6_1_fu_33321_p1 = esl_zext<32,8>(reg_12122.read());
}

void batch_align2D_region::thread_tmp_181_6_2_fu_33371_p1() {
    tmp_181_6_2_fu_33371_p1 = esl_zext<32,8>(reg_12127.read());
}

void batch_align2D_region::thread_tmp_181_6_3_fu_33421_p1() {
    tmp_181_6_3_fu_33421_p1 = esl_zext<32,8>(reg_12113.read());
}

void batch_align2D_region::thread_tmp_181_6_4_fu_33441_p1() {
    tmp_181_6_4_fu_33441_p1 = esl_zext<32,8>(reg_12122.read());
}

void batch_align2D_region::thread_tmp_181_6_5_fu_33459_p1() {
    tmp_181_6_5_fu_33459_p1 = esl_zext<32,8>(reg_12127.read());
}

void batch_align2D_region::thread_tmp_181_6_6_fu_33477_p1() {
    tmp_181_6_6_fu_33477_p1 = esl_zext<32,8>(pyr_region_data_6_lo_17_reg_49887.read());
}

void batch_align2D_region::thread_tmp_181_6_7_fu_33490_p1() {
    tmp_181_6_7_fu_33490_p1 = esl_zext<32,8>(pyr_region_data_6_lo_19_reg_49907.read());
}

void batch_align2D_region::thread_tmp_181_6_fu_33226_p1() {
    tmp_181_6_fu_33226_p1 = esl_zext<32,8>(reg_12108.read());
}

void batch_align2D_region::thread_tmp_181_7_1_fu_36534_p1() {
    tmp_181_7_1_fu_36534_p1 = esl_zext<32,8>(reg_12164.read());
}

void batch_align2D_region::thread_tmp_181_7_2_fu_36584_p1() {
    tmp_181_7_2_fu_36584_p1 = esl_zext<32,8>(reg_12169.read());
}

void batch_align2D_region::thread_tmp_181_7_3_fu_36634_p1() {
    tmp_181_7_3_fu_36634_p1 = esl_zext<32,8>(reg_12155.read());
}

void batch_align2D_region::thread_tmp_181_7_4_fu_36654_p1() {
    tmp_181_7_4_fu_36654_p1 = esl_zext<32,8>(reg_12164.read());
}

void batch_align2D_region::thread_tmp_181_7_5_fu_36672_p1() {
    tmp_181_7_5_fu_36672_p1 = esl_zext<32,8>(reg_12169.read());
}

void batch_align2D_region::thread_tmp_181_7_6_fu_36690_p1() {
    tmp_181_7_6_fu_36690_p1 = esl_zext<32,8>(pyr_region_data_7_lo_17_reg_51502.read());
}

void batch_align2D_region::thread_tmp_181_7_7_fu_36703_p1() {
    tmp_181_7_7_fu_36703_p1 = esl_zext<32,8>(pyr_region_data_7_lo_19_reg_51522.read());
}

void batch_align2D_region::thread_tmp_181_7_fu_36439_p1() {
    tmp_181_7_fu_36439_p1 = esl_zext<32,8>(reg_12150.read());
}

void batch_align2D_region::thread_tmp_181_fu_14752_p3() {
    tmp_181_fu_14752_p3 = (!tmp_168_reg_40367.read()[0].is_01())? sc_lv<32>(): ((tmp_168_reg_40367.read()[0].to_bool())? ref_patch_dy_0_63_42_fu_1062.read(): tmp_180_fu_14745_p3.read());
}

void batch_align2D_region::thread_tmp_182_fu_14819_p2() {
    tmp_182_fu_14819_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_183_fu_14825_p3() {
    tmp_183_fu_14825_p3 = (!tmp_182_fu_14819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_182_fu_14819_p2.read()[0].to_bool())? ref_patch_dx_0_63_10_fu_678.read(): ref_patch_dx_0_63_59_fu_874.read());
}

void batch_align2D_region::thread_tmp_184_fu_14833_p2() {
    tmp_184_fu_14833_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_185_0_4_fu_14174_p1() {
    tmp_185_0_4_fu_14174_p1 = esl_zext<32,8>(pyr_region_data_0_lo_11_reg_40096.read());
}

void batch_align2D_region::thread_tmp_185_0_5_fu_14192_p1() {
    tmp_185_0_5_fu_14192_p1 = esl_zext<32,8>(pyr_region_data_0_lo_15_reg_40136.read());
}

void batch_align2D_region::thread_tmp_185_1_4_fu_17386_p1() {
    tmp_185_1_4_fu_17386_p1 = esl_zext<32,8>(pyr_region_data_1_lo_11_reg_41717.read());
}

void batch_align2D_region::thread_tmp_185_1_5_fu_17404_p1() {
    tmp_185_1_5_fu_17404_p1 = esl_zext<32,8>(pyr_region_data_1_lo_15_reg_41757.read());
}

void batch_align2D_region::thread_tmp_185_1_fu_17211_p1() {
    tmp_185_1_fu_17211_p1 = esl_zext<32,8>(reg_11854.read());
}

void batch_align2D_region::thread_tmp_185_2_4_fu_20598_p1() {
    tmp_185_2_4_fu_20598_p1 = esl_zext<32,8>(pyr_region_data_2_lo_11_reg_43338.read());
}

void batch_align2D_region::thread_tmp_185_2_5_fu_20616_p1() {
    tmp_185_2_5_fu_20616_p1 = esl_zext<32,8>(pyr_region_data_2_lo_15_reg_43378.read());
}

void batch_align2D_region::thread_tmp_185_2_fu_20423_p1() {
    tmp_185_2_fu_20423_p1 = esl_zext<32,8>(reg_11917.read());
}

void batch_align2D_region::thread_tmp_185_3_4_fu_23810_p1() {
    tmp_185_3_4_fu_23810_p1 = esl_zext<32,8>(pyr_region_data_3_lo_11_reg_44964.read());
}

void batch_align2D_region::thread_tmp_185_3_5_fu_23828_p1() {
    tmp_185_3_5_fu_23828_p1 = esl_zext<32,8>(pyr_region_data_3_lo_15_reg_45004.read());
}

void batch_align2D_region::thread_tmp_185_3_fu_23635_p1() {
    tmp_185_3_fu_23635_p1 = esl_zext<32,8>(reg_11971.read());
}

void batch_align2D_region::thread_tmp_185_4_4_fu_27022_p1() {
    tmp_185_4_4_fu_27022_p1 = esl_zext<32,8>(pyr_region_data_4_lo_11_reg_46585.read());
}

void batch_align2D_region::thread_tmp_185_4_5_fu_27040_p1() {
    tmp_185_4_5_fu_27040_p1 = esl_zext<32,8>(pyr_region_data_4_lo_15_reg_46625.read());
}

void batch_align2D_region::thread_tmp_185_4_fu_26847_p1() {
    tmp_185_4_fu_26847_p1 = esl_zext<32,8>(reg_12022.read());
}

void batch_align2D_region::thread_tmp_185_5_4_fu_30234_p1() {
    tmp_185_5_4_fu_30234_p1 = esl_zext<32,8>(pyr_region_data_5_lo_11_reg_48206.read());
}

void batch_align2D_region::thread_tmp_185_5_5_fu_30252_p1() {
    tmp_185_5_5_fu_30252_p1 = esl_zext<32,8>(pyr_region_data_5_lo_15_reg_48246.read());
}

void batch_align2D_region::thread_tmp_185_5_fu_30059_p1() {
    tmp_185_5_fu_30059_p1 = esl_zext<32,8>(reg_12070.read());
}

void batch_align2D_region::thread_tmp_185_6_4_fu_33446_p1() {
    tmp_185_6_4_fu_33446_p1 = esl_zext<32,8>(pyr_region_data_6_lo_11_reg_49827.read());
}

void batch_align2D_region::thread_tmp_185_6_5_fu_33464_p1() {
    tmp_185_6_5_fu_33464_p1 = esl_zext<32,8>(pyr_region_data_6_lo_15_reg_49867.read());
}

void batch_align2D_region::thread_tmp_185_6_fu_33271_p1() {
    tmp_185_6_fu_33271_p1 = esl_zext<32,8>(reg_12117.read());
}

void batch_align2D_region::thread_tmp_185_7_4_fu_36659_p1() {
    tmp_185_7_4_fu_36659_p1 = esl_zext<32,8>(pyr_region_data_7_lo_11_reg_51442.read());
}

void batch_align2D_region::thread_tmp_185_7_5_fu_36677_p1() {
    tmp_185_7_5_fu_36677_p1 = esl_zext<32,8>(pyr_region_data_7_lo_15_reg_51482.read());
}

void batch_align2D_region::thread_tmp_185_7_fu_36484_p1() {
    tmp_185_7_fu_36484_p1 = esl_zext<32,8>(reg_12159.read());
}

void batch_align2D_region::thread_tmp_185_fu_14839_p3() {
    tmp_185_fu_14839_p3 = (!tmp_184_fu_14833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_184_fu_14833_p2.read()[0].to_bool())? ref_patch_dx_0_63_17_fu_706.read(): tmp_183_fu_14825_p3.read());
}

void batch_align2D_region::thread_tmp_187_fu_14847_p2() {
    tmp_187_fu_14847_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_188_fu_14853_p3() {
    tmp_188_fu_14853_p3 = (!tmp_187_fu_14847_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_187_fu_14847_p2.read()[0].to_bool())? ref_patch_dx_0_63_24_fu_734.read(): tmp_185_fu_14839_p3.read());
}

void batch_align2D_region::thread_tmp_189_0_1_fu_14074_p1() {
    tmp_189_0_1_fu_14074_p1 = esl_zext<32,8>(reg_11393.read());
}

void batch_align2D_region::thread_tmp_189_0_2_fu_14124_p1() {
    tmp_189_0_2_fu_14124_p1 = esl_zext<32,8>(reg_11384.read());
}

void batch_align2D_region::thread_tmp_189_0_3_fu_14164_p1() {
    tmp_189_0_3_fu_14164_p1 = esl_zext<32,8>(reg_11408.read());
}

void batch_align2D_region::thread_tmp_189_0_4_fu_14178_p1() {
    tmp_189_0_4_fu_14178_p1 = esl_zext<32,8>(reg_11393.read());
}

void batch_align2D_region::thread_tmp_189_0_5_fu_14196_p1() {
    tmp_189_0_5_fu_14196_p1 = esl_zext<32,8>(reg_11384.read());
}

void batch_align2D_region::thread_tmp_189_0_6_fu_14209_p1() {
    tmp_189_0_6_fu_14209_p1 = esl_zext<32,8>(reg_11389.read());
}

void batch_align2D_region::thread_tmp_189_0_7_fu_14222_p1() {
    tmp_189_0_7_fu_14222_p1 = esl_zext<32,8>(reg_11408.read());
}

void batch_align2D_region::thread_tmp_189_1_1_fu_17286_p1() {
    tmp_189_1_1_fu_17286_p1 = esl_zext<32,8>(reg_11854.read());
}

void batch_align2D_region::thread_tmp_189_1_2_fu_17336_p1() {
    tmp_189_1_2_fu_17336_p1 = esl_zext<32,8>(reg_11845.read());
}

void batch_align2D_region::thread_tmp_189_1_3_fu_17376_p1() {
    tmp_189_1_3_fu_17376_p1 = esl_zext<32,8>(reg_11869.read());
}

void batch_align2D_region::thread_tmp_189_1_4_fu_17390_p1() {
    tmp_189_1_4_fu_17390_p1 = esl_zext<32,8>(reg_11854.read());
}

void batch_align2D_region::thread_tmp_189_1_5_fu_17408_p1() {
    tmp_189_1_5_fu_17408_p1 = esl_zext<32,8>(reg_11845.read());
}

void batch_align2D_region::thread_tmp_189_1_6_fu_17421_p1() {
    tmp_189_1_6_fu_17421_p1 = esl_zext<32,8>(reg_11850.read());
}

void batch_align2D_region::thread_tmp_189_1_7_fu_17434_p1() {
    tmp_189_1_7_fu_17434_p1 = esl_zext<32,8>(reg_11869.read());
}

void batch_align2D_region::thread_tmp_189_1_fu_17236_p1() {
    tmp_189_1_fu_17236_p1 = esl_zext<32,8>(reg_11845.read());
}

void batch_align2D_region::thread_tmp_189_2_1_fu_20498_p1() {
    tmp_189_2_1_fu_20498_p1 = esl_zext<32,8>(reg_11917.read());
}

void batch_align2D_region::thread_tmp_189_2_2_fu_20548_p1() {
    tmp_189_2_2_fu_20548_p1 = esl_zext<32,8>(reg_11908.read());
}

void batch_align2D_region::thread_tmp_189_2_3_fu_20588_p1() {
    tmp_189_2_3_fu_20588_p1 = esl_zext<32,8>(reg_11932.read());
}

void batch_align2D_region::thread_tmp_189_2_4_fu_20602_p1() {
    tmp_189_2_4_fu_20602_p1 = esl_zext<32,8>(reg_11917.read());
}

void batch_align2D_region::thread_tmp_189_2_5_fu_20620_p1() {
    tmp_189_2_5_fu_20620_p1 = esl_zext<32,8>(reg_11908.read());
}

void batch_align2D_region::thread_tmp_189_2_6_fu_20633_p1() {
    tmp_189_2_6_fu_20633_p1 = esl_zext<32,8>(reg_11913.read());
}

void batch_align2D_region::thread_tmp_189_2_7_fu_20646_p1() {
    tmp_189_2_7_fu_20646_p1 = esl_zext<32,8>(reg_11932.read());
}

void batch_align2D_region::thread_tmp_189_2_fu_20448_p1() {
    tmp_189_2_fu_20448_p1 = esl_zext<32,8>(reg_11908.read());
}

void batch_align2D_region::thread_tmp_189_3_1_fu_23710_p1() {
    tmp_189_3_1_fu_23710_p1 = esl_zext<32,8>(reg_11971.read());
}

void batch_align2D_region::thread_tmp_189_3_2_fu_23760_p1() {
    tmp_189_3_2_fu_23760_p1 = esl_zext<32,8>(reg_11962.read());
}

void batch_align2D_region::thread_tmp_189_3_3_fu_23800_p1() {
    tmp_189_3_3_fu_23800_p1 = esl_zext<32,8>(reg_11986.read());
}

void batch_align2D_region::thread_tmp_189_3_4_fu_23814_p1() {
    tmp_189_3_4_fu_23814_p1 = esl_zext<32,8>(reg_11971.read());
}

void batch_align2D_region::thread_tmp_189_3_5_fu_23832_p1() {
    tmp_189_3_5_fu_23832_p1 = esl_zext<32,8>(reg_11962.read());
}

void batch_align2D_region::thread_tmp_189_3_6_fu_23845_p1() {
    tmp_189_3_6_fu_23845_p1 = esl_zext<32,8>(reg_11967.read());
}

void batch_align2D_region::thread_tmp_189_3_7_fu_23858_p1() {
    tmp_189_3_7_fu_23858_p1 = esl_zext<32,8>(reg_11986.read());
}

void batch_align2D_region::thread_tmp_189_3_fu_23660_p1() {
    tmp_189_3_fu_23660_p1 = esl_zext<32,8>(reg_11962.read());
}

void batch_align2D_region::thread_tmp_189_4_1_fu_26922_p1() {
    tmp_189_4_1_fu_26922_p1 = esl_zext<32,8>(reg_12022.read());
}

void batch_align2D_region::thread_tmp_189_4_2_fu_26972_p1() {
    tmp_189_4_2_fu_26972_p1 = esl_zext<32,8>(reg_12013.read());
}

void batch_align2D_region::thread_tmp_189_4_3_fu_27012_p1() {
    tmp_189_4_3_fu_27012_p1 = esl_zext<32,8>(reg_12037.read());
}

void batch_align2D_region::thread_tmp_189_4_4_fu_27026_p1() {
    tmp_189_4_4_fu_27026_p1 = esl_zext<32,8>(reg_12022.read());
}

void batch_align2D_region::thread_tmp_189_4_5_fu_27044_p1() {
    tmp_189_4_5_fu_27044_p1 = esl_zext<32,8>(reg_12013.read());
}

void batch_align2D_region::thread_tmp_189_4_6_fu_27057_p1() {
    tmp_189_4_6_fu_27057_p1 = esl_zext<32,8>(reg_12018.read());
}

void batch_align2D_region::thread_tmp_189_4_7_fu_27070_p1() {
    tmp_189_4_7_fu_27070_p1 = esl_zext<32,8>(reg_12037.read());
}

void batch_align2D_region::thread_tmp_189_4_fu_26872_p1() {
    tmp_189_4_fu_26872_p1 = esl_zext<32,8>(reg_12013.read());
}

void batch_align2D_region::thread_tmp_189_5_1_fu_30134_p1() {
    tmp_189_5_1_fu_30134_p1 = esl_zext<32,8>(reg_12070.read());
}

void batch_align2D_region::thread_tmp_189_5_2_fu_30184_p1() {
    tmp_189_5_2_fu_30184_p1 = esl_zext<32,8>(reg_12061.read());
}

void batch_align2D_region::thread_tmp_189_5_3_fu_30224_p1() {
    tmp_189_5_3_fu_30224_p1 = esl_zext<32,8>(reg_12085.read());
}

void batch_align2D_region::thread_tmp_189_5_4_fu_30238_p1() {
    tmp_189_5_4_fu_30238_p1 = esl_zext<32,8>(reg_12070.read());
}

void batch_align2D_region::thread_tmp_189_5_5_fu_30256_p1() {
    tmp_189_5_5_fu_30256_p1 = esl_zext<32,8>(reg_12061.read());
}

void batch_align2D_region::thread_tmp_189_5_6_fu_30269_p1() {
    tmp_189_5_6_fu_30269_p1 = esl_zext<32,8>(reg_12066.read());
}

void batch_align2D_region::thread_tmp_189_5_7_fu_30282_p1() {
    tmp_189_5_7_fu_30282_p1 = esl_zext<32,8>(reg_12085.read());
}

void batch_align2D_region::thread_tmp_189_5_fu_30084_p1() {
    tmp_189_5_fu_30084_p1 = esl_zext<32,8>(reg_12061.read());
}

void batch_align2D_region::thread_tmp_189_6_1_fu_33346_p1() {
    tmp_189_6_1_fu_33346_p1 = esl_zext<32,8>(reg_12117.read());
}

void batch_align2D_region::thread_tmp_189_6_2_fu_33396_p1() {
    tmp_189_6_2_fu_33396_p1 = esl_zext<32,8>(reg_12108.read());
}

void batch_align2D_region::thread_tmp_189_6_3_fu_33436_p1() {
    tmp_189_6_3_fu_33436_p1 = esl_zext<32,8>(reg_12132.read());
}

void batch_align2D_region::thread_tmp_189_6_4_fu_33450_p1() {
    tmp_189_6_4_fu_33450_p1 = esl_zext<32,8>(reg_12117.read());
}

void batch_align2D_region::thread_tmp_189_6_5_fu_33468_p1() {
    tmp_189_6_5_fu_33468_p1 = esl_zext<32,8>(reg_12108.read());
}

void batch_align2D_region::thread_tmp_189_6_6_fu_33481_p1() {
    tmp_189_6_6_fu_33481_p1 = esl_zext<32,8>(reg_12113.read());
}

void batch_align2D_region::thread_tmp_189_6_7_fu_33494_p1() {
    tmp_189_6_7_fu_33494_p1 = esl_zext<32,8>(reg_12132.read());
}

void batch_align2D_region::thread_tmp_189_6_fu_33296_p1() {
    tmp_189_6_fu_33296_p1 = esl_zext<32,8>(reg_12108.read());
}

void batch_align2D_region::thread_tmp_189_7_1_fu_36559_p1() {
    tmp_189_7_1_fu_36559_p1 = esl_zext<32,8>(reg_12159.read());
}

void batch_align2D_region::thread_tmp_189_7_2_fu_36609_p1() {
    tmp_189_7_2_fu_36609_p1 = esl_zext<32,8>(reg_12150.read());
}

void batch_align2D_region::thread_tmp_189_7_3_fu_36649_p1() {
    tmp_189_7_3_fu_36649_p1 = esl_zext<32,8>(reg_12174.read());
}

void batch_align2D_region::thread_tmp_189_7_4_fu_36663_p1() {
    tmp_189_7_4_fu_36663_p1 = esl_zext<32,8>(reg_12159.read());
}

void batch_align2D_region::thread_tmp_189_7_5_fu_36681_p1() {
    tmp_189_7_5_fu_36681_p1 = esl_zext<32,8>(reg_12150.read());
}

void batch_align2D_region::thread_tmp_189_7_6_fu_36694_p1() {
    tmp_189_7_6_fu_36694_p1 = esl_zext<32,8>(reg_12155.read());
}

void batch_align2D_region::thread_tmp_189_7_7_fu_36707_p1() {
    tmp_189_7_7_fu_36707_p1 = esl_zext<32,8>(reg_12174.read());
}

void batch_align2D_region::thread_tmp_189_7_fu_36509_p1() {
    tmp_189_7_fu_36509_p1 = esl_zext<32,8>(reg_12150.read());
}

void batch_align2D_region::thread_tmp_189_fu_14861_p2() {
    tmp_189_fu_14861_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_18_fu_14308_p3() {
    tmp_18_fu_14308_p3 = (!tmp_17_fu_14303_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_17_fu_14303_p2.read()[0].to_bool())? ref_patch_dy_0_63_16_fu_958.read(): tmp_16_fu_14295_p3.read());
}

void batch_align2D_region::thread_tmp_190_fu_14867_p3() {
    tmp_190_fu_14867_p3 = (!tmp_189_fu_14861_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_189_fu_14861_p2.read()[0].to_bool())? ref_patch_dx_0_63_31_fu_762.read(): tmp_188_fu_14853_p3.read());
}

void batch_align2D_region::thread_tmp_191_fu_14875_p2() {
    tmp_191_fu_14875_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_192_fu_14881_p3() {
    tmp_192_fu_14881_p3 = (!tmp_191_fu_14875_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_191_fu_14875_p2.read()[0].to_bool())? ref_patch_dx_0_63_38_fu_790.read(): tmp_190_fu_14867_p3.read());
}

void batch_align2D_region::thread_tmp_193_0_1_fu_13843_p2() {
    tmp_193_0_1_fu_13843_p2 = (!tmp_134_fu_13816_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_fu_13816_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_0_2_fu_13889_p2() {
    tmp_193_0_2_fu_13889_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_0_3_fu_13899_p2() {
    tmp_193_0_3_fu_13899_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_0_4_fu_13934_p2() {
    tmp_193_0_4_fu_13934_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_0_5_fu_13944_p2() {
    tmp_193_0_5_fu_13944_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_0_6_fu_13979_p2() {
    tmp_193_0_6_fu_13979_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_0_7_fu_13989_p2() {
    tmp_193_0_7_fu_13989_p2 = (!tmp_134_reg_39894.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_134_reg_39894.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_1_1_fu_17055_p2() {
    tmp_193_1_1_fu_17055_p2 = (!tmp_167_1_fu_17028_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_fu_17028_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_1_2_fu_17101_p2() {
    tmp_193_1_2_fu_17101_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_1_3_fu_17111_p2() {
    tmp_193_1_3_fu_17111_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_1_4_fu_17146_p2() {
    tmp_193_1_4_fu_17146_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_1_5_fu_17156_p2() {
    tmp_193_1_5_fu_17156_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_1_6_fu_17191_p2() {
    tmp_193_1_6_fu_17191_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_1_7_fu_17201_p2() {
    tmp_193_1_7_fu_17201_p2 = (!tmp_167_1_reg_41515.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_1_reg_41515.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_1_fu_17044_p2() {
    tmp_193_1_fu_17044_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_1_fu_17028_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_1_fu_17028_p2.read()));
}

void batch_align2D_region::thread_tmp_193_2_1_fu_20267_p2() {
    tmp_193_2_1_fu_20267_p2 = (!tmp_167_2_fu_20240_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_fu_20240_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_2_2_fu_20313_p2() {
    tmp_193_2_2_fu_20313_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_2_3_fu_20323_p2() {
    tmp_193_2_3_fu_20323_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_2_4_fu_20358_p2() {
    tmp_193_2_4_fu_20358_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_2_5_fu_20368_p2() {
    tmp_193_2_5_fu_20368_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_2_6_fu_20403_p2() {
    tmp_193_2_6_fu_20403_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_2_7_fu_20413_p2() {
    tmp_193_2_7_fu_20413_p2 = (!tmp_167_2_reg_43136.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_2_reg_43136.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_2_fu_20256_p2() {
    tmp_193_2_fu_20256_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_2_fu_20240_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_2_fu_20240_p2.read()));
}

void batch_align2D_region::thread_tmp_193_3_1_fu_23479_p2() {
    tmp_193_3_1_fu_23479_p2 = (!tmp_167_3_fu_23452_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_fu_23452_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_3_2_fu_23525_p2() {
    tmp_193_3_2_fu_23525_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_3_3_fu_23535_p2() {
    tmp_193_3_3_fu_23535_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_3_4_fu_23570_p2() {
    tmp_193_3_4_fu_23570_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_3_5_fu_23580_p2() {
    tmp_193_3_5_fu_23580_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_3_6_fu_23615_p2() {
    tmp_193_3_6_fu_23615_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_3_7_fu_23625_p2() {
    tmp_193_3_7_fu_23625_p2 = (!tmp_167_3_reg_44762.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_3_reg_44762.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_3_fu_23468_p2() {
    tmp_193_3_fu_23468_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_3_fu_23452_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_3_fu_23452_p2.read()));
}

void batch_align2D_region::thread_tmp_193_4_1_fu_26691_p2() {
    tmp_193_4_1_fu_26691_p2 = (!tmp_167_4_fu_26664_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_fu_26664_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_4_2_fu_26737_p2() {
    tmp_193_4_2_fu_26737_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_4_3_fu_26747_p2() {
    tmp_193_4_3_fu_26747_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_4_4_fu_26782_p2() {
    tmp_193_4_4_fu_26782_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_4_5_fu_26792_p2() {
    tmp_193_4_5_fu_26792_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_4_6_fu_26827_p2() {
    tmp_193_4_6_fu_26827_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_4_7_fu_26837_p2() {
    tmp_193_4_7_fu_26837_p2 = (!tmp_167_4_reg_46383.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_4_reg_46383.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_4_fu_26680_p2() {
    tmp_193_4_fu_26680_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_4_fu_26664_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_4_fu_26664_p2.read()));
}

void batch_align2D_region::thread_tmp_193_5_1_fu_29903_p2() {
    tmp_193_5_1_fu_29903_p2 = (!tmp_167_5_fu_29876_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_fu_29876_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_5_2_fu_29949_p2() {
    tmp_193_5_2_fu_29949_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_5_3_fu_29959_p2() {
    tmp_193_5_3_fu_29959_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_5_4_fu_29994_p2() {
    tmp_193_5_4_fu_29994_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_5_5_fu_30004_p2() {
    tmp_193_5_5_fu_30004_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_5_6_fu_30039_p2() {
    tmp_193_5_6_fu_30039_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_5_7_fu_30049_p2() {
    tmp_193_5_7_fu_30049_p2 = (!tmp_167_5_reg_48004.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_5_reg_48004.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_5_fu_29892_p2() {
    tmp_193_5_fu_29892_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_5_fu_29876_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_5_fu_29876_p2.read()));
}

void batch_align2D_region::thread_tmp_193_6_1_fu_33115_p2() {
    tmp_193_6_1_fu_33115_p2 = (!tmp_167_6_fu_33088_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_fu_33088_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_6_2_fu_33161_p2() {
    tmp_193_6_2_fu_33161_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_6_3_fu_33171_p2() {
    tmp_193_6_3_fu_33171_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_6_4_fu_33206_p2() {
    tmp_193_6_4_fu_33206_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_6_5_fu_33216_p2() {
    tmp_193_6_5_fu_33216_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_6_6_fu_33251_p2() {
    tmp_193_6_6_fu_33251_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_6_7_fu_33261_p2() {
    tmp_193_6_7_fu_33261_p2 = (!tmp_167_6_reg_49625.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_6_reg_49625.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_6_fu_33104_p2() {
    tmp_193_6_fu_33104_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_6_fu_33088_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_6_fu_33088_p2.read()));
}

void batch_align2D_region::thread_tmp_193_7_1_fu_36328_p2() {
    tmp_193_7_1_fu_36328_p2 = (!tmp_167_7_fu_36301_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_fu_36301_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_193_7_2_fu_36374_p2() {
    tmp_193_7_2_fu_36374_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_193_7_3_fu_36384_p2() {
    tmp_193_7_3_fu_36384_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_193_7_4_fu_36419_p2() {
    tmp_193_7_4_fu_36419_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_193_7_5_fu_36429_p2() {
    tmp_193_7_5_fu_36429_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_193_7_6_fu_36464_p2() {
    tmp_193_7_6_fu_36464_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_193_7_7_fu_36474_p2() {
    tmp_193_7_7_fu_36474_p2 = (!tmp_167_7_reg_51240.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_167_7_reg_51240.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_193_7_fu_36317_p2() {
    tmp_193_7_fu_36317_p2 = (!ap_const_lv7_B.is_01() || !tmp_167_7_fu_36301_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_167_7_fu_36301_p2.read()));
}

void batch_align2D_region::thread_tmp_193_fu_14889_p2() {
    tmp_193_fu_14889_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_194_0_1_fu_13849_p1() {
    tmp_194_0_1_fu_13849_p1 = esl_zext<64,7>(tmp_193_0_1_fu_13843_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_2_fu_13894_p1() {
    tmp_194_0_2_fu_13894_p1 = esl_zext<64,7>(tmp_193_0_2_fu_13889_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_3_fu_13904_p1() {
    tmp_194_0_3_fu_13904_p1 = esl_zext<64,7>(tmp_193_0_3_fu_13899_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_4_fu_13939_p1() {
    tmp_194_0_4_fu_13939_p1 = esl_zext<64,7>(tmp_193_0_4_fu_13934_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_5_fu_13949_p1() {
    tmp_194_0_5_fu_13949_p1 = esl_zext<64,7>(tmp_193_0_5_fu_13944_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_6_fu_13984_p1() {
    tmp_194_0_6_fu_13984_p1 = esl_zext<64,7>(tmp_193_0_6_fu_13979_p2.read());
}

void batch_align2D_region::thread_tmp_194_0_7_fu_13994_p1() {
    tmp_194_0_7_fu_13994_p1 = esl_zext<64,7>(tmp_193_0_7_fu_13989_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_1_fu_17061_p1() {
    tmp_194_1_1_fu_17061_p1 = esl_zext<64,7>(tmp_193_1_1_fu_17055_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_2_fu_17106_p1() {
    tmp_194_1_2_fu_17106_p1 = esl_zext<64,7>(tmp_193_1_2_fu_17101_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_3_fu_17116_p1() {
    tmp_194_1_3_fu_17116_p1 = esl_zext<64,7>(tmp_193_1_3_fu_17111_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_4_fu_17151_p1() {
    tmp_194_1_4_fu_17151_p1 = esl_zext<64,7>(tmp_193_1_4_fu_17146_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_5_fu_17161_p1() {
    tmp_194_1_5_fu_17161_p1 = esl_zext<64,7>(tmp_193_1_5_fu_17156_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_6_fu_17196_p1() {
    tmp_194_1_6_fu_17196_p1 = esl_zext<64,7>(tmp_193_1_6_fu_17191_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_7_fu_17206_p1() {
    tmp_194_1_7_fu_17206_p1 = esl_zext<64,7>(tmp_193_1_7_fu_17201_p2.read());
}

void batch_align2D_region::thread_tmp_194_1_fu_17050_p1() {
    tmp_194_1_fu_17050_p1 = esl_zext<64,7>(tmp_193_1_fu_17044_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_1_fu_20273_p1() {
    tmp_194_2_1_fu_20273_p1 = esl_zext<64,7>(tmp_193_2_1_fu_20267_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_2_fu_20318_p1() {
    tmp_194_2_2_fu_20318_p1 = esl_zext<64,7>(tmp_193_2_2_fu_20313_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_3_fu_20328_p1() {
    tmp_194_2_3_fu_20328_p1 = esl_zext<64,7>(tmp_193_2_3_fu_20323_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_4_fu_20363_p1() {
    tmp_194_2_4_fu_20363_p1 = esl_zext<64,7>(tmp_193_2_4_fu_20358_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_5_fu_20373_p1() {
    tmp_194_2_5_fu_20373_p1 = esl_zext<64,7>(tmp_193_2_5_fu_20368_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_6_fu_20408_p1() {
    tmp_194_2_6_fu_20408_p1 = esl_zext<64,7>(tmp_193_2_6_fu_20403_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_7_fu_20418_p1() {
    tmp_194_2_7_fu_20418_p1 = esl_zext<64,7>(tmp_193_2_7_fu_20413_p2.read());
}

void batch_align2D_region::thread_tmp_194_2_fu_20262_p1() {
    tmp_194_2_fu_20262_p1 = esl_zext<64,7>(tmp_193_2_fu_20256_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_1_fu_23485_p1() {
    tmp_194_3_1_fu_23485_p1 = esl_zext<64,7>(tmp_193_3_1_fu_23479_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_2_fu_23530_p1() {
    tmp_194_3_2_fu_23530_p1 = esl_zext<64,7>(tmp_193_3_2_fu_23525_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_3_fu_23540_p1() {
    tmp_194_3_3_fu_23540_p1 = esl_zext<64,7>(tmp_193_3_3_fu_23535_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_4_fu_23575_p1() {
    tmp_194_3_4_fu_23575_p1 = esl_zext<64,7>(tmp_193_3_4_fu_23570_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_5_fu_23585_p1() {
    tmp_194_3_5_fu_23585_p1 = esl_zext<64,7>(tmp_193_3_5_fu_23580_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_6_fu_23620_p1() {
    tmp_194_3_6_fu_23620_p1 = esl_zext<64,7>(tmp_193_3_6_fu_23615_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_7_fu_23630_p1() {
    tmp_194_3_7_fu_23630_p1 = esl_zext<64,7>(tmp_193_3_7_fu_23625_p2.read());
}

void batch_align2D_region::thread_tmp_194_3_fu_23474_p1() {
    tmp_194_3_fu_23474_p1 = esl_zext<64,7>(tmp_193_3_fu_23468_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_1_fu_26697_p1() {
    tmp_194_4_1_fu_26697_p1 = esl_zext<64,7>(tmp_193_4_1_fu_26691_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_2_fu_26742_p1() {
    tmp_194_4_2_fu_26742_p1 = esl_zext<64,7>(tmp_193_4_2_fu_26737_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_3_fu_26752_p1() {
    tmp_194_4_3_fu_26752_p1 = esl_zext<64,7>(tmp_193_4_3_fu_26747_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_4_fu_26787_p1() {
    tmp_194_4_4_fu_26787_p1 = esl_zext<64,7>(tmp_193_4_4_fu_26782_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_5_fu_26797_p1() {
    tmp_194_4_5_fu_26797_p1 = esl_zext<64,7>(tmp_193_4_5_fu_26792_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_6_fu_26832_p1() {
    tmp_194_4_6_fu_26832_p1 = esl_zext<64,7>(tmp_193_4_6_fu_26827_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_7_fu_26842_p1() {
    tmp_194_4_7_fu_26842_p1 = esl_zext<64,7>(tmp_193_4_7_fu_26837_p2.read());
}

void batch_align2D_region::thread_tmp_194_4_fu_26686_p1() {
    tmp_194_4_fu_26686_p1 = esl_zext<64,7>(tmp_193_4_fu_26680_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_1_fu_29909_p1() {
    tmp_194_5_1_fu_29909_p1 = esl_zext<64,7>(tmp_193_5_1_fu_29903_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_2_fu_29954_p1() {
    tmp_194_5_2_fu_29954_p1 = esl_zext<64,7>(tmp_193_5_2_fu_29949_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_3_fu_29964_p1() {
    tmp_194_5_3_fu_29964_p1 = esl_zext<64,7>(tmp_193_5_3_fu_29959_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_4_fu_29999_p1() {
    tmp_194_5_4_fu_29999_p1 = esl_zext<64,7>(tmp_193_5_4_fu_29994_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_5_fu_30009_p1() {
    tmp_194_5_5_fu_30009_p1 = esl_zext<64,7>(tmp_193_5_5_fu_30004_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_6_fu_30044_p1() {
    tmp_194_5_6_fu_30044_p1 = esl_zext<64,7>(tmp_193_5_6_fu_30039_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_7_fu_30054_p1() {
    tmp_194_5_7_fu_30054_p1 = esl_zext<64,7>(tmp_193_5_7_fu_30049_p2.read());
}

void batch_align2D_region::thread_tmp_194_5_fu_29898_p1() {
    tmp_194_5_fu_29898_p1 = esl_zext<64,7>(tmp_193_5_fu_29892_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_1_fu_33121_p1() {
    tmp_194_6_1_fu_33121_p1 = esl_zext<64,7>(tmp_193_6_1_fu_33115_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_2_fu_33166_p1() {
    tmp_194_6_2_fu_33166_p1 = esl_zext<64,7>(tmp_193_6_2_fu_33161_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_3_fu_33176_p1() {
    tmp_194_6_3_fu_33176_p1 = esl_zext<64,7>(tmp_193_6_3_fu_33171_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_4_fu_33211_p1() {
    tmp_194_6_4_fu_33211_p1 = esl_zext<64,7>(tmp_193_6_4_fu_33206_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_5_fu_33221_p1() {
    tmp_194_6_5_fu_33221_p1 = esl_zext<64,7>(tmp_193_6_5_fu_33216_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_6_fu_33256_p1() {
    tmp_194_6_6_fu_33256_p1 = esl_zext<64,7>(tmp_193_6_6_fu_33251_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_7_fu_33266_p1() {
    tmp_194_6_7_fu_33266_p1 = esl_zext<64,7>(tmp_193_6_7_fu_33261_p2.read());
}

void batch_align2D_region::thread_tmp_194_6_fu_33110_p1() {
    tmp_194_6_fu_33110_p1 = esl_zext<64,7>(tmp_193_6_fu_33104_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_1_fu_36334_p1() {
    tmp_194_7_1_fu_36334_p1 = esl_zext<64,7>(tmp_193_7_1_fu_36328_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_2_fu_36379_p1() {
    tmp_194_7_2_fu_36379_p1 = esl_zext<64,7>(tmp_193_7_2_fu_36374_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_3_fu_36389_p1() {
    tmp_194_7_3_fu_36389_p1 = esl_zext<64,7>(tmp_193_7_3_fu_36384_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_4_fu_36424_p1() {
    tmp_194_7_4_fu_36424_p1 = esl_zext<64,7>(tmp_193_7_4_fu_36419_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_5_fu_36434_p1() {
    tmp_194_7_5_fu_36434_p1 = esl_zext<64,7>(tmp_193_7_5_fu_36429_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_6_fu_36469_p1() {
    tmp_194_7_6_fu_36469_p1 = esl_zext<64,7>(tmp_193_7_6_fu_36464_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_7_fu_36479_p1() {
    tmp_194_7_7_fu_36479_p1 = esl_zext<64,7>(tmp_193_7_7_fu_36474_p2.read());
}

void batch_align2D_region::thread_tmp_194_7_fu_36323_p1() {
    tmp_194_7_fu_36323_p1 = esl_zext<64,7>(tmp_193_7_fu_36317_p2.read());
}

void batch_align2D_region::thread_tmp_194_fu_14895_p3() {
    tmp_194_fu_14895_p3 = (!tmp_193_fu_14889_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_193_fu_14889_p2.read()[0].to_bool())? ref_patch_dx_0_63_45_fu_818.read(): tmp_192_fu_14881_p3.read());
}

void batch_align2D_region::thread_tmp_195_0_1_fu_14201_p1() {
    tmp_195_0_1_fu_14201_p1 = esl_zext<32,8>(ref_patch_with_borde_27_reg_39966.read());
}

void batch_align2D_region::thread_tmp_195_0_2_fu_14214_p1() {
    tmp_195_0_2_fu_14214_p1 = esl_zext<32,8>(ref_patch_with_borde_29_reg_39996.read());
}

void batch_align2D_region::thread_tmp_195_0_3_fu_14227_p1() {
    tmp_195_0_3_fu_14227_p1 = esl_zext<32,8>(ref_patch_with_borde_31_reg_40001.read());
}

void batch_align2D_region::thread_tmp_195_0_4_fu_14231_p1() {
    tmp_195_0_4_fu_14231_p1 = esl_zext<32,8>(ref_patch_with_borde_33_reg_40031.read());
}

void batch_align2D_region::thread_tmp_195_0_5_fu_14235_p1() {
    tmp_195_0_5_fu_14235_p1 = esl_zext<32,8>(ref_patch_with_borde_35_reg_40036.read());
}

void batch_align2D_region::thread_tmp_195_0_6_fu_14239_p1() {
    tmp_195_0_6_fu_14239_p1 = esl_zext<32,8>(ref_patch_with_borde_37_reg_40066.read());
}

void batch_align2D_region::thread_tmp_195_0_7_fu_14243_p1() {
    tmp_195_0_7_fu_14243_p1 = esl_zext<32,8>(ref_patch_with_borde_39_reg_40071.read());
}

void batch_align2D_region::thread_tmp_195_1_1_fu_17413_p1() {
    tmp_195_1_1_fu_17413_p1 = esl_zext<32,8>(ref_patch_with_borde_51_reg_41587.read());
}

void batch_align2D_region::thread_tmp_195_1_2_fu_17426_p1() {
    tmp_195_1_2_fu_17426_p1 = esl_zext<32,8>(ref_patch_with_borde_53_reg_41617.read());
}

void batch_align2D_region::thread_tmp_195_1_3_fu_17439_p1() {
    tmp_195_1_3_fu_17439_p1 = esl_zext<32,8>(ref_patch_with_borde_55_reg_41622.read());
}

void batch_align2D_region::thread_tmp_195_1_4_fu_17443_p1() {
    tmp_195_1_4_fu_17443_p1 = esl_zext<32,8>(ref_patch_with_borde_57_reg_41652.read());
}

void batch_align2D_region::thread_tmp_195_1_5_fu_17447_p1() {
    tmp_195_1_5_fu_17447_p1 = esl_zext<32,8>(ref_patch_with_borde_59_reg_41657.read());
}

void batch_align2D_region::thread_tmp_195_1_6_fu_17451_p1() {
    tmp_195_1_6_fu_17451_p1 = esl_zext<32,8>(ref_patch_with_borde_61_reg_41687.read());
}

void batch_align2D_region::thread_tmp_195_1_7_fu_17455_p1() {
    tmp_195_1_7_fu_17455_p1 = esl_zext<32,8>(ref_patch_with_borde_63_reg_41692.read());
}

void batch_align2D_region::thread_tmp_195_1_fu_17096_p1() {
    tmp_195_1_fu_17096_p1 = esl_zext<32,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_195_2_1_fu_20625_p1() {
    tmp_195_2_1_fu_20625_p1 = esl_zext<32,8>(ref_patch_with_borde_75_reg_43208.read());
}

void batch_align2D_region::thread_tmp_195_2_2_fu_20638_p1() {
    tmp_195_2_2_fu_20638_p1 = esl_zext<32,8>(ref_patch_with_borde_77_reg_43238.read());
}

void batch_align2D_region::thread_tmp_195_2_3_fu_20651_p1() {
    tmp_195_2_3_fu_20651_p1 = esl_zext<32,8>(ref_patch_with_borde_79_reg_43243.read());
}

void batch_align2D_region::thread_tmp_195_2_4_fu_20655_p1() {
    tmp_195_2_4_fu_20655_p1 = esl_zext<32,8>(ref_patch_with_borde_81_reg_43273.read());
}

void batch_align2D_region::thread_tmp_195_2_5_fu_20659_p1() {
    tmp_195_2_5_fu_20659_p1 = esl_zext<32,8>(ref_patch_with_borde_83_reg_43278.read());
}

void batch_align2D_region::thread_tmp_195_2_6_fu_20663_p1() {
    tmp_195_2_6_fu_20663_p1 = esl_zext<32,8>(ref_patch_with_borde_85_reg_43308.read());
}

void batch_align2D_region::thread_tmp_195_2_7_fu_20667_p1() {
    tmp_195_2_7_fu_20667_p1 = esl_zext<32,8>(ref_patch_with_borde_87_reg_43313.read());
}

void batch_align2D_region::thread_tmp_195_2_fu_20308_p1() {
    tmp_195_2_fu_20308_p1 = esl_zext<32,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_195_3_1_fu_23837_p1() {
    tmp_195_3_1_fu_23837_p1 = esl_zext<32,8>(ref_patch_with_borde_99_reg_44834.read());
}

void batch_align2D_region::thread_tmp_195_3_2_fu_23850_p1() {
    tmp_195_3_2_fu_23850_p1 = esl_zext<32,8>(ref_patch_with_borde_101_reg_44864.read());
}

void batch_align2D_region::thread_tmp_195_3_3_fu_23863_p1() {
    tmp_195_3_3_fu_23863_p1 = esl_zext<32,8>(ref_patch_with_borde_103_reg_44869.read());
}

void batch_align2D_region::thread_tmp_195_3_4_fu_23867_p1() {
    tmp_195_3_4_fu_23867_p1 = esl_zext<32,8>(ref_patch_with_borde_105_reg_44899.read());
}

void batch_align2D_region::thread_tmp_195_3_5_fu_23871_p1() {
    tmp_195_3_5_fu_23871_p1 = esl_zext<32,8>(ref_patch_with_borde_107_reg_44904.read());
}

void batch_align2D_region::thread_tmp_195_3_6_fu_23875_p1() {
    tmp_195_3_6_fu_23875_p1 = esl_zext<32,8>(ref_patch_with_borde_109_reg_44934.read());
}

void batch_align2D_region::thread_tmp_195_3_7_fu_23879_p1() {
    tmp_195_3_7_fu_23879_p1 = esl_zext<32,8>(ref_patch_with_borde_111_reg_44939.read());
}

void batch_align2D_region::thread_tmp_195_3_fu_23520_p1() {
    tmp_195_3_fu_23520_p1 = esl_zext<32,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_195_4_1_fu_27049_p1() {
    tmp_195_4_1_fu_27049_p1 = esl_zext<32,8>(ref_patch_with_borde_123_reg_46455.read());
}

void batch_align2D_region::thread_tmp_195_4_2_fu_27062_p1() {
    tmp_195_4_2_fu_27062_p1 = esl_zext<32,8>(ref_patch_with_borde_125_reg_46485.read());
}

void batch_align2D_region::thread_tmp_195_4_3_fu_27075_p1() {
    tmp_195_4_3_fu_27075_p1 = esl_zext<32,8>(ref_patch_with_borde_127_reg_46490.read());
}

void batch_align2D_region::thread_tmp_195_4_4_fu_27079_p1() {
    tmp_195_4_4_fu_27079_p1 = esl_zext<32,8>(ref_patch_with_borde_129_reg_46520.read());
}

void batch_align2D_region::thread_tmp_195_4_5_fu_27083_p1() {
    tmp_195_4_5_fu_27083_p1 = esl_zext<32,8>(ref_patch_with_borde_131_reg_46525.read());
}

void batch_align2D_region::thread_tmp_195_4_6_fu_27087_p1() {
    tmp_195_4_6_fu_27087_p1 = esl_zext<32,8>(ref_patch_with_borde_133_reg_46555.read());
}

void batch_align2D_region::thread_tmp_195_4_7_fu_27091_p1() {
    tmp_195_4_7_fu_27091_p1 = esl_zext<32,8>(ref_patch_with_borde_135_reg_46560.read());
}

void batch_align2D_region::thread_tmp_195_4_fu_26732_p1() {
    tmp_195_4_fu_26732_p1 = esl_zext<32,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_195_5_1_fu_30261_p1() {
    tmp_195_5_1_fu_30261_p1 = esl_zext<32,8>(ref_patch_with_borde_147_reg_48076.read());
}

void batch_align2D_region::thread_tmp_195_5_2_fu_30274_p1() {
    tmp_195_5_2_fu_30274_p1 = esl_zext<32,8>(ref_patch_with_borde_149_reg_48106.read());
}

void batch_align2D_region::thread_tmp_195_5_3_fu_30287_p1() {
    tmp_195_5_3_fu_30287_p1 = esl_zext<32,8>(ref_patch_with_borde_151_reg_48111.read());
}

void batch_align2D_region::thread_tmp_195_5_4_fu_30291_p1() {
    tmp_195_5_4_fu_30291_p1 = esl_zext<32,8>(ref_patch_with_borde_153_reg_48141.read());
}

void batch_align2D_region::thread_tmp_195_5_5_fu_30295_p1() {
    tmp_195_5_5_fu_30295_p1 = esl_zext<32,8>(ref_patch_with_borde_155_reg_48146.read());
}

void batch_align2D_region::thread_tmp_195_5_6_fu_30299_p1() {
    tmp_195_5_6_fu_30299_p1 = esl_zext<32,8>(ref_patch_with_borde_157_reg_48176.read());
}

void batch_align2D_region::thread_tmp_195_5_7_fu_30303_p1() {
    tmp_195_5_7_fu_30303_p1 = esl_zext<32,8>(ref_patch_with_borde_159_reg_48181.read());
}

void batch_align2D_region::thread_tmp_195_5_fu_29944_p1() {
    tmp_195_5_fu_29944_p1 = esl_zext<32,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_195_6_1_fu_33473_p1() {
    tmp_195_6_1_fu_33473_p1 = esl_zext<32,8>(ref_patch_with_borde_171_reg_49697.read());
}

void batch_align2D_region::thread_tmp_195_6_2_fu_33486_p1() {
    tmp_195_6_2_fu_33486_p1 = esl_zext<32,8>(ref_patch_with_borde_173_reg_49727.read());
}

void batch_align2D_region::thread_tmp_195_6_3_fu_33499_p1() {
    tmp_195_6_3_fu_33499_p1 = esl_zext<32,8>(ref_patch_with_borde_175_reg_49732.read());
}

void batch_align2D_region::thread_tmp_195_6_4_fu_33503_p1() {
    tmp_195_6_4_fu_33503_p1 = esl_zext<32,8>(ref_patch_with_borde_177_reg_49762.read());
}

void batch_align2D_region::thread_tmp_195_6_5_fu_33507_p1() {
    tmp_195_6_5_fu_33507_p1 = esl_zext<32,8>(ref_patch_with_borde_179_reg_49767.read());
}

void batch_align2D_region::thread_tmp_195_6_6_fu_33511_p1() {
    tmp_195_6_6_fu_33511_p1 = esl_zext<32,8>(ref_patch_with_borde_181_reg_49797.read());
}

void batch_align2D_region::thread_tmp_195_6_7_fu_33515_p1() {
    tmp_195_6_7_fu_33515_p1 = esl_zext<32,8>(ref_patch_with_borde_183_reg_49802.read());
}

void batch_align2D_region::thread_tmp_195_6_fu_33156_p1() {
    tmp_195_6_fu_33156_p1 = esl_zext<32,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_195_7_1_fu_36686_p1() {
    tmp_195_7_1_fu_36686_p1 = esl_zext<32,8>(ref_patch_with_borde_195_reg_51312.read());
}

void batch_align2D_region::thread_tmp_195_7_2_fu_36699_p1() {
    tmp_195_7_2_fu_36699_p1 = esl_zext<32,8>(ref_patch_with_borde_197_reg_51342.read());
}

void batch_align2D_region::thread_tmp_195_7_3_fu_36712_p1() {
    tmp_195_7_3_fu_36712_p1 = esl_zext<32,8>(ref_patch_with_borde_199_reg_51347.read());
}

void batch_align2D_region::thread_tmp_195_7_4_fu_36716_p1() {
    tmp_195_7_4_fu_36716_p1 = esl_zext<32,8>(ref_patch_with_borde_201_reg_51377.read());
}

void batch_align2D_region::thread_tmp_195_7_5_fu_36720_p1() {
    tmp_195_7_5_fu_36720_p1 = esl_zext<32,8>(ref_patch_with_borde_203_reg_51382.read());
}

void batch_align2D_region::thread_tmp_195_7_6_fu_36724_p1() {
    tmp_195_7_6_fu_36724_p1 = esl_zext<32,8>(ref_patch_with_borde_205_reg_51412.read());
}

void batch_align2D_region::thread_tmp_195_7_7_fu_36728_p1() {
    tmp_195_7_7_fu_36728_p1 = esl_zext<32,8>(ref_patch_with_borde_207_reg_51417.read());
}

void batch_align2D_region::thread_tmp_195_7_fu_36369_p1() {
    tmp_195_7_fu_36369_p1 = esl_zext<32,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_195_fu_14903_p2() {
    tmp_195_fu_14903_p2 = (!it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_2_fu_14814_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_196_fu_14917_p3() {
    tmp_196_fu_14917_p3 = (!tmp_182_fu_14819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_182_fu_14819_p2.read()[0].to_bool())? ref_patch_dy_0_63_3_fu_906.read(): ref_patch_dy_0_63_59_fu_1130.read());
}

void batch_align2D_region::thread_tmp_197_fu_14925_p3() {
    tmp_197_fu_14925_p3 = (!tmp_184_fu_14833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_184_fu_14833_p2.read()[0].to_bool())? ref_patch_dy_0_63_11_fu_938.read(): tmp_196_fu_14917_p3.read());
}

void batch_align2D_region::thread_tmp_198_fu_14933_p3() {
    tmp_198_fu_14933_p3 = (!tmp_187_fu_14847_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_187_fu_14847_p2.read()[0].to_bool())? ref_patch_dy_0_63_19_fu_970.read(): tmp_197_fu_14925_p3.read());
}

void batch_align2D_region::thread_tmp_199_fu_14941_p3() {
    tmp_199_fu_14941_p3 = (!tmp_189_fu_14861_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_189_fu_14861_p2.read()[0].to_bool())? ref_patch_dy_0_63_27_fu_1002.read(): tmp_198_fu_14933_p3.read());
}

void batch_align2D_region::thread_tmp_1_fu_12199_p1() {
    tmp_1_fu_12199_p1 = esl_sext<64,32>(my_ref_patch_with_border_ptr.read());
}

void batch_align2D_region::thread_tmp_1_i_i10_fu_29731_p2() {
    tmp_1_i_i10_fu_29731_p2 = (!tmp_V_28_fu_29721_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_28_fu_29721_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i11_fu_29767_p2() {
    tmp_1_i_i11_fu_29767_p2 = (!tmp_V_26_fu_29757_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_26_fu_29757_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i12_fu_32943_p2() {
    tmp_1_i_i12_fu_32943_p2 = (!tmp_V_32_fu_32933_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_32_fu_32933_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i13_fu_32979_p2() {
    tmp_1_i_i13_fu_32979_p2 = (!tmp_V_30_fu_32969_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_30_fu_32969_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i14_fu_36156_p2() {
    tmp_1_i_i14_fu_36156_p2 = (!tmp_V_36_fu_36146_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_36_fu_36146_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i15_fu_36192_p2() {
    tmp_1_i_i15_fu_36192_p2 = (!tmp_V_34_fu_36182_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_34_fu_36182_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i1_fu_16883_p2() {
    tmp_1_i_i1_fu_16883_p2 = (!tmp_V_12_fu_16873_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_12_fu_16873_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i2_fu_16919_p2() {
    tmp_1_i_i2_fu_16919_p2 = (!tmp_V_10_fu_16909_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_10_fu_16909_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i3_fu_20095_p2() {
    tmp_1_i_i3_fu_20095_p2 = (!tmp_V_16_fu_20085_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_16_fu_20085_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i4_fu_20131_p2() {
    tmp_1_i_i4_fu_20131_p2 = (!tmp_V_14_fu_20121_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_14_fu_20121_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i5_fu_13671_p2() {
    tmp_1_i_i5_fu_13671_p2 = (!tmp_V_8_fu_13661_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_8_fu_13661_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i6_fu_23307_p2() {
    tmp_1_i_i6_fu_23307_p2 = (!tmp_V_20_fu_23297_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_20_fu_23297_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i7_fu_23343_p2() {
    tmp_1_i_i7_fu_23343_p2 = (!tmp_V_18_fu_23333_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_18_fu_23333_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i8_fu_26519_p2() {
    tmp_1_i_i8_fu_26519_p2 = (!tmp_V_24_fu_26509_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_24_fu_26509_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i9_fu_26555_p2() {
    tmp_1_i_i9_fu_26555_p2 = (!tmp_V_22_fu_26545_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_22_fu_26545_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i_fu_13707_p2() {
    tmp_1_i_i_fu_13707_p2 = (!tmp_V_6_fu_13697_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_6_fu_13697_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_200_fu_14949_p3() {
    tmp_200_fu_14949_p3 = (!tmp_191_fu_14875_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_191_fu_14875_p2.read()[0].to_bool())? ref_patch_dy_0_63_35_fu_1034.read(): tmp_199_fu_14941_p3.read());
}

void batch_align2D_region::thread_tmp_202_fu_14957_p3() {
    tmp_202_fu_14957_p3 = (!tmp_193_fu_14889_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_193_fu_14889_p2.read()[0].to_bool())? ref_patch_dy_0_63_43_fu_1066.read(): tmp_200_fu_14949_p3.read());
}

void batch_align2D_region::thread_tmp_205_fu_15026_p2() {
    tmp_205_fu_15026_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_206_fu_15032_p3() {
    tmp_206_fu_15032_p3 = (!tmp_205_fu_15026_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_205_fu_15026_p2.read()[0].to_bool())? ref_patch_dx_0_63_11_fu_682.read(): ref_patch_dx_0_63_60_fu_878.read());
}

void batch_align2D_region::thread_tmp_207_fu_15040_p2() {
    tmp_207_fu_15040_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_208_fu_15046_p3() {
    tmp_208_fu_15046_p3 = (!tmp_207_fu_15040_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_207_fu_15040_p2.read()[0].to_bool())? ref_patch_dx_0_63_18_fu_710.read(): tmp_206_fu_15032_p3.read());
}

void batch_align2D_region::thread_tmp_209_fu_15054_p2() {
    tmp_209_fu_15054_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_20_fu_14316_p2() {
    tmp_20_fu_14316_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_210_fu_15060_p3() {
    tmp_210_fu_15060_p3 = (!tmp_209_fu_15054_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_209_fu_15054_p2.read()[0].to_bool())? ref_patch_dx_0_63_25_fu_738.read(): tmp_208_fu_15046_p3.read());
}

void batch_align2D_region::thread_tmp_211_fu_15068_p2() {
    tmp_211_fu_15068_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_212_fu_15074_p3() {
    tmp_212_fu_15074_p3 = (!tmp_211_fu_15068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_211_fu_15068_p2.read()[0].to_bool())? ref_patch_dx_0_63_32_fu_766.read(): tmp_210_fu_15060_p3.read());
}

void batch_align2D_region::thread_tmp_213_fu_15082_p2() {
    tmp_213_fu_15082_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_214_fu_15088_p3() {
    tmp_214_fu_15088_p3 = (!tmp_213_fu_15082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_213_fu_15082_p2.read()[0].to_bool())? ref_patch_dx_0_63_39_fu_794.read(): tmp_212_fu_15074_p3.read());
}

void batch_align2D_region::thread_tmp_215_fu_15096_p2() {
    tmp_215_fu_15096_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_216_fu_15102_p3() {
    tmp_216_fu_15102_p3 = (!tmp_215_fu_15096_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_215_fu_15096_p2.read()[0].to_bool())? ref_patch_dx_0_63_46_fu_822.read(): tmp_214_fu_15088_p3.read());
}

void batch_align2D_region::thread_tmp_217_fu_15110_p2() {
    tmp_217_fu_15110_p2 = (!it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_3_fu_15021_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_218_fu_15124_p3() {
    tmp_218_fu_15124_p3 = (!tmp_205_fu_15026_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_205_fu_15026_p2.read()[0].to_bool())? ref_patch_dy_0_63_4_fu_910.read(): ref_patch_dy_0_63_60_fu_1134.read());
}

void batch_align2D_region::thread_tmp_219_fu_15132_p3() {
    tmp_219_fu_15132_p3 = (!tmp_207_fu_15040_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_207_fu_15040_p2.read()[0].to_bool())? ref_patch_dy_0_63_12_fu_942.read(): tmp_218_fu_15124_p3.read());
}

void batch_align2D_region::thread_tmp_21_fu_14321_p3() {
    tmp_21_fu_14321_p3 = (!tmp_20_fu_14316_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_20_fu_14316_p2.read()[0].to_bool())? ref_patch_dy_0_63_24_fu_990.read(): tmp_18_fu_14308_p3.read());
}

void batch_align2D_region::thread_tmp_220_fu_15140_p3() {
    tmp_220_fu_15140_p3 = (!tmp_209_fu_15054_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_209_fu_15054_p2.read()[0].to_bool())? ref_patch_dy_0_63_20_fu_974.read(): tmp_219_fu_15132_p3.read());
}

void batch_align2D_region::thread_tmp_221_fu_15148_p3() {
    tmp_221_fu_15148_p3 = (!tmp_211_fu_15068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_211_fu_15068_p2.read()[0].to_bool())? ref_patch_dy_0_63_28_fu_1006.read(): tmp_220_fu_15140_p3.read());
}

void batch_align2D_region::thread_tmp_222_fu_15156_p3() {
    tmp_222_fu_15156_p3 = (!tmp_213_fu_15082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_213_fu_15082_p2.read()[0].to_bool())? ref_patch_dy_0_63_36_fu_1038.read(): tmp_221_fu_15148_p3.read());
}

void batch_align2D_region::thread_tmp_223_fu_15164_p3() {
    tmp_223_fu_15164_p3 = (!tmp_215_fu_15096_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_215_fu_15096_p2.read()[0].to_bool())? ref_patch_dy_0_63_44_fu_1070.read(): tmp_222_fu_15156_p3.read());
}

void batch_align2D_region::thread_tmp_224_fu_15206_p2() {
    tmp_224_fu_15206_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_225_fu_15212_p3() {
    tmp_225_fu_15212_p3 = (!tmp_224_fu_15206_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_224_fu_15206_p2.read()[0].to_bool())? ref_patch_dx_0_63_12_fu_686.read(): ref_patch_dx_0_63_61_fu_882.read());
}

void batch_align2D_region::thread_tmp_226_fu_15220_p2() {
    tmp_226_fu_15220_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_227_fu_15226_p3() {
    tmp_227_fu_15226_p3 = (!tmp_226_fu_15220_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_226_fu_15220_p2.read()[0].to_bool())? ref_patch_dx_0_63_19_fu_714.read(): tmp_225_fu_15212_p3.read());
}

void batch_align2D_region::thread_tmp_228_fu_15234_p2() {
    tmp_228_fu_15234_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_229_fu_15240_p3() {
    tmp_229_fu_15240_p3 = (!tmp_228_fu_15234_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_228_fu_15234_p2.read()[0].to_bool())? ref_patch_dx_0_63_26_fu_742.read(): tmp_227_fu_15226_p3.read());
}

void batch_align2D_region::thread_tmp_22_fu_14329_p2() {
    tmp_22_fu_14329_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_230_fu_15248_p2() {
    tmp_230_fu_15248_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_231_fu_15254_p3() {
    tmp_231_fu_15254_p3 = (!tmp_230_fu_15248_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_230_fu_15248_p2.read()[0].to_bool())? ref_patch_dx_0_63_33_fu_770.read(): tmp_229_fu_15240_p3.read());
}

void batch_align2D_region::thread_tmp_232_fu_15262_p2() {
    tmp_232_fu_15262_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_233_fu_15268_p3() {
    tmp_233_fu_15268_p3 = (!tmp_232_fu_15262_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_232_fu_15262_p2.read()[0].to_bool())? ref_patch_dx_0_63_40_fu_798.read(): tmp_231_fu_15254_p3.read());
}

void batch_align2D_region::thread_tmp_234_fu_15276_p2() {
    tmp_234_fu_15276_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_235_fu_15282_p3() {
    tmp_235_fu_15282_p3 = (!tmp_234_fu_15276_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_234_fu_15276_p2.read()[0].to_bool())? ref_patch_dx_0_63_47_fu_826.read(): tmp_233_fu_15268_p3.read());
}

void batch_align2D_region::thread_tmp_236_fu_15290_p2() {
    tmp_236_fu_15290_p2 = (!it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_4_fu_15201_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_237_fu_15330_p3() {
    tmp_237_fu_15330_p3 = (!tmp_224_reg_40413.read()[0].is_01())? sc_lv<32>(): ((tmp_224_reg_40413.read()[0].to_bool())? ref_patch_dy_0_63_5_fu_914.read(): ref_patch_dy_0_63_61_fu_1138.read());
}

void batch_align2D_region::thread_tmp_238_fu_15337_p3() {
    tmp_238_fu_15337_p3 = (!tmp_226_reg_40418.read()[0].is_01())? sc_lv<32>(): ((tmp_226_reg_40418.read()[0].to_bool())? ref_patch_dy_0_63_13_fu_946.read(): tmp_237_fu_15330_p3.read());
}

void batch_align2D_region::thread_tmp_239_fu_15344_p3() {
    tmp_239_fu_15344_p3 = (!tmp_228_reg_40423.read()[0].is_01())? sc_lv<32>(): ((tmp_228_reg_40423.read()[0].to_bool())? ref_patch_dy_0_63_21_fu_978.read(): tmp_238_fu_15337_p3.read());
}

void batch_align2D_region::thread_tmp_23_fu_14334_p3() {
    tmp_23_fu_14334_p3 = (!tmp_22_fu_14329_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_22_fu_14329_p2.read()[0].to_bool())? ref_patch_dy_0_63_32_fu_1022.read(): tmp_21_fu_14321_p3.read());
}

void batch_align2D_region::thread_tmp_240_fu_15351_p3() {
    tmp_240_fu_15351_p3 = (!tmp_230_reg_40428.read()[0].is_01())? sc_lv<32>(): ((tmp_230_reg_40428.read()[0].to_bool())? ref_patch_dy_0_63_29_fu_1010.read(): tmp_239_fu_15344_p3.read());
}

void batch_align2D_region::thread_tmp_241_fu_15358_p3() {
    tmp_241_fu_15358_p3 = (!tmp_232_reg_40433.read()[0].is_01())? sc_lv<32>(): ((tmp_232_reg_40433.read()[0].to_bool())? ref_patch_dy_0_63_37_fu_1042.read(): tmp_240_fu_15351_p3.read());
}

void batch_align2D_region::thread_tmp_242_fu_15365_p3() {
    tmp_242_fu_15365_p3 = (!tmp_234_reg_40438.read()[0].is_01())? sc_lv<32>(): ((tmp_234_reg_40438.read()[0].to_bool())? ref_patch_dy_0_63_45_fu_1074.read(): tmp_241_fu_15358_p3.read());
}

void batch_align2D_region::thread_tmp_243_fu_15432_p2() {
    tmp_243_fu_15432_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_244_fu_15438_p3() {
    tmp_244_fu_15438_p3 = (!tmp_243_fu_15432_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_243_fu_15432_p2.read()[0].to_bool())? ref_patch_dx_0_63_13_fu_690.read(): ref_patch_dx_0_63_62_fu_886.read());
}

void batch_align2D_region::thread_tmp_245_fu_15446_p2() {
    tmp_245_fu_15446_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_246_fu_15452_p3() {
    tmp_246_fu_15452_p3 = (!tmp_245_fu_15446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_245_fu_15446_p2.read()[0].to_bool())? ref_patch_dx_0_63_20_fu_718.read(): tmp_244_fu_15438_p3.read());
}

void batch_align2D_region::thread_tmp_247_fu_15460_p2() {
    tmp_247_fu_15460_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_248_fu_15466_p3() {
    tmp_248_fu_15466_p3 = (!tmp_247_fu_15460_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_247_fu_15460_p2.read()[0].to_bool())? ref_patch_dx_0_63_27_fu_746.read(): tmp_246_fu_15452_p3.read());
}

void batch_align2D_region::thread_tmp_249_fu_15474_p2() {
    tmp_249_fu_15474_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_24_fu_14342_p2() {
    tmp_24_fu_14342_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_250_fu_15480_p3() {
    tmp_250_fu_15480_p3 = (!tmp_249_fu_15474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_249_fu_15474_p2.read()[0].to_bool())? ref_patch_dx_0_63_34_fu_774.read(): tmp_248_fu_15466_p3.read());
}

void batch_align2D_region::thread_tmp_251_fu_15488_p2() {
    tmp_251_fu_15488_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_252_fu_15494_p3() {
    tmp_252_fu_15494_p3 = (!tmp_251_fu_15488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_251_fu_15488_p2.read()[0].to_bool())? ref_patch_dx_0_63_41_fu_802.read(): tmp_250_fu_15480_p3.read());
}

void batch_align2D_region::thread_tmp_253_fu_15502_p2() {
    tmp_253_fu_15502_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_254_fu_15508_p3() {
    tmp_254_fu_15508_p3 = (!tmp_253_fu_15502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_253_fu_15502_p2.read()[0].to_bool())? ref_patch_dx_0_63_48_fu_830.read(): tmp_252_fu_15494_p3.read());
}

void batch_align2D_region::thread_tmp_255_fu_15516_p2() {
    tmp_255_fu_15516_p2 = (!it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_5_fu_15427_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_258_cast_fu_16979_p1() {
    tmp_258_cast_fu_16979_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_1_phi_fu_7872_p4.read());
}

void batch_align2D_region::thread_tmp_258_fu_15530_p3() {
    tmp_258_fu_15530_p3 = (!tmp_243_fu_15432_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_243_fu_15432_p2.read()[0].to_bool())? ref_patch_dy_0_63_6_fu_918.read(): ref_patch_dy_0_63_62_fu_1142.read());
}

void batch_align2D_region::thread_tmp_259_fu_15538_p3() {
    tmp_259_fu_15538_p3 = (!tmp_245_fu_15446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_245_fu_15446_p2.read()[0].to_bool())? ref_patch_dy_0_63_14_fu_950.read(): tmp_258_fu_15530_p3.read());
}

void batch_align2D_region::thread_tmp_25_fu_14347_p3() {
    tmp_25_fu_14347_p3 = (!tmp_24_fu_14342_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_24_fu_14342_p2.read()[0].to_bool())? ref_patch_dy_0_63_40_fu_1054.read(): tmp_23_fu_14334_p3.read());
}

void batch_align2D_region::thread_tmp_260_fu_15546_p3() {
    tmp_260_fu_15546_p3 = (!tmp_247_fu_15460_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_247_fu_15460_p2.read()[0].to_bool())? ref_patch_dy_0_63_22_fu_982.read(): tmp_259_fu_15538_p3.read());
}

void batch_align2D_region::thread_tmp_261_fu_15554_p3() {
    tmp_261_fu_15554_p3 = (!tmp_249_fu_15474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_249_fu_15474_p2.read()[0].to_bool())? ref_patch_dy_0_63_30_fu_1014.read(): tmp_260_fu_15546_p3.read());
}

void batch_align2D_region::thread_tmp_262_fu_15562_p3() {
    tmp_262_fu_15562_p3 = (!tmp_251_fu_15488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_251_fu_15488_p2.read()[0].to_bool())? ref_patch_dy_0_63_38_fu_1046.read(): tmp_261_fu_15554_p3.read());
}

void batch_align2D_region::thread_tmp_263_fu_15570_p3() {
    tmp_263_fu_15570_p3 = (!tmp_253_fu_15502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_253_fu_15502_p2.read()[0].to_bool())? ref_patch_dy_0_63_46_fu_1078.read(): tmp_262_fu_15562_p3.read());
}

void batch_align2D_region::thread_tmp_264_fu_15639_p2() {
    tmp_264_fu_15639_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_265_fu_15645_p3() {
    tmp_265_fu_15645_p3 = (!tmp_264_fu_15639_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_264_fu_15639_p2.read()[0].to_bool())? ref_patch_dx_0_63_14_fu_694.read(): ref_patch_dx_0_63_63_fu_890.read());
}

void batch_align2D_region::thread_tmp_266_fu_15653_p2() {
    tmp_266_fu_15653_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_267_fu_15659_p3() {
    tmp_267_fu_15659_p3 = (!tmp_266_fu_15653_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_266_fu_15653_p2.read()[0].to_bool())? ref_patch_dx_0_63_21_fu_722.read(): tmp_265_fu_15645_p3.read());
}

void batch_align2D_region::thread_tmp_268_fu_15667_p2() {
    tmp_268_fu_15667_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_269_fu_15673_p3() {
    tmp_269_fu_15673_p3 = (!tmp_268_fu_15667_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_268_fu_15667_p2.read()[0].to_bool())? ref_patch_dx_0_63_28_fu_750.read(): tmp_267_fu_15659_p3.read());
}

void batch_align2D_region::thread_tmp_26_fu_14355_p2() {
    tmp_26_fu_14355_p2 = (!tmp_1388_reg_39876_pp5_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1388_reg_39876_pp5_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_270_fu_15681_p2() {
    tmp_270_fu_15681_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_271_fu_15687_p3() {
    tmp_271_fu_15687_p3 = (!tmp_270_fu_15681_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_270_fu_15681_p2.read()[0].to_bool())? ref_patch_dx_0_63_35_fu_778.read(): tmp_269_fu_15673_p3.read());
}

void batch_align2D_region::thread_tmp_272_fu_15695_p2() {
    tmp_272_fu_15695_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_274_fu_17489_p2() {
    tmp_274_fu_17489_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_275_fu_17494_p3() {
    tmp_275_fu_17494_p3 = (!tmp_274_fu_17489_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_274_fu_17489_p2.read()[0].to_bool())? ref_patch_dy_1_63_fu_1406.read(): ref_patch_dy_1_63_56_fu_1630.read());
}

void batch_align2D_region::thread_tmp_276_fu_17502_p2() {
    tmp_276_fu_17502_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_277_fu_17507_p3() {
    tmp_277_fu_17507_p3 = (!tmp_276_fu_17502_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_276_fu_17502_p2.read()[0].to_bool())? ref_patch_dy_1_63_8_fu_1438.read(): tmp_275_fu_17494_p3.read());
}

void batch_align2D_region::thread_tmp_278_fu_17515_p2() {
    tmp_278_fu_17515_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_279_fu_17520_p3() {
    tmp_279_fu_17520_p3 = (!tmp_278_fu_17515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_278_fu_17515_p2.read()[0].to_bool())? ref_patch_dy_1_63_16_fu_1470.read(): tmp_277_fu_17507_p3.read());
}

void batch_align2D_region::thread_tmp_280_fu_17528_p2() {
    tmp_280_fu_17528_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_281_fu_17533_p3() {
    tmp_281_fu_17533_p3 = (!tmp_280_fu_17528_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_280_fu_17528_p2.read()[0].to_bool())? ref_patch_dy_1_63_24_fu_1502.read(): tmp_279_fu_17520_p3.read());
}

void batch_align2D_region::thread_tmp_282_fu_17541_p2() {
    tmp_282_fu_17541_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_283_fu_17546_p3() {
    tmp_283_fu_17546_p3 = (!tmp_282_fu_17541_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_282_fu_17541_p2.read()[0].to_bool())? ref_patch_dy_1_63_32_fu_1534.read(): tmp_281_fu_17533_p3.read());
}

void batch_align2D_region::thread_tmp_284_fu_17554_p2() {
    tmp_284_fu_17554_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_285_fu_17559_p3() {
    tmp_285_fu_17559_p3 = (!tmp_284_fu_17554_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_284_fu_17554_p2.read()[0].to_bool())? ref_patch_dy_1_63_40_fu_1566.read(): tmp_283_fu_17546_p3.read());
}

void batch_align2D_region::thread_tmp_286_fu_17567_p2() {
    tmp_286_fu_17567_p2 = (!tmp_1403_reg_41497_pp7_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1403_reg_41497_pp7_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_287_fu_15701_p3() {
    tmp_287_fu_15701_p3 = (!tmp_272_fu_15695_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_272_fu_15695_p2.read()[0].to_bool())? ref_patch_dx_0_63_42_fu_806.read(): tmp_271_fu_15687_p3.read());
}

void batch_align2D_region::thread_tmp_288_fu_15709_p2() {
    tmp_288_fu_15709_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_289_fu_15715_p3() {
    tmp_289_fu_15715_p3 = (!tmp_288_fu_15709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_288_fu_15709_p2.read()[0].to_bool())? ref_patch_dx_0_63_49_fu_834.read(): tmp_287_fu_15701_p3.read());
}

void batch_align2D_region::thread_tmp_290_fu_15723_p2() {
    tmp_290_fu_15723_p2 = (!it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_6_fu_15634_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_291_fu_15737_p3() {
    tmp_291_fu_15737_p3 = (!tmp_264_fu_15639_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_264_fu_15639_p2.read()[0].to_bool())? ref_patch_dy_0_63_7_fu_922.read(): ref_patch_dy_0_63_63_fu_1146.read());
}

void batch_align2D_region::thread_tmp_292_fu_15745_p3() {
    tmp_292_fu_15745_p3 = (!tmp_266_fu_15653_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_266_fu_15653_p2.read()[0].to_bool())? ref_patch_dy_0_63_15_fu_954.read(): tmp_291_fu_15737_p3.read());
}

void batch_align2D_region::thread_tmp_293_fu_15753_p3() {
    tmp_293_fu_15753_p3 = (!tmp_268_fu_15667_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_268_fu_15667_p2.read()[0].to_bool())? ref_patch_dy_0_63_23_fu_986.read(): tmp_292_fu_15745_p3.read());
}

void batch_align2D_region::thread_tmp_294_fu_15761_p3() {
    tmp_294_fu_15761_p3 = (!tmp_270_fu_15681_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_270_fu_15681_p2.read()[0].to_bool())? ref_patch_dy_0_63_31_fu_1018.read(): tmp_293_fu_15753_p3.read());
}

void batch_align2D_region::thread_tmp_295_fu_15769_p3() {
    tmp_295_fu_15769_p3 = (!tmp_272_fu_15695_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_272_fu_15695_p2.read()[0].to_bool())? ref_patch_dy_0_63_39_fu_1050.read(): tmp_294_fu_15761_p3.read());
}

void batch_align2D_region::thread_tmp_296_fu_15777_p3() {
    tmp_296_fu_15777_p3 = (!tmp_288_fu_15709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_288_fu_15709_p2.read()[0].to_bool())? ref_patch_dy_0_63_47_fu_1082.read(): tmp_295_fu_15769_p3.read());
}

void batch_align2D_region::thread_tmp_2_fu_12219_p1() {
    tmp_2_fu_12219_p1 = esl_sext<64,32>(myRegion_data_ptr.read());
}

void batch_align2D_region::thread_tmp_303_fu_17606_p2() {
    tmp_303_fu_17606_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_304_fu_17612_p3() {
    tmp_304_fu_17612_p3 = (!tmp_303_fu_17606_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_303_fu_17606_p2.read()[0].to_bool())? ref_patch_dx_1_63_8_fu_1182.read(): ref_patch_dx_1_63_57_fu_1378.read());
}

void batch_align2D_region::thread_tmp_305_fu_17620_p2() {
    tmp_305_fu_17620_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_306_fu_17626_p3() {
    tmp_306_fu_17626_p3 = (!tmp_305_fu_17620_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_305_fu_17620_p2.read()[0].to_bool())? ref_patch_dx_1_63_15_fu_1210.read(): tmp_304_fu_17612_p3.read());
}

void batch_align2D_region::thread_tmp_307_fu_17634_p2() {
    tmp_307_fu_17634_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_308_fu_17640_p3() {
    tmp_308_fu_17640_p3 = (!tmp_307_fu_17634_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_307_fu_17634_p2.read()[0].to_bool())? ref_patch_dx_1_63_22_fu_1238.read(): tmp_306_fu_17626_p3.read());
}

void batch_align2D_region::thread_tmp_309_fu_17648_p2() {
    tmp_309_fu_17648_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_30_fu_14394_p2() {
    tmp_30_fu_14394_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_310_fu_17654_p3() {
    tmp_310_fu_17654_p3 = (!tmp_309_fu_17648_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_309_fu_17648_p2.read()[0].to_bool())? ref_patch_dx_1_63_29_fu_1266.read(): tmp_308_fu_17640_p3.read());
}

void batch_align2D_region::thread_tmp_311_fu_17662_p2() {
    tmp_311_fu_17662_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_312_fu_17668_p3() {
    tmp_312_fu_17668_p3 = (!tmp_311_fu_17662_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_311_fu_17662_p2.read()[0].to_bool())? ref_patch_dx_1_63_36_fu_1294.read(): tmp_310_fu_17654_p3.read());
}

void batch_align2D_region::thread_tmp_313_fu_17676_p2() {
    tmp_313_fu_17676_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_314_fu_17682_p3() {
    tmp_314_fu_17682_p3 = (!tmp_313_fu_17676_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_313_fu_17676_p2.read()[0].to_bool())? ref_patch_dx_1_63_43_fu_1322.read(): tmp_312_fu_17668_p3.read());
}

void batch_align2D_region::thread_tmp_315_fu_17690_p2() {
    tmp_315_fu_17690_p2 = (!it_ref_dy_0_i_1_sum1_fu_17601_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_fu_17601_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_316_fu_17730_p3() {
    tmp_316_fu_17730_p3 = (!tmp_303_reg_41912.read()[0].is_01())? sc_lv<32>(): ((tmp_303_reg_41912.read()[0].to_bool())? ref_patch_dy_1_63_1_fu_1410.read(): ref_patch_dy_1_63_57_fu_1634.read());
}

void batch_align2D_region::thread_tmp_317_fu_17737_p3() {
    tmp_317_fu_17737_p3 = (!tmp_305_reg_41917.read()[0].is_01())? sc_lv<32>(): ((tmp_305_reg_41917.read()[0].to_bool())? ref_patch_dy_1_63_9_fu_1442.read(): tmp_316_fu_17730_p3.read());
}

void batch_align2D_region::thread_tmp_318_fu_17744_p3() {
    tmp_318_fu_17744_p3 = (!tmp_307_reg_41922.read()[0].is_01())? sc_lv<32>(): ((tmp_307_reg_41922.read()[0].to_bool())? ref_patch_dy_1_63_17_fu_1474.read(): tmp_317_fu_17737_p3.read());
}

void batch_align2D_region::thread_tmp_319_fu_17751_p3() {
    tmp_319_fu_17751_p3 = (!tmp_309_reg_41927.read()[0].is_01())? sc_lv<32>(): ((tmp_309_reg_41927.read()[0].to_bool())? ref_patch_dy_1_63_25_fu_1506.read(): tmp_318_fu_17744_p3.read());
}

void batch_align2D_region::thread_tmp_31_fu_14400_p3() {
    tmp_31_fu_14400_p3 = (!tmp_30_fu_14394_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_30_fu_14394_p2.read()[0].to_bool())? ref_patch_dx_0_63_8_fu_670.read(): ref_patch_dx_0_63_57_fu_866.read());
}

void batch_align2D_region::thread_tmp_320_fu_17758_p3() {
    tmp_320_fu_17758_p3 = (!tmp_311_reg_41932.read()[0].is_01())? sc_lv<32>(): ((tmp_311_reg_41932.read()[0].to_bool())? ref_patch_dy_1_63_33_fu_1538.read(): tmp_319_fu_17751_p3.read());
}

void batch_align2D_region::thread_tmp_321_fu_17765_p3() {
    tmp_321_fu_17765_p3 = (!tmp_313_reg_41937.read()[0].is_01())? sc_lv<32>(): ((tmp_313_reg_41937.read()[0].to_bool())? ref_patch_dy_1_63_41_fu_1570.read(): tmp_320_fu_17758_p3.read());
}

void batch_align2D_region::thread_tmp_322_fu_17805_p2() {
    tmp_322_fu_17805_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_323_fu_17811_p3() {
    tmp_323_fu_17811_p3 = (!tmp_322_fu_17805_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_322_fu_17805_p2.read()[0].to_bool())? ref_patch_dx_1_63_9_fu_1186.read(): ref_patch_dx_1_63_58_fu_1382.read());
}

void batch_align2D_region::thread_tmp_324_fu_17819_p2() {
    tmp_324_fu_17819_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_325_fu_17825_p3() {
    tmp_325_fu_17825_p3 = (!tmp_324_fu_17819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_324_fu_17819_p2.read()[0].to_bool())? ref_patch_dx_1_63_16_fu_1214.read(): tmp_323_fu_17811_p3.read());
}

void batch_align2D_region::thread_tmp_326_fu_17833_p2() {
    tmp_326_fu_17833_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_327_fu_17839_p3() {
    tmp_327_fu_17839_p3 = (!tmp_326_fu_17833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_326_fu_17833_p2.read()[0].to_bool())? ref_patch_dx_1_63_23_fu_1242.read(): tmp_325_fu_17825_p3.read());
}

void batch_align2D_region::thread_tmp_328_fu_17847_p2() {
    tmp_328_fu_17847_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_329_fu_17853_p3() {
    tmp_329_fu_17853_p3 = (!tmp_328_fu_17847_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_328_fu_17847_p2.read()[0].to_bool())? ref_patch_dx_1_63_30_fu_1270.read(): tmp_327_fu_17839_p3.read());
}

void batch_align2D_region::thread_tmp_32_fu_14408_p2() {
    tmp_32_fu_14408_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_330_fu_17861_p2() {
    tmp_330_fu_17861_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_331_fu_17867_p3() {
    tmp_331_fu_17867_p3 = (!tmp_330_fu_17861_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_330_fu_17861_p2.read()[0].to_bool())? ref_patch_dx_1_63_37_fu_1298.read(): tmp_329_fu_17853_p3.read());
}

void batch_align2D_region::thread_tmp_332_fu_17875_p2() {
    tmp_332_fu_17875_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_333_fu_17881_p3() {
    tmp_333_fu_17881_p3 = (!tmp_332_fu_17875_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_332_fu_17875_p2.read()[0].to_bool())? ref_patch_dx_1_63_44_fu_1326.read(): tmp_331_fu_17867_p3.read());
}

void batch_align2D_region::thread_tmp_334_fu_17889_p2() {
    tmp_334_fu_17889_p2 = (!it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_1_fu_17800_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_335_fu_17929_p3() {
    tmp_335_fu_17929_p3 = (!tmp_322_reg_41963.read()[0].is_01())? sc_lv<32>(): ((tmp_322_reg_41963.read()[0].to_bool())? ref_patch_dy_1_63_2_fu_1414.read(): ref_patch_dy_1_63_58_fu_1638.read());
}

void batch_align2D_region::thread_tmp_336_fu_17936_p3() {
    tmp_336_fu_17936_p3 = (!tmp_324_reg_41968.read()[0].is_01())? sc_lv<32>(): ((tmp_324_reg_41968.read()[0].to_bool())? ref_patch_dy_1_63_10_fu_1446.read(): tmp_335_fu_17929_p3.read());
}

void batch_align2D_region::thread_tmp_337_fu_17943_p3() {
    tmp_337_fu_17943_p3 = (!tmp_326_reg_41973.read()[0].is_01())? sc_lv<32>(): ((tmp_326_reg_41973.read()[0].to_bool())? ref_patch_dy_1_63_18_fu_1478.read(): tmp_336_fu_17936_p3.read());
}

void batch_align2D_region::thread_tmp_338_fu_17950_p3() {
    tmp_338_fu_17950_p3 = (!tmp_328_reg_41978.read()[0].is_01())? sc_lv<32>(): ((tmp_328_reg_41978.read()[0].to_bool())? ref_patch_dy_1_63_26_fu_1510.read(): tmp_337_fu_17943_p3.read());
}

void batch_align2D_region::thread_tmp_339_fu_17957_p3() {
    tmp_339_fu_17957_p3 = (!tmp_330_reg_41983.read()[0].is_01())? sc_lv<32>(): ((tmp_330_reg_41983.read()[0].to_bool())? ref_patch_dy_1_63_34_fu_1542.read(): tmp_338_fu_17950_p3.read());
}

void batch_align2D_region::thread_tmp_33_fu_14414_p3() {
    tmp_33_fu_14414_p3 = (!tmp_32_fu_14408_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_32_fu_14408_p2.read()[0].to_bool())? ref_patch_dx_0_63_15_fu_698.read(): tmp_31_fu_14400_p3.read());
}

void batch_align2D_region::thread_tmp_340_fu_17964_p3() {
    tmp_340_fu_17964_p3 = (!tmp_332_reg_41988.read()[0].is_01())? sc_lv<32>(): ((tmp_332_reg_41988.read()[0].to_bool())? ref_patch_dy_1_63_42_fu_1574.read(): tmp_339_fu_17957_p3.read());
}

void batch_align2D_region::thread_tmp_341_fu_18031_p2() {
    tmp_341_fu_18031_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_342_fu_18037_p3() {
    tmp_342_fu_18037_p3 = (!tmp_341_fu_18031_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_341_fu_18031_p2.read()[0].to_bool())? ref_patch_dx_1_63_10_fu_1190.read(): ref_patch_dx_1_63_59_fu_1386.read());
}

void batch_align2D_region::thread_tmp_343_fu_18045_p2() {
    tmp_343_fu_18045_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_345_fu_18051_p3() {
    tmp_345_fu_18051_p3 = (!tmp_343_fu_18045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_343_fu_18045_p2.read()[0].to_bool())? ref_patch_dx_1_63_17_fu_1218.read(): tmp_342_fu_18037_p3.read());
}

void batch_align2D_region::thread_tmp_346_fu_18059_p2() {
    tmp_346_fu_18059_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_347_fu_18065_p3() {
    tmp_347_fu_18065_p3 = (!tmp_346_fu_18059_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_346_fu_18059_p2.read()[0].to_bool())? ref_patch_dx_1_63_24_fu_1246.read(): tmp_345_fu_18051_p3.read());
}

void batch_align2D_region::thread_tmp_348_fu_18073_p2() {
    tmp_348_fu_18073_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_349_fu_18079_p3() {
    tmp_349_fu_18079_p3 = (!tmp_348_fu_18073_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_348_fu_18073_p2.read()[0].to_bool())? ref_patch_dx_1_63_31_fu_1274.read(): tmp_347_fu_18065_p3.read());
}

void batch_align2D_region::thread_tmp_34_fu_14422_p2() {
    tmp_34_fu_14422_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_350_fu_18087_p2() {
    tmp_350_fu_18087_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_351_fu_18093_p3() {
    tmp_351_fu_18093_p3 = (!tmp_350_fu_18087_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_350_fu_18087_p2.read()[0].to_bool())? ref_patch_dx_1_63_38_fu_1302.read(): tmp_349_fu_18079_p3.read());
}

void batch_align2D_region::thread_tmp_352_fu_18101_p2() {
    tmp_352_fu_18101_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_353_fu_18107_p3() {
    tmp_353_fu_18107_p3 = (!tmp_352_fu_18101_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_352_fu_18101_p2.read()[0].to_bool())? ref_patch_dx_1_63_45_fu_1330.read(): tmp_351_fu_18093_p3.read());
}

void batch_align2D_region::thread_tmp_354_fu_18115_p2() {
    tmp_354_fu_18115_p2 = (!it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_2_fu_18026_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_355_fu_18129_p3() {
    tmp_355_fu_18129_p3 = (!tmp_341_fu_18031_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_341_fu_18031_p2.read()[0].to_bool())? ref_patch_dy_1_63_3_fu_1418.read(): ref_patch_dy_1_63_59_fu_1642.read());
}

void batch_align2D_region::thread_tmp_356_fu_18137_p3() {
    tmp_356_fu_18137_p3 = (!tmp_343_fu_18045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_343_fu_18045_p2.read()[0].to_bool())? ref_patch_dy_1_63_11_fu_1450.read(): tmp_355_fu_18129_p3.read());
}

void batch_align2D_region::thread_tmp_357_fu_18145_p3() {
    tmp_357_fu_18145_p3 = (!tmp_346_fu_18059_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_346_fu_18059_p2.read()[0].to_bool())? ref_patch_dy_1_63_19_fu_1482.read(): tmp_356_fu_18137_p3.read());
}

void batch_align2D_region::thread_tmp_358_fu_18153_p3() {
    tmp_358_fu_18153_p3 = (!tmp_348_fu_18073_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_348_fu_18073_p2.read()[0].to_bool())? ref_patch_dy_1_63_27_fu_1514.read(): tmp_357_fu_18145_p3.read());
}

void batch_align2D_region::thread_tmp_359_fu_18161_p3() {
    tmp_359_fu_18161_p3 = (!tmp_350_fu_18087_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_350_fu_18087_p2.read()[0].to_bool())? ref_patch_dy_1_63_35_fu_1546.read(): tmp_358_fu_18153_p3.read());
}

void batch_align2D_region::thread_tmp_35_fu_14428_p3() {
    tmp_35_fu_14428_p3 = (!tmp_34_fu_14422_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_34_fu_14422_p2.read()[0].to_bool())? ref_patch_dx_0_63_22_fu_726.read(): tmp_33_fu_14414_p3.read());
}

void batch_align2D_region::thread_tmp_360_fu_18169_p3() {
    tmp_360_fu_18169_p3 = (!tmp_352_fu_18101_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_352_fu_18101_p2.read()[0].to_bool())? ref_patch_dy_1_63_43_fu_1578.read(): tmp_359_fu_18161_p3.read());
}

void batch_align2D_region::thread_tmp_361_fu_18238_p2() {
    tmp_361_fu_18238_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_362_fu_18244_p3() {
    tmp_362_fu_18244_p3 = (!tmp_361_fu_18238_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_361_fu_18238_p2.read()[0].to_bool())? ref_patch_dx_1_63_11_fu_1194.read(): ref_patch_dx_1_63_60_fu_1390.read());
}

void batch_align2D_region::thread_tmp_363_fu_18252_p2() {
    tmp_363_fu_18252_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_364_fu_18258_p3() {
    tmp_364_fu_18258_p3 = (!tmp_363_fu_18252_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_363_fu_18252_p2.read()[0].to_bool())? ref_patch_dx_1_63_18_fu_1222.read(): tmp_362_fu_18244_p3.read());
}

void batch_align2D_region::thread_tmp_365_fu_18266_p2() {
    tmp_365_fu_18266_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_366_fu_18272_p3() {
    tmp_366_fu_18272_p3 = (!tmp_365_fu_18266_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_365_fu_18266_p2.read()[0].to_bool())? ref_patch_dx_1_63_25_fu_1250.read(): tmp_364_fu_18258_p3.read());
}

void batch_align2D_region::thread_tmp_367_fu_18280_p2() {
    tmp_367_fu_18280_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_368_fu_18286_p3() {
    tmp_368_fu_18286_p3 = (!tmp_367_fu_18280_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_367_fu_18280_p2.read()[0].to_bool())? ref_patch_dx_1_63_32_fu_1278.read(): tmp_366_fu_18272_p3.read());
}

void batch_align2D_region::thread_tmp_369_fu_18294_p2() {
    tmp_369_fu_18294_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_36_fu_14436_p2() {
    tmp_36_fu_14436_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_370_fu_18300_p3() {
    tmp_370_fu_18300_p3 = (!tmp_369_fu_18294_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_369_fu_18294_p2.read()[0].to_bool())? ref_patch_dx_1_63_39_fu_1306.read(): tmp_368_fu_18286_p3.read());
}

void batch_align2D_region::thread_tmp_371_fu_18308_p2() {
    tmp_371_fu_18308_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_372_fu_18314_p3() {
    tmp_372_fu_18314_p3 = (!tmp_371_fu_18308_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_371_fu_18308_p2.read()[0].to_bool())? ref_patch_dx_1_63_46_fu_1334.read(): tmp_370_fu_18300_p3.read());
}

void batch_align2D_region::thread_tmp_373_fu_18322_p2() {
    tmp_373_fu_18322_p2 = (!it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_3_fu_18233_p2.read() == ap_const_lv6_34);
}

}

