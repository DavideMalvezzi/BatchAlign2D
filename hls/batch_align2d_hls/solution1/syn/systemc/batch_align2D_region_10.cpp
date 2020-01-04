#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_tmp_430_fu_18327_p3() {
    tmp_430_fu_18327_p3 = (!tmp_429_fu_18321_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_429_fu_18321_p2.read()[0].to_bool())? ref_patch_dx_1_63_49_fu_1324.read(): tmp_428_fu_18313_p3.read());
}

void batch_align2D_region::thread_tmp_431_fu_18335_p2() {
    tmp_431_fu_18335_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_432_fu_18349_p3() {
    tmp_432_fu_18349_p3 = (!tmp_419_fu_18251_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_419_fu_18251_p2.read()[0].to_bool())? ref_patch_dy_1_63_7_fu_1412.read(): ref_patch_dy_1_63_63_fu_1636.read());
}

void batch_align2D_region::thread_tmp_433_fu_18357_p3() {
    tmp_433_fu_18357_p3 = (!tmp_421_fu_18265_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_421_fu_18265_p2.read()[0].to_bool())? ref_patch_dy_1_63_15_fu_1444.read(): tmp_432_fu_18349_p3.read());
}

void batch_align2D_region::thread_tmp_434_fu_18365_p3() {
    tmp_434_fu_18365_p3 = (!tmp_423_fu_18279_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_423_fu_18279_p2.read()[0].to_bool())? ref_patch_dy_1_63_23_fu_1476.read(): tmp_433_fu_18357_p3.read());
}

void batch_align2D_region::thread_tmp_435_fu_18373_p3() {
    tmp_435_fu_18373_p3 = (!tmp_425_fu_18293_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_425_fu_18293_p2.read()[0].to_bool())? ref_patch_dy_1_63_31_fu_1508.read(): tmp_434_fu_18365_p3.read());
}

void batch_align2D_region::thread_tmp_436_fu_18381_p3() {
    tmp_436_fu_18381_p3 = (!tmp_427_fu_18307_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_427_fu_18307_p2.read()[0].to_bool())? ref_patch_dy_1_63_39_fu_1540.read(): tmp_435_fu_18373_p3.read());
}

void batch_align2D_region::thread_tmp_437_fu_18389_p3() {
    tmp_437_fu_18389_p3 = (!tmp_429_fu_18321_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_429_fu_18321_p2.read()[0].to_bool())? ref_patch_dy_1_63_47_fu_1572.read(): tmp_436_fu_18381_p3.read());
}

void batch_align2D_region::thread_tmp_43_fu_13909_p2() {
    tmp_43_fu_13909_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_444_fu_20056_p2() {
    tmp_444_fu_20056_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_445_fu_20061_p3() {
    tmp_445_fu_20061_p3 = (!tmp_444_fu_20056_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_444_fu_20056_p2.read()[0].to_bool())? ref_patch_dy_2_63_fu_1896.read(): ref_patch_dy_2_63_56_fu_2120.read());
}

void batch_align2D_region::thread_tmp_446_fu_20069_p2() {
    tmp_446_fu_20069_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_447_fu_20074_p3() {
    tmp_447_fu_20074_p3 = (!tmp_446_fu_20069_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_446_fu_20069_p2.read()[0].to_bool())? ref_patch_dy_2_63_8_fu_1928.read(): tmp_445_fu_20061_p3.read());
}

void batch_align2D_region::thread_tmp_448_fu_20082_p2() {
    tmp_448_fu_20082_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_449_fu_20087_p3() {
    tmp_449_fu_20087_p3 = (!tmp_448_fu_20082_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_448_fu_20082_p2.read()[0].to_bool())? ref_patch_dy_2_63_16_fu_1960.read(): tmp_447_fu_20074_p3.read());
}

void batch_align2D_region::thread_tmp_44_fu_13915_p3() {
    tmp_44_fu_13915_p3 = (!tmp_43_fu_13909_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_43_fu_13909_p2.read()[0].to_bool())? ref_patch_dx_0_63_43_fu_788.read(): tmp_42_fu_13901_p3.read());
}

void batch_align2D_region::thread_tmp_450_fu_20095_p2() {
    tmp_450_fu_20095_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_451_fu_20100_p3() {
    tmp_451_fu_20100_p3 = (!tmp_450_fu_20095_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_450_fu_20095_p2.read()[0].to_bool())? ref_patch_dy_2_63_24_fu_1992.read(): tmp_449_fu_20087_p3.read());
}

void batch_align2D_region::thread_tmp_452_fu_20108_p2() {
    tmp_452_fu_20108_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_453_fu_20113_p3() {
    tmp_453_fu_20113_p3 = (!tmp_452_fu_20108_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_452_fu_20108_p2.read()[0].to_bool())? ref_patch_dy_2_63_32_fu_2024.read(): tmp_451_fu_20100_p3.read());
}

void batch_align2D_region::thread_tmp_454_fu_20121_p2() {
    tmp_454_fu_20121_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_455_fu_20126_p3() {
    tmp_455_fu_20126_p3 = (!tmp_454_fu_20121_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_454_fu_20121_p2.read()[0].to_bool())? ref_patch_dy_2_63_40_fu_2056.read(): tmp_453_fu_20113_p3.read());
}

void batch_align2D_region::thread_tmp_456_fu_20134_p2() {
    tmp_456_fu_20134_p2 = (!tmp_1447_reg_42347_pp9_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1447_reg_42347_pp9_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_457_fu_20173_p2() {
    tmp_457_fu_20173_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_458_fu_20179_p3() {
    tmp_458_fu_20179_p3 = (!tmp_457_fu_20173_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_457_fu_20173_p2.read()[0].to_bool())? ref_patch_dx_2_63_8_fu_1672.read(): ref_patch_dx_2_63_57_fu_1868.read());
}

void batch_align2D_region::thread_tmp_459_fu_20187_p2() {
    tmp_459_fu_20187_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_460_fu_20193_p3() {
    tmp_460_fu_20193_p3 = (!tmp_459_fu_20187_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_459_fu_20187_p2.read()[0].to_bool())? ref_patch_dx_2_63_15_fu_1700.read(): tmp_458_fu_20179_p3.read());
}

void batch_align2D_region::thread_tmp_461_fu_20201_p2() {
    tmp_461_fu_20201_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_462_fu_20207_p3() {
    tmp_462_fu_20207_p3 = (!tmp_461_fu_20201_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_461_fu_20201_p2.read()[0].to_bool())? ref_patch_dx_2_63_22_fu_1728.read(): tmp_460_fu_20193_p3.read());
}

void batch_align2D_region::thread_tmp_463_fu_20215_p2() {
    tmp_463_fu_20215_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_464_fu_20221_p3() {
    tmp_464_fu_20221_p3 = (!tmp_463_fu_20215_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_463_fu_20215_p2.read()[0].to_bool())? ref_patch_dx_2_63_29_fu_1756.read(): tmp_462_fu_20207_p3.read());
}

void batch_align2D_region::thread_tmp_465_fu_20229_p2() {
    tmp_465_fu_20229_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_466_fu_20235_p3() {
    tmp_466_fu_20235_p3 = (!tmp_465_fu_20229_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_465_fu_20229_p2.read()[0].to_bool())? ref_patch_dx_2_63_36_fu_1784.read(): tmp_464_fu_20221_p3.read());
}

void batch_align2D_region::thread_tmp_467_fu_20243_p2() {
    tmp_467_fu_20243_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_468_fu_20249_p3() {
    tmp_468_fu_20249_p3 = (!tmp_467_fu_20243_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_467_fu_20243_p2.read()[0].to_bool())? ref_patch_dx_2_63_43_fu_1812.read(): tmp_466_fu_20235_p3.read());
}

void batch_align2D_region::thread_tmp_469_fu_20257_p2() {
    tmp_469_fu_20257_p2 = (!tmp_205_2_059_t_fu_20168_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_059_t_fu_20168_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_46_fu_13923_p2() {
    tmp_46_fu_13923_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_470_fu_20297_p3() {
    tmp_470_fu_20297_p3 = (!tmp_457_reg_42723.read()[0].is_01())? sc_lv<32>(): ((tmp_457_reg_42723.read()[0].to_bool())? ref_patch_dy_2_63_1_fu_1900.read(): ref_patch_dy_2_63_57_fu_2124.read());
}

void batch_align2D_region::thread_tmp_471_fu_20304_p3() {
    tmp_471_fu_20304_p3 = (!tmp_459_reg_42728.read()[0].is_01())? sc_lv<32>(): ((tmp_459_reg_42728.read()[0].to_bool())? ref_patch_dy_2_63_9_fu_1932.read(): tmp_470_fu_20297_p3.read());
}

void batch_align2D_region::thread_tmp_472_fu_20311_p3() {
    tmp_472_fu_20311_p3 = (!tmp_461_reg_42733.read()[0].is_01())? sc_lv<32>(): ((tmp_461_reg_42733.read()[0].to_bool())? ref_patch_dy_2_63_17_fu_1964.read(): tmp_471_fu_20304_p3.read());
}

void batch_align2D_region::thread_tmp_473_fu_20318_p3() {
    tmp_473_fu_20318_p3 = (!tmp_463_reg_42738.read()[0].is_01())? sc_lv<32>(): ((tmp_463_reg_42738.read()[0].to_bool())? ref_patch_dy_2_63_25_fu_1996.read(): tmp_472_fu_20311_p3.read());
}

void batch_align2D_region::thread_tmp_474_fu_20325_p3() {
    tmp_474_fu_20325_p3 = (!tmp_465_reg_42743.read()[0].is_01())? sc_lv<32>(): ((tmp_465_reg_42743.read()[0].to_bool())? ref_patch_dy_2_63_33_fu_2028.read(): tmp_473_fu_20318_p3.read());
}

void batch_align2D_region::thread_tmp_475_fu_20332_p3() {
    tmp_475_fu_20332_p3 = (!tmp_467_reg_42748.read()[0].is_01())? sc_lv<32>(): ((tmp_467_reg_42748.read()[0].to_bool())? ref_patch_dy_2_63_41_fu_2060.read(): tmp_474_fu_20325_p3.read());
}

void batch_align2D_region::thread_tmp_476_fu_20372_p2() {
    tmp_476_fu_20372_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_477_fu_20378_p3() {
    tmp_477_fu_20378_p3 = (!tmp_476_fu_20372_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_476_fu_20372_p2.read()[0].to_bool())? ref_patch_dx_2_63_9_fu_1676.read(): ref_patch_dx_2_63_58_fu_1872.read());
}

void batch_align2D_region::thread_tmp_478_fu_20386_p2() {
    tmp_478_fu_20386_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_479_fu_20392_p3() {
    tmp_479_fu_20392_p3 = (!tmp_478_fu_20386_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_478_fu_20386_p2.read()[0].to_bool())? ref_patch_dx_2_63_16_fu_1704.read(): tmp_477_fu_20378_p3.read());
}

void batch_align2D_region::thread_tmp_480_fu_20400_p2() {
    tmp_480_fu_20400_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_481_fu_20406_p3() {
    tmp_481_fu_20406_p3 = (!tmp_480_fu_20400_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_480_fu_20400_p2.read()[0].to_bool())? ref_patch_dx_2_63_23_fu_1732.read(): tmp_479_fu_20392_p3.read());
}

void batch_align2D_region::thread_tmp_482_fu_20414_p2() {
    tmp_482_fu_20414_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_483_fu_20420_p3() {
    tmp_483_fu_20420_p3 = (!tmp_482_fu_20414_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_482_fu_20414_p2.read()[0].to_bool())? ref_patch_dx_2_63_30_fu_1760.read(): tmp_481_fu_20406_p3.read());
}

void batch_align2D_region::thread_tmp_484_fu_20428_p2() {
    tmp_484_fu_20428_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_485_fu_20434_p3() {
    tmp_485_fu_20434_p3 = (!tmp_484_fu_20428_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_484_fu_20428_p2.read()[0].to_bool())? ref_patch_dx_2_63_37_fu_1788.read(): tmp_483_fu_20420_p3.read());
}

void batch_align2D_region::thread_tmp_486_fu_20442_p2() {
    tmp_486_fu_20442_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_487_fu_20448_p3() {
    tmp_487_fu_20448_p3 = (!tmp_486_fu_20442_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_486_fu_20442_p2.read()[0].to_bool())? ref_patch_dx_2_63_44_fu_1816.read(): tmp_485_fu_20434_p3.read());
}

void batch_align2D_region::thread_tmp_488_fu_20456_p2() {
    tmp_488_fu_20456_p2 = (!tmp_205_2_1_t_fu_20367_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_1_t_fu_20367_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_489_fu_20496_p3() {
    tmp_489_fu_20496_p3 = (!tmp_476_reg_42774.read()[0].is_01())? sc_lv<32>(): ((tmp_476_reg_42774.read()[0].to_bool())? ref_patch_dy_2_63_2_fu_1904.read(): ref_patch_dy_2_63_58_fu_2128.read());
}

void batch_align2D_region::thread_tmp_490_fu_20503_p3() {
    tmp_490_fu_20503_p3 = (!tmp_478_reg_42779.read()[0].is_01())? sc_lv<32>(): ((tmp_478_reg_42779.read()[0].to_bool())? ref_patch_dy_2_63_10_fu_1936.read(): tmp_489_fu_20496_p3.read());
}

void batch_align2D_region::thread_tmp_491_fu_20510_p3() {
    tmp_491_fu_20510_p3 = (!tmp_480_reg_42784.read()[0].is_01())? sc_lv<32>(): ((tmp_480_reg_42784.read()[0].to_bool())? ref_patch_dy_2_63_18_fu_1968.read(): tmp_490_fu_20503_p3.read());
}

void batch_align2D_region::thread_tmp_492_fu_20517_p3() {
    tmp_492_fu_20517_p3 = (!tmp_482_reg_42789.read()[0].is_01())? sc_lv<32>(): ((tmp_482_reg_42789.read()[0].to_bool())? ref_patch_dy_2_63_26_fu_2000.read(): tmp_491_fu_20510_p3.read());
}

void batch_align2D_region::thread_tmp_493_fu_20524_p3() {
    tmp_493_fu_20524_p3 = (!tmp_484_reg_42794.read()[0].is_01())? sc_lv<32>(): ((tmp_484_reg_42794.read()[0].to_bool())? ref_patch_dy_2_63_34_fu_2032.read(): tmp_492_fu_20517_p3.read());
}

void batch_align2D_region::thread_tmp_494_fu_20531_p3() {
    tmp_494_fu_20531_p3 = (!tmp_486_reg_42799.read()[0].is_01())? sc_lv<32>(): ((tmp_486_reg_42799.read()[0].to_bool())? ref_patch_dy_2_63_42_fu_2064.read(): tmp_493_fu_20524_p3.read());
}

void batch_align2D_region::thread_tmp_495_fu_20598_p2() {
    tmp_495_fu_20598_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_496_fu_20604_p3() {
    tmp_496_fu_20604_p3 = (!tmp_495_fu_20598_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_495_fu_20598_p2.read()[0].to_bool())? ref_patch_dx_2_63_10_fu_1680.read(): ref_patch_dx_2_63_59_fu_1876.read());
}

void batch_align2D_region::thread_tmp_497_fu_20612_p2() {
    tmp_497_fu_20612_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_498_fu_20618_p3() {
    tmp_498_fu_20618_p3 = (!tmp_497_fu_20612_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_497_fu_20612_p2.read()[0].to_bool())? ref_patch_dx_2_63_17_fu_1708.read(): tmp_496_fu_20604_p3.read());
}

void batch_align2D_region::thread_tmp_499_fu_20626_p2() {
    tmp_499_fu_20626_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_4_fu_11803_p1() {
    tmp_4_fu_11803_p1 = esl_sext<64,32>(my_ref_patch_with_border_ptr.read());
}

void batch_align2D_region::thread_tmp_500_fu_20632_p3() {
    tmp_500_fu_20632_p3 = (!tmp_499_fu_20626_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_499_fu_20626_p2.read()[0].to_bool())? ref_patch_dx_2_63_24_fu_1736.read(): tmp_498_fu_20618_p3.read());
}

void batch_align2D_region::thread_tmp_501_fu_20640_p2() {
    tmp_501_fu_20640_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_502_fu_20646_p3() {
    tmp_502_fu_20646_p3 = (!tmp_501_fu_20640_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_501_fu_20640_p2.read()[0].to_bool())? ref_patch_dx_2_63_31_fu_1764.read(): tmp_500_fu_20632_p3.read());
}

void batch_align2D_region::thread_tmp_503_fu_20654_p2() {
    tmp_503_fu_20654_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_504_fu_20660_p3() {
    tmp_504_fu_20660_p3 = (!tmp_503_fu_20654_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_503_fu_20654_p2.read()[0].to_bool())? ref_patch_dx_2_63_38_fu_1792.read(): tmp_502_fu_20646_p3.read());
}

void batch_align2D_region::thread_tmp_505_fu_20668_p2() {
    tmp_505_fu_20668_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_506_fu_20674_p3() {
    tmp_506_fu_20674_p3 = (!tmp_505_fu_20668_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_505_fu_20668_p2.read()[0].to_bool())? ref_patch_dx_2_63_45_fu_1820.read(): tmp_504_fu_20660_p3.read());
}

void batch_align2D_region::thread_tmp_507_fu_20682_p2() {
    tmp_507_fu_20682_p2 = (!tmp_205_2_260_t_fu_20593_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_260_t_fu_20593_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_508_fu_20696_p3() {
    tmp_508_fu_20696_p3 = (!tmp_495_fu_20598_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_495_fu_20598_p2.read()[0].to_bool())? ref_patch_dy_2_63_3_fu_1908.read(): ref_patch_dy_2_63_59_fu_2132.read());
}

void batch_align2D_region::thread_tmp_509_fu_20704_p3() {
    tmp_509_fu_20704_p3 = (!tmp_497_fu_20612_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_497_fu_20612_p2.read()[0].to_bool())? ref_patch_dy_2_63_11_fu_1940.read(): tmp_508_fu_20696_p3.read());
}

void batch_align2D_region::thread_tmp_510_fu_20712_p3() {
    tmp_510_fu_20712_p3 = (!tmp_499_fu_20626_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_499_fu_20626_p2.read()[0].to_bool())? ref_patch_dy_2_63_19_fu_1972.read(): tmp_509_fu_20704_p3.read());
}

void batch_align2D_region::thread_tmp_511_fu_20720_p3() {
    tmp_511_fu_20720_p3 = (!tmp_501_fu_20640_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_501_fu_20640_p2.read()[0].to_bool())? ref_patch_dy_2_63_27_fu_2004.read(): tmp_510_fu_20712_p3.read());
}

void batch_align2D_region::thread_tmp_512_fu_20728_p3() {
    tmp_512_fu_20728_p3 = (!tmp_503_fu_20654_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_503_fu_20654_p2.read()[0].to_bool())? ref_patch_dy_2_63_35_fu_2036.read(): tmp_511_fu_20720_p3.read());
}

void batch_align2D_region::thread_tmp_513_fu_20736_p3() {
    tmp_513_fu_20736_p3 = (!tmp_505_fu_20668_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_505_fu_20668_p2.read()[0].to_bool())? ref_patch_dy_2_63_43_fu_2068.read(): tmp_512_fu_20728_p3.read());
}

void batch_align2D_region::thread_tmp_514_fu_20805_p2() {
    tmp_514_fu_20805_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_515_fu_20811_p3() {
    tmp_515_fu_20811_p3 = (!tmp_514_fu_20805_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_514_fu_20805_p2.read()[0].to_bool())? ref_patch_dx_2_63_11_fu_1684.read(): ref_patch_dx_2_63_60_fu_1880.read());
}

void batch_align2D_region::thread_tmp_516_fu_20819_p2() {
    tmp_516_fu_20819_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_517_fu_20825_p3() {
    tmp_517_fu_20825_p3 = (!tmp_516_fu_20819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_516_fu_20819_p2.read()[0].to_bool())? ref_patch_dx_2_63_18_fu_1712.read(): tmp_515_fu_20811_p3.read());
}

void batch_align2D_region::thread_tmp_518_fu_20833_p2() {
    tmp_518_fu_20833_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_519_fu_20839_p3() {
    tmp_519_fu_20839_p3 = (!tmp_518_fu_20833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_518_fu_20833_p2.read()[0].to_bool())? ref_patch_dx_2_63_25_fu_1740.read(): tmp_517_fu_20825_p3.read());
}

void batch_align2D_region::thread_tmp_520_fu_20847_p2() {
    tmp_520_fu_20847_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_521_fu_20853_p3() {
    tmp_521_fu_20853_p3 = (!tmp_520_fu_20847_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_520_fu_20847_p2.read()[0].to_bool())? ref_patch_dx_2_63_32_fu_1768.read(): tmp_519_fu_20839_p3.read());
}

void batch_align2D_region::thread_tmp_522_fu_20861_p2() {
    tmp_522_fu_20861_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_523_fu_20867_p3() {
    tmp_523_fu_20867_p3 = (!tmp_522_fu_20861_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_522_fu_20861_p2.read()[0].to_bool())? ref_patch_dx_2_63_39_fu_1796.read(): tmp_521_fu_20853_p3.read());
}

void batch_align2D_region::thread_tmp_525_fu_20875_p2() {
    tmp_525_fu_20875_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_526_fu_20881_p3() {
    tmp_526_fu_20881_p3 = (!tmp_525_fu_20875_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_525_fu_20875_p2.read()[0].to_bool())? ref_patch_dx_2_63_46_fu_1824.read(): tmp_523_fu_20867_p3.read());
}

void batch_align2D_region::thread_tmp_527_fu_20889_p2() {
    tmp_527_fu_20889_p2 = (!tmp_205_2_3_t_fu_20800_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_3_t_fu_20800_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_528_fu_20903_p3() {
    tmp_528_fu_20903_p3 = (!tmp_514_fu_20805_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_514_fu_20805_p2.read()[0].to_bool())? ref_patch_dy_2_63_4_fu_1912.read(): ref_patch_dy_2_63_60_fu_2136.read());
}

void batch_align2D_region::thread_tmp_529_fu_20911_p3() {
    tmp_529_fu_20911_p3 = (!tmp_516_fu_20819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_516_fu_20819_p2.read()[0].to_bool())? ref_patch_dy_2_63_12_fu_1944.read(): tmp_528_fu_20903_p3.read());
}

void batch_align2D_region::thread_tmp_530_fu_20919_p3() {
    tmp_530_fu_20919_p3 = (!tmp_518_fu_20833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_518_fu_20833_p2.read()[0].to_bool())? ref_patch_dy_2_63_20_fu_1976.read(): tmp_529_fu_20911_p3.read());
}

void batch_align2D_region::thread_tmp_531_fu_20927_p3() {
    tmp_531_fu_20927_p3 = (!tmp_520_fu_20847_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_520_fu_20847_p2.read()[0].to_bool())? ref_patch_dy_2_63_28_fu_2008.read(): tmp_530_fu_20919_p3.read());
}

void batch_align2D_region::thread_tmp_532_fu_20935_p3() {
    tmp_532_fu_20935_p3 = (!tmp_522_fu_20861_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_522_fu_20861_p2.read()[0].to_bool())? ref_patch_dy_2_63_36_fu_2040.read(): tmp_531_fu_20927_p3.read());
}

