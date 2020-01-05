#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_tmp_374_fu_18336_p3() {
    tmp_374_fu_18336_p3 = (!tmp_361_fu_18238_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_361_fu_18238_p2.read()[0].to_bool())? ref_patch_dy_1_63_4_fu_1422.read(): ref_patch_dy_1_63_60_fu_1646.read());
}

void batch_align2D_region::thread_tmp_375_fu_18344_p3() {
    tmp_375_fu_18344_p3 = (!tmp_363_fu_18252_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_363_fu_18252_p2.read()[0].to_bool())? ref_patch_dy_1_63_12_fu_1454.read(): tmp_374_fu_18336_p3.read());
}

void batch_align2D_region::thread_tmp_376_fu_18352_p3() {
    tmp_376_fu_18352_p3 = (!tmp_365_fu_18266_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_365_fu_18266_p2.read()[0].to_bool())? ref_patch_dy_1_63_20_fu_1486.read(): tmp_375_fu_18344_p3.read());
}

void batch_align2D_region::thread_tmp_377_fu_18360_p3() {
    tmp_377_fu_18360_p3 = (!tmp_367_fu_18280_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_367_fu_18280_p2.read()[0].to_bool())? ref_patch_dy_1_63_28_fu_1518.read(): tmp_376_fu_18352_p3.read());
}

void batch_align2D_region::thread_tmp_378_fu_18368_p3() {
    tmp_378_fu_18368_p3 = (!tmp_369_fu_18294_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_369_fu_18294_p2.read()[0].to_bool())? ref_patch_dy_1_63_36_fu_1550.read(): tmp_377_fu_18360_p3.read());
}

void batch_align2D_region::thread_tmp_379_fu_18376_p3() {
    tmp_379_fu_18376_p3 = (!tmp_371_fu_18308_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_371_fu_18308_p2.read()[0].to_bool())? ref_patch_dy_1_63_44_fu_1582.read(): tmp_378_fu_18368_p3.read());
}

void batch_align2D_region::thread_tmp_37_fu_14442_p3() {
    tmp_37_fu_14442_p3 = (!tmp_36_fu_14436_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_36_fu_14436_p2.read()[0].to_bool())? ref_patch_dx_0_63_29_fu_754.read(): tmp_35_fu_14428_p3.read());
}

void batch_align2D_region::thread_tmp_380_fu_18418_p2() {
    tmp_380_fu_18418_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_381_fu_18424_p3() {
    tmp_381_fu_18424_p3 = (!tmp_380_fu_18418_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_380_fu_18418_p2.read()[0].to_bool())? ref_patch_dx_1_63_12_fu_1198.read(): ref_patch_dx_1_63_61_fu_1394.read());
}

void batch_align2D_region::thread_tmp_382_fu_18432_p2() {
    tmp_382_fu_18432_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_383_fu_18438_p3() {
    tmp_383_fu_18438_p3 = (!tmp_382_fu_18432_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_382_fu_18432_p2.read()[0].to_bool())? ref_patch_dx_1_63_19_fu_1226.read(): tmp_381_fu_18424_p3.read());
}

void batch_align2D_region::thread_tmp_384_fu_18446_p2() {
    tmp_384_fu_18446_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_386_fu_18452_p3() {
    tmp_386_fu_18452_p3 = (!tmp_384_fu_18446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_384_fu_18446_p2.read()[0].to_bool())? ref_patch_dx_1_63_26_fu_1254.read(): tmp_383_fu_18438_p3.read());
}

void batch_align2D_region::thread_tmp_387_fu_18460_p2() {
    tmp_387_fu_18460_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_388_fu_18466_p3() {
    tmp_388_fu_18466_p3 = (!tmp_387_fu_18460_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_387_fu_18460_p2.read()[0].to_bool())? ref_patch_dx_1_63_33_fu_1282.read(): tmp_386_fu_18452_p3.read());
}

void batch_align2D_region::thread_tmp_389_fu_18474_p2() {
    tmp_389_fu_18474_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_38_fu_14450_p2() {
    tmp_38_fu_14450_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_390_fu_18480_p3() {
    tmp_390_fu_18480_p3 = (!tmp_389_fu_18474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_389_fu_18474_p2.read()[0].to_bool())? ref_patch_dx_1_63_40_fu_1310.read(): tmp_388_fu_18466_p3.read());
}

void batch_align2D_region::thread_tmp_391_fu_18488_p2() {
    tmp_391_fu_18488_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_392_fu_18494_p3() {
    tmp_392_fu_18494_p3 = (!tmp_391_fu_18488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_391_fu_18488_p2.read()[0].to_bool())? ref_patch_dx_1_63_47_fu_1338.read(): tmp_390_fu_18480_p3.read());
}

void batch_align2D_region::thread_tmp_393_fu_18502_p2() {
    tmp_393_fu_18502_p2 = (!it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_4_fu_18413_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_394_fu_18542_p3() {
    tmp_394_fu_18542_p3 = (!tmp_380_reg_42034.read()[0].is_01())? sc_lv<32>(): ((tmp_380_reg_42034.read()[0].to_bool())? ref_patch_dy_1_63_5_fu_1426.read(): ref_patch_dy_1_63_61_fu_1650.read());
}

void batch_align2D_region::thread_tmp_395_fu_18549_p3() {
    tmp_395_fu_18549_p3 = (!tmp_382_reg_42039.read()[0].is_01())? sc_lv<32>(): ((tmp_382_reg_42039.read()[0].to_bool())? ref_patch_dy_1_63_13_fu_1458.read(): tmp_394_fu_18542_p3.read());
}

void batch_align2D_region::thread_tmp_396_fu_18556_p3() {
    tmp_396_fu_18556_p3 = (!tmp_384_reg_42044.read()[0].is_01())? sc_lv<32>(): ((tmp_384_reg_42044.read()[0].to_bool())? ref_patch_dy_1_63_21_fu_1490.read(): tmp_395_fu_18549_p3.read());
}

void batch_align2D_region::thread_tmp_397_fu_18563_p3() {
    tmp_397_fu_18563_p3 = (!tmp_387_reg_42049.read()[0].is_01())? sc_lv<32>(): ((tmp_387_reg_42049.read()[0].to_bool())? ref_patch_dy_1_63_29_fu_1522.read(): tmp_396_fu_18556_p3.read());
}

void batch_align2D_region::thread_tmp_398_fu_18570_p3() {
    tmp_398_fu_18570_p3 = (!tmp_389_reg_42054.read()[0].is_01())? sc_lv<32>(): ((tmp_389_reg_42054.read()[0].to_bool())? ref_patch_dy_1_63_37_fu_1554.read(): tmp_397_fu_18563_p3.read());
}

void batch_align2D_region::thread_tmp_399_fu_18577_p3() {
    tmp_399_fu_18577_p3 = (!tmp_391_reg_42059.read()[0].is_01())? sc_lv<32>(): ((tmp_391_reg_42059.read()[0].to_bool())? ref_patch_dy_1_63_45_fu_1586.read(): tmp_398_fu_18570_p3.read());
}

void batch_align2D_region::thread_tmp_39_fu_14456_p3() {
    tmp_39_fu_14456_p3 = (!tmp_38_fu_14450_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_38_fu_14450_p2.read()[0].to_bool())? ref_patch_dx_0_63_36_fu_782.read(): tmp_37_fu_14442_p3.read());
}

void batch_align2D_region::thread_tmp_400_fu_18644_p2() {
    tmp_400_fu_18644_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_401_fu_18650_p3() {
    tmp_401_fu_18650_p3 = (!tmp_400_fu_18644_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_400_fu_18644_p2.read()[0].to_bool())? ref_patch_dx_1_63_13_fu_1202.read(): ref_patch_dx_1_63_62_fu_1398.read());
}

void batch_align2D_region::thread_tmp_402_fu_18658_p2() {
    tmp_402_fu_18658_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_403_fu_18664_p3() {
    tmp_403_fu_18664_p3 = (!tmp_402_fu_18658_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_402_fu_18658_p2.read()[0].to_bool())? ref_patch_dx_1_63_20_fu_1230.read(): tmp_401_fu_18650_p3.read());
}

void batch_align2D_region::thread_tmp_404_fu_18672_p2() {
    tmp_404_fu_18672_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_405_fu_18678_p3() {
    tmp_405_fu_18678_p3 = (!tmp_404_fu_18672_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_404_fu_18672_p2.read()[0].to_bool())? ref_patch_dx_1_63_27_fu_1258.read(): tmp_403_fu_18664_p3.read());
}

void batch_align2D_region::thread_tmp_406_fu_18686_p2() {
    tmp_406_fu_18686_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_407_fu_18692_p3() {
    tmp_407_fu_18692_p3 = (!tmp_406_fu_18686_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_406_fu_18686_p2.read()[0].to_bool())? ref_patch_dx_1_63_34_fu_1286.read(): tmp_405_fu_18678_p3.read());
}

void batch_align2D_region::thread_tmp_408_fu_18700_p2() {
    tmp_408_fu_18700_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_409_fu_18706_p3() {
    tmp_409_fu_18706_p3 = (!tmp_408_fu_18700_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_408_fu_18700_p2.read()[0].to_bool())? ref_patch_dx_1_63_41_fu_1314.read(): tmp_407_fu_18692_p3.read());
}

void batch_align2D_region::thread_tmp_40_fu_14464_p2() {
    tmp_40_fu_14464_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_410_fu_18714_p2() {
    tmp_410_fu_18714_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_411_fu_18720_p3() {
    tmp_411_fu_18720_p3 = (!tmp_410_fu_18714_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_410_fu_18714_p2.read()[0].to_bool())? ref_patch_dx_1_63_48_fu_1342.read(): tmp_409_fu_18706_p3.read());
}

void batch_align2D_region::thread_tmp_412_fu_18728_p2() {
    tmp_412_fu_18728_p2 = (!it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_5_fu_18639_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_414_fu_18742_p3() {
    tmp_414_fu_18742_p3 = (!tmp_400_fu_18644_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_400_fu_18644_p2.read()[0].to_bool())? ref_patch_dy_1_63_6_fu_1430.read(): ref_patch_dy_1_63_62_fu_1654.read());
}

void batch_align2D_region::thread_tmp_415_fu_18750_p3() {
    tmp_415_fu_18750_p3 = (!tmp_402_fu_18658_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_402_fu_18658_p2.read()[0].to_bool())? ref_patch_dy_1_63_14_fu_1462.read(): tmp_414_fu_18742_p3.read());
}

void batch_align2D_region::thread_tmp_416_fu_18758_p3() {
    tmp_416_fu_18758_p3 = (!tmp_404_fu_18672_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_404_fu_18672_p2.read()[0].to_bool())? ref_patch_dy_1_63_22_fu_1494.read(): tmp_415_fu_18750_p3.read());
}

void batch_align2D_region::thread_tmp_417_fu_18766_p3() {
    tmp_417_fu_18766_p3 = (!tmp_406_fu_18686_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_406_fu_18686_p2.read()[0].to_bool())? ref_patch_dy_1_63_30_fu_1526.read(): tmp_416_fu_18758_p3.read());
}

void batch_align2D_region::thread_tmp_418_fu_18774_p3() {
    tmp_418_fu_18774_p3 = (!tmp_408_fu_18700_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_408_fu_18700_p2.read()[0].to_bool())? ref_patch_dy_1_63_38_fu_1558.read(): tmp_417_fu_18766_p3.read());
}

void batch_align2D_region::thread_tmp_419_fu_18782_p3() {
    tmp_419_fu_18782_p3 = (!tmp_410_fu_18714_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_410_fu_18714_p2.read()[0].to_bool())? ref_patch_dy_1_63_46_fu_1590.read(): tmp_418_fu_18774_p3.read());
}

void batch_align2D_region::thread_tmp_41_fu_14470_p3() {
    tmp_41_fu_14470_p3 = (!tmp_40_fu_14464_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_40_fu_14464_p2.read()[0].to_bool())? ref_patch_dx_0_63_43_fu_810.read(): tmp_39_fu_14456_p3.read());
}

void batch_align2D_region::thread_tmp_420_fu_18851_p2() {
    tmp_420_fu_18851_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_421_fu_18857_p3() {
    tmp_421_fu_18857_p3 = (!tmp_420_fu_18851_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_420_fu_18851_p2.read()[0].to_bool())? ref_patch_dx_1_63_14_fu_1206.read(): ref_patch_dx_1_63_63_fu_1402.read());
}

void batch_align2D_region::thread_tmp_422_fu_18865_p2() {
    tmp_422_fu_18865_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_423_fu_18871_p3() {
    tmp_423_fu_18871_p3 = (!tmp_422_fu_18865_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_422_fu_18865_p2.read()[0].to_bool())? ref_patch_dx_1_63_21_fu_1234.read(): tmp_421_fu_18857_p3.read());
}

void batch_align2D_region::thread_tmp_424_fu_18879_p2() {
    tmp_424_fu_18879_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_425_fu_18885_p3() {
    tmp_425_fu_18885_p3 = (!tmp_424_fu_18879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_424_fu_18879_p2.read()[0].to_bool())? ref_patch_dx_1_63_28_fu_1262.read(): tmp_423_fu_18871_p3.read());
}

void batch_align2D_region::thread_tmp_426_fu_18893_p2() {
    tmp_426_fu_18893_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_427_fu_18899_p3() {
    tmp_427_fu_18899_p3 = (!tmp_426_fu_18893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_426_fu_18893_p2.read()[0].to_bool())? ref_patch_dx_1_63_35_fu_1290.read(): tmp_425_fu_18885_p3.read());
}

void batch_align2D_region::thread_tmp_428_fu_18907_p2() {
    tmp_428_fu_18907_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_429_fu_18913_p3() {
    tmp_429_fu_18913_p3 = (!tmp_428_fu_18907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_428_fu_18907_p2.read()[0].to_bool())? ref_patch_dx_1_63_42_fu_1318.read(): tmp_427_fu_18899_p3.read());
}

void batch_align2D_region::thread_tmp_42_fu_14478_p2() {
    tmp_42_fu_14478_p2 = (!it_ref_dy_0_i_0_sum1_fu_14389_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_0_sum1_fu_14389_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_430_fu_18921_p2() {
    tmp_430_fu_18921_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_431_fu_18927_p3() {
    tmp_431_fu_18927_p3 = (!tmp_430_fu_18921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_430_fu_18921_p2.read()[0].to_bool())? ref_patch_dx_1_63_49_fu_1346.read(): tmp_429_fu_18913_p3.read());
}

void batch_align2D_region::thread_tmp_432_fu_18935_p2() {
    tmp_432_fu_18935_p2 = (!it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_1_sum1_6_fu_18846_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_433_fu_18949_p3() {
    tmp_433_fu_18949_p3 = (!tmp_420_fu_18851_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_420_fu_18851_p2.read()[0].to_bool())? ref_patch_dy_1_63_7_fu_1434.read(): ref_patch_dy_1_63_63_fu_1658.read());
}

void batch_align2D_region::thread_tmp_434_fu_18957_p3() {
    tmp_434_fu_18957_p3 = (!tmp_422_fu_18865_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_422_fu_18865_p2.read()[0].to_bool())? ref_patch_dy_1_63_15_fu_1466.read(): tmp_433_fu_18949_p3.read());
}

void batch_align2D_region::thread_tmp_435_fu_18965_p3() {
    tmp_435_fu_18965_p3 = (!tmp_424_fu_18879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_424_fu_18879_p2.read()[0].to_bool())? ref_patch_dy_1_63_23_fu_1498.read(): tmp_434_fu_18957_p3.read());
}

void batch_align2D_region::thread_tmp_436_fu_18973_p3() {
    tmp_436_fu_18973_p3 = (!tmp_426_fu_18893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_426_fu_18893_p2.read()[0].to_bool())? ref_patch_dy_1_63_31_fu_1530.read(): tmp_435_fu_18965_p3.read());
}

void batch_align2D_region::thread_tmp_437_fu_18981_p3() {
    tmp_437_fu_18981_p3 = (!tmp_428_fu_18907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_428_fu_18907_p2.read()[0].to_bool())? ref_patch_dy_1_63_39_fu_1562.read(): tmp_436_fu_18973_p3.read());
}

void batch_align2D_region::thread_tmp_438_fu_18989_p3() {
    tmp_438_fu_18989_p3 = (!tmp_430_fu_18921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_430_fu_18921_p2.read()[0].to_bool())? ref_patch_dy_1_63_47_fu_1594.read(): tmp_437_fu_18981_p3.read());
}

void batch_align2D_region::thread_tmp_445_fu_20701_p2() {
    tmp_445_fu_20701_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_446_fu_20706_p3() {
    tmp_446_fu_20706_p3 = (!tmp_445_fu_20701_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_445_fu_20701_p2.read()[0].to_bool())? ref_patch_dy_2_63_fu_1918.read(): ref_patch_dy_2_63_56_fu_2142.read());
}

void batch_align2D_region::thread_tmp_447_fu_20714_p2() {
    tmp_447_fu_20714_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_448_fu_20719_p3() {
    tmp_448_fu_20719_p3 = (!tmp_447_fu_20714_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_447_fu_20714_p2.read()[0].to_bool())? ref_patch_dy_2_63_8_fu_1950.read(): tmp_446_fu_20706_p3.read());
}

void batch_align2D_region::thread_tmp_449_fu_20727_p2() {
    tmp_449_fu_20727_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_450_fu_20732_p3() {
    tmp_450_fu_20732_p3 = (!tmp_449_fu_20727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_449_fu_20727_p2.read()[0].to_bool())? ref_patch_dy_2_63_16_fu_1982.read(): tmp_448_fu_20719_p3.read());
}

void batch_align2D_region::thread_tmp_451_fu_20740_p2() {
    tmp_451_fu_20740_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_452_fu_20745_p3() {
    tmp_452_fu_20745_p3 = (!tmp_451_fu_20740_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_451_fu_20740_p2.read()[0].to_bool())? ref_patch_dy_2_63_24_fu_2014.read(): tmp_450_fu_20732_p3.read());
}

void batch_align2D_region::thread_tmp_453_fu_20753_p2() {
    tmp_453_fu_20753_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_454_fu_20758_p3() {
    tmp_454_fu_20758_p3 = (!tmp_453_fu_20753_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_453_fu_20753_p2.read()[0].to_bool())? ref_patch_dy_2_63_32_fu_2046.read(): tmp_452_fu_20745_p3.read());
}

void batch_align2D_region::thread_tmp_455_cast_fu_20191_p1() {
    tmp_455_cast_fu_20191_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_2_phi_fu_8260_p4.read());
}

void batch_align2D_region::thread_tmp_455_fu_20766_p2() {
    tmp_455_fu_20766_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_456_fu_20771_p3() {
    tmp_456_fu_20771_p3 = (!tmp_455_fu_20766_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_455_fu_20766_p2.read()[0].to_bool())? ref_patch_dy_2_63_40_fu_2078.read(): tmp_454_fu_20758_p3.read());
}

