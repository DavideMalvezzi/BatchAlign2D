#include "batch_align2D_region.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D_region::thread_tmp_1260_fu_36236_p2() {
    tmp_1260_fu_36236_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_1261_fu_36242_p3() {
    tmp_1261_fu_36242_p3 = (!tmp_1260_fu_36236_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1260_fu_36236_p2.read()[0].to_bool())? ref_patch_dx_7_63_23_fu_4292.read(): tmp_1259_fu_36228_p3.read());
}

void batch_align2D_region::thread_tmp_1262_fu_36250_p2() {
    tmp_1262_fu_36250_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_1263_fu_36256_p3() {
    tmp_1263_fu_36256_p3 = (!tmp_1262_fu_36250_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1262_fu_36250_p2.read()[0].to_bool())? ref_patch_dx_7_63_30_fu_4320.read(): tmp_1261_fu_36242_p3.read());
}

void batch_align2D_region::thread_tmp_1264_fu_36264_p2() {
    tmp_1264_fu_36264_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_1265_fu_36270_p3() {
    tmp_1265_fu_36270_p3 = (!tmp_1264_fu_36264_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1264_fu_36264_p2.read()[0].to_bool())? ref_patch_dx_7_63_37_fu_4348.read(): tmp_1263_fu_36256_p3.read());
}

void batch_align2D_region::thread_tmp_1266_fu_36278_p2() {
    tmp_1266_fu_36278_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_1267_fu_36284_p3() {
    tmp_1267_fu_36284_p3 = (!tmp_1266_fu_36278_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1266_fu_36278_p2.read()[0].to_bool())? ref_patch_dx_7_63_44_fu_4376.read(): tmp_1265_fu_36270_p3.read());
}

void batch_align2D_region::thread_tmp_1268_fu_36292_p2() {
    tmp_1268_fu_36292_p2 = (!tmp_205_7_1_t_fu_36203_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_1_t_fu_36203_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_1269_fu_36332_p3() {
    tmp_1269_fu_36332_p3 = (!tmp_1256_reg_51108.read()[0].is_01())? sc_lv<32>(): ((tmp_1256_reg_51108.read()[0].to_bool())? ref_patch_dy_7_63_2_fu_4464.read(): ref_patch_dy_7_63_58_fu_4688.read());
}

void batch_align2D_region::thread_tmp_126_1_fu_15523_p2() {
    tmp_126_1_fu_15523_p2 = (!tmp_121_1_cast_fu_15515_p1.read().is_01() || !tmp_125_1_cast_fu_15519_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_1_cast_fu_15515_p1.read()) - sc_biguint<9>(tmp_125_1_cast_fu_15519_p1.read()));
}

void batch_align2D_region::thread_tmp_126_2_fu_18690_p2() {
    tmp_126_2_fu_18690_p2 = (!tmp_121_2_cast_fu_18682_p1.read().is_01() || !tmp_125_2_cast_fu_18686_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_2_cast_fu_18682_p1.read()) - sc_biguint<9>(tmp_125_2_cast_fu_18686_p1.read()));
}

void batch_align2D_region::thread_tmp_126_3_fu_21857_p2() {
    tmp_126_3_fu_21857_p2 = (!tmp_121_3_cast_fu_21849_p1.read().is_01() || !tmp_125_3_cast_fu_21853_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_3_cast_fu_21849_p1.read()) - sc_biguint<9>(tmp_125_3_cast_fu_21853_p1.read()));
}

void batch_align2D_region::thread_tmp_126_4_fu_25024_p2() {
    tmp_126_4_fu_25024_p2 = (!tmp_121_4_cast_fu_25016_p1.read().is_01() || !tmp_125_4_cast_fu_25020_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_4_cast_fu_25016_p1.read()) - sc_biguint<9>(tmp_125_4_cast_fu_25020_p1.read()));
}

void batch_align2D_region::thread_tmp_126_5_fu_28192_p2() {
    tmp_126_5_fu_28192_p2 = (!tmp_121_5_cast_fu_28184_p1.read().is_01() || !tmp_125_5_cast_fu_28188_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_5_cast_fu_28184_p1.read()) - sc_biguint<9>(tmp_125_5_cast_fu_28188_p1.read()));
}

void batch_align2D_region::thread_tmp_126_6_fu_31359_p2() {
    tmp_126_6_fu_31359_p2 = (!tmp_121_6_cast_fu_31351_p1.read().is_01() || !tmp_125_6_cast_fu_31355_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_6_cast_fu_31351_p1.read()) - sc_biguint<9>(tmp_125_6_cast_fu_31355_p1.read()));
}

void batch_align2D_region::thread_tmp_126_7_fu_34526_p2() {
    tmp_126_7_fu_34526_p2 = (!tmp_121_7_cast_fu_34518_p1.read().is_01() || !tmp_125_7_cast_fu_34522_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_121_7_cast_fu_34518_p1.read()) - sc_biguint<9>(tmp_125_7_cast_fu_34522_p1.read()));
}

void batch_align2D_region::thread_tmp_1270_fu_36339_p3() {
    tmp_1270_fu_36339_p3 = (!tmp_1258_reg_51113.read()[0].is_01())? sc_lv<32>(): ((tmp_1258_reg_51113.read()[0].to_bool())? ref_patch_dy_7_63_10_fu_4496.read(): tmp_1269_fu_36332_p3.read());
}

void batch_align2D_region::thread_tmp_1271_fu_36346_p3() {
    tmp_1271_fu_36346_p3 = (!tmp_1260_reg_51118.read()[0].is_01())? sc_lv<32>(): ((tmp_1260_reg_51118.read()[0].to_bool())? ref_patch_dy_7_63_18_fu_4528.read(): tmp_1270_fu_36339_p3.read());
}

void batch_align2D_region::thread_tmp_1272_fu_36353_p3() {
    tmp_1272_fu_36353_p3 = (!tmp_1262_reg_51123.read()[0].is_01())? sc_lv<32>(): ((tmp_1262_reg_51123.read()[0].to_bool())? ref_patch_dy_7_63_26_fu_4560.read(): tmp_1271_fu_36346_p3.read());
}

void batch_align2D_region::thread_tmp_1273_fu_36360_p3() {
    tmp_1273_fu_36360_p3 = (!tmp_1264_reg_51128.read()[0].is_01())? sc_lv<32>(): ((tmp_1264_reg_51128.read()[0].to_bool())? ref_patch_dy_7_63_34_fu_4592.read(): tmp_1272_fu_36353_p3.read());
}

void batch_align2D_region::thread_tmp_1274_fu_36367_p3() {
    tmp_1274_fu_36367_p3 = (!tmp_1266_reg_51133.read()[0].is_01())? sc_lv<32>(): ((tmp_1266_reg_51133.read()[0].to_bool())? ref_patch_dy_7_63_42_fu_4624.read(): tmp_1273_fu_36360_p3.read());
}

void batch_align2D_region::thread_tmp_1275_fu_36434_p2() {
    tmp_1275_fu_36434_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_1276_fu_36440_p3() {
    tmp_1276_fu_36440_p3 = (!tmp_1275_fu_36434_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1275_fu_36434_p2.read()[0].to_bool())? ref_patch_dx_7_63_10_fu_4240.read(): ref_patch_dx_7_63_59_fu_4436.read());
}

void batch_align2D_region::thread_tmp_1277_fu_36448_p2() {
    tmp_1277_fu_36448_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_1278_fu_36454_p3() {
    tmp_1278_fu_36454_p3 = (!tmp_1277_fu_36448_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1277_fu_36448_p2.read()[0].to_bool())? ref_patch_dx_7_63_17_fu_4268.read(): tmp_1276_fu_36440_p3.read());
}

void batch_align2D_region::thread_tmp_1279_fu_36462_p2() {
    tmp_1279_fu_36462_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_127_demorgan_fu_13158_p2() {
    tmp_127_demorgan_fu_13158_p2 = (tmp_i_i_fu_13146_p2.read() & tmp_1_i_i_fu_13152_p2.read());
}

void batch_align2D_region::thread_tmp_1280_fu_36468_p3() {
    tmp_1280_fu_36468_p3 = (!tmp_1279_fu_36462_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1279_fu_36462_p2.read()[0].to_bool())? ref_patch_dx_7_63_24_fu_4296.read(): tmp_1278_fu_36454_p3.read());
}

void batch_align2D_region::thread_tmp_1281_fu_36476_p2() {
    tmp_1281_fu_36476_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_1282_fu_36482_p3() {
    tmp_1282_fu_36482_p3 = (!tmp_1281_fu_36476_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1281_fu_36476_p2.read()[0].to_bool())? ref_patch_dx_7_63_31_fu_4324.read(): tmp_1280_fu_36468_p3.read());
}

void batch_align2D_region::thread_tmp_1283_fu_36490_p2() {
    tmp_1283_fu_36490_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_1284_fu_36496_p3() {
    tmp_1284_fu_36496_p3 = (!tmp_1283_fu_36490_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1283_fu_36490_p2.read()[0].to_bool())? ref_patch_dx_7_63_38_fu_4352.read(): tmp_1282_fu_36482_p3.read());
}

void batch_align2D_region::thread_tmp_1285_fu_36504_p2() {
    tmp_1285_fu_36504_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_1286_fu_36510_p3() {
    tmp_1286_fu_36510_p3 = (!tmp_1285_fu_36504_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1285_fu_36504_p2.read()[0].to_bool())? ref_patch_dx_7_63_45_fu_4380.read(): tmp_1284_fu_36496_p3.read());
}

void batch_align2D_region::thread_tmp_1287_fu_36518_p2() {
    tmp_1287_fu_36518_p2 = (!tmp_205_7_245_t_fu_36429_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_245_t_fu_36429_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_1288_fu_36532_p3() {
    tmp_1288_fu_36532_p3 = (!tmp_1275_fu_36434_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1275_fu_36434_p2.read()[0].to_bool())? ref_patch_dy_7_63_3_fu_4468.read(): ref_patch_dy_7_63_59_fu_4692.read());
}

void batch_align2D_region::thread_tmp_1289_fu_36540_p3() {
    tmp_1289_fu_36540_p3 = (!tmp_1277_fu_36448_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1277_fu_36448_p2.read()[0].to_bool())? ref_patch_dy_7_63_11_fu_4500.read(): tmp_1288_fu_36532_p3.read());
}

void batch_align2D_region::thread_tmp_1290_fu_36548_p3() {
    tmp_1290_fu_36548_p3 = (!tmp_1279_fu_36462_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1279_fu_36462_p2.read()[0].to_bool())? ref_patch_dy_7_63_19_fu_4532.read(): tmp_1289_fu_36540_p3.read());
}

void batch_align2D_region::thread_tmp_1291_fu_36556_p3() {
    tmp_1291_fu_36556_p3 = (!tmp_1281_fu_36476_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1281_fu_36476_p2.read()[0].to_bool())? ref_patch_dy_7_63_27_fu_4564.read(): tmp_1290_fu_36548_p3.read());
}

void batch_align2D_region::thread_tmp_1292_fu_36564_p3() {
    tmp_1292_fu_36564_p3 = (!tmp_1283_fu_36490_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1283_fu_36490_p2.read()[0].to_bool())? ref_patch_dy_7_63_35_fu_4596.read(): tmp_1291_fu_36556_p3.read());
}

void batch_align2D_region::thread_tmp_1293_fu_36572_p3() {
    tmp_1293_fu_36572_p3 = (!tmp_1285_fu_36504_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1285_fu_36504_p2.read()[0].to_bool())? ref_patch_dy_7_63_43_fu_4628.read(): tmp_1292_fu_36564_p3.read());
}

void batch_align2D_region::thread_tmp_1294_fu_36641_p2() {
    tmp_1294_fu_36641_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_1295_fu_36647_p3() {
    tmp_1295_fu_36647_p3 = (!tmp_1294_fu_36641_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1294_fu_36641_p2.read()[0].to_bool())? ref_patch_dx_7_63_11_fu_4244.read(): ref_patch_dx_7_63_60_fu_4440.read());
}

void batch_align2D_region::thread_tmp_1296_fu_36655_p2() {
    tmp_1296_fu_36655_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_1297_fu_36661_p3() {
    tmp_1297_fu_36661_p3 = (!tmp_1296_fu_36655_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1296_fu_36655_p2.read()[0].to_bool())? ref_patch_dx_7_63_18_fu_4272.read(): tmp_1295_fu_36647_p3.read());
}

void batch_align2D_region::thread_tmp_1298_fu_36669_p2() {
    tmp_1298_fu_36669_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_1299_fu_36675_p3() {
    tmp_1299_fu_36675_p3 = (!tmp_1298_fu_36669_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1298_fu_36669_p2.read()[0].to_bool())? ref_patch_dx_7_63_25_fu_4300.read(): tmp_1297_fu_36661_p3.read());
}

void batch_align2D_region::thread_tmp_129_fu_13212_p2() {
    tmp_129_fu_13212_p2 = (!y_0_i_cast_fu_13208_p1.read().is_01() || !tmp_1388_reg_38952.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_cast_fu_13208_p1.read()) + sc_biguint<6>(tmp_1388_reg_38952.read()));
}

void batch_align2D_region::thread_tmp_1300_fu_36683_p2() {
    tmp_1300_fu_36683_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_1301_fu_36689_p3() {
    tmp_1301_fu_36689_p3 = (!tmp_1300_fu_36683_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1300_fu_36683_p2.read()[0].to_bool())? ref_patch_dx_7_63_32_fu_4328.read(): tmp_1299_fu_36675_p3.read());
}

void batch_align2D_region::thread_tmp_1302_fu_36697_p2() {
    tmp_1302_fu_36697_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_1303_fu_36703_p3() {
    tmp_1303_fu_36703_p3 = (!tmp_1302_fu_36697_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1302_fu_36697_p2.read()[0].to_bool())? ref_patch_dx_7_63_39_fu_4356.read(): tmp_1301_fu_36689_p3.read());
}

void batch_align2D_region::thread_tmp_1304_fu_36711_p2() {
    tmp_1304_fu_36711_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_1305_fu_36717_p3() {
    tmp_1305_fu_36717_p3 = (!tmp_1304_fu_36711_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1304_fu_36711_p2.read()[0].to_bool())? ref_patch_dx_7_63_46_fu_4384.read(): tmp_1303_fu_36703_p3.read());
}

void batch_align2D_region::thread_tmp_1306_fu_36725_p2() {
    tmp_1306_fu_36725_p2 = (!tmp_205_7_3_t_fu_36636_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_3_t_fu_36636_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_1307_fu_36739_p3() {
    tmp_1307_fu_36739_p3 = (!tmp_1294_fu_36641_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1294_fu_36641_p2.read()[0].to_bool())? ref_patch_dy_7_63_4_fu_4472.read(): ref_patch_dy_7_63_60_fu_4696.read());
}

void batch_align2D_region::thread_tmp_1308_fu_36747_p3() {
    tmp_1308_fu_36747_p3 = (!tmp_1296_fu_36655_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1296_fu_36655_p2.read()[0].to_bool())? ref_patch_dy_7_63_12_fu_4504.read(): tmp_1307_fu_36739_p3.read());
}

void batch_align2D_region::thread_tmp_1309_fu_36755_p3() {
    tmp_1309_fu_36755_p3 = (!tmp_1298_fu_36669_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1298_fu_36669_p2.read()[0].to_bool())? ref_patch_dy_7_63_20_fu_4536.read(): tmp_1308_fu_36747_p3.read());
}

void batch_align2D_region::thread_tmp_130_fu_13217_p3() {
    tmp_130_fu_13217_p3 = esl_concat<6,5>(tmp_129_fu_13212_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_1310_fu_36763_p3() {
    tmp_1310_fu_36763_p3 = (!tmp_1300_fu_36683_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1300_fu_36683_p2.read()[0].to_bool())? ref_patch_dy_7_63_28_fu_4568.read(): tmp_1309_fu_36755_p3.read());
}

void batch_align2D_region::thread_tmp_1311_fu_36771_p3() {
    tmp_1311_fu_36771_p3 = (!tmp_1302_fu_36697_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1302_fu_36697_p2.read()[0].to_bool())? ref_patch_dy_7_63_36_fu_4600.read(): tmp_1310_fu_36763_p3.read());
}

void batch_align2D_region::thread_tmp_1312_fu_36779_p3() {
    tmp_1312_fu_36779_p3 = (!tmp_1304_fu_36711_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1304_fu_36711_p2.read()[0].to_bool())? ref_patch_dy_7_63_44_fu_4632.read(): tmp_1311_fu_36771_p3.read());
}

void batch_align2D_region::thread_tmp_1313_fu_36821_p2() {
    tmp_1313_fu_36821_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_1314_fu_36827_p3() {
    tmp_1314_fu_36827_p3 = (!tmp_1313_fu_36821_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1313_fu_36821_p2.read()[0].to_bool())? ref_patch_dx_7_63_12_fu_4248.read(): ref_patch_dx_7_63_61_fu_4444.read());
}

void batch_align2D_region::thread_tmp_1315_fu_36835_p2() {
    tmp_1315_fu_36835_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_1316_fu_36841_p3() {
    tmp_1316_fu_36841_p3 = (!tmp_1315_fu_36835_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1315_fu_36835_p2.read()[0].to_bool())? ref_patch_dx_7_63_19_fu_4276.read(): tmp_1314_fu_36827_p3.read());
}

void batch_align2D_region::thread_tmp_1317_fu_36849_p2() {
    tmp_1317_fu_36849_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_1318_fu_36855_p3() {
    tmp_1318_fu_36855_p3 = (!tmp_1317_fu_36849_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1317_fu_36849_p2.read()[0].to_bool())? ref_patch_dx_7_63_26_fu_4304.read(): tmp_1316_fu_36841_p3.read());
}

void batch_align2D_region::thread_tmp_1319_fu_36863_p2() {
    tmp_1319_fu_36863_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_131_fu_13225_p2() {
    tmp_131_fu_13225_p2 = (!ap_const_lv11_780.is_01() || !tmp_130_fu_13217_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_130_fu_13217_p3.read()));
}

void batch_align2D_region::thread_tmp_1320_fu_36869_p3() {
    tmp_1320_fu_36869_p3 = (!tmp_1319_fu_36863_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1319_fu_36863_p2.read()[0].to_bool())? ref_patch_dx_7_63_33_fu_4332.read(): tmp_1318_fu_36855_p3.read());
}

void batch_align2D_region::thread_tmp_1321_fu_36877_p2() {
    tmp_1321_fu_36877_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_1322_fu_36883_p3() {
    tmp_1322_fu_36883_p3 = (!tmp_1321_fu_36877_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1321_fu_36877_p2.read()[0].to_bool())? ref_patch_dx_7_63_40_fu_4360.read(): tmp_1320_fu_36869_p3.read());
}

void batch_align2D_region::thread_tmp_1323_fu_36891_p2() {
    tmp_1323_fu_36891_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_1324_fu_36897_p3() {
    tmp_1324_fu_36897_p3 = (!tmp_1323_fu_36891_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1323_fu_36891_p2.read()[0].to_bool())? ref_patch_dx_7_63_47_fu_4388.read(): tmp_1322_fu_36883_p3.read());
}

void batch_align2D_region::thread_tmp_1325_fu_36905_p2() {
    tmp_1325_fu_36905_p2 = (!tmp_205_7_4_t_fu_36816_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_4_t_fu_36816_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_1326_fu_36945_p3() {
    tmp_1326_fu_36945_p3 = (!tmp_1313_reg_51193.read()[0].is_01())? sc_lv<32>(): ((tmp_1313_reg_51193.read()[0].to_bool())? ref_patch_dy_7_63_5_fu_4476.read(): ref_patch_dy_7_63_61_fu_4700.read());
}

void batch_align2D_region::thread_tmp_1327_fu_36952_p3() {
    tmp_1327_fu_36952_p3 = (!tmp_1315_reg_51198.read()[0].is_01())? sc_lv<32>(): ((tmp_1315_reg_51198.read()[0].to_bool())? ref_patch_dy_7_63_13_fu_4508.read(): tmp_1326_fu_36945_p3.read());
}

void batch_align2D_region::thread_tmp_1328_fu_36959_p3() {
    tmp_1328_fu_36959_p3 = (!tmp_1317_reg_51203.read()[0].is_01())? sc_lv<32>(): ((tmp_1317_reg_51203.read()[0].to_bool())? ref_patch_dy_7_63_21_fu_4540.read(): tmp_1327_fu_36952_p3.read());
}

void batch_align2D_region::thread_tmp_1329_fu_36966_p3() {
    tmp_1329_fu_36966_p3 = (!tmp_1319_reg_51208.read()[0].is_01())? sc_lv<32>(): ((tmp_1319_reg_51208.read()[0].to_bool())? ref_patch_dy_7_63_29_fu_4572.read(): tmp_1328_fu_36959_p3.read());
}

void batch_align2D_region::thread_tmp_132_fu_13257_p2() {
    tmp_132_fu_13257_p2 = (!p_shl1_cast_fu_13253_p1.read().is_01() || !p_shl9_cast_fu_13243_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl1_cast_fu_13253_p1.read()) + sc_biguint<7>(p_shl9_cast_fu_13243_p1.read()));
}

void batch_align2D_region::thread_tmp_1330_fu_36973_p3() {
    tmp_1330_fu_36973_p3 = (!tmp_1321_reg_51213.read()[0].is_01())? sc_lv<32>(): ((tmp_1321_reg_51213.read()[0].to_bool())? ref_patch_dy_7_63_37_fu_4604.read(): tmp_1329_fu_36966_p3.read());
}

void batch_align2D_region::thread_tmp_1331_fu_36980_p3() {
    tmp_1331_fu_36980_p3 = (!tmp_1323_reg_51218.read()[0].is_01())? sc_lv<32>(): ((tmp_1323_reg_51218.read()[0].to_bool())? ref_patch_dy_7_63_45_fu_4636.read(): tmp_1330_fu_36973_p3.read());
}

void batch_align2D_region::thread_tmp_1332_fu_37047_p2() {
    tmp_1332_fu_37047_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_1333_fu_37053_p3() {
    tmp_1333_fu_37053_p3 = (!tmp_1332_fu_37047_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1332_fu_37047_p2.read()[0].to_bool())? ref_patch_dx_7_63_13_fu_4252.read(): ref_patch_dx_7_63_62_fu_4448.read());
}

void batch_align2D_region::thread_tmp_1334_fu_37061_p2() {
    tmp_1334_fu_37061_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_1335_fu_37067_p3() {
    tmp_1335_fu_37067_p3 = (!tmp_1334_fu_37061_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1334_fu_37061_p2.read()[0].to_bool())? ref_patch_dx_7_63_20_fu_4280.read(): tmp_1333_fu_37053_p3.read());
}

void batch_align2D_region::thread_tmp_1336_fu_37075_p2() {
    tmp_1336_fu_37075_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_1337_fu_37081_p3() {
    tmp_1337_fu_37081_p3 = (!tmp_1336_fu_37075_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1336_fu_37075_p2.read()[0].to_bool())? ref_patch_dx_7_63_27_fu_4308.read(): tmp_1335_fu_37067_p3.read());
}

void batch_align2D_region::thread_tmp_1338_fu_37089_p2() {
    tmp_1338_fu_37089_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_1339_fu_37095_p3() {
    tmp_1339_fu_37095_p3 = (!tmp_1338_fu_37089_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1338_fu_37089_p2.read()[0].to_bool())? ref_patch_dx_7_63_34_fu_4336.read(): tmp_1337_fu_37081_p3.read());
}

void batch_align2D_region::thread_tmp_133_fu_13354_p1() {
    tmp_133_fu_13354_p1 = esl_zext<32,8>(reg_10957.read());
}

void batch_align2D_region::thread_tmp_1340_fu_37103_p2() {
    tmp_1340_fu_37103_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_1341_fu_37109_p3() {
    tmp_1341_fu_37109_p3 = (!tmp_1340_fu_37103_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1340_fu_37103_p2.read()[0].to_bool())? ref_patch_dx_7_63_41_fu_4364.read(): tmp_1339_fu_37095_p3.read());
}

void batch_align2D_region::thread_tmp_1342_fu_37117_p2() {
    tmp_1342_fu_37117_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_1343_fu_37123_p3() {
    tmp_1343_fu_37123_p3 = (!tmp_1342_fu_37117_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1342_fu_37117_p2.read()[0].to_bool())? ref_patch_dx_7_63_48_fu_4392.read(): tmp_1341_fu_37109_p3.read());
}

void batch_align2D_region::thread_tmp_1344_fu_37131_p2() {
    tmp_1344_fu_37131_p2 = (!tmp_205_7_5_t_fu_37042_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_5_t_fu_37042_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_1345_fu_37145_p3() {
    tmp_1345_fu_37145_p3 = (!tmp_1332_fu_37047_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1332_fu_37047_p2.read()[0].to_bool())? ref_patch_dy_7_63_6_fu_4480.read(): ref_patch_dy_7_63_62_fu_4704.read());
}

void batch_align2D_region::thread_tmp_1346_fu_37153_p3() {
    tmp_1346_fu_37153_p3 = (!tmp_1334_fu_37061_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1334_fu_37061_p2.read()[0].to_bool())? ref_patch_dy_7_63_14_fu_4512.read(): tmp_1345_fu_37145_p3.read());
}

void batch_align2D_region::thread_tmp_1347_fu_37161_p3() {
    tmp_1347_fu_37161_p3 = (!tmp_1336_fu_37075_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1336_fu_37075_p2.read()[0].to_bool())? ref_patch_dy_7_63_22_fu_4544.read(): tmp_1346_fu_37153_p3.read());
}