void batch_align2D_region::thread_tmp_533_fu_20943_p3() {
    tmp_533_fu_20943_p3 = (!tmp_525_fu_20875_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_525_fu_20875_p2.read()[0].to_bool())? ref_patch_dy_2_63_44_fu_2072.read(): tmp_532_fu_20935_p3.read());
}

void batch_align2D_region::thread_tmp_534_fu_20985_p2() {
    tmp_534_fu_20985_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_535_fu_20991_p3() {
    tmp_535_fu_20991_p3 = (!tmp_534_fu_20985_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_534_fu_20985_p2.read()[0].to_bool())? ref_patch_dx_2_63_12_fu_1688.read(): ref_patch_dx_2_63_61_fu_1884.read());
}

void batch_align2D_region::thread_tmp_536_fu_20999_p2() {
    tmp_536_fu_20999_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_537_fu_21005_p3() {
    tmp_537_fu_21005_p3 = (!tmp_536_fu_20999_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_536_fu_20999_p2.read()[0].to_bool())? ref_patch_dx_2_63_19_fu_1716.read(): tmp_535_fu_20991_p3.read());
}

void batch_align2D_region::thread_tmp_538_fu_21013_p2() {
    tmp_538_fu_21013_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_539_fu_21019_p3() {
    tmp_539_fu_21019_p3 = (!tmp_538_fu_21013_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_538_fu_21013_p2.read()[0].to_bool())? ref_patch_dx_2_63_26_fu_1744.read(): tmp_537_fu_21005_p3.read());
}

void batch_align2D_region::thread_tmp_540_fu_21027_p2() {
    tmp_540_fu_21027_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_541_fu_21033_p3() {
    tmp_541_fu_21033_p3 = (!tmp_540_fu_21027_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_540_fu_21027_p2.read()[0].to_bool())? ref_patch_dx_2_63_33_fu_1772.read(): tmp_539_fu_21019_p3.read());
}

void batch_align2D_region::thread_tmp_542_fu_21041_p2() {
    tmp_542_fu_21041_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_543_fu_21047_p3() {
    tmp_543_fu_21047_p3 = (!tmp_542_fu_21041_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_542_fu_21041_p2.read()[0].to_bool())? ref_patch_dx_2_63_40_fu_1800.read(): tmp_541_fu_21033_p3.read());
}

void batch_align2D_region::thread_tmp_544_fu_21055_p2() {
    tmp_544_fu_21055_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_545_fu_21061_p3() {
    tmp_545_fu_21061_p3 = (!tmp_544_fu_21055_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_544_fu_21055_p2.read()[0].to_bool())? ref_patch_dx_2_63_47_fu_1828.read(): tmp_543_fu_21047_p3.read());
}

void batch_align2D_region::thread_tmp_546_fu_21069_p2() {
    tmp_546_fu_21069_p2 = (!tmp_205_2_4_t_fu_20980_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_4_t_fu_20980_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_547_fu_21109_p3() {
    tmp_547_fu_21109_p3 = (!tmp_534_reg_42852.read()[0].is_01())? sc_lv<32>(): ((tmp_534_reg_42852.read()[0].to_bool())? ref_patch_dy_2_63_5_fu_1916.read(): ref_patch_dy_2_63_61_fu_2140.read());
}

void batch_align2D_region::thread_tmp_548_fu_21116_p3() {
    tmp_548_fu_21116_p3 = (!tmp_536_reg_42857.read()[0].is_01())? sc_lv<32>(): ((tmp_536_reg_42857.read()[0].to_bool())? ref_patch_dy_2_63_13_fu_1948.read(): tmp_547_fu_21109_p3.read());
}

void batch_align2D_region::thread_tmp_549_fu_21123_p3() {
    tmp_549_fu_21123_p3 = (!tmp_538_reg_42862.read()[0].is_01())? sc_lv<32>(): ((tmp_538_reg_42862.read()[0].to_bool())? ref_patch_dy_2_63_21_fu_1980.read(): tmp_548_fu_21116_p3.read());
}

void batch_align2D_region::thread_tmp_550_fu_21130_p3() {
    tmp_550_fu_21130_p3 = (!tmp_540_reg_42867.read()[0].is_01())? sc_lv<32>(): ((tmp_540_reg_42867.read()[0].to_bool())? ref_patch_dy_2_63_29_fu_2012.read(): tmp_549_fu_21123_p3.read());
}

void batch_align2D_region::thread_tmp_551_fu_21137_p3() {
    tmp_551_fu_21137_p3 = (!tmp_542_reg_42872.read()[0].is_01())? sc_lv<32>(): ((tmp_542_reg_42872.read()[0].to_bool())? ref_patch_dy_2_63_37_fu_2044.read(): tmp_550_fu_21130_p3.read());
}

void batch_align2D_region::thread_tmp_552_fu_21144_p3() {
    tmp_552_fu_21144_p3 = (!tmp_544_reg_42877.read()[0].is_01())? sc_lv<32>(): ((tmp_544_reg_42877.read()[0].to_bool())? ref_patch_dy_2_63_45_fu_2076.read(): tmp_551_fu_21137_p3.read());
}

void batch_align2D_region::thread_tmp_553_fu_21211_p2() {
    tmp_553_fu_21211_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_554_fu_21217_p3() {
    tmp_554_fu_21217_p3 = (!tmp_553_fu_21211_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_553_fu_21211_p2.read()[0].to_bool())? ref_patch_dx_2_63_13_fu_1692.read(): ref_patch_dx_2_63_62_fu_1888.read());
}

void batch_align2D_region::thread_tmp_555_fu_21225_p2() {
    tmp_555_fu_21225_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_556_fu_21231_p3() {
    tmp_556_fu_21231_p3 = (!tmp_555_fu_21225_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_555_fu_21225_p2.read()[0].to_bool())? ref_patch_dx_2_63_20_fu_1720.read(): tmp_554_fu_21217_p3.read());
}

void batch_align2D_region::thread_tmp_557_fu_21239_p2() {
    tmp_557_fu_21239_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_558_fu_21245_p3() {
    tmp_558_fu_21245_p3 = (!tmp_557_fu_21239_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_557_fu_21239_p2.read()[0].to_bool())? ref_patch_dx_2_63_27_fu_1748.read(): tmp_556_fu_21231_p3.read());
}

void batch_align2D_region::thread_tmp_559_fu_21253_p2() {
    tmp_559_fu_21253_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_560_fu_21259_p3() {
    tmp_560_fu_21259_p3 = (!tmp_559_fu_21253_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_559_fu_21253_p2.read()[0].to_bool())? ref_patch_dx_2_63_34_fu_1776.read(): tmp_558_fu_21245_p3.read());
}

void batch_align2D_region::thread_tmp_561_fu_21267_p2() {
    tmp_561_fu_21267_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_562_fu_21273_p3() {
    tmp_562_fu_21273_p3 = (!tmp_561_fu_21267_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_561_fu_21267_p2.read()[0].to_bool())? ref_patch_dx_2_63_41_fu_1804.read(): tmp_560_fu_21259_p3.read());
}

void batch_align2D_region::thread_tmp_563_fu_21281_p2() {
    tmp_563_fu_21281_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_564_fu_21287_p3() {
    tmp_564_fu_21287_p3 = (!tmp_563_fu_21281_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_563_fu_21281_p2.read()[0].to_bool())? ref_patch_dx_2_63_48_fu_1832.read(): tmp_562_fu_21273_p3.read());
}

void batch_align2D_region::thread_tmp_565_fu_21295_p2() {
    tmp_565_fu_21295_p2 = (!tmp_205_2_5_t_fu_21206_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_5_t_fu_21206_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_566_fu_21309_p3() {
    tmp_566_fu_21309_p3 = (!tmp_553_fu_21211_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_553_fu_21211_p2.read()[0].to_bool())? ref_patch_dy_2_63_6_fu_1920.read(): ref_patch_dy_2_63_62_fu_2144.read());
}

void batch_align2D_region::thread_tmp_567_fu_21317_p3() {
    tmp_567_fu_21317_p3 = (!tmp_555_fu_21225_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_555_fu_21225_p2.read()[0].to_bool())? ref_patch_dy_2_63_14_fu_1952.read(): tmp_566_fu_21309_p3.read());
}

void batch_align2D_region::thread_tmp_568_fu_21325_p3() {
    tmp_568_fu_21325_p3 = (!tmp_557_fu_21239_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_557_fu_21239_p2.read()[0].to_bool())? ref_patch_dy_2_63_22_fu_1984.read(): tmp_567_fu_21317_p3.read());
}

void batch_align2D_region::thread_tmp_569_fu_21333_p3() {
    tmp_569_fu_21333_p3 = (!tmp_559_fu_21253_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_559_fu_21253_p2.read()[0].to_bool())? ref_patch_dy_2_63_30_fu_2016.read(): tmp_568_fu_21325_p3.read());
}

void batch_align2D_region::thread_tmp_570_fu_21341_p3() {
    tmp_570_fu_21341_p3 = (!tmp_561_fu_21267_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_561_fu_21267_p2.read()[0].to_bool())? ref_patch_dy_2_63_38_fu_2048.read(): tmp_569_fu_21333_p3.read());
}

void batch_align2D_region::thread_tmp_572_fu_21349_p3() {
    tmp_572_fu_21349_p3 = (!tmp_563_fu_21281_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_563_fu_21281_p2.read()[0].to_bool())? ref_patch_dy_2_63_46_fu_2080.read(): tmp_570_fu_21341_p3.read());
}

void batch_align2D_region::thread_tmp_573_fu_21418_p2() {
    tmp_573_fu_21418_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_574_fu_21424_p3() {
    tmp_574_fu_21424_p3 = (!tmp_573_fu_21418_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_573_fu_21418_p2.read()[0].to_bool())? ref_patch_dx_2_63_14_fu_1696.read(): ref_patch_dx_2_63_63_fu_1892.read());
}

void batch_align2D_region::thread_tmp_575_fu_21432_p2() {
    tmp_575_fu_21432_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_576_fu_21438_p3() {
    tmp_576_fu_21438_p3 = (!tmp_575_fu_21432_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_575_fu_21432_p2.read()[0].to_bool())? ref_patch_dx_2_63_21_fu_1724.read(): tmp_574_fu_21424_p3.read());
}

void batch_align2D_region::thread_tmp_577_fu_21446_p2() {
    tmp_577_fu_21446_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_578_fu_21452_p3() {
    tmp_578_fu_21452_p3 = (!tmp_577_fu_21446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_577_fu_21446_p2.read()[0].to_bool())? ref_patch_dx_2_63_28_fu_1752.read(): tmp_576_fu_21438_p3.read());
}

void batch_align2D_region::thread_tmp_579_fu_21460_p2() {
    tmp_579_fu_21460_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_580_fu_21466_p3() {
    tmp_580_fu_21466_p3 = (!tmp_579_fu_21460_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_579_fu_21460_p2.read()[0].to_bool())? ref_patch_dx_2_63_35_fu_1780.read(): tmp_578_fu_21452_p3.read());
}

void batch_align2D_region::thread_tmp_581_fu_21474_p2() {
    tmp_581_fu_21474_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_582_fu_21480_p3() {
    tmp_582_fu_21480_p3 = (!tmp_581_fu_21474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_581_fu_21474_p2.read()[0].to_bool())? ref_patch_dx_2_63_42_fu_1808.read(): tmp_580_fu_21466_p3.read());
}

void batch_align2D_region::thread_tmp_583_fu_21488_p2() {
    tmp_583_fu_21488_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_584_fu_21494_p3() {
    tmp_584_fu_21494_p3 = (!tmp_583_fu_21488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_583_fu_21488_p2.read()[0].to_bool())? ref_patch_dx_2_63_49_fu_1836.read(): tmp_582_fu_21480_p3.read());
}

void batch_align2D_region::thread_tmp_585_fu_21502_p2() {
    tmp_585_fu_21502_p2 = (!tmp_205_2_661_t_fu_21413_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_2_661_t_fu_21413_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_586_fu_21516_p3() {
    tmp_586_fu_21516_p3 = (!tmp_573_fu_21418_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_573_fu_21418_p2.read()[0].to_bool())? ref_patch_dy_2_63_7_fu_1924.read(): ref_patch_dy_2_63_63_fu_2148.read());
}

void batch_align2D_region::thread_tmp_587_fu_21524_p3() {
    tmp_587_fu_21524_p3 = (!tmp_575_fu_21432_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_575_fu_21432_p2.read()[0].to_bool())? ref_patch_dy_2_63_15_fu_1956.read(): tmp_586_fu_21516_p3.read());
}

void batch_align2D_region::thread_tmp_588_fu_21532_p3() {
    tmp_588_fu_21532_p3 = (!tmp_577_fu_21446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_577_fu_21446_p2.read()[0].to_bool())? ref_patch_dy_2_63_23_fu_1988.read(): tmp_587_fu_21524_p3.read());
}

void batch_align2D_region::thread_tmp_589_fu_21540_p3() {
    tmp_589_fu_21540_p3 = (!tmp_579_fu_21460_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_579_fu_21460_p2.read()[0].to_bool())? ref_patch_dy_2_63_31_fu_2020.read(): tmp_588_fu_21532_p3.read());
}

void batch_align2D_region::thread_tmp_590_fu_21548_p3() {
    tmp_590_fu_21548_p3 = (!tmp_581_fu_21474_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_581_fu_21474_p2.read()[0].to_bool())? ref_patch_dy_2_63_39_fu_2052.read(): tmp_589_fu_21540_p3.read());
}

void batch_align2D_region::thread_tmp_591_fu_21556_p3() {
    tmp_591_fu_21556_p3 = (!tmp_583_fu_21488_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_583_fu_21488_p2.read()[0].to_bool())? ref_patch_dy_2_63_47_fu_2084.read(): tmp_590_fu_21548_p3.read());
}

void batch_align2D_region::thread_tmp_600_fu_23223_p2() {
    tmp_600_fu_23223_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_601_fu_23228_p3() {
    tmp_601_fu_23228_p3 = (!tmp_600_fu_23223_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_600_fu_23223_p2.read()[0].to_bool())? ref_patch_dy_3_63_fu_2408.read(): ref_patch_dy_3_63_56_fu_2632.read());
}

void batch_align2D_region::thread_tmp_602_fu_23236_p2() {
    tmp_602_fu_23236_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_603_fu_23241_p3() {
    tmp_603_fu_23241_p3 = (!tmp_602_fu_23236_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_602_fu_23236_p2.read()[0].to_bool())? ref_patch_dy_3_63_8_fu_2440.read(): tmp_601_fu_23228_p3.read());
}