void batch_align2D_region::thread_tmp_457_fu_20779_p2() {
    tmp_457_fu_20779_p2 = (!tmp_1444_reg_43118_pp9_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1444_reg_43118_pp9_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_458_fu_20818_p2() {
    tmp_458_fu_20818_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_459_fu_20824_p3() {
    tmp_459_fu_20824_p3 = (!tmp_458_fu_20818_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_458_fu_20818_p2.read()[0].to_bool())? ref_patch_dx_2_63_8_fu_1694.read(): ref_patch_dx_2_63_57_fu_1890.read());
}

void batch_align2D_region::thread_tmp_460_fu_20832_p2() {
    tmp_460_fu_20832_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_461_fu_20838_p3() {
    tmp_461_fu_20838_p3 = (!tmp_460_fu_20832_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_460_fu_20832_p2.read()[0].to_bool())? ref_patch_dx_2_63_15_fu_1722.read(): tmp_459_fu_20824_p3.read());
}

void batch_align2D_region::thread_tmp_462_fu_20846_p2() {
    tmp_462_fu_20846_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_463_fu_20852_p3() {
    tmp_463_fu_20852_p3 = (!tmp_462_fu_20846_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_462_fu_20846_p2.read()[0].to_bool())? ref_patch_dx_2_63_22_fu_1750.read(): tmp_461_fu_20838_p3.read());
}

void batch_align2D_region::thread_tmp_464_fu_20860_p2() {
    tmp_464_fu_20860_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_465_fu_20866_p3() {
    tmp_465_fu_20866_p3 = (!tmp_464_fu_20860_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_464_fu_20860_p2.read()[0].to_bool())? ref_patch_dx_2_63_29_fu_1778.read(): tmp_463_fu_20852_p3.read());
}

void batch_align2D_region::thread_tmp_466_fu_20874_p2() {
    tmp_466_fu_20874_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_467_fu_20880_p3() {
    tmp_467_fu_20880_p3 = (!tmp_466_fu_20874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_466_fu_20874_p2.read()[0].to_bool())? ref_patch_dx_2_63_36_fu_1806.read(): tmp_465_fu_20866_p3.read());
}

void batch_align2D_region::thread_tmp_468_fu_20888_p2() {
    tmp_468_fu_20888_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_469_fu_20894_p3() {
    tmp_469_fu_20894_p3 = (!tmp_468_fu_20888_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_468_fu_20888_p2.read()[0].to_bool())? ref_patch_dx_2_63_43_fu_1834.read(): tmp_467_fu_20880_p3.read());
}

void batch_align2D_region::thread_tmp_470_fu_20902_p2() {
    tmp_470_fu_20902_p2 = (!it_ref_dy_0_i_2_sum1_fu_20813_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_fu_20813_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_471_fu_20942_p3() {
    tmp_471_fu_20942_p3 = (!tmp_458_reg_43533.read()[0].is_01())? sc_lv<32>(): ((tmp_458_reg_43533.read()[0].to_bool())? ref_patch_dy_2_63_1_fu_1922.read(): ref_patch_dy_2_63_57_fu_2146.read());
}

void batch_align2D_region::thread_tmp_472_fu_20949_p3() {
    tmp_472_fu_20949_p3 = (!tmp_460_reg_43538.read()[0].is_01())? sc_lv<32>(): ((tmp_460_reg_43538.read()[0].to_bool())? ref_patch_dy_2_63_9_fu_1954.read(): tmp_471_fu_20942_p3.read());
}

void batch_align2D_region::thread_tmp_473_fu_20956_p3() {
    tmp_473_fu_20956_p3 = (!tmp_462_reg_43543.read()[0].is_01())? sc_lv<32>(): ((tmp_462_reg_43543.read()[0].to_bool())? ref_patch_dy_2_63_17_fu_1986.read(): tmp_472_fu_20949_p3.read());
}

void batch_align2D_region::thread_tmp_474_fu_20963_p3() {
    tmp_474_fu_20963_p3 = (!tmp_464_reg_43548.read()[0].is_01())? sc_lv<32>(): ((tmp_464_reg_43548.read()[0].to_bool())? ref_patch_dy_2_63_25_fu_2018.read(): tmp_473_fu_20956_p3.read());
}

void batch_align2D_region::thread_tmp_475_fu_20970_p3() {
    tmp_475_fu_20970_p3 = (!tmp_466_reg_43553.read()[0].is_01())? sc_lv<32>(): ((tmp_466_reg_43553.read()[0].to_bool())? ref_patch_dy_2_63_33_fu_2050.read(): tmp_474_fu_20963_p3.read());
}

void batch_align2D_region::thread_tmp_476_fu_20977_p3() {
    tmp_476_fu_20977_p3 = (!tmp_468_reg_43558.read()[0].is_01())? sc_lv<32>(): ((tmp_468_reg_43558.read()[0].to_bool())? ref_patch_dy_2_63_41_fu_2082.read(): tmp_475_fu_20970_p3.read());
}

void batch_align2D_region::thread_tmp_477_fu_21017_p2() {
    tmp_477_fu_21017_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_478_fu_21023_p3() {
    tmp_478_fu_21023_p3 = (!tmp_477_fu_21017_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_477_fu_21017_p2.read()[0].to_bool())? ref_patch_dx_2_63_9_fu_1698.read(): ref_patch_dx_2_63_58_fu_1894.read());
}

void batch_align2D_region::thread_tmp_479_fu_21031_p2() {
    tmp_479_fu_21031_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_47_fu_14518_p3() {
    tmp_47_fu_14518_p3 = (!tmp_30_reg_40291.read()[0].is_01())? sc_lv<32>(): ((tmp_30_reg_40291.read()[0].to_bool())? ref_patch_dy_0_63_1_fu_898.read(): ref_patch_dy_0_63_57_fu_1122.read());
}

void batch_align2D_region::thread_tmp_480_fu_21037_p3() {
    tmp_480_fu_21037_p3 = (!tmp_479_fu_21031_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_479_fu_21031_p2.read()[0].to_bool())? ref_patch_dx_2_63_16_fu_1726.read(): tmp_478_fu_21023_p3.read());
}

void batch_align2D_region::thread_tmp_481_fu_21045_p2() {
    tmp_481_fu_21045_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_482_fu_21051_p3() {
    tmp_482_fu_21051_p3 = (!tmp_481_fu_21045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_481_fu_21045_p2.read()[0].to_bool())? ref_patch_dx_2_63_23_fu_1754.read(): tmp_480_fu_21037_p3.read());
}

void batch_align2D_region::thread_tmp_483_fu_21059_p2() {
    tmp_483_fu_21059_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_484_fu_21065_p3() {
    tmp_484_fu_21065_p3 = (!tmp_483_fu_21059_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_483_fu_21059_p2.read()[0].to_bool())? ref_patch_dx_2_63_30_fu_1782.read(): tmp_482_fu_21051_p3.read());
}

void batch_align2D_region::thread_tmp_485_fu_21073_p2() {
    tmp_485_fu_21073_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_486_fu_21079_p3() {
    tmp_486_fu_21079_p3 = (!tmp_485_fu_21073_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_485_fu_21073_p2.read()[0].to_bool())? ref_patch_dx_2_63_37_fu_1810.read(): tmp_484_fu_21065_p3.read());
}

void batch_align2D_region::thread_tmp_487_fu_21087_p2() {
    tmp_487_fu_21087_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_488_fu_21093_p3() {
    tmp_488_fu_21093_p3 = (!tmp_487_fu_21087_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_487_fu_21087_p2.read()[0].to_bool())? ref_patch_dx_2_63_44_fu_1838.read(): tmp_486_fu_21079_p3.read());
}

void batch_align2D_region::thread_tmp_489_fu_21101_p2() {
    tmp_489_fu_21101_p2 = (!it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_1_fu_21012_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_490_fu_21141_p3() {
    tmp_490_fu_21141_p3 = (!tmp_477_reg_43584.read()[0].is_01())? sc_lv<32>(): ((tmp_477_reg_43584.read()[0].to_bool())? ref_patch_dy_2_63_2_fu_1926.read(): ref_patch_dy_2_63_58_fu_2150.read());
}

void batch_align2D_region::thread_tmp_491_fu_21148_p3() {
    tmp_491_fu_21148_p3 = (!tmp_479_reg_43589.read()[0].is_01())? sc_lv<32>(): ((tmp_479_reg_43589.read()[0].to_bool())? ref_patch_dy_2_63_10_fu_1958.read(): tmp_490_fu_21141_p3.read());
}

void batch_align2D_region::thread_tmp_492_fu_21155_p3() {
    tmp_492_fu_21155_p3 = (!tmp_481_reg_43594.read()[0].is_01())? sc_lv<32>(): ((tmp_481_reg_43594.read()[0].to_bool())? ref_patch_dy_2_63_18_fu_1990.read(): tmp_491_fu_21148_p3.read());
}

void batch_align2D_region::thread_tmp_493_fu_21162_p3() {
    tmp_493_fu_21162_p3 = (!tmp_483_reg_43599.read()[0].is_01())? sc_lv<32>(): ((tmp_483_reg_43599.read()[0].to_bool())? ref_patch_dy_2_63_26_fu_2022.read(): tmp_492_fu_21155_p3.read());
}

void batch_align2D_region::thread_tmp_494_fu_21169_p3() {
    tmp_494_fu_21169_p3 = (!tmp_485_reg_43604.read()[0].is_01())? sc_lv<32>(): ((tmp_485_reg_43604.read()[0].to_bool())? ref_patch_dy_2_63_34_fu_2054.read(): tmp_493_fu_21162_p3.read());
}

void batch_align2D_region::thread_tmp_495_fu_21176_p3() {
    tmp_495_fu_21176_p3 = (!tmp_487_reg_43609.read()[0].is_01())? sc_lv<32>(): ((tmp_487_reg_43609.read()[0].to_bool())? ref_patch_dy_2_63_42_fu_2086.read(): tmp_494_fu_21169_p3.read());
}

void batch_align2D_region::thread_tmp_496_fu_21243_p2() {
    tmp_496_fu_21243_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_497_fu_21249_p3() {
    tmp_497_fu_21249_p3 = (!tmp_496_fu_21243_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_496_fu_21243_p2.read()[0].to_bool())? ref_patch_dx_2_63_10_fu_1702.read(): ref_patch_dx_2_63_59_fu_1898.read());
}

void batch_align2D_region::thread_tmp_498_fu_21257_p2() {
    tmp_498_fu_21257_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_499_fu_21263_p3() {
    tmp_499_fu_21263_p3 = (!tmp_498_fu_21257_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_498_fu_21257_p2.read()[0].to_bool())? ref_patch_dx_2_63_17_fu_1730.read(): tmp_497_fu_21249_p3.read());
}

void batch_align2D_region::thread_tmp_4_fu_12209_p1() {
    tmp_4_fu_12209_p1 = esl_sext<64,32>(myRegion_fcoord_ptr.read());
}

void batch_align2D_region::thread_tmp_500_fu_21271_p2() {
    tmp_500_fu_21271_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_501_fu_21277_p3() {
    tmp_501_fu_21277_p3 = (!tmp_500_fu_21271_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_500_fu_21271_p2.read()[0].to_bool())? ref_patch_dx_2_63_24_fu_1758.read(): tmp_499_fu_21263_p3.read());
}

void batch_align2D_region::thread_tmp_502_fu_21285_p2() {
    tmp_502_fu_21285_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_503_fu_21291_p3() {
    tmp_503_fu_21291_p3 = (!tmp_502_fu_21285_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_502_fu_21285_p2.read()[0].to_bool())? ref_patch_dx_2_63_31_fu_1786.read(): tmp_501_fu_21277_p3.read());
}

void batch_align2D_region::thread_tmp_504_fu_21299_p2() {
    tmp_504_fu_21299_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_505_fu_21305_p3() {
    tmp_505_fu_21305_p3 = (!tmp_504_fu_21299_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_504_fu_21299_p2.read()[0].to_bool())? ref_patch_dx_2_63_38_fu_1814.read(): tmp_503_fu_21291_p3.read());
}

void batch_align2D_region::thread_tmp_506_fu_21313_p2() {
    tmp_506_fu_21313_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_507_fu_21319_p3() {
    tmp_507_fu_21319_p3 = (!tmp_506_fu_21313_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_506_fu_21313_p2.read()[0].to_bool())? ref_patch_dx_2_63_45_fu_1842.read(): tmp_505_fu_21305_p3.read());
}

void batch_align2D_region::thread_tmp_508_fu_21327_p2() {
    tmp_508_fu_21327_p2 = (!it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_2_fu_21238_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_509_fu_21341_p3() {
    tmp_509_fu_21341_p3 = (!tmp_496_fu_21243_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_496_fu_21243_p2.read()[0].to_bool())? ref_patch_dy_2_63_3_fu_1930.read(): ref_patch_dy_2_63_59_fu_2154.read());
}

void batch_align2D_region::thread_tmp_511_fu_21349_p3() {
    tmp_511_fu_21349_p3 = (!tmp_498_fu_21257_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_498_fu_21257_p2.read()[0].to_bool())? ref_patch_dy_2_63_11_fu_1962.read(): tmp_509_fu_21341_p3.read());
}

void batch_align2D_region::thread_tmp_512_fu_21357_p3() {
    tmp_512_fu_21357_p3 = (!tmp_500_fu_21271_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_500_fu_21271_p2.read()[0].to_bool())? ref_patch_dy_2_63_19_fu_1994.read(): tmp_511_fu_21349_p3.read());
}

void batch_align2D_region::thread_tmp_513_fu_21365_p3() {
    tmp_513_fu_21365_p3 = (!tmp_502_fu_21285_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_502_fu_21285_p2.read()[0].to_bool())? ref_patch_dy_2_63_27_fu_2026.read(): tmp_512_fu_21357_p3.read());
}

void batch_align2D_region::thread_tmp_514_fu_21373_p3() {
    tmp_514_fu_21373_p3 = (!tmp_504_fu_21299_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_504_fu_21299_p2.read()[0].to_bool())? ref_patch_dy_2_63_35_fu_2058.read(): tmp_513_fu_21365_p3.read());
}

void batch_align2D_region::thread_tmp_515_fu_21381_p3() {
    tmp_515_fu_21381_p3 = (!tmp_506_fu_21313_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_506_fu_21313_p2.read()[0].to_bool())? ref_patch_dy_2_63_43_fu_2090.read(): tmp_514_fu_21373_p3.read());
}

void batch_align2D_region::thread_tmp_516_fu_21450_p2() {
    tmp_516_fu_21450_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_517_fu_21456_p3() {
    tmp_517_fu_21456_p3 = (!tmp_516_fu_21450_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_516_fu_21450_p2.read()[0].to_bool())? ref_patch_dx_2_63_11_fu_1706.read(): ref_patch_dx_2_63_60_fu_1902.read());
}

void batch_align2D_region::thread_tmp_518_fu_21464_p2() {
    tmp_518_fu_21464_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_519_fu_21470_p3() {
    tmp_519_fu_21470_p3 = (!tmp_518_fu_21464_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_518_fu_21464_p2.read()[0].to_bool())? ref_patch_dx_2_63_18_fu_1734.read(): tmp_517_fu_21456_p3.read());
}

void batch_align2D_region::thread_tmp_520_fu_21478_p2() {
    tmp_520_fu_21478_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_521_fu_21484_p3() {
    tmp_521_fu_21484_p3 = (!tmp_520_fu_21478_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_520_fu_21478_p2.read()[0].to_bool())? ref_patch_dx_2_63_25_fu_1762.read(): tmp_519_fu_21470_p3.read());
}

void batch_align2D_region::thread_tmp_522_fu_21492_p2() {
    tmp_522_fu_21492_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_523_fu_21498_p3() {
    tmp_523_fu_21498_p3 = (!tmp_522_fu_21492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_522_fu_21492_p2.read()[0].to_bool())? ref_patch_dx_2_63_32_fu_1790.read(): tmp_521_fu_21484_p3.read());
}

void batch_align2D_region::thread_tmp_524_fu_21506_p2() {
    tmp_524_fu_21506_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_525_fu_21512_p3() {
    tmp_525_fu_21512_p3 = (!tmp_524_fu_21506_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_524_fu_21506_p2.read()[0].to_bool())? ref_patch_dx_2_63_39_fu_1818.read(): tmp_523_fu_21498_p3.read());
}

void batch_align2D_region::thread_tmp_526_fu_21520_p2() {
    tmp_526_fu_21520_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_527_fu_21526_p3() {
    tmp_527_fu_21526_p3 = (!tmp_526_fu_21520_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_526_fu_21520_p2.read()[0].to_bool())? ref_patch_dx_2_63_46_fu_1846.read(): tmp_525_fu_21512_p3.read());
}

void batch_align2D_region::thread_tmp_528_fu_21534_p2() {
    tmp_528_fu_21534_p2 = (!it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_3_fu_21445_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_529_fu_21548_p3() {
    tmp_529_fu_21548_p3 = (!tmp_516_fu_21450_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_516_fu_21450_p2.read()[0].to_bool())? ref_patch_dy_2_63_4_fu_1934.read(): ref_patch_dy_2_63_60_fu_2158.read());
}

void batch_align2D_region::thread_tmp_530_fu_21556_p3() {
    tmp_530_fu_21556_p3 = (!tmp_518_fu_21464_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_518_fu_21464_p2.read()[0].to_bool())? ref_patch_dy_2_63_12_fu_1966.read(): tmp_529_fu_21548_p3.read());
}

void batch_align2D_region::thread_tmp_531_fu_21564_p3() {
    tmp_531_fu_21564_p3 = (!tmp_520_fu_21478_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_520_fu_21478_p2.read()[0].to_bool())? ref_patch_dy_2_63_20_fu_1998.read(): tmp_530_fu_21556_p3.read());
}

void batch_align2D_region::thread_tmp_532_fu_21572_p3() {
    tmp_532_fu_21572_p3 = (!tmp_522_fu_21492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_522_fu_21492_p2.read()[0].to_bool())? ref_patch_dy_2_63_28_fu_2030.read(): tmp_531_fu_21564_p3.read());
}

void batch_align2D_region::thread_tmp_533_fu_21580_p3() {
    tmp_533_fu_21580_p3 = (!tmp_524_fu_21506_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_524_fu_21506_p2.read()[0].to_bool())? ref_patch_dy_2_63_36_fu_2062.read(): tmp_532_fu_21572_p3.read());
}

void batch_align2D_region::thread_tmp_534_fu_21588_p3() {
    tmp_534_fu_21588_p3 = (!tmp_526_fu_21520_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_526_fu_21520_p2.read()[0].to_bool())? ref_patch_dy_2_63_44_fu_2094.read(): tmp_533_fu_21580_p3.read());
}

void batch_align2D_region::thread_tmp_535_fu_21630_p2() {
    tmp_535_fu_21630_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_536_fu_21636_p3() {
    tmp_536_fu_21636_p3 = (!tmp_535_fu_21630_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_535_fu_21630_p2.read()[0].to_bool())? ref_patch_dx_2_63_12_fu_1710.read(): ref_patch_dx_2_63_61_fu_1906.read());
}

void batch_align2D_region::thread_tmp_537_fu_21644_p2() {
    tmp_537_fu_21644_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_538_fu_21650_p3() {
    tmp_538_fu_21650_p3 = (!tmp_537_fu_21644_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_537_fu_21644_p2.read()[0].to_bool())? ref_patch_dx_2_63_19_fu_1738.read(): tmp_536_fu_21636_p3.read());
}

void batch_align2D_region::thread_tmp_539_fu_21658_p2() {
    tmp_539_fu_21658_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_540_fu_21664_p3() {
    tmp_540_fu_21664_p3 = (!tmp_539_fu_21658_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_539_fu_21658_p2.read()[0].to_bool())? ref_patch_dx_2_63_26_fu_1766.read(): tmp_538_fu_21650_p3.read());
}

void batch_align2D_region::thread_tmp_541_fu_21672_p2() {
    tmp_541_fu_21672_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_542_fu_21678_p3() {
    tmp_542_fu_21678_p3 = (!tmp_541_fu_21672_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_541_fu_21672_p2.read()[0].to_bool())? ref_patch_dx_2_63_33_fu_1794.read(): tmp_540_fu_21664_p3.read());
}

void batch_align2D_region::thread_tmp_543_fu_21686_p2() {
    tmp_543_fu_21686_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_544_fu_21692_p3() {
    tmp_544_fu_21692_p3 = (!tmp_543_fu_21686_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_543_fu_21686_p2.read()[0].to_bool())? ref_patch_dx_2_63_40_fu_1822.read(): tmp_542_fu_21678_p3.read());
}

void batch_align2D_region::thread_tmp_545_fu_21700_p2() {
    tmp_545_fu_21700_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_546_fu_21706_p3() {
    tmp_546_fu_21706_p3 = (!tmp_545_fu_21700_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_545_fu_21700_p2.read()[0].to_bool())? ref_patch_dx_2_63_47_fu_1850.read(): tmp_544_fu_21692_p3.read());
}