void batch_align2D_region::thread_tmp_1348_fu_37169_p3() {
    tmp_1348_fu_37169_p3 = (!tmp_1338_fu_37089_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1338_fu_37089_p2.read()[0].to_bool())? ref_patch_dy_7_63_30_fu_4576.read(): tmp_1347_fu_37161_p3.read());
}

void batch_align2D_region::thread_tmp_1349_fu_37177_p3() {
    tmp_1349_fu_37177_p3 = (!tmp_1340_fu_37103_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1340_fu_37103_p2.read()[0].to_bool())? ref_patch_dy_7_63_38_fu_4608.read(): tmp_1348_fu_37169_p3.read());
}

void batch_align2D_region::thread_tmp_1350_fu_37185_p3() {
    tmp_1350_fu_37185_p3 = (!tmp_1342_fu_37117_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1342_fu_37117_p2.read()[0].to_bool())? ref_patch_dy_7_63_46_fu_4640.read(): tmp_1349_fu_37177_p3.read());
}

void batch_align2D_region::thread_tmp_1351_fu_37254_p2() {
    tmp_1351_fu_37254_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_1352_fu_37260_p3() {
    tmp_1352_fu_37260_p3 = (!tmp_1351_fu_37254_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1351_fu_37254_p2.read()[0].to_bool())? ref_patch_dx_7_63_14_fu_4256.read(): ref_patch_dx_7_63_63_fu_4452.read());
}

void batch_align2D_region::thread_tmp_1353_fu_37268_p2() {
    tmp_1353_fu_37268_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_1354_fu_37274_p3() {
    tmp_1354_fu_37274_p3 = (!tmp_1353_fu_37268_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1353_fu_37268_p2.read()[0].to_bool())? ref_patch_dx_7_63_21_fu_4284.read(): tmp_1352_fu_37260_p3.read());
}

void batch_align2D_region::thread_tmp_1355_fu_37282_p2() {
    tmp_1355_fu_37282_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_1356_fu_37288_p3() {
    tmp_1356_fu_37288_p3 = (!tmp_1355_fu_37282_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1355_fu_37282_p2.read()[0].to_bool())? ref_patch_dx_7_63_28_fu_4312.read(): tmp_1354_fu_37274_p3.read());
}

void batch_align2D_region::thread_tmp_1357_fu_37296_p2() {
    tmp_1357_fu_37296_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_1358_fu_37302_p3() {
    tmp_1358_fu_37302_p3 = (!tmp_1357_fu_37296_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1357_fu_37296_p2.read()[0].to_bool())? ref_patch_dx_7_63_35_fu_4340.read(): tmp_1356_fu_37288_p3.read());
}

void batch_align2D_region::thread_tmp_1359_fu_37310_p2() {
    tmp_1359_fu_37310_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_1360_fu_37316_p3() {
    tmp_1360_fu_37316_p3 = (!tmp_1359_fu_37310_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1359_fu_37310_p2.read()[0].to_bool())? ref_patch_dx_7_63_42_fu_4368.read(): tmp_1358_fu_37302_p3.read());
}

void batch_align2D_region::thread_tmp_1361_fu_37324_p2() {
    tmp_1361_fu_37324_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_1362_fu_37330_p3() {
    tmp_1362_fu_37330_p3 = (!tmp_1361_fu_37324_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1361_fu_37324_p2.read()[0].to_bool())? ref_patch_dx_7_63_49_fu_4396.read(): tmp_1360_fu_37316_p3.read());
}

void batch_align2D_region::thread_tmp_1363_fu_37338_p2() {
    tmp_1363_fu_37338_p2 = (!tmp_205_7_646_t_fu_37249_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_7_646_t_fu_37249_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_1364_fu_37352_p3() {
    tmp_1364_fu_37352_p3 = (!tmp_1351_fu_37254_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1351_fu_37254_p2.read()[0].to_bool())? ref_patch_dy_7_63_7_fu_4484.read(): ref_patch_dy_7_63_63_fu_4708.read());
}

void batch_align2D_region::thread_tmp_1365_fu_37360_p3() {
    tmp_1365_fu_37360_p3 = (!tmp_1353_fu_37268_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1353_fu_37268_p2.read()[0].to_bool())? ref_patch_dy_7_63_15_fu_4516.read(): tmp_1364_fu_37352_p3.read());
}

void batch_align2D_region::thread_tmp_1366_fu_37368_p3() {
    tmp_1366_fu_37368_p3 = (!tmp_1355_fu_37282_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1355_fu_37282_p2.read()[0].to_bool())? ref_patch_dy_7_63_23_fu_4548.read(): tmp_1365_fu_37360_p3.read());
}

void batch_align2D_region::thread_tmp_1367_fu_37376_p3() {
    tmp_1367_fu_37376_p3 = (!tmp_1357_fu_37296_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1357_fu_37296_p2.read()[0].to_bool())? ref_patch_dy_7_63_31_fu_4580.read(): tmp_1366_fu_37368_p3.read());
}

void batch_align2D_region::thread_tmp_1368_fu_37384_p3() {
    tmp_1368_fu_37384_p3 = (!tmp_1359_fu_37310_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1359_fu_37310_p2.read()[0].to_bool())? ref_patch_dy_7_63_39_fu_4612.read(): tmp_1367_fu_37376_p3.read());
}

void batch_align2D_region::thread_tmp_1369_fu_37392_p3() {
    tmp_1369_fu_37392_p3 = (!tmp_1361_fu_37324_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1361_fu_37324_p2.read()[0].to_bool())? ref_patch_dy_7_63_47_fu_4644.read(): tmp_1368_fu_37384_p3.read());
}