void batch_align2D_region::thread_tmp_604_fu_23249_p2() {
    tmp_604_fu_23249_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_605_fu_23254_p3() {
    tmp_605_fu_23254_p3 = (!tmp_604_fu_23249_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_604_fu_23249_p2.read()[0].to_bool())? ref_patch_dy_3_63_16_fu_2472.read(): tmp_603_fu_23241_p3.read());
}

void batch_align2D_region::thread_tmp_606_fu_23262_p2() {
    tmp_606_fu_23262_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_607_fu_23267_p3() {
    tmp_607_fu_23267_p3 = (!tmp_606_fu_23262_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_606_fu_23262_p2.read()[0].to_bool())? ref_patch_dy_3_63_24_fu_2504.read(): tmp_605_fu_23254_p3.read());
}

void batch_align2D_region::thread_tmp_608_fu_23275_p2() {
    tmp_608_fu_23275_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_609_fu_23280_p3() {
    tmp_609_fu_23280_p3 = (!tmp_608_fu_23275_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_608_fu_23275_p2.read()[0].to_bool())? ref_patch_dy_3_63_32_fu_2536.read(): tmp_607_fu_23267_p3.read());
}

void batch_align2D_region::thread_tmp_610_fu_23288_p2() {
    tmp_610_fu_23288_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_611_fu_23293_p3() {
    tmp_611_fu_23293_p3 = (!tmp_610_fu_23288_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_610_fu_23288_p2.read()[0].to_bool())? ref_patch_dy_3_63_40_fu_2568.read(): tmp_609_fu_23280_p3.read());
}

void batch_align2D_region::thread_tmp_612_fu_23301_p2() {
    tmp_612_fu_23301_p2 = (!tmp_1458_reg_44015_pp11_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1458_reg_44015_pp11_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_613_fu_23340_p2() {
    tmp_613_fu_23340_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_614_fu_23346_p3() {
    tmp_614_fu_23346_p3 = (!tmp_613_fu_23340_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_613_fu_23340_p2.read()[0].to_bool())? ref_patch_dx_3_63_8_fu_2184.read(): ref_patch_dx_3_63_57_fu_2380.read());
}

void batch_align2D_region::thread_tmp_615_fu_23354_p2() {
    tmp_615_fu_23354_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_616_fu_23360_p3() {
    tmp_616_fu_23360_p3 = (!tmp_615_fu_23354_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_615_fu_23354_p2.read()[0].to_bool())? ref_patch_dx_3_63_15_fu_2212.read(): tmp_614_fu_23346_p3.read());
}

void batch_align2D_region::thread_tmp_617_fu_23368_p2() {
    tmp_617_fu_23368_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_618_fu_23374_p3() {
    tmp_618_fu_23374_p3 = (!tmp_617_fu_23368_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_617_fu_23368_p2.read()[0].to_bool())? ref_patch_dx_3_63_22_fu_2240.read(): tmp_616_fu_23360_p3.read());
}

void batch_align2D_region::thread_tmp_619_fu_23382_p2() {
    tmp_619_fu_23382_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_620_fu_23388_p3() {
    tmp_620_fu_23388_p3 = (!tmp_619_fu_23382_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_619_fu_23382_p2.read()[0].to_bool())? ref_patch_dx_3_63_29_fu_2268.read(): tmp_618_fu_23374_p3.read());
}

void batch_align2D_region::thread_tmp_621_fu_23396_p2() {
    tmp_621_fu_23396_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_622_fu_23402_p3() {
    tmp_622_fu_23402_p3 = (!tmp_621_fu_23396_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_621_fu_23396_p2.read()[0].to_bool())? ref_patch_dx_3_63_36_fu_2296.read(): tmp_620_fu_23388_p3.read());
}

void batch_align2D_region::thread_tmp_623_fu_23410_p2() {
    tmp_623_fu_23410_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_624_fu_23416_p3() {
    tmp_624_fu_23416_p3 = (!tmp_623_fu_23410_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_623_fu_23410_p2.read()[0].to_bool())? ref_patch_dx_3_63_43_fu_2324.read(): tmp_622_fu_23402_p3.read());
}

void batch_align2D_region::thread_tmp_625_fu_23424_p2() {
    tmp_625_fu_23424_p2 = (!tmp_205_3_056_t_fu_23335_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_056_t_fu_23335_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_626_fu_23464_p3() {
    tmp_626_fu_23464_p3 = (!tmp_613_reg_44391.read()[0].is_01())? sc_lv<32>(): ((tmp_613_reg_44391.read()[0].to_bool())? ref_patch_dy_3_63_1_fu_2412.read(): ref_patch_dy_3_63_57_fu_2636.read());
}

void batch_align2D_region::thread_tmp_627_fu_23471_p3() {
    tmp_627_fu_23471_p3 = (!tmp_615_reg_44396.read()[0].is_01())? sc_lv<32>(): ((tmp_615_reg_44396.read()[0].to_bool())? ref_patch_dy_3_63_9_fu_2444.read(): tmp_626_fu_23464_p3.read());
}

void batch_align2D_region::thread_tmp_628_fu_23478_p3() {
    tmp_628_fu_23478_p3 = (!tmp_617_reg_44401.read()[0].is_01())? sc_lv<32>(): ((tmp_617_reg_44401.read()[0].to_bool())? ref_patch_dy_3_63_17_fu_2476.read(): tmp_627_fu_23471_p3.read());
}

void batch_align2D_region::thread_tmp_629_fu_23485_p3() {
    tmp_629_fu_23485_p3 = (!tmp_619_reg_44406.read()[0].is_01())? sc_lv<32>(): ((tmp_619_reg_44406.read()[0].to_bool())? ref_patch_dy_3_63_25_fu_2508.read(): tmp_628_fu_23478_p3.read());
}

void batch_align2D_region::thread_tmp_630_fu_23492_p3() {
    tmp_630_fu_23492_p3 = (!tmp_621_reg_44411.read()[0].is_01())? sc_lv<32>(): ((tmp_621_reg_44411.read()[0].to_bool())? ref_patch_dy_3_63_33_fu_2540.read(): tmp_629_fu_23485_p3.read());
}

void batch_align2D_region::thread_tmp_631_fu_23499_p3() {
    tmp_631_fu_23499_p3 = (!tmp_623_reg_44416.read()[0].is_01())? sc_lv<32>(): ((tmp_623_reg_44416.read()[0].to_bool())? ref_patch_dy_3_63_41_fu_2572.read(): tmp_630_fu_23492_p3.read());
}

void batch_align2D_region::thread_tmp_632_fu_23539_p2() {
    tmp_632_fu_23539_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_633_fu_23545_p3() {
    tmp_633_fu_23545_p3 = (!tmp_632_fu_23539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_fu_23539_p2.read()[0].to_bool())? ref_patch_dx_3_63_9_fu_2188.read(): ref_patch_dx_3_63_58_fu_2384.read());
}

void batch_align2D_region::thread_tmp_634_fu_23553_p2() {
    tmp_634_fu_23553_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_635_fu_23559_p3() {
    tmp_635_fu_23559_p3 = (!tmp_634_fu_23553_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_634_fu_23553_p2.read()[0].to_bool())? ref_patch_dx_3_63_16_fu_2216.read(): tmp_633_fu_23545_p3.read());
}

void batch_align2D_region::thread_tmp_636_fu_23567_p2() {
    tmp_636_fu_23567_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_637_fu_23573_p3() {
    tmp_637_fu_23573_p3 = (!tmp_636_fu_23567_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_fu_23567_p2.read()[0].to_bool())? ref_patch_dx_3_63_23_fu_2244.read(): tmp_635_fu_23559_p3.read());
}

void batch_align2D_region::thread_tmp_638_fu_23581_p2() {
    tmp_638_fu_23581_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_639_fu_23587_p3() {
    tmp_639_fu_23587_p3 = (!tmp_638_fu_23581_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_638_fu_23581_p2.read()[0].to_bool())? ref_patch_dx_3_63_30_fu_2272.read(): tmp_637_fu_23573_p3.read());
}

void batch_align2D_region::thread_tmp_640_fu_23595_p2() {
    tmp_640_fu_23595_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_641_fu_23601_p3() {
    tmp_641_fu_23601_p3 = (!tmp_640_fu_23595_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_fu_23595_p2.read()[0].to_bool())? ref_patch_dx_3_63_37_fu_2300.read(): tmp_639_fu_23587_p3.read());
}

void batch_align2D_region::thread_tmp_642_fu_23609_p2() {
    tmp_642_fu_23609_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_643_fu_23615_p3() {
    tmp_643_fu_23615_p3 = (!tmp_642_fu_23609_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_642_fu_23609_p2.read()[0].to_bool())? ref_patch_dx_3_63_44_fu_2328.read(): tmp_641_fu_23601_p3.read());
}

void batch_align2D_region::thread_tmp_644_fu_23623_p2() {
    tmp_644_fu_23623_p2 = (!tmp_205_3_1_t_fu_23534_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_1_t_fu_23534_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_645_fu_23663_p3() {
    tmp_645_fu_23663_p3 = (!tmp_632_reg_44442.read()[0].is_01())? sc_lv<32>(): ((tmp_632_reg_44442.read()[0].to_bool())? ref_patch_dy_3_63_2_fu_2416.read(): ref_patch_dy_3_63_58_fu_2640.read());
}

void batch_align2D_region::thread_tmp_646_fu_23670_p3() {
    tmp_646_fu_23670_p3 = (!tmp_634_reg_44447.read()[0].is_01())? sc_lv<32>(): ((tmp_634_reg_44447.read()[0].to_bool())? ref_patch_dy_3_63_10_fu_2448.read(): tmp_645_fu_23663_p3.read());
}

void batch_align2D_region::thread_tmp_647_fu_23677_p3() {
    tmp_647_fu_23677_p3 = (!tmp_636_reg_44452.read()[0].is_01())? sc_lv<32>(): ((tmp_636_reg_44452.read()[0].to_bool())? ref_patch_dy_3_63_18_fu_2480.read(): tmp_646_fu_23670_p3.read());
}

void batch_align2D_region::thread_tmp_648_fu_23684_p3() {
    tmp_648_fu_23684_p3 = (!tmp_638_reg_44457.read()[0].is_01())? sc_lv<32>(): ((tmp_638_reg_44457.read()[0].to_bool())? ref_patch_dy_3_63_26_fu_2512.read(): tmp_647_fu_23677_p3.read());
}

void batch_align2D_region::thread_tmp_649_fu_23691_p3() {
    tmp_649_fu_23691_p3 = (!tmp_640_reg_44462.read()[0].is_01())? sc_lv<32>(): ((tmp_640_reg_44462.read()[0].to_bool())? ref_patch_dy_3_63_34_fu_2544.read(): tmp_648_fu_23684_p3.read());
}

void batch_align2D_region::thread_tmp_650_fu_23698_p3() {
    tmp_650_fu_23698_p3 = (!tmp_642_reg_44467.read()[0].is_01())? sc_lv<32>(): ((tmp_642_reg_44467.read()[0].to_bool())? ref_patch_dy_3_63_42_fu_2576.read(): tmp_649_fu_23691_p3.read());
}

void batch_align2D_region::thread_tmp_651_fu_23765_p2() {
    tmp_651_fu_23765_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_652_fu_23771_p3() {
    tmp_652_fu_23771_p3 = (!tmp_651_fu_23765_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_651_fu_23765_p2.read()[0].to_bool())? ref_patch_dx_3_63_10_fu_2192.read(): ref_patch_dx_3_63_59_fu_2388.read());
}

void batch_align2D_region::thread_tmp_653_fu_23779_p2() {
    tmp_653_fu_23779_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_654_fu_23785_p3() {
    tmp_654_fu_23785_p3 = (!tmp_653_fu_23779_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_653_fu_23779_p2.read()[0].to_bool())? ref_patch_dx_3_63_17_fu_2220.read(): tmp_652_fu_23771_p3.read());
}

void batch_align2D_region::thread_tmp_655_fu_23793_p2() {
    tmp_655_fu_23793_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_656_fu_23799_p3() {
    tmp_656_fu_23799_p3 = (!tmp_655_fu_23793_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_655_fu_23793_p2.read()[0].to_bool())? ref_patch_dx_3_63_24_fu_2248.read(): tmp_654_fu_23785_p3.read());
}

void batch_align2D_region::thread_tmp_657_fu_23807_p2() {
    tmp_657_fu_23807_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_658_fu_23813_p3() {
    tmp_658_fu_23813_p3 = (!tmp_657_fu_23807_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_657_fu_23807_p2.read()[0].to_bool())? ref_patch_dx_3_63_31_fu_2276.read(): tmp_656_fu_23799_p3.read());
}

void batch_align2D_region::thread_tmp_659_fu_23821_p2() {
    tmp_659_fu_23821_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_660_fu_23827_p3() {
    tmp_660_fu_23827_p3 = (!tmp_659_fu_23821_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_659_fu_23821_p2.read()[0].to_bool())? ref_patch_dx_3_63_38_fu_2304.read(): tmp_658_fu_23813_p3.read());
}

void batch_align2D_region::thread_tmp_661_fu_23835_p2() {
    tmp_661_fu_23835_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_662_fu_23841_p3() {
    tmp_662_fu_23841_p3 = (!tmp_661_fu_23835_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_661_fu_23835_p2.read()[0].to_bool())? ref_patch_dx_3_63_45_fu_2332.read(): tmp_660_fu_23827_p3.read());
}

void batch_align2D_region::thread_tmp_663_fu_23849_p2() {
    tmp_663_fu_23849_p2 = (!tmp_205_3_257_t_fu_23760_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_257_t_fu_23760_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_664_fu_23863_p3() {
    tmp_664_fu_23863_p3 = (!tmp_651_fu_23765_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_651_fu_23765_p2.read()[0].to_bool())? ref_patch_dy_3_63_3_fu_2420.read(): ref_patch_dy_3_63_59_fu_2644.read());
}

void batch_align2D_region::thread_tmp_665_fu_23871_p3() {
    tmp_665_fu_23871_p3 = (!tmp_653_fu_23779_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_653_fu_23779_p2.read()[0].to_bool())? ref_patch_dy_3_63_11_fu_2452.read(): tmp_664_fu_23863_p3.read());
}

void batch_align2D_region::thread_tmp_666_fu_23879_p3() {
    tmp_666_fu_23879_p3 = (!tmp_655_fu_23793_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_655_fu_23793_p2.read()[0].to_bool())? ref_patch_dy_3_63_19_fu_2484.read(): tmp_665_fu_23871_p3.read());
}

void batch_align2D_region::thread_tmp_667_fu_23887_p3() {
    tmp_667_fu_23887_p3 = (!tmp_657_fu_23807_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_657_fu_23807_p2.read()[0].to_bool())? ref_patch_dy_3_63_27_fu_2516.read(): tmp_666_fu_23879_p3.read());
}

void batch_align2D_region::thread_tmp_668_fu_23895_p3() {
    tmp_668_fu_23895_p3 = (!tmp_659_fu_23821_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_659_fu_23821_p2.read()[0].to_bool())? ref_patch_dy_3_63_35_fu_2548.read(): tmp_667_fu_23887_p3.read());
}

void batch_align2D_region::thread_tmp_669_fu_23903_p3() {
    tmp_669_fu_23903_p3 = (!tmp_661_fu_23835_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_661_fu_23835_p2.read()[0].to_bool())? ref_patch_dy_3_63_43_fu_2580.read(): tmp_668_fu_23895_p3.read());
}

void batch_align2D_region::thread_tmp_670_fu_23972_p2() {
    tmp_670_fu_23972_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_671_fu_23978_p3() {
    tmp_671_fu_23978_p3 = (!tmp_670_fu_23972_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_670_fu_23972_p2.read()[0].to_bool())? ref_patch_dx_3_63_11_fu_2196.read(): ref_patch_dx_3_63_60_fu_2392.read());
}

void batch_align2D_region::thread_tmp_672_fu_23986_p2() {
    tmp_672_fu_23986_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_673_fu_23992_p3() {
    tmp_673_fu_23992_p3 = (!tmp_672_fu_23986_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_672_fu_23986_p2.read()[0].to_bool())? ref_patch_dx_3_63_18_fu_2224.read(): tmp_671_fu_23978_p3.read());
}

void batch_align2D_region::thread_tmp_674_fu_24000_p2() {
    tmp_674_fu_24000_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_675_fu_24006_p3() {
    tmp_675_fu_24006_p3 = (!tmp_674_fu_24000_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_674_fu_24000_p2.read()[0].to_bool())? ref_patch_dx_3_63_25_fu_2252.read(): tmp_673_fu_23992_p3.read());
}

void batch_align2D_region::thread_tmp_676_fu_24014_p2() {
    tmp_676_fu_24014_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_677_fu_24020_p3() {
    tmp_677_fu_24020_p3 = (!tmp_676_fu_24014_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_676_fu_24014_p2.read()[0].to_bool())? ref_patch_dx_3_63_32_fu_2280.read(): tmp_675_fu_24006_p3.read());
}

void batch_align2D_region::thread_tmp_678_fu_24028_p2() {
    tmp_678_fu_24028_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_679_fu_24034_p3() {
    tmp_679_fu_24034_p3 = (!tmp_678_fu_24028_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_678_fu_24028_p2.read()[0].to_bool())? ref_patch_dx_3_63_39_fu_2308.read(): tmp_677_fu_24020_p3.read());
}

void batch_align2D_region::thread_tmp_680_fu_24042_p2() {
    tmp_680_fu_24042_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_681_fu_24048_p3() {
    tmp_681_fu_24048_p3 = (!tmp_680_fu_24042_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_680_fu_24042_p2.read()[0].to_bool())? ref_patch_dx_3_63_46_fu_2336.read(): tmp_679_fu_24034_p3.read());
}

void batch_align2D_region::thread_tmp_682_fu_24056_p2() {
    tmp_682_fu_24056_p2 = (!tmp_205_3_3_t_fu_23967_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_3_t_fu_23967_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_683_fu_24070_p3() {
    tmp_683_fu_24070_p3 = (!tmp_670_fu_23972_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_670_fu_23972_p2.read()[0].to_bool())? ref_patch_dy_3_63_4_fu_2424.read(): ref_patch_dy_3_63_60_fu_2648.read());
}

void batch_align2D_region::thread_tmp_684_fu_24078_p3() {
    tmp_684_fu_24078_p3 = (!tmp_672_fu_23986_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_672_fu_23986_p2.read()[0].to_bool())? ref_patch_dy_3_63_12_fu_2456.read(): tmp_683_fu_24070_p3.read());
}

void batch_align2D_region::thread_tmp_685_fu_24086_p3() {
    tmp_685_fu_24086_p3 = (!tmp_674_fu_24000_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_674_fu_24000_p2.read()[0].to_bool())? ref_patch_dy_3_63_20_fu_2488.read(): tmp_684_fu_24078_p3.read());
}

void batch_align2D_region::thread_tmp_686_fu_24094_p3() {
    tmp_686_fu_24094_p3 = (!tmp_676_fu_24014_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_676_fu_24014_p2.read()[0].to_bool())? ref_patch_dy_3_63_28_fu_2520.read(): tmp_685_fu_24086_p3.read());
}