void batch_align2D_region::thread_tmp_547_fu_21714_p2() {
    tmp_547_fu_21714_p2 = (!it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_4_fu_21625_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_548_fu_21754_p3() {
    tmp_548_fu_21754_p3 = (!tmp_535_reg_43655.read()[0].is_01())? sc_lv<32>(): ((tmp_535_reg_43655.read()[0].to_bool())? ref_patch_dy_2_63_5_fu_1938.read(): ref_patch_dy_2_63_61_fu_2162.read());
}

void batch_align2D_region::thread_tmp_549_fu_21761_p3() {
    tmp_549_fu_21761_p3 = (!tmp_537_reg_43660.read()[0].is_01())? sc_lv<32>(): ((tmp_537_reg_43660.read()[0].to_bool())? ref_patch_dy_2_63_13_fu_1970.read(): tmp_548_fu_21754_p3.read());
}

void batch_align2D_region::thread_tmp_550_fu_21768_p3() {
    tmp_550_fu_21768_p3 = (!tmp_539_reg_43665.read()[0].is_01())? sc_lv<32>(): ((tmp_539_reg_43665.read()[0].to_bool())? ref_patch_dy_2_63_21_fu_2002.read(): tmp_549_fu_21761_p3.read());
}

void batch_align2D_region::thread_tmp_551_fu_21775_p3() {
    tmp_551_fu_21775_p3 = (!tmp_541_reg_43670.read()[0].is_01())? sc_lv<32>(): ((tmp_541_reg_43670.read()[0].to_bool())? ref_patch_dy_2_63_29_fu_2034.read(): tmp_550_fu_21768_p3.read());
}

void batch_align2D_region::thread_tmp_552_fu_21782_p3() {
    tmp_552_fu_21782_p3 = (!tmp_543_reg_43675.read()[0].is_01())? sc_lv<32>(): ((tmp_543_reg_43675.read()[0].to_bool())? ref_patch_dy_2_63_37_fu_2066.read(): tmp_551_fu_21775_p3.read());
}

void batch_align2D_region::thread_tmp_553_fu_21789_p3() {
    tmp_553_fu_21789_p3 = (!tmp_545_reg_43680.read()[0].is_01())? sc_lv<32>(): ((tmp_545_reg_43680.read()[0].to_bool())? ref_patch_dy_2_63_45_fu_2098.read(): tmp_552_fu_21782_p3.read());
}

void batch_align2D_region::thread_tmp_555_fu_21856_p2() {
    tmp_555_fu_21856_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_556_fu_21862_p3() {
    tmp_556_fu_21862_p3 = (!tmp_555_fu_21856_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_555_fu_21856_p2.read()[0].to_bool())? ref_patch_dx_2_63_13_fu_1714.read(): ref_patch_dx_2_63_62_fu_1910.read());
}

void batch_align2D_region::thread_tmp_557_fu_21870_p2() {
    tmp_557_fu_21870_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_558_fu_21876_p3() {
    tmp_558_fu_21876_p3 = (!tmp_557_fu_21870_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_557_fu_21870_p2.read()[0].to_bool())? ref_patch_dx_2_63_20_fu_1742.read(): tmp_556_fu_21862_p3.read());
}

void batch_align2D_region::thread_tmp_559_fu_21884_p2() {
    tmp_559_fu_21884_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_560_fu_21890_p3() {
    tmp_560_fu_21890_p3 = (!tmp_559_fu_21884_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_559_fu_21884_p2.read()[0].to_bool())? ref_patch_dx_2_63_27_fu_1770.read(): tmp_558_fu_21876_p3.read());
}

void batch_align2D_region::thread_tmp_561_fu_21898_p2() {
    tmp_561_fu_21898_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_562_fu_21904_p3() {
    tmp_562_fu_21904_p3 = (!tmp_561_fu_21898_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_561_fu_21898_p2.read()[0].to_bool())? ref_patch_dx_2_63_34_fu_1798.read(): tmp_560_fu_21890_p3.read());
}

void batch_align2D_region::thread_tmp_563_fu_21912_p2() {
    tmp_563_fu_21912_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_564_fu_21918_p3() {
    tmp_564_fu_21918_p3 = (!tmp_563_fu_21912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_563_fu_21912_p2.read()[0].to_bool())? ref_patch_dx_2_63_41_fu_1826.read(): tmp_562_fu_21904_p3.read());
}

void batch_align2D_region::thread_tmp_565_fu_21926_p2() {
    tmp_565_fu_21926_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_566_fu_21932_p3() {
    tmp_566_fu_21932_p3 = (!tmp_565_fu_21926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_565_fu_21926_p2.read()[0].to_bool())? ref_patch_dx_2_63_48_fu_1854.read(): tmp_564_fu_21918_p3.read());
}

void batch_align2D_region::thread_tmp_567_fu_21940_p2() {
    tmp_567_fu_21940_p2 = (!it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_5_fu_21851_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_568_fu_21954_p3() {
    tmp_568_fu_21954_p3 = (!tmp_555_fu_21856_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_555_fu_21856_p2.read()[0].to_bool())? ref_patch_dy_2_63_6_fu_1942.read(): ref_patch_dy_2_63_62_fu_2166.read());
}

void batch_align2D_region::thread_tmp_569_fu_21962_p3() {
    tmp_569_fu_21962_p3 = (!tmp_557_fu_21870_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_557_fu_21870_p2.read()[0].to_bool())? ref_patch_dy_2_63_14_fu_1974.read(): tmp_568_fu_21954_p3.read());
}

void batch_align2D_region::thread_tmp_570_fu_21970_p3() {
    tmp_570_fu_21970_p3 = (!tmp_559_fu_21884_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_559_fu_21884_p2.read()[0].to_bool())? ref_patch_dy_2_63_22_fu_2006.read(): tmp_569_fu_21962_p3.read());
}

void batch_align2D_region::thread_tmp_571_fu_21978_p3() {
    tmp_571_fu_21978_p3 = (!tmp_561_fu_21898_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_561_fu_21898_p2.read()[0].to_bool())? ref_patch_dy_2_63_30_fu_2038.read(): tmp_570_fu_21970_p3.read());
}

void batch_align2D_region::thread_tmp_572_fu_21986_p3() {
    tmp_572_fu_21986_p3 = (!tmp_563_fu_21912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_563_fu_21912_p2.read()[0].to_bool())? ref_patch_dy_2_63_38_fu_2070.read(): tmp_571_fu_21978_p3.read());
}

void batch_align2D_region::thread_tmp_573_fu_21994_p3() {
    tmp_573_fu_21994_p3 = (!tmp_565_fu_21926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_565_fu_21926_p2.read()[0].to_bool())? ref_patch_dy_2_63_46_fu_2102.read(): tmp_572_fu_21986_p3.read());
}

void batch_align2D_region::thread_tmp_574_fu_22063_p2() {
    tmp_574_fu_22063_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_575_fu_22069_p3() {
    tmp_575_fu_22069_p3 = (!tmp_574_fu_22063_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_574_fu_22063_p2.read()[0].to_bool())? ref_patch_dx_2_63_14_fu_1718.read(): ref_patch_dx_2_63_63_fu_1914.read());
}

void batch_align2D_region::thread_tmp_576_fu_22077_p2() {
    tmp_576_fu_22077_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_577_fu_22083_p3() {
    tmp_577_fu_22083_p3 = (!tmp_576_fu_22077_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_576_fu_22077_p2.read()[0].to_bool())? ref_patch_dx_2_63_21_fu_1746.read(): tmp_575_fu_22069_p3.read());
}

void batch_align2D_region::thread_tmp_578_fu_22091_p2() {
    tmp_578_fu_22091_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_579_fu_22097_p3() {
    tmp_579_fu_22097_p3 = (!tmp_578_fu_22091_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_578_fu_22091_p2.read()[0].to_bool())? ref_patch_dx_2_63_28_fu_1774.read(): tmp_577_fu_22083_p3.read());
}

void batch_align2D_region::thread_tmp_580_fu_22105_p2() {
    tmp_580_fu_22105_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_581_fu_22111_p3() {
    tmp_581_fu_22111_p3 = (!tmp_580_fu_22105_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_580_fu_22105_p2.read()[0].to_bool())? ref_patch_dx_2_63_35_fu_1802.read(): tmp_579_fu_22097_p3.read());
}

void batch_align2D_region::thread_tmp_582_fu_22119_p2() {
    tmp_582_fu_22119_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_583_fu_22125_p3() {
    tmp_583_fu_22125_p3 = (!tmp_582_fu_22119_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_582_fu_22119_p2.read()[0].to_bool())? ref_patch_dx_2_63_42_fu_1830.read(): tmp_581_fu_22111_p3.read());
}

void batch_align2D_region::thread_tmp_584_fu_22133_p2() {
    tmp_584_fu_22133_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_585_fu_22139_p3() {
    tmp_585_fu_22139_p3 = (!tmp_584_fu_22133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_584_fu_22133_p2.read()[0].to_bool())? ref_patch_dx_2_63_49_fu_1858.read(): tmp_583_fu_22125_p3.read());
}

void batch_align2D_region::thread_tmp_586_fu_22147_p2() {
    tmp_586_fu_22147_p2 = (!it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_2_sum1_6_fu_22058_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_587_fu_22161_p3() {
    tmp_587_fu_22161_p3 = (!tmp_574_fu_22063_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_574_fu_22063_p2.read()[0].to_bool())? ref_patch_dy_2_63_7_fu_1946.read(): ref_patch_dy_2_63_63_fu_2170.read());
}

void batch_align2D_region::thread_tmp_588_fu_22169_p3() {
    tmp_588_fu_22169_p3 = (!tmp_576_fu_22077_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_576_fu_22077_p2.read()[0].to_bool())? ref_patch_dy_2_63_15_fu_1978.read(): tmp_587_fu_22161_p3.read());
}

void batch_align2D_region::thread_tmp_589_fu_22177_p3() {
    tmp_589_fu_22177_p3 = (!tmp_578_fu_22091_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_578_fu_22091_p2.read()[0].to_bool())? ref_patch_dy_2_63_23_fu_2010.read(): tmp_588_fu_22169_p3.read());
}

void batch_align2D_region::thread_tmp_590_fu_22185_p3() {
    tmp_590_fu_22185_p3 = (!tmp_580_fu_22105_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_580_fu_22105_p2.read()[0].to_bool())? ref_patch_dy_2_63_31_fu_2042.read(): tmp_589_fu_22177_p3.read());
}

void batch_align2D_region::thread_tmp_591_fu_22193_p3() {
    tmp_591_fu_22193_p3 = (!tmp_582_fu_22119_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_582_fu_22119_p2.read()[0].to_bool())? ref_patch_dy_2_63_39_fu_2074.read(): tmp_590_fu_22185_p3.read());
}

void batch_align2D_region::thread_tmp_592_fu_22201_p3() {
    tmp_592_fu_22201_p3 = (!tmp_584_fu_22133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_584_fu_22133_p2.read()[0].to_bool())? ref_patch_dy_2_63_47_fu_2106.read(): tmp_591_fu_22193_p3.read());
}

void batch_align2D_region::thread_tmp_601_fu_23913_p2() {
    tmp_601_fu_23913_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_602_fu_23918_p3() {
    tmp_602_fu_23918_p3 = (!tmp_601_fu_23913_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_601_fu_23913_p2.read()[0].to_bool())? ref_patch_dy_3_63_fu_2430.read(): ref_patch_dy_3_63_56_fu_2654.read());
}

void batch_align2D_region::thread_tmp_603_fu_23926_p2() {
    tmp_603_fu_23926_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_604_fu_23931_p3() {
    tmp_604_fu_23931_p3 = (!tmp_603_fu_23926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_603_fu_23926_p2.read()[0].to_bool())? ref_patch_dy_3_63_8_fu_2462.read(): tmp_602_fu_23918_p3.read());
}

void batch_align2D_region::thread_tmp_605_fu_23939_p2() {
    tmp_605_fu_23939_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_606_fu_23944_p3() {
    tmp_606_fu_23944_p3 = (!tmp_605_fu_23939_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_605_fu_23939_p2.read()[0].to_bool())? ref_patch_dy_3_63_16_fu_2494.read(): tmp_604_fu_23931_p3.read());
}

void batch_align2D_region::thread_tmp_607_fu_23952_p2() {
    tmp_607_fu_23952_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_608_fu_23957_p3() {
    tmp_608_fu_23957_p3 = (!tmp_607_fu_23952_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_607_fu_23952_p2.read()[0].to_bool())? ref_patch_dy_3_63_24_fu_2526.read(): tmp_606_fu_23944_p3.read());
}

void batch_align2D_region::thread_tmp_609_fu_23965_p2() {
    tmp_609_fu_23965_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_610_fu_23970_p3() {
    tmp_610_fu_23970_p3 = (!tmp_609_fu_23965_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_609_fu_23965_p2.read()[0].to_bool())? ref_patch_dy_3_63_32_fu_2558.read(): tmp_608_fu_23957_p3.read());
}

void batch_align2D_region::thread_tmp_611_fu_23978_p2() {
    tmp_611_fu_23978_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_612_fu_23983_p3() {
    tmp_612_fu_23983_p3 = (!tmp_611_fu_23978_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_611_fu_23978_p2.read()[0].to_bool())? ref_patch_dy_3_63_40_fu_2590.read(): tmp_610_fu_23970_p3.read());
}

void batch_align2D_region::thread_tmp_613_fu_23991_p2() {
    tmp_613_fu_23991_p2 = (!tmp_1455_reg_44744_pp11_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1455_reg_44744_pp11_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_614_fu_24030_p2() {
    tmp_614_fu_24030_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_615_fu_24036_p3() {
    tmp_615_fu_24036_p3 = (!tmp_614_fu_24030_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_614_fu_24030_p2.read()[0].to_bool())? ref_patch_dx_3_63_8_fu_2206.read(): ref_patch_dx_3_63_57_fu_2402.read());
}

void batch_align2D_region::thread_tmp_616_cast_fu_23403_p1() {
    tmp_616_cast_fu_23403_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_3_phi_fu_8648_p4.read());
}

void batch_align2D_region::thread_tmp_616_fu_24044_p2() {
    tmp_616_fu_24044_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_617_fu_24050_p3() {
    tmp_617_fu_24050_p3 = (!tmp_616_fu_24044_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_fu_24044_p2.read()[0].to_bool())? ref_patch_dx_3_63_15_fu_2234.read(): tmp_615_fu_24036_p3.read());
}

void batch_align2D_region::thread_tmp_618_fu_24058_p2() {
    tmp_618_fu_24058_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_619_fu_24064_p3() {
    tmp_619_fu_24064_p3 = (!tmp_618_fu_24058_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_618_fu_24058_p2.read()[0].to_bool())? ref_patch_dx_3_63_22_fu_2262.read(): tmp_617_fu_24050_p3.read());
}

void batch_align2D_region::thread_tmp_620_fu_24072_p2() {
    tmp_620_fu_24072_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_621_fu_24078_p3() {
    tmp_621_fu_24078_p3 = (!tmp_620_fu_24072_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_fu_24072_p2.read()[0].to_bool())? ref_patch_dx_3_63_29_fu_2290.read(): tmp_619_fu_24064_p3.read());
}

void batch_align2D_region::thread_tmp_622_fu_24086_p2() {
    tmp_622_fu_24086_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_623_fu_24092_p3() {
    tmp_623_fu_24092_p3 = (!tmp_622_fu_24086_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_622_fu_24086_p2.read()[0].to_bool())? ref_patch_dx_3_63_36_fu_2318.read(): tmp_621_fu_24078_p3.read());
}

void batch_align2D_region::thread_tmp_624_fu_24100_p2() {
    tmp_624_fu_24100_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_625_fu_24106_p3() {
    tmp_625_fu_24106_p3 = (!tmp_624_fu_24100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_624_fu_24100_p2.read()[0].to_bool())? ref_patch_dx_3_63_43_fu_2346.read(): tmp_623_fu_24092_p3.read());
}

void batch_align2D_region::thread_tmp_626_fu_24114_p2() {
    tmp_626_fu_24114_p2 = (!it_ref_dy_0_i_3_sum1_fu_24025_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_fu_24025_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_627_fu_24154_p3() {
    tmp_627_fu_24154_p3 = (!tmp_614_reg_45159.read()[0].is_01())? sc_lv<32>(): ((tmp_614_reg_45159.read()[0].to_bool())? ref_patch_dy_3_63_1_fu_2434.read(): ref_patch_dy_3_63_57_fu_2658.read());
}

void batch_align2D_region::thread_tmp_628_fu_24161_p3() {
    tmp_628_fu_24161_p3 = (!tmp_616_reg_45164.read()[0].is_01())? sc_lv<32>(): ((tmp_616_reg_45164.read()[0].to_bool())? ref_patch_dy_3_63_9_fu_2466.read(): tmp_627_fu_24154_p3.read());
}

void batch_align2D_region::thread_tmp_629_fu_24168_p3() {
    tmp_629_fu_24168_p3 = (!tmp_618_reg_45169.read()[0].is_01())? sc_lv<32>(): ((tmp_618_reg_45169.read()[0].to_bool())? ref_patch_dy_3_63_17_fu_2498.read(): tmp_628_fu_24161_p3.read());
}

void batch_align2D_region::thread_tmp_630_fu_24175_p3() {
    tmp_630_fu_24175_p3 = (!tmp_620_reg_45174.read()[0].is_01())? sc_lv<32>(): ((tmp_620_reg_45174.read()[0].to_bool())? ref_patch_dy_3_63_25_fu_2530.read(): tmp_629_fu_24168_p3.read());
}

void batch_align2D_region::thread_tmp_631_fu_24182_p3() {
    tmp_631_fu_24182_p3 = (!tmp_622_reg_45179.read()[0].is_01())? sc_lv<32>(): ((tmp_622_reg_45179.read()[0].to_bool())? ref_patch_dy_3_63_33_fu_2562.read(): tmp_630_fu_24175_p3.read());
}

void batch_align2D_region::thread_tmp_632_fu_24189_p3() {
    tmp_632_fu_24189_p3 = (!tmp_624_reg_45184.read()[0].is_01())? sc_lv<32>(): ((tmp_624_reg_45184.read()[0].to_bool())? ref_patch_dy_3_63_41_fu_2594.read(): tmp_631_fu_24182_p3.read());
}

void batch_align2D_region::thread_tmp_633_fu_24229_p2() {
    tmp_633_fu_24229_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_634_fu_24235_p3() {
    tmp_634_fu_24235_p3 = (!tmp_633_fu_24229_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_633_fu_24229_p2.read()[0].to_bool())? ref_patch_dx_3_63_9_fu_2210.read(): ref_patch_dx_3_63_58_fu_2406.read());
}

void batch_align2D_region::thread_tmp_635_fu_24243_p2() {
    tmp_635_fu_24243_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_636_fu_24249_p3() {
    tmp_636_fu_24249_p3 = (!tmp_635_fu_24243_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_635_fu_24243_p2.read()[0].to_bool())? ref_patch_dx_3_63_16_fu_2238.read(): tmp_634_fu_24235_p3.read());
}

void batch_align2D_region::thread_tmp_637_fu_24257_p2() {
    tmp_637_fu_24257_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_638_fu_24263_p3() {
    tmp_638_fu_24263_p3 = (!tmp_637_fu_24257_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_637_fu_24257_p2.read()[0].to_bool())? ref_patch_dx_3_63_23_fu_2266.read(): tmp_636_fu_24249_p3.read());
}

void batch_align2D_region::thread_tmp_639_fu_24271_p2() {
    tmp_639_fu_24271_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_640_fu_24277_p3() {
    tmp_640_fu_24277_p3 = (!tmp_639_fu_24271_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_639_fu_24271_p2.read()[0].to_bool())? ref_patch_dx_3_63_30_fu_2294.read(): tmp_638_fu_24263_p3.read());
}

void batch_align2D_region::thread_tmp_641_fu_24285_p2() {
    tmp_641_fu_24285_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_642_fu_24291_p3() {
    tmp_642_fu_24291_p3 = (!tmp_641_fu_24285_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_641_fu_24285_p2.read()[0].to_bool())? ref_patch_dx_3_63_37_fu_2322.read(): tmp_640_fu_24277_p3.read());
}

void batch_align2D_region::thread_tmp_643_fu_24299_p2() {
    tmp_643_fu_24299_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_644_fu_24305_p3() {
    tmp_644_fu_24305_p3 = (!tmp_643_fu_24299_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_643_fu_24299_p2.read()[0].to_bool())? ref_patch_dx_3_63_44_fu_2350.read(): tmp_642_fu_24291_p3.read());
}

void batch_align2D_region::thread_tmp_645_fu_24313_p2() {
    tmp_645_fu_24313_p2 = (!it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_1_fu_24224_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_646_fu_24353_p3() {
    tmp_646_fu_24353_p3 = (!tmp_633_reg_45210.read()[0].is_01())? sc_lv<32>(): ((tmp_633_reg_45210.read()[0].to_bool())? ref_patch_dy_3_63_2_fu_2438.read(): ref_patch_dy_3_63_58_fu_2662.read());
}

void batch_align2D_region::thread_tmp_647_fu_24360_p3() {
    tmp_647_fu_24360_p3 = (!tmp_635_reg_45215.read()[0].is_01())? sc_lv<32>(): ((tmp_635_reg_45215.read()[0].to_bool())? ref_patch_dy_3_63_10_fu_2470.read(): tmp_646_fu_24353_p3.read());
}

void batch_align2D_region::thread_tmp_648_fu_24367_p3() {
    tmp_648_fu_24367_p3 = (!tmp_637_reg_45220.read()[0].is_01())? sc_lv<32>(): ((tmp_637_reg_45220.read()[0].to_bool())? ref_patch_dy_3_63_18_fu_2502.read(): tmp_647_fu_24360_p3.read());
}

void batch_align2D_region::thread_tmp_649_fu_24374_p3() {
    tmp_649_fu_24374_p3 = (!tmp_639_reg_45225.read()[0].is_01())? sc_lv<32>(): ((tmp_639_reg_45225.read()[0].to_bool())? ref_patch_dy_3_63_26_fu_2534.read(): tmp_648_fu_24367_p3.read());
}

void batch_align2D_region::thread_tmp_650_fu_24381_p3() {
    tmp_650_fu_24381_p3 = (!tmp_641_reg_45230.read()[0].is_01())? sc_lv<32>(): ((tmp_641_reg_45230.read()[0].to_bool())? ref_patch_dy_3_63_34_fu_2566.read(): tmp_649_fu_24374_p3.read());
}

void batch_align2D_region::thread_tmp_651_fu_24388_p3() {
    tmp_651_fu_24388_p3 = (!tmp_643_reg_45235.read()[0].is_01())? sc_lv<32>(): ((tmp_643_reg_45235.read()[0].to_bool())? ref_patch_dy_3_63_42_fu_2598.read(): tmp_650_fu_24381_p3.read());
}

void batch_align2D_region::thread_tmp_652_fu_24455_p2() {
    tmp_652_fu_24455_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_653_fu_24461_p3() {
    tmp_653_fu_24461_p3 = (!tmp_652_fu_24455_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_652_fu_24455_p2.read()[0].to_bool())? ref_patch_dx_3_63_10_fu_2214.read(): ref_patch_dx_3_63_59_fu_2410.read());
}

void batch_align2D_region::thread_tmp_654_fu_24469_p2() {
    tmp_654_fu_24469_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_655_fu_24475_p3() {
    tmp_655_fu_24475_p3 = (!tmp_654_fu_24469_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_654_fu_24469_p2.read()[0].to_bool())? ref_patch_dx_3_63_17_fu_2242.read(): tmp_653_fu_24461_p3.read());
}

void batch_align2D_region::thread_tmp_656_fu_24483_p2() {
    tmp_656_fu_24483_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_657_fu_24489_p3() {
    tmp_657_fu_24489_p3 = (!tmp_656_fu_24483_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_656_fu_24483_p2.read()[0].to_bool())? ref_patch_dx_3_63_24_fu_2270.read(): tmp_655_fu_24475_p3.read());
}

void batch_align2D_region::thread_tmp_658_fu_24497_p2() {
    tmp_658_fu_24497_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_659_fu_24503_p3() {
    tmp_659_fu_24503_p3 = (!tmp_658_fu_24497_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_658_fu_24497_p2.read()[0].to_bool())? ref_patch_dx_3_63_31_fu_2298.read(): tmp_657_fu_24489_p3.read());
}

void batch_align2D_region::thread_tmp_660_fu_24511_p2() {
    tmp_660_fu_24511_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_661_fu_24517_p3() {
    tmp_661_fu_24517_p3 = (!tmp_660_fu_24511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_660_fu_24511_p2.read()[0].to_bool())? ref_patch_dx_3_63_38_fu_2326.read(): tmp_659_fu_24503_p3.read());
}

void batch_align2D_region::thread_tmp_662_fu_24525_p2() {
    tmp_662_fu_24525_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_663_fu_24531_p3() {
    tmp_663_fu_24531_p3 = (!tmp_662_fu_24525_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_662_fu_24525_p2.read()[0].to_bool())? ref_patch_dx_3_63_45_fu_2354.read(): tmp_661_fu_24517_p3.read());
}

void batch_align2D_region::thread_tmp_664_fu_24539_p2() {
    tmp_664_fu_24539_p2 = (!it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_2_fu_24450_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_665_fu_24553_p3() {
    tmp_665_fu_24553_p3 = (!tmp_652_fu_24455_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_652_fu_24455_p2.read()[0].to_bool())? ref_patch_dy_3_63_3_fu_2442.read(): ref_patch_dy_3_63_59_fu_2666.read());
}

void batch_align2D_region::thread_tmp_666_fu_24561_p3() {
    tmp_666_fu_24561_p3 = (!tmp_654_fu_24469_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_654_fu_24469_p2.read()[0].to_bool())? ref_patch_dy_3_63_11_fu_2474.read(): tmp_665_fu_24553_p3.read());
}

void batch_align2D_region::thread_tmp_667_fu_24569_p3() {
    tmp_667_fu_24569_p3 = (!tmp_656_fu_24483_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_656_fu_24483_p2.read()[0].to_bool())? ref_patch_dy_3_63_19_fu_2506.read(): tmp_666_fu_24561_p3.read());
}

void batch_align2D_region::thread_tmp_668_fu_24577_p3() {
    tmp_668_fu_24577_p3 = (!tmp_658_fu_24497_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_658_fu_24497_p2.read()[0].to_bool())? ref_patch_dy_3_63_27_fu_2538.read(): tmp_667_fu_24569_p3.read());
}

void batch_align2D_region::thread_tmp_669_fu_24585_p3() {
    tmp_669_fu_24585_p3 = (!tmp_660_fu_24511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_660_fu_24511_p2.read()[0].to_bool())? ref_patch_dy_3_63_35_fu_2570.read(): tmp_668_fu_24577_p3.read());
}

void batch_align2D_region::thread_tmp_670_fu_24593_p3() {
    tmp_670_fu_24593_p3 = (!tmp_662_fu_24525_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_662_fu_24525_p2.read()[0].to_bool())? ref_patch_dy_3_63_43_fu_2602.read(): tmp_669_fu_24585_p3.read());
}

void batch_align2D_region::thread_tmp_671_fu_24662_p2() {
    tmp_671_fu_24662_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_672_fu_24668_p3() {
    tmp_672_fu_24668_p3 = (!tmp_671_fu_24662_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_671_fu_24662_p2.read()[0].to_bool())? ref_patch_dx_3_63_11_fu_2218.read(): ref_patch_dx_3_63_60_fu_2414.read());
}

void batch_align2D_region::thread_tmp_673_fu_24676_p2() {
    tmp_673_fu_24676_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_674_fu_24682_p3() {
    tmp_674_fu_24682_p3 = (!tmp_673_fu_24676_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_673_fu_24676_p2.read()[0].to_bool())? ref_patch_dx_3_63_18_fu_2246.read(): tmp_672_fu_24668_p3.read());
}

void batch_align2D_region::thread_tmp_675_fu_24690_p2() {
    tmp_675_fu_24690_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_676_fu_24696_p3() {
    tmp_676_fu_24696_p3 = (!tmp_675_fu_24690_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_675_fu_24690_p2.read()[0].to_bool())? ref_patch_dx_3_63_25_fu_2274.read(): tmp_674_fu_24682_p3.read());
}

void batch_align2D_region::thread_tmp_677_fu_24704_p2() {
    tmp_677_fu_24704_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_678_fu_24710_p3() {
    tmp_678_fu_24710_p3 = (!tmp_677_fu_24704_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_677_fu_24704_p2.read()[0].to_bool())? ref_patch_dx_3_63_32_fu_2302.read(): tmp_676_fu_24696_p3.read());
}

void batch_align2D_region::thread_tmp_679_fu_24718_p2() {
    tmp_679_fu_24718_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_680_fu_24724_p3() {
    tmp_680_fu_24724_p3 = (!tmp_679_fu_24718_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_679_fu_24718_p2.read()[0].to_bool())? ref_patch_dx_3_63_39_fu_2330.read(): tmp_678_fu_24710_p3.read());
}

void batch_align2D_region::thread_tmp_681_fu_24732_p2() {
    tmp_681_fu_24732_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_682_fu_24738_p3() {
    tmp_682_fu_24738_p3 = (!tmp_681_fu_24732_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_681_fu_24732_p2.read()[0].to_bool())? ref_patch_dx_3_63_46_fu_2358.read(): tmp_680_fu_24724_p3.read());
}

void batch_align2D_region::thread_tmp_683_fu_24746_p2() {
    tmp_683_fu_24746_p2 = (!it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_3_fu_24657_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_684_fu_24760_p3() {
    tmp_684_fu_24760_p3 = (!tmp_671_fu_24662_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_671_fu_24662_p2.read()[0].to_bool())? ref_patch_dy_3_63_4_fu_2446.read(): ref_patch_dy_3_63_60_fu_2670.read());
}

void batch_align2D_region::thread_tmp_685_fu_24768_p3() {
    tmp_685_fu_24768_p3 = (!tmp_673_fu_24676_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_673_fu_24676_p2.read()[0].to_bool())? ref_patch_dy_3_63_12_fu_2478.read(): tmp_684_fu_24760_p3.read());
}

void batch_align2D_region::thread_tmp_686_fu_24776_p3() {
    tmp_686_fu_24776_p3 = (!tmp_675_fu_24690_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_675_fu_24690_p2.read()[0].to_bool())? ref_patch_dy_3_63_20_fu_2510.read(): tmp_685_fu_24768_p3.read());
}