void batch_align2D_region::thread_tmp_136_1_fu_16229_p2() {
    tmp_136_1_fu_16229_p2 = (!iter_0_i_1_reg_7721.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_1_reg_7721.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_2_fu_19396_p2() {
    tmp_136_2_fu_19396_p2 = (!iter_0_i_2_reg_8064.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_2_reg_8064.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_3_fu_22563_p2() {
    tmp_136_3_fu_22563_p2 = (!iter_0_i_3_reg_8407.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_3_reg_8407.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_4_fu_25730_p2() {
    tmp_136_4_fu_25730_p2 = (!iter_0_i_4_reg_8751.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_4_reg_8751.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_5_fu_28898_p2() {
    tmp_136_5_fu_28898_p2 = (!iter_0_i_5_reg_9095.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_5_reg_9095.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_6_fu_32065_p2() {
    tmp_136_6_fu_32065_p2 = (!iter_0_i_6_reg_9439.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_6_reg_9439.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_7_fu_35232_p2() {
    tmp_136_7_fu_35232_p2 = (!iter_0_i_7_reg_9782.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(iter_0_i_7_reg_9782.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void batch_align2D_region::thread_tmp_136_fu_13399_p1() {
    tmp_136_fu_13399_p1 = esl_zext<32,8>(reg_10957.read());
}

void batch_align2D_region::thread_tmp_1374_fu_11892_p1() {
    tmp_1374_fu_11892_p1 = indvar1_reg_7219.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_1375_fu_12074_p1() {
    tmp_1375_fu_12074_p1 = indvar6_reg_7264.read().range(1-1, 0);
}

void batch_align2D_region::thread_tmp_1377_fu_12038_p2() {
    tmp_1377_fu_12038_p2 = (!next_urem_fu_12032_p2.read().is_01() || !ap_const_lv10_64.is_01())? sc_lv<1>(): (sc_biguint<10>(next_urem_fu_12032_p2.read()) < sc_biguint<10>(ap_const_lv10_64));
}

void batch_align2D_region::thread_tmp_1378_fu_12182_p4() {
    tmp_1378_fu_12182_p4 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1379_fu_12170_p1() {
    tmp_1379_fu_12170_p1 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1380_fu_12174_p1() {
    tmp_1380_fu_12174_p1 = ap_phi_mux_i_0_i_phi_fu_7279_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1382_fu_15349_p4() {
    tmp_1382_fu_15349_p4 = ap_phi_mux_i_0_i_1_phi_fu_7622_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1384_fu_18516_p4() {
    tmp_1384_fu_18516_p4 = ap_phi_mux_i_0_i_2_phi_fu_7965_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1385_fu_21683_p4() {
    tmp_1385_fu_21683_p4 = ap_phi_mux_i_0_i_3_phi_fu_8308_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1386_fu_24844_p4() {
    tmp_1386_fu_24844_p4 = ap_phi_mux_i_0_i_4_phi_fu_8651_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1387_fu_13178_p1() {
    tmp_1387_fu_13178_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1388_fu_13182_p1() {
    tmp_1388_fu_13182_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1389_fu_13231_p1() {
    tmp_1389_fu_13231_p1 = ap_phi_mux_y_0_i_phi_fu_7441_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1390_fu_28012_p4() {
    tmp_1390_fu_28012_p4 = ap_phi_mux_i_0_i_5_phi_fu_8995_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1391_fu_13247_p2() {
    tmp_1391_fu_13247_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_phi_fu_7441_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1392_fu_13284_p1() {
    tmp_1392_fu_13284_p1 = ap_phi_mux_pos_0_i_phi_fu_7429_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1393_fu_15337_p1() {
    tmp_1393_fu_15337_p1 = ap_phi_mux_i_0_i_1_phi_fu_7622_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1394_fu_31179_p4() {
    tmp_1394_fu_31179_p4 = ap_phi_mux_i_0_i_6_phi_fu_9339_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1395_fu_15341_p1() {
    tmp_1395_fu_15341_p1 = ap_phi_mux_i_0_i_1_phi_fu_7622_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1398_fu_34352_p4() {
    tmp_1398_fu_34352_p4 = ap_phi_mux_i_0_i_7_phi_fu_9683_p4.read().range(5, 3);
}

void batch_align2D_region::thread_tmp_1399_fu_37511_p2() {
    tmp_1399_fu_37511_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_0);
}

void batch_align2D_region::thread_tmp_139_fu_13444_p1() {
    tmp_139_fu_13444_p1 = esl_zext<32,8>(reg_10966.read());
}

void batch_align2D_region::thread_tmp_13_fu_13722_p2() {
    tmp_13_fu_13722_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_1400_fu_37517_p3() {
    tmp_1400_fu_37517_p3 = (!tmp_1399_fu_37511_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1399_fu_37511_p2.read()[0].to_bool())? reg_10623.read(): reg_11460.read());
}

void batch_align2D_region::thread_tmp_1401_fu_16345_p1() {
    tmp_1401_fu_16345_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1402_fu_37525_p2() {
    tmp_1402_fu_37525_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_1);
}

void batch_align2D_region::thread_tmp_1403_fu_16349_p1() {
    tmp_1403_fu_16349_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1404_fu_16398_p1() {
    tmp_1404_fu_16398_p1 = ap_phi_mux_y_0_i_1_phi_fu_7784_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1405_fu_16414_p2() {
    tmp_1405_fu_16414_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_1_phi_fu_7784_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1406_fu_37531_p3() {
    tmp_1406_fu_37531_p3 = (!tmp_1402_fu_37525_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1402_fu_37525_p2.read()[0].to_bool())? reg_10837.read(): tmp_1400_fu_37517_p3.read());
}

void batch_align2D_region::thread_tmp_1407_fu_16451_p1() {
    tmp_1407_fu_16451_p1 = ap_phi_mux_pos_0_i_1_phi_fu_7772_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1408_fu_18504_p1() {
    tmp_1408_fu_18504_p1 = ap_phi_mux_i_0_i_2_phi_fu_7965_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1409_fu_18508_p1() {
    tmp_1409_fu_18508_p1 = ap_phi_mux_i_0_i_2_phi_fu_7965_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1410_fu_37539_p2() {
    tmp_1410_fu_37539_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_2);
}

void batch_align2D_region::thread_tmp_1411_fu_37545_p3() {
    tmp_1411_fu_37545_p3 = (!tmp_1410_fu_37539_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1410_fu_37539_p2.read()[0].to_bool())? reg_10638.read(): tmp_1406_fu_37531_p3.read());
}

void batch_align2D_region::thread_tmp_1412_fu_37553_p2() {
    tmp_1412_fu_37553_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_3);
}

void batch_align2D_region::thread_tmp_1413_fu_37559_p3() {
    tmp_1413_fu_37559_p3 = (!tmp_1412_fu_37553_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1412_fu_37553_p2.read()[0].to_bool())? reg_10852.read(): tmp_1411_fu_37545_p3.read());
}

void batch_align2D_region::thread_tmp_1414_fu_37567_p2() {
    tmp_1414_fu_37567_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_4);
}

void batch_align2D_region::thread_tmp_1415_fu_37573_p3() {
    tmp_1415_fu_37573_p3 = (!tmp_1414_fu_37567_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1414_fu_37567_p2.read()[0].to_bool())? reg_10655.read(): tmp_1413_fu_37559_p3.read());
}

void batch_align2D_region::thread_tmp_1416_fu_37581_p2() {
    tmp_1416_fu_37581_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_5);
}

void batch_align2D_region::thread_tmp_1417_fu_37587_p3() {
    tmp_1417_fu_37587_p3 = (!tmp_1416_fu_37581_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1416_fu_37581_p2.read()[0].to_bool())? reg_11148.read(): tmp_1415_fu_37573_p3.read());
}

void batch_align2D_region::thread_tmp_1418_fu_37595_p2() {
    tmp_1418_fu_37595_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_6);
}

void batch_align2D_region::thread_tmp_1419_fu_37601_p3() {
    tmp_1419_fu_37601_p3 = (!tmp_1418_fu_37595_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1418_fu_37595_p2.read()[0].to_bool())? reg_10675.read(): tmp_1417_fu_37587_p3.read());
}

void batch_align2D_region::thread_tmp_1420_fu_37609_p2() {
    tmp_1420_fu_37609_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_7);
}

void batch_align2D_region::thread_tmp_1421_fu_37615_p3() {
    tmp_1421_fu_37615_p3 = (!tmp_1420_fu_37609_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1420_fu_37609_p2.read()[0].to_bool())? reg_11164.read(): tmp_1419_fu_37601_p3.read());
}

void batch_align2D_region::thread_tmp_1422_fu_37623_p2() {
    tmp_1422_fu_37623_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_8);
}

void batch_align2D_region::thread_tmp_1423_fu_37629_p3() {
    tmp_1423_fu_37629_p3 = (!tmp_1422_fu_37623_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1422_fu_37623_p2.read()[0].to_bool())? reg_10697.read(): tmp_1421_fu_37615_p3.read());
}

void batch_align2D_region::thread_tmp_1424_fu_37637_p2() {
    tmp_1424_fu_37637_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_9);
}

void batch_align2D_region::thread_tmp_1425_fu_37643_p3() {
    tmp_1425_fu_37643_p3 = (!tmp_1424_fu_37637_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1424_fu_37637_p2.read()[0].to_bool())? reg_11183.read(): tmp_1423_fu_37629_p3.read());
}

void batch_align2D_region::thread_tmp_1426_fu_37651_p2() {
    tmp_1426_fu_37651_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_A);
}

void batch_align2D_region::thread_tmp_1427_fu_37657_p3() {
    tmp_1427_fu_37657_p3 = (!tmp_1426_fu_37651_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1426_fu_37651_p2.read()[0].to_bool())? reg_11045.read(): tmp_1425_fu_37643_p3.read());
}

void batch_align2D_region::thread_tmp_1428_fu_37665_p2() {
    tmp_1428_fu_37665_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_B);
}

void batch_align2D_region::thread_tmp_1429_fu_37671_p3() {
    tmp_1429_fu_37671_p3 = (!tmp_1428_fu_37665_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1428_fu_37665_p2.read()[0].to_bool())? reg_11285.read(): tmp_1427_fu_37657_p3.read());
}

void batch_align2D_region::thread_tmp_142_fu_13469_p1() {
    tmp_142_fu_13469_p1 = esl_zext<32,8>(reg_10957.read());
}

void batch_align2D_region::thread_tmp_1430_fu_37679_p2() {
    tmp_1430_fu_37679_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_C);
}

void batch_align2D_region::thread_tmp_1431_fu_37685_p3() {
    tmp_1431_fu_37685_p3 = (!tmp_1430_fu_37679_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1430_fu_37679_p2.read()[0].to_bool())? reg_11070.read(): tmp_1429_fu_37671_p3.read());
}

void batch_align2D_region::thread_tmp_1432_fu_37693_p2() {
    tmp_1432_fu_37693_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_D);
}

void batch_align2D_region::thread_tmp_1433_fu_37699_p3() {
    tmp_1433_fu_37699_p3 = (!tmp_1432_fu_37693_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_1432_fu_37693_p2.read()[0].to_bool())? reg_11317.read(): tmp_1431_fu_37685_p3.read());
}

void batch_align2D_region::thread_tmp_1434_fu_37707_p2() {
    tmp_1434_fu_37707_p2 = (!tmp_1503_fu_37507_p1.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1503_fu_37507_p1.read() == ap_const_lv4_E);
}

void batch_align2D_region::thread_tmp_1443_fu_19512_p1() {
    tmp_1443_fu_19512_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1444_fu_19516_p1() {
    tmp_1444_fu_19516_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1445_fu_19565_p1() {
    tmp_1445_fu_19565_p1 = ap_phi_mux_y_0_i_2_phi_fu_8127_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1446_fu_19581_p2() {
    tmp_1446_fu_19581_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_2_phi_fu_8127_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1447_fu_19618_p1() {
    tmp_1447_fu_19618_p1 = ap_phi_mux_pos_0_i_2_phi_fu_8115_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1448_fu_21671_p1() {
    tmp_1448_fu_21671_p1 = ap_phi_mux_i_0_i_3_phi_fu_8308_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1449_fu_21675_p1() {
    tmp_1449_fu_21675_p1 = ap_phi_mux_i_0_i_3_phi_fu_8308_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_144_1_demorgan_fu_16289_p2() {
    tmp_144_1_demorgan_fu_16289_p2 = (tmp_i_i1_fu_16277_p2.read() & tmp_1_i_i1_fu_16283_p2.read());
}

void batch_align2D_region::thread_tmp_144_2_demorgan_fu_19456_p2() {
    tmp_144_2_demorgan_fu_19456_p2 = (tmp_i_i3_fu_19444_p2.read() & tmp_1_i_i3_fu_19450_p2.read());
}

void batch_align2D_region::thread_tmp_144_3_demorgan_fu_22623_p2() {
    tmp_144_3_demorgan_fu_22623_p2 = (tmp_i_i6_fu_22611_p2.read() & tmp_1_i_i6_fu_22617_p2.read());
}

void batch_align2D_region::thread_tmp_144_4_demorgan_fu_25790_p2() {
    tmp_144_4_demorgan_fu_25790_p2 = (tmp_i_i8_fu_25778_p2.read() & tmp_1_i_i8_fu_25784_p2.read());
}

void batch_align2D_region::thread_tmp_144_5_demorgan_fu_28958_p2() {
    tmp_144_5_demorgan_fu_28958_p2 = (tmp_i_i10_fu_28946_p2.read() & tmp_1_i_i10_fu_28952_p2.read());
}

void batch_align2D_region::thread_tmp_144_6_demorgan_fu_32125_p2() {
    tmp_144_6_demorgan_fu_32125_p2 = (tmp_i_i12_fu_32113_p2.read() & tmp_1_i_i12_fu_32119_p2.read());
}

void batch_align2D_region::thread_tmp_144_7_demorgan_fu_35292_p2() {
    tmp_144_7_demorgan_fu_35292_p2 = (tmp_i_i14_fu_35280_p2.read() & tmp_1_i_i14_fu_35286_p2.read());
}

void batch_align2D_region::thread_tmp_1454_fu_22683_p1() {
    tmp_1454_fu_22683_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1455_fu_22675_p1() {
    tmp_1455_fu_22675_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1456_fu_22732_p1() {
    tmp_1456_fu_22732_p1 = ap_phi_mux_y_0_i_3_phi_fu_8470_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1457_fu_22748_p2() {
    tmp_1457_fu_22748_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_3_phi_fu_8470_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1458_fu_22785_p1() {
    tmp_1458_fu_22785_p1 = ap_phi_mux_pos_0_i_3_phi_fu_8458_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1459_fu_24832_p1() {
    tmp_1459_fu_24832_p1 = ap_phi_mux_i_0_i_4_phi_fu_8651_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_145_fu_13273_p2() {
    tmp_145_fu_13273_p2 = (!ap_const_lv7_B.is_01() || !tmp_132_fu_13257_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_132_fu_13257_p2.read()));
}

void batch_align2D_region::thread_tmp_1460_fu_24836_p1() {
    tmp_1460_fu_24836_p1 = ap_phi_mux_i_0_i_4_phi_fu_8651_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1465_fu_25846_p1() {
    tmp_1465_fu_25846_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1466_fu_25850_p1() {
    tmp_1466_fu_25850_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1467_fu_25899_p1() {
    tmp_1467_fu_25899_p1 = ap_phi_mux_y_0_i_4_phi_fu_8814_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1468_fu_25915_p2() {
    tmp_1468_fu_25915_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_4_phi_fu_8814_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1469_fu_25952_p1() {
    tmp_1469_fu_25952_p1 = ap_phi_mux_pos_0_i_4_phi_fu_8802_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_146_1_demorgan_fu_16325_p2() {
    tmp_146_1_demorgan_fu_16325_p2 = (tmp_i_i2_fu_16313_p2.read() & tmp_1_i_i2_fu_16319_p2.read());
}

void batch_align2D_region::thread_tmp_146_2_demorgan_fu_19492_p2() {
    tmp_146_2_demorgan_fu_19492_p2 = (tmp_i_i5_fu_19480_p2.read() & tmp_1_i_i4_fu_19486_p2.read());
}

void batch_align2D_region::thread_tmp_146_3_demorgan_fu_22659_p2() {
    tmp_146_3_demorgan_fu_22659_p2 = (tmp_i_i7_fu_22647_p2.read() & tmp_1_i_i7_fu_22653_p2.read());
}

void batch_align2D_region::thread_tmp_146_4_demorgan_fu_25826_p2() {
    tmp_146_4_demorgan_fu_25826_p2 = (tmp_i_i9_fu_25814_p2.read() & tmp_1_i_i9_fu_25820_p2.read());
}

void batch_align2D_region::thread_tmp_146_5_demorgan_fu_28994_p2() {
    tmp_146_5_demorgan_fu_28994_p2 = (tmp_i_i11_fu_28982_p2.read() & tmp_1_i_i11_fu_28988_p2.read());
}

void batch_align2D_region::thread_tmp_146_6_demorgan_fu_32161_p2() {
    tmp_146_6_demorgan_fu_32161_p2 = (tmp_i_i13_fu_32149_p2.read() & tmp_1_i_i13_fu_32155_p2.read());
}

void batch_align2D_region::thread_tmp_146_7_demorgan_fu_35328_p2() {
    tmp_146_7_demorgan_fu_35328_p2 = (tmp_i_i15_fu_35316_p2.read() & tmp_1_i_i15_fu_35322_p2.read());
}

void batch_align2D_region::thread_tmp_146_fu_13279_p1() {
    tmp_146_fu_13279_p1 = esl_zext<64,7>(tmp_145_fu_13273_p2.read());
}

void batch_align2D_region::thread_tmp_1470_fu_28000_p1() {
    tmp_1470_fu_28000_p1 = ap_phi_mux_i_0_i_5_phi_fu_8995_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1471_fu_28004_p1() {
    tmp_1471_fu_28004_p1 = ap_phi_mux_i_0_i_5_phi_fu_8995_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1476_fu_29014_p1() {
    tmp_1476_fu_29014_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1477_fu_29018_p1() {
    tmp_1477_fu_29018_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1478_fu_29067_p1() {
    tmp_1478_fu_29067_p1 = ap_phi_mux_y_0_i_5_phi_fu_9158_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1479_fu_29083_p2() {
    tmp_1479_fu_29083_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_5_phi_fu_9158_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_147_1_fu_16331_p1() {
    tmp_147_1_fu_16331_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_2_fu_19498_p1() {
    tmp_147_2_fu_19498_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_3_fu_22665_p1() {
    tmp_147_3_fu_22665_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_4_fu_25832_p1() {
    tmp_147_4_fu_25832_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_5_fu_29000_p1() {
    tmp_147_5_fu_29000_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_6_fu_32167_p1() {
    tmp_147_6_fu_32167_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_7_fu_35334_p1() {
    tmp_147_7_fu_35334_p1 = esl_zext<32,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_cast1_fu_13174_p1() {
    tmp_147_cast1_fu_13174_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_147_fu_13329_p1() {
    tmp_147_fu_13329_p1 = esl_zext<32,8>(ref_patch_with_borde_7_q1.read());
}

void batch_align2D_region::thread_tmp_1480_fu_29120_p1() {
    tmp_1480_fu_29120_p1 = ap_phi_mux_pos_0_i_5_phi_fu_9146_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1481_fu_31167_p1() {
    tmp_1481_fu_31167_p1 = ap_phi_mux_i_0_i_6_phi_fu_9339_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1482_fu_31171_p1() {
    tmp_1482_fu_31171_p1 = ap_phi_mux_i_0_i_6_phi_fu_9339_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1487_fu_32181_p1() {
    tmp_1487_fu_32181_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1488_fu_32185_p1() {
    tmp_1488_fu_32185_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1489_fu_32234_p1() {
    tmp_1489_fu_32234_p1 = ap_phi_mux_y_0_i_6_phi_fu_9502_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1490_fu_32250_p2() {
    tmp_1490_fu_32250_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_6_phi_fu_9502_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1491_fu_32287_p1() {
    tmp_1491_fu_32287_p1 = ap_phi_mux_pos_0_i_6_phi_fu_9490_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1492_fu_34340_p1() {
    tmp_1492_fu_34340_p1 = ap_phi_mux_i_0_i_7_phi_fu_9683_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1493_fu_34344_p1() {
    tmp_1493_fu_34344_p1 = ap_phi_mux_i_0_i_7_phi_fu_9683_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1498_fu_35348_p1() {
    tmp_1498_fu_35348_p1 = reg_10892.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1499_fu_35352_p1() {
    tmp_1499_fu_35352_p1 = reg_10896.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_149_1_fu_16336_p1() {
    tmp_149_1_fu_16336_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_2_fu_19503_p1() {
    tmp_149_2_fu_19503_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_3_fu_22670_p1() {
    tmp_149_3_fu_22670_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_4_fu_25837_p1() {
    tmp_149_4_fu_25837_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_5_fu_29005_p1() {
    tmp_149_5_fu_29005_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_6_fu_32172_p1() {
    tmp_149_6_fu_32172_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_149_7_fu_35339_p1() {
    tmp_149_7_fu_35339_p1 = esl_zext<32,8>(reg_10896.read());
}

void batch_align2D_region::thread_tmp_14_fu_13727_p3() {
    tmp_14_fu_13727_p3 = (!tmp_13_fu_13722_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_13_fu_13722_p2.read()[0].to_bool())? ref_patch_dy_0_63_fu_872.read(): ref_patch_dy_0_63_56_fu_1096.read());
}

void batch_align2D_region::thread_tmp_1500_fu_35401_p1() {
    tmp_1500_fu_35401_p1 = ap_phi_mux_y_0_i_7_phi_fu_9845_p4.read().range(3-1, 0);
}

void batch_align2D_region::thread_tmp_1501_fu_35417_p2() {
    tmp_1501_fu_35417_p2 = (!ap_const_lv4_1.is_01())? sc_lv<4>(): ap_phi_mux_y_0_i_7_phi_fu_9845_p4.read() << (unsigned short)ap_const_lv4_1.to_uint();
}

void batch_align2D_region::thread_tmp_1502_fu_35454_p1() {
    tmp_1502_fu_35454_p1 = ap_phi_mux_pos_0_i_7_phi_fu_9833_p4.read().range(6-1, 0);
}

void batch_align2D_region::thread_tmp_1503_fu_37507_p1() {
    tmp_1503_fu_37507_p1 = indvar8_reg_10022.read().range(4-1, 0);
}

void batch_align2D_region::thread_tmp_155_fu_13998_p3() {
    tmp_155_fu_13998_p3 = (!tmp_43_reg_39412.read()[0].is_01())? sc_lv<32>(): ((tmp_43_reg_39412.read()[0].to_bool())? ref_patch_dy_0_63_41_fu_1036.read(): tmp_122_fu_13991_p3.read());
}

void batch_align2D_region::thread_tmp_156_fu_14038_p2() {
    tmp_156_fu_14038_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_157_fu_14044_p3() {
    tmp_157_fu_14044_p3 = (!tmp_156_fu_14038_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_156_fu_14038_p2.read()[0].to_bool())? ref_patch_dx_0_63_9_fu_652.read(): ref_patch_dx_0_63_58_fu_848.read());
}

void batch_align2D_region::thread_tmp_158_1_cast1_fu_16341_p1() {
    tmp_158_1_cast1_fu_16341_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_2_cast1_fu_19508_p1() {
    tmp_158_2_cast1_fu_19508_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_3_cast1_fu_22679_p1() {
    tmp_158_3_cast1_fu_22679_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_4_cast1_fu_25842_p1() {
    tmp_158_4_cast1_fu_25842_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_5_cast1_fu_29010_p1() {
    tmp_158_5_cast1_fu_29010_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_6_cast1_fu_32177_p1() {
    tmp_158_6_cast1_fu_32177_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_7_cast1_fu_35344_p1() {
    tmp_158_7_cast1_fu_35344_p1 = esl_zext<11,8>(reg_10892.read());
}

void batch_align2D_region::thread_tmp_158_fu_14052_p2() {
    tmp_158_fu_14052_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_159_fu_14058_p3() {
    tmp_159_fu_14058_p3 = (!tmp_158_fu_14052_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_158_fu_14052_p2.read()[0].to_bool())? ref_patch_dx_0_63_16_fu_680.read(): tmp_157_fu_14044_p3.read());
}

void batch_align2D_region::thread_tmp_15_fu_13735_p2() {
    tmp_15_fu_13735_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_160_fu_14066_p2() {
    tmp_160_fu_14066_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_161_fu_14072_p3() {
    tmp_161_fu_14072_p3 = (!tmp_160_fu_14066_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_160_fu_14066_p2.read()[0].to_bool())? ref_patch_dx_0_63_23_fu_708.read(): tmp_159_fu_14058_p3.read());
}

void batch_align2D_region::thread_tmp_162_fu_14080_p2() {
    tmp_162_fu_14080_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_163_fu_14086_p3() {
    tmp_163_fu_14086_p3 = (!tmp_162_fu_14080_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_162_fu_14080_p2.read()[0].to_bool())? ref_patch_dx_0_63_30_fu_736.read(): tmp_161_fu_14072_p3.read());
}

void batch_align2D_region::thread_tmp_16411_1_fu_16379_p2() {
    tmp_16411_1_fu_16379_p2 = (!y_0_i_1_cast_fu_16375_p1.read().is_01() || !tmp_1403_reg_40620.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_1_cast_fu_16375_p1.read()) + sc_biguint<6>(tmp_1403_reg_40620.read()));
}

void batch_align2D_region::thread_tmp_16411_2_fu_19546_p2() {
    tmp_16411_2_fu_19546_p2 = (!y_0_i_2_cast_fu_19542_p1.read().is_01() || !tmp_1444_reg_42288.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_2_cast_fu_19542_p1.read()) + sc_biguint<6>(tmp_1444_reg_42288.read()));
}

void batch_align2D_region::thread_tmp_16411_3_fu_22713_p2() {
    tmp_16411_3_fu_22713_p2 = (!y_0_i_3_cast_fu_22709_p1.read().is_01() || !tmp_1455_reg_43951.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_3_cast_fu_22709_p1.read()) + sc_biguint<6>(tmp_1455_reg_43951.read()));
}

void batch_align2D_region::thread_tmp_16411_4_fu_25880_p2() {
    tmp_16411_4_fu_25880_p2 = (!y_0_i_4_cast_fu_25876_p1.read().is_01() || !tmp_1466_reg_45624.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_4_cast_fu_25876_p1.read()) + sc_biguint<6>(tmp_1466_reg_45624.read()));
}

void batch_align2D_region::thread_tmp_16411_5_fu_29048_p2() {
    tmp_16411_5_fu_29048_p2 = (!y_0_i_5_cast_fu_29044_p1.read().is_01() || !tmp_1477_reg_47286.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_5_cast_fu_29044_p1.read()) + sc_biguint<6>(tmp_1477_reg_47286.read()));
}

void batch_align2D_region::thread_tmp_16411_6_fu_32215_p2() {
    tmp_16411_6_fu_32215_p2 = (!y_0_i_6_cast_fu_32211_p1.read().is_01() || !tmp_1488_reg_48954.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_6_cast_fu_32211_p1.read()) + sc_biguint<6>(tmp_1488_reg_48954.read()));
}

void batch_align2D_region::thread_tmp_16411_7_fu_35382_p2() {
    tmp_16411_7_fu_35382_p2 = (!y_0_i_7_cast_fu_35378_p1.read().is_01() || !tmp_1499_reg_50622.read().is_01())? sc_lv<6>(): (sc_biguint<6>(y_0_i_7_cast_fu_35378_p1.read()) + sc_biguint<6>(tmp_1499_reg_50622.read()));
}

void batch_align2D_region::thread_tmp_165_1_fu_16384_p3() {
    tmp_165_1_fu_16384_p3 = esl_concat<6,5>(tmp_16411_1_fu_16379_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_2_fu_19551_p3() {
    tmp_165_2_fu_19551_p3 = esl_concat<6,5>(tmp_16411_2_fu_19546_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_3_fu_22718_p3() {
    tmp_165_3_fu_22718_p3 = esl_concat<6,5>(tmp_16411_3_fu_22713_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_4_fu_25885_p3() {
    tmp_165_4_fu_25885_p3 = esl_concat<6,5>(tmp_16411_4_fu_25880_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_5_fu_29053_p3() {
    tmp_165_5_fu_29053_p3 = esl_concat<6,5>(tmp_16411_5_fu_29048_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_6_fu_32220_p3() {
    tmp_165_6_fu_32220_p3 = esl_concat<6,5>(tmp_16411_6_fu_32215_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_7_fu_35387_p3() {
    tmp_165_7_fu_35387_p3 = esl_concat<6,5>(tmp_16411_7_fu_35382_p2.read(), ap_const_lv5_0);
}

void batch_align2D_region::thread_tmp_165_fu_14094_p2() {
    tmp_165_fu_14094_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_166_1_fu_16392_p2() {
    tmp_166_1_fu_16392_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_1_fu_16384_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_1_fu_16384_p3.read()));
}

void batch_align2D_region::thread_tmp_166_2_fu_19559_p2() {
    tmp_166_2_fu_19559_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_2_fu_19551_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_2_fu_19551_p3.read()));
}

void batch_align2D_region::thread_tmp_166_3_fu_22726_p2() {
    tmp_166_3_fu_22726_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_3_fu_22718_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_3_fu_22718_p3.read()));
}

void batch_align2D_region::thread_tmp_166_4_fu_25893_p2() {
    tmp_166_4_fu_25893_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_4_fu_25885_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_4_fu_25885_p3.read()));
}

void batch_align2D_region::thread_tmp_166_5_fu_29061_p2() {
    tmp_166_5_fu_29061_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_5_fu_29053_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_5_fu_29053_p3.read()));
}

void batch_align2D_region::thread_tmp_166_6_fu_32228_p2() {
    tmp_166_6_fu_32228_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_6_fu_32220_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_6_fu_32220_p3.read()));
}

void batch_align2D_region::thread_tmp_166_7_fu_35395_p2() {
    tmp_166_7_fu_35395_p2 = (!ap_const_lv11_780.is_01() || !tmp_165_7_fu_35387_p3.read().is_01())? sc_lv<11>(): (sc_bigint<11>(ap_const_lv11_780) + sc_biguint<11>(tmp_165_7_fu_35387_p3.read()));
}

void batch_align2D_region::thread_tmp_166_fu_14100_p3() {
    tmp_166_fu_14100_p3 = (!tmp_165_fu_14094_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_165_fu_14094_p2.read()[0].to_bool())? ref_patch_dx_0_63_37_fu_764.read(): tmp_163_fu_14086_p3.read());
}

void batch_align2D_region::thread_tmp_167_fu_14108_p2() {
    tmp_167_fu_14108_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_168_1_fu_16424_p2() {
    tmp_168_1_fu_16424_p2 = (!p_shl10_1_cast_fu_16420_p1.read().is_01() || !p_shl9_1_cast_fu_16410_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_1_cast_fu_16420_p1.read()) + sc_biguint<7>(p_shl9_1_cast_fu_16410_p1.read()));
}

void batch_align2D_region::thread_tmp_168_2_fu_19591_p2() {
    tmp_168_2_fu_19591_p2 = (!p_shl10_2_cast_fu_19587_p1.read().is_01() || !p_shl9_2_cast_fu_19577_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_2_cast_fu_19587_p1.read()) + sc_biguint<7>(p_shl9_2_cast_fu_19577_p1.read()));
}

void batch_align2D_region::thread_tmp_168_3_fu_22758_p2() {
    tmp_168_3_fu_22758_p2 = (!p_shl10_3_cast_fu_22754_p1.read().is_01() || !p_shl9_3_cast_fu_22744_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_3_cast_fu_22754_p1.read()) + sc_biguint<7>(p_shl9_3_cast_fu_22744_p1.read()));
}

void batch_align2D_region::thread_tmp_168_4_fu_25925_p2() {
    tmp_168_4_fu_25925_p2 = (!p_shl10_4_cast_fu_25921_p1.read().is_01() || !p_shl9_4_cast_fu_25911_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_4_cast_fu_25921_p1.read()) + sc_biguint<7>(p_shl9_4_cast_fu_25911_p1.read()));
}

void batch_align2D_region::thread_tmp_168_5_fu_29093_p2() {
    tmp_168_5_fu_29093_p2 = (!p_shl10_5_cast_fu_29089_p1.read().is_01() || !p_shl9_5_cast_fu_29079_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_5_cast_fu_29089_p1.read()) + sc_biguint<7>(p_shl9_5_cast_fu_29079_p1.read()));
}

void batch_align2D_region::thread_tmp_168_6_fu_32260_p2() {
    tmp_168_6_fu_32260_p2 = (!p_shl10_6_cast_fu_32256_p1.read().is_01() || !p_shl9_6_cast_fu_32246_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_6_cast_fu_32256_p1.read()) + sc_biguint<7>(p_shl9_6_cast_fu_32246_p1.read()));
}

void batch_align2D_region::thread_tmp_168_7_fu_35427_p2() {
    tmp_168_7_fu_35427_p2 = (!p_shl10_7_cast_fu_35423_p1.read().is_01() || !p_shl9_7_cast_fu_35413_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_7_cast_fu_35423_p1.read()) + sc_biguint<7>(p_shl9_7_cast_fu_35413_p1.read()));
}

void batch_align2D_region::thread_tmp_168_fu_14114_p3() {
    tmp_168_fu_14114_p3 = (!tmp_167_fu_14108_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_167_fu_14108_p2.read()[0].to_bool())? ref_patch_dx_0_63_44_fu_792.read(): tmp_166_fu_14100_p3.read());
}

void batch_align2D_region::thread_tmp_169_fu_14122_p2() {
    tmp_169_fu_14122_p2 = (!tmp_205_0_1_t_fu_14033_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_1_t_fu_14033_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_16_fu_13740_p3() {
    tmp_16_fu_13740_p3 = (!tmp_15_fu_13735_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_15_fu_13735_p2.read()[0].to_bool())? ref_patch_dy_0_63_8_fu_904.read(): tmp_14_fu_13727_p3.read());
}

void batch_align2D_region::thread_tmp_170_fu_14162_p3() {
    tmp_170_fu_14162_p3 = (!tmp_156_reg_39438.read()[0].is_01())? sc_lv<32>(): ((tmp_156_reg_39438.read()[0].to_bool())? ref_patch_dy_0_63_2_fu_880.read(): ref_patch_dy_0_63_58_fu_1104.read());
}

void batch_align2D_region::thread_tmp_171_fu_14169_p3() {
    tmp_171_fu_14169_p3 = (!tmp_158_reg_39443.read()[0].is_01())? sc_lv<32>(): ((tmp_158_reg_39443.read()[0].to_bool())? ref_patch_dy_0_63_10_fu_912.read(): tmp_170_fu_14162_p3.read());
}

void batch_align2D_region::thread_tmp_177_fu_14176_p3() {
    tmp_177_fu_14176_p3 = (!tmp_160_reg_39448.read()[0].is_01())? sc_lv<32>(): ((tmp_160_reg_39448.read()[0].to_bool())? ref_patch_dy_0_63_18_fu_944.read(): tmp_171_fu_14169_p3.read());
}

void batch_align2D_region::thread_tmp_178_fu_14183_p3() {
    tmp_178_fu_14183_p3 = (!tmp_162_reg_39453.read()[0].is_01())? sc_lv<32>(): ((tmp_162_reg_39453.read()[0].to_bool())? ref_patch_dy_0_63_26_fu_976.read(): tmp_177_fu_14176_p3.read());
}

void batch_align2D_region::thread_tmp_179_0_5_fu_13628_p1() {
    tmp_179_0_5_fu_13628_p1 = esl_zext<32,8>(pyr_region_data_0_lo_13_reg_39207.read());
}

void batch_align2D_region::thread_tmp_179_1_5_fu_16795_p1() {
    tmp_179_1_5_fu_16795_p1 = esl_zext<32,8>(pyr_region_data_1_lo_13_reg_40875.read());
}

void batch_align2D_region::thread_tmp_179_1_fu_16521_p1() {
    tmp_179_1_fu_16521_p1 = esl_zext<32,8>(reg_11431.read());
}

void batch_align2D_region::thread_tmp_179_2_5_fu_19962_p1() {
    tmp_179_2_5_fu_19962_p1 = esl_zext<32,8>(pyr_region_data_2_lo_13_reg_42543.read());
}

void batch_align2D_region::thread_tmp_179_2_fu_19688_p1() {
    tmp_179_2_fu_19688_p1 = esl_zext<32,8>(reg_11493.read());
}

void batch_align2D_region::thread_tmp_179_3_5_fu_23129_p1() {
    tmp_179_3_5_fu_23129_p1 = esl_zext<32,8>(pyr_region_data_3_lo_13_reg_44211.read());
}

void batch_align2D_region::thread_tmp_179_3_fu_22855_p1() {
    tmp_179_3_fu_22855_p1 = esl_zext<32,8>(reg_11547.read());
}

void batch_align2D_region::thread_tmp_179_4_5_fu_26296_p1() {
    tmp_179_4_5_fu_26296_p1 = esl_zext<32,8>(pyr_region_data_4_lo_13_reg_45879.read());
}

void batch_align2D_region::thread_tmp_179_4_fu_26022_p1() {
    tmp_179_4_fu_26022_p1 = esl_zext<32,8>(reg_11598.read());
}

void batch_align2D_region::thread_tmp_179_5_5_fu_29464_p1() {
    tmp_179_5_5_fu_29464_p1 = esl_zext<32,8>(pyr_region_data_5_lo_13_reg_47541.read());
}

void batch_align2D_region::thread_tmp_179_5_fu_29190_p1() {
    tmp_179_5_fu_29190_p1 = esl_zext<32,8>(reg_11647.read());
}

void batch_align2D_region::thread_tmp_179_6_5_fu_32631_p1() {
    tmp_179_6_5_fu_32631_p1 = esl_zext<32,8>(pyr_region_data_6_lo_13_reg_49209.read());
}

void batch_align2D_region::thread_tmp_179_6_fu_32357_p1() {
    tmp_179_6_fu_32357_p1 = esl_zext<32,8>(reg_11692.read());
}

void batch_align2D_region::thread_tmp_179_7_5_fu_35798_p1() {
    tmp_179_7_5_fu_35798_p1 = esl_zext<32,8>(pyr_region_data_7_lo_13_reg_50877.read());
}

void batch_align2D_region::thread_tmp_179_7_fu_35524_p1() {
    tmp_179_7_fu_35524_p1 = esl_zext<32,8>(reg_11734.read());
}

void batch_align2D_region::thread_tmp_179_fu_14190_p3() {
    tmp_179_fu_14190_p3 = (!tmp_165_reg_39458.read()[0].is_01())? sc_lv<32>(): ((tmp_165_reg_39458.read()[0].to_bool())? ref_patch_dy_0_63_34_fu_1008.read(): tmp_178_fu_14183_p3.read());
}

void batch_align2D_region::thread_tmp_17_fu_13748_p2() {
    tmp_17_fu_13748_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_180_fu_14197_p3() {
    tmp_180_fu_14197_p3 = (!tmp_167_reg_39463.read()[0].is_01())? sc_lv<32>(): ((tmp_167_reg_39463.read()[0].to_bool())? ref_patch_dy_0_63_42_fu_1040.read(): tmp_179_fu_14190_p3.read());
}

void batch_align2D_region::thread_tmp_181_fu_14264_p2() {
    tmp_181_fu_14264_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_182_0_1_fu_13494_p1() {
    tmp_182_0_1_fu_13494_p1 = esl_zext<32,8>(reg_10971.read());
}

void batch_align2D_region::thread_tmp_182_0_2_fu_13544_p1() {
    tmp_182_0_2_fu_13544_p1 = esl_zext<32,8>(reg_10976.read());
}

void batch_align2D_region::thread_tmp_182_0_3_fu_13594_p1() {
    tmp_182_0_3_fu_13594_p1 = esl_zext<32,8>(reg_10962.read());
}

void batch_align2D_region::thread_tmp_182_0_4_fu_13614_p1() {
    tmp_182_0_4_fu_13614_p1 = esl_zext<32,8>(reg_10971.read());
}

void batch_align2D_region::thread_tmp_182_0_5_fu_13632_p1() {
    tmp_182_0_5_fu_13632_p1 = esl_zext<32,8>(reg_10976.read());
}

void batch_align2D_region::thread_tmp_182_0_6_fu_13650_p1() {
    tmp_182_0_6_fu_13650_p1 = esl_zext<32,8>(pyr_region_data_0_lo_17_reg_39247.read());
}

void batch_align2D_region::thread_tmp_182_0_7_fu_13663_p1() {
    tmp_182_0_7_fu_13663_p1 = esl_zext<32,8>(pyr_region_data_0_lo_19_reg_39267.read());
}

void batch_align2D_region::thread_tmp_182_1_1_fu_16661_p1() {
    tmp_182_1_1_fu_16661_p1 = esl_zext<32,8>(reg_11445.read());
}

void batch_align2D_region::thread_tmp_182_1_2_fu_16711_p1() {
    tmp_182_1_2_fu_16711_p1 = esl_zext<32,8>(reg_11450.read());
}

void batch_align2D_region::thread_tmp_182_1_3_fu_16761_p1() {
    tmp_182_1_3_fu_16761_p1 = esl_zext<32,8>(reg_11436.read());
}

void batch_align2D_region::thread_tmp_182_1_4_fu_16781_p1() {
    tmp_182_1_4_fu_16781_p1 = esl_zext<32,8>(reg_11445.read());
}

void batch_align2D_region::thread_tmp_182_1_5_fu_16799_p1() {
    tmp_182_1_5_fu_16799_p1 = esl_zext<32,8>(reg_11450.read());
}

void batch_align2D_region::thread_tmp_182_1_6_fu_16817_p1() {
    tmp_182_1_6_fu_16817_p1 = esl_zext<32,8>(pyr_region_data_1_lo_17_reg_40915.read());
}

void batch_align2D_region::thread_tmp_182_1_7_fu_16830_p1() {
    tmp_182_1_7_fu_16830_p1 = esl_zext<32,8>(pyr_region_data_1_lo_19_reg_40935.read());
}

void batch_align2D_region::thread_tmp_182_1_fu_16566_p1() {
    tmp_182_1_fu_16566_p1 = esl_zext<32,8>(reg_11431.read());
}

void batch_align2D_region::thread_tmp_182_2_1_fu_19828_p1() {
    tmp_182_2_1_fu_19828_p1 = esl_zext<32,8>(reg_11507.read());
}

void batch_align2D_region::thread_tmp_182_2_2_fu_19878_p1() {
    tmp_182_2_2_fu_19878_p1 = esl_zext<32,8>(reg_11512.read());
}

void batch_align2D_region::thread_tmp_182_2_3_fu_19928_p1() {
    tmp_182_2_3_fu_19928_p1 = esl_zext<32,8>(reg_11498.read());
}

void batch_align2D_region::thread_tmp_182_2_4_fu_19948_p1() {
    tmp_182_2_4_fu_19948_p1 = esl_zext<32,8>(reg_11507.read());
}

void batch_align2D_region::thread_tmp_182_2_5_fu_19966_p1() {
    tmp_182_2_5_fu_19966_p1 = esl_zext<32,8>(reg_11512.read());
}

void batch_align2D_region::thread_tmp_182_2_6_fu_19984_p1() {
    tmp_182_2_6_fu_19984_p1 = esl_zext<32,8>(pyr_region_data_2_lo_17_reg_42583.read());
}

void batch_align2D_region::thread_tmp_182_2_7_fu_19997_p1() {
    tmp_182_2_7_fu_19997_p1 = esl_zext<32,8>(pyr_region_data_2_lo_19_reg_42603.read());
}

void batch_align2D_region::thread_tmp_182_2_fu_19733_p1() {
    tmp_182_2_fu_19733_p1 = esl_zext<32,8>(reg_11493.read());
}

void batch_align2D_region::thread_tmp_182_3_1_fu_22995_p1() {
    tmp_182_3_1_fu_22995_p1 = esl_zext<32,8>(reg_11561.read());
}

void batch_align2D_region::thread_tmp_182_3_2_fu_23045_p1() {
    tmp_182_3_2_fu_23045_p1 = esl_zext<32,8>(reg_11566.read());
}

void batch_align2D_region::thread_tmp_182_3_3_fu_23095_p1() {
    tmp_182_3_3_fu_23095_p1 = esl_zext<32,8>(reg_11552.read());
}

void batch_align2D_region::thread_tmp_182_3_4_fu_23115_p1() {
    tmp_182_3_4_fu_23115_p1 = esl_zext<32,8>(reg_11561.read());
}

void batch_align2D_region::thread_tmp_182_3_5_fu_23133_p1() {
    tmp_182_3_5_fu_23133_p1 = esl_zext<32,8>(reg_11566.read());
}

void batch_align2D_region::thread_tmp_182_3_6_fu_23151_p1() {
    tmp_182_3_6_fu_23151_p1 = esl_zext<32,8>(pyr_region_data_3_lo_17_reg_44251.read());
}

void batch_align2D_region::thread_tmp_182_3_7_fu_23164_p1() {
    tmp_182_3_7_fu_23164_p1 = esl_zext<32,8>(pyr_region_data_3_lo_19_reg_44271.read());
}

void batch_align2D_region::thread_tmp_182_3_fu_22900_p1() {
    tmp_182_3_fu_22900_p1 = esl_zext<32,8>(reg_11547.read());
}

void batch_align2D_region::thread_tmp_182_4_1_fu_26162_p1() {
    tmp_182_4_1_fu_26162_p1 = esl_zext<32,8>(reg_11612.read());
}

void batch_align2D_region::thread_tmp_182_4_2_fu_26212_p1() {
    tmp_182_4_2_fu_26212_p1 = esl_zext<32,8>(reg_11617.read());
}

void batch_align2D_region::thread_tmp_182_4_3_fu_26262_p1() {
    tmp_182_4_3_fu_26262_p1 = esl_zext<32,8>(reg_11603.read());
}

void batch_align2D_region::thread_tmp_182_4_4_fu_26282_p1() {
    tmp_182_4_4_fu_26282_p1 = esl_zext<32,8>(reg_11612.read());
}

void batch_align2D_region::thread_tmp_182_4_5_fu_26300_p1() {
    tmp_182_4_5_fu_26300_p1 = esl_zext<32,8>(reg_11617.read());
}

void batch_align2D_region::thread_tmp_182_4_6_fu_26318_p1() {
    tmp_182_4_6_fu_26318_p1 = esl_zext<32,8>(pyr_region_data_4_lo_17_reg_45919.read());
}

void batch_align2D_region::thread_tmp_182_4_7_fu_26331_p1() {
    tmp_182_4_7_fu_26331_p1 = esl_zext<32,8>(pyr_region_data_4_lo_19_reg_45939.read());
}

void batch_align2D_region::thread_tmp_182_4_fu_26067_p1() {
    tmp_182_4_fu_26067_p1 = esl_zext<32,8>(reg_11598.read());
}

void batch_align2D_region::thread_tmp_182_5_1_fu_29330_p1() {
    tmp_182_5_1_fu_29330_p1 = esl_zext<32,8>(reg_11661.read());
}

void batch_align2D_region::thread_tmp_182_5_2_fu_29380_p1() {
    tmp_182_5_2_fu_29380_p1 = esl_zext<32,8>(reg_11666.read());
}

void batch_align2D_region::thread_tmp_182_5_3_fu_29430_p1() {
    tmp_182_5_3_fu_29430_p1 = esl_zext<32,8>(reg_11652.read());
}

void batch_align2D_region::thread_tmp_182_5_4_fu_29450_p1() {
    tmp_182_5_4_fu_29450_p1 = esl_zext<32,8>(reg_11661.read());
}

void batch_align2D_region::thread_tmp_182_5_5_fu_29468_p1() {
    tmp_182_5_5_fu_29468_p1 = esl_zext<32,8>(reg_11666.read());
}

void batch_align2D_region::thread_tmp_182_5_6_fu_29486_p1() {
    tmp_182_5_6_fu_29486_p1 = esl_zext<32,8>(pyr_region_data_5_lo_17_reg_47581.read());
}

void batch_align2D_region::thread_tmp_182_5_7_fu_29499_p1() {
    tmp_182_5_7_fu_29499_p1 = esl_zext<32,8>(pyr_region_data_5_lo_19_reg_47601.read());
}

void batch_align2D_region::thread_tmp_182_5_fu_29235_p1() {
    tmp_182_5_fu_29235_p1 = esl_zext<32,8>(reg_11647.read());
}

void batch_align2D_region::thread_tmp_182_6_1_fu_32497_p1() {
    tmp_182_6_1_fu_32497_p1 = esl_zext<32,8>(reg_11706.read());
}

void batch_align2D_region::thread_tmp_182_6_2_fu_32547_p1() {
    tmp_182_6_2_fu_32547_p1 = esl_zext<32,8>(reg_11711.read());
}

void batch_align2D_region::thread_tmp_182_6_3_fu_32597_p1() {
    tmp_182_6_3_fu_32597_p1 = esl_zext<32,8>(reg_11697.read());
}

void batch_align2D_region::thread_tmp_182_6_4_fu_32617_p1() {
    tmp_182_6_4_fu_32617_p1 = esl_zext<32,8>(reg_11706.read());
}

void batch_align2D_region::thread_tmp_182_6_5_fu_32635_p1() {
    tmp_182_6_5_fu_32635_p1 = esl_zext<32,8>(reg_11711.read());
}

void batch_align2D_region::thread_tmp_182_6_6_fu_32653_p1() {
    tmp_182_6_6_fu_32653_p1 = esl_zext<32,8>(pyr_region_data_6_lo_17_reg_49249.read());
}

void batch_align2D_region::thread_tmp_182_6_7_fu_32666_p1() {
    tmp_182_6_7_fu_32666_p1 = esl_zext<32,8>(pyr_region_data_6_lo_19_reg_49269.read());
}

void batch_align2D_region::thread_tmp_182_6_fu_32402_p1() {
    tmp_182_6_fu_32402_p1 = esl_zext<32,8>(reg_11692.read());
}

void batch_align2D_region::thread_tmp_182_7_1_fu_35664_p1() {
    tmp_182_7_1_fu_35664_p1 = esl_zext<32,8>(reg_11748.read());
}

void batch_align2D_region::thread_tmp_182_7_2_fu_35714_p1() {
    tmp_182_7_2_fu_35714_p1 = esl_zext<32,8>(reg_11753.read());
}

void batch_align2D_region::thread_tmp_182_7_3_fu_35764_p1() {
    tmp_182_7_3_fu_35764_p1 = esl_zext<32,8>(reg_11739.read());
}

void batch_align2D_region::thread_tmp_182_7_4_fu_35784_p1() {
    tmp_182_7_4_fu_35784_p1 = esl_zext<32,8>(reg_11748.read());
}

void batch_align2D_region::thread_tmp_182_7_5_fu_35802_p1() {
    tmp_182_7_5_fu_35802_p1 = esl_zext<32,8>(reg_11753.read());
}

void batch_align2D_region::thread_tmp_182_7_6_fu_35820_p1() {
    tmp_182_7_6_fu_35820_p1 = esl_zext<32,8>(pyr_region_data_7_lo_17_reg_50917.read());
}

void batch_align2D_region::thread_tmp_182_7_7_fu_35833_p1() {
    tmp_182_7_7_fu_35833_p1 = esl_zext<32,8>(pyr_region_data_7_lo_19_reg_50937.read());
}

void batch_align2D_region::thread_tmp_182_7_fu_35569_p1() {
    tmp_182_7_fu_35569_p1 = esl_zext<32,8>(reg_11734.read());
}

void batch_align2D_region::thread_tmp_182_fu_14270_p3() {
    tmp_182_fu_14270_p3 = (!tmp_181_fu_14264_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_181_fu_14264_p2.read()[0].to_bool())? ref_patch_dx_0_63_10_fu_656.read(): ref_patch_dx_0_63_59_fu_852.read());
}

void batch_align2D_region::thread_tmp_183_fu_14278_p2() {
    tmp_183_fu_14278_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_184_fu_14284_p3() {
    tmp_184_fu_14284_p3 = (!tmp_183_fu_14278_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_183_fu_14278_p2.read()[0].to_bool())? ref_patch_dx_0_63_17_fu_684.read(): tmp_182_fu_14270_p3.read());
}

void batch_align2D_region::thread_tmp_185_fu_14292_p2() {
    tmp_185_fu_14292_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_186_0_4_fu_13619_p1() {
    tmp_186_0_4_fu_13619_p1 = esl_zext<32,8>(pyr_region_data_0_lo_11_reg_39187.read());
}

void batch_align2D_region::thread_tmp_186_0_5_fu_13637_p1() {
    tmp_186_0_5_fu_13637_p1 = esl_zext<32,8>(pyr_region_data_0_lo_15_reg_39227.read());
}

void batch_align2D_region::thread_tmp_186_1_4_fu_16786_p1() {
    tmp_186_1_4_fu_16786_p1 = esl_zext<32,8>(pyr_region_data_1_lo_11_reg_40855.read());
}

void batch_align2D_region::thread_tmp_186_1_5_fu_16804_p1() {
    tmp_186_1_5_fu_16804_p1 = esl_zext<32,8>(pyr_region_data_1_lo_15_reg_40895.read());
}

void batch_align2D_region::thread_tmp_186_1_fu_16611_p1() {
    tmp_186_1_fu_16611_p1 = esl_zext<32,8>(reg_11440.read());
}

void batch_align2D_region::thread_tmp_186_2_4_fu_19953_p1() {
    tmp_186_2_4_fu_19953_p1 = esl_zext<32,8>(pyr_region_data_2_lo_11_reg_42523.read());
}

void batch_align2D_region::thread_tmp_186_2_5_fu_19971_p1() {
    tmp_186_2_5_fu_19971_p1 = esl_zext<32,8>(pyr_region_data_2_lo_15_reg_42563.read());
}

void batch_align2D_region::thread_tmp_186_2_fu_19778_p1() {
    tmp_186_2_fu_19778_p1 = esl_zext<32,8>(reg_11502.read());
}

void batch_align2D_region::thread_tmp_186_3_4_fu_23120_p1() {
    tmp_186_3_4_fu_23120_p1 = esl_zext<32,8>(pyr_region_data_3_lo_11_reg_44191.read());
}

void batch_align2D_region::thread_tmp_186_3_5_fu_23138_p1() {
    tmp_186_3_5_fu_23138_p1 = esl_zext<32,8>(pyr_region_data_3_lo_15_reg_44231.read());
}

void batch_align2D_region::thread_tmp_186_3_fu_22945_p1() {
    tmp_186_3_fu_22945_p1 = esl_zext<32,8>(reg_11556.read());
}

void batch_align2D_region::thread_tmp_186_4_4_fu_26287_p1() {
    tmp_186_4_4_fu_26287_p1 = esl_zext<32,8>(pyr_region_data_4_lo_11_reg_45859.read());
}

void batch_align2D_region::thread_tmp_186_4_5_fu_26305_p1() {
    tmp_186_4_5_fu_26305_p1 = esl_zext<32,8>(pyr_region_data_4_lo_15_reg_45899.read());
}

void batch_align2D_region::thread_tmp_186_4_fu_26112_p1() {
    tmp_186_4_fu_26112_p1 = esl_zext<32,8>(reg_11607.read());
}

void batch_align2D_region::thread_tmp_186_5_4_fu_29455_p1() {
    tmp_186_5_4_fu_29455_p1 = esl_zext<32,8>(pyr_region_data_5_lo_11_reg_47521.read());
}

void batch_align2D_region::thread_tmp_186_5_5_fu_29473_p1() {
    tmp_186_5_5_fu_29473_p1 = esl_zext<32,8>(pyr_region_data_5_lo_15_reg_47561.read());
}

void batch_align2D_region::thread_tmp_186_5_fu_29280_p1() {
    tmp_186_5_fu_29280_p1 = esl_zext<32,8>(reg_11656.read());
}

void batch_align2D_region::thread_tmp_186_6_4_fu_32622_p1() {
    tmp_186_6_4_fu_32622_p1 = esl_zext<32,8>(pyr_region_data_6_lo_11_reg_49189.read());
}

void batch_align2D_region::thread_tmp_186_6_5_fu_32640_p1() {
    tmp_186_6_5_fu_32640_p1 = esl_zext<32,8>(pyr_region_data_6_lo_15_reg_49229.read());
}

void batch_align2D_region::thread_tmp_186_6_fu_32447_p1() {
    tmp_186_6_fu_32447_p1 = esl_zext<32,8>(reg_11701.read());
}

void batch_align2D_region::thread_tmp_186_7_4_fu_35789_p1() {
    tmp_186_7_4_fu_35789_p1 = esl_zext<32,8>(pyr_region_data_7_lo_11_reg_50857.read());
}

void batch_align2D_region::thread_tmp_186_7_5_fu_35807_p1() {
    tmp_186_7_5_fu_35807_p1 = esl_zext<32,8>(pyr_region_data_7_lo_15_reg_50897.read());
}

void batch_align2D_region::thread_tmp_186_7_fu_35614_p1() {
    tmp_186_7_fu_35614_p1 = esl_zext<32,8>(reg_11743.read());
}

void batch_align2D_region::thread_tmp_186_fu_14298_p3() {
    tmp_186_fu_14298_p3 = (!tmp_185_fu_14292_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_185_fu_14292_p2.read()[0].to_bool())? ref_patch_dx_0_63_24_fu_712.read(): tmp_184_fu_14284_p3.read());
}

void batch_align2D_region::thread_tmp_187_fu_14306_p2() {
    tmp_187_fu_14306_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_188_fu_14312_p3() {
    tmp_188_fu_14312_p3 = (!tmp_187_fu_14306_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_187_fu_14306_p2.read()[0].to_bool())? ref_patch_dx_0_63_31_fu_740.read(): tmp_186_fu_14298_p3.read());
}

void batch_align2D_region::thread_tmp_18_fu_13753_p3() {
    tmp_18_fu_13753_p3 = (!tmp_17_fu_13748_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_17_fu_13748_p2.read()[0].to_bool())? ref_patch_dy_0_63_16_fu_936.read(): tmp_16_fu_13740_p3.read());
}

void batch_align2D_region::thread_tmp_190_0_1_fu_13519_p1() {
    tmp_190_0_1_fu_13519_p1 = esl_zext<32,8>(reg_10966.read());
}

void batch_align2D_region::thread_tmp_190_0_2_fu_13569_p1() {
    tmp_190_0_2_fu_13569_p1 = esl_zext<32,8>(reg_10957.read());
}

void batch_align2D_region::thread_tmp_190_0_3_fu_13609_p1() {
    tmp_190_0_3_fu_13609_p1 = esl_zext<32,8>(reg_10981.read());
}

void batch_align2D_region::thread_tmp_190_0_4_fu_13623_p1() {
    tmp_190_0_4_fu_13623_p1 = esl_zext<32,8>(reg_10966.read());
}

void batch_align2D_region::thread_tmp_190_0_5_fu_13641_p1() {
    tmp_190_0_5_fu_13641_p1 = esl_zext<32,8>(reg_10957.read());
}

void batch_align2D_region::thread_tmp_190_0_6_fu_13654_p1() {
    tmp_190_0_6_fu_13654_p1 = esl_zext<32,8>(reg_10962.read());
}

void batch_align2D_region::thread_tmp_190_0_7_fu_13667_p1() {
    tmp_190_0_7_fu_13667_p1 = esl_zext<32,8>(reg_10981.read());
}

void batch_align2D_region::thread_tmp_190_1_1_fu_16686_p1() {
    tmp_190_1_1_fu_16686_p1 = esl_zext<32,8>(reg_11440.read());
}

void batch_align2D_region::thread_tmp_190_1_2_fu_16736_p1() {
    tmp_190_1_2_fu_16736_p1 = esl_zext<32,8>(reg_11431.read());
}

void batch_align2D_region::thread_tmp_190_1_3_fu_16776_p1() {
    tmp_190_1_3_fu_16776_p1 = esl_zext<32,8>(reg_11455.read());
}

void batch_align2D_region::thread_tmp_190_1_4_fu_16790_p1() {
    tmp_190_1_4_fu_16790_p1 = esl_zext<32,8>(reg_11440.read());
}

void batch_align2D_region::thread_tmp_190_1_5_fu_16808_p1() {
    tmp_190_1_5_fu_16808_p1 = esl_zext<32,8>(reg_11431.read());
}

void batch_align2D_region::thread_tmp_190_1_6_fu_16821_p1() {
    tmp_190_1_6_fu_16821_p1 = esl_zext<32,8>(reg_11436.read());
}

void batch_align2D_region::thread_tmp_190_1_7_fu_16834_p1() {
    tmp_190_1_7_fu_16834_p1 = esl_zext<32,8>(reg_11455.read());
}

void batch_align2D_region::thread_tmp_190_1_fu_16636_p1() {
    tmp_190_1_fu_16636_p1 = esl_zext<32,8>(reg_11431.read());
}

void batch_align2D_region::thread_tmp_190_2_1_fu_19853_p1() {
    tmp_190_2_1_fu_19853_p1 = esl_zext<32,8>(reg_11502.read());
}

void batch_align2D_region::thread_tmp_190_2_2_fu_19903_p1() {
    tmp_190_2_2_fu_19903_p1 = esl_zext<32,8>(reg_11493.read());
}

void batch_align2D_region::thread_tmp_190_2_3_fu_19943_p1() {
    tmp_190_2_3_fu_19943_p1 = esl_zext<32,8>(reg_11517.read());
}

void batch_align2D_region::thread_tmp_190_2_4_fu_19957_p1() {
    tmp_190_2_4_fu_19957_p1 = esl_zext<32,8>(reg_11502.read());
}

void batch_align2D_region::thread_tmp_190_2_5_fu_19975_p1() {
    tmp_190_2_5_fu_19975_p1 = esl_zext<32,8>(reg_11493.read());
}

void batch_align2D_region::thread_tmp_190_2_6_fu_19988_p1() {
    tmp_190_2_6_fu_19988_p1 = esl_zext<32,8>(reg_11498.read());
}

void batch_align2D_region::thread_tmp_190_2_7_fu_20001_p1() {
    tmp_190_2_7_fu_20001_p1 = esl_zext<32,8>(reg_11517.read());
}

void batch_align2D_region::thread_tmp_190_2_fu_19803_p1() {
    tmp_190_2_fu_19803_p1 = esl_zext<32,8>(reg_11493.read());
}

void batch_align2D_region::thread_tmp_190_3_1_fu_23020_p1() {
    tmp_190_3_1_fu_23020_p1 = esl_zext<32,8>(reg_11556.read());
}

void batch_align2D_region::thread_tmp_190_3_2_fu_23070_p1() {
    tmp_190_3_2_fu_23070_p1 = esl_zext<32,8>(reg_11547.read());
}

void batch_align2D_region::thread_tmp_190_3_3_fu_23110_p1() {
    tmp_190_3_3_fu_23110_p1 = esl_zext<32,8>(reg_11571.read());
}

void batch_align2D_region::thread_tmp_190_3_4_fu_23124_p1() {
    tmp_190_3_4_fu_23124_p1 = esl_zext<32,8>(reg_11556.read());
}

void batch_align2D_region::thread_tmp_190_3_5_fu_23142_p1() {
    tmp_190_3_5_fu_23142_p1 = esl_zext<32,8>(reg_11547.read());
}

void batch_align2D_region::thread_tmp_190_3_6_fu_23155_p1() {
    tmp_190_3_6_fu_23155_p1 = esl_zext<32,8>(reg_11552.read());
}

void batch_align2D_region::thread_tmp_190_3_7_fu_23168_p1() {
    tmp_190_3_7_fu_23168_p1 = esl_zext<32,8>(reg_11571.read());
}

void batch_align2D_region::thread_tmp_190_3_fu_22970_p1() {
    tmp_190_3_fu_22970_p1 = esl_zext<32,8>(reg_11547.read());
}

void batch_align2D_region::thread_tmp_190_4_1_fu_26187_p1() {
    tmp_190_4_1_fu_26187_p1 = esl_zext<32,8>(reg_11607.read());
}

void batch_align2D_region::thread_tmp_190_4_2_fu_26237_p1() {
    tmp_190_4_2_fu_26237_p1 = esl_zext<32,8>(reg_11598.read());
}

void batch_align2D_region::thread_tmp_190_4_3_fu_26277_p1() {
    tmp_190_4_3_fu_26277_p1 = esl_zext<32,8>(reg_11622.read());
}

void batch_align2D_region::thread_tmp_190_4_4_fu_26291_p1() {
    tmp_190_4_4_fu_26291_p1 = esl_zext<32,8>(reg_11607.read());
}

void batch_align2D_region::thread_tmp_190_4_5_fu_26309_p1() {
    tmp_190_4_5_fu_26309_p1 = esl_zext<32,8>(reg_11598.read());
}

void batch_align2D_region::thread_tmp_190_4_6_fu_26322_p1() {
    tmp_190_4_6_fu_26322_p1 = esl_zext<32,8>(reg_11603.read());
}

void batch_align2D_region::thread_tmp_190_4_7_fu_26335_p1() {
    tmp_190_4_7_fu_26335_p1 = esl_zext<32,8>(reg_11622.read());
}

void batch_align2D_region::thread_tmp_190_4_fu_26137_p1() {
    tmp_190_4_fu_26137_p1 = esl_zext<32,8>(reg_11598.read());
}

void batch_align2D_region::thread_tmp_190_5_1_fu_29355_p1() {
    tmp_190_5_1_fu_29355_p1 = esl_zext<32,8>(reg_11656.read());
}

void batch_align2D_region::thread_tmp_190_5_2_fu_29405_p1() {
    tmp_190_5_2_fu_29405_p1 = esl_zext<32,8>(reg_11647.read());
}

void batch_align2D_region::thread_tmp_190_5_3_fu_29445_p1() {
    tmp_190_5_3_fu_29445_p1 = esl_zext<32,8>(reg_11671.read());
}

void batch_align2D_region::thread_tmp_190_5_4_fu_29459_p1() {
    tmp_190_5_4_fu_29459_p1 = esl_zext<32,8>(reg_11656.read());
}

void batch_align2D_region::thread_tmp_190_5_5_fu_29477_p1() {
    tmp_190_5_5_fu_29477_p1 = esl_zext<32,8>(reg_11647.read());
}

void batch_align2D_region::thread_tmp_190_5_6_fu_29490_p1() {
    tmp_190_5_6_fu_29490_p1 = esl_zext<32,8>(reg_11652.read());
}

void batch_align2D_region::thread_tmp_190_5_7_fu_29503_p1() {
    tmp_190_5_7_fu_29503_p1 = esl_zext<32,8>(reg_11671.read());
}

void batch_align2D_region::thread_tmp_190_5_fu_29305_p1() {
    tmp_190_5_fu_29305_p1 = esl_zext<32,8>(reg_11647.read());
}

void batch_align2D_region::thread_tmp_190_6_1_fu_32522_p1() {
    tmp_190_6_1_fu_32522_p1 = esl_zext<32,8>(reg_11701.read());
}

void batch_align2D_region::thread_tmp_190_6_2_fu_32572_p1() {
    tmp_190_6_2_fu_32572_p1 = esl_zext<32,8>(reg_11692.read());
}

void batch_align2D_region::thread_tmp_190_6_3_fu_32612_p1() {
    tmp_190_6_3_fu_32612_p1 = esl_zext<32,8>(reg_11716.read());
}

void batch_align2D_region::thread_tmp_190_6_4_fu_32626_p1() {
    tmp_190_6_4_fu_32626_p1 = esl_zext<32,8>(reg_11701.read());
}

void batch_align2D_region::thread_tmp_190_6_5_fu_32644_p1() {
    tmp_190_6_5_fu_32644_p1 = esl_zext<32,8>(reg_11692.read());
}

void batch_align2D_region::thread_tmp_190_6_6_fu_32657_p1() {
    tmp_190_6_6_fu_32657_p1 = esl_zext<32,8>(reg_11697.read());
}

void batch_align2D_region::thread_tmp_190_6_7_fu_32670_p1() {
    tmp_190_6_7_fu_32670_p1 = esl_zext<32,8>(reg_11716.read());
}

void batch_align2D_region::thread_tmp_190_6_fu_32472_p1() {
    tmp_190_6_fu_32472_p1 = esl_zext<32,8>(reg_11692.read());
}

void batch_align2D_region::thread_tmp_190_7_1_fu_35689_p1() {
    tmp_190_7_1_fu_35689_p1 = esl_zext<32,8>(reg_11743.read());
}

void batch_align2D_region::thread_tmp_190_7_2_fu_35739_p1() {
    tmp_190_7_2_fu_35739_p1 = esl_zext<32,8>(reg_11734.read());
}

void batch_align2D_region::thread_tmp_190_7_3_fu_35779_p1() {
    tmp_190_7_3_fu_35779_p1 = esl_zext<32,8>(reg_11758.read());
}

void batch_align2D_region::thread_tmp_190_7_4_fu_35793_p1() {
    tmp_190_7_4_fu_35793_p1 = esl_zext<32,8>(reg_11743.read());
}

void batch_align2D_region::thread_tmp_190_7_5_fu_35811_p1() {
    tmp_190_7_5_fu_35811_p1 = esl_zext<32,8>(reg_11734.read());
}

void batch_align2D_region::thread_tmp_190_7_6_fu_35824_p1() {
    tmp_190_7_6_fu_35824_p1 = esl_zext<32,8>(reg_11739.read());
}

void batch_align2D_region::thread_tmp_190_7_7_fu_35837_p1() {
    tmp_190_7_7_fu_35837_p1 = esl_zext<32,8>(reg_11758.read());
}

void batch_align2D_region::thread_tmp_190_7_fu_35639_p1() {
    tmp_190_7_fu_35639_p1 = esl_zext<32,8>(reg_11734.read());
}

void batch_align2D_region::thread_tmp_190_fu_14320_p2() {
    tmp_190_fu_14320_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_191_fu_14326_p3() {
    tmp_191_fu_14326_p3 = (!tmp_190_fu_14320_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_190_fu_14320_p2.read()[0].to_bool())? ref_patch_dx_0_63_38_fu_768.read(): tmp_188_fu_14312_p3.read());
}

void batch_align2D_region::thread_tmp_192_fu_14334_p2() {
    tmp_192_fu_14334_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_193_fu_14340_p3() {
    tmp_193_fu_14340_p3 = (!tmp_192_fu_14334_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_192_fu_14334_p2.read()[0].to_bool())? ref_patch_dx_0_63_45_fu_796.read(): tmp_191_fu_14326_p3.read());
}

void batch_align2D_region::thread_tmp_194_0_1_fu_13288_p2() {
    tmp_194_0_1_fu_13288_p2 = (!tmp_132_fu_13257_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_fu_13257_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_0_2_fu_13334_p2() {
    tmp_194_0_2_fu_13334_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_0_3_fu_13344_p2() {
    tmp_194_0_3_fu_13344_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_0_4_fu_13379_p2() {
    tmp_194_0_4_fu_13379_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_0_5_fu_13389_p2() {
    tmp_194_0_5_fu_13389_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_0_6_fu_13424_p2() {
    tmp_194_0_6_fu_13424_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_0_7_fu_13434_p2() {
    tmp_194_0_7_fu_13434_p2 = (!tmp_132_reg_38971.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_132_reg_38971.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_1_1_fu_16455_p2() {
    tmp_194_1_1_fu_16455_p2 = (!tmp_168_1_fu_16424_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_fu_16424_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_1_2_fu_16501_p2() {
    tmp_194_1_2_fu_16501_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_1_3_fu_16511_p2() {
    tmp_194_1_3_fu_16511_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_1_4_fu_16546_p2() {
    tmp_194_1_4_fu_16546_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_1_5_fu_16556_p2() {
    tmp_194_1_5_fu_16556_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_1_6_fu_16591_p2() {
    tmp_194_1_6_fu_16591_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_1_7_fu_16601_p2() {
    tmp_194_1_7_fu_16601_p2 = (!tmp_168_1_reg_40639.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_1_reg_40639.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_1_fu_16440_p2() {
    tmp_194_1_fu_16440_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_1_fu_16424_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_1_fu_16424_p2.read()));
}

void batch_align2D_region::thread_tmp_194_2_1_fu_19622_p2() {
    tmp_194_2_1_fu_19622_p2 = (!tmp_168_2_fu_19591_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_fu_19591_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_2_2_fu_19668_p2() {
    tmp_194_2_2_fu_19668_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_2_3_fu_19678_p2() {
    tmp_194_2_3_fu_19678_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_2_4_fu_19713_p2() {
    tmp_194_2_4_fu_19713_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_2_5_fu_19723_p2() {
    tmp_194_2_5_fu_19723_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_2_6_fu_19758_p2() {
    tmp_194_2_6_fu_19758_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_2_7_fu_19768_p2() {
    tmp_194_2_7_fu_19768_p2 = (!tmp_168_2_reg_42307.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_2_reg_42307.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_2_fu_19607_p2() {
    tmp_194_2_fu_19607_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_2_fu_19591_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_2_fu_19591_p2.read()));
}

void batch_align2D_region::thread_tmp_194_3_1_fu_22789_p2() {
    tmp_194_3_1_fu_22789_p2 = (!tmp_168_3_fu_22758_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_fu_22758_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_3_2_fu_22835_p2() {
    tmp_194_3_2_fu_22835_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_3_3_fu_22845_p2() {
    tmp_194_3_3_fu_22845_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_3_4_fu_22880_p2() {
    tmp_194_3_4_fu_22880_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_3_5_fu_22890_p2() {
    tmp_194_3_5_fu_22890_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_3_6_fu_22925_p2() {
    tmp_194_3_6_fu_22925_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_3_7_fu_22935_p2() {
    tmp_194_3_7_fu_22935_p2 = (!tmp_168_3_reg_43975.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_3_reg_43975.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_3_fu_22774_p2() {
    tmp_194_3_fu_22774_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_3_fu_22758_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_3_fu_22758_p2.read()));
}

void batch_align2D_region::thread_tmp_194_4_1_fu_25956_p2() {
    tmp_194_4_1_fu_25956_p2 = (!tmp_168_4_fu_25925_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_fu_25925_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_4_2_fu_26002_p2() {
    tmp_194_4_2_fu_26002_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_4_3_fu_26012_p2() {
    tmp_194_4_3_fu_26012_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_4_4_fu_26047_p2() {
    tmp_194_4_4_fu_26047_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_4_5_fu_26057_p2() {
    tmp_194_4_5_fu_26057_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_4_6_fu_26092_p2() {
    tmp_194_4_6_fu_26092_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_4_7_fu_26102_p2() {
    tmp_194_4_7_fu_26102_p2 = (!tmp_168_4_reg_45643.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_4_reg_45643.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_4_fu_25941_p2() {
    tmp_194_4_fu_25941_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_4_fu_25925_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_4_fu_25925_p2.read()));
}

void batch_align2D_region::thread_tmp_194_5_1_fu_29124_p2() {
    tmp_194_5_1_fu_29124_p2 = (!tmp_168_5_fu_29093_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_fu_29093_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_5_2_fu_29170_p2() {
    tmp_194_5_2_fu_29170_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_5_3_fu_29180_p2() {
    tmp_194_5_3_fu_29180_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_5_4_fu_29215_p2() {
    tmp_194_5_4_fu_29215_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_5_5_fu_29225_p2() {
    tmp_194_5_5_fu_29225_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_5_6_fu_29260_p2() {
    tmp_194_5_6_fu_29260_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_5_7_fu_29270_p2() {
    tmp_194_5_7_fu_29270_p2 = (!tmp_168_5_reg_47305.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_5_reg_47305.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_5_fu_29109_p2() {
    tmp_194_5_fu_29109_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_5_fu_29093_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_5_fu_29093_p2.read()));
}

void batch_align2D_region::thread_tmp_194_6_1_fu_32291_p2() {
    tmp_194_6_1_fu_32291_p2 = (!tmp_168_6_fu_32260_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_fu_32260_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_6_2_fu_32337_p2() {
    tmp_194_6_2_fu_32337_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_6_3_fu_32347_p2() {
    tmp_194_6_3_fu_32347_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_6_4_fu_32382_p2() {
    tmp_194_6_4_fu_32382_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_6_5_fu_32392_p2() {
    tmp_194_6_5_fu_32392_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_6_6_fu_32427_p2() {
    tmp_194_6_6_fu_32427_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_6_7_fu_32437_p2() {
    tmp_194_6_7_fu_32437_p2 = (!tmp_168_6_reg_48973.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_6_reg_48973.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_6_fu_32276_p2() {
    tmp_194_6_fu_32276_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_6_fu_32260_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_6_fu_32260_p2.read()));
}

void batch_align2D_region::thread_tmp_194_7_1_fu_35458_p2() {
    tmp_194_7_1_fu_35458_p2 = (!tmp_168_7_fu_35427_p2.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_fu_35427_p2.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void batch_align2D_region::thread_tmp_194_7_2_fu_35504_p2() {
    tmp_194_7_2_fu_35504_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_D.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_D));
}

void batch_align2D_region::thread_tmp_194_7_3_fu_35514_p2() {
    tmp_194_7_3_fu_35514_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_E.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_E));
}

void batch_align2D_region::thread_tmp_194_7_4_fu_35549_p2() {
    tmp_194_7_4_fu_35549_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_F.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_F));
}

void batch_align2D_region::thread_tmp_194_7_5_fu_35559_p2() {
    tmp_194_7_5_fu_35559_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_10.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_10));
}

void batch_align2D_region::thread_tmp_194_7_6_fu_35594_p2() {
    tmp_194_7_6_fu_35594_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_11.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_11));
}

void batch_align2D_region::thread_tmp_194_7_7_fu_35604_p2() {
    tmp_194_7_7_fu_35604_p2 = (!tmp_168_7_reg_50641.read().is_01() || !ap_const_lv7_12.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_168_7_reg_50641.read()) + sc_biguint<7>(ap_const_lv7_12));
}

void batch_align2D_region::thread_tmp_194_7_fu_35443_p2() {
    tmp_194_7_fu_35443_p2 = (!ap_const_lv7_B.is_01() || !tmp_168_7_fu_35427_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_B) + sc_biguint<7>(tmp_168_7_fu_35427_p2.read()));
}

void batch_align2D_region::thread_tmp_194_fu_14348_p2() {
    tmp_194_fu_14348_p2 = (!tmp_205_0_266_t_fu_14259_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_266_t_fu_14259_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_195_0_1_fu_13294_p1() {
    tmp_195_0_1_fu_13294_p1 = esl_zext<64,7>(tmp_194_0_1_fu_13288_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_2_fu_13339_p1() {
    tmp_195_0_2_fu_13339_p1 = esl_zext<64,7>(tmp_194_0_2_fu_13334_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_3_fu_13349_p1() {
    tmp_195_0_3_fu_13349_p1 = esl_zext<64,7>(tmp_194_0_3_fu_13344_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_4_fu_13384_p1() {
    tmp_195_0_4_fu_13384_p1 = esl_zext<64,7>(tmp_194_0_4_fu_13379_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_5_fu_13394_p1() {
    tmp_195_0_5_fu_13394_p1 = esl_zext<64,7>(tmp_194_0_5_fu_13389_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_6_fu_13429_p1() {
    tmp_195_0_6_fu_13429_p1 = esl_zext<64,7>(tmp_194_0_6_fu_13424_p2.read());
}

void batch_align2D_region::thread_tmp_195_0_7_fu_13439_p1() {
    tmp_195_0_7_fu_13439_p1 = esl_zext<64,7>(tmp_194_0_7_fu_13434_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_1_fu_16461_p1() {
    tmp_195_1_1_fu_16461_p1 = esl_zext<64,7>(tmp_194_1_1_fu_16455_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_2_fu_16506_p1() {
    tmp_195_1_2_fu_16506_p1 = esl_zext<64,7>(tmp_194_1_2_fu_16501_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_3_fu_16516_p1() {
    tmp_195_1_3_fu_16516_p1 = esl_zext<64,7>(tmp_194_1_3_fu_16511_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_4_fu_16551_p1() {
    tmp_195_1_4_fu_16551_p1 = esl_zext<64,7>(tmp_194_1_4_fu_16546_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_5_fu_16561_p1() {
    tmp_195_1_5_fu_16561_p1 = esl_zext<64,7>(tmp_194_1_5_fu_16556_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_6_fu_16596_p1() {
    tmp_195_1_6_fu_16596_p1 = esl_zext<64,7>(tmp_194_1_6_fu_16591_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_7_fu_16606_p1() {
    tmp_195_1_7_fu_16606_p1 = esl_zext<64,7>(tmp_194_1_7_fu_16601_p2.read());
}

void batch_align2D_region::thread_tmp_195_1_fu_16446_p1() {
    tmp_195_1_fu_16446_p1 = esl_zext<64,7>(tmp_194_1_fu_16440_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_1_fu_19628_p1() {
    tmp_195_2_1_fu_19628_p1 = esl_zext<64,7>(tmp_194_2_1_fu_19622_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_2_fu_19673_p1() {
    tmp_195_2_2_fu_19673_p1 = esl_zext<64,7>(tmp_194_2_2_fu_19668_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_3_fu_19683_p1() {
    tmp_195_2_3_fu_19683_p1 = esl_zext<64,7>(tmp_194_2_3_fu_19678_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_4_fu_19718_p1() {
    tmp_195_2_4_fu_19718_p1 = esl_zext<64,7>(tmp_194_2_4_fu_19713_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_5_fu_19728_p1() {
    tmp_195_2_5_fu_19728_p1 = esl_zext<64,7>(tmp_194_2_5_fu_19723_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_6_fu_19763_p1() {
    tmp_195_2_6_fu_19763_p1 = esl_zext<64,7>(tmp_194_2_6_fu_19758_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_7_fu_19773_p1() {
    tmp_195_2_7_fu_19773_p1 = esl_zext<64,7>(tmp_194_2_7_fu_19768_p2.read());
}

void batch_align2D_region::thread_tmp_195_2_fu_19613_p1() {
    tmp_195_2_fu_19613_p1 = esl_zext<64,7>(tmp_194_2_fu_19607_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_1_fu_22795_p1() {
    tmp_195_3_1_fu_22795_p1 = esl_zext<64,7>(tmp_194_3_1_fu_22789_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_2_fu_22840_p1() {
    tmp_195_3_2_fu_22840_p1 = esl_zext<64,7>(tmp_194_3_2_fu_22835_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_3_fu_22850_p1() {
    tmp_195_3_3_fu_22850_p1 = esl_zext<64,7>(tmp_194_3_3_fu_22845_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_4_fu_22885_p1() {
    tmp_195_3_4_fu_22885_p1 = esl_zext<64,7>(tmp_194_3_4_fu_22880_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_5_fu_22895_p1() {
    tmp_195_3_5_fu_22895_p1 = esl_zext<64,7>(tmp_194_3_5_fu_22890_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_6_fu_22930_p1() {
    tmp_195_3_6_fu_22930_p1 = esl_zext<64,7>(tmp_194_3_6_fu_22925_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_7_fu_22940_p1() {
    tmp_195_3_7_fu_22940_p1 = esl_zext<64,7>(tmp_194_3_7_fu_22935_p2.read());
}

void batch_align2D_region::thread_tmp_195_3_fu_22780_p1() {
    tmp_195_3_fu_22780_p1 = esl_zext<64,7>(tmp_194_3_fu_22774_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_1_fu_25962_p1() {
    tmp_195_4_1_fu_25962_p1 = esl_zext<64,7>(tmp_194_4_1_fu_25956_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_2_fu_26007_p1() {
    tmp_195_4_2_fu_26007_p1 = esl_zext<64,7>(tmp_194_4_2_fu_26002_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_3_fu_26017_p1() {
    tmp_195_4_3_fu_26017_p1 = esl_zext<64,7>(tmp_194_4_3_fu_26012_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_4_fu_26052_p1() {
    tmp_195_4_4_fu_26052_p1 = esl_zext<64,7>(tmp_194_4_4_fu_26047_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_5_fu_26062_p1() {
    tmp_195_4_5_fu_26062_p1 = esl_zext<64,7>(tmp_194_4_5_fu_26057_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_6_fu_26097_p1() {
    tmp_195_4_6_fu_26097_p1 = esl_zext<64,7>(tmp_194_4_6_fu_26092_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_7_fu_26107_p1() {
    tmp_195_4_7_fu_26107_p1 = esl_zext<64,7>(tmp_194_4_7_fu_26102_p2.read());
}

void batch_align2D_region::thread_tmp_195_4_fu_25947_p1() {
    tmp_195_4_fu_25947_p1 = esl_zext<64,7>(tmp_194_4_fu_25941_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_1_fu_29130_p1() {
    tmp_195_5_1_fu_29130_p1 = esl_zext<64,7>(tmp_194_5_1_fu_29124_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_2_fu_29175_p1() {
    tmp_195_5_2_fu_29175_p1 = esl_zext<64,7>(tmp_194_5_2_fu_29170_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_3_fu_29185_p1() {
    tmp_195_5_3_fu_29185_p1 = esl_zext<64,7>(tmp_194_5_3_fu_29180_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_4_fu_29220_p1() {
    tmp_195_5_4_fu_29220_p1 = esl_zext<64,7>(tmp_194_5_4_fu_29215_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_5_fu_29230_p1() {
    tmp_195_5_5_fu_29230_p1 = esl_zext<64,7>(tmp_194_5_5_fu_29225_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_6_fu_29265_p1() {
    tmp_195_5_6_fu_29265_p1 = esl_zext<64,7>(tmp_194_5_6_fu_29260_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_7_fu_29275_p1() {
    tmp_195_5_7_fu_29275_p1 = esl_zext<64,7>(tmp_194_5_7_fu_29270_p2.read());
}

void batch_align2D_region::thread_tmp_195_5_fu_29115_p1() {
    tmp_195_5_fu_29115_p1 = esl_zext<64,7>(tmp_194_5_fu_29109_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_1_fu_32297_p1() {
    tmp_195_6_1_fu_32297_p1 = esl_zext<64,7>(tmp_194_6_1_fu_32291_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_2_fu_32342_p1() {
    tmp_195_6_2_fu_32342_p1 = esl_zext<64,7>(tmp_194_6_2_fu_32337_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_3_fu_32352_p1() {
    tmp_195_6_3_fu_32352_p1 = esl_zext<64,7>(tmp_194_6_3_fu_32347_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_4_fu_32387_p1() {
    tmp_195_6_4_fu_32387_p1 = esl_zext<64,7>(tmp_194_6_4_fu_32382_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_5_fu_32397_p1() {
    tmp_195_6_5_fu_32397_p1 = esl_zext<64,7>(tmp_194_6_5_fu_32392_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_6_fu_32432_p1() {
    tmp_195_6_6_fu_32432_p1 = esl_zext<64,7>(tmp_194_6_6_fu_32427_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_7_fu_32442_p1() {
    tmp_195_6_7_fu_32442_p1 = esl_zext<64,7>(tmp_194_6_7_fu_32437_p2.read());
}

void batch_align2D_region::thread_tmp_195_6_fu_32282_p1() {
    tmp_195_6_fu_32282_p1 = esl_zext<64,7>(tmp_194_6_fu_32276_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_1_fu_35464_p1() {
    tmp_195_7_1_fu_35464_p1 = esl_zext<64,7>(tmp_194_7_1_fu_35458_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_2_fu_35509_p1() {
    tmp_195_7_2_fu_35509_p1 = esl_zext<64,7>(tmp_194_7_2_fu_35504_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_3_fu_35519_p1() {
    tmp_195_7_3_fu_35519_p1 = esl_zext<64,7>(tmp_194_7_3_fu_35514_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_4_fu_35554_p1() {
    tmp_195_7_4_fu_35554_p1 = esl_zext<64,7>(tmp_194_7_4_fu_35549_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_5_fu_35564_p1() {
    tmp_195_7_5_fu_35564_p1 = esl_zext<64,7>(tmp_194_7_5_fu_35559_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_6_fu_35599_p1() {
    tmp_195_7_6_fu_35599_p1 = esl_zext<64,7>(tmp_194_7_6_fu_35594_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_7_fu_35609_p1() {
    tmp_195_7_7_fu_35609_p1 = esl_zext<64,7>(tmp_194_7_7_fu_35604_p2.read());
}

void batch_align2D_region::thread_tmp_195_7_fu_35449_p1() {
    tmp_195_7_fu_35449_p1 = esl_zext<64,7>(tmp_194_7_fu_35443_p2.read());
}

void batch_align2D_region::thread_tmp_195_fu_14362_p3() {
    tmp_195_fu_14362_p3 = (!tmp_181_fu_14264_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_181_fu_14264_p2.read()[0].to_bool())? ref_patch_dy_0_63_3_fu_884.read(): ref_patch_dy_0_63_59_fu_1108.read());
}

void batch_align2D_region::thread_tmp_196_0_1_fu_13646_p1() {
    tmp_196_0_1_fu_13646_p1 = esl_zext<32,8>(ref_patch_with_borde_27_reg_39057.read());
}

void batch_align2D_region::thread_tmp_196_0_2_fu_13659_p1() {
    tmp_196_0_2_fu_13659_p1 = esl_zext<32,8>(ref_patch_with_borde_29_reg_39087.read());
}

void batch_align2D_region::thread_tmp_196_0_3_fu_13672_p1() {
    tmp_196_0_3_fu_13672_p1 = esl_zext<32,8>(ref_patch_with_borde_31_reg_39092.read());
}

void batch_align2D_region::thread_tmp_196_0_4_fu_13676_p1() {
    tmp_196_0_4_fu_13676_p1 = esl_zext<32,8>(ref_patch_with_borde_33_reg_39122.read());
}

void batch_align2D_region::thread_tmp_196_0_5_fu_13680_p1() {
    tmp_196_0_5_fu_13680_p1 = esl_zext<32,8>(ref_patch_with_borde_35_reg_39127.read());
}

void batch_align2D_region::thread_tmp_196_0_6_fu_13684_p1() {
    tmp_196_0_6_fu_13684_p1 = esl_zext<32,8>(ref_patch_with_borde_37_reg_39157.read());
}

void batch_align2D_region::thread_tmp_196_0_7_fu_13688_p1() {
    tmp_196_0_7_fu_13688_p1 = esl_zext<32,8>(ref_patch_with_borde_39_reg_39162.read());
}

void batch_align2D_region::thread_tmp_196_1_1_fu_16813_p1() {
    tmp_196_1_1_fu_16813_p1 = esl_zext<32,8>(ref_patch_with_borde_51_reg_40725.read());
}

void batch_align2D_region::thread_tmp_196_1_2_fu_16826_p1() {
    tmp_196_1_2_fu_16826_p1 = esl_zext<32,8>(ref_patch_with_borde_53_reg_40755.read());
}

void batch_align2D_region::thread_tmp_196_1_3_fu_16839_p1() {
    tmp_196_1_3_fu_16839_p1 = esl_zext<32,8>(ref_patch_with_borde_55_reg_40760.read());
}

void batch_align2D_region::thread_tmp_196_1_4_fu_16843_p1() {
    tmp_196_1_4_fu_16843_p1 = esl_zext<32,8>(ref_patch_with_borde_57_reg_40790.read());
}

void batch_align2D_region::thread_tmp_196_1_5_fu_16847_p1() {
    tmp_196_1_5_fu_16847_p1 = esl_zext<32,8>(ref_patch_with_borde_59_reg_40795.read());
}

void batch_align2D_region::thread_tmp_196_1_6_fu_16851_p1() {
    tmp_196_1_6_fu_16851_p1 = esl_zext<32,8>(ref_patch_with_borde_61_reg_40825.read());
}

void batch_align2D_region::thread_tmp_196_1_7_fu_16855_p1() {
    tmp_196_1_7_fu_16855_p1 = esl_zext<32,8>(ref_patch_with_borde_63_reg_40830.read());
}

void batch_align2D_region::thread_tmp_196_1_fu_16496_p1() {
    tmp_196_1_fu_16496_p1 = esl_zext<32,8>(ref_patch_with_borde_6_q1.read());
}

void batch_align2D_region::thread_tmp_196_2_1_fu_19980_p1() {
    tmp_196_2_1_fu_19980_p1 = esl_zext<32,8>(ref_patch_with_borde_75_reg_42393.read());
}

void batch_align2D_region::thread_tmp_196_2_2_fu_19993_p1() {
    tmp_196_2_2_fu_19993_p1 = esl_zext<32,8>(ref_patch_with_borde_77_reg_42423.read());
}

void batch_align2D_region::thread_tmp_196_2_3_fu_20006_p1() {
    tmp_196_2_3_fu_20006_p1 = esl_zext<32,8>(ref_patch_with_borde_79_reg_42428.read());
}

void batch_align2D_region::thread_tmp_196_2_4_fu_20010_p1() {
    tmp_196_2_4_fu_20010_p1 = esl_zext<32,8>(ref_patch_with_borde_81_reg_42458.read());
}

void batch_align2D_region::thread_tmp_196_2_5_fu_20014_p1() {
    tmp_196_2_5_fu_20014_p1 = esl_zext<32,8>(ref_patch_with_borde_83_reg_42463.read());
}

void batch_align2D_region::thread_tmp_196_2_6_fu_20018_p1() {
    tmp_196_2_6_fu_20018_p1 = esl_zext<32,8>(ref_patch_with_borde_85_reg_42493.read());
}

void batch_align2D_region::thread_tmp_196_2_7_fu_20022_p1() {
    tmp_196_2_7_fu_20022_p1 = esl_zext<32,8>(ref_patch_with_borde_87_reg_42498.read());
}

void batch_align2D_region::thread_tmp_196_2_fu_19663_p1() {
    tmp_196_2_fu_19663_p1 = esl_zext<32,8>(ref_patch_with_borde_5_q1.read());
}

void batch_align2D_region::thread_tmp_196_3_1_fu_23147_p1() {
    tmp_196_3_1_fu_23147_p1 = esl_zext<32,8>(ref_patch_with_borde_99_reg_44061.read());
}

void batch_align2D_region::thread_tmp_196_3_2_fu_23160_p1() {
    tmp_196_3_2_fu_23160_p1 = esl_zext<32,8>(ref_patch_with_borde_101_reg_44091.read());
}

void batch_align2D_region::thread_tmp_196_3_3_fu_23173_p1() {
    tmp_196_3_3_fu_23173_p1 = esl_zext<32,8>(ref_patch_with_borde_103_reg_44096.read());
}

void batch_align2D_region::thread_tmp_196_3_4_fu_23177_p1() {
    tmp_196_3_4_fu_23177_p1 = esl_zext<32,8>(ref_patch_with_borde_105_reg_44126.read());
}

void batch_align2D_region::thread_tmp_196_3_5_fu_23181_p1() {
    tmp_196_3_5_fu_23181_p1 = esl_zext<32,8>(ref_patch_with_borde_107_reg_44131.read());
}

void batch_align2D_region::thread_tmp_196_3_6_fu_23185_p1() {
    tmp_196_3_6_fu_23185_p1 = esl_zext<32,8>(ref_patch_with_borde_109_reg_44161.read());
}

void batch_align2D_region::thread_tmp_196_3_7_fu_23189_p1() {
    tmp_196_3_7_fu_23189_p1 = esl_zext<32,8>(ref_patch_with_borde_111_reg_44166.read());
}

void batch_align2D_region::thread_tmp_196_3_fu_22830_p1() {
    tmp_196_3_fu_22830_p1 = esl_zext<32,8>(ref_patch_with_borde_4_q1.read());
}

void batch_align2D_region::thread_tmp_196_4_1_fu_26314_p1() {
    tmp_196_4_1_fu_26314_p1 = esl_zext<32,8>(ref_patch_with_borde_123_reg_45729.read());
}

void batch_align2D_region::thread_tmp_196_4_2_fu_26327_p1() {
    tmp_196_4_2_fu_26327_p1 = esl_zext<32,8>(ref_patch_with_borde_125_reg_45759.read());
}

void batch_align2D_region::thread_tmp_196_4_3_fu_26340_p1() {
    tmp_196_4_3_fu_26340_p1 = esl_zext<32,8>(ref_patch_with_borde_127_reg_45764.read());
}

void batch_align2D_region::thread_tmp_196_4_4_fu_26344_p1() {
    tmp_196_4_4_fu_26344_p1 = esl_zext<32,8>(ref_patch_with_borde_129_reg_45794.read());
}

void batch_align2D_region::thread_tmp_196_4_5_fu_26348_p1() {
    tmp_196_4_5_fu_26348_p1 = esl_zext<32,8>(ref_patch_with_borde_131_reg_45799.read());
}

void batch_align2D_region::thread_tmp_196_4_6_fu_26352_p1() {
    tmp_196_4_6_fu_26352_p1 = esl_zext<32,8>(ref_patch_with_borde_133_reg_45829.read());
}

void batch_align2D_region::thread_tmp_196_4_7_fu_26356_p1() {
    tmp_196_4_7_fu_26356_p1 = esl_zext<32,8>(ref_patch_with_borde_135_reg_45834.read());
}

void batch_align2D_region::thread_tmp_196_4_fu_25997_p1() {
    tmp_196_4_fu_25997_p1 = esl_zext<32,8>(ref_patch_with_borde_3_q1.read());
}

void batch_align2D_region::thread_tmp_196_5_1_fu_29482_p1() {
    tmp_196_5_1_fu_29482_p1 = esl_zext<32,8>(ref_patch_with_borde_147_reg_47391.read());
}

void batch_align2D_region::thread_tmp_196_5_2_fu_29495_p1() {
    tmp_196_5_2_fu_29495_p1 = esl_zext<32,8>(ref_patch_with_borde_149_reg_47421.read());
}

void batch_align2D_region::thread_tmp_196_5_3_fu_29508_p1() {
    tmp_196_5_3_fu_29508_p1 = esl_zext<32,8>(ref_patch_with_borde_151_reg_47426.read());
}

void batch_align2D_region::thread_tmp_196_5_4_fu_29512_p1() {
    tmp_196_5_4_fu_29512_p1 = esl_zext<32,8>(ref_patch_with_borde_153_reg_47456.read());
}

void batch_align2D_region::thread_tmp_196_5_5_fu_29516_p1() {
    tmp_196_5_5_fu_29516_p1 = esl_zext<32,8>(ref_patch_with_borde_155_reg_47461.read());
}

void batch_align2D_region::thread_tmp_196_5_6_fu_29520_p1() {
    tmp_196_5_6_fu_29520_p1 = esl_zext<32,8>(ref_patch_with_borde_157_reg_47491.read());
}

void batch_align2D_region::thread_tmp_196_5_7_fu_29524_p1() {
    tmp_196_5_7_fu_29524_p1 = esl_zext<32,8>(ref_patch_with_borde_159_reg_47496.read());
}

void batch_align2D_region::thread_tmp_196_5_fu_29165_p1() {
    tmp_196_5_fu_29165_p1 = esl_zext<32,8>(ref_patch_with_borde_2_q1.read());
}

void batch_align2D_region::thread_tmp_196_6_1_fu_32649_p1() {
    tmp_196_6_1_fu_32649_p1 = esl_zext<32,8>(ref_patch_with_borde_171_reg_49059.read());
}

void batch_align2D_region::thread_tmp_196_6_2_fu_32662_p1() {
    tmp_196_6_2_fu_32662_p1 = esl_zext<32,8>(ref_patch_with_borde_173_reg_49089.read());
}

void batch_align2D_region::thread_tmp_196_6_3_fu_32675_p1() {
    tmp_196_6_3_fu_32675_p1 = esl_zext<32,8>(ref_patch_with_borde_175_reg_49094.read());
}

void batch_align2D_region::thread_tmp_196_6_4_fu_32679_p1() {
    tmp_196_6_4_fu_32679_p1 = esl_zext<32,8>(ref_patch_with_borde_177_reg_49124.read());
}

void batch_align2D_region::thread_tmp_196_6_5_fu_32683_p1() {
    tmp_196_6_5_fu_32683_p1 = esl_zext<32,8>(ref_patch_with_borde_179_reg_49129.read());
}

void batch_align2D_region::thread_tmp_196_6_6_fu_32687_p1() {
    tmp_196_6_6_fu_32687_p1 = esl_zext<32,8>(ref_patch_with_borde_181_reg_49159.read());
}

void batch_align2D_region::thread_tmp_196_6_7_fu_32691_p1() {
    tmp_196_6_7_fu_32691_p1 = esl_zext<32,8>(ref_patch_with_borde_183_reg_49164.read());
}

void batch_align2D_region::thread_tmp_196_6_fu_32332_p1() {
    tmp_196_6_fu_32332_p1 = esl_zext<32,8>(ref_patch_with_borde_1_q1.read());
}

void batch_align2D_region::thread_tmp_196_7_1_fu_35816_p1() {
    tmp_196_7_1_fu_35816_p1 = esl_zext<32,8>(ref_patch_with_borde_195_reg_50727.read());
}

void batch_align2D_region::thread_tmp_196_7_2_fu_35829_p1() {
    tmp_196_7_2_fu_35829_p1 = esl_zext<32,8>(ref_patch_with_borde_197_reg_50757.read());
}

void batch_align2D_region::thread_tmp_196_7_3_fu_35842_p1() {
    tmp_196_7_3_fu_35842_p1 = esl_zext<32,8>(ref_patch_with_borde_199_reg_50762.read());
}

void batch_align2D_region::thread_tmp_196_7_4_fu_35846_p1() {
    tmp_196_7_4_fu_35846_p1 = esl_zext<32,8>(ref_patch_with_borde_201_reg_50792.read());
}

void batch_align2D_region::thread_tmp_196_7_5_fu_35850_p1() {
    tmp_196_7_5_fu_35850_p1 = esl_zext<32,8>(ref_patch_with_borde_203_reg_50797.read());
}

void batch_align2D_region::thread_tmp_196_7_6_fu_35854_p1() {
    tmp_196_7_6_fu_35854_p1 = esl_zext<32,8>(ref_patch_with_borde_205_reg_50827.read());
}

void batch_align2D_region::thread_tmp_196_7_7_fu_35858_p1() {
    tmp_196_7_7_fu_35858_p1 = esl_zext<32,8>(ref_patch_with_borde_207_reg_50832.read());
}

void batch_align2D_region::thread_tmp_196_7_fu_35499_p1() {
    tmp_196_7_fu_35499_p1 = esl_zext<32,8>(ref_patch_with_borde_q1.read());
}

void batch_align2D_region::thread_tmp_196_fu_14370_p3() {
    tmp_196_fu_14370_p3 = (!tmp_183_fu_14278_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_183_fu_14278_p2.read()[0].to_bool())? ref_patch_dy_0_63_11_fu_916.read(): tmp_195_fu_14362_p3.read());
}

void batch_align2D_region::thread_tmp_197_fu_14378_p3() {
    tmp_197_fu_14378_p3 = (!tmp_185_fu_14292_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_185_fu_14292_p2.read()[0].to_bool())? ref_patch_dy_0_63_19_fu_948.read(): tmp_196_fu_14370_p3.read());
}

void batch_align2D_region::thread_tmp_198_fu_14386_p3() {
    tmp_198_fu_14386_p3 = (!tmp_187_fu_14306_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_187_fu_14306_p2.read()[0].to_bool())? ref_patch_dy_0_63_27_fu_980.read(): tmp_197_fu_14378_p3.read());
}

void batch_align2D_region::thread_tmp_199_fu_14394_p3() {
    tmp_199_fu_14394_p3 = (!tmp_190_fu_14320_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_190_fu_14320_p2.read()[0].to_bool())? ref_patch_dy_0_63_35_fu_1012.read(): tmp_198_fu_14386_p3.read());
}

void batch_align2D_region::thread_tmp_1_fu_11793_p1() {
    tmp_1_fu_11793_p1 = esl_zext<64,30>(my_cur_px_estimate_p_fu_11783_p4.read());
}

void batch_align2D_region::thread_tmp_1_i_i10_fu_28952_p2() {
    tmp_1_i_i10_fu_28952_p2 = (!tmp_V_28_fu_28942_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_28_fu_28942_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i11_fu_28988_p2() {
    tmp_1_i_i11_fu_28988_p2 = (!tmp_V_26_fu_28978_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_26_fu_28978_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i12_fu_32119_p2() {
    tmp_1_i_i12_fu_32119_p2 = (!tmp_V_32_fu_32109_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_32_fu_32109_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i13_fu_32155_p2() {
    tmp_1_i_i13_fu_32155_p2 = (!tmp_V_30_fu_32145_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_30_fu_32145_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i14_fu_35286_p2() {
    tmp_1_i_i14_fu_35286_p2 = (!tmp_V_36_fu_35276_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_36_fu_35276_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i15_fu_35322_p2() {
    tmp_1_i_i15_fu_35322_p2 = (!tmp_V_34_fu_35312_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_34_fu_35312_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i1_fu_16283_p2() {
    tmp_1_i_i1_fu_16283_p2 = (!tmp_V_12_fu_16273_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_12_fu_16273_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i2_fu_16319_p2() {
    tmp_1_i_i2_fu_16319_p2 = (!tmp_V_10_fu_16309_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_10_fu_16309_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i3_fu_19450_p2() {
    tmp_1_i_i3_fu_19450_p2 = (!tmp_V_16_fu_19440_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_16_fu_19440_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i4_fu_19486_p2() {
    tmp_1_i_i4_fu_19486_p2 = (!tmp_V_14_fu_19476_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_14_fu_19476_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i5_fu_13116_p2() {
    tmp_1_i_i5_fu_13116_p2 = (!tmp_V_8_fu_13106_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_8_fu_13106_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i6_fu_22617_p2() {
    tmp_1_i_i6_fu_22617_p2 = (!tmp_V_20_fu_22607_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_20_fu_22607_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i7_fu_22653_p2() {
    tmp_1_i_i7_fu_22653_p2 = (!tmp_V_18_fu_22643_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_18_fu_22643_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i8_fu_25784_p2() {
    tmp_1_i_i8_fu_25784_p2 = (!tmp_V_24_fu_25774_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_24_fu_25774_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i9_fu_25820_p2() {
    tmp_1_i_i9_fu_25820_p2 = (!tmp_V_22_fu_25810_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_22_fu_25810_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_1_i_i_fu_13152_p2() {
    tmp_1_i_i_fu_13152_p2 = (!tmp_V_6_fu_13142_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_6_fu_13142_p1.read() != ap_const_lv23_0);
}

void batch_align2D_region::thread_tmp_200_fu_14402_p3() {
    tmp_200_fu_14402_p3 = (!tmp_192_fu_14334_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_192_fu_14334_p2.read()[0].to_bool())? ref_patch_dy_0_63_43_fu_1044.read(): tmp_199_fu_14394_p3.read());
}

void batch_align2D_region::thread_tmp_201_fu_14471_p2() {
    tmp_201_fu_14471_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_202_fu_14477_p3() {
    tmp_202_fu_14477_p3 = (!tmp_201_fu_14471_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_201_fu_14471_p2.read()[0].to_bool())? ref_patch_dx_0_63_11_fu_660.read(): ref_patch_dx_0_63_60_fu_856.read());
}

void batch_align2D_region::thread_tmp_203_fu_14485_p2() {
    tmp_203_fu_14485_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_205_0_065_t_fu_13834_p2() {
    tmp_205_0_065_t_fu_13834_p2 = (tmp_1392_reg_39011_pp5_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_0_1_t_fu_14033_p2() {
    tmp_205_0_1_t_fu_14033_p2 = (!tmp_205_0_065_t_reg_39382.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_0_065_t_reg_39382.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_0_266_t_fu_14259_p2() {
    tmp_205_0_266_t_fu_14259_p2 = (tmp_1392_reg_39011_pp5_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_0_3_t_fu_14466_p2() {
    tmp_205_0_3_t_fu_14466_p2 = (!tmp_205_0_266_t_reg_39489.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_0_266_t_reg_39489.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_0_4_t_fu_14646_p2() {
    tmp_205_0_4_t_fu_14646_p2 = (!tmp_205_0_266_t_reg_39489.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_0_266_t_reg_39489.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_0_5_t_fu_14872_p2() {
    tmp_205_0_5_t_fu_14872_p2 = (!tmp_205_0_266_t_reg_39489.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_0_266_t_reg_39489.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_0_667_t_fu_15079_p2() {
    tmp_205_0_667_t_fu_15079_p2 = (tmp_1392_reg_39011_pp5_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_1_062_t_fu_17001_p2() {
    tmp_205_1_062_t_fu_17001_p2 = (tmp_1407_reg_40679_pp7_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_1_1_t_fu_17200_p2() {
    tmp_205_1_1_t_fu_17200_p2 = (!tmp_205_1_062_t_reg_41050.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_1_062_t_reg_41050.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_1_263_t_fu_17426_p2() {
    tmp_205_1_263_t_fu_17426_p2 = (tmp_1407_reg_40679_pp7_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_1_3_t_fu_17633_p2() {
    tmp_205_1_3_t_fu_17633_p2 = (!tmp_205_1_263_t_reg_41157.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_1_263_t_reg_41157.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_1_4_t_fu_17813_p2() {
    tmp_205_1_4_t_fu_17813_p2 = (!tmp_205_1_263_t_reg_41157.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_1_263_t_reg_41157.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_1_5_t_fu_18039_p2() {
    tmp_205_1_5_t_fu_18039_p2 = (!tmp_205_1_263_t_reg_41157.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_1_263_t_reg_41157.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_1_664_t_fu_18246_p2() {
    tmp_205_1_664_t_fu_18246_p2 = (tmp_1407_reg_40679_pp7_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_2_059_t_fu_20168_p2() {
    tmp_205_2_059_t_fu_20168_p2 = (tmp_1447_reg_42347_pp9_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_2_1_t_fu_20367_p2() {
    tmp_205_2_1_t_fu_20367_p2 = (!tmp_205_2_059_t_reg_42718.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_2_059_t_reg_42718.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_2_260_t_fu_20593_p2() {
    tmp_205_2_260_t_fu_20593_p2 = (tmp_1447_reg_42347_pp9_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_2_3_t_fu_20800_p2() {
    tmp_205_2_3_t_fu_20800_p2 = (!tmp_205_2_260_t_reg_42825.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_2_260_t_reg_42825.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_2_4_t_fu_20980_p2() {
    tmp_205_2_4_t_fu_20980_p2 = (!tmp_205_2_260_t_reg_42825.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_2_260_t_reg_42825.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_2_5_t_fu_21206_p2() {
    tmp_205_2_5_t_fu_21206_p2 = (!tmp_205_2_260_t_reg_42825.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_2_260_t_reg_42825.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_2_661_t_fu_21413_p2() {
    tmp_205_2_661_t_fu_21413_p2 = (tmp_1447_reg_42347_pp9_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_3_056_t_fu_23335_p2() {
    tmp_205_3_056_t_fu_23335_p2 = (tmp_1458_reg_44015_pp11_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_3_1_t_fu_23534_p2() {
    tmp_205_3_1_t_fu_23534_p2 = (!tmp_205_3_056_t_reg_44386.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_3_056_t_reg_44386.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_3_257_t_fu_23760_p2() {
    tmp_205_3_257_t_fu_23760_p2 = (tmp_1458_reg_44015_pp11_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_3_3_t_fu_23967_p2() {
    tmp_205_3_3_t_fu_23967_p2 = (!tmp_205_3_257_t_reg_44493.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_3_257_t_reg_44493.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_3_4_t_fu_24147_p2() {
    tmp_205_3_4_t_fu_24147_p2 = (!tmp_205_3_257_t_reg_44493.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_3_257_t_reg_44493.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_3_5_t_fu_24373_p2() {
    tmp_205_3_5_t_fu_24373_p2 = (!tmp_205_3_257_t_reg_44493.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_3_257_t_reg_44493.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_3_658_t_fu_24580_p2() {
    tmp_205_3_658_t_fu_24580_p2 = (tmp_1458_reg_44015_pp11_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_4_053_t_fu_26505_p2() {
    tmp_205_4_053_t_fu_26505_p2 = (tmp_1469_reg_45683_pp13_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_4_1_t_fu_26702_p2() {
    tmp_205_4_1_t_fu_26702_p2 = (!tmp_205_4_053_t_reg_46054.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_4_053_t_reg_46054.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_4_254_t_fu_26928_p2() {
    tmp_205_4_254_t_fu_26928_p2 = (tmp_1469_reg_45683_pp13_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_4_3_t_fu_27135_p2() {
    tmp_205_4_3_t_fu_27135_p2 = (!tmp_205_4_254_t_reg_46155.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_4_254_t_reg_46155.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_4_4_t_fu_27315_p2() {
    tmp_205_4_4_t_fu_27315_p2 = (!tmp_205_4_254_t_reg_46155.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_4_254_t_reg_46155.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_4_5_t_fu_27541_p2() {
    tmp_205_4_5_t_fu_27541_p2 = (!tmp_205_4_254_t_reg_46155.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_4_254_t_reg_46155.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_4_655_t_fu_27748_p2() {
    tmp_205_4_655_t_fu_27748_p2 = (tmp_1469_reg_45683_pp13_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_5_050_t_fu_29670_p2() {
    tmp_205_5_050_t_fu_29670_p2 = (tmp_1480_reg_47345_pp15_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_5_1_t_fu_29869_p2() {
    tmp_205_5_1_t_fu_29869_p2 = (!tmp_205_5_050_t_reg_47716.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_5_050_t_reg_47716.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_5_251_t_fu_30095_p2() {
    tmp_205_5_251_t_fu_30095_p2 = (tmp_1480_reg_47345_pp15_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_5_3_t_fu_30302_p2() {
    tmp_205_5_3_t_fu_30302_p2 = (!tmp_205_5_251_t_reg_47823.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_5_251_t_reg_47823.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_5_4_t_fu_30482_p2() {
    tmp_205_5_4_t_fu_30482_p2 = (!tmp_205_5_251_t_reg_47823.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_5_251_t_reg_47823.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_5_5_t_fu_30708_p2() {
    tmp_205_5_5_t_fu_30708_p2 = (!tmp_205_5_251_t_reg_47823.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_5_251_t_reg_47823.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_5_652_t_fu_30915_p2() {
    tmp_205_5_652_t_fu_30915_p2 = (tmp_1480_reg_47345_pp15_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_6_047_t_fu_32837_p2() {
    tmp_205_6_047_t_fu_32837_p2 = (tmp_1491_reg_49013_pp17_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_6_1_t_fu_33036_p2() {
    tmp_205_6_1_t_fu_33036_p2 = (!tmp_205_6_047_t_reg_49384.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_6_047_t_reg_49384.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_6_248_t_fu_33262_p2() {
    tmp_205_6_248_t_fu_33262_p2 = (tmp_1491_reg_49013_pp17_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_6_3_t_fu_33469_p2() {
    tmp_205_6_3_t_fu_33469_p2 = (!tmp_205_6_248_t_reg_49491.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_6_248_t_reg_49491.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_6_4_t_fu_33649_p2() {
    tmp_205_6_4_t_fu_33649_p2 = (!tmp_205_6_248_t_reg_49491.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_6_248_t_reg_49491.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_6_5_t_fu_33875_p2() {
    tmp_205_6_5_t_fu_33875_p2 = (!tmp_205_6_248_t_reg_49491.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_6_248_t_reg_49491.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_6_649_t_fu_34082_p2() {
    tmp_205_6_649_t_fu_34082_p2 = (tmp_1491_reg_49013_pp17_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_7_044_t_fu_36004_p2() {
    tmp_205_7_044_t_fu_36004_p2 = (tmp_1502_reg_50681_pp19_iter1_reg.read() | ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_205_7_1_t_fu_36203_p2() {
    tmp_205_7_1_t_fu_36203_p2 = (!tmp_205_7_044_t_reg_51052.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_7_044_t_reg_51052.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_7_245_t_fu_36429_p2() {
    tmp_205_7_245_t_fu_36429_p2 = (tmp_1502_reg_50681_pp19_iter1_reg.read() | ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_205_7_3_t_fu_36636_p2() {
    tmp_205_7_3_t_fu_36636_p2 = (!tmp_205_7_245_t_reg_51159.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_7_245_t_reg_51159.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D_region::thread_tmp_205_7_4_t_fu_36816_p2() {
    tmp_205_7_4_t_fu_36816_p2 = (!tmp_205_7_245_t_reg_51159.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_7_245_t_reg_51159.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void batch_align2D_region::thread_tmp_205_7_5_t_fu_37042_p2() {
    tmp_205_7_5_t_fu_37042_p2 = (!tmp_205_7_245_t_reg_51159.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_205_7_245_t_reg_51159.read()) + sc_biguint<6>(ap_const_lv6_3));
}

void batch_align2D_region::thread_tmp_205_7_646_t_fu_37249_p2() {
    tmp_205_7_646_t_fu_37249_p2 = (tmp_1502_reg_50681_pp19_iter1_reg.read() | ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_205_fu_14491_p3() {
    tmp_205_fu_14491_p3 = (!tmp_203_fu_14485_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_203_fu_14485_p2.read()[0].to_bool())? ref_patch_dx_0_63_18_fu_688.read(): tmp_202_fu_14477_p3.read());
}

void batch_align2D_region::thread_tmp_208_fu_14499_p2() {
    tmp_208_fu_14499_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_209_fu_14505_p3() {
    tmp_209_fu_14505_p3 = (!tmp_208_fu_14499_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_208_fu_14499_p2.read()[0].to_bool())? ref_patch_dx_0_63_25_fu_716.read(): tmp_205_fu_14491_p3.read());
}

void batch_align2D_region::thread_tmp_20_fu_13761_p2() {
    tmp_20_fu_13761_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_210_fu_14513_p2() {
    tmp_210_fu_14513_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_211_fu_14519_p3() {
    tmp_211_fu_14519_p3 = (!tmp_210_fu_14513_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_210_fu_14513_p2.read()[0].to_bool())? ref_patch_dx_0_63_32_fu_744.read(): tmp_209_fu_14505_p3.read());
}

void batch_align2D_region::thread_tmp_212_fu_14527_p2() {
    tmp_212_fu_14527_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_213_fu_14533_p3() {
    tmp_213_fu_14533_p3 = (!tmp_212_fu_14527_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_212_fu_14527_p2.read()[0].to_bool())? ref_patch_dx_0_63_39_fu_772.read(): tmp_211_fu_14519_p3.read());
}

void batch_align2D_region::thread_tmp_214_fu_14541_p2() {
    tmp_214_fu_14541_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_215_fu_14547_p3() {
    tmp_215_fu_14547_p3 = (!tmp_214_fu_14541_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_214_fu_14541_p2.read()[0].to_bool())? ref_patch_dx_0_63_46_fu_800.read(): tmp_213_fu_14533_p3.read());
}

void batch_align2D_region::thread_tmp_216_fu_14555_p2() {
    tmp_216_fu_14555_p2 = (!tmp_205_0_3_t_fu_14466_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_3_t_fu_14466_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_217_fu_14569_p3() {
    tmp_217_fu_14569_p3 = (!tmp_201_fu_14471_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_201_fu_14471_p2.read()[0].to_bool())? ref_patch_dy_0_63_4_fu_888.read(): ref_patch_dy_0_63_60_fu_1112.read());
}

void batch_align2D_region::thread_tmp_218_fu_14577_p3() {
    tmp_218_fu_14577_p3 = (!tmp_203_fu_14485_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_203_fu_14485_p2.read()[0].to_bool())? ref_patch_dy_0_63_12_fu_920.read(): tmp_217_fu_14569_p3.read());
}

void batch_align2D_region::thread_tmp_219_fu_14585_p3() {
    tmp_219_fu_14585_p3 = (!tmp_208_fu_14499_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_208_fu_14499_p2.read()[0].to_bool())? ref_patch_dy_0_63_20_fu_952.read(): tmp_218_fu_14577_p3.read());
}

void batch_align2D_region::thread_tmp_21_fu_13766_p3() {
    tmp_21_fu_13766_p3 = (!tmp_20_fu_13761_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_20_fu_13761_p2.read()[0].to_bool())? ref_patch_dy_0_63_24_fu_968.read(): tmp_18_fu_13753_p3.read());
}

void batch_align2D_region::thread_tmp_220_fu_14593_p3() {
    tmp_220_fu_14593_p3 = (!tmp_210_fu_14513_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_210_fu_14513_p2.read()[0].to_bool())? ref_patch_dy_0_63_28_fu_984.read(): tmp_219_fu_14585_p3.read());
}

void batch_align2D_region::thread_tmp_221_fu_14601_p3() {
    tmp_221_fu_14601_p3 = (!tmp_212_fu_14527_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_212_fu_14527_p2.read()[0].to_bool())? ref_patch_dy_0_63_36_fu_1016.read(): tmp_220_fu_14593_p3.read());
}

void batch_align2D_region::thread_tmp_222_fu_14609_p3() {
    tmp_222_fu_14609_p3 = (!tmp_214_fu_14541_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_214_fu_14541_p2.read()[0].to_bool())? ref_patch_dy_0_63_44_fu_1048.read(): tmp_221_fu_14601_p3.read());
}

void batch_align2D_region::thread_tmp_223_fu_14651_p2() {
    tmp_223_fu_14651_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_224_fu_14657_p3() {
    tmp_224_fu_14657_p3 = (!tmp_223_fu_14651_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_223_fu_14651_p2.read()[0].to_bool())? ref_patch_dx_0_63_12_fu_664.read(): ref_patch_dx_0_63_61_fu_860.read());
}

void batch_align2D_region::thread_tmp_225_fu_14665_p2() {
    tmp_225_fu_14665_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_226_fu_14671_p3() {
    tmp_226_fu_14671_p3 = (!tmp_225_fu_14665_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_225_fu_14665_p2.read()[0].to_bool())? ref_patch_dx_0_63_19_fu_692.read(): tmp_224_fu_14657_p3.read());
}

void batch_align2D_region::thread_tmp_227_fu_14679_p2() {
    tmp_227_fu_14679_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_228_fu_14685_p3() {
    tmp_228_fu_14685_p3 = (!tmp_227_fu_14679_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_227_fu_14679_p2.read()[0].to_bool())? ref_patch_dx_0_63_26_fu_720.read(): tmp_226_fu_14671_p3.read());
}

void batch_align2D_region::thread_tmp_229_fu_14693_p2() {
    tmp_229_fu_14693_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_22_fu_13774_p2() {
    tmp_22_fu_13774_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_230_fu_14699_p3() {
    tmp_230_fu_14699_p3 = (!tmp_229_fu_14693_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_229_fu_14693_p2.read()[0].to_bool())? ref_patch_dx_0_63_33_fu_748.read(): tmp_228_fu_14685_p3.read());
}

void batch_align2D_region::thread_tmp_231_fu_14707_p2() {
    tmp_231_fu_14707_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_232_fu_14713_p3() {
    tmp_232_fu_14713_p3 = (!tmp_231_fu_14707_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_231_fu_14707_p2.read()[0].to_bool())? ref_patch_dx_0_63_40_fu_776.read(): tmp_230_fu_14699_p3.read());
}

void batch_align2D_region::thread_tmp_233_fu_14721_p2() {
    tmp_233_fu_14721_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_234_fu_14727_p3() {
    tmp_234_fu_14727_p3 = (!tmp_233_fu_14721_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_233_fu_14721_p2.read()[0].to_bool())? ref_patch_dx_0_63_47_fu_804.read(): tmp_232_fu_14713_p3.read());
}

void batch_align2D_region::thread_tmp_235_fu_14735_p2() {
    tmp_235_fu_14735_p2 = (!tmp_205_0_4_t_fu_14646_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_4_t_fu_14646_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_236_fu_14775_p3() {
    tmp_236_fu_14775_p3 = (!tmp_223_reg_39516.read()[0].is_01())? sc_lv<32>(): ((tmp_223_reg_39516.read()[0].to_bool())? ref_patch_dy_0_63_5_fu_892.read(): ref_patch_dy_0_63_61_fu_1116.read());
}

void batch_align2D_region::thread_tmp_237_fu_14782_p3() {
    tmp_237_fu_14782_p3 = (!tmp_225_reg_39521.read()[0].is_01())? sc_lv<32>(): ((tmp_225_reg_39521.read()[0].to_bool())? ref_patch_dy_0_63_13_fu_924.read(): tmp_236_fu_14775_p3.read());
}

void batch_align2D_region::thread_tmp_238_fu_14789_p3() {
    tmp_238_fu_14789_p3 = (!tmp_227_reg_39526.read()[0].is_01())? sc_lv<32>(): ((tmp_227_reg_39526.read()[0].to_bool())? ref_patch_dy_0_63_21_fu_956.read(): tmp_237_fu_14782_p3.read());
}

void batch_align2D_region::thread_tmp_239_fu_14796_p3() {
    tmp_239_fu_14796_p3 = (!tmp_229_reg_39531.read()[0].is_01())? sc_lv<32>(): ((tmp_229_reg_39531.read()[0].to_bool())? ref_patch_dy_0_63_29_fu_988.read(): tmp_238_fu_14789_p3.read());
}

void batch_align2D_region::thread_tmp_23_fu_13779_p3() {
    tmp_23_fu_13779_p3 = (!tmp_22_fu_13774_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_22_fu_13774_p2.read()[0].to_bool())? ref_patch_dy_0_63_32_fu_1000.read(): tmp_21_fu_13766_p3.read());
}

void batch_align2D_region::thread_tmp_240_fu_14803_p3() {
    tmp_240_fu_14803_p3 = (!tmp_231_reg_39536.read()[0].is_01())? sc_lv<32>(): ((tmp_231_reg_39536.read()[0].to_bool())? ref_patch_dy_0_63_37_fu_1020.read(): tmp_239_fu_14796_p3.read());
}

void batch_align2D_region::thread_tmp_241_fu_14810_p3() {
    tmp_241_fu_14810_p3 = (!tmp_233_reg_39541.read()[0].is_01())? sc_lv<32>(): ((tmp_233_reg_39541.read()[0].to_bool())? ref_patch_dy_0_63_45_fu_1052.read(): tmp_240_fu_14803_p3.read());
}

void batch_align2D_region::thread_tmp_242_fu_14877_p2() {
    tmp_242_fu_14877_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_243_fu_14883_p3() {
    tmp_243_fu_14883_p3 = (!tmp_242_fu_14877_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_242_fu_14877_p2.read()[0].to_bool())? ref_patch_dx_0_63_13_fu_668.read(): ref_patch_dx_0_63_62_fu_864.read());
}

void batch_align2D_region::thread_tmp_244_fu_14891_p2() {
    tmp_244_fu_14891_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_245_fu_14897_p3() {
    tmp_245_fu_14897_p3 = (!tmp_244_fu_14891_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_244_fu_14891_p2.read()[0].to_bool())? ref_patch_dx_0_63_20_fu_696.read(): tmp_243_fu_14883_p3.read());
}

void batch_align2D_region::thread_tmp_246_fu_14905_p2() {
    tmp_246_fu_14905_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_247_fu_14911_p3() {
    tmp_247_fu_14911_p3 = (!tmp_246_fu_14905_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_246_fu_14905_p2.read()[0].to_bool())? ref_patch_dx_0_63_27_fu_724.read(): tmp_245_fu_14897_p3.read());
}

void batch_align2D_region::thread_tmp_248_fu_14919_p2() {
    tmp_248_fu_14919_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_249_fu_14925_p3() {
    tmp_249_fu_14925_p3 = (!tmp_248_fu_14919_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_248_fu_14919_p2.read()[0].to_bool())? ref_patch_dx_0_63_34_fu_752.read(): tmp_247_fu_14911_p3.read());
}

void batch_align2D_region::thread_tmp_24_fu_13787_p2() {
    tmp_24_fu_13787_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_250_fu_14933_p2() {
    tmp_250_fu_14933_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_251_fu_14939_p3() {
    tmp_251_fu_14939_p3 = (!tmp_250_fu_14933_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_250_fu_14933_p2.read()[0].to_bool())? ref_patch_dx_0_63_41_fu_780.read(): tmp_249_fu_14925_p3.read());
}

void batch_align2D_region::thread_tmp_252_fu_14947_p2() {
    tmp_252_fu_14947_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_253_fu_14953_p3() {
    tmp_253_fu_14953_p3 = (!tmp_252_fu_14947_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_252_fu_14947_p2.read()[0].to_bool())? ref_patch_dx_0_63_48_fu_808.read(): tmp_251_fu_14939_p3.read());
}

void batch_align2D_region::thread_tmp_256_fu_14961_p2() {
    tmp_256_fu_14961_p2 = (!tmp_205_0_5_t_fu_14872_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_5_t_fu_14872_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_257_fu_14975_p3() {
    tmp_257_fu_14975_p3 = (!tmp_242_fu_14877_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_242_fu_14877_p2.read()[0].to_bool())? ref_patch_dy_0_63_6_fu_896.read(): ref_patch_dy_0_63_62_fu_1120.read());
}

void batch_align2D_region::thread_tmp_258_fu_14983_p3() {
    tmp_258_fu_14983_p3 = (!tmp_244_fu_14891_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_244_fu_14891_p2.read()[0].to_bool())? ref_patch_dy_0_63_14_fu_928.read(): tmp_257_fu_14975_p3.read());
}

void batch_align2D_region::thread_tmp_259_fu_14991_p3() {
    tmp_259_fu_14991_p3 = (!tmp_246_fu_14905_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_246_fu_14905_p2.read()[0].to_bool())? ref_patch_dy_0_63_22_fu_960.read(): tmp_258_fu_14983_p3.read());
}

void batch_align2D_region::thread_tmp_25_fu_13792_p3() {
    tmp_25_fu_13792_p3 = (!tmp_24_fu_13787_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_24_fu_13787_p2.read()[0].to_bool())? ref_patch_dy_0_63_40_fu_1032.read(): tmp_23_fu_13779_p3.read());
}

void batch_align2D_region::thread_tmp_260_fu_14999_p3() {
    tmp_260_fu_14999_p3 = (!tmp_248_fu_14919_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_248_fu_14919_p2.read()[0].to_bool())? ref_patch_dy_0_63_30_fu_992.read(): tmp_259_fu_14991_p3.read());
}

void batch_align2D_region::thread_tmp_261_fu_15007_p3() {
    tmp_261_fu_15007_p3 = (!tmp_250_fu_14933_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_250_fu_14933_p2.read()[0].to_bool())? ref_patch_dy_0_63_38_fu_1024.read(): tmp_260_fu_14999_p3.read());
}

void batch_align2D_region::thread_tmp_262_fu_15015_p3() {
    tmp_262_fu_15015_p3 = (!tmp_252_fu_14947_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_252_fu_14947_p2.read()[0].to_bool())? ref_patch_dy_0_63_46_fu_1056.read(): tmp_261_fu_15007_p3.read());
}

void batch_align2D_region::thread_tmp_263_fu_15084_p2() {
    tmp_263_fu_15084_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_264_fu_15090_p3() {
    tmp_264_fu_15090_p3 = (!tmp_263_fu_15084_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_263_fu_15084_p2.read()[0].to_bool())? ref_patch_dx_0_63_14_fu_672.read(): ref_patch_dx_0_63_63_fu_868.read());
}

void batch_align2D_region::thread_tmp_265_fu_15098_p2() {
    tmp_265_fu_15098_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_266_fu_15104_p3() {
    tmp_266_fu_15104_p3 = (!tmp_265_fu_15098_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_265_fu_15098_p2.read()[0].to_bool())? ref_patch_dx_0_63_21_fu_700.read(): tmp_264_fu_15090_p3.read());
}

void batch_align2D_region::thread_tmp_267_fu_15112_p2() {
    tmp_267_fu_15112_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_268_fu_15118_p3() {
    tmp_268_fu_15118_p3 = (!tmp_267_fu_15112_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_267_fu_15112_p2.read()[0].to_bool())? ref_patch_dx_0_63_28_fu_728.read(): tmp_266_fu_15104_p3.read());
}

void batch_align2D_region::thread_tmp_269_fu_15126_p2() {
    tmp_269_fu_15126_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_26_fu_13800_p2() {
    tmp_26_fu_13800_p2 = (!tmp_1392_reg_39011_pp5_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1392_reg_39011_pp5_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_270_fu_15132_p3() {
    tmp_270_fu_15132_p3 = (!tmp_269_fu_15126_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_269_fu_15126_p2.read()[0].to_bool())? ref_patch_dx_0_63_35_fu_756.read(): tmp_268_fu_15118_p3.read());
}

void batch_align2D_region::thread_tmp_272_fu_16889_p2() {
    tmp_272_fu_16889_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_0);
}

void batch_align2D_region::thread_tmp_273_fu_16894_p3() {
    tmp_273_fu_16894_p3 = (!tmp_272_fu_16889_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_272_fu_16889_p2.read()[0].to_bool())? ref_patch_dy_1_63_fu_1384.read(): ref_patch_dy_1_63_56_fu_1608.read());
}

void batch_align2D_region::thread_tmp_274_fu_16902_p2() {
    tmp_274_fu_16902_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_8);
}

void batch_align2D_region::thread_tmp_275_fu_16907_p3() {
    tmp_275_fu_16907_p3 = (!tmp_274_fu_16902_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_274_fu_16902_p2.read()[0].to_bool())? ref_patch_dy_1_63_8_fu_1416.read(): tmp_273_fu_16894_p3.read());
}

void batch_align2D_region::thread_tmp_276_fu_16915_p2() {
    tmp_276_fu_16915_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_10);
}

void batch_align2D_region::thread_tmp_277_fu_16920_p3() {
    tmp_277_fu_16920_p3 = (!tmp_276_fu_16915_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_276_fu_16915_p2.read()[0].to_bool())? ref_patch_dy_1_63_16_fu_1448.read(): tmp_275_fu_16907_p3.read());
}

void batch_align2D_region::thread_tmp_278_fu_16928_p2() {
    tmp_278_fu_16928_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_18);
}

void batch_align2D_region::thread_tmp_279_fu_16933_p3() {
    tmp_279_fu_16933_p3 = (!tmp_278_fu_16928_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_278_fu_16928_p2.read()[0].to_bool())? ref_patch_dy_1_63_24_fu_1480.read(): tmp_277_fu_16920_p3.read());
}

void batch_align2D_region::thread_tmp_280_fu_16941_p2() {
    tmp_280_fu_16941_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_20);
}

void batch_align2D_region::thread_tmp_281_fu_16946_p3() {
    tmp_281_fu_16946_p3 = (!tmp_280_fu_16941_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_280_fu_16941_p2.read()[0].to_bool())? ref_patch_dy_1_63_32_fu_1512.read(): tmp_279_fu_16933_p3.read());
}

void batch_align2D_region::thread_tmp_282_fu_16954_p2() {
    tmp_282_fu_16954_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_28.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_28);
}

void batch_align2D_region::thread_tmp_283_fu_16959_p3() {
    tmp_283_fu_16959_p3 = (!tmp_282_fu_16954_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_282_fu_16954_p2.read()[0].to_bool())? ref_patch_dy_1_63_40_fu_1544.read(): tmp_281_fu_16946_p3.read());
}

void batch_align2D_region::thread_tmp_284_fu_16967_p2() {
    tmp_284_fu_16967_p2 = (!tmp_1407_reg_40679_pp7_iter1_reg.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1407_reg_40679_pp7_iter1_reg.read() == ap_const_lv6_30);
}

void batch_align2D_region::thread_tmp_285_fu_15140_p2() {
    tmp_285_fu_15140_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_286_fu_15146_p3() {
    tmp_286_fu_15146_p3 = (!tmp_285_fu_15140_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_285_fu_15140_p2.read()[0].to_bool())? ref_patch_dx_0_63_42_fu_784.read(): tmp_270_fu_15132_p3.read());
}

void batch_align2D_region::thread_tmp_287_fu_15154_p2() {
    tmp_287_fu_15154_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_288_fu_15160_p3() {
    tmp_288_fu_15160_p3 = (!tmp_287_fu_15154_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_287_fu_15154_p2.read()[0].to_bool())? ref_patch_dx_0_63_49_fu_812.read(): tmp_286_fu_15146_p3.read());
}

void batch_align2D_region::thread_tmp_289_fu_15168_p2() {
    tmp_289_fu_15168_p2 = (!tmp_205_0_667_t_fu_15079_p2.read().is_01() || !ap_const_lv6_37.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_667_t_fu_15079_p2.read() == ap_const_lv6_37);
}

void batch_align2D_region::thread_tmp_290_fu_15182_p3() {
    tmp_290_fu_15182_p3 = (!tmp_263_fu_15084_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_263_fu_15084_p2.read()[0].to_bool())? ref_patch_dy_0_63_7_fu_900.read(): ref_patch_dy_0_63_63_fu_1124.read());
}

void batch_align2D_region::thread_tmp_291_fu_15190_p3() {
    tmp_291_fu_15190_p3 = (!tmp_265_fu_15098_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_265_fu_15098_p2.read()[0].to_bool())? ref_patch_dy_0_63_15_fu_932.read(): tmp_290_fu_15182_p3.read());
}

void batch_align2D_region::thread_tmp_292_fu_15198_p3() {
    tmp_292_fu_15198_p3 = (!tmp_267_fu_15112_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_267_fu_15112_p2.read()[0].to_bool())? ref_patch_dy_0_63_23_fu_964.read(): tmp_291_fu_15190_p3.read());
}

void batch_align2D_region::thread_tmp_293_fu_15206_p3() {
    tmp_293_fu_15206_p3 = (!tmp_269_fu_15126_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_269_fu_15126_p2.read()[0].to_bool())? ref_patch_dy_0_63_31_fu_996.read(): tmp_292_fu_15198_p3.read());
}

void batch_align2D_region::thread_tmp_294_fu_15214_p3() {
    tmp_294_fu_15214_p3 = (!tmp_285_fu_15140_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_285_fu_15140_p2.read()[0].to_bool())? ref_patch_dy_0_63_39_fu_1028.read(): tmp_293_fu_15206_p3.read());
}

void batch_align2D_region::thread_tmp_295_fu_15222_p3() {
    tmp_295_fu_15222_p3 = (!tmp_287_fu_15154_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_287_fu_15154_p2.read()[0].to_bool())? ref_patch_dy_0_63_47_fu_1060.read(): tmp_294_fu_15214_p3.read());
}

void batch_align2D_region::thread_tmp_2_fu_11813_p1() {
    tmp_2_fu_11813_p1 = esl_sext<64,32>(myRegion_fcoord_ptr.read());
}

void batch_align2D_region::thread_tmp_302_fu_17006_p2() {
    tmp_302_fu_17006_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_303_fu_17012_p3() {
    tmp_303_fu_17012_p3 = (!tmp_302_fu_17006_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_302_fu_17006_p2.read()[0].to_bool())? ref_patch_dx_1_63_8_fu_1160.read(): ref_patch_dx_1_63_57_fu_1356.read());
}

void batch_align2D_region::thread_tmp_304_fu_17020_p2() {
    tmp_304_fu_17020_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_305_fu_17026_p3() {
    tmp_305_fu_17026_p3 = (!tmp_304_fu_17020_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_304_fu_17020_p2.read()[0].to_bool())? ref_patch_dx_1_63_15_fu_1188.read(): tmp_303_fu_17012_p3.read());
}

void batch_align2D_region::thread_tmp_306_fu_17034_p2() {
    tmp_306_fu_17034_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_307_fu_17040_p3() {
    tmp_307_fu_17040_p3 = (!tmp_306_fu_17034_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_306_fu_17034_p2.read()[0].to_bool())? ref_patch_dx_1_63_22_fu_1216.read(): tmp_305_fu_17026_p3.read());
}

void batch_align2D_region::thread_tmp_308_fu_17048_p2() {
    tmp_308_fu_17048_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_309_fu_17054_p3() {
    tmp_309_fu_17054_p3 = (!tmp_308_fu_17048_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_308_fu_17048_p2.read()[0].to_bool())? ref_patch_dx_1_63_29_fu_1244.read(): tmp_307_fu_17040_p3.read());
}

void batch_align2D_region::thread_tmp_310_fu_17062_p2() {
    tmp_310_fu_17062_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_311_fu_17068_p3() {
    tmp_311_fu_17068_p3 = (!tmp_310_fu_17062_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_310_fu_17062_p2.read()[0].to_bool())? ref_patch_dx_1_63_36_fu_1272.read(): tmp_309_fu_17054_p3.read());
}

void batch_align2D_region::thread_tmp_312_fu_17076_p2() {
    tmp_312_fu_17076_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_29.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_29);
}

void batch_align2D_region::thread_tmp_313_fu_17082_p3() {
    tmp_313_fu_17082_p3 = (!tmp_312_fu_17076_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_312_fu_17076_p2.read()[0].to_bool())? ref_patch_dx_1_63_43_fu_1300.read(): tmp_311_fu_17068_p3.read());
}

void batch_align2D_region::thread_tmp_314_fu_17090_p2() {
    tmp_314_fu_17090_p2 = (!tmp_205_1_062_t_fu_17001_p2.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_062_t_fu_17001_p2.read() == ap_const_lv6_31);
}

void batch_align2D_region::thread_tmp_315_fu_17130_p3() {
    tmp_315_fu_17130_p3 = (!tmp_302_reg_41055.read()[0].is_01())? sc_lv<32>(): ((tmp_302_reg_41055.read()[0].to_bool())? ref_patch_dy_1_63_1_fu_1388.read(): ref_patch_dy_1_63_57_fu_1612.read());
}

void batch_align2D_region::thread_tmp_316_fu_17137_p3() {
    tmp_316_fu_17137_p3 = (!tmp_304_reg_41060.read()[0].is_01())? sc_lv<32>(): ((tmp_304_reg_41060.read()[0].to_bool())? ref_patch_dy_1_63_9_fu_1420.read(): tmp_315_fu_17130_p3.read());
}

void batch_align2D_region::thread_tmp_317_fu_17144_p3() {
    tmp_317_fu_17144_p3 = (!tmp_306_reg_41065.read()[0].is_01())? sc_lv<32>(): ((tmp_306_reg_41065.read()[0].to_bool())? ref_patch_dy_1_63_17_fu_1452.read(): tmp_316_fu_17137_p3.read());
}

void batch_align2D_region::thread_tmp_318_fu_17151_p3() {
    tmp_318_fu_17151_p3 = (!tmp_308_reg_41070.read()[0].is_01())? sc_lv<32>(): ((tmp_308_reg_41070.read()[0].to_bool())? ref_patch_dy_1_63_25_fu_1484.read(): tmp_317_fu_17144_p3.read());
}

void batch_align2D_region::thread_tmp_319_fu_17158_p3() {
    tmp_319_fu_17158_p3 = (!tmp_310_reg_41075.read()[0].is_01())? sc_lv<32>(): ((tmp_310_reg_41075.read()[0].to_bool())? ref_patch_dy_1_63_33_fu_1516.read(): tmp_318_fu_17151_p3.read());
}

void batch_align2D_region::thread_tmp_320_fu_17165_p3() {
    tmp_320_fu_17165_p3 = (!tmp_312_reg_41080.read()[0].is_01())? sc_lv<32>(): ((tmp_312_reg_41080.read()[0].to_bool())? ref_patch_dy_1_63_41_fu_1548.read(): tmp_319_fu_17158_p3.read());
}

void batch_align2D_region::thread_tmp_321_fu_17205_p2() {
    tmp_321_fu_17205_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_2);
}

void batch_align2D_region::thread_tmp_322_fu_17211_p3() {
    tmp_322_fu_17211_p3 = (!tmp_321_fu_17205_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_321_fu_17205_p2.read()[0].to_bool())? ref_patch_dx_1_63_9_fu_1164.read(): ref_patch_dx_1_63_58_fu_1360.read());
}

void batch_align2D_region::thread_tmp_323_fu_17219_p2() {
    tmp_323_fu_17219_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_A);
}

void batch_align2D_region::thread_tmp_324_fu_17225_p3() {
    tmp_324_fu_17225_p3 = (!tmp_323_fu_17219_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_323_fu_17219_p2.read()[0].to_bool())? ref_patch_dx_1_63_16_fu_1192.read(): tmp_322_fu_17211_p3.read());
}

void batch_align2D_region::thread_tmp_325_fu_17233_p2() {
    tmp_325_fu_17233_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_12.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_12);
}

void batch_align2D_region::thread_tmp_326_fu_17239_p3() {
    tmp_326_fu_17239_p3 = (!tmp_325_fu_17233_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_325_fu_17233_p2.read()[0].to_bool())? ref_patch_dx_1_63_23_fu_1220.read(): tmp_324_fu_17225_p3.read());
}

void batch_align2D_region::thread_tmp_327_fu_17247_p2() {
    tmp_327_fu_17247_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_1A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_1A);
}

void batch_align2D_region::thread_tmp_328_fu_17253_p3() {
    tmp_328_fu_17253_p3 = (!tmp_327_fu_17247_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_327_fu_17247_p2.read()[0].to_bool())? ref_patch_dx_1_63_30_fu_1248.read(): tmp_326_fu_17239_p3.read());
}

void batch_align2D_region::thread_tmp_329_fu_17261_p2() {
    tmp_329_fu_17261_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_22.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_22);
}

void batch_align2D_region::thread_tmp_330_fu_17267_p3() {
    tmp_330_fu_17267_p3 = (!tmp_329_fu_17261_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_329_fu_17261_p2.read()[0].to_bool())? ref_patch_dx_1_63_37_fu_1276.read(): tmp_328_fu_17253_p3.read());
}

void batch_align2D_region::thread_tmp_331_fu_17275_p2() {
    tmp_331_fu_17275_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_2A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_2A);
}

void batch_align2D_region::thread_tmp_332_fu_17281_p3() {
    tmp_332_fu_17281_p3 = (!tmp_331_fu_17275_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_331_fu_17275_p2.read()[0].to_bool())? ref_patch_dx_1_63_44_fu_1304.read(): tmp_330_fu_17267_p3.read());
}

void batch_align2D_region::thread_tmp_333_fu_17289_p2() {
    tmp_333_fu_17289_p2 = (!tmp_205_1_1_t_fu_17200_p2.read().is_01() || !ap_const_lv6_32.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_1_t_fu_17200_p2.read() == ap_const_lv6_32);
}

void batch_align2D_region::thread_tmp_334_fu_17329_p3() {
    tmp_334_fu_17329_p3 = (!tmp_321_reg_41106.read()[0].is_01())? sc_lv<32>(): ((tmp_321_reg_41106.read()[0].to_bool())? ref_patch_dy_1_63_2_fu_1392.read(): ref_patch_dy_1_63_58_fu_1616.read());
}

void batch_align2D_region::thread_tmp_335_fu_17336_p3() {
    tmp_335_fu_17336_p3 = (!tmp_323_reg_41111.read()[0].is_01())? sc_lv<32>(): ((tmp_323_reg_41111.read()[0].to_bool())? ref_patch_dy_1_63_10_fu_1424.read(): tmp_334_fu_17329_p3.read());
}

void batch_align2D_region::thread_tmp_336_fu_17343_p3() {
    tmp_336_fu_17343_p3 = (!tmp_325_reg_41116.read()[0].is_01())? sc_lv<32>(): ((tmp_325_reg_41116.read()[0].to_bool())? ref_patch_dy_1_63_18_fu_1456.read(): tmp_335_fu_17336_p3.read());
}

void batch_align2D_region::thread_tmp_337_fu_17350_p3() {
    tmp_337_fu_17350_p3 = (!tmp_327_reg_41121.read()[0].is_01())? sc_lv<32>(): ((tmp_327_reg_41121.read()[0].to_bool())? ref_patch_dy_1_63_26_fu_1488.read(): tmp_336_fu_17343_p3.read());
}

void batch_align2D_region::thread_tmp_338_fu_17357_p3() {
    tmp_338_fu_17357_p3 = (!tmp_329_reg_41126.read()[0].is_01())? sc_lv<32>(): ((tmp_329_reg_41126.read()[0].to_bool())? ref_patch_dy_1_63_34_fu_1520.read(): tmp_337_fu_17350_p3.read());
}

void batch_align2D_region::thread_tmp_339_fu_17364_p3() {
    tmp_339_fu_17364_p3 = (!tmp_331_reg_41131.read()[0].is_01())? sc_lv<32>(): ((tmp_331_reg_41131.read()[0].to_bool())? ref_patch_dy_1_63_42_fu_1552.read(): tmp_338_fu_17357_p3.read());
}

void batch_align2D_region::thread_tmp_33_fu_13839_p2() {
    tmp_33_fu_13839_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_1);
}

void batch_align2D_region::thread_tmp_340_fu_17431_p2() {
    tmp_340_fu_17431_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_3);
}

void batch_align2D_region::thread_tmp_341_fu_17437_p3() {
    tmp_341_fu_17437_p3 = (!tmp_340_fu_17431_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_340_fu_17431_p2.read()[0].to_bool())? ref_patch_dx_1_63_10_fu_1168.read(): ref_patch_dx_1_63_59_fu_1364.read());
}

void batch_align2D_region::thread_tmp_342_fu_17445_p2() {
    tmp_342_fu_17445_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_B);
}

void batch_align2D_region::thread_tmp_343_fu_17451_p3() {
    tmp_343_fu_17451_p3 = (!tmp_342_fu_17445_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_342_fu_17445_p2.read()[0].to_bool())? ref_patch_dx_1_63_17_fu_1196.read(): tmp_341_fu_17437_p3.read());
}

void batch_align2D_region::thread_tmp_344_fu_17459_p2() {
    tmp_344_fu_17459_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_13.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_13);
}

void batch_align2D_region::thread_tmp_345_fu_17465_p3() {
    tmp_345_fu_17465_p3 = (!tmp_344_fu_17459_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_344_fu_17459_p2.read()[0].to_bool())? ref_patch_dx_1_63_24_fu_1224.read(): tmp_343_fu_17451_p3.read());
}

void batch_align2D_region::thread_tmp_347_fu_17473_p2() {
    tmp_347_fu_17473_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_1B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_1B);
}

void batch_align2D_region::thread_tmp_348_fu_17479_p3() {
    tmp_348_fu_17479_p3 = (!tmp_347_fu_17473_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_347_fu_17473_p2.read()[0].to_bool())? ref_patch_dx_1_63_31_fu_1252.read(): tmp_345_fu_17465_p3.read());
}

void batch_align2D_region::thread_tmp_349_fu_17487_p2() {
    tmp_349_fu_17487_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_23.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_23);
}

void batch_align2D_region::thread_tmp_34_fu_13845_p3() {
    tmp_34_fu_13845_p3 = (!tmp_33_fu_13839_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_33_fu_13839_p2.read()[0].to_bool())? ref_patch_dx_0_63_8_fu_648.read(): ref_patch_dx_0_63_57_fu_844.read());
}

void batch_align2D_region::thread_tmp_350_fu_17493_p3() {
    tmp_350_fu_17493_p3 = (!tmp_349_fu_17487_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_349_fu_17487_p2.read()[0].to_bool())? ref_patch_dx_1_63_38_fu_1280.read(): tmp_348_fu_17479_p3.read());
}

void batch_align2D_region::thread_tmp_351_fu_17501_p2() {
    tmp_351_fu_17501_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_2B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_2B);
}

void batch_align2D_region::thread_tmp_352_fu_17507_p3() {
    tmp_352_fu_17507_p3 = (!tmp_351_fu_17501_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_351_fu_17501_p2.read()[0].to_bool())? ref_patch_dx_1_63_45_fu_1308.read(): tmp_350_fu_17493_p3.read());
}

void batch_align2D_region::thread_tmp_353_fu_17515_p2() {
    tmp_353_fu_17515_p2 = (!tmp_205_1_263_t_fu_17426_p2.read().is_01() || !ap_const_lv6_33.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_263_t_fu_17426_p2.read() == ap_const_lv6_33);
}

void batch_align2D_region::thread_tmp_354_fu_17529_p3() {
    tmp_354_fu_17529_p3 = (!tmp_340_fu_17431_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_340_fu_17431_p2.read()[0].to_bool())? ref_patch_dy_1_63_3_fu_1396.read(): ref_patch_dy_1_63_59_fu_1620.read());
}

void batch_align2D_region::thread_tmp_355_fu_17537_p3() {
    tmp_355_fu_17537_p3 = (!tmp_342_fu_17445_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_342_fu_17445_p2.read()[0].to_bool())? ref_patch_dy_1_63_11_fu_1428.read(): tmp_354_fu_17529_p3.read());
}

void batch_align2D_region::thread_tmp_356_fu_17545_p3() {
    tmp_356_fu_17545_p3 = (!tmp_344_fu_17459_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_344_fu_17459_p2.read()[0].to_bool())? ref_patch_dy_1_63_19_fu_1460.read(): tmp_355_fu_17537_p3.read());
}

void batch_align2D_region::thread_tmp_357_fu_17553_p3() {
    tmp_357_fu_17553_p3 = (!tmp_347_fu_17473_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_347_fu_17473_p2.read()[0].to_bool())? ref_patch_dy_1_63_27_fu_1492.read(): tmp_356_fu_17545_p3.read());
}

void batch_align2D_region::thread_tmp_358_fu_17561_p3() {
    tmp_358_fu_17561_p3 = (!tmp_349_fu_17487_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_349_fu_17487_p2.read()[0].to_bool())? ref_patch_dy_1_63_35_fu_1524.read(): tmp_357_fu_17553_p3.read());
}

void batch_align2D_region::thread_tmp_359_fu_17569_p3() {
    tmp_359_fu_17569_p3 = (!tmp_351_fu_17501_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_351_fu_17501_p2.read()[0].to_bool())? ref_patch_dy_1_63_43_fu_1556.read(): tmp_358_fu_17561_p3.read());
}

void batch_align2D_region::thread_tmp_35_fu_13853_p2() {
    tmp_35_fu_13853_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_9);
}

void batch_align2D_region::thread_tmp_360_fu_17638_p2() {
    tmp_360_fu_17638_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_4);
}

void batch_align2D_region::thread_tmp_361_fu_17644_p3() {
    tmp_361_fu_17644_p3 = (!tmp_360_fu_17638_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_360_fu_17638_p2.read()[0].to_bool())? ref_patch_dx_1_63_11_fu_1172.read(): ref_patch_dx_1_63_60_fu_1368.read());
}

void batch_align2D_region::thread_tmp_362_fu_17652_p2() {
    tmp_362_fu_17652_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_C);
}

void batch_align2D_region::thread_tmp_363_fu_17658_p3() {
    tmp_363_fu_17658_p3 = (!tmp_362_fu_17652_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_362_fu_17652_p2.read()[0].to_bool())? ref_patch_dx_1_63_18_fu_1200.read(): tmp_361_fu_17644_p3.read());
}

void batch_align2D_region::thread_tmp_364_fu_17666_p2() {
    tmp_364_fu_17666_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_14.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_14);
}

void batch_align2D_region::thread_tmp_365_fu_17672_p3() {
    tmp_365_fu_17672_p3 = (!tmp_364_fu_17666_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_364_fu_17666_p2.read()[0].to_bool())? ref_patch_dx_1_63_25_fu_1228.read(): tmp_363_fu_17658_p3.read());
}

void batch_align2D_region::thread_tmp_366_fu_17680_p2() {
    tmp_366_fu_17680_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_1C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_1C);
}

void batch_align2D_region::thread_tmp_367_fu_17686_p3() {
    tmp_367_fu_17686_p3 = (!tmp_366_fu_17680_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_366_fu_17680_p2.read()[0].to_bool())? ref_patch_dx_1_63_32_fu_1256.read(): tmp_365_fu_17672_p3.read());
}

void batch_align2D_region::thread_tmp_368_fu_17694_p2() {
    tmp_368_fu_17694_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_24);
}

void batch_align2D_region::thread_tmp_369_fu_17700_p3() {
    tmp_369_fu_17700_p3 = (!tmp_368_fu_17694_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_368_fu_17694_p2.read()[0].to_bool())? ref_patch_dx_1_63_39_fu_1284.read(): tmp_367_fu_17686_p3.read());
}

void batch_align2D_region::thread_tmp_36_fu_13859_p3() {
    tmp_36_fu_13859_p3 = (!tmp_35_fu_13853_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_35_fu_13853_p2.read()[0].to_bool())? ref_patch_dx_0_63_15_fu_676.read(): tmp_34_fu_13845_p3.read());
}

void batch_align2D_region::thread_tmp_370_fu_17708_p2() {
    tmp_370_fu_17708_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_2C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_2C);
}

void batch_align2D_region::thread_tmp_371_fu_17714_p3() {
    tmp_371_fu_17714_p3 = (!tmp_370_fu_17708_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_370_fu_17708_p2.read()[0].to_bool())? ref_patch_dx_1_63_46_fu_1312.read(): tmp_369_fu_17700_p3.read());
}

void batch_align2D_region::thread_tmp_372_fu_17722_p2() {
    tmp_372_fu_17722_p2 = (!tmp_205_1_3_t_fu_17633_p2.read().is_01() || !ap_const_lv6_34.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_3_t_fu_17633_p2.read() == ap_const_lv6_34);
}

void batch_align2D_region::thread_tmp_373_fu_17736_p3() {
    tmp_373_fu_17736_p3 = (!tmp_360_fu_17638_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_360_fu_17638_p2.read()[0].to_bool())? ref_patch_dy_1_63_4_fu_1400.read(): ref_patch_dy_1_63_60_fu_1624.read());
}

void batch_align2D_region::thread_tmp_374_fu_17744_p3() {
    tmp_374_fu_17744_p3 = (!tmp_362_fu_17652_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_362_fu_17652_p2.read()[0].to_bool())? ref_patch_dy_1_63_12_fu_1432.read(): tmp_373_fu_17736_p3.read());
}

void batch_align2D_region::thread_tmp_375_fu_17752_p3() {
    tmp_375_fu_17752_p3 = (!tmp_364_fu_17666_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_364_fu_17666_p2.read()[0].to_bool())? ref_patch_dy_1_63_20_fu_1464.read(): tmp_374_fu_17744_p3.read());
}

void batch_align2D_region::thread_tmp_376_fu_17760_p3() {
    tmp_376_fu_17760_p3 = (!tmp_366_fu_17680_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_366_fu_17680_p2.read()[0].to_bool())? ref_patch_dy_1_63_28_fu_1496.read(): tmp_375_fu_17752_p3.read());
}

void batch_align2D_region::thread_tmp_377_fu_17768_p3() {
    tmp_377_fu_17768_p3 = (!tmp_368_fu_17694_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_368_fu_17694_p2.read()[0].to_bool())? ref_patch_dy_1_63_36_fu_1528.read(): tmp_376_fu_17760_p3.read());
}

void batch_align2D_region::thread_tmp_378_fu_17776_p3() {
    tmp_378_fu_17776_p3 = (!tmp_370_fu_17708_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_370_fu_17708_p2.read()[0].to_bool())? ref_patch_dy_1_63_44_fu_1560.read(): tmp_377_fu_17768_p3.read());
}

void batch_align2D_region::thread_tmp_379_fu_17818_p2() {
    tmp_379_fu_17818_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_5);
}

void batch_align2D_region::thread_tmp_37_fu_13867_p2() {
    tmp_37_fu_13867_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_11.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_11);
}

void batch_align2D_region::thread_tmp_380_fu_17824_p3() {
    tmp_380_fu_17824_p3 = (!tmp_379_fu_17818_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_379_fu_17818_p2.read()[0].to_bool())? ref_patch_dx_1_63_12_fu_1176.read(): ref_patch_dx_1_63_61_fu_1372.read());
}

void batch_align2D_region::thread_tmp_381_fu_17832_p2() {
    tmp_381_fu_17832_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_D);
}

void batch_align2D_region::thread_tmp_382_fu_17838_p3() {
    tmp_382_fu_17838_p3 = (!tmp_381_fu_17832_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_381_fu_17832_p2.read()[0].to_bool())? ref_patch_dx_1_63_19_fu_1204.read(): tmp_380_fu_17824_p3.read());
}

void batch_align2D_region::thread_tmp_383_fu_17846_p2() {
    tmp_383_fu_17846_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_15.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_15);
}

void batch_align2D_region::thread_tmp_384_fu_17852_p3() {
    tmp_384_fu_17852_p3 = (!tmp_383_fu_17846_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_383_fu_17846_p2.read()[0].to_bool())? ref_patch_dx_1_63_26_fu_1232.read(): tmp_382_fu_17838_p3.read());
}

void batch_align2D_region::thread_tmp_385_fu_17860_p2() {
    tmp_385_fu_17860_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_1D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_1D);
}

void batch_align2D_region::thread_tmp_386_fu_17866_p3() {
    tmp_386_fu_17866_p3 = (!tmp_385_fu_17860_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_385_fu_17860_p2.read()[0].to_bool())? ref_patch_dx_1_63_33_fu_1260.read(): tmp_384_fu_17852_p3.read());
}

void batch_align2D_region::thread_tmp_387_fu_17874_p2() {
    tmp_387_fu_17874_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_25.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_25);
}

void batch_align2D_region::thread_tmp_388_fu_17880_p3() {
    tmp_388_fu_17880_p3 = (!tmp_387_fu_17874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_387_fu_17874_p2.read()[0].to_bool())? ref_patch_dx_1_63_40_fu_1288.read(): tmp_386_fu_17866_p3.read());
}

void batch_align2D_region::thread_tmp_38_fu_13873_p3() {
    tmp_38_fu_13873_p3 = (!tmp_37_fu_13867_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_37_fu_13867_p2.read()[0].to_bool())? ref_patch_dx_0_63_22_fu_704.read(): tmp_36_fu_13859_p3.read());
}

void batch_align2D_region::thread_tmp_390_fu_17888_p2() {
    tmp_390_fu_17888_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_2D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_2D);
}

void batch_align2D_region::thread_tmp_391_fu_17894_p3() {
    tmp_391_fu_17894_p3 = (!tmp_390_fu_17888_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_390_fu_17888_p2.read()[0].to_bool())? ref_patch_dx_1_63_47_fu_1316.read(): tmp_388_fu_17880_p3.read());
}

void batch_align2D_region::thread_tmp_392_fu_17902_p2() {
    tmp_392_fu_17902_p2 = (!tmp_205_1_4_t_fu_17813_p2.read().is_01() || !ap_const_lv6_35.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_4_t_fu_17813_p2.read() == ap_const_lv6_35);
}

void batch_align2D_region::thread_tmp_393_fu_17942_p3() {
    tmp_393_fu_17942_p3 = (!tmp_379_reg_41184.read()[0].is_01())? sc_lv<32>(): ((tmp_379_reg_41184.read()[0].to_bool())? ref_patch_dy_1_63_5_fu_1404.read(): ref_patch_dy_1_63_61_fu_1628.read());
}

void batch_align2D_region::thread_tmp_394_fu_17949_p3() {
    tmp_394_fu_17949_p3 = (!tmp_381_reg_41189.read()[0].is_01())? sc_lv<32>(): ((tmp_381_reg_41189.read()[0].to_bool())? ref_patch_dy_1_63_13_fu_1436.read(): tmp_393_fu_17942_p3.read());
}

void batch_align2D_region::thread_tmp_395_fu_17956_p3() {
    tmp_395_fu_17956_p3 = (!tmp_383_reg_41194.read()[0].is_01())? sc_lv<32>(): ((tmp_383_reg_41194.read()[0].to_bool())? ref_patch_dy_1_63_21_fu_1468.read(): tmp_394_fu_17949_p3.read());
}

void batch_align2D_region::thread_tmp_396_fu_17963_p3() {
    tmp_396_fu_17963_p3 = (!tmp_385_reg_41199.read()[0].is_01())? sc_lv<32>(): ((tmp_385_reg_41199.read()[0].to_bool())? ref_patch_dy_1_63_29_fu_1500.read(): tmp_395_fu_17956_p3.read());
}

void batch_align2D_region::thread_tmp_397_fu_17970_p3() {
    tmp_397_fu_17970_p3 = (!tmp_387_reg_41204.read()[0].is_01())? sc_lv<32>(): ((tmp_387_reg_41204.read()[0].to_bool())? ref_patch_dy_1_63_37_fu_1532.read(): tmp_396_fu_17963_p3.read());
}

void batch_align2D_region::thread_tmp_398_fu_17977_p3() {
    tmp_398_fu_17977_p3 = (!tmp_390_reg_41209.read()[0].is_01())? sc_lv<32>(): ((tmp_390_reg_41209.read()[0].to_bool())? ref_patch_dy_1_63_45_fu_1564.read(): tmp_397_fu_17970_p3.read());
}

void batch_align2D_region::thread_tmp_399_fu_18044_p2() {
    tmp_399_fu_18044_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_6);
}

void batch_align2D_region::thread_tmp_39_fu_13881_p2() {
    tmp_39_fu_13881_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_19);
}

void batch_align2D_region::thread_tmp_400_fu_18050_p3() {
    tmp_400_fu_18050_p3 = (!tmp_399_fu_18044_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_399_fu_18044_p2.read()[0].to_bool())? ref_patch_dx_1_63_13_fu_1180.read(): ref_patch_dx_1_63_62_fu_1376.read());
}

void batch_align2D_region::thread_tmp_401_fu_18058_p2() {
    tmp_401_fu_18058_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_E);
}

void batch_align2D_region::thread_tmp_402_fu_18064_p3() {
    tmp_402_fu_18064_p3 = (!tmp_401_fu_18058_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_401_fu_18058_p2.read()[0].to_bool())? ref_patch_dx_1_63_20_fu_1208.read(): tmp_400_fu_18050_p3.read());
}

void batch_align2D_region::thread_tmp_403_fu_18072_p2() {
    tmp_403_fu_18072_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_16.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_16);
}

void batch_align2D_region::thread_tmp_404_fu_18078_p3() {
    tmp_404_fu_18078_p3 = (!tmp_403_fu_18072_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_403_fu_18072_p2.read()[0].to_bool())? ref_patch_dx_1_63_27_fu_1236.read(): tmp_402_fu_18064_p3.read());
}

void batch_align2D_region::thread_tmp_405_fu_18086_p2() {
    tmp_405_fu_18086_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_1E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_1E);
}

void batch_align2D_region::thread_tmp_406_fu_18092_p3() {
    tmp_406_fu_18092_p3 = (!tmp_405_fu_18086_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_405_fu_18086_p2.read()[0].to_bool())? ref_patch_dx_1_63_34_fu_1264.read(): tmp_404_fu_18078_p3.read());
}

void batch_align2D_region::thread_tmp_407_fu_18100_p2() {
    tmp_407_fu_18100_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_26.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_26);
}

void batch_align2D_region::thread_tmp_408_fu_18106_p3() {
    tmp_408_fu_18106_p3 = (!tmp_407_fu_18100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_407_fu_18100_p2.read()[0].to_bool())? ref_patch_dx_1_63_41_fu_1292.read(): tmp_406_fu_18092_p3.read());
}

void batch_align2D_region::thread_tmp_409_fu_18114_p2() {
    tmp_409_fu_18114_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_2E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_2E);
}

void batch_align2D_region::thread_tmp_40_fu_13887_p3() {
    tmp_40_fu_13887_p3 = (!tmp_39_fu_13881_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_39_fu_13881_p2.read()[0].to_bool())? ref_patch_dx_0_63_29_fu_732.read(): tmp_38_fu_13873_p3.read());
}

void batch_align2D_region::thread_tmp_410_fu_18120_p3() {
    tmp_410_fu_18120_p3 = (!tmp_409_fu_18114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_409_fu_18114_p2.read()[0].to_bool())? ref_patch_dx_1_63_48_fu_1320.read(): tmp_408_fu_18106_p3.read());
}

void batch_align2D_region::thread_tmp_411_fu_18128_p2() {
    tmp_411_fu_18128_p2 = (!tmp_205_1_5_t_fu_18039_p2.read().is_01() || !ap_const_lv6_36.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_5_t_fu_18039_p2.read() == ap_const_lv6_36);
}

void batch_align2D_region::thread_tmp_412_fu_18142_p3() {
    tmp_412_fu_18142_p3 = (!tmp_399_fu_18044_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_399_fu_18044_p2.read()[0].to_bool())? ref_patch_dy_1_63_6_fu_1408.read(): ref_patch_dy_1_63_62_fu_1632.read());
}

void batch_align2D_region::thread_tmp_413_fu_18150_p3() {
    tmp_413_fu_18150_p3 = (!tmp_401_fu_18058_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_401_fu_18058_p2.read()[0].to_bool())? ref_patch_dy_1_63_14_fu_1440.read(): tmp_412_fu_18142_p3.read());
}

void batch_align2D_region::thread_tmp_414_fu_18158_p3() {
    tmp_414_fu_18158_p3 = (!tmp_403_fu_18072_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_403_fu_18072_p2.read()[0].to_bool())? ref_patch_dy_1_63_22_fu_1472.read(): tmp_413_fu_18150_p3.read());
}

void batch_align2D_region::thread_tmp_415_fu_18166_p3() {
    tmp_415_fu_18166_p3 = (!tmp_405_fu_18086_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_405_fu_18086_p2.read()[0].to_bool())? ref_patch_dy_1_63_30_fu_1504.read(): tmp_414_fu_18158_p3.read());
}

void batch_align2D_region::thread_tmp_416_fu_18174_p3() {
    tmp_416_fu_18174_p3 = (!tmp_407_fu_18100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_407_fu_18100_p2.read()[0].to_bool())? ref_patch_dy_1_63_38_fu_1536.read(): tmp_415_fu_18166_p3.read());
}

void batch_align2D_region::thread_tmp_417_fu_18182_p3() {
    tmp_417_fu_18182_p3 = (!tmp_409_fu_18114_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_409_fu_18114_p2.read()[0].to_bool())? ref_patch_dy_1_63_46_fu_1568.read(): tmp_416_fu_18174_p3.read());
}

void batch_align2D_region::thread_tmp_419_fu_18251_p2() {
    tmp_419_fu_18251_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_7);
}

void batch_align2D_region::thread_tmp_41_fu_13895_p2() {
    tmp_41_fu_13895_p2 = (!tmp_205_0_065_t_fu_13834_p2.read().is_01() || !ap_const_lv6_21.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_0_065_t_fu_13834_p2.read() == ap_const_lv6_21);
}

void batch_align2D_region::thread_tmp_420_fu_18257_p3() {
    tmp_420_fu_18257_p3 = (!tmp_419_fu_18251_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_419_fu_18251_p2.read()[0].to_bool())? ref_patch_dx_1_63_14_fu_1184.read(): ref_patch_dx_1_63_63_fu_1380.read());
}

void batch_align2D_region::thread_tmp_421_fu_18265_p2() {
    tmp_421_fu_18265_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_F);
}

void batch_align2D_region::thread_tmp_422_fu_18271_p3() {
    tmp_422_fu_18271_p3 = (!tmp_421_fu_18265_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_421_fu_18265_p2.read()[0].to_bool())? ref_patch_dx_1_63_21_fu_1212.read(): tmp_420_fu_18257_p3.read());
}

void batch_align2D_region::thread_tmp_423_fu_18279_p2() {
    tmp_423_fu_18279_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_17.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_17);
}

void batch_align2D_region::thread_tmp_424_fu_18285_p3() {
    tmp_424_fu_18285_p3 = (!tmp_423_fu_18279_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_423_fu_18279_p2.read()[0].to_bool())? ref_patch_dx_1_63_28_fu_1240.read(): tmp_422_fu_18271_p3.read());
}

void batch_align2D_region::thread_tmp_425_fu_18293_p2() {
    tmp_425_fu_18293_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_1F);
}

void batch_align2D_region::thread_tmp_426_fu_18299_p3() {
    tmp_426_fu_18299_p3 = (!tmp_425_fu_18293_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_425_fu_18293_p2.read()[0].to_bool())? ref_patch_dx_1_63_35_fu_1268.read(): tmp_424_fu_18285_p3.read());
}

void batch_align2D_region::thread_tmp_427_fu_18307_p2() {
    tmp_427_fu_18307_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_27.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_27);
}

void batch_align2D_region::thread_tmp_428_fu_18313_p3() {
    tmp_428_fu_18313_p3 = (!tmp_427_fu_18307_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_427_fu_18307_p2.read()[0].to_bool())? ref_patch_dx_1_63_42_fu_1296.read(): tmp_426_fu_18299_p3.read());
}

void batch_align2D_region::thread_tmp_429_fu_18321_p2() {
    tmp_429_fu_18321_p2 = (!tmp_205_1_664_t_fu_18246_p2.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_1_664_t_fu_18246_p2.read() == ap_const_lv6_2F);
}

void batch_align2D_region::thread_tmp_42_fu_13901_p3() {
    tmp_42_fu_13901_p3 = (!tmp_41_fu_13895_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_41_fu_13895_p2.read()[0].to_bool())? ref_patch_dx_0_63_36_fu_760.read(): tmp_40_fu_13887_p3.read());
}

}