void batch_align2D_region::thread_tmp_687_fu_24102_p3() {
    tmp_687_fu_24102_p3 = (!tmp_678_fu_24028_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_678_fu_24028_p2.read()[0].to_bool())? ref_patch_dy_3_63_36_fu_2552.read(): tmp_686_fu_24094_p3.read());
}

void batch_align2D_region::thread_tmp_688_fu_24110_p3() {
    tmp_688_fu_24110_p3 = (!tmp_680_fu_24042_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_680_fu_24042_p2.read()[0].to_bool())? ref_patch_dy_3_63_44_fu_2584.read(): tmp_687_fu_24102_p3.read());
}

void batch_align2D_region::thread_tmp_689_fu_24152_p2() {
    tmp_689_fu_24152_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_68_fu_13054_p1() {
    tmp_68_fu_13054_p1 = tmp_83_neg_reg_38858.read();
}

void batch_align2D_region::thread_tmp_690_fu_24158_p3() {
    tmp_690_fu_24158_p3 = (!tmp_689_fu_24152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_689_fu_24152_p2.read()[0].to_bool())? ref_patch_dx_3_63_12_fu_2200.read(): ref_patch_dx_3_63_61_fu_2396.read());
}

void batch_align2D_region::thread_tmp_691_fu_24166_p2() {
    tmp_691_fu_24166_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_692_fu_24172_p3() {
    tmp_692_fu_24172_p3 = (!tmp_691_fu_24166_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_691_fu_24166_p2.read()[0].to_bool())? ref_patch_dx_3_63_19_fu_2228.read(): tmp_690_fu_24158_p3.read());
}

void batch_align2D_region::thread_tmp_693_fu_24180_p2() {
    tmp_693_fu_24180_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_694_fu_24186_p3() {
    tmp_694_fu_24186_p3 = (!tmp_693_fu_24180_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_693_fu_24180_p2.read()[0].to_bool())? ref_patch_dx_3_63_26_fu_2256.read(): tmp_692_fu_24172_p3.read());
}

void batch_align2D_region::thread_tmp_695_fu_24194_p2() {
    tmp_695_fu_24194_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_696_fu_24200_p3() {
    tmp_696_fu_24200_p3 = (!tmp_695_fu_24194_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_695_fu_24194_p2.read()[0].to_bool())? ref_patch_dx_3_63_33_fu_2284.read(): tmp_694_fu_24186_p3.read());
}

void batch_align2D_region::thread_tmp_697_fu_24208_p2() {
    tmp_697_fu_24208_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_698_fu_24214_p3() {
    tmp_698_fu_24214_p3 = (!tmp_697_fu_24208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_697_fu_24208_p2.read()[0].to_bool())? ref_patch_dx_3_63_40_fu_2312.read(): tmp_696_fu_24200_p3.read());
}

void batch_align2D_region::thread_tmp_699_fu_24222_p2() {
    tmp_699_fu_24222_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_700_fu_24228_p3() {
    tmp_700_fu_24228_p3 = (!tmp_699_fu_24222_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_699_fu_24222_p2.read()[0].to_bool())? ref_patch_dx_3_63_47_fu_2340.read(): tmp_698_fu_24214_p3.read());
}

void batch_align2D_region::thread_tmp_701_fu_24236_p2() {
    tmp_701_fu_24236_p2 = (!tmp_205_3_4_t_fu_24147_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_4_t_fu_24147_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_702_fu_24276_p3() {
    tmp_702_fu_24276_p3 = (!tmp_689_reg_44520.read()[0].is_01())? sc_lv<32>(): ((tmp_689_reg_44520.read()[0].to_bool())? ref_patch_dy_3_63_5_fu_2428.read(): ref_patch_dy_3_63_61_fu_2652.read());
}

void batch_align2D_region::thread_tmp_703_fu_24283_p3() {
    tmp_703_fu_24283_p3 = (!tmp_691_reg_44525.read()[0].is_01())? sc_lv<32>(): ((tmp_691_reg_44525.read()[0].to_bool())? ref_patch_dy_3_63_13_fu_2460.read(): tmp_702_fu_24276_p3.read());
}

void batch_align2D_region::thread_tmp_704_fu_24290_p3() {
    tmp_704_fu_24290_p3 = (!tmp_693_reg_44530.read()[0].is_01())? sc_lv<32>(): ((tmp_693_reg_44530.read()[0].to_bool())? ref_patch_dy_3_63_21_fu_2492.read(): tmp_703_fu_24283_p3.read());
}

void batch_align2D_region::thread_tmp_705_fu_24297_p3() {
    tmp_705_fu_24297_p3 = (!tmp_695_reg_44535.read()[0].is_01())? sc_lv<32>(): ((tmp_695_reg_44535.read()[0].to_bool())? ref_patch_dy_3_63_29_fu_2524.read(): tmp_704_fu_24290_p3.read());
}

void batch_align2D_region::thread_tmp_706_fu_24304_p3() {
    tmp_706_fu_24304_p3 = (!tmp_697_reg_44540.read()[0].is_01())? sc_lv<32>(): ((tmp_697_reg_44540.read()[0].to_bool())? ref_patch_dy_3_63_37_fu_2556.read(): tmp_705_fu_24297_p3.read());
}

void batch_align2D_region::thread_tmp_707_fu_24311_p3() {
    tmp_707_fu_24311_p3 = (!tmp_699_reg_44545.read()[0].is_01())? sc_lv<32>(): ((tmp_699_reg_44545.read()[0].to_bool())? ref_patch_dy_3_63_45_fu_2588.read(): tmp_706_fu_24304_p3.read());
}

void batch_align2D_region::thread_tmp_708_fu_24378_p2() {
    tmp_708_fu_24378_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_709_fu_24384_p3() {
    tmp_709_fu_24384_p3 = (!tmp_708_fu_24378_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_708_fu_24378_p2.read()[0].to_bool())? ref_patch_dx_3_63_13_fu_2204.read(): ref_patch_dx_3_63_62_fu_2400.read());
}

void batch_align2D_region::thread_tmp_710_fu_24392_p2() {
    tmp_710_fu_24392_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_711_fu_24398_p3() {
    tmp_711_fu_24398_p3 = (!tmp_710_fu_24392_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_710_fu_24392_p2.read()[0].to_bool())? ref_patch_dx_3_63_20_fu_2232.read(): tmp_709_fu_24384_p3.read());
}

void batch_align2D_region::thread_tmp_712_fu_24406_p2() {
    tmp_712_fu_24406_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_713_fu_24412_p3() {
    tmp_713_fu_24412_p3 = (!tmp_712_fu_24406_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_712_fu_24406_p2.read()[0].to_bool())? ref_patch_dx_3_63_27_fu_2260.read(): tmp_711_fu_24398_p3.read());
}

void batch_align2D_region::thread_tmp_714_fu_24420_p2() {
    tmp_714_fu_24420_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_715_fu_24426_p3() {
    tmp_715_fu_24426_p3 = (!tmp_714_fu_24420_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_714_fu_24420_p2.read()[0].to_bool())? ref_patch_dx_3_63_34_fu_2288.read(): tmp_713_fu_24412_p3.read());
}

void batch_align2D_region::thread_tmp_716_fu_24434_p2() {
    tmp_716_fu_24434_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_717_fu_24440_p3() {
    tmp_717_fu_24440_p3 = (!tmp_716_fu_24434_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_716_fu_24434_p2.read()[0].to_bool())? ref_patch_dx_3_63_41_fu_2316.read(): tmp_715_fu_24426_p3.read());
}

void batch_align2D_region::thread_tmp_718_fu_24448_p2() {
    tmp_718_fu_24448_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_719_fu_24454_p3() {
    tmp_719_fu_24454_p3 = (!tmp_718_fu_24448_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_718_fu_24448_p2.read()[0].to_bool())? ref_patch_dx_3_63_48_fu_2344.read(): tmp_717_fu_24440_p3.read());
}

void batch_align2D_region::thread_tmp_720_fu_24462_p2() {
    tmp_720_fu_24462_p2 = (!tmp_205_3_5_t_fu_24373_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_5_t_fu_24373_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_721_fu_24476_p3() {
    tmp_721_fu_24476_p3 = (!tmp_708_fu_24378_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_708_fu_24378_p2.read()[0].to_bool())? ref_patch_dy_3_63_6_fu_2432.read(): ref_patch_dy_3_63_62_fu_2656.read());
}

void batch_align2D_region::thread_tmp_722_fu_24484_p3() {
    tmp_722_fu_24484_p3 = (!tmp_710_fu_24392_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_710_fu_24392_p2.read()[0].to_bool())? ref_patch_dy_3_63_14_fu_2464.read(): tmp_721_fu_24476_p3.read());
}

void batch_align2D_region::thread_tmp_723_fu_24492_p3() {
    tmp_723_fu_24492_p3 = (!tmp_712_fu_24406_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_712_fu_24406_p2.read()[0].to_bool())? ref_patch_dy_3_63_22_fu_2496.read(): tmp_722_fu_24484_p3.read());
}

void batch_align2D_region::thread_tmp_724_fu_24500_p3() {
    tmp_724_fu_24500_p3 = (!tmp_714_fu_24420_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_714_fu_24420_p2.read()[0].to_bool())? ref_patch_dy_3_63_30_fu_2528.read(): tmp_723_fu_24492_p3.read());
}

void batch_align2D_region::thread_tmp_725_fu_24508_p3() {
    tmp_725_fu_24508_p3 = (!tmp_716_fu_24434_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_716_fu_24434_p2.read()[0].to_bool())? ref_patch_dy_3_63_38_fu_2560.read(): tmp_724_fu_24500_p3.read());
}

void batch_align2D_region::thread_tmp_726_fu_24516_p3() {
    tmp_726_fu_24516_p3 = (!tmp_718_fu_24448_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_718_fu_24448_p2.read()[0].to_bool())? ref_patch_dy_3_63_46_fu_2592.read(): tmp_725_fu_24508_p3.read());
}

void batch_align2D_region::thread_tmp_727_fu_24585_p2() {
    tmp_727_fu_24585_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_728_fu_24591_p3() {
    tmp_728_fu_24591_p3 = (!tmp_727_fu_24585_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_727_fu_24585_p2.read()[0].to_bool())? ref_patch_dx_3_63_14_fu_2208.read(): ref_patch_dx_3_63_63_fu_2404.read());
}

void batch_align2D_region::thread_tmp_729_fu_24599_p2() {
    tmp_729_fu_24599_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_730_fu_24605_p3() {
    tmp_730_fu_24605_p3 = (!tmp_729_fu_24599_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_729_fu_24599_p2.read()[0].to_bool())? ref_patch_dx_3_63_21_fu_2236.read(): tmp_728_fu_24591_p3.read());
}

void batch_align2D_region::thread_tmp_731_fu_24613_p2() {
    tmp_731_fu_24613_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_732_fu_24619_p3() {
    tmp_732_fu_24619_p3 = (!tmp_731_fu_24613_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_731_fu_24613_p2.read()[0].to_bool())? ref_patch_dx_3_63_28_fu_2264.read(): tmp_730_fu_24605_p3.read());
}

void batch_align2D_region::thread_tmp_733_fu_24627_p2() {
    tmp_733_fu_24627_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_734_fu_24633_p3() {
    tmp_734_fu_24633_p3 = (!tmp_733_fu_24627_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_733_fu_24627_p2.read()[0].to_bool())? ref_patch_dx_3_63_35_fu_2292.read(): tmp_732_fu_24619_p3.read());
}

void batch_align2D_region::thread_tmp_735_fu_24641_p2() {
    tmp_735_fu_24641_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_736_fu_24647_p3() {
    tmp_736_fu_24647_p3 = (!tmp_735_fu_24641_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_735_fu_24641_p2.read()[0].to_bool())? ref_patch_dx_3_63_42_fu_2320.read(): tmp_734_fu_24633_p3.read());
}

void batch_align2D_region::thread_tmp_737_fu_24655_p2() {
    tmp_737_fu_24655_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_738_fu_24661_p3() {
    tmp_738_fu_24661_p3 = (!tmp_737_fu_24655_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_737_fu_24655_p2.read()[0].to_bool())? ref_patch_dx_3_63_49_fu_2348.read(): tmp_736_fu_24647_p3.read());
}

void batch_align2D_region::thread_tmp_739_fu_24669_p2() {
    tmp_739_fu_24669_p2 = (!tmp_205_3_658_t_fu_24580_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_3_658_t_fu_24580_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_740_fu_24683_p3() {
    tmp_740_fu_24683_p3 = (!tmp_727_fu_24585_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_727_fu_24585_p2.read()[0].to_bool())? ref_patch_dy_3_63_7_fu_2436.read(): ref_patch_dy_3_63_63_fu_2660.read());
}

void batch_align2D_region::thread_tmp_741_fu_24691_p3() {
    tmp_741_fu_24691_p3 = (!tmp_729_fu_24599_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_729_fu_24599_p2.read()[0].to_bool())? ref_patch_dy_3_63_15_fu_2468.read(): tmp_740_fu_24683_p3.read());
}

void batch_align2D_region::thread_tmp_742_fu_24699_p3() {
    tmp_742_fu_24699_p3 = (!tmp_731_fu_24613_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_731_fu_24613_p2.read()[0].to_bool())? ref_patch_dy_3_63_23_fu_2500.read(): tmp_741_fu_24691_p3.read());
}

void batch_align2D_region::thread_tmp_743_fu_24707_p3() {
    tmp_743_fu_24707_p3 = (!tmp_733_fu_24627_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_733_fu_24627_p2.read()[0].to_bool())? ref_patch_dy_3_63_31_fu_2532.read(): tmp_742_fu_24699_p3.read());
}

void batch_align2D_region::thread_tmp_744_fu_24715_p3() {
    tmp_744_fu_24715_p3 = (!tmp_735_fu_24641_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_735_fu_24641_p2.read()[0].to_bool())? ref_patch_dy_3_63_39_fu_2564.read(): tmp_743_fu_24707_p3.read());
}

void batch_align2D_region::thread_tmp_745_fu_24723_p3() {
    tmp_745_fu_24723_p3 = (!tmp_737_fu_24655_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_737_fu_24655_p2.read()[0].to_bool())? ref_patch_dy_3_63_47_fu_2596.read(): tmp_744_fu_24715_p3.read());
}

void batch_align2D_region::thread_tmp_74_fu_13058_p1() {
    tmp_74_fu_13058_p1 = tmp_92_neg_reg_38863.read();
}

void batch_align2D_region::thread_tmp_756_fu_26390_p2() {
    tmp_756_fu_26390_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_757_fu_26395_p3() {
    tmp_757_fu_26395_p3 = (!tmp_756_fu_26390_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_756_fu_26390_p2.read()[0].to_bool())? ref_patch_dy_4_63_fu_2920.read(): ref_patch_dy_4_63_56_fu_3144.read());
}

void batch_align2D_region::thread_tmp_758_fu_26403_p2() {
    tmp_758_fu_26403_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_759_fu_26408_p3() {
    tmp_759_fu_26408_p3 = (!tmp_758_fu_26403_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_758_fu_26403_p2.read()[0].to_bool())? ref_patch_dy_4_63_8_fu_2952.read(): tmp_757_fu_26395_p3.read());
}

void batch_align2D_region::thread_tmp_760_fu_26416_p2() {
    tmp_760_fu_26416_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_761_fu_26421_p3() {
    tmp_761_fu_26421_p3 = (!tmp_760_fu_26416_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_760_fu_26416_p2.read()[0].to_bool())? ref_patch_dy_4_63_16_fu_2984.read(): tmp_759_fu_26408_p3.read());
}

void batch_align2D_region::thread_tmp_762_fu_26429_p2() {
    tmp_762_fu_26429_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_763_fu_26434_p3() {
    tmp_763_fu_26434_p3 = (!tmp_762_fu_26429_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_762_fu_26429_p2.read()[0].to_bool())? ref_patch_dy_4_63_24_fu_3016.read(): tmp_761_fu_26421_p3.read());
}

void batch_align2D_region::thread_tmp_764_fu_26442_p2() {
    tmp_764_fu_26442_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_765_fu_26447_p3() {
    tmp_765_fu_26447_p3 = (!tmp_764_fu_26442_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_764_fu_26442_p2.read()[0].to_bool())? ref_patch_dy_4_63_32_fu_3048.read(): tmp_763_fu_26434_p3.read());
}

void batch_align2D_region::thread_tmp_766_fu_26455_p2() {
    tmp_766_fu_26455_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_767_fu_26460_p3() {
    tmp_767_fu_26460_p3 = (!tmp_766_fu_26455_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_766_fu_26455_p2.read()[0].to_bool())? ref_patch_dy_4_63_40_fu_3080.read(): tmp_765_fu_26447_p3.read());
}