void batch_align2D_region::thread_tmp_687_fu_24784_p3() {
    tmp_687_fu_24784_p3 = (!tmp_677_fu_24704_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_677_fu_24704_p2.read()[0].to_bool())? ref_patch_dy_3_63_28_fu_2542.read(): tmp_686_fu_24776_p3.read());
}

void batch_align2D_region::thread_tmp_688_fu_24792_p3() {
    tmp_688_fu_24792_p3 = (!tmp_679_fu_24718_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_679_fu_24718_p2.read()[0].to_bool())? ref_patch_dy_3_63_36_fu_2574.read(): tmp_687_fu_24784_p3.read());
}

void batch_align2D_region::thread_tmp_689_fu_24800_p3() {
    tmp_689_fu_24800_p3 = (!tmp_681_fu_24732_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_681_fu_24732_p2.read()[0].to_bool())? ref_patch_dy_3_63_44_fu_2606.read(): tmp_688_fu_24792_p3.read());
}

void batch_align2D_region::thread_tmp_690_fu_24842_p2() {
    tmp_690_fu_24842_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_691_fu_24848_p3() {
    tmp_691_fu_24848_p3 = (!tmp_690_fu_24842_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_690_fu_24842_p2.read()[0].to_bool())? ref_patch_dx_3_63_12_fu_2222.read(): ref_patch_dx_3_63_61_fu_2418.read());
}

void batch_align2D_region::thread_tmp_692_fu_24856_p2() {
    tmp_692_fu_24856_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_693_fu_24862_p3() {
    tmp_693_fu_24862_p3 = (!tmp_692_fu_24856_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_692_fu_24856_p2.read()[0].to_bool())? ref_patch_dx_3_63_19_fu_2250.read(): tmp_691_fu_24848_p3.read());
}

void batch_align2D_region::thread_tmp_694_fu_24870_p2() {
    tmp_694_fu_24870_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_695_fu_24876_p3() {
    tmp_695_fu_24876_p3 = (!tmp_694_fu_24870_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_694_fu_24870_p2.read()[0].to_bool())? ref_patch_dx_3_63_26_fu_2278.read(): tmp_693_fu_24862_p3.read());
}

void batch_align2D_region::thread_tmp_696_fu_24884_p2() {
    tmp_696_fu_24884_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_697_fu_24890_p3() {
    tmp_697_fu_24890_p3 = (!tmp_696_fu_24884_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_696_fu_24884_p2.read()[0].to_bool())? ref_patch_dx_3_63_33_fu_2306.read(): tmp_695_fu_24876_p3.read());
}

void batch_align2D_region::thread_tmp_698_fu_24898_p2() {
    tmp_698_fu_24898_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_699_fu_24904_p3() {
    tmp_699_fu_24904_p3 = (!tmp_698_fu_24898_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_698_fu_24898_p2.read()[0].to_bool())? ref_patch_dx_3_63_40_fu_2334.read(): tmp_697_fu_24890_p3.read());
}

void batch_align2D_region::thread_tmp_69_fu_13559_p1() {
    tmp_69_fu_13559_p1 = tmp_81_neg_reg_39802.read();
}

void batch_align2D_region::thread_tmp_700_fu_24912_p2() {
    tmp_700_fu_24912_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_701_fu_24918_p3() {
    tmp_701_fu_24918_p3 = (!tmp_700_fu_24912_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_700_fu_24912_p2.read()[0].to_bool())? ref_patch_dx_3_63_47_fu_2362.read(): tmp_699_fu_24904_p3.read());
}

void batch_align2D_region::thread_tmp_702_fu_24926_p2() {
    tmp_702_fu_24926_p2 = (!it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_4_fu_24837_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_703_fu_24966_p3() {
    tmp_703_fu_24966_p3 = (!tmp_690_reg_45281.read()[0].is_01())? sc_lv<32>(): ((tmp_690_reg_45281.read()[0].to_bool())? ref_patch_dy_3_63_5_fu_2450.read(): ref_patch_dy_3_63_61_fu_2674.read());
}

void batch_align2D_region::thread_tmp_704_fu_24973_p3() {
    tmp_704_fu_24973_p3 = (!tmp_692_reg_45286.read()[0].is_01())? sc_lv<32>(): ((tmp_692_reg_45286.read()[0].to_bool())? ref_patch_dy_3_63_13_fu_2482.read(): tmp_703_fu_24966_p3.read());
}

void batch_align2D_region::thread_tmp_705_fu_24980_p3() {
    tmp_705_fu_24980_p3 = (!tmp_694_reg_45291.read()[0].is_01())? sc_lv<32>(): ((tmp_694_reg_45291.read()[0].to_bool())? ref_patch_dy_3_63_21_fu_2514.read(): tmp_704_fu_24973_p3.read());
}

void batch_align2D_region::thread_tmp_706_fu_24987_p3() {
    tmp_706_fu_24987_p3 = (!tmp_696_reg_45296.read()[0].is_01())? sc_lv<32>(): ((tmp_696_reg_45296.read()[0].to_bool())? ref_patch_dy_3_63_29_fu_2546.read(): tmp_705_fu_24980_p3.read());
}

void batch_align2D_region::thread_tmp_707_fu_24994_p3() {
    tmp_707_fu_24994_p3 = (!tmp_698_reg_45301.read()[0].is_01())? sc_lv<32>(): ((tmp_698_reg_45301.read()[0].to_bool())? ref_patch_dy_3_63_37_fu_2578.read(): tmp_706_fu_24987_p3.read());
}

void batch_align2D_region::thread_tmp_708_fu_25001_p3() {
    tmp_708_fu_25001_p3 = (!tmp_700_reg_45306.read()[0].is_01())? sc_lv<32>(): ((tmp_700_reg_45306.read()[0].to_bool())? ref_patch_dy_3_63_45_fu_2610.read(): tmp_707_fu_24994_p3.read());
}

void batch_align2D_region::thread_tmp_709_fu_25068_p2() {
    tmp_709_fu_25068_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_710_fu_25074_p3() {
    tmp_710_fu_25074_p3 = (!tmp_709_fu_25068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_709_fu_25068_p2.read()[0].to_bool())? ref_patch_dx_3_63_13_fu_2226.read(): ref_patch_dx_3_63_62_fu_2422.read());
}

void batch_align2D_region::thread_tmp_711_fu_25082_p2() {
    tmp_711_fu_25082_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_712_fu_25088_p3() {
    tmp_712_fu_25088_p3 = (!tmp_711_fu_25082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_711_fu_25082_p2.read()[0].to_bool())? ref_patch_dx_3_63_20_fu_2254.read(): tmp_710_fu_25074_p3.read());
}

void batch_align2D_region::thread_tmp_713_fu_25096_p2() {
    tmp_713_fu_25096_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_714_fu_25102_p3() {
    tmp_714_fu_25102_p3 = (!tmp_713_fu_25096_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_713_fu_25096_p2.read()[0].to_bool())? ref_patch_dx_3_63_27_fu_2282.read(): tmp_712_fu_25088_p3.read());
}

void batch_align2D_region::thread_tmp_715_fu_25110_p2() {
    tmp_715_fu_25110_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_716_fu_25116_p3() {
    tmp_716_fu_25116_p3 = (!tmp_715_fu_25110_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_715_fu_25110_p2.read()[0].to_bool())? ref_patch_dx_3_63_34_fu_2310.read(): tmp_714_fu_25102_p3.read());
}

void batch_align2D_region::thread_tmp_717_fu_25124_p2() {
    tmp_717_fu_25124_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_718_fu_25130_p3() {
    tmp_718_fu_25130_p3 = (!tmp_717_fu_25124_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_717_fu_25124_p2.read()[0].to_bool())? ref_patch_dx_3_63_41_fu_2338.read(): tmp_716_fu_25116_p3.read());
}

void batch_align2D_region::thread_tmp_719_fu_25138_p2() {
    tmp_719_fu_25138_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_721_fu_25144_p3() {
    tmp_721_fu_25144_p3 = (!tmp_719_fu_25138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_719_fu_25138_p2.read()[0].to_bool())? ref_patch_dx_3_63_48_fu_2366.read(): tmp_718_fu_25130_p3.read());
}

void batch_align2D_region::thread_tmp_722_fu_25152_p2() {
    tmp_722_fu_25152_p2 = (!it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_5_fu_25063_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_723_fu_25166_p3() {
    tmp_723_fu_25166_p3 = (!tmp_709_fu_25068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_709_fu_25068_p2.read()[0].to_bool())? ref_patch_dy_3_63_6_fu_2454.read(): ref_patch_dy_3_63_62_fu_2678.read());
}

void batch_align2D_region::thread_tmp_724_fu_25174_p3() {
    tmp_724_fu_25174_p3 = (!tmp_711_fu_25082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_711_fu_25082_p2.read()[0].to_bool())? ref_patch_dy_3_63_14_fu_2486.read(): tmp_723_fu_25166_p3.read());
}

void batch_align2D_region::thread_tmp_725_fu_25182_p3() {
    tmp_725_fu_25182_p3 = (!tmp_713_fu_25096_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_713_fu_25096_p2.read()[0].to_bool())? ref_patch_dy_3_63_22_fu_2518.read(): tmp_724_fu_25174_p3.read());
}

void batch_align2D_region::thread_tmp_726_fu_25190_p3() {
    tmp_726_fu_25190_p3 = (!tmp_715_fu_25110_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_715_fu_25110_p2.read()[0].to_bool())? ref_patch_dy_3_63_30_fu_2550.read(): tmp_725_fu_25182_p3.read());
}

void batch_align2D_region::thread_tmp_727_fu_25198_p3() {
    tmp_727_fu_25198_p3 = (!tmp_717_fu_25124_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_717_fu_25124_p2.read()[0].to_bool())? ref_patch_dy_3_63_38_fu_2582.read(): tmp_726_fu_25190_p3.read());
}

void batch_align2D_region::thread_tmp_728_fu_25206_p3() {
    tmp_728_fu_25206_p3 = (!tmp_719_fu_25138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_719_fu_25138_p2.read()[0].to_bool())? ref_patch_dy_3_63_46_fu_2614.read(): tmp_727_fu_25198_p3.read());
}

void batch_align2D_region::thread_tmp_729_fu_25275_p2() {
    tmp_729_fu_25275_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_730_fu_25281_p3() {
    tmp_730_fu_25281_p3 = (!tmp_729_fu_25275_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_729_fu_25275_p2.read()[0].to_bool())? ref_patch_dx_3_63_14_fu_2230.read(): ref_patch_dx_3_63_63_fu_2426.read());
}

void batch_align2D_region::thread_tmp_731_fu_25289_p2() {
    tmp_731_fu_25289_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_732_fu_25295_p3() {
    tmp_732_fu_25295_p3 = (!tmp_731_fu_25289_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_731_fu_25289_p2.read()[0].to_bool())? ref_patch_dx_3_63_21_fu_2258.read(): tmp_730_fu_25281_p3.read());
}

void batch_align2D_region::thread_tmp_733_fu_25303_p2() {
    tmp_733_fu_25303_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_734_fu_25309_p3() {
    tmp_734_fu_25309_p3 = (!tmp_733_fu_25303_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_733_fu_25303_p2.read()[0].to_bool())? ref_patch_dx_3_63_28_fu_2286.read(): tmp_732_fu_25295_p3.read());
}

void batch_align2D_region::thread_tmp_735_fu_25317_p2() {
    tmp_735_fu_25317_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_736_fu_25323_p3() {
    tmp_736_fu_25323_p3 = (!tmp_735_fu_25317_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_735_fu_25317_p2.read()[0].to_bool())? ref_patch_dx_3_63_35_fu_2314.read(): tmp_734_fu_25309_p3.read());
}

void batch_align2D_region::thread_tmp_737_fu_25331_p2() {
    tmp_737_fu_25331_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_738_fu_25337_p3() {
    tmp_738_fu_25337_p3 = (!tmp_737_fu_25331_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_737_fu_25331_p2.read()[0].to_bool())? ref_patch_dx_3_63_42_fu_2342.read(): tmp_736_fu_25323_p3.read());
}

void batch_align2D_region::thread_tmp_739_fu_25345_p2() {
    tmp_739_fu_25345_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_740_fu_25351_p3() {
    tmp_740_fu_25351_p3 = (!tmp_739_fu_25345_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_739_fu_25345_p2.read()[0].to_bool())? ref_patch_dx_3_63_49_fu_2370.read(): tmp_738_fu_25337_p3.read());
}

void batch_align2D_region::thread_tmp_741_fu_25359_p2() {
    tmp_741_fu_25359_p2 = (!it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_3_sum1_6_fu_25270_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_742_fu_25373_p3() {
    tmp_742_fu_25373_p3 = (!tmp_729_fu_25275_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_729_fu_25275_p2.read()[0].to_bool())? ref_patch_dy_3_63_7_fu_2458.read(): ref_patch_dy_3_63_63_fu_2682.read());
}

void batch_align2D_region::thread_tmp_743_fu_25381_p3() {
    tmp_743_fu_25381_p3 = (!tmp_731_fu_25289_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_731_fu_25289_p2.read()[0].to_bool())? ref_patch_dy_3_63_15_fu_2490.read(): tmp_742_fu_25373_p3.read());
}

void batch_align2D_region::thread_tmp_744_fu_25389_p3() {
    tmp_744_fu_25389_p3 = (!tmp_733_fu_25303_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_733_fu_25303_p2.read()[0].to_bool())? ref_patch_dy_3_63_23_fu_2522.read(): tmp_743_fu_25381_p3.read());
}

void batch_align2D_region::thread_tmp_745_fu_25397_p3() {
    tmp_745_fu_25397_p3 = (!tmp_735_fu_25317_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_735_fu_25317_p2.read()[0].to_bool())? ref_patch_dy_3_63_31_fu_2554.read(): tmp_744_fu_25389_p3.read());
}

void batch_align2D_region::thread_tmp_746_fu_25405_p3() {
    tmp_746_fu_25405_p3 = (!tmp_737_fu_25331_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_737_fu_25331_p2.read()[0].to_bool())? ref_patch_dy_3_63_39_fu_2586.read(): tmp_745_fu_25397_p3.read());
}

void batch_align2D_region::thread_tmp_747_fu_25413_p3() {
    tmp_747_fu_25413_p3 = (!tmp_739_fu_25345_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_739_fu_25345_p2.read()[0].to_bool())? ref_patch_dy_3_63_47_fu_2618.read(): tmp_746_fu_25405_p3.read());
}

void batch_align2D_region::thread_tmp_757_fu_27125_p2() {
    tmp_757_fu_27125_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_758_fu_27130_p3() {
    tmp_758_fu_27130_p3 = (!tmp_757_fu_27125_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_757_fu_27125_p2.read()[0].to_bool())? ref_patch_dy_4_63_fu_2942.read(): ref_patch_dy_4_63_56_fu_3166.read());
}

void batch_align2D_region::thread_tmp_759_fu_27138_p2() {
    tmp_759_fu_27138_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_75_fu_13563_p1() {
    tmp_75_fu_13563_p1 = tmp_90_neg_reg_39807.read();
}

void batch_align2D_region::thread_tmp_760_fu_27143_p3() {
    tmp_760_fu_27143_p3 = (!tmp_759_fu_27138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_759_fu_27138_p2.read()[0].to_bool())? ref_patch_dy_4_63_8_fu_2974.read(): tmp_758_fu_27130_p3.read());
}

void batch_align2D_region::thread_tmp_761_fu_27151_p2() {
    tmp_761_fu_27151_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_762_fu_27156_p3() {
    tmp_762_fu_27156_p3 = (!tmp_761_fu_27151_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_761_fu_27151_p2.read()[0].to_bool())? ref_patch_dy_4_63_16_fu_3006.read(): tmp_760_fu_27143_p3.read());
}

void batch_align2D_region::thread_tmp_763_fu_27164_p2() {
    tmp_763_fu_27164_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_764_fu_27169_p3() {
    tmp_764_fu_27169_p3 = (!tmp_763_fu_27164_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_763_fu_27164_p2.read()[0].to_bool())? ref_patch_dy_4_63_24_fu_3038.read(): tmp_762_fu_27156_p3.read());
}

void batch_align2D_region::thread_tmp_765_fu_27177_p2() {
    tmp_765_fu_27177_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_766_fu_27182_p3() {
    tmp_766_fu_27182_p3 = (!tmp_765_fu_27177_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_765_fu_27177_p2.read()[0].to_bool())? ref_patch_dy_4_63_32_fu_3070.read(): tmp_764_fu_27169_p3.read());
}

void batch_align2D_region::thread_tmp_767_fu_27190_p2() {
    tmp_767_fu_27190_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_768_fu_27195_p3() {
    tmp_768_fu_27195_p3 = (!tmp_767_fu_27190_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_767_fu_27190_p2.read()[0].to_bool())? ref_patch_dy_4_63_40_fu_3102.read(): tmp_766_fu_27182_p3.read());
}