void batch_align2D_region::thread_tmp_768_fu_26468_p2() {
    tmp_768_fu_26468_p2 = (!tmp_1469_reg_45683_pp13_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1469_reg_45683_pp13_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_769_fu_26510_p2() {
    tmp_769_fu_26510_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_76_fu_13020_p1() {
    tmp_76_fu_13020_p1 = esl_zext<32,8>(pyr_region_fcoord_0_s.read());
}

void batch_align2D_region::thread_tmp_770_fu_26516_p3() {
    tmp_770_fu_26516_p3 = (!tmp_769_fu_26510_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_769_fu_26510_p2.read()[0].to_bool())? ref_patch_dx_4_63_8_fu_2696.read(): ref_patch_dx_4_63_57_fu_2892.read());
}

void batch_align2D_region::thread_tmp_771_fu_26524_p2() {
    tmp_771_fu_26524_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_772_fu_26530_p3() {
    tmp_772_fu_26530_p3 = (!tmp_771_fu_26524_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_771_fu_26524_p2.read()[0].to_bool())? ref_patch_dx_4_63_15_fu_2724.read(): tmp_770_fu_26516_p3.read());
}

void batch_align2D_region::thread_tmp_773_fu_26538_p2() {
    tmp_773_fu_26538_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_774_fu_26544_p3() {
    tmp_774_fu_26544_p3 = (!tmp_773_fu_26538_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_773_fu_26538_p2.read()[0].to_bool())? ref_patch_dx_4_63_22_fu_2752.read(): tmp_772_fu_26530_p3.read());
}

void batch_align2D_region::thread_tmp_775_fu_26552_p2() {
    tmp_775_fu_26552_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_776_fu_26558_p3() {
    tmp_776_fu_26558_p3 = (!tmp_775_fu_26552_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_775_fu_26552_p2.read()[0].to_bool())? ref_patch_dx_4_63_29_fu_2780.read(): tmp_774_fu_26544_p3.read());
}

void batch_align2D_region::thread_tmp_777_fu_26566_p2() {
    tmp_777_fu_26566_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_778_fu_26572_p3() {
    tmp_778_fu_26572_p3 = (!tmp_777_fu_26566_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_777_fu_26566_p2.read()[0].to_bool())? ref_patch_dx_4_63_36_fu_2808.read(): tmp_776_fu_26558_p3.read());
}

void batch_align2D_region::thread_tmp_779_fu_26580_p2() {
    tmp_779_fu_26580_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_780_fu_26586_p3() {
    tmp_780_fu_26586_p3 = (!tmp_779_fu_26580_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_779_fu_26580_p2.read()[0].to_bool())? ref_patch_dx_4_63_43_fu_2836.read(): tmp_778_fu_26572_p3.read());
}

void batch_align2D_region::thread_tmp_781_fu_26594_p2() {
    tmp_781_fu_26594_p2 = (!tmp_205_4_053_t_fu_26505_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_053_t_fu_26505_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_782_fu_26632_p3() {
    tmp_782_fu_26632_p3 = (!tmp_769_reg_46059.read()[0].is_01())? sc_lv<32>(): ((tmp_769_reg_46059.read()[0].to_bool())? ref_patch_dy_4_63_1_fu_2924.read(): ref_patch_dy_4_63_57_fu_3148.read());
}

void batch_align2D_region::thread_tmp_783_fu_26639_p3() {
    tmp_783_fu_26639_p3 = (!tmp_771_reg_46064.read()[0].is_01())? sc_lv<32>(): ((tmp_771_reg_46064.read()[0].to_bool())? ref_patch_dy_4_63_9_fu_2956.read(): tmp_782_fu_26632_p3.read());
}

void batch_align2D_region::thread_tmp_784_fu_26646_p3() {
    tmp_784_fu_26646_p3 = (!tmp_773_reg_46069.read()[0].is_01())? sc_lv<32>(): ((tmp_773_reg_46069.read()[0].to_bool())? ref_patch_dy_4_63_17_fu_2988.read(): tmp_783_fu_26639_p3.read());
}

void batch_align2D_region::thread_tmp_785_fu_26653_p3() {
    tmp_785_fu_26653_p3 = (!tmp_775_reg_46074.read()[0].is_01())? sc_lv<32>(): ((tmp_775_reg_46074.read()[0].to_bool())? ref_patch_dy_4_63_25_fu_3020.read(): tmp_784_fu_26646_p3.read());
}

void batch_align2D_region::thread_tmp_786_fu_26660_p3() {
    tmp_786_fu_26660_p3 = (!tmp_777_reg_46079.read()[0].is_01())? sc_lv<32>(): ((tmp_777_reg_46079.read()[0].to_bool())? ref_patch_dy_4_63_33_fu_3052.read(): tmp_785_fu_26653_p3.read());
}

void batch_align2D_region::thread_tmp_787_fu_26667_p3() {
    tmp_787_fu_26667_p3 = (!tmp_779_reg_46084.read()[0].is_01())? sc_lv<32>(): ((tmp_779_reg_46084.read()[0].to_bool())? ref_patch_dy_4_63_41_fu_3084.read(): tmp_786_fu_26660_p3.read());
}

void batch_align2D_region::thread_tmp_788_fu_26707_p2() {
    tmp_788_fu_26707_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_789_fu_26713_p3() {
    tmp_789_fu_26713_p3 = (!tmp_788_fu_26707_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_788_fu_26707_p2.read()[0].to_bool())? ref_patch_dx_4_63_9_fu_2700.read(): ref_patch_dx_4_63_58_fu_2896.read());
}

void batch_align2D_region::thread_tmp_790_fu_26721_p2() {
    tmp_790_fu_26721_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_791_fu_26727_p3() {
    tmp_791_fu_26727_p3 = (!tmp_790_fu_26721_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_790_fu_26721_p2.read()[0].to_bool())? ref_patch_dx_4_63_16_fu_2728.read(): tmp_789_fu_26713_p3.read());
}

void batch_align2D_region::thread_tmp_792_fu_26735_p2() {
    tmp_792_fu_26735_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_793_fu_26741_p3() {
    tmp_793_fu_26741_p3 = (!tmp_792_fu_26735_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_792_fu_26735_p2.read()[0].to_bool())? ref_patch_dx_4_63_23_fu_2756.read(): tmp_791_fu_26727_p3.read());
}

void batch_align2D_region::thread_tmp_794_fu_26749_p2() {
    tmp_794_fu_26749_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_795_fu_26755_p3() {
    tmp_795_fu_26755_p3 = (!tmp_794_fu_26749_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_794_fu_26749_p2.read()[0].to_bool())? ref_patch_dx_4_63_30_fu_2784.read(): tmp_793_fu_26741_p3.read());
}

void batch_align2D_region::thread_tmp_796_fu_26763_p2() {
    tmp_796_fu_26763_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_797_fu_26769_p3() {
    tmp_797_fu_26769_p3 = (!tmp_796_fu_26763_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_796_fu_26763_p2.read()[0].to_bool())? ref_patch_dx_4_63_37_fu_2812.read(): tmp_795_fu_26755_p3.read());
}

void batch_align2D_region::thread_tmp_798_fu_26777_p2() {
    tmp_798_fu_26777_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_799_fu_26783_p3() {
    tmp_799_fu_26783_p3 = (!tmp_798_fu_26777_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_798_fu_26777_p2.read()[0].to_bool())? ref_patch_dx_4_63_44_fu_2840.read(): tmp_797_fu_26769_p3.read());
}

void batch_align2D_region::thread_tmp_79_fu_13963_p3() {
    tmp_79_fu_13963_p3 = (!tmp_33_reg_39387.read()[0].is_01())? sc_lv<32>(): ((tmp_33_reg_39387.read()[0].to_bool())? ref_patch_dy_0_63_1_fu_876.read(): ref_patch_dy_0_63_57_fu_1100.read());
}

void batch_align2D_region::thread_tmp_800_fu_26791_p2() {
    tmp_800_fu_26791_p2 = (!tmp_205_4_1_t_fu_26702_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_1_t_fu_26702_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_801_fu_26831_p3() {
    tmp_801_fu_26831_p3 = (!tmp_788_reg_46104.read()[0].is_01())? sc_lv<32>(): ((tmp_788_reg_46104.read()[0].to_bool())? ref_patch_dy_4_63_2_fu_2928.read(): ref_patch_dy_4_63_58_fu_3152.read());
}

void batch_align2D_region::thread_tmp_802_fu_26838_p3() {
    tmp_802_fu_26838_p3 = (!tmp_790_reg_46109.read()[0].is_01())? sc_lv<32>(): ((tmp_790_reg_46109.read()[0].to_bool())? ref_patch_dy_4_63_10_fu_2960.read(): tmp_801_fu_26831_p3.read());
}

void batch_align2D_region::thread_tmp_803_fu_26845_p3() {
    tmp_803_fu_26845_p3 = (!tmp_792_reg_46114.read()[0].is_01())? sc_lv<32>(): ((tmp_792_reg_46114.read()[0].to_bool())? ref_patch_dy_4_63_18_fu_2992.read(): tmp_802_fu_26838_p3.read());
}

void batch_align2D_region::thread_tmp_804_fu_26852_p3() {
    tmp_804_fu_26852_p3 = (!tmp_794_reg_46119.read()[0].is_01())? sc_lv<32>(): ((tmp_794_reg_46119.read()[0].to_bool())? ref_patch_dy_4_63_26_fu_3024.read(): tmp_803_fu_26845_p3.read());
}

void batch_align2D_region::thread_tmp_805_fu_26859_p3() {
    tmp_805_fu_26859_p3 = (!tmp_796_reg_46124.read()[0].is_01())? sc_lv<32>(): ((tmp_796_reg_46124.read()[0].to_bool())? ref_patch_dy_4_63_34_fu_3056.read(): tmp_804_fu_26852_p3.read());
}

void batch_align2D_region::thread_tmp_806_fu_26866_p3() {
    tmp_806_fu_26866_p3 = (!tmp_798_reg_46129.read()[0].is_01())? sc_lv<32>(): ((tmp_798_reg_46129.read()[0].to_bool())? ref_patch_dy_4_63_42_fu_3088.read(): tmp_805_fu_26859_p3.read());
}

void batch_align2D_region::thread_tmp_807_fu_26933_p2() {
    tmp_807_fu_26933_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_808_fu_26939_p3() {
    tmp_808_fu_26939_p3 = (!tmp_807_fu_26933_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_807_fu_26933_p2.read()[0].to_bool())? ref_patch_dx_4_63_10_fu_2704.read(): ref_patch_dx_4_63_59_fu_2900.read());
}

void batch_align2D_region::thread_tmp_809_fu_26947_p2() {
    tmp_809_fu_26947_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_810_fu_26953_p3() {
    tmp_810_fu_26953_p3 = (!tmp_809_fu_26947_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_809_fu_26947_p2.read()[0].to_bool())? ref_patch_dx_4_63_17_fu_2732.read(): tmp_808_fu_26939_p3.read());
}

void batch_align2D_region::thread_tmp_811_fu_26961_p2() {
    tmp_811_fu_26961_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_812_fu_26967_p3() {
    tmp_812_fu_26967_p3 = (!tmp_811_fu_26961_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_811_fu_26961_p2.read()[0].to_bool())? ref_patch_dx_4_63_24_fu_2760.read(): tmp_810_fu_26953_p3.read());
}

void batch_align2D_region::thread_tmp_813_fu_26975_p2() {
    tmp_813_fu_26975_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_814_fu_26981_p3() {
    tmp_814_fu_26981_p3 = (!tmp_813_fu_26975_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_813_fu_26975_p2.read()[0].to_bool())? ref_patch_dx_4_63_31_fu_2788.read(): tmp_812_fu_26967_p3.read());
}

void batch_align2D_region::thread_tmp_815_fu_26989_p2() {
    tmp_815_fu_26989_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_816_fu_26995_p3() {
    tmp_816_fu_26995_p3 = (!tmp_815_fu_26989_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_815_fu_26989_p2.read()[0].to_bool())? ref_patch_dx_4_63_38_fu_2816.read(): tmp_814_fu_26981_p3.read());
}

void batch_align2D_region::thread_tmp_817_fu_27003_p2() {
    tmp_817_fu_27003_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_818_fu_27009_p3() {
    tmp_818_fu_27009_p3 = (!tmp_817_fu_27003_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_817_fu_27003_p2.read()[0].to_bool())? ref_patch_dx_4_63_45_fu_2844.read(): tmp_816_fu_26995_p3.read());
}

void batch_align2D_region::thread_tmp_819_fu_27017_p2() {
    tmp_819_fu_27017_p2 = (!tmp_205_4_254_t_fu_26928_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_254_t_fu_26928_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_820_fu_27031_p3() {
    tmp_820_fu_27031_p3 = (!tmp_807_fu_26933_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_807_fu_26933_p2.read()[0].to_bool())? ref_patch_dy_4_63_3_fu_2932.read(): ref_patch_dy_4_63_59_fu_3156.read());
}

void batch_align2D_region::thread_tmp_821_fu_27039_p3() {
    tmp_821_fu_27039_p3 = (!tmp_809_fu_26947_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_809_fu_26947_p2.read()[0].to_bool())? ref_patch_dy_4_63_11_fu_2964.read(): tmp_820_fu_27031_p3.read());
}

void batch_align2D_region::thread_tmp_822_fu_27047_p3() {
    tmp_822_fu_27047_p3 = (!tmp_811_fu_26961_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_811_fu_26961_p2.read()[0].to_bool())? ref_patch_dy_4_63_19_fu_2996.read(): tmp_821_fu_27039_p3.read());
}

void batch_align2D_region::thread_tmp_823_fu_27055_p3() {
    tmp_823_fu_27055_p3 = (!tmp_813_fu_26975_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_813_fu_26975_p2.read()[0].to_bool())? ref_patch_dy_4_63_27_fu_3028.read(): tmp_822_fu_27047_p3.read());
}

void batch_align2D_region::thread_tmp_824_fu_27063_p3() {
    tmp_824_fu_27063_p3 = (!tmp_815_fu_26989_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_815_fu_26989_p2.read()[0].to_bool())? ref_patch_dy_4_63_35_fu_3060.read(): tmp_823_fu_27055_p3.read());
}

void batch_align2D_region::thread_tmp_825_fu_27071_p3() {
    tmp_825_fu_27071_p3 = (!tmp_817_fu_27003_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_817_fu_27003_p2.read()[0].to_bool())? ref_patch_dy_4_63_43_fu_3092.read(): tmp_824_fu_27063_p3.read());
}

void batch_align2D_region::thread_tmp_826_fu_27140_p2() {
    tmp_826_fu_27140_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_827_fu_27146_p3() {
    tmp_827_fu_27146_p3 = (!tmp_826_fu_27140_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_826_fu_27140_p2.read()[0].to_bool())? ref_patch_dx_4_63_11_fu_2708.read(): ref_patch_dx_4_63_60_fu_2904.read());
}

void batch_align2D_region::thread_tmp_828_fu_27154_p2() {
    tmp_828_fu_27154_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_829_fu_27160_p3() {
    tmp_829_fu_27160_p3 = (!tmp_828_fu_27154_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_828_fu_27154_p2.read()[0].to_bool())? ref_patch_dx_4_63_18_fu_2736.read(): tmp_827_fu_27146_p3.read());
}

void batch_align2D_region::thread_tmp_82_fu_13029_p1() {
    tmp_82_fu_13029_p1 = esl_zext<32,8>(pyr_region_fcoord_0_1.read());
}

void batch_align2D_region::thread_tmp_830_fu_27168_p2() {
    tmp_830_fu_27168_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_831_fu_27174_p3() {
    tmp_831_fu_27174_p3 = (!tmp_830_fu_27168_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_830_fu_27168_p2.read()[0].to_bool())? ref_patch_dx_4_63_25_fu_2764.read(): tmp_829_fu_27160_p3.read());
}

void batch_align2D_region::thread_tmp_832_fu_27182_p2() {
    tmp_832_fu_27182_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_833_fu_27188_p3() {
    tmp_833_fu_27188_p3 = (!tmp_832_fu_27182_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_832_fu_27182_p2.read()[0].to_bool())? ref_patch_dx_4_63_32_fu_2792.read(): tmp_831_fu_27174_p3.read());
}

void batch_align2D_region::thread_tmp_834_fu_27196_p2() {
    tmp_834_fu_27196_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_835_fu_27202_p3() {
    tmp_835_fu_27202_p3 = (!tmp_834_fu_27196_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_834_fu_27196_p2.read()[0].to_bool())? ref_patch_dx_4_63_39_fu_2820.read(): tmp_833_fu_27188_p3.read());
}

void batch_align2D_region::thread_tmp_836_fu_27210_p2() {
    tmp_836_fu_27210_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_837_fu_27216_p3() {
    tmp_837_fu_27216_p3 = (!tmp_836_fu_27210_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_836_fu_27210_p2.read()[0].to_bool())? ref_patch_dx_4_63_46_fu_2848.read(): tmp_835_fu_27202_p3.read());
}

void batch_align2D_region::thread_tmp_838_fu_27224_p2() {
    tmp_838_fu_27224_p2 = (!tmp_205_4_3_t_fu_27135_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_3_t_fu_27135_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_839_fu_27238_p3() {
    tmp_839_fu_27238_p3 = (!tmp_826_fu_27140_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_826_fu_27140_p2.read()[0].to_bool())? ref_patch_dy_4_63_4_fu_2936.read(): ref_patch_dy_4_63_60_fu_3160.read());
}

void batch_align2D_region::thread_tmp_83_1_fu_16221_p1() {
    tmp_83_1_fu_16221_p1 = tmp_83_neg_1_reg_40526.read();
}

void batch_align2D_region::thread_tmp_83_2_fu_19388_p1() {
    tmp_83_2_fu_19388_p1 = tmp_83_neg_2_reg_42194.read();
}

void batch_align2D_region::thread_tmp_83_3_fu_22555_p1() {
    tmp_83_3_fu_22555_p1 = tmp_83_neg_3_reg_43862.read();
}

void batch_align2D_region::thread_tmp_83_4_fu_25722_p1() {
    tmp_83_4_fu_25722_p1 = tmp_83_neg_4_reg_45530.read();
}

void batch_align2D_region::thread_tmp_83_5_fu_28890_p1() {
    tmp_83_5_fu_28890_p1 = tmp_83_neg_5_reg_47192.read();
}

void batch_align2D_region::thread_tmp_83_6_fu_32057_p1() {
    tmp_83_6_fu_32057_p1 = tmp_83_neg_6_reg_48860.read();
}

void batch_align2D_region::thread_tmp_83_7_fu_35224_p1() {
    tmp_83_7_fu_35224_p1 = tmp_83_neg_7_reg_50528.read();
}

void batch_align2D_region::thread_tmp_83_neg_1_fu_16205_p2() {
    tmp_83_neg_1_fu_16205_p2 = (tmp_83_to_int_1_fu_16201_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_2_fu_19372_p2() {
    tmp_83_neg_2_fu_19372_p2 = (tmp_83_to_int_2_fu_19368_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_3_fu_22539_p2() {
    tmp_83_neg_3_fu_22539_p2 = (tmp_83_to_int_3_fu_22535_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_4_fu_25706_p2() {
    tmp_83_neg_4_fu_25706_p2 = (tmp_83_to_int_4_fu_25702_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_5_fu_28874_p2() {
    tmp_83_neg_5_fu_28874_p2 = (tmp_83_to_int_5_fu_28870_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_6_fu_32041_p2() {
    tmp_83_neg_6_fu_32041_p2 = (tmp_83_to_int_6_fu_32037_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_7_fu_35208_p2() {
    tmp_83_neg_7_fu_35208_p2 = (tmp_83_to_int_7_fu_35204_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_neg_fu_13038_p2() {
    tmp_83_neg_fu_13038_p2 = (tmp_83_to_int_fu_13034_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_83_to_int_1_fu_16201_p1() {
    tmp_83_to_int_1_fu_16201_p1 = reg_10846.read();
}

void batch_align2D_region::thread_tmp_83_to_int_2_fu_19368_p1() {
    tmp_83_to_int_2_fu_19368_p1 = reg_11045.read();
}

void batch_align2D_region::thread_tmp_83_to_int_3_fu_22535_p1() {
    tmp_83_to_int_3_fu_22535_p1 = reg_11164.read();
}

void batch_align2D_region::thread_tmp_83_to_int_4_fu_25702_p1() {
    tmp_83_to_int_4_fu_25702_p1 = reg_11285.read();
}

void batch_align2D_region::thread_tmp_83_to_int_5_fu_28870_p1() {
    tmp_83_to_int_5_fu_28870_p1 = reg_11098.read();
}

void batch_align2D_region::thread_tmp_83_to_int_6_fu_32037_p1() {
    tmp_83_to_int_6_fu_32037_p1 = reg_11317.read();
}

void batch_align2D_region::thread_tmp_83_to_int_7_fu_35204_p1() {
    tmp_83_to_int_7_fu_35204_p1 = reg_10859.read();
}

void batch_align2D_region::thread_tmp_83_to_int_fu_13034_p1() {
    tmp_83_to_int_fu_13034_p1 = reg_10852.read();
}

void batch_align2D_region::thread_tmp_840_fu_27246_p3() {
    tmp_840_fu_27246_p3 = (!tmp_828_fu_27154_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_828_fu_27154_p2.read()[0].to_bool())? ref_patch_dy_4_63_12_fu_2968.read(): tmp_839_fu_27238_p3.read());
}

void batch_align2D_region::thread_tmp_841_fu_27254_p3() {
    tmp_841_fu_27254_p3 = (!tmp_830_fu_27168_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_830_fu_27168_p2.read()[0].to_bool())? ref_patch_dy_4_63_20_fu_3000.read(): tmp_840_fu_27246_p3.read());
}

void batch_align2D_region::thread_tmp_842_fu_27262_p3() {
    tmp_842_fu_27262_p3 = (!tmp_832_fu_27182_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_832_fu_27182_p2.read()[0].to_bool())? ref_patch_dy_4_63_28_fu_3032.read(): tmp_841_fu_27254_p3.read());
}

void batch_align2D_region::thread_tmp_843_fu_27270_p3() {
    tmp_843_fu_27270_p3 = (!tmp_834_fu_27196_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_834_fu_27196_p2.read()[0].to_bool())? ref_patch_dy_4_63_36_fu_3064.read(): tmp_842_fu_27262_p3.read());
}

void batch_align2D_region::thread_tmp_844_fu_27278_p3() {
    tmp_844_fu_27278_p3 = (!tmp_836_fu_27210_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_836_fu_27210_p2.read()[0].to_bool())? ref_patch_dy_4_63_44_fu_3096.read(): tmp_843_fu_27270_p3.read());
}

void batch_align2D_region::thread_tmp_845_fu_27320_p2() {
    tmp_845_fu_27320_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_846_fu_27326_p3() {
    tmp_846_fu_27326_p3 = (!tmp_845_fu_27320_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_845_fu_27320_p2.read()[0].to_bool())? ref_patch_dx_4_63_12_fu_2712.read(): ref_patch_dx_4_63_61_fu_2908.read());
}

void batch_align2D_region::thread_tmp_847_fu_27334_p2() {
    tmp_847_fu_27334_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_848_fu_27340_p3() {
    tmp_848_fu_27340_p3 = (!tmp_847_fu_27334_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_847_fu_27334_p2.read()[0].to_bool())? ref_patch_dx_4_63_19_fu_2740.read(): tmp_846_fu_27326_p3.read());
}

void batch_align2D_region::thread_tmp_849_fu_27348_p2() {
    tmp_849_fu_27348_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_850_fu_27354_p3() {
    tmp_850_fu_27354_p3 = (!tmp_849_fu_27348_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_849_fu_27348_p2.read()[0].to_bool())? ref_patch_dx_4_63_26_fu_2768.read(): tmp_848_fu_27340_p3.read());
}

void batch_align2D_region::thread_tmp_851_fu_27362_p2() {
    tmp_851_fu_27362_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_852_fu_27368_p3() {
    tmp_852_fu_27368_p3 = (!tmp_851_fu_27362_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_851_fu_27362_p2.read()[0].to_bool())? ref_patch_dx_4_63_33_fu_2796.read(): tmp_850_fu_27354_p3.read());
}

void batch_align2D_region::thread_tmp_853_fu_27376_p2() {
    tmp_853_fu_27376_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_854_fu_27382_p3() {
    tmp_854_fu_27382_p3 = (!tmp_853_fu_27376_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_853_fu_27376_p2.read()[0].to_bool())? ref_patch_dx_4_63_40_fu_2824.read(): tmp_852_fu_27368_p3.read());
}

void batch_align2D_region::thread_tmp_855_fu_27390_p2() {
    tmp_855_fu_27390_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_856_fu_27396_p3() {
    tmp_856_fu_27396_p3 = (!tmp_855_fu_27390_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_855_fu_27390_p2.read()[0].to_bool())? ref_patch_dx_4_63_47_fu_2852.read(): tmp_854_fu_27382_p3.read());
}

void batch_align2D_region::thread_tmp_857_fu_27404_p2() {
    tmp_857_fu_27404_p2 = (!tmp_205_4_4_t_fu_27315_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_4_t_fu_27315_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_858_fu_27444_p3() {
    tmp_858_fu_27444_p3 = (!tmp_845_reg_46182.read()[0].is_01())? sc_lv<32>(): ((tmp_845_reg_46182.read()[0].to_bool())? ref_patch_dy_4_63_5_fu_2940.read(): ref_patch_dy_4_63_61_fu_3164.read());
}

void batch_align2D_region::thread_tmp_859_fu_27451_p3() {
    tmp_859_fu_27451_p3 = (!tmp_847_reg_46187.read()[0].is_01())? sc_lv<32>(): ((tmp_847_reg_46187.read()[0].to_bool())? ref_patch_dy_4_63_13_fu_2972.read(): tmp_858_fu_27444_p3.read());
}

void batch_align2D_region::thread_tmp_860_fu_27458_p3() {
    tmp_860_fu_27458_p3 = (!tmp_849_reg_46192.read()[0].is_01())? sc_lv<32>(): ((tmp_849_reg_46192.read()[0].to_bool())? ref_patch_dy_4_63_21_fu_3004.read(): tmp_859_fu_27451_p3.read());
}

void batch_align2D_region::thread_tmp_861_fu_27465_p3() {
    tmp_861_fu_27465_p3 = (!tmp_851_reg_46197.read()[0].is_01())? sc_lv<32>(): ((tmp_851_reg_46197.read()[0].to_bool())? ref_patch_dy_4_63_29_fu_3036.read(): tmp_860_fu_27458_p3.read());
}

void batch_align2D_region::thread_tmp_862_fu_27472_p3() {
    tmp_862_fu_27472_p3 = (!tmp_853_reg_46202.read()[0].is_01())? sc_lv<32>(): ((tmp_853_reg_46202.read()[0].to_bool())? ref_patch_dy_4_63_37_fu_3068.read(): tmp_861_fu_27465_p3.read());
}

void batch_align2D_region::thread_tmp_863_fu_27479_p3() {
    tmp_863_fu_27479_p3 = (!tmp_855_reg_46207.read()[0].is_01())? sc_lv<32>(): ((tmp_855_reg_46207.read()[0].to_bool())? ref_patch_dy_4_63_45_fu_3100.read(): tmp_862_fu_27472_p3.read());
}

void batch_align2D_region::thread_tmp_864_fu_27546_p2() {
    tmp_864_fu_27546_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_865_fu_27552_p3() {
    tmp_865_fu_27552_p3 = (!tmp_864_fu_27546_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_864_fu_27546_p2.read()[0].to_bool())? ref_patch_dx_4_63_13_fu_2716.read(): ref_patch_dx_4_63_62_fu_2912.read());
}

void batch_align2D_region::thread_tmp_866_fu_27560_p2() {
    tmp_866_fu_27560_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_867_fu_27566_p3() {
    tmp_867_fu_27566_p3 = (!tmp_866_fu_27560_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_866_fu_27560_p2.read()[0].to_bool())? ref_patch_dx_4_63_20_fu_2744.read(): tmp_865_fu_27552_p3.read());
}

void batch_align2D_region::thread_tmp_868_fu_27574_p2() {
    tmp_868_fu_27574_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_869_fu_27580_p3() {
    tmp_869_fu_27580_p3 = (!tmp_868_fu_27574_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_868_fu_27574_p2.read()[0].to_bool())? ref_patch_dx_4_63_27_fu_2772.read(): tmp_867_fu_27566_p3.read());
}

void batch_align2D_region::thread_tmp_86_fu_13970_p3() {
    tmp_86_fu_13970_p3 = (!tmp_35_reg_39392.read()[0].is_01())? sc_lv<32>(): ((tmp_35_reg_39392.read()[0].to_bool())? ref_patch_dy_0_63_9_fu_908.read(): tmp_79_fu_13963_p3.read());
}

void batch_align2D_region::thread_tmp_870_fu_27588_p2() {
    tmp_870_fu_27588_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_871_fu_27594_p3() {
    tmp_871_fu_27594_p3 = (!tmp_870_fu_27588_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_870_fu_27588_p2.read()[0].to_bool())? ref_patch_dx_4_63_34_fu_2800.read(): tmp_869_fu_27580_p3.read());
}

void batch_align2D_region::thread_tmp_872_fu_27602_p2() {
    tmp_872_fu_27602_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_873_fu_27608_p3() {
    tmp_873_fu_27608_p3 = (!tmp_872_fu_27602_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_872_fu_27602_p2.read()[0].to_bool())? ref_patch_dx_4_63_41_fu_2828.read(): tmp_871_fu_27594_p3.read());
}

void batch_align2D_region::thread_tmp_874_fu_27616_p2() {
    tmp_874_fu_27616_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_875_fu_27622_p3() {
    tmp_875_fu_27622_p3 = (!tmp_874_fu_27616_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_874_fu_27616_p2.read()[0].to_bool())? ref_patch_dx_4_63_48_fu_2856.read(): tmp_873_fu_27608_p3.read());
}

void batch_align2D_region::thread_tmp_876_fu_27630_p2() {
    tmp_876_fu_27630_p2 = (!tmp_205_4_5_t_fu_27541_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_5_t_fu_27541_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_877_fu_27644_p3() {
    tmp_877_fu_27644_p3 = (!tmp_864_fu_27546_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_864_fu_27546_p2.read()[0].to_bool())? ref_patch_dy_4_63_6_fu_2944.read(): ref_patch_dy_4_63_62_fu_3168.read());
}

void batch_align2D_region::thread_tmp_878_fu_27652_p3() {
    tmp_878_fu_27652_p3 = (!tmp_866_fu_27560_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_866_fu_27560_p2.read()[0].to_bool())? ref_patch_dy_4_63_14_fu_2976.read(): tmp_877_fu_27644_p3.read());
}

void batch_align2D_region::thread_tmp_879_fu_27660_p3() {
    tmp_879_fu_27660_p3 = (!tmp_868_fu_27574_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_868_fu_27574_p2.read()[0].to_bool())? ref_patch_dy_4_63_22_fu_3008.read(): tmp_878_fu_27652_p3.read());
}

void batch_align2D_region::thread_tmp_880_fu_27668_p3() {
    tmp_880_fu_27668_p3 = (!tmp_870_fu_27588_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_870_fu_27588_p2.read()[0].to_bool())? ref_patch_dy_4_63_30_fu_3040.read(): tmp_879_fu_27660_p3.read());
}

void batch_align2D_region::thread_tmp_881_fu_27676_p3() {
    tmp_881_fu_27676_p3 = (!tmp_872_fu_27602_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_872_fu_27602_p2.read()[0].to_bool())? ref_patch_dy_4_63_38_fu_3072.read(): tmp_880_fu_27668_p3.read());
}

void batch_align2D_region::thread_tmp_882_fu_27684_p3() {
    tmp_882_fu_27684_p3 = (!tmp_874_fu_27616_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_874_fu_27616_p2.read()[0].to_bool())? ref_patch_dy_4_63_46_fu_3104.read(): tmp_881_fu_27676_p3.read());
}

void batch_align2D_region::thread_tmp_883_fu_27753_p2() {
    tmp_883_fu_27753_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_884_fu_27759_p3() {
    tmp_884_fu_27759_p3 = (!tmp_883_fu_27753_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_883_fu_27753_p2.read()[0].to_bool())? ref_patch_dx_4_63_14_fu_2720.read(): ref_patch_dx_4_63_63_fu_2916.read());
}

void batch_align2D_region::thread_tmp_885_fu_27767_p2() {
    tmp_885_fu_27767_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_886_fu_27773_p3() {
    tmp_886_fu_27773_p3 = (!tmp_885_fu_27767_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_885_fu_27767_p2.read()[0].to_bool())? ref_patch_dx_4_63_21_fu_2748.read(): tmp_884_fu_27759_p3.read());
}

void batch_align2D_region::thread_tmp_887_fu_27781_p2() {
    tmp_887_fu_27781_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_888_fu_27787_p3() {
    tmp_888_fu_27787_p3 = (!tmp_887_fu_27781_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_887_fu_27781_p2.read()[0].to_bool())? ref_patch_dx_4_63_28_fu_2776.read(): tmp_886_fu_27773_p3.read());
}

void batch_align2D_region::thread_tmp_889_fu_27795_p2() {
    tmp_889_fu_27795_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_88_fu_12216_p2() {
    tmp_88_fu_12216_p2 = (!p_shl8_cast_fu_12212_p1.read().is_01() || !p_shl_cast_fu_12200_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_12212_p1.read()) + sc_biguint<7>(p_shl_cast_fu_12200_p1.read()));
}

void batch_align2D_region::thread_tmp_890_fu_27801_p3() {
    tmp_890_fu_27801_p3 = (!tmp_889_fu_27795_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_889_fu_27795_p2.read()[0].to_bool())? ref_patch_dx_4_63_35_fu_2804.read(): tmp_888_fu_27787_p3.read());
}

void batch_align2D_region::thread_tmp_891_fu_27809_p2() {
    tmp_891_fu_27809_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_892_fu_27815_p3() {
    tmp_892_fu_27815_p3 = (!tmp_891_fu_27809_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_891_fu_27809_p2.read()[0].to_bool())? ref_patch_dx_4_63_42_fu_2832.read(): tmp_890_fu_27801_p3.read());
}

void batch_align2D_region::thread_tmp_893_fu_27823_p2() {
    tmp_893_fu_27823_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_894_fu_27829_p3() {
    tmp_894_fu_27829_p3 = (!tmp_893_fu_27823_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_893_fu_27823_p2.read()[0].to_bool())? ref_patch_dx_4_63_49_fu_2860.read(): tmp_892_fu_27815_p3.read());
}

void batch_align2D_region::thread_tmp_895_fu_27837_p2() {
    tmp_895_fu_27837_p2 = (!tmp_205_4_655_t_fu_27748_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_4_655_t_fu_27748_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_896_fu_27851_p3() {
    tmp_896_fu_27851_p3 = (!tmp_883_fu_27753_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_883_fu_27753_p2.read()[0].to_bool())? ref_patch_dy_4_63_7_fu_2948.read(): ref_patch_dy_4_63_63_fu_3172.read());
}

void batch_align2D_region::thread_tmp_897_fu_27859_p3() {
    tmp_897_fu_27859_p3 = (!tmp_885_fu_27767_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_885_fu_27767_p2.read()[0].to_bool())? ref_patch_dy_4_63_15_fu_2980.read(): tmp_896_fu_27851_p3.read());
}

void batch_align2D_region::thread_tmp_898_fu_27867_p3() {
    tmp_898_fu_27867_p3 = (!tmp_887_fu_27781_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_887_fu_27781_p2.read()[0].to_bool())? ref_patch_dy_4_63_23_fu_3012.read(): tmp_897_fu_27859_p3.read());
}

void batch_align2D_region::thread_tmp_899_fu_27875_p3() {
    tmp_899_fu_27875_p3 = (!tmp_889_fu_27795_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_889_fu_27795_p2.read()[0].to_bool())? ref_patch_dy_4_63_31_fu_3044.read(): tmp_898_fu_27867_p3.read());
}

void batch_align2D_region::thread_tmp_89_fu_12232_p2() {
    tmp_89_fu_12232_p2 = (!tmp_88_fu_12216_p2.read().is_01() || !tmp107_cast_fu_12228_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_88_fu_12216_p2.read()) + sc_biguint<7>(tmp107_cast_fu_12228_p1.read()));
}

void batch_align2D_region::thread_tmp_900_fu_27883_p3() {
    tmp_900_fu_27883_p3 = (!tmp_891_fu_27809_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_891_fu_27809_p2.read()[0].to_bool())? ref_patch_dy_4_63_39_fu_3076.read(): tmp_899_fu_27875_p3.read());
}

void batch_align2D_region::thread_tmp_901_fu_27891_p3() {
    tmp_901_fu_27891_p3 = (!tmp_893_fu_27823_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_893_fu_27823_p2.read()[0].to_bool())? ref_patch_dy_4_63_47_fu_3108.read(): tmp_900_fu_27883_p3.read());
}

void batch_align2D_region::thread_tmp_90_fu_12238_p1() {
    tmp_90_fu_12238_p1 = esl_zext<64,7>(tmp_89_fu_12232_p2.read());
}

void batch_align2D_region::thread_tmp_912_fu_29558_p2() {
    tmp_912_fu_29558_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_913_fu_29563_p3() {
    tmp_913_fu_29563_p3 = (!tmp_912_fu_29558_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_912_fu_29558_p2.read()[0].to_bool())? ref_patch_dy_5_63_fu_3432.read(): ref_patch_dy_5_63_56_fu_3656.read());
}

void batch_align2D_region::thread_tmp_914_fu_29571_p2() {
    tmp_914_fu_29571_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_915_fu_29576_p3() {
    tmp_915_fu_29576_p3 = (!tmp_914_fu_29571_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_914_fu_29571_p2.read()[0].to_bool())? ref_patch_dy_5_63_8_fu_3464.read(): tmp_913_fu_29563_p3.read());
}

void batch_align2D_region::thread_tmp_916_fu_29584_p2() {
    tmp_916_fu_29584_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_917_fu_29589_p3() {
    tmp_917_fu_29589_p3 = (!tmp_916_fu_29584_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_916_fu_29584_p2.read()[0].to_bool())? ref_patch_dy_5_63_16_fu_3496.read(): tmp_915_fu_29576_p3.read());
}

void batch_align2D_region::thread_tmp_918_fu_29597_p2() {
    tmp_918_fu_29597_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_919_fu_29602_p3() {
    tmp_919_fu_29602_p3 = (!tmp_918_fu_29597_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_918_fu_29597_p2.read()[0].to_bool())? ref_patch_dy_5_63_24_fu_3528.read(): tmp_917_fu_29589_p3.read());
}

void batch_align2D_region::thread_tmp_91_fu_12253_p2() {
    tmp_91_fu_12253_p2 = (!tmp_88_fu_12216_p2.read().is_01() || !tmp108_cast_fu_12249_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_88_fu_12216_p2.read()) + sc_biguint<7>(tmp108_cast_fu_12249_p1.read()));
}

void batch_align2D_region::thread_tmp_920_fu_29610_p2() {
    tmp_920_fu_29610_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_921_fu_29615_p3() {
    tmp_921_fu_29615_p3 = (!tmp_920_fu_29610_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_920_fu_29610_p2.read()[0].to_bool())? ref_patch_dy_5_63_32_fu_3560.read(): tmp_919_fu_29602_p3.read());
}

void batch_align2D_region::thread_tmp_922_fu_29623_p2() {
    tmp_922_fu_29623_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_923_fu_29628_p3() {
    tmp_923_fu_29628_p3 = (!tmp_922_fu_29623_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_922_fu_29623_p2.read()[0].to_bool())? ref_patch_dy_5_63_40_fu_3592.read(): tmp_921_fu_29615_p3.read());
}

void batch_align2D_region::thread_tmp_924_fu_29636_p2() {
    tmp_924_fu_29636_p2 = (!tmp_1480_reg_47345_pp15_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1480_reg_47345_pp15_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_925_fu_29675_p2() {
    tmp_925_fu_29675_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_926_fu_29681_p3() {
    tmp_926_fu_29681_p3 = (!tmp_925_fu_29675_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_925_fu_29675_p2.read()[0].to_bool())? ref_patch_dx_5_63_8_fu_3208.read(): ref_patch_dx_5_63_57_fu_3404.read());
}

void batch_align2D_region::thread_tmp_927_fu_29689_p2() {
    tmp_927_fu_29689_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_928_fu_29695_p3() {
    tmp_928_fu_29695_p3 = (!tmp_927_fu_29689_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_927_fu_29689_p2.read()[0].to_bool())? ref_patch_dx_5_63_15_fu_3236.read(): tmp_926_fu_29681_p3.read());
}

void batch_align2D_region::thread_tmp_929_fu_29703_p2() {
    tmp_929_fu_29703_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_92_1_fu_16225_p1() {
    tmp_92_1_fu_16225_p1 = tmp_92_neg_1_reg_40531.read();
}

void batch_align2D_region::thread_tmp_92_2_fu_19392_p1() {
    tmp_92_2_fu_19392_p1 = tmp_92_neg_2_reg_42199.read();
}

void batch_align2D_region::thread_tmp_92_3_fu_22559_p1() {
    tmp_92_3_fu_22559_p1 = tmp_92_neg_3_reg_43867.read();
}

void batch_align2D_region::thread_tmp_92_4_fu_25726_p1() {
    tmp_92_4_fu_25726_p1 = tmp_92_neg_4_reg_45535.read();
}

void batch_align2D_region::thread_tmp_92_5_fu_28894_p1() {
    tmp_92_5_fu_28894_p1 = tmp_92_neg_5_reg_47197.read();
}

void batch_align2D_region::thread_tmp_92_6_fu_32061_p1() {
    tmp_92_6_fu_32061_p1 = tmp_92_neg_6_reg_48865.read();
}

void batch_align2D_region::thread_tmp_92_7_fu_35228_p1() {
    tmp_92_7_fu_35228_p1 = tmp_92_neg_7_reg_50533.read();
}

void batch_align2D_region::thread_tmp_92_fu_12259_p1() {
    tmp_92_fu_12259_p1 = esl_zext<64,7>(tmp_91_fu_12253_p2.read());
}

void batch_align2D_region::thread_tmp_92_neg_1_fu_16215_p2() {
    tmp_92_neg_1_fu_16215_p2 = (tmp_92_to_int_1_fu_16211_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_2_fu_19382_p2() {
    tmp_92_neg_2_fu_19382_p2 = (tmp_92_to_int_2_fu_19378_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_3_fu_22549_p2() {
    tmp_92_neg_3_fu_22549_p2 = (tmp_92_to_int_3_fu_22545_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_4_fu_25716_p2() {
    tmp_92_neg_4_fu_25716_p2 = (tmp_92_to_int_4_fu_25712_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_5_fu_28884_p2() {
    tmp_92_neg_5_fu_28884_p2 = (tmp_92_to_int_5_fu_28880_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_6_fu_32051_p2() {
    tmp_92_neg_6_fu_32051_p2 = (tmp_92_to_int_6_fu_32047_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_7_fu_35218_p2() {
    tmp_92_neg_7_fu_35218_p2 = (tmp_92_to_int_7_fu_35214_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_neg_fu_13048_p2() {
    tmp_92_neg_fu_13048_p2 = (tmp_92_to_int_fu_13044_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D_region::thread_tmp_92_to_int_1_fu_16211_p1() {
    tmp_92_to_int_1_fu_16211_p1 = reg_10852.read();
}

void batch_align2D_region::thread_tmp_92_to_int_2_fu_19378_p1() {
    tmp_92_to_int_2_fu_19378_p1 = reg_11164.read();
}

void batch_align2D_region::thread_tmp_92_to_int_3_fu_22545_p1() {
    tmp_92_to_int_3_fu_22545_p1 = reg_11045.read();
}

void batch_align2D_region::thread_tmp_92_to_int_4_fu_25712_p1() {
    tmp_92_to_int_4_fu_25712_p1 = reg_11425.read();
}

void batch_align2D_region::thread_tmp_92_to_int_5_fu_28880_p1() {
    tmp_92_to_int_5_fu_28880_p1 = reg_10846.read();
}

void batch_align2D_region::thread_tmp_92_to_int_6_fu_32047_p1() {
    tmp_92_to_int_6_fu_32047_p1 = reg_11425.read();
}

void batch_align2D_region::thread_tmp_92_to_int_7_fu_35214_p1() {
    tmp_92_to_int_7_fu_35214_p1 = reg_10846.read();
}

void batch_align2D_region::thread_tmp_92_to_int_fu_13044_p1() {
    tmp_92_to_int_fu_13044_p1 = reg_10846.read();
}

void batch_align2D_region::thread_tmp_930_fu_29709_p3() {
    tmp_930_fu_29709_p3 = (!tmp_929_fu_29703_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_929_fu_29703_p2.read()[0].to_bool())? ref_patch_dx_5_63_22_fu_3264.read(): tmp_928_fu_29695_p3.read());
}

void batch_align2D_region::thread_tmp_931_fu_29717_p2() {
    tmp_931_fu_29717_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_932_fu_29723_p3() {
    tmp_932_fu_29723_p3 = (!tmp_931_fu_29717_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_931_fu_29717_p2.read()[0].to_bool())? ref_patch_dx_5_63_29_fu_3292.read(): tmp_930_fu_29709_p3.read());
}

void batch_align2D_region::thread_tmp_933_fu_29731_p2() {
    tmp_933_fu_29731_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_934_fu_29737_p3() {
    tmp_934_fu_29737_p3 = (!tmp_933_fu_29731_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_933_fu_29731_p2.read()[0].to_bool())? ref_patch_dx_5_63_36_fu_3320.read(): tmp_932_fu_29723_p3.read());
}

void batch_align2D_region::thread_tmp_935_fu_29745_p2() {
    tmp_935_fu_29745_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_936_fu_29751_p3() {
    tmp_936_fu_29751_p3 = (!tmp_935_fu_29745_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_935_fu_29745_p2.read()[0].to_bool())? ref_patch_dx_5_63_43_fu_3348.read(): tmp_934_fu_29737_p3.read());
}

void batch_align2D_region::thread_tmp_937_fu_29759_p2() {
    tmp_937_fu_29759_p2 = (!tmp_205_5_050_t_fu_29670_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_050_t_fu_29670_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_938_fu_29799_p3() {
    tmp_938_fu_29799_p3 = (!tmp_925_reg_47721.read()[0].is_01())? sc_lv<32>(): ((tmp_925_reg_47721.read()[0].to_bool())? ref_patch_dy_5_63_1_fu_3436.read(): ref_patch_dy_5_63_57_fu_3660.read());
}

void batch_align2D_region::thread_tmp_939_fu_29806_p3() {
    tmp_939_fu_29806_p3 = (!tmp_927_reg_47726.read()[0].is_01())? sc_lv<32>(): ((tmp_927_reg_47726.read()[0].to_bool())? ref_patch_dy_5_63_9_fu_3468.read(): tmp_938_fu_29799_p3.read());
}

void batch_align2D_region::thread_tmp_93_fu_13977_p3() {
    tmp_93_fu_13977_p3 = (!tmp_37_reg_39397.read()[0].is_01())? sc_lv<32>(): ((tmp_37_reg_39397.read()[0].to_bool())? ref_patch_dy_0_63_17_fu_940.read(): tmp_86_fu_13970_p3.read());
}

void batch_align2D_region::thread_tmp_940_fu_29813_p3() {
    tmp_940_fu_29813_p3 = (!tmp_929_reg_47731.read()[0].is_01())? sc_lv<32>(): ((tmp_929_reg_47731.read()[0].to_bool())? ref_patch_dy_5_63_17_fu_3500.read(): tmp_939_fu_29806_p3.read());
}

void batch_align2D_region::thread_tmp_941_fu_29820_p3() {
    tmp_941_fu_29820_p3 = (!tmp_931_reg_47736.read()[0].is_01())? sc_lv<32>(): ((tmp_931_reg_47736.read()[0].to_bool())? ref_patch_dy_5_63_25_fu_3532.read(): tmp_940_fu_29813_p3.read());
}

void batch_align2D_region::thread_tmp_942_fu_29827_p3() {
    tmp_942_fu_29827_p3 = (!tmp_933_reg_47741.read()[0].is_01())? sc_lv<32>(): ((tmp_933_reg_47741.read()[0].to_bool())? ref_patch_dy_5_63_33_fu_3564.read(): tmp_941_fu_29820_p3.read());
}

void batch_align2D_region::thread_tmp_943_fu_29834_p3() {
    tmp_943_fu_29834_p3 = (!tmp_935_reg_47746.read()[0].is_01())? sc_lv<32>(): ((tmp_935_reg_47746.read()[0].to_bool())? ref_patch_dy_5_63_41_fu_3596.read(): tmp_942_fu_29827_p3.read());
}

void batch_align2D_region::thread_tmp_944_fu_29874_p2() {
    tmp_944_fu_29874_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_945_fu_29880_p3() {
    tmp_945_fu_29880_p3 = (!tmp_944_fu_29874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_944_fu_29874_p2.read()[0].to_bool())? ref_patch_dx_5_63_9_fu_3212.read(): ref_patch_dx_5_63_58_fu_3408.read());
}

void batch_align2D_region::thread_tmp_946_fu_29888_p2() {
    tmp_946_fu_29888_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_947_fu_29894_p3() {
    tmp_947_fu_29894_p3 = (!tmp_946_fu_29888_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_946_fu_29888_p2.read()[0].to_bool())? ref_patch_dx_5_63_16_fu_3240.read(): tmp_945_fu_29880_p3.read());
}

void batch_align2D_region::thread_tmp_948_fu_29902_p2() {
    tmp_948_fu_29902_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_949_fu_29908_p3() {
    tmp_949_fu_29908_p3 = (!tmp_948_fu_29902_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_948_fu_29902_p2.read()[0].to_bool())? ref_patch_dx_5_63_23_fu_3268.read(): tmp_947_fu_29894_p3.read());
}

void batch_align2D_region::thread_tmp_94_fu_12299_p2() {
    tmp_94_fu_12299_p2 = (!tmp_102_cast_fu_12291_p1.read().is_01() || !tmp_106_cast_fu_12295_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_102_cast_fu_12291_p1.read()) - sc_biguint<9>(tmp_106_cast_fu_12295_p1.read()));
}

void batch_align2D_region::thread_tmp_950_fu_29916_p2() {
    tmp_950_fu_29916_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_951_fu_29922_p3() {
    tmp_951_fu_29922_p3 = (!tmp_950_fu_29916_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_950_fu_29916_p2.read()[0].to_bool())? ref_patch_dx_5_63_30_fu_3296.read(): tmp_949_fu_29908_p3.read());
}

void batch_align2D_region::thread_tmp_952_fu_29930_p2() {
    tmp_952_fu_29930_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_953_fu_29936_p3() {
    tmp_953_fu_29936_p3 = (!tmp_952_fu_29930_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_952_fu_29930_p2.read()[0].to_bool())? ref_patch_dx_5_63_37_fu_3324.read(): tmp_951_fu_29922_p3.read());
}

void batch_align2D_region::thread_tmp_954_fu_29944_p2() {
    tmp_954_fu_29944_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_955_fu_29950_p3() {
    tmp_955_fu_29950_p3 = (!tmp_954_fu_29944_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_954_fu_29944_p2.read()[0].to_bool())? ref_patch_dx_5_63_44_fu_3352.read(): tmp_953_fu_29936_p3.read());
}

void batch_align2D_region::thread_tmp_956_fu_29958_p2() {
    tmp_956_fu_29958_p2 = (!tmp_205_5_1_t_fu_29869_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_1_t_fu_29869_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_957_fu_29998_p3() {
    tmp_957_fu_29998_p3 = (!tmp_944_reg_47772.read()[0].is_01())? sc_lv<32>(): ((tmp_944_reg_47772.read()[0].to_bool())? ref_patch_dy_5_63_2_fu_3440.read(): ref_patch_dy_5_63_58_fu_3664.read());
}

void batch_align2D_region::thread_tmp_958_fu_30005_p3() {
    tmp_958_fu_30005_p3 = (!tmp_946_reg_47777.read()[0].is_01())? sc_lv<32>(): ((tmp_946_reg_47777.read()[0].to_bool())? ref_patch_dy_5_63_10_fu_3472.read(): tmp_957_fu_29998_p3.read());
}

void batch_align2D_region::thread_tmp_959_fu_30012_p3() {
    tmp_959_fu_30012_p3 = (!tmp_948_reg_47782.read()[0].is_01())? sc_lv<32>(): ((tmp_948_reg_47782.read()[0].to_bool())? ref_patch_dy_5_63_18_fu_3504.read(): tmp_958_fu_30005_p3.read());
}

void batch_align2D_region::thread_tmp_95_fu_13062_p2() {
    tmp_95_fu_13062_p2 = (!iter_0_i_reg_7378.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_reg_7378.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_960_fu_30019_p3() {
    tmp_960_fu_30019_p3 = (!tmp_950_reg_47787.read()[0].is_01())? sc_lv<32>(): ((tmp_950_reg_47787.read()[0].to_bool())? ref_patch_dy_5_63_26_fu_3536.read(): tmp_959_fu_30012_p3.read());
}

void batch_align2D_region::thread_tmp_961_fu_30026_p3() {
    tmp_961_fu_30026_p3 = (!tmp_952_reg_47792.read()[0].is_01())? sc_lv<32>(): ((tmp_952_reg_47792.read()[0].to_bool())? ref_patch_dy_5_63_34_fu_3568.read(): tmp_960_fu_30019_p3.read());
}

void batch_align2D_region::thread_tmp_962_fu_30033_p3() {
    tmp_962_fu_30033_p3 = (!tmp_954_reg_47797.read()[0].is_01())? sc_lv<32>(): ((tmp_954_reg_47797.read()[0].to_bool())? ref_patch_dy_5_63_42_fu_3600.read(): tmp_961_fu_30026_p3.read());
}

void batch_align2D_region::thread_tmp_963_fu_30100_p2() {
    tmp_963_fu_30100_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_964_fu_30106_p3() {
    tmp_964_fu_30106_p3 = (!tmp_963_fu_30100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_963_fu_30100_p2.read()[0].to_bool())? ref_patch_dx_5_63_10_fu_3216.read(): ref_patch_dx_5_63_59_fu_3412.read());
}

void batch_align2D_region::thread_tmp_965_fu_30114_p2() {
    tmp_965_fu_30114_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_966_fu_30120_p3() {
    tmp_966_fu_30120_p3 = (!tmp_965_fu_30114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_965_fu_30114_p2.read()[0].to_bool())? ref_patch_dx_5_63_17_fu_3244.read(): tmp_964_fu_30106_p3.read());
}

void batch_align2D_region::thread_tmp_967_fu_30128_p2() {
    tmp_967_fu_30128_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_968_fu_30134_p3() {
    tmp_968_fu_30134_p3 = (!tmp_967_fu_30128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_967_fu_30128_p2.read()[0].to_bool())? ref_patch_dx_5_63_24_fu_3272.read(): tmp_966_fu_30120_p3.read());
}

void batch_align2D_region::thread_tmp_969_fu_30142_p2() {
    tmp_969_fu_30142_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_96_1_fu_16187_p1() {
    tmp_96_1_fu_16187_p1 = esl_zext<32,8>(pyr_region_fcoord_1_s.read());
}

void batch_align2D_region::thread_tmp_96_2_fu_19354_p1() {
    tmp_96_2_fu_19354_p1 = esl_zext<32,8>(pyr_region_fcoord_2_s.read());
}

void batch_align2D_region::thread_tmp_96_3_fu_22521_p1() {
    tmp_96_3_fu_22521_p1 = esl_zext<32,8>(pyr_region_fcoord_3_s.read());
}

void batch_align2D_region::thread_tmp_96_4_fu_25688_p1() {
    tmp_96_4_fu_25688_p1 = esl_zext<32,8>(pyr_region_fcoord_4_s.read());
}

void batch_align2D_region::thread_tmp_96_5_fu_28856_p1() {
    tmp_96_5_fu_28856_p1 = esl_zext<32,8>(pyr_region_fcoord_5_s.read());
}

void batch_align2D_region::thread_tmp_96_6_fu_32023_p1() {
    tmp_96_6_fu_32023_p1 = esl_zext<32,8>(pyr_region_fcoord_6_s.read());
}

void batch_align2D_region::thread_tmp_96_7_fu_35190_p1() {
    tmp_96_7_fu_35190_p1 = esl_zext<32,8>(pyr_region_fcoord_7_s.read());
}

void batch_align2D_region::thread_tmp_96_fu_11823_p1() {
    tmp_96_fu_11823_p1 = esl_sext<64,32>(myRegion_data_ptr.read());
}

void batch_align2D_region::thread_tmp_970_fu_30148_p3() {
    tmp_970_fu_30148_p3 = (!tmp_969_fu_30142_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_969_fu_30142_p2.read()[0].to_bool())? ref_patch_dx_5_63_31_fu_3300.read(): tmp_968_fu_30134_p3.read());
}

void batch_align2D_region::thread_tmp_971_fu_30156_p2() {
    tmp_971_fu_30156_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_972_fu_30162_p3() {
    tmp_972_fu_30162_p3 = (!tmp_971_fu_30156_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_971_fu_30156_p2.read()[0].to_bool())? ref_patch_dx_5_63_38_fu_3328.read(): tmp_970_fu_30148_p3.read());
}

void batch_align2D_region::thread_tmp_973_fu_30170_p2() {
    tmp_973_fu_30170_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_974_fu_30176_p3() {
    tmp_974_fu_30176_p3 = (!tmp_973_fu_30170_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_973_fu_30170_p2.read()[0].to_bool())? ref_patch_dx_5_63_45_fu_3356.read(): tmp_972_fu_30162_p3.read());
}

void batch_align2D_region::thread_tmp_975_fu_30184_p2() {
    tmp_975_fu_30184_p2 = (!tmp_205_5_251_t_fu_30095_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_251_t_fu_30095_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_976_fu_30198_p3() {
    tmp_976_fu_30198_p3 = (!tmp_963_fu_30100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_963_fu_30100_p2.read()[0].to_bool())? ref_patch_dy_5_63_3_fu_3444.read(): ref_patch_dy_5_63_59_fu_3668.read());
}

void batch_align2D_region::thread_tmp_977_fu_30206_p3() {
    tmp_977_fu_30206_p3 = (!tmp_965_fu_30114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_965_fu_30114_p2.read()[0].to_bool())? ref_patch_dy_5_63_11_fu_3476.read(): tmp_976_fu_30198_p3.read());
}

void batch_align2D_region::thread_tmp_978_fu_30214_p3() {
    tmp_978_fu_30214_p3 = (!tmp_967_fu_30128_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_967_fu_30128_p2.read()[0].to_bool())? ref_patch_dy_5_63_19_fu_3508.read(): tmp_977_fu_30206_p3.read());
}

void batch_align2D_region::thread_tmp_979_fu_30222_p3() {
    tmp_979_fu_30222_p3 = (!tmp_969_fu_30142_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_969_fu_30142_p2.read()[0].to_bool())? ref_patch_dy_5_63_27_fu_3540.read(): tmp_978_fu_30214_p3.read());
}

void batch_align2D_region::thread_tmp_97_fu_11845_p1() {
    tmp_97_fu_11845_p1 = indvar_reg_7208.read().range(10-1, 0);
}

void batch_align2D_region::thread_tmp_980_fu_30230_p3() {
    tmp_980_fu_30230_p3 = (!tmp_971_fu_30156_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_971_fu_30156_p2.read()[0].to_bool())? ref_patch_dy_5_63_35_fu_3572.read(): tmp_979_fu_30222_p3.read());
}

void batch_align2D_region::thread_tmp_981_fu_30238_p3() {
    tmp_981_fu_30238_p3 = (!tmp_973_fu_30170_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_973_fu_30170_p2.read()[0].to_bool())? ref_patch_dy_5_63_43_fu_3604.read(): tmp_980_fu_30230_p3.read());
}

void batch_align2D_region::thread_tmp_982_fu_30307_p2() {
    tmp_982_fu_30307_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_983_fu_30313_p3() {
    tmp_983_fu_30313_p3 = (!tmp_982_fu_30307_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_982_fu_30307_p2.read()[0].to_bool())? ref_patch_dx_5_63_11_fu_3220.read(): ref_patch_dx_5_63_60_fu_3416.read());
}

void batch_align2D_region::thread_tmp_984_fu_30321_p2() {
    tmp_984_fu_30321_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_985_fu_30327_p3() {
    tmp_985_fu_30327_p3 = (!tmp_984_fu_30321_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_984_fu_30321_p2.read()[0].to_bool())? ref_patch_dx_5_63_18_fu_3248.read(): tmp_983_fu_30313_p3.read());
}

void batch_align2D_region::thread_tmp_986_fu_30335_p2() {
    tmp_986_fu_30335_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_987_fu_30341_p3() {
    tmp_987_fu_30341_p3 = (!tmp_986_fu_30335_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_986_fu_30335_p2.read()[0].to_bool())? ref_patch_dx_5_63_25_fu_3276.read(): tmp_985_fu_30327_p3.read());
}

void batch_align2D_region::thread_tmp_988_fu_30349_p2() {
    tmp_988_fu_30349_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_989_fu_30355_p3() {
    tmp_989_fu_30355_p3 = (!tmp_988_fu_30349_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_988_fu_30349_p2.read()[0].to_bool())? ref_patch_dx_5_63_32_fu_3304.read(): tmp_987_fu_30341_p3.read());
}

void batch_align2D_region::thread_tmp_990_fu_30363_p2() {
    tmp_990_fu_30363_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_991_fu_30369_p3() {
    tmp_991_fu_30369_p3 = (!tmp_990_fu_30363_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_990_fu_30363_p2.read()[0].to_bool())? ref_patch_dx_5_63_39_fu_3332.read(): tmp_989_fu_30355_p3.read());
}

void batch_align2D_region::thread_tmp_992_fu_30377_p2() {
    tmp_992_fu_30377_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_993_fu_30383_p3() {
    tmp_993_fu_30383_p3 = (!tmp_992_fu_30377_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_992_fu_30377_p2.read()[0].to_bool())? ref_patch_dx_5_63_46_fu_3360.read(): tmp_991_fu_30369_p3.read());
}

void batch_align2D_region::thread_tmp_994_fu_30391_p2() {
    tmp_994_fu_30391_p2 = (!tmp_205_5_3_t_fu_30302_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_5_3_t_fu_30302_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_995_fu_30405_p3() {
    tmp_995_fu_30405_p3 = (!tmp_982_fu_30307_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_982_fu_30307_p2.read()[0].to_bool())? ref_patch_dy_5_63_4_fu_3448.read(): ref_patch_dy_5_63_60_fu_3672.read());
}

void batch_align2D_region::thread_tmp_996_fu_30413_p3() {
    tmp_996_fu_30413_p3 = (!tmp_984_fu_30321_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_984_fu_30321_p2.read()[0].to_bool())? ref_patch_dy_5_63_12_fu_3480.read(): tmp_995_fu_30405_p3.read());
}

void batch_align2D_region::thread_tmp_997_fu_30421_p3() {
    tmp_997_fu_30421_p3 = (!tmp_986_fu_30335_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_986_fu_30335_p2.read()[0].to_bool())? ref_patch_dy_5_63_20_fu_3512.read(): tmp_996_fu_30413_p3.read());
}

void batch_align2D_region::thread_tmp_998_fu_30429_p3() {
    tmp_998_fu_30429_p3 = (!tmp_988_fu_30349_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_988_fu_30349_p2.read()[0].to_bool())? ref_patch_dy_5_63_28_fu_3544.read(): tmp_997_fu_30421_p3.read());
}

void batch_align2D_region::thread_tmp_999_fu_30437_p3() {
    tmp_999_fu_30437_p3 = (!tmp_990_fu_30363_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_990_fu_30363_p2.read()[0].to_bool())? ref_patch_dy_5_63_36_fu_3576.read(): tmp_998_fu_30429_p3.read());
}

void batch_align2D_region::thread_tmp_V_10_fu_16309_p1() {
    tmp_V_10_fu_16309_p1 = p_Val2_11_fu_16295_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_11_fu_16263_p4() {
    tmp_V_11_fu_16263_p4 = p_Val2_10_fu_16259_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_12_fu_16273_p1() {
    tmp_V_12_fu_16273_p1 = p_Val2_10_fu_16259_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_13_fu_19466_p4() {
    tmp_V_13_fu_19466_p4 = p_Val2_13_fu_19462_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_14_fu_19476_p1() {
    tmp_V_14_fu_19476_p1 = p_Val2_13_fu_19462_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_15_fu_19430_p4() {
    tmp_V_15_fu_19430_p4 = p_Val2_12_fu_19426_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_16_fu_19440_p1() {
    tmp_V_16_fu_19440_p1 = p_Val2_12_fu_19426_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_17_fu_22633_p4() {
    tmp_V_17_fu_22633_p4 = p_Val2_15_fu_22629_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_18_fu_22643_p1() {
    tmp_V_18_fu_22643_p1 = p_Val2_15_fu_22629_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_19_fu_22597_p4() {
    tmp_V_19_fu_22597_p4 = p_Val2_14_fu_22593_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_20_fu_22607_p1() {
    tmp_V_20_fu_22607_p1 = p_Val2_14_fu_22593_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_21_fu_25800_p4() {
    tmp_V_21_fu_25800_p4 = p_Val2_17_fu_25796_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_22_fu_25810_p1() {
    tmp_V_22_fu_25810_p1 = p_Val2_17_fu_25796_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_23_fu_25764_p4() {
    tmp_V_23_fu_25764_p4 = p_Val2_16_fu_25760_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_24_fu_25774_p1() {
    tmp_V_24_fu_25774_p1 = p_Val2_16_fu_25760_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_25_fu_28968_p4() {
    tmp_V_25_fu_28968_p4 = p_Val2_19_fu_28964_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_26_fu_28978_p1() {
    tmp_V_26_fu_28978_p1 = p_Val2_19_fu_28964_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_27_fu_28932_p4() {
    tmp_V_27_fu_28932_p4 = p_Val2_18_fu_28928_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_28_fu_28942_p1() {
    tmp_V_28_fu_28942_p1 = p_Val2_18_fu_28928_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_29_fu_32135_p4() {
    tmp_V_29_fu_32135_p4 = p_Val2_21_fu_32131_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_30_fu_32145_p1() {
    tmp_V_30_fu_32145_p1 = p_Val2_21_fu_32131_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_31_fu_32099_p4() {
    tmp_V_31_fu_32099_p4 = p_Val2_20_fu_32095_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_32_fu_32109_p1() {
    tmp_V_32_fu_32109_p1 = p_Val2_20_fu_32095_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_33_fu_35302_p4() {
    tmp_V_33_fu_35302_p4 = p_Val2_23_fu_35298_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_34_fu_35312_p1() {
    tmp_V_34_fu_35312_p1 = p_Val2_23_fu_35298_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_35_fu_35266_p4() {
    tmp_V_35_fu_35266_p4 = p_Val2_22_fu_35262_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_36_fu_35276_p1() {
    tmp_V_36_fu_35276_p1 = p_Val2_22_fu_35262_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_6_fu_13142_p1() {
    tmp_V_6_fu_13142_p1 = p_Val2_9_fu_13128_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_7_fu_13096_p4() {
    tmp_V_7_fu_13096_p4 = p_Val2_s_fu_13092_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_8_fu_13106_p1() {
    tmp_V_8_fu_13106_p1 = p_Val2_s_fu_13092_p1.read().range(23-1, 0);
}

void batch_align2D_region::thread_tmp_V_9_fu_16299_p4() {
    tmp_V_9_fu_16299_p4 = p_Val2_11_fu_16295_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_V_fu_13132_p4() {
    tmp_V_fu_13132_p4 = p_Val2_9_fu_13128_p1.read().range(30, 23);
}

void batch_align2D_region::thread_tmp_cast_fu_11859_p1() {
    tmp_cast_fu_11859_p1 = esl_zext<64,10>(tmp_97_reg_37851_pp0_iter1_reg.read());
}

void batch_align2D_region::thread_tmp_fu_11773_p1() {
    tmp_fu_11773_p1 = esl_zext<64,30>(my_inv_out9_fu_11763_p4.read());
}

void batch_align2D_region::thread_tmp_i_i10_fu_28946_p2() {
    tmp_i_i10_fu_28946_p2 = (!tmp_V_27_fu_28932_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_27_fu_28932_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i11_fu_28982_p2() {
    tmp_i_i11_fu_28982_p2 = (!tmp_V_25_fu_28968_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_25_fu_28968_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i12_fu_32113_p2() {
    tmp_i_i12_fu_32113_p2 = (!tmp_V_31_fu_32099_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_31_fu_32099_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i13_fu_32149_p2() {
    tmp_i_i13_fu_32149_p2 = (!tmp_V_29_fu_32135_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_29_fu_32135_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i14_fu_35280_p2() {
    tmp_i_i14_fu_35280_p2 = (!tmp_V_35_fu_35266_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_35_fu_35266_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i15_fu_35316_p2() {
    tmp_i_i15_fu_35316_p2 = (!tmp_V_33_fu_35302_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_33_fu_35302_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i1_fu_16277_p2() {
    tmp_i_i1_fu_16277_p2 = (!tmp_V_11_fu_16263_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_11_fu_16263_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i2_fu_16313_p2() {
    tmp_i_i2_fu_16313_p2 = (!tmp_V_9_fu_16299_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_9_fu_16299_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i3_fu_19444_p2() {
    tmp_i_i3_fu_19444_p2 = (!tmp_V_15_fu_19430_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_15_fu_19430_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i4_fu_13110_p2() {
    tmp_i_i4_fu_13110_p2 = (!tmp_V_7_fu_13096_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_7_fu_13096_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i5_fu_19480_p2() {
    tmp_i_i5_fu_19480_p2 = (!tmp_V_13_fu_19466_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_13_fu_19466_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i6_fu_22611_p2() {
    tmp_i_i6_fu_22611_p2 = (!tmp_V_19_fu_22597_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_19_fu_22597_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i7_fu_22647_p2() {
    tmp_i_i7_fu_22647_p2 = (!tmp_V_17_fu_22633_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_17_fu_22633_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i8_fu_25778_p2() {
    tmp_i_i8_fu_25778_p2 = (!tmp_V_23_fu_25764_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_23_fu_25764_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i9_fu_25814_p2() {
    tmp_i_i9_fu_25814_p2 = (!tmp_V_21_fu_25800_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_21_fu_25800_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_i_i_fu_13146_p2() {
    tmp_i_i_fu_13146_p2 = (!tmp_V_fu_13132_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_fu_13132_p4.read() == ap_const_lv8_FF);
}

void batch_align2D_region::thread_tmp_s_fu_12020_p1() {
    tmp_s_fu_12020_p1 = esl_zext<64,10>(phi_urem_reg_7252.read());
}

void batch_align2D_region::thread_x_2_cast1_fu_18622_p1() {
    x_2_cast1_fu_18622_p1 = esl_zext<8,3>(tmp_1408_reg_42074.read());
}

void batch_align2D_region::thread_x_2_cast_fu_18512_p1() {
    x_2_cast_fu_18512_p1 = esl_zext<5,3>(tmp_1408_fu_18504_p1.read());
}

void batch_align2D_region::thread_x_3_cast1_fu_21789_p1() {
    x_3_cast1_fu_21789_p1 = esl_zext<8,3>(tmp_1448_reg_43742.read());
}

void batch_align2D_region::thread_x_3_cast_fu_21679_p1() {
    x_3_cast_fu_21679_p1 = esl_zext<5,3>(tmp_1448_fu_21671_p1.read());
}

void batch_align2D_region::thread_x_4_cast1_fu_24956_p1() {
    x_4_cast1_fu_24956_p1 = esl_zext<8,3>(tmp_1459_reg_45405.read());
}

void batch_align2D_region::thread_x_4_cast_fu_24840_p1() {
    x_4_cast_fu_24840_p1 = esl_zext<5,3>(tmp_1459_fu_24832_p1.read());
}

void batch_align2D_region::thread_x_5_cast1_fu_28124_p1() {
    x_5_cast1_fu_28124_p1 = esl_zext<8,3>(tmp_1470_reg_47067.read());
}

void batch_align2D_region::thread_x_5_cast_fu_28008_p1() {
    x_5_cast_fu_28008_p1 = esl_zext<5,3>(tmp_1470_fu_28000_p1.read());
}

void batch_align2D_region::thread_x_6_cast1_fu_31291_p1() {
    x_6_cast1_fu_31291_p1 = esl_zext<8,3>(tmp_1481_reg_48735.read());
}

void batch_align2D_region::thread_x_6_cast_fu_31175_p1() {
    x_6_cast_fu_31175_p1 = esl_zext<5,3>(tmp_1481_fu_31167_p1.read());
}

void batch_align2D_region::thread_x_7_cast1_fu_34458_p1() {
    x_7_cast1_fu_34458_p1 = esl_zext<8,3>(tmp_1492_reg_50408.read());
}

void batch_align2D_region::thread_x_7_cast_fu_34348_p1() {
    x_7_cast_fu_34348_p1 = esl_zext<5,3>(tmp_1492_fu_34340_p1.read());
}

void batch_align2D_region::thread_x_cast1_171_fu_15455_p1() {
    x_cast1_171_fu_15455_p1 = esl_zext<8,3>(tmp_1393_reg_40406.read());
}

void batch_align2D_region::thread_x_cast1_fu_12288_p1() {
    x_cast1_fu_12288_p1 = esl_zext<8,3>(tmp_1379_reg_38738.read());
}

void batch_align2D_region::thread_x_cast_172_fu_15345_p1() {
    x_cast_172_fu_15345_p1 = esl_zext<5,3>(tmp_1393_fu_15337_p1.read());
}

void batch_align2D_region::thread_x_cast_fu_12178_p1() {
    x_cast_fu_12178_p1 = esl_zext<5,3>(tmp_1379_fu_12170_p1.read());
}

void batch_align2D_region::thread_y_0_i_1_cast_fu_16375_p1() {
    y_0_i_1_cast_fu_16375_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_1_phi_fu_7784_p4.read());
}

void batch_align2D_region::thread_y_0_i_2_cast_fu_19542_p1() {
    y_0_i_2_cast_fu_19542_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_2_phi_fu_8127_p4.read());
}

void batch_align2D_region::thread_y_0_i_3_cast_fu_22709_p1() {
    y_0_i_3_cast_fu_22709_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_3_phi_fu_8470_p4.read());
}

void batch_align2D_region::thread_y_0_i_4_cast_fu_25876_p1() {
    y_0_i_4_cast_fu_25876_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_4_phi_fu_8814_p4.read());
}

void batch_align2D_region::thread_y_0_i_5_cast_fu_29044_p1() {
    y_0_i_5_cast_fu_29044_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_5_phi_fu_9158_p4.read());
}

void batch_align2D_region::thread_y_0_i_6_cast_fu_32211_p1() {
    y_0_i_6_cast_fu_32211_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_6_phi_fu_9502_p4.read());
}

void batch_align2D_region::thread_y_0_i_7_cast_fu_35378_p1() {
    y_0_i_7_cast_fu_35378_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_7_phi_fu_9845_p4.read());
}

void batch_align2D_region::thread_y_0_i_cast_fu_13208_p1() {
    y_0_i_cast_fu_13208_p1 = esl_zext<6,4>(ap_phi_mux_y_0_i_phi_fu_7441_p4.read());
}

void batch_align2D_region::thread_y_1_1_fu_16369_p2() {
    y_1_1_fu_16369_p2 = (!ap_phi_mux_y_0_i_1_phi_fu_7784_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_1_phi_fu_7784_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_2_fu_19536_p2() {
    y_1_2_fu_19536_p2 = (!ap_phi_mux_y_0_i_2_phi_fu_8127_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_2_phi_fu_8127_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_3_fu_22703_p2() {
    y_1_3_fu_22703_p2 = (!ap_phi_mux_y_0_i_3_phi_fu_8470_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_3_phi_fu_8470_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_4_fu_25870_p2() {
    y_1_4_fu_25870_p2 = (!ap_phi_mux_y_0_i_4_phi_fu_8814_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_4_phi_fu_8814_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_5_fu_29038_p2() {
    y_1_5_fu_29038_p2 = (!ap_phi_mux_y_0_i_5_phi_fu_9158_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_5_phi_fu_9158_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_6_fu_32205_p2() {
    y_1_6_fu_32205_p2 = (!ap_phi_mux_y_0_i_6_phi_fu_9502_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_6_phi_fu_9502_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_7_fu_35372_p2() {
    y_1_7_fu_35372_p2 = (!ap_phi_mux_y_0_i_7_phi_fu_9845_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_7_phi_fu_9845_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D_region::thread_y_1_fu_13202_p2() {
    y_1_fu_13202_p2 = (!ap_phi_mux_y_0_i_phi_fu_7441_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_y_0_i_phi_fu_7441_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

}