void batch_align2D_region::thread_tmp_769_fu_27203_p2() {
    tmp_769_fu_27203_p2 = (!tmp_1466_reg_46365_pp13_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1466_reg_46365_pp13_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_770_fu_27242_p2() {
    tmp_770_fu_27242_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_771_fu_27248_p3() {
    tmp_771_fu_27248_p3 = (!tmp_770_fu_27242_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_770_fu_27242_p2.read()[0].to_bool())? ref_patch_dx_4_63_8_fu_2718.read(): ref_patch_dx_4_63_57_fu_2914.read());
}

void batch_align2D_region::thread_tmp_772_fu_27256_p2() {
    tmp_772_fu_27256_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_773_fu_27262_p3() {
    tmp_773_fu_27262_p3 = (!tmp_772_fu_27256_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_772_fu_27256_p2.read()[0].to_bool())? ref_patch_dx_4_63_15_fu_2746.read(): tmp_771_fu_27248_p3.read());
}

void batch_align2D_region::thread_tmp_774_fu_27270_p2() {
    tmp_774_fu_27270_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_775_fu_27276_p3() {
    tmp_775_fu_27276_p3 = (!tmp_774_fu_27270_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_774_fu_27270_p2.read()[0].to_bool())? ref_patch_dx_4_63_22_fu_2774.read(): tmp_773_fu_27262_p3.read());
}

void batch_align2D_region::thread_tmp_776_fu_27284_p2() {
    tmp_776_fu_27284_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_777_cast_fu_26615_p1() {
    tmp_777_cast_fu_26615_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_4_phi_fu_9036_p4.read());
}

void batch_align2D_region::thread_tmp_777_fu_27290_p3() {
    tmp_777_fu_27290_p3 = (!tmp_776_fu_27284_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_776_fu_27284_p2.read()[0].to_bool())? ref_patch_dx_4_63_29_fu_2802.read(): tmp_775_fu_27276_p3.read());
}

void batch_align2D_region::thread_tmp_778_fu_27298_p2() {
    tmp_778_fu_27298_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_779_fu_27304_p3() {
    tmp_779_fu_27304_p3 = (!tmp_778_fu_27298_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_778_fu_27298_p2.read()[0].to_bool())? ref_patch_dx_4_63_36_fu_2830.read(): tmp_777_fu_27290_p3.read());
}

void batch_align2D_region::thread_tmp_77_fu_13526_p1() {
    tmp_77_fu_13526_p1 = esl_zext<32,8>(pyr_region_fcoord_0_3_reg_38826.read());
}

void batch_align2D_region::thread_tmp_780_fu_27312_p2() {
    tmp_780_fu_27312_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_781_fu_27318_p3() {
    tmp_781_fu_27318_p3 = (!tmp_780_fu_27312_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_780_fu_27312_p2.read()[0].to_bool())? ref_patch_dx_4_63_43_fu_2858.read(): tmp_779_fu_27304_p3.read());
}

void batch_align2D_region::thread_tmp_782_fu_27326_p2() {
    tmp_782_fu_27326_p2 = (!it_ref_dy_0_i_4_sum8_fu_27237_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum8_fu_27237_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_783_fu_27366_p3() {
    tmp_783_fu_27366_p3 = (!tmp_770_reg_46780.read()[0].is_01())? sc_lv<32>(): ((tmp_770_reg_46780.read()[0].to_bool())? ref_patch_dy_4_63_1_fu_2946.read(): ref_patch_dy_4_63_57_fu_3170.read());
}

void batch_align2D_region::thread_tmp_784_fu_27373_p3() {
    tmp_784_fu_27373_p3 = (!tmp_772_reg_46785.read()[0].is_01())? sc_lv<32>(): ((tmp_772_reg_46785.read()[0].to_bool())? ref_patch_dy_4_63_9_fu_2978.read(): tmp_783_fu_27366_p3.read());
}

void batch_align2D_region::thread_tmp_785_fu_27380_p3() {
    tmp_785_fu_27380_p3 = (!tmp_774_reg_46790.read()[0].is_01())? sc_lv<32>(): ((tmp_774_reg_46790.read()[0].to_bool())? ref_patch_dy_4_63_17_fu_3010.read(): tmp_784_fu_27373_p3.read());
}

void batch_align2D_region::thread_tmp_786_fu_27387_p3() {
    tmp_786_fu_27387_p3 = (!tmp_776_reg_46795.read()[0].is_01())? sc_lv<32>(): ((tmp_776_reg_46795.read()[0].to_bool())? ref_patch_dy_4_63_25_fu_3042.read(): tmp_785_fu_27380_p3.read());
}

void batch_align2D_region::thread_tmp_787_fu_27394_p3() {
    tmp_787_fu_27394_p3 = (!tmp_778_reg_46800.read()[0].is_01())? sc_lv<32>(): ((tmp_778_reg_46800.read()[0].to_bool())? ref_patch_dy_4_63_33_fu_3074.read(): tmp_786_fu_27387_p3.read());
}

void batch_align2D_region::thread_tmp_788_fu_27401_p3() {
    tmp_788_fu_27401_p3 = (!tmp_780_reg_46805.read()[0].is_01())? sc_lv<32>(): ((tmp_780_reg_46805.read()[0].to_bool())? ref_patch_dy_4_63_41_fu_3106.read(): tmp_787_fu_27394_p3.read());
}

void batch_align2D_region::thread_tmp_789_fu_27441_p2() {
    tmp_789_fu_27441_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_790_fu_27447_p3() {
    tmp_790_fu_27447_p3 = (!tmp_789_fu_27441_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_789_fu_27441_p2.read()[0].to_bool())? ref_patch_dx_4_63_9_fu_2722.read(): ref_patch_dx_4_63_58_fu_2918.read());
}

void batch_align2D_region::thread_tmp_791_fu_27455_p2() {
    tmp_791_fu_27455_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_792_fu_27461_p3() {
    tmp_792_fu_27461_p3 = (!tmp_791_fu_27455_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_791_fu_27455_p2.read()[0].to_bool())? ref_patch_dx_4_63_16_fu_2750.read(): tmp_790_fu_27447_p3.read());
}

void batch_align2D_region::thread_tmp_793_fu_27469_p2() {
    tmp_793_fu_27469_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_794_fu_27475_p3() {
    tmp_794_fu_27475_p3 = (!tmp_793_fu_27469_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_793_fu_27469_p2.read()[0].to_bool())? ref_patch_dx_4_63_23_fu_2778.read(): tmp_792_fu_27461_p3.read());
}

void batch_align2D_region::thread_tmp_795_fu_27483_p2() {
    tmp_795_fu_27483_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_796_fu_27489_p3() {
    tmp_796_fu_27489_p3 = (!tmp_795_fu_27483_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_795_fu_27483_p2.read()[0].to_bool())? ref_patch_dx_4_63_30_fu_2806.read(): tmp_794_fu_27475_p3.read());
}

void batch_align2D_region::thread_tmp_797_fu_27497_p2() {
    tmp_797_fu_27497_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_798_fu_27503_p3() {
    tmp_798_fu_27503_p3 = (!tmp_797_fu_27497_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_797_fu_27497_p2.read()[0].to_bool())? ref_patch_dx_4_63_37_fu_2834.read(): tmp_796_fu_27489_p3.read());
}

void batch_align2D_region::thread_tmp_799_fu_27511_p2() {
    tmp_799_fu_27511_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_800_fu_27517_p3() {
    tmp_800_fu_27517_p3 = (!tmp_799_fu_27511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_799_fu_27511_p2.read()[0].to_bool())? ref_patch_dx_4_63_44_fu_2862.read(): tmp_798_fu_27503_p3.read());
}

void batch_align2D_region::thread_tmp_801_fu_27525_p2() {
    tmp_801_fu_27525_p2 = (!it_ref_dy_0_i_4_sum9_fu_27436_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_fu_27436_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_802_fu_27565_p3() {
    tmp_802_fu_27565_p3 = (!tmp_789_reg_46831.read()[0].is_01())? sc_lv<32>(): ((tmp_789_reg_46831.read()[0].to_bool())? ref_patch_dy_4_63_2_fu_2950.read(): ref_patch_dy_4_63_58_fu_3174.read());
}

void batch_align2D_region::thread_tmp_803_fu_27572_p3() {
    tmp_803_fu_27572_p3 = (!tmp_791_reg_46836.read()[0].is_01())? sc_lv<32>(): ((tmp_791_reg_46836.read()[0].to_bool())? ref_patch_dy_4_63_10_fu_2982.read(): tmp_802_fu_27565_p3.read());
}

void batch_align2D_region::thread_tmp_804_fu_27579_p3() {
    tmp_804_fu_27579_p3 = (!tmp_793_reg_46841.read()[0].is_01())? sc_lv<32>(): ((tmp_793_reg_46841.read()[0].to_bool())? ref_patch_dy_4_63_18_fu_3014.read(): tmp_803_fu_27572_p3.read());
}

void batch_align2D_region::thread_tmp_805_fu_27586_p3() {
    tmp_805_fu_27586_p3 = (!tmp_795_reg_46846.read()[0].is_01())? sc_lv<32>(): ((tmp_795_reg_46846.read()[0].to_bool())? ref_patch_dy_4_63_26_fu_3046.read(): tmp_804_fu_27579_p3.read());
}

void batch_align2D_region::thread_tmp_806_fu_27593_p3() {
    tmp_806_fu_27593_p3 = (!tmp_797_reg_46851.read()[0].is_01())? sc_lv<32>(): ((tmp_797_reg_46851.read()[0].to_bool())? ref_patch_dy_4_63_34_fu_3078.read(): tmp_805_fu_27586_p3.read());
}

void batch_align2D_region::thread_tmp_807_fu_27600_p3() {
    tmp_807_fu_27600_p3 = (!tmp_799_reg_46856.read()[0].is_01())? sc_lv<32>(): ((tmp_799_reg_46856.read()[0].to_bool())? ref_patch_dy_4_63_42_fu_3110.read(): tmp_806_fu_27593_p3.read());
}

void batch_align2D_region::thread_tmp_808_fu_27667_p2() {
    tmp_808_fu_27667_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_809_fu_27673_p3() {
    tmp_809_fu_27673_p3 = (!tmp_808_fu_27667_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_808_fu_27667_p2.read()[0].to_bool())? ref_patch_dx_4_63_10_fu_2726.read(): ref_patch_dx_4_63_59_fu_2922.read());
}

void batch_align2D_region::thread_tmp_810_fu_27681_p2() {
    tmp_810_fu_27681_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_811_fu_27687_p3() {
    tmp_811_fu_27687_p3 = (!tmp_810_fu_27681_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_810_fu_27681_p2.read()[0].to_bool())? ref_patch_dx_4_63_17_fu_2754.read(): tmp_809_fu_27673_p3.read());
}

void batch_align2D_region::thread_tmp_812_fu_27695_p2() {
    tmp_812_fu_27695_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_813_fu_27701_p3() {
    tmp_813_fu_27701_p3 = (!tmp_812_fu_27695_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_812_fu_27695_p2.read()[0].to_bool())? ref_patch_dx_4_63_24_fu_2782.read(): tmp_811_fu_27687_p3.read());
}

void batch_align2D_region::thread_tmp_814_fu_27709_p2() {
    tmp_814_fu_27709_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_815_fu_27715_p3() {
    tmp_815_fu_27715_p3 = (!tmp_814_fu_27709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_814_fu_27709_p2.read()[0].to_bool())? ref_patch_dx_4_63_31_fu_2810.read(): tmp_813_fu_27701_p3.read());
}

void batch_align2D_region::thread_tmp_816_fu_27723_p2() {
    tmp_816_fu_27723_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_817_fu_27729_p3() {
    tmp_817_fu_27729_p3 = (!tmp_816_fu_27723_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_816_fu_27723_p2.read()[0].to_bool())? ref_patch_dx_4_63_38_fu_2838.read(): tmp_815_fu_27715_p3.read());
}

void batch_align2D_region::thread_tmp_818_fu_27737_p2() {
    tmp_818_fu_27737_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_819_fu_27743_p3() {
    tmp_819_fu_27743_p3 = (!tmp_818_fu_27737_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_818_fu_27737_p2.read()[0].to_bool())? ref_patch_dx_4_63_45_fu_2866.read(): tmp_817_fu_27729_p3.read());
}

void batch_align2D_region::thread_tmp_81_1_fu_16771_p1() {
    tmp_81_1_fu_16771_p1 = tmp_81_neg_1_reg_41423.read();
}

void batch_align2D_region::thread_tmp_81_2_fu_19983_p1() {
    tmp_81_2_fu_19983_p1 = tmp_81_neg_2_reg_43044.read();
}

void batch_align2D_region::thread_tmp_81_3_fu_23195_p1() {
    tmp_81_3_fu_23195_p1 = tmp_81_neg_3_reg_44670.read();
}

void batch_align2D_region::thread_tmp_81_4_fu_26407_p1() {
    tmp_81_4_fu_26407_p1 = tmp_81_neg_4_reg_46291.read();
}

void batch_align2D_region::thread_tmp_81_5_fu_29619_p1() {
    tmp_81_5_fu_29619_p1 = tmp_81_neg_5_reg_47912.read();
}

void batch_align2D_region::thread_tmp_81_6_fu_32831_p1() {
    tmp_81_6_fu_32831_p1 = tmp_81_neg_6_reg_49533.read();
}

void batch_align2D_region::thread_tmp_81_7_fu_36044_p1() {
    tmp_81_7_fu_36044_p1 = tmp_81_neg_7_reg_51148.read();
}

void batch_align2D_region::thread_tmp_81_neg_1_fu_16755_p2() {
    tmp_81_neg_1_fu_16755_p2 = (tmp_81_to_int_1_fu_16751_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_2_fu_19967_p2() {
    tmp_81_neg_2_fu_19967_p2 = (tmp_81_to_int_2_fu_19963_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_3_fu_23179_p2() {
    tmp_81_neg_3_fu_23179_p2 = (tmp_81_to_int_3_fu_23175_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_4_fu_26391_p2() {
    tmp_81_neg_4_fu_26391_p2 = (tmp_81_to_int_4_fu_26387_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_5_fu_29603_p2() {
    tmp_81_neg_5_fu_29603_p2 = (tmp_81_to_int_5_fu_29599_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_6_fu_32815_p2() {
    tmp_81_neg_6_fu_32815_p2 = (tmp_81_to_int_6_fu_32811_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_7_fu_36028_p2() {
    tmp_81_neg_7_fu_36028_p2 = (tmp_81_to_int_7_fu_36024_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_neg_fu_13543_p2() {
    tmp_81_neg_fu_13543_p2 = (tmp_81_to_int_fu_13539_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_81_to_int_1_fu_16751_p1() {
    tmp_81_to_int_1_fu_16751_p1 = reg_11162.read();
}

void batch_align2D_region::thread_tmp_81_to_int_2_fu_19963_p1() {
    tmp_81_to_int_2_fu_19963_p1 = reg_11187.read();
}

void batch_align2D_region::thread_tmp_81_to_int_3_fu_23175_p1() {
    tmp_81_to_int_3_fu_23175_p1 = reg_11607.read();
}

void batch_align2D_region::thread_tmp_81_to_int_4_fu_26387_p1() {
    tmp_81_to_int_4_fu_26387_p1 = reg_11715.read();
}

void batch_align2D_region::thread_tmp_81_to_int_5_fu_29599_p1() {
    tmp_81_to_int_5_fu_29599_p1 = reg_11746.read();
}

void batch_align2D_region::thread_tmp_81_to_int_6_fu_32811_p1() {
    tmp_81_to_int_6_fu_32811_p1 = reg_11746.read();
}

void batch_align2D_region::thread_tmp_81_to_int_7_fu_36024_p1() {
    tmp_81_to_int_7_fu_36024_p1 = reg_11162.read();
}

void batch_align2D_region::thread_tmp_81_to_int_fu_13539_p1() {
    tmp_81_to_int_fu_13539_p1 = reg_11162.read();
}

void batch_align2D_region::thread_tmp_820_fu_27751_p2() {
    tmp_820_fu_27751_p2 = (!it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_1_fu_27662_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_821_fu_27765_p3() {
    tmp_821_fu_27765_p3 = (!tmp_808_fu_27667_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_808_fu_27667_p2.read()[0].to_bool())? ref_patch_dy_4_63_3_fu_2954.read(): ref_patch_dy_4_63_59_fu_3178.read());
}

void batch_align2D_region::thread_tmp_822_fu_27773_p3() {
    tmp_822_fu_27773_p3 = (!tmp_810_fu_27681_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_810_fu_27681_p2.read()[0].to_bool())? ref_patch_dy_4_63_11_fu_2986.read(): tmp_821_fu_27765_p3.read());
}

void batch_align2D_region::thread_tmp_823_fu_27781_p3() {
    tmp_823_fu_27781_p3 = (!tmp_812_fu_27695_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_812_fu_27695_p2.read()[0].to_bool())? ref_patch_dy_4_63_19_fu_3018.read(): tmp_822_fu_27773_p3.read());
}

void batch_align2D_region::thread_tmp_824_fu_27789_p3() {
    tmp_824_fu_27789_p3 = (!tmp_814_fu_27709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_814_fu_27709_p2.read()[0].to_bool())? ref_patch_dy_4_63_27_fu_3050.read(): tmp_823_fu_27781_p3.read());
}

void batch_align2D_region::thread_tmp_825_fu_27797_p3() {
    tmp_825_fu_27797_p3 = (!tmp_816_fu_27723_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_816_fu_27723_p2.read()[0].to_bool())? ref_patch_dy_4_63_35_fu_3082.read(): tmp_824_fu_27789_p3.read());
}

void batch_align2D_region::thread_tmp_826_fu_27805_p3() {
    tmp_826_fu_27805_p3 = (!tmp_818_fu_27737_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_818_fu_27737_p2.read()[0].to_bool())? ref_patch_dy_4_63_43_fu_3114.read(): tmp_825_fu_27797_p3.read());
}

void batch_align2D_region::thread_tmp_827_fu_27874_p2() {
    tmp_827_fu_27874_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_828_fu_27880_p3() {
    tmp_828_fu_27880_p3 = (!tmp_827_fu_27874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_827_fu_27874_p2.read()[0].to_bool())? ref_patch_dx_4_63_11_fu_2730.read(): ref_patch_dx_4_63_60_fu_2926.read());
}

void batch_align2D_region::thread_tmp_829_fu_27888_p2() {
    tmp_829_fu_27888_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_82_fu_14525_p3() {
    tmp_82_fu_14525_p3 = (!tmp_32_reg_40296.read()[0].is_01())? sc_lv<32>(): ((tmp_32_reg_40296.read()[0].to_bool())? ref_patch_dy_0_63_9_fu_930.read(): tmp_47_fu_14518_p3.read());
}

void batch_align2D_region::thread_tmp_830_fu_27894_p3() {
    tmp_830_fu_27894_p3 = (!tmp_829_fu_27888_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_829_fu_27888_p2.read()[0].to_bool())? ref_patch_dx_4_63_18_fu_2758.read(): tmp_828_fu_27880_p3.read());
}

void batch_align2D_region::thread_tmp_831_fu_27902_p2() {
    tmp_831_fu_27902_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_832_fu_27908_p3() {
    tmp_832_fu_27908_p3 = (!tmp_831_fu_27902_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_831_fu_27902_p2.read()[0].to_bool())? ref_patch_dx_4_63_25_fu_2786.read(): tmp_830_fu_27894_p3.read());
}

void batch_align2D_region::thread_tmp_833_fu_27916_p2() {
    tmp_833_fu_27916_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_834_fu_27922_p3() {
    tmp_834_fu_27922_p3 = (!tmp_833_fu_27916_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_833_fu_27916_p2.read()[0].to_bool())? ref_patch_dx_4_63_32_fu_2814.read(): tmp_832_fu_27908_p3.read());
}

void batch_align2D_region::thread_tmp_835_fu_27930_p2() {
    tmp_835_fu_27930_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_836_fu_27936_p3() {
    tmp_836_fu_27936_p3 = (!tmp_835_fu_27930_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_835_fu_27930_p2.read()[0].to_bool())? ref_patch_dx_4_63_39_fu_2842.read(): tmp_834_fu_27922_p3.read());
}

void batch_align2D_region::thread_tmp_837_fu_27944_p2() {
    tmp_837_fu_27944_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_838_fu_27950_p3() {
    tmp_838_fu_27950_p3 = (!tmp_837_fu_27944_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_837_fu_27944_p2.read()[0].to_bool())? ref_patch_dx_4_63_46_fu_2870.read(): tmp_836_fu_27936_p3.read());
}

void batch_align2D_region::thread_tmp_839_fu_27958_p2() {
    tmp_839_fu_27958_p2 = (!it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_2_fu_27869_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_83_fu_13534_p1() {
    tmp_83_fu_13534_p1 = esl_zext<32,8>(pyr_region_fcoord_0_1.read());
}

void batch_align2D_region::thread_tmp_840_fu_27972_p3() {
    tmp_840_fu_27972_p3 = (!tmp_827_fu_27874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_827_fu_27874_p2.read()[0].to_bool())? ref_patch_dy_4_63_4_fu_2958.read(): ref_patch_dy_4_63_60_fu_3182.read());
}

void batch_align2D_region::thread_tmp_841_fu_27980_p3() {
    tmp_841_fu_27980_p3 = (!tmp_829_fu_27888_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_829_fu_27888_p2.read()[0].to_bool())? ref_patch_dy_4_63_12_fu_2990.read(): tmp_840_fu_27972_p3.read());
}

void batch_align2D_region::thread_tmp_842_fu_27988_p3() {
    tmp_842_fu_27988_p3 = (!tmp_831_fu_27902_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_831_fu_27902_p2.read()[0].to_bool())? ref_patch_dy_4_63_20_fu_3022.read(): tmp_841_fu_27980_p3.read());
}

void batch_align2D_region::thread_tmp_843_fu_27996_p3() {
    tmp_843_fu_27996_p3 = (!tmp_833_fu_27916_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_833_fu_27916_p2.read()[0].to_bool())? ref_patch_dy_4_63_28_fu_3054.read(): tmp_842_fu_27988_p3.read());
}

void batch_align2D_region::thread_tmp_844_fu_28004_p3() {
    tmp_844_fu_28004_p3 = (!tmp_835_fu_27930_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_835_fu_27930_p2.read()[0].to_bool())? ref_patch_dy_4_63_36_fu_3086.read(): tmp_843_fu_27996_p3.read());
}

void batch_align2D_region::thread_tmp_845_fu_28012_p3() {
    tmp_845_fu_28012_p3 = (!tmp_837_fu_27944_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_837_fu_27944_p2.read()[0].to_bool())? ref_patch_dy_4_63_44_fu_3118.read(): tmp_844_fu_28004_p3.read());
}

void batch_align2D_region::thread_tmp_846_fu_28054_p2() {
    tmp_846_fu_28054_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_847_fu_28060_p3() {
    tmp_847_fu_28060_p3 = (!tmp_846_fu_28054_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_846_fu_28054_p2.read()[0].to_bool())? ref_patch_dx_4_63_12_fu_2734.read(): ref_patch_dx_4_63_61_fu_2930.read());
}

void batch_align2D_region::thread_tmp_848_fu_28068_p2() {
    tmp_848_fu_28068_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_849_fu_28074_p3() {
    tmp_849_fu_28074_p3 = (!tmp_848_fu_28068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_848_fu_28068_p2.read()[0].to_bool())? ref_patch_dx_4_63_19_fu_2762.read(): tmp_847_fu_28060_p3.read());
}

void batch_align2D_region::thread_tmp_850_fu_28082_p2() {
    tmp_850_fu_28082_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_851_fu_28088_p3() {
    tmp_851_fu_28088_p3 = (!tmp_850_fu_28082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_850_fu_28082_p2.read()[0].to_bool())? ref_patch_dx_4_63_26_fu_2790.read(): tmp_849_fu_28074_p3.read());
}

void batch_align2D_region::thread_tmp_852_fu_28096_p2() {
    tmp_852_fu_28096_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_853_fu_28102_p3() {
    tmp_853_fu_28102_p3 = (!tmp_852_fu_28096_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_852_fu_28096_p2.read()[0].to_bool())? ref_patch_dx_4_63_33_fu_2818.read(): tmp_851_fu_28088_p3.read());
}

void batch_align2D_region::thread_tmp_854_fu_28110_p2() {
    tmp_854_fu_28110_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_855_fu_28116_p3() {
    tmp_855_fu_28116_p3 = (!tmp_854_fu_28110_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_854_fu_28110_p2.read()[0].to_bool())? ref_patch_dx_4_63_40_fu_2846.read(): tmp_853_fu_28102_p3.read());
}

void batch_align2D_region::thread_tmp_856_fu_28124_p2() {
    tmp_856_fu_28124_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_857_fu_28130_p3() {
    tmp_857_fu_28130_p3 = (!tmp_856_fu_28124_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_856_fu_28124_p2.read()[0].to_bool())? ref_patch_dx_4_63_47_fu_2874.read(): tmp_855_fu_28116_p3.read());
}

void batch_align2D_region::thread_tmp_858_fu_28138_p2() {
    tmp_858_fu_28138_p2 = (!it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_3_fu_28049_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_859_fu_28178_p3() {
    tmp_859_fu_28178_p3 = (!tmp_846_reg_46902.read()[0].is_01())? sc_lv<32>(): ((tmp_846_reg_46902.read()[0].to_bool())? ref_patch_dy_4_63_5_fu_2962.read(): ref_patch_dy_4_63_61_fu_3186.read());
}

void batch_align2D_region::thread_tmp_860_fu_28185_p3() {
    tmp_860_fu_28185_p3 = (!tmp_848_reg_46907.read()[0].is_01())? sc_lv<32>(): ((tmp_848_reg_46907.read()[0].to_bool())? ref_patch_dy_4_63_13_fu_2994.read(): tmp_859_fu_28178_p3.read());
}

void batch_align2D_region::thread_tmp_861_fu_28192_p3() {
    tmp_861_fu_28192_p3 = (!tmp_850_reg_46912.read()[0].is_01())? sc_lv<32>(): ((tmp_850_reg_46912.read()[0].to_bool())? ref_patch_dy_4_63_21_fu_3026.read(): tmp_860_fu_28185_p3.read());
}

void batch_align2D_region::thread_tmp_862_fu_28199_p3() {
    tmp_862_fu_28199_p3 = (!tmp_852_reg_46917.read()[0].is_01())? sc_lv<32>(): ((tmp_852_reg_46917.read()[0].to_bool())? ref_patch_dy_4_63_29_fu_3058.read(): tmp_861_fu_28192_p3.read());
}

void batch_align2D_region::thread_tmp_863_fu_28206_p3() {
    tmp_863_fu_28206_p3 = (!tmp_854_reg_46922.read()[0].is_01())? sc_lv<32>(): ((tmp_854_reg_46922.read()[0].to_bool())? ref_patch_dy_4_63_37_fu_3090.read(): tmp_862_fu_28199_p3.read());
}

void batch_align2D_region::thread_tmp_864_fu_28213_p3() {
    tmp_864_fu_28213_p3 = (!tmp_856_reg_46927.read()[0].is_01())? sc_lv<32>(): ((tmp_856_reg_46927.read()[0].to_bool())? ref_patch_dy_4_63_45_fu_3122.read(): tmp_863_fu_28206_p3.read());
}

void batch_align2D_region::thread_tmp_865_fu_28280_p2() {
    tmp_865_fu_28280_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_866_fu_28286_p3() {
    tmp_866_fu_28286_p3 = (!tmp_865_fu_28280_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_865_fu_28280_p2.read()[0].to_bool())? ref_patch_dx_4_63_13_fu_2738.read(): ref_patch_dx_4_63_62_fu_2934.read());
}

void batch_align2D_region::thread_tmp_867_fu_28294_p2() {
    tmp_867_fu_28294_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_868_fu_28300_p3() {
    tmp_868_fu_28300_p3 = (!tmp_867_fu_28294_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_867_fu_28294_p2.read()[0].to_bool())? ref_patch_dx_4_63_20_fu_2766.read(): tmp_866_fu_28286_p3.read());
}

void batch_align2D_region::thread_tmp_869_fu_28308_p2() {
    tmp_869_fu_28308_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_870_fu_28314_p3() {
    tmp_870_fu_28314_p3 = (!tmp_869_fu_28308_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_869_fu_28308_p2.read()[0].to_bool())? ref_patch_dx_4_63_27_fu_2794.read(): tmp_868_fu_28300_p3.read());
}

void batch_align2D_region::thread_tmp_871_fu_28322_p2() {
    tmp_871_fu_28322_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_872_fu_28328_p3() {
    tmp_872_fu_28328_p3 = (!tmp_871_fu_28322_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_871_fu_28322_p2.read()[0].to_bool())? ref_patch_dx_4_63_34_fu_2822.read(): tmp_870_fu_28314_p3.read());
}

void batch_align2D_region::thread_tmp_873_fu_28336_p2() {
    tmp_873_fu_28336_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_874_fu_28342_p3() {
    tmp_874_fu_28342_p3 = (!tmp_873_fu_28336_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_873_fu_28336_p2.read()[0].to_bool())? ref_patch_dx_4_63_41_fu_2850.read(): tmp_872_fu_28328_p3.read());
}

void batch_align2D_region::thread_tmp_875_fu_28350_p2() {
    tmp_875_fu_28350_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_876_fu_28356_p3() {
    tmp_876_fu_28356_p3 = (!tmp_875_fu_28350_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_875_fu_28350_p2.read()[0].to_bool())? ref_patch_dx_4_63_48_fu_2878.read(): tmp_874_fu_28342_p3.read());
}

void batch_align2D_region::thread_tmp_877_fu_28364_p2() {
    tmp_877_fu_28364_p2 = (!it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum9_4_fu_28275_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_878_fu_28378_p3() {
    tmp_878_fu_28378_p3 = (!tmp_865_fu_28280_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_865_fu_28280_p2.read()[0].to_bool())? ref_patch_dy_4_63_6_fu_2966.read(): ref_patch_dy_4_63_62_fu_3190.read());
}

void batch_align2D_region::thread_tmp_879_fu_28386_p3() {
    tmp_879_fu_28386_p3 = (!tmp_867_fu_28294_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_867_fu_28294_p2.read()[0].to_bool())? ref_patch_dy_4_63_14_fu_2998.read(): tmp_878_fu_28378_p3.read());
}

void batch_align2D_region::thread_tmp_880_fu_28394_p3() {
    tmp_880_fu_28394_p3 = (!tmp_869_fu_28308_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_869_fu_28308_p2.read()[0].to_bool())? ref_patch_dy_4_63_22_fu_3030.read(): tmp_879_fu_28386_p3.read());
}

void batch_align2D_region::thread_tmp_881_fu_28402_p3() {
    tmp_881_fu_28402_p3 = (!tmp_871_fu_28322_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_871_fu_28322_p2.read()[0].to_bool())? ref_patch_dy_4_63_30_fu_3062.read(): tmp_880_fu_28394_p3.read());
}

void batch_align2D_region::thread_tmp_882_fu_28410_p3() {
    tmp_882_fu_28410_p3 = (!tmp_873_fu_28336_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_873_fu_28336_p2.read()[0].to_bool())? ref_patch_dy_4_63_38_fu_3094.read(): tmp_881_fu_28402_p3.read());
}

void batch_align2D_region::thread_tmp_883_fu_28418_p3() {
    tmp_883_fu_28418_p3 = (!tmp_875_fu_28350_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_875_fu_28350_p2.read()[0].to_bool())? ref_patch_dy_4_63_46_fu_3126.read(): tmp_882_fu_28410_p3.read());
}

void batch_align2D_region::thread_tmp_884_fu_28487_p2() {
    tmp_884_fu_28487_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_885_fu_28493_p3() {
    tmp_885_fu_28493_p3 = (!tmp_884_fu_28487_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_884_fu_28487_p2.read()[0].to_bool())? ref_patch_dx_4_63_14_fu_2742.read(): ref_patch_dx_4_63_63_fu_2938.read());
}

void batch_align2D_region::thread_tmp_886_fu_28501_p2() {
    tmp_886_fu_28501_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_887_fu_28507_p3() {
    tmp_887_fu_28507_p3 = (!tmp_886_fu_28501_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_886_fu_28501_p2.read()[0].to_bool())? ref_patch_dx_4_63_21_fu_2770.read(): tmp_885_fu_28493_p3.read());
}

void batch_align2D_region::thread_tmp_888_fu_28515_p2() {
    tmp_888_fu_28515_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_889_fu_28521_p3() {
    tmp_889_fu_28521_p3 = (!tmp_888_fu_28515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_888_fu_28515_p2.read()[0].to_bool())? ref_patch_dx_4_63_28_fu_2798.read(): tmp_887_fu_28507_p3.read());
}

void batch_align2D_region::thread_tmp_88_fu_14532_p3() {
    tmp_88_fu_14532_p3 = (!tmp_34_reg_40301.read()[0].is_01())? sc_lv<32>(): ((tmp_34_reg_40301.read()[0].to_bool())? ref_patch_dy_0_63_17_fu_962.read(): tmp_82_fu_14525_p3.read());
}

void batch_align2D_region::thread_tmp_890_fu_28529_p2() {
    tmp_890_fu_28529_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_891_fu_28535_p3() {
    tmp_891_fu_28535_p3 = (!tmp_890_fu_28529_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_890_fu_28529_p2.read()[0].to_bool())? ref_patch_dx_4_63_35_fu_2826.read(): tmp_889_fu_28521_p3.read());
}

void batch_align2D_region::thread_tmp_892_fu_28543_p2() {
    tmp_892_fu_28543_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_893_fu_28549_p3() {
    tmp_893_fu_28549_p3 = (!tmp_892_fu_28543_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_892_fu_28543_p2.read()[0].to_bool())? ref_patch_dx_4_63_42_fu_2854.read(): tmp_891_fu_28535_p3.read());
}

void batch_align2D_region::thread_tmp_894_fu_28557_p2() {
    tmp_894_fu_28557_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_895_fu_28563_p3() {
    tmp_895_fu_28563_p3 = (!tmp_894_fu_28557_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_894_fu_28557_p2.read()[0].to_bool())? ref_patch_dx_4_63_49_fu_2882.read(): tmp_893_fu_28549_p3.read());
}

void batch_align2D_region::thread_tmp_896_fu_28571_p2() {
    tmp_896_fu_28571_p2 = (!it_ref_dy_0_i_4_sum1_fu_28482_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_4_sum1_fu_28482_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_897_fu_28585_p3() {
    tmp_897_fu_28585_p3 = (!tmp_884_fu_28487_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_884_fu_28487_p2.read()[0].to_bool())? ref_patch_dy_4_63_7_fu_2970.read(): ref_patch_dy_4_63_63_fu_3194.read());
}

void batch_align2D_region::thread_tmp_898_fu_28593_p3() {
    tmp_898_fu_28593_p3 = (!tmp_886_fu_28501_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_886_fu_28501_p2.read()[0].to_bool())? ref_patch_dy_4_63_15_fu_3002.read(): tmp_897_fu_28585_p3.read());
}

void batch_align2D_region::thread_tmp_899_fu_28601_p3() {
    tmp_899_fu_28601_p3 = (!tmp_888_fu_28515_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_888_fu_28515_p2.read()[0].to_bool())? ref_patch_dy_4_63_23_fu_3034.read(): tmp_898_fu_28593_p3.read());
}

void batch_align2D_region::thread_tmp_89_fu_12726_p2() {
    tmp_89_fu_12726_p2 = (!p_shl7_cast_fu_12722_p1.read().is_01() || !p_shl_cast_fu_12710_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl7_cast_fu_12722_p1.read()) + sc_biguint<7>(p_shl_cast_fu_12710_p1.read()));
}

void batch_align2D_region::thread_tmp_900_fu_28609_p3() {
    tmp_900_fu_28609_p3 = (!tmp_890_fu_28529_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_890_fu_28529_p2.read()[0].to_bool())? ref_patch_dy_4_63_31_fu_3066.read(): tmp_899_fu_28601_p3.read());
}

void batch_align2D_region::thread_tmp_901_fu_28617_p3() {
    tmp_901_fu_28617_p3 = (!tmp_892_fu_28543_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_892_fu_28543_p2.read()[0].to_bool())? ref_patch_dy_4_63_39_fu_3098.read(): tmp_900_fu_28609_p3.read());
}

void batch_align2D_region::thread_tmp_902_fu_28625_p3() {
    tmp_902_fu_28625_p3 = (!tmp_894_fu_28557_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_894_fu_28557_p2.read()[0].to_bool())? ref_patch_dy_4_63_47_fu_3130.read(): tmp_901_fu_28617_p3.read());
}

void batch_align2D_region::thread_tmp_90_1_fu_16775_p1() {
    tmp_90_1_fu_16775_p1 = tmp_90_neg_1_reg_41428.read();
}

void batch_align2D_region::thread_tmp_90_2_fu_19987_p1() {
    tmp_90_2_fu_19987_p1 = tmp_90_neg_2_reg_43049.read();
}

void batch_align2D_region::thread_tmp_90_3_fu_23199_p1() {
    tmp_90_3_fu_23199_p1 = tmp_90_neg_3_reg_44675.read();
}

void batch_align2D_region::thread_tmp_90_4_fu_26411_p1() {
    tmp_90_4_fu_26411_p1 = tmp_90_neg_4_reg_46296.read();
}

void batch_align2D_region::thread_tmp_90_5_fu_29623_p1() {
    tmp_90_5_fu_29623_p1 = tmp_90_neg_5_reg_47917.read();
}

void batch_align2D_region::thread_tmp_90_6_fu_32835_p1() {
    tmp_90_6_fu_32835_p1 = tmp_90_neg_6_reg_49538.read();
}

void batch_align2D_region::thread_tmp_90_7_fu_36048_p1() {
    tmp_90_7_fu_36048_p1 = tmp_90_neg_7_reg_51153.read();
}

void batch_align2D_region::thread_tmp_90_fu_12742_p2() {
    tmp_90_fu_12742_p2 = (!tmp_89_fu_12726_p2.read().is_01() || !tmp107_cast_fu_12738_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_89_fu_12726_p2.read()) + sc_biguint<7>(tmp107_cast_fu_12738_p1.read()));
}

void batch_align2D_region::thread_tmp_90_neg_1_fu_16765_p2() {
    tmp_90_neg_1_fu_16765_p2 = (tmp_90_to_int_1_fu_16761_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_2_fu_19977_p2() {
    tmp_90_neg_2_fu_19977_p2 = (tmp_90_to_int_2_fu_19973_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_3_fu_23189_p2() {
    tmp_90_neg_3_fu_23189_p2 = (tmp_90_to_int_3_fu_23185_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_4_fu_26401_p2() {
    tmp_90_neg_4_fu_26401_p2 = (tmp_90_to_int_4_fu_26397_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_5_fu_29613_p2() {
    tmp_90_neg_5_fu_29613_p2 = (tmp_90_to_int_5_fu_29609_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_6_fu_32825_p2() {
    tmp_90_neg_6_fu_32825_p2 = (tmp_90_to_int_6_fu_32821_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_7_fu_36038_p2() {
    tmp_90_neg_7_fu_36038_p2 = (tmp_90_to_int_7_fu_36034_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_neg_fu_13553_p2() {
    tmp_90_neg_fu_13553_p2 = (tmp_90_to_int_fu_13549_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_90_to_int_1_fu_16761_p1() {
    tmp_90_to_int_1_fu_16761_p1 = reg_11142.read();
}

void batch_align2D_region::thread_tmp_90_to_int_2_fu_19973_p1() {
    tmp_90_to_int_2_fu_19973_p1 = reg_11904.read();
}

void batch_align2D_region::thread_tmp_90_to_int_3_fu_23185_p1() {
    tmp_90_to_int_3_fu_23185_p1 = reg_11904.read();
}

void batch_align2D_region::thread_tmp_90_to_int_4_fu_26397_p1() {
    tmp_90_to_int_4_fu_26397_p1 = reg_11904.read();
}

void batch_align2D_region::thread_tmp_90_to_int_5_fu_29609_p1() {
    tmp_90_to_int_5_fu_29609_p1 = reg_11715.read();
}

void batch_align2D_region::thread_tmp_90_to_int_6_fu_32821_p1() {
    tmp_90_to_int_6_fu_32821_p1 = reg_11904.read();
}

void batch_align2D_region::thread_tmp_90_to_int_7_fu_36034_p1() {
    tmp_90_to_int_7_fu_36034_p1 = reg_11142.read();
}

void batch_align2D_region::thread_tmp_90_to_int_fu_13549_p1() {
    tmp_90_to_int_fu_13549_p1 = reg_11142.read();
}

void batch_align2D_region::thread_tmp_913_fu_30337_p2() {
    tmp_913_fu_30337_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_914_fu_30342_p3() {
    tmp_914_fu_30342_p3 = (!tmp_913_fu_30337_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_913_fu_30337_p2.read()[0].to_bool())? ref_patch_dy_5_63_fu_3454.read(): ref_patch_dy_5_63_56_fu_3678.read());
}

void batch_align2D_region::thread_tmp_915_fu_30350_p2() {
    tmp_915_fu_30350_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_916_fu_30355_p3() {
    tmp_916_fu_30355_p3 = (!tmp_915_fu_30350_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_915_fu_30350_p2.read()[0].to_bool())? ref_patch_dy_5_63_8_fu_3486.read(): tmp_914_fu_30342_p3.read());
}

void batch_align2D_region::thread_tmp_917_fu_30363_p2() {
    tmp_917_fu_30363_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_918_fu_30368_p3() {
    tmp_918_fu_30368_p3 = (!tmp_917_fu_30363_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_917_fu_30363_p2.read()[0].to_bool())? ref_patch_dy_5_63_16_fu_3518.read(): tmp_916_fu_30355_p3.read());
}

void batch_align2D_region::thread_tmp_919_fu_30376_p2() {
    tmp_919_fu_30376_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_91_fu_12748_p1() {
    tmp_91_fu_12748_p1 = esl_zext<64,7>(tmp_90_fu_12742_p2.read());
}

void batch_align2D_region::thread_tmp_920_fu_30381_p3() {
    tmp_920_fu_30381_p3 = (!tmp_919_fu_30376_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_919_fu_30376_p2.read()[0].to_bool())? ref_patch_dy_5_63_24_fu_3550.read(): tmp_918_fu_30368_p3.read());
}

void batch_align2D_region::thread_tmp_921_fu_30389_p2() {
    tmp_921_fu_30389_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_922_fu_30394_p3() {
    tmp_922_fu_30394_p3 = (!tmp_921_fu_30389_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_921_fu_30389_p2.read()[0].to_bool())? ref_patch_dy_5_63_32_fu_3582.read(): tmp_920_fu_30381_p3.read());
}

void batch_align2D_region::thread_tmp_923_fu_30402_p2() {
    tmp_923_fu_30402_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_924_fu_30407_p3() {
    tmp_924_fu_30407_p3 = (!tmp_923_fu_30402_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_923_fu_30402_p2.read()[0].to_bool())? ref_patch_dy_5_63_40_fu_3614.read(): tmp_922_fu_30394_p3.read());
}

void batch_align2D_region::thread_tmp_925_fu_30415_p2() {
    tmp_925_fu_30415_p2 = (!tmp_1477_reg_47986_pp15_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1477_reg_47986_pp15_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_926_fu_30454_p2() {
    tmp_926_fu_30454_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_927_fu_30460_p3() {
    tmp_927_fu_30460_p3 = (!tmp_926_fu_30454_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_926_fu_30454_p2.read()[0].to_bool())? ref_patch_dx_5_63_8_fu_3230.read(): ref_patch_dx_5_63_57_fu_3426.read());
}

void batch_align2D_region::thread_tmp_928_fu_30468_p2() {
    tmp_928_fu_30468_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_929_fu_30474_p3() {
    tmp_929_fu_30474_p3 = (!tmp_928_fu_30468_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_928_fu_30468_p2.read()[0].to_bool())? ref_patch_dx_5_63_15_fu_3258.read(): tmp_927_fu_30460_p3.read());
}

void batch_align2D_region::thread_tmp_92_fu_12763_p2() {
    tmp_92_fu_12763_p2 = (!tmp_89_fu_12726_p2.read().is_01() || !tmp108_cast_fu_12759_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_89_fu_12726_p2.read()) + sc_biguint<7>(tmp108_cast_fu_12759_p1.read()));
}

void batch_align2D_region::thread_tmp_930_fu_30482_p2() {
    tmp_930_fu_30482_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_931_fu_30488_p3() {
    tmp_931_fu_30488_p3 = (!tmp_930_fu_30482_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_930_fu_30482_p2.read()[0].to_bool())? ref_patch_dx_5_63_22_fu_3286.read(): tmp_929_fu_30474_p3.read());
}

void batch_align2D_region::thread_tmp_932_fu_30496_p2() {
    tmp_932_fu_30496_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_933_fu_30502_p3() {
    tmp_933_fu_30502_p3 = (!tmp_932_fu_30496_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_932_fu_30496_p2.read()[0].to_bool())? ref_patch_dx_5_63_29_fu_3314.read(): tmp_931_fu_30488_p3.read());
}

void batch_align2D_region::thread_tmp_934_fu_30510_p2() {
    tmp_934_fu_30510_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_935_fu_30516_p3() {
    tmp_935_fu_30516_p3 = (!tmp_934_fu_30510_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_934_fu_30510_p2.read()[0].to_bool())? ref_patch_dx_5_63_36_fu_3342.read(): tmp_933_fu_30502_p3.read());
}

void batch_align2D_region::thread_tmp_936_fu_30524_p2() {
    tmp_936_fu_30524_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_937_fu_30530_p3() {
    tmp_937_fu_30530_p3 = (!tmp_936_fu_30524_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_936_fu_30524_p2.read()[0].to_bool())? ref_patch_dx_5_63_43_fu_3370.read(): tmp_935_fu_30516_p3.read());
}

void batch_align2D_region::thread_tmp_938_cast_fu_29827_p1() {
    tmp_938_cast_fu_29827_p1 = esl_zext<7,4>(ap_phi_mux_y_0_i_5_phi_fu_9423_p4.read());
}

void batch_align2D_region::thread_tmp_938_fu_30538_p2() {
    tmp_938_fu_30538_p2 = (!it_ref_dy_0_i_5_sum7_fu_30449_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_fu_30449_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_939_fu_30578_p3() {
    tmp_939_fu_30578_p3 = (!tmp_926_reg_48401.read()[0].is_01())? sc_lv<32>(): ((tmp_926_reg_48401.read()[0].to_bool())? ref_patch_dy_5_63_1_fu_3458.read(): ref_patch_dy_5_63_57_fu_3682.read());
}

void batch_align2D_region::thread_tmp_93_fu_14539_p3() {
    tmp_93_fu_14539_p3 = (!tmp_36_reg_40306.read()[0].is_01())? sc_lv<32>(): ((tmp_36_reg_40306.read()[0].to_bool())? ref_patch_dy_0_63_25_fu_994.read(): tmp_88_fu_14532_p3.read());
}

void batch_align2D_region::thread_tmp_940_fu_30585_p3() {
    tmp_940_fu_30585_p3 = (!tmp_928_reg_48406.read()[0].is_01())? sc_lv<32>(): ((tmp_928_reg_48406.read()[0].to_bool())? ref_patch_dy_5_63_9_fu_3490.read(): tmp_939_fu_30578_p3.read());
}

void batch_align2D_region::thread_tmp_941_fu_30592_p3() {
    tmp_941_fu_30592_p3 = (!tmp_930_reg_48411.read()[0].is_01())? sc_lv<32>(): ((tmp_930_reg_48411.read()[0].to_bool())? ref_patch_dy_5_63_17_fu_3522.read(): tmp_940_fu_30585_p3.read());
}

void batch_align2D_region::thread_tmp_942_fu_30599_p3() {
    tmp_942_fu_30599_p3 = (!tmp_932_reg_48416.read()[0].is_01())? sc_lv<32>(): ((tmp_932_reg_48416.read()[0].to_bool())? ref_patch_dy_5_63_25_fu_3554.read(): tmp_941_fu_30592_p3.read());
}

void batch_align2D_region::thread_tmp_943_fu_30606_p3() {
    tmp_943_fu_30606_p3 = (!tmp_934_reg_48421.read()[0].is_01())? sc_lv<32>(): ((tmp_934_reg_48421.read()[0].to_bool())? ref_patch_dy_5_63_33_fu_3586.read(): tmp_942_fu_30599_p3.read());
}

void batch_align2D_region::thread_tmp_944_fu_30613_p3() {
    tmp_944_fu_30613_p3 = (!tmp_936_reg_48426.read()[0].is_01())? sc_lv<32>(): ((tmp_936_reg_48426.read()[0].to_bool())? ref_patch_dy_5_63_41_fu_3618.read(): tmp_943_fu_30606_p3.read());
}

void batch_align2D_region::thread_tmp_945_fu_30653_p2() {
    tmp_945_fu_30653_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_946_fu_30659_p3() {
    tmp_946_fu_30659_p3 = (!tmp_945_fu_30653_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_945_fu_30653_p2.read()[0].to_bool())? ref_patch_dx_5_63_9_fu_3234.read(): ref_patch_dx_5_63_58_fu_3430.read());
}

void batch_align2D_region::thread_tmp_947_fu_30667_p2() {
    tmp_947_fu_30667_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_948_fu_30673_p3() {
    tmp_948_fu_30673_p3 = (!tmp_947_fu_30667_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_947_fu_30667_p2.read()[0].to_bool())? ref_patch_dx_5_63_16_fu_3262.read(): tmp_946_fu_30659_p3.read());
}

void batch_align2D_region::thread_tmp_949_fu_30681_p2() {
    tmp_949_fu_30681_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_94_1_fu_16738_p1() {
    tmp_94_1_fu_16738_p1 = esl_zext<32,8>(pyr_region_fcoord_1_3_reg_38819.read());
}

void batch_align2D_region::thread_tmp_94_2_fu_19950_p1() {
    tmp_94_2_fu_19950_p1 = esl_zext<32,8>(pyr_region_fcoord_2_3_reg_38812.read());
}

void batch_align2D_region::thread_tmp_94_3_fu_23162_p1() {
    tmp_94_3_fu_23162_p1 = esl_zext<32,8>(pyr_region_fcoord_3_3_reg_38805.read());
}

void batch_align2D_region::thread_tmp_94_4_fu_26374_p1() {
    tmp_94_4_fu_26374_p1 = esl_zext<32,8>(pyr_region_fcoord_4_3_reg_38798.read());
}

void batch_align2D_region::thread_tmp_94_5_fu_29586_p1() {
    tmp_94_5_fu_29586_p1 = esl_zext<32,8>(pyr_region_fcoord_5_3_reg_38791.read());
}

void batch_align2D_region::thread_tmp_94_6_fu_32798_p1() {
    tmp_94_6_fu_32798_p1 = esl_zext<32,8>(pyr_region_fcoord_6_3_reg_38784.read());
}

void batch_align2D_region::thread_tmp_94_7_fu_36011_p1() {
    tmp_94_7_fu_36011_p1 = esl_zext<32,8>(pyr_region_fcoord_7_3_reg_38777.read());
}

void batch_align2D_region::thread_tmp_94_fu_12769_p1() {
    tmp_94_fu_12769_p1 = esl_zext<64,7>(tmp_92_fu_12763_p2.read());
}

void batch_align2D_region::thread_tmp_950_fu_30687_p3() {
    tmp_950_fu_30687_p3 = (!tmp_949_fu_30681_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_949_fu_30681_p2.read()[0].to_bool())? ref_patch_dx_5_63_23_fu_3290.read(): tmp_948_fu_30673_p3.read());
}

void batch_align2D_region::thread_tmp_951_fu_30695_p2() {
    tmp_951_fu_30695_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_952_fu_30701_p3() {
    tmp_952_fu_30701_p3 = (!tmp_951_fu_30695_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_951_fu_30695_p2.read()[0].to_bool())? ref_patch_dx_5_63_30_fu_3318.read(): tmp_950_fu_30687_p3.read());
}

void batch_align2D_region::thread_tmp_953_fu_30709_p2() {
    tmp_953_fu_30709_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_954_fu_30715_p3() {
    tmp_954_fu_30715_p3 = (!tmp_953_fu_30709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_953_fu_30709_p2.read()[0].to_bool())? ref_patch_dx_5_63_37_fu_3346.read(): tmp_952_fu_30701_p3.read());
}

void batch_align2D_region::thread_tmp_955_fu_30723_p2() {
    tmp_955_fu_30723_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_956_fu_30729_p3() {
    tmp_956_fu_30729_p3 = (!tmp_955_fu_30723_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_955_fu_30723_p2.read()[0].to_bool())? ref_patch_dx_5_63_44_fu_3374.read(): tmp_954_fu_30715_p3.read());
}

void batch_align2D_region::thread_tmp_957_fu_30737_p2() {
    tmp_957_fu_30737_p2 = (!it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_1_fu_30648_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_958_fu_30777_p3() {
    tmp_958_fu_30777_p3 = (!tmp_945_reg_48452.read()[0].is_01())? sc_lv<32>(): ((tmp_945_reg_48452.read()[0].to_bool())? ref_patch_dy_5_63_2_fu_3462.read(): ref_patch_dy_5_63_58_fu_3686.read());
}

void batch_align2D_region::thread_tmp_959_fu_30784_p3() {
    tmp_959_fu_30784_p3 = (!tmp_947_reg_48457.read()[0].is_01())? sc_lv<32>(): ((tmp_947_reg_48457.read()[0].to_bool())? ref_patch_dy_5_63_10_fu_3494.read(): tmp_958_fu_30777_p3.read());
}

void batch_align2D_region::thread_tmp_95_fu_12809_p2() {
    tmp_95_fu_12809_p2 = (!tmp_103_cast_fu_12801_p1.read().is_01() || !tmp_107_cast_fu_12805_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_103_cast_fu_12801_p1.read()) - sc_biguint<9>(tmp_107_cast_fu_12805_p1.read()));
}

void batch_align2D_region::thread_tmp_960_fu_30791_p3() {
    tmp_960_fu_30791_p3 = (!tmp_949_reg_48462.read()[0].is_01())? sc_lv<32>(): ((tmp_949_reg_48462.read()[0].to_bool())? ref_patch_dy_5_63_18_fu_3526.read(): tmp_959_fu_30784_p3.read());
}

void batch_align2D_region::thread_tmp_961_fu_30798_p3() {
    tmp_961_fu_30798_p3 = (!tmp_951_reg_48467.read()[0].is_01())? sc_lv<32>(): ((tmp_951_reg_48467.read()[0].to_bool())? ref_patch_dy_5_63_26_fu_3558.read(): tmp_960_fu_30791_p3.read());
}

void batch_align2D_region::thread_tmp_962_fu_30805_p3() {
    tmp_962_fu_30805_p3 = (!tmp_953_reg_48472.read()[0].is_01())? sc_lv<32>(): ((tmp_953_reg_48472.read()[0].to_bool())? ref_patch_dy_5_63_34_fu_3590.read(): tmp_961_fu_30798_p3.read());
}

void batch_align2D_region::thread_tmp_963_fu_30812_p3() {
    tmp_963_fu_30812_p3 = (!tmp_955_reg_48477.read()[0].is_01())? sc_lv<32>(): ((tmp_955_reg_48477.read()[0].to_bool())? ref_patch_dy_5_63_42_fu_3622.read(): tmp_962_fu_30805_p3.read());
}

void batch_align2D_region::thread_tmp_964_fu_30879_p2() {
    tmp_964_fu_30879_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_965_fu_30885_p3() {
    tmp_965_fu_30885_p3 = (!tmp_964_fu_30879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_964_fu_30879_p2.read()[0].to_bool())? ref_patch_dx_5_63_10_fu_3238.read(): ref_patch_dx_5_63_59_fu_3434.read());
}

void batch_align2D_region::thread_tmp_966_fu_30893_p2() {
    tmp_966_fu_30893_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_967_fu_30899_p3() {
    tmp_967_fu_30899_p3 = (!tmp_966_fu_30893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_966_fu_30893_p2.read()[0].to_bool())? ref_patch_dx_5_63_17_fu_3266.read(): tmp_965_fu_30885_p3.read());
}

void batch_align2D_region::thread_tmp_968_fu_30907_p2() {
    tmp_968_fu_30907_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_969_fu_30913_p3() {
    tmp_969_fu_30913_p3 = (!tmp_968_fu_30907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_968_fu_30907_p2.read()[0].to_bool())? ref_patch_dx_5_63_24_fu_3294.read(): tmp_967_fu_30899_p3.read());
}

void batch_align2D_region::thread_tmp_96_fu_13567_p2() {
    tmp_96_fu_13567_p2 = (!iter_0_i_reg_7402.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): (sc_biguint<3>(iter_0_i_reg_7402.read()) < sc_biguint<3>(ap_const_lv3_5));
}

void batch_align2D_region::thread_tmp_970_fu_30921_p2() {
    tmp_970_fu_30921_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_971_fu_30927_p3() {
    tmp_971_fu_30927_p3 = (!tmp_970_fu_30921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_970_fu_30921_p2.read()[0].to_bool())? ref_patch_dx_5_63_31_fu_3322.read(): tmp_969_fu_30913_p3.read());
}

void batch_align2D_region::thread_tmp_972_fu_30935_p2() {
    tmp_972_fu_30935_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_973_fu_30941_p3() {
    tmp_973_fu_30941_p3 = (!tmp_972_fu_30935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_972_fu_30935_p2.read()[0].to_bool())? ref_patch_dx_5_63_38_fu_3350.read(): tmp_971_fu_30927_p3.read());
}

void batch_align2D_region::thread_tmp_974_fu_30949_p2() {
    tmp_974_fu_30949_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_975_fu_30955_p3() {
    tmp_975_fu_30955_p3 = (!tmp_974_fu_30949_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_974_fu_30949_p2.read()[0].to_bool())? ref_patch_dx_5_63_45_fu_3378.read(): tmp_973_fu_30941_p3.read());
}

void batch_align2D_region::thread_tmp_976_fu_30963_p2() {
    tmp_976_fu_30963_p2 = (!it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum7_2_fu_30874_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_977_fu_30977_p3() {
    tmp_977_fu_30977_p3 = (!tmp_964_fu_30879_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_964_fu_30879_p2.read()[0].to_bool())? ref_patch_dy_5_63_3_fu_3466.read(): ref_patch_dy_5_63_59_fu_3690.read());
}

void batch_align2D_region::thread_tmp_978_fu_30985_p3() {
    tmp_978_fu_30985_p3 = (!tmp_966_fu_30893_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_966_fu_30893_p2.read()[0].to_bool())? ref_patch_dy_5_63_11_fu_3498.read(): tmp_977_fu_30977_p3.read());
}

void batch_align2D_region::thread_tmp_979_fu_30993_p3() {
    tmp_979_fu_30993_p3 = (!tmp_968_fu_30907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_968_fu_30907_p2.read()[0].to_bool())? ref_patch_dy_5_63_19_fu_3530.read(): tmp_978_fu_30985_p3.read());
}

void batch_align2D_region::thread_tmp_97_fu_13579_p2() {
    tmp_97_fu_13579_p2 = (!iter_0_i_reg_7402.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(iter_0_i_reg_7402.read() == ap_const_lv3_0);
}

void batch_align2D_region::thread_tmp_980_fu_31001_p3() {
    tmp_980_fu_31001_p3 = (!tmp_970_fu_30921_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_970_fu_30921_p2.read()[0].to_bool())? ref_patch_dy_5_63_27_fu_3562.read(): tmp_979_fu_30993_p3.read());
}

void batch_align2D_region::thread_tmp_981_fu_31009_p3() {
    tmp_981_fu_31009_p3 = (!tmp_972_fu_30935_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_972_fu_30935_p2.read()[0].to_bool())? ref_patch_dy_5_63_35_fu_3594.read(): tmp_980_fu_31001_p3.read());
}

void batch_align2D_region::thread_tmp_982_fu_31017_p3() {
    tmp_982_fu_31017_p3 = (!tmp_974_fu_30949_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_974_fu_30949_p2.read()[0].to_bool())? ref_patch_dy_5_63_43_fu_3626.read(): tmp_981_fu_31009_p3.read());
}

void batch_align2D_region::thread_tmp_983_fu_31086_p2() {
    tmp_983_fu_31086_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_984_fu_31092_p3() {
    tmp_984_fu_31092_p3 = (!tmp_983_fu_31086_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_983_fu_31086_p2.read()[0].to_bool())? ref_patch_dx_5_63_11_fu_3242.read(): ref_patch_dx_5_63_60_fu_3438.read());
}

void batch_align2D_region::thread_tmp_985_fu_31100_p2() {
    tmp_985_fu_31100_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_986_fu_31106_p3() {
    tmp_986_fu_31106_p3 = (!tmp_985_fu_31100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_985_fu_31100_p2.read()[0].to_bool())? ref_patch_dx_5_63_18_fu_3270.read(): tmp_984_fu_31092_p3.read());
}

void batch_align2D_region::thread_tmp_987_fu_31114_p2() {
    tmp_987_fu_31114_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_988_fu_31120_p3() {
    tmp_988_fu_31120_p3 = (!tmp_987_fu_31114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_987_fu_31114_p2.read()[0].to_bool())? ref_patch_dx_5_63_25_fu_3298.read(): tmp_986_fu_31106_p3.read());
}

void batch_align2D_region::thread_tmp_989_fu_31128_p2() {
    tmp_989_fu_31128_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_98_fu_12824_p2() {
    tmp_98_fu_12824_p2 = (!tmp109_cast_fu_12820_p1.read().is_01() || !tmp_89_reg_39696.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp109_cast_fu_12820_p1.read()) + sc_biguint<7>(tmp_89_reg_39696.read()));
}

void batch_align2D_region::thread_tmp_990_fu_31134_p3() {
    tmp_990_fu_31134_p3 = (!tmp_989_fu_31128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_989_fu_31128_p2.read()[0].to_bool())? ref_patch_dx_5_63_32_fu_3326.read(): tmp_988_fu_31120_p3.read());
}

void batch_align2D_region::thread_tmp_991_fu_31142_p2() {
    tmp_991_fu_31142_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_992_fu_31148_p3() {
    tmp_992_fu_31148_p3 = (!tmp_991_fu_31142_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_991_fu_31142_p2.read()[0].to_bool())? ref_patch_dx_5_63_39_fu_3354.read(): tmp_990_fu_31134_p3.read());
}

void batch_align2D_region::thread_tmp_993_fu_31156_p2() {
    tmp_993_fu_31156_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_994_fu_31162_p3() {
    tmp_994_fu_31162_p3 = (!tmp_993_fu_31156_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_993_fu_31156_p2.read()[0].to_bool())? ref_patch_dx_5_63_46_fu_3382.read(): tmp_992_fu_31148_p3.read());
}

void batch_align2D_region::thread_tmp_995_fu_31170_p2() {
    tmp_995_fu_31170_p2 = (!it_ref_dy_0_i_5_sum8_fu_31081_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(it_ref_dy_0_i_5_sum8_fu_31081_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_996_fu_31184_p3() {
    tmp_996_fu_31184_p3 = (!tmp_983_fu_31086_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_983_fu_31086_p2.read()[0].to_bool())? ref_patch_dy_5_63_4_fu_3470.read(): ref_patch_dy_5_63_60_fu_3694.read());
}

void batch_align2D_region::thread_tmp_997_fu_31192_p3() {
    tmp_997_fu_31192_p3 = (!tmp_985_fu_31100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_985_fu_31100_p2.read()[0].to_bool())? ref_patch_dy_5_63_12_fu_3502.read(): tmp_996_fu_31184_p3.read());
}

void batch_align2D_region::thread_tmp_998_fu_31200_p3() {
    tmp_998_fu_31200_p3 = (!tmp_987_fu_31114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_987_fu_31114_p2.read()[0].to_bool())? ref_patch_dy_5_63_20_fu_3534.read(): tmp_997_fu_31192_p3.read());
}

void batch_align2D_region::thread_tmp_999_fu_31208_p3() {
    tmp_999_fu_31208_p3 = (!tmp_989_fu_31128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_989_fu_31128_p2.read()[0].to_bool())? ref_patch_dy_5_63_28_fu_3566.read(): tmp_998_fu_31200_p3.read());
}

void batch_align2D_region::thread_tmp_99_1_fu_16746_p1() {
    tmp_99_1_fu_16746_p1 = esl_zext<32,8>(pyr_region_fcoord_1_1.read());
}

void batch_align2D_region::thread_tmp_99_2_fu_19958_p1() {
    tmp_99_2_fu_19958_p1 = esl_zext<32,8>(pyr_region_fcoord_2_1.read());
}

void batch_align2D_region::thread_tmp_99_3_fu_23170_p1() {
    tmp_99_3_fu_23170_p1 = esl_zext<32,8>(pyr_region_fcoord_3_1.read());
}

void batch_align2D_region::thread_tmp_99_4_fu_26382_p1() {
    tmp_99_4_fu_26382_p1 = esl_zext<32,8>(pyr_region_fcoord_4_1.read());
}

void batch_align2D_region::thread_tmp_99_5_fu_29594_p1() {
    tmp_99_5_fu_29594_p1 = esl_zext<32,8>(pyr_region_fcoord_5_1.read());
}

void batch_align2D_region::thread_tmp_99_6_fu_32806_p1() {
    tmp_99_6_fu_32806_p1 = esl_zext<32,8>(pyr_region_fcoord_6_1.read());
}

void batch_align2D_region::thread_tmp_99_7_fu_36019_p1() {
    tmp_99_7_fu_36019_p1 = esl_zext<32,8>(pyr_region_fcoord_7_1.read());
}

void batch_align2D_region::thread_tmp_99_fu_12829_p1() {
    tmp_99_fu_12829_p1 = esl_zext<64,7>(tmp_98_fu_12824_p2.read());
}

void batch_align2D_region::thread_tmp_V_10_fu_16909_p1() {
    tmp_V_10_fu_16909_p1 = p_Val2_11_fu_16895_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_11_fu_16863_p4() {
    tmp_V_11_fu_16863_p4 = p_Val2_10_fu_16859_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_12_fu_16873_p1() {
    tmp_V_12_fu_16873_p1 = p_Val2_10_fu_16859_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_13_fu_20111_p4() {
    tmp_V_13_fu_20111_p4 = p_Val2_13_fu_20107_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_14_fu_20121_p1() {
    tmp_V_14_fu_20121_p1 = p_Val2_13_fu_20107_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_15_fu_20075_p4() {
    tmp_V_15_fu_20075_p4 = p_Val2_12_fu_20071_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_16_fu_20085_p1() {
    tmp_V_16_fu_20085_p1 = p_Val2_12_fu_20071_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_17_fu_23323_p4() {
    tmp_V_17_fu_23323_p4 = p_Val2_15_fu_23319_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_18_fu_23333_p1() {
    tmp_V_18_fu_23333_p1 = p_Val2_15_fu_23319_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_19_fu_23287_p4() {
    tmp_V_19_fu_23287_p4 = p_Val2_14_fu_23283_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_20_fu_23297_p1() {
    tmp_V_20_fu_23297_p1 = p_Val2_14_fu_23283_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_21_fu_26535_p4() {
    tmp_V_21_fu_26535_p4 = p_Val2_17_fu_26531_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_22_fu_26545_p1() {
    tmp_V_22_fu_26545_p1 = p_Val2_17_fu_26531_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_23_fu_26499_p4() {
    tmp_V_23_fu_26499_p4 = p_Val2_16_fu_26495_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_24_fu_26509_p1() {
    tmp_V_24_fu_26509_p1 = p_Val2_16_fu_26495_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_25_fu_29747_p4() {
    tmp_V_25_fu_29747_p4 = p_Val2_19_fu_29743_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_26_fu_29757_p1() {
    tmp_V_26_fu_29757_p1 = p_Val2_19_fu_29743_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_27_fu_29711_p4() {
    tmp_V_27_fu_29711_p4 = p_Val2_18_fu_29707_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_28_fu_29721_p1() {
    tmp_V_28_fu_29721_p1 = p_Val2_18_fu_29707_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_29_fu_32959_p4() {
    tmp_V_29_fu_32959_p4 = p_Val2_21_fu_32955_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_30_fu_32969_p1() {
    tmp_V_30_fu_32969_p1 = p_Val2_21_fu_32955_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_31_fu_32923_p4() {
    tmp_V_31_fu_32923_p4 = p_Val2_20_fu_32919_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_32_fu_32933_p1() {
    tmp_V_32_fu_32933_p1 = p_Val2_20_fu_32919_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_33_fu_36172_p4() {
    tmp_V_33_fu_36172_p4 = p_Val2_23_fu_36168_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_34_fu_36182_p1() {
    tmp_V_34_fu_36182_p1 = p_Val2_23_fu_36168_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_35_fu_36136_p4() {
    tmp_V_35_fu_36136_p4 = p_Val2_22_fu_36132_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_36_fu_36146_p1() {
    tmp_V_36_fu_36146_p1 = p_Val2_22_fu_36132_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_6_fu_13697_p1() {
    tmp_V_6_fu_13697_p1 = p_Val2_9_fu_13683_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_7_fu_13651_p4() {
    tmp_V_7_fu_13651_p4 = p_Val2_s_fu_13647_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_8_fu_13661_p1() {
    tmp_V_8_fu_13661_p1 = p_Val2_s_fu_13647_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_9_fu_16899_p4() {
    tmp_V_9_fu_16899_p4 = p_Val2_11_fu_16895_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_fu_13687_p4() {
    tmp_V_fu_13687_p4 = p_Val2_9_fu_13683_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_cast_fu_12287_p1() {
    tmp_cast_fu_12287_p1 = esl_zext<64,12>(tmp_104_reg_38665_pp0_iter1_reg.read());
}

void batch_align2D_region::thread_tmp_fu_12189_p1() {
    tmp_fu_12189_p1 = esl_zext<64,30>(my_cur_px_estimate_p_fu_12179_p4.read());
}

void batch_align2D_region::thread_tmp_i_i10_fu_29725_p2() {
    tmp_i_i10_fu_29725_p2 = (!tmp_V_27_fu_29711_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_27_fu_29711_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i11_fu_29761_p2() {
    tmp_i_i11_fu_29761_p2 = (!tmp_V_25_fu_29747_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_25_fu_29747_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i12_fu_32937_p2() {
    tmp_i_i12_fu_32937_p2 = (!tmp_V_31_fu_32923_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_31_fu_32923_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i13_fu_32973_p2() {
    tmp_i_i13_fu_32973_p2 = (!tmp_V_29_fu_32959_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_29_fu_32959_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i14_fu_36150_p2() {
    tmp_i_i14_fu_36150_p2 = (!tmp_V_35_fu_36136_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_35_fu_36136_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i15_fu_36186_p2() {
    tmp_i_i15_fu_36186_p2 = (!tmp_V_33_fu_36172_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_33_fu_36172_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i1_fu_16877_p2() {
    tmp_i_i1_fu_16877_p2 = (!tmp_V_11_fu_16863_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_11_fu_16863_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i2_fu_16913_p2() {
    tmp_i_i2_fu_16913_p2 = (!tmp_V_9_fu_16899_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_9_fu_16899_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i3_fu_20089_p2() {
    tmp_i_i3_fu_20089_p2 = (!tmp_V_15_fu_20075_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_15_fu_20075_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i4_fu_13665_p2() {
    tmp_i_i4_fu_13665_p2 = (!tmp_V_7_fu_13651_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_7_fu_13651_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i5_fu_20125_p2() {
    tmp_i_i5_fu_20125_p2 = (!tmp_V_13_fu_20111_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_13_fu_20111_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i6_fu_23301_p2() {
    tmp_i_i6_fu_23301_p2 = (!tmp_V_19_fu_23287_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_19_fu_23287_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i7_fu_23337_p2() {
    tmp_i_i7_fu_23337_p2 = (!tmp_V_17_fu_23323_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_17_fu_23323_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i8_fu_26513_p2() {
    tmp_i_i8_fu_26513_p2 = (!tmp_V_23_fu_26499_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_23_fu_26499_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i9_fu_26549_p2() {
    tmp_i_i9_fu_26549_p2 = (!tmp_V_21_fu_26535_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_21_fu_26535_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i_fu_13701_p2() {
    tmp_i_i_fu_13701_p2 = (!tmp_V_fu_13687_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_fu_13687_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_s_fu_12530_p1() {
    tmp_s_fu_12530_p1 = esl_zext<64,10>(phi_urem_reg_7252.read());
}

void batch_align2D_region::thread_x_2_cast1_fu_19222_p1() {
    x_2_cast1_fu_19222_p1 = esl_zext<8,3>(tmp_1407_reg_42919.read());
}

void batch_align2D_region::thread_x_2_cast_fu_19106_p1() {
    x_2_cast_fu_19106_p1 = esl_zext<5,3>(tmp_1407_fu_19098_p1.read());
}

void batch_align2D_region::thread_x_3_cast1_fu_22434_p1() {
    x_3_cast1_fu_22434_p1 = esl_zext<8,3>(tmp_1447_reg_44540.read());
}

void batch_align2D_region::thread_x_3_cast_fu_22318_p1() {
    x_3_cast_fu_22318_p1 = esl_zext<5,3>(tmp_1447_fu_22310_p1.read());
}

void batch_align2D_region::thread_x_4_cast1_fu_25646_p1() {
    x_4_cast1_fu_25646_p1 = esl_zext<8,3>(tmp_1458_reg_46166.read());
}

void batch_align2D_region::thread_x_4_cast_fu_25530_p1() {
    x_4_cast_fu_25530_p1 = esl_zext<5,3>(tmp_1458_fu_25522_p1.read());
}

void batch_align2D_region::thread_x_5_cast1_fu_28858_p1() {
    x_5_cast1_fu_28858_p1 = esl_zext<8,3>(tmp_1469_reg_47787.read());
}

void batch_align2D_region::thread_x_5_cast_fu_28742_p1() {
    x_5_cast_fu_28742_p1 = esl_zext<5,3>(tmp_1469_fu_28734_p1.read());
}

void batch_align2D_region::thread_x_6_cast1_fu_32070_p1() {
    x_6_cast1_fu_32070_p1 = esl_zext<8,3>(tmp_1480_reg_49413.read());
}

void batch_align2D_region::thread_x_6_cast_fu_31960_p1() {
    x_6_cast_fu_31960_p1 = esl_zext<5,3>(tmp_1480_fu_31952_p1.read());
}

void batch_align2D_region::thread_x_7_cast1_fu_35283_p1() {
    x_7_cast1_fu_35283_p1 = esl_zext<8,3>(tmp_1491_reg_51023.read());
}

void batch_align2D_region::thread_x_7_cast_fu_35167_p1() {
    x_7_cast_fu_35167_p1 = esl_zext<5,3>(tmp_1491_fu_35159_p1.read());
}

void batch_align2D_region::thread_x_cast1_171_fu_16010_p1() {
    x_cast1_171_fu_16010_p1 = esl_zext<8,3>(tmp_1392_reg_41303.read());
}

void batch_align2D_region::thread_x_cast1_fu_12798_p1() {
    x_cast1_fu_12798_p1 = esl_zext<8,3>(tmp_1378_reg_39682.read());
}

void batch_align2D_region::thread_x_cast_172_fu_15900_p1() {
    x_cast_172_fu_15900_p1 = esl_zext<5,3>(tmp_1392_fu_15892_p1.read());
}

void batch_align2D_region::thread_x_cast_fu_12688_p1() {
    x_cast_fu_12688_p1 = esl_zext<5,3>(tmp_1378_fu_12680_p1.read());
}

void batch_align2D_region::thread_y_1_1_fu_16969_p2() {
    y_1_1_fu_16969_p2 = (!ap_phi_mux_y_0_i_1_phi_fu_7872_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_1_phi_fu_7872_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_2_fu_20181_p2() {
    y_1_2_fu_20181_p2 = (!ap_phi_mux_y_0_i_2_phi_fu_8260_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_2_phi_fu_8260_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_3_fu_23393_p2() {
    y_1_3_fu_23393_p2 = (!ap_phi_mux_y_0_i_3_phi_fu_8648_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_3_phi_fu_8648_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_4_fu_26605_p2() {
    y_1_4_fu_26605_p2 = (!ap_phi_mux_y_0_i_4_phi_fu_9036_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_4_phi_fu_9036_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_5_fu_29817_p2() {
    y_1_5_fu_29817_p2 = (!ap_phi_mux_y_0_i_5_phi_fu_9423_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_5_phi_fu_9423_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_6_fu_33029_p2() {
    y_1_6_fu_33029_p2 = (!ap_phi_mux_y_0_i_6_phi_fu_9810_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_6_phi_fu_9810_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_7_fu_36242_p2() {
    y_1_7_fu_36242_p2 = (!ap_phi_mux_y_0_i_7_phi_fu_10198_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_7_phi_fu_10198_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_fu_13757_p2() {
    y_1_fu_13757_p2 = (!ap_phi_mux_y_0_i_phi_fu_7485_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_phi_fu_7485_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

}

