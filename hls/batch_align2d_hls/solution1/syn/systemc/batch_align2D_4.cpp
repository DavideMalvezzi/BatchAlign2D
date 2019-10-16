#include "batch_align2D.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void batch_align2D::thread_UnifiedRetVal_i_fu_9871_p3() {
    UnifiedRetVal_i_fu_9871_p3 = (!sel_tmp12_i_fu_9865_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i_fu_9865_p2.read()[0].to_bool())? cur_px_estimate_3_0.read(): sel_tmp11_i_fu_9857_p3.read());
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
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[26];
}

void batch_align2D::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[27];
}

void batch_align2D::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[28];
}

void batch_align2D::thread_ap_CS_fsm_pp3_stage3() {
    ap_CS_fsm_pp3_stage3 = ap_CS_fsm.read()[29];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[74];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[75];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage2() {
    ap_CS_fsm_pp4_stage2 = ap_CS_fsm.read()[76];
}

void batch_align2D::thread_ap_CS_fsm_pp4_stage3() {
    ap_CS_fsm_pp4_stage3 = ap_CS_fsm.read()[77];
}

void batch_align2D::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[122];
}

void batch_align2D::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[123];
}

void batch_align2D::thread_ap_CS_fsm_pp5_stage2() {
    ap_CS_fsm_pp5_stage2 = ap_CS_fsm.read()[124];
}

void batch_align2D::thread_ap_CS_fsm_pp5_stage3() {
    ap_CS_fsm_pp5_stage3 = ap_CS_fsm.read()[125];
}

void batch_align2D::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[170];
}

void batch_align2D::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[171];
}

void batch_align2D::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[172];
}

void batch_align2D::thread_ap_CS_fsm_pp6_stage3() {
    ap_CS_fsm_pp6_stage3 = ap_CS_fsm.read()[173];
}

void batch_align2D::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[218];
}

void batch_align2D::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[224];
}

void batch_align2D::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void batch_align2D::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[79];
}

void batch_align2D::thread_ap_CS_fsm_state101() {
    ap_CS_fsm_state101 = ap_CS_fsm.read()[80];
}

void batch_align2D::thread_ap_CS_fsm_state102() {
    ap_CS_fsm_state102 = ap_CS_fsm.read()[81];
}

void batch_align2D::thread_ap_CS_fsm_state103() {
    ap_CS_fsm_state103 = ap_CS_fsm.read()[82];
}

void batch_align2D::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[83];
}

void batch_align2D::thread_ap_CS_fsm_state105() {
    ap_CS_fsm_state105 = ap_CS_fsm.read()[84];
}

void batch_align2D::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[85];
}

void batch_align2D::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[86];
}

void batch_align2D::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[87];
}

void batch_align2D::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[88];
}

void batch_align2D::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[89];
}

void batch_align2D::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[90];
}

void batch_align2D::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[91];
}

void batch_align2D::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[92];
}

void batch_align2D::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[93];
}

void batch_align2D::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[94];
}

void batch_align2D::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[95];
}

void batch_align2D::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[96];
}

void batch_align2D::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[97];
}

void batch_align2D::thread_ap_CS_fsm_state119() {
    ap_CS_fsm_state119 = ap_CS_fsm.read()[98];
}

void batch_align2D::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void batch_align2D::thread_ap_CS_fsm_state120() {
    ap_CS_fsm_state120 = ap_CS_fsm.read()[99];
}

void batch_align2D::thread_ap_CS_fsm_state121() {
    ap_CS_fsm_state121 = ap_CS_fsm.read()[100];
}

void batch_align2D::thread_ap_CS_fsm_state122() {
    ap_CS_fsm_state122 = ap_CS_fsm.read()[101];
}

void batch_align2D::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[102];
}

void batch_align2D::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[103];
}

void batch_align2D::thread_ap_CS_fsm_state125() {
    ap_CS_fsm_state125 = ap_CS_fsm.read()[104];
}

void batch_align2D::thread_ap_CS_fsm_state128() {
    ap_CS_fsm_state128 = ap_CS_fsm.read()[107];
}

void batch_align2D::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[108];
}

void batch_align2D::thread_ap_CS_fsm_state130() {
    ap_CS_fsm_state130 = ap_CS_fsm.read()[109];
}

void batch_align2D::thread_ap_CS_fsm_state132() {
    ap_CS_fsm_state132 = ap_CS_fsm.read()[111];
}

void batch_align2D::thread_ap_CS_fsm_state133() {
    ap_CS_fsm_state133 = ap_CS_fsm.read()[112];
}

void batch_align2D::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[113];
}

void batch_align2D::thread_ap_CS_fsm_state135() {
    ap_CS_fsm_state135 = ap_CS_fsm.read()[114];
}

void batch_align2D::thread_ap_CS_fsm_state136() {
    ap_CS_fsm_state136 = ap_CS_fsm.read()[115];
}

void batch_align2D::thread_ap_CS_fsm_state137() {
    ap_CS_fsm_state137 = ap_CS_fsm.read()[116];
}

void batch_align2D::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[121];
}

void batch_align2D::thread_ap_CS_fsm_state155() {
    ap_CS_fsm_state155 = ap_CS_fsm.read()[126];
}

void batch_align2D::thread_ap_CS_fsm_state156() {
    ap_CS_fsm_state156 = ap_CS_fsm.read()[127];
}

void batch_align2D::thread_ap_CS_fsm_state157() {
    ap_CS_fsm_state157 = ap_CS_fsm.read()[128];
}

void batch_align2D::thread_ap_CS_fsm_state158() {
    ap_CS_fsm_state158 = ap_CS_fsm.read()[129];
}

void batch_align2D::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[130];
}

void batch_align2D::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[131];
}

void batch_align2D::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[132];
}

void batch_align2D::thread_ap_CS_fsm_state162() {
    ap_CS_fsm_state162 = ap_CS_fsm.read()[133];
}

void batch_align2D::thread_ap_CS_fsm_state163() {
    ap_CS_fsm_state163 = ap_CS_fsm.read()[134];
}

void batch_align2D::thread_ap_CS_fsm_state164() {
    ap_CS_fsm_state164 = ap_CS_fsm.read()[135];
}

void batch_align2D::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[136];
}

void batch_align2D::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[137];
}

void batch_align2D::thread_ap_CS_fsm_state167() {
    ap_CS_fsm_state167 = ap_CS_fsm.read()[138];
}

void batch_align2D::thread_ap_CS_fsm_state168() {
    ap_CS_fsm_state168 = ap_CS_fsm.read()[139];
}

void batch_align2D::thread_ap_CS_fsm_state169() {
    ap_CS_fsm_state169 = ap_CS_fsm.read()[140];
}

void batch_align2D::thread_ap_CS_fsm_state170() {
    ap_CS_fsm_state170 = ap_CS_fsm.read()[141];
}

void batch_align2D::thread_ap_CS_fsm_state171() {
    ap_CS_fsm_state171 = ap_CS_fsm.read()[142];
}

void batch_align2D::thread_ap_CS_fsm_state172() {
    ap_CS_fsm_state172 = ap_CS_fsm.read()[143];
}

void batch_align2D::thread_ap_CS_fsm_state173() {
    ap_CS_fsm_state173 = ap_CS_fsm.read()[144];
}

void batch_align2D::thread_ap_CS_fsm_state174() {
    ap_CS_fsm_state174 = ap_CS_fsm.read()[145];
}

void batch_align2D::thread_ap_CS_fsm_state175() {
    ap_CS_fsm_state175 = ap_CS_fsm.read()[146];
}

void batch_align2D::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[147];
}

void batch_align2D::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[148];
}

void batch_align2D::thread_ap_CS_fsm_state178() {
    ap_CS_fsm_state178 = ap_CS_fsm.read()[149];
}

void batch_align2D::thread_ap_CS_fsm_state179() {
    ap_CS_fsm_state179 = ap_CS_fsm.read()[150];
}

void batch_align2D::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void batch_align2D::thread_ap_CS_fsm_state180() {
    ap_CS_fsm_state180 = ap_CS_fsm.read()[151];
}

void batch_align2D::thread_ap_CS_fsm_state181() {
    ap_CS_fsm_state181 = ap_CS_fsm.read()[152];
}

void batch_align2D::thread_ap_CS_fsm_state184() {
    ap_CS_fsm_state184 = ap_CS_fsm.read()[155];
}

void batch_align2D::thread_ap_CS_fsm_state185() {
    ap_CS_fsm_state185 = ap_CS_fsm.read()[156];
}

void batch_align2D::thread_ap_CS_fsm_state186() {
    ap_CS_fsm_state186 = ap_CS_fsm.read()[157];
}

void batch_align2D::thread_ap_CS_fsm_state188() {
    ap_CS_fsm_state188 = ap_CS_fsm.read()[159];
}

void batch_align2D::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[160];
}

void batch_align2D::thread_ap_CS_fsm_state190() {
    ap_CS_fsm_state190 = ap_CS_fsm.read()[161];
}

void batch_align2D::thread_ap_CS_fsm_state191() {
    ap_CS_fsm_state191 = ap_CS_fsm.read()[162];
}

void batch_align2D::thread_ap_CS_fsm_state192() {
    ap_CS_fsm_state192 = ap_CS_fsm.read()[163];
}

void batch_align2D::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[164];
}

void batch_align2D::thread_ap_CS_fsm_state198() {
    ap_CS_fsm_state198 = ap_CS_fsm.read()[169];
}

void batch_align2D::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void batch_align2D::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[17];
}

void batch_align2D::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[174];
}

void batch_align2D::thread_ap_CS_fsm_state212() {
    ap_CS_fsm_state212 = ap_CS_fsm.read()[175];
}

void batch_align2D::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[176];
}

void batch_align2D::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[177];
}

void batch_align2D::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[178];
}

void batch_align2D::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[179];
}

void batch_align2D::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[180];
}

void batch_align2D::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[181];
}

void batch_align2D::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[182];
}

void batch_align2D::thread_ap_CS_fsm_state220() {
    ap_CS_fsm_state220 = ap_CS_fsm.read()[183];
}

void batch_align2D::thread_ap_CS_fsm_state221() {
    ap_CS_fsm_state221 = ap_CS_fsm.read()[184];
}

void batch_align2D::thread_ap_CS_fsm_state222() {
    ap_CS_fsm_state222 = ap_CS_fsm.read()[185];
}

void batch_align2D::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[186];
}

void batch_align2D::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[187];
}

void batch_align2D::thread_ap_CS_fsm_state225() {
    ap_CS_fsm_state225 = ap_CS_fsm.read()[188];
}

void batch_align2D::thread_ap_CS_fsm_state226() {
    ap_CS_fsm_state226 = ap_CS_fsm.read()[189];
}

void batch_align2D::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[190];
}

void batch_align2D::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[191];
}

void batch_align2D::thread_ap_CS_fsm_state229() {
    ap_CS_fsm_state229 = ap_CS_fsm.read()[192];
}

void batch_align2D::thread_ap_CS_fsm_state230() {
    ap_CS_fsm_state230 = ap_CS_fsm.read()[193];
}

void batch_align2D::thread_ap_CS_fsm_state231() {
    ap_CS_fsm_state231 = ap_CS_fsm.read()[194];
}

void batch_align2D::thread_ap_CS_fsm_state232() {
    ap_CS_fsm_state232 = ap_CS_fsm.read()[195];
}

void batch_align2D::thread_ap_CS_fsm_state233() {
    ap_CS_fsm_state233 = ap_CS_fsm.read()[196];
}

void batch_align2D::thread_ap_CS_fsm_state234() {
    ap_CS_fsm_state234 = ap_CS_fsm.read()[197];
}

void batch_align2D::thread_ap_CS_fsm_state235() {
    ap_CS_fsm_state235 = ap_CS_fsm.read()[198];
}

void batch_align2D::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[199];
}

void batch_align2D::thread_ap_CS_fsm_state237() {
    ap_CS_fsm_state237 = ap_CS_fsm.read()[200];
}

void batch_align2D::thread_ap_CS_fsm_state240() {
    ap_CS_fsm_state240 = ap_CS_fsm.read()[203];
}

void batch_align2D::thread_ap_CS_fsm_state241() {
    ap_CS_fsm_state241 = ap_CS_fsm.read()[204];
}

void batch_align2D::thread_ap_CS_fsm_state242() {
    ap_CS_fsm_state242 = ap_CS_fsm.read()[205];
}

void batch_align2D::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[207];
}

void batch_align2D::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[208];
}

void batch_align2D::thread_ap_CS_fsm_state246() {
    ap_CS_fsm_state246 = ap_CS_fsm.read()[209];
}

void batch_align2D::thread_ap_CS_fsm_state247() {
    ap_CS_fsm_state247 = ap_CS_fsm.read()[210];
}

void batch_align2D::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[211];
}

void batch_align2D::thread_ap_CS_fsm_state249() {
    ap_CS_fsm_state249 = ap_CS_fsm.read()[212];
}

void batch_align2D::thread_ap_CS_fsm_state254() {
    ap_CS_fsm_state254 = ap_CS_fsm.read()[217];
}

void batch_align2D::thread_ap_CS_fsm_state257() {
    ap_CS_fsm_state257 = ap_CS_fsm.read()[219];
}

void batch_align2D::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[223];
}

void batch_align2D::thread_ap_CS_fsm_state268() {
    ap_CS_fsm_state268 = ap_CS_fsm.read()[229];
}

void batch_align2D::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[23];
}

void batch_align2D::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[25];
}

void batch_align2D::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[30];
}

void batch_align2D::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[31];
}

void batch_align2D::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[32];
}

void batch_align2D::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[33];
}

void batch_align2D::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[34];
}

void batch_align2D::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[35];
}

void batch_align2D::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[36];
}

void batch_align2D::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[37];
}

void batch_align2D::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[38];
}

void batch_align2D::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[39];
}

void batch_align2D::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[40];
}

void batch_align2D::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[41];
}

void batch_align2D::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[42];
}

void batch_align2D::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[43];
}

void batch_align2D::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[44];
}

void batch_align2D::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[45];
}

void batch_align2D::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[46];
}

void batch_align2D::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[47];
}

void batch_align2D::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[48];
}

void batch_align2D::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[49];
}

void batch_align2D::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[50];
}

void batch_align2D::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[51];
}

void batch_align2D::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[52];
}

void batch_align2D::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[53];
}

void batch_align2D::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[54];
}

void batch_align2D::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[55];
}

void batch_align2D::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[56];
}

void batch_align2D::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[59];
}

void batch_align2D::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[60];
}

void batch_align2D::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[61];
}

void batch_align2D::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[63];
}

void batch_align2D::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[64];
}

void batch_align2D::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[65];
}

void batch_align2D::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[66];
}

void batch_align2D::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void batch_align2D::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[67];
}

void batch_align2D::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[68];
}

void batch_align2D::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[73];
}

void batch_align2D::thread_ap_CS_fsm_state99() {
    ap_CS_fsm_state99 = ap_CS_fsm.read()[78];
}

void batch_align2D::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9930.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9930.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
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

void batch_align2D::thread_ap_block_pp3_stage0_00001() {
    ap_block_pp3_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage1_00001() {
    ap_block_pp3_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage2() {
    ap_block_pp3_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage2_00001() {
    ap_block_pp3_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage2_11001() {
    ap_block_pp3_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage3() {
    ap_block_pp3_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage3_00001() {
    ap_block_pp3_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage3_11001() {
    ap_block_pp3_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp3_stage3_subdone() {
    ap_block_pp3_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_00001() {
    ap_block_pp4_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage1() {
    ap_block_pp4_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage1_00001() {
    ap_block_pp4_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage1_11001() {
    ap_block_pp4_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage1_subdone() {
    ap_block_pp4_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage2() {
    ap_block_pp4_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage2_00001() {
    ap_block_pp4_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage2_11001() {
    ap_block_pp4_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage2_subdone() {
    ap_block_pp4_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage3() {
    ap_block_pp4_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage3_00001() {
    ap_block_pp4_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage3_11001() {
    ap_block_pp4_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp4_stage3_subdone() {
    ap_block_pp4_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage0_00001() {
    ap_block_pp5_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage1() {
    ap_block_pp5_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage1_00001() {
    ap_block_pp5_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage1_11001() {
    ap_block_pp5_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage1_subdone() {
    ap_block_pp5_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage2() {
    ap_block_pp5_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage2_00001() {
    ap_block_pp5_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage2_11001() {
    ap_block_pp5_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage2_subdone() {
    ap_block_pp5_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage3() {
    ap_block_pp5_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage3_00001() {
    ap_block_pp5_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage3_11001() {
    ap_block_pp5_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp5_stage3_subdone() {
    ap_block_pp5_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage0_00001() {
    ap_block_pp6_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage1_00001() {
    ap_block_pp6_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage2() {
    ap_block_pp6_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage2_00001() {
    ap_block_pp6_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage2_11001() {
    ap_block_pp6_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage3() {
    ap_block_pp6_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage3_00001() {
    ap_block_pp6_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage3_11001() {
    ap_block_pp6_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp6_stage3_subdone() {
    ap_block_pp6_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp7_stage0_01001() {
    ap_block_pp7_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state256_io.read()));
}

void batch_align2D::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state256_io.read()));
}

void batch_align2D::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp8_stage0_01001() {
    ap_block_pp8_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state263_io.read()));
}

void batch_align2D::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state263_io.read()));
}

void batch_align2D::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, pyr_RVALID.read()));
}

void batch_align2D::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state143_pp5_stage0_iter0() {
    ap_block_state143_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state144_pp5_stage1_iter0() {
    ap_block_state144_pp5_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state145_pp5_stage2_iter0() {
    ap_block_state145_pp5_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state146_pp5_stage3_iter0() {
    ap_block_state146_pp5_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state147_pp5_stage0_iter1() {
    ap_block_state147_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state148_pp5_stage1_iter1() {
    ap_block_state148_pp5_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state149_pp5_stage2_iter1() {
    ap_block_state149_pp5_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state150_pp5_stage3_iter1() {
    ap_block_state150_pp5_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state151_pp5_stage0_iter2() {
    ap_block_state151_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state152_pp5_stage1_iter2() {
    ap_block_state152_pp5_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state153_pp5_stage2_iter2() {
    ap_block_state153_pp5_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state154_pp5_stage3_iter2() {
    ap_block_state154_pp5_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state199_pp6_stage0_iter0() {
    ap_block_state199_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state19_pp1_stage0_iter0() {
    ap_block_state19_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state200_pp6_stage1_iter0() {
    ap_block_state200_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state201_pp6_stage2_iter0() {
    ap_block_state201_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state202_pp6_stage3_iter0() {
    ap_block_state202_pp6_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state203_pp6_stage0_iter1() {
    ap_block_state203_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state204_pp6_stage1_iter1() {
    ap_block_state204_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state205_pp6_stage2_iter1() {
    ap_block_state205_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state206_pp6_stage3_iter1() {
    ap_block_state206_pp6_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state207_pp6_stage0_iter2() {
    ap_block_state207_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state208_pp6_stage1_iter2() {
    ap_block_state208_pp6_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state209_pp6_stage2_iter2() {
    ap_block_state209_pp6_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state20_pp1_stage0_iter1() {
    ap_block_state20_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9930.read()) && esl_seteq<1,1,1>(ap_const_logic_0, patches_RVALID.read()));
}

void batch_align2D::thread_ap_block_state210_pp6_stage3_iter2() {
    ap_block_state210_pp6_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state212_io() {
    ap_block_state212_io = (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_AWREADY.read()) || esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_AWREADY.read()));
}

void batch_align2D::thread_ap_block_state255_pp7_stage0_iter0() {
    ap_block_state255_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state256_io() {
    ap_block_state256_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_13080.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_debug_WREADY.read()));
}

void batch_align2D::thread_ap_block_state256_pp7_stage0_iter1() {
    ap_block_state256_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state262_pp8_stage0_iter0() {
    ap_block_state262_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state263_io() {
    ap_block_state263_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_13094.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_pos_r_WREADY.read()));
}

void batch_align2D::thread_ap_block_state263_pp8_stage0_iter1() {
    ap_block_state263_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state28_pp2_stage0_iter0() {
    ap_block_state28_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state29_pp2_stage0_iter1() {
    ap_block_state29_pp2_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, pos_r_RVALID.read());
}

void batch_align2D::thread_ap_block_state31_pp3_stage0_iter0() {
    ap_block_state31_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state32_pp3_stage1_iter0() {
    ap_block_state32_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state33_pp3_stage2_iter0() {
    ap_block_state33_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state34_pp3_stage3_iter0() {
    ap_block_state34_pp3_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state35_pp3_stage0_iter1() {
    ap_block_state35_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state36_pp3_stage1_iter1() {
    ap_block_state36_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state37_pp3_stage2_iter1() {
    ap_block_state37_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state38_pp3_stage3_iter1() {
    ap_block_state38_pp3_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state39_pp3_stage0_iter2() {
    ap_block_state39_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state40_pp3_stage1_iter2() {
    ap_block_state40_pp3_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state41_pp3_stage2_iter2() {
    ap_block_state41_pp3_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state42_pp3_stage3_iter2() {
    ap_block_state42_pp3_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state87_pp4_stage0_iter0() {
    ap_block_state87_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state88_pp4_stage1_iter0() {
    ap_block_state88_pp4_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state89_pp4_stage2_iter0() {
    ap_block_state89_pp4_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state90_pp4_stage3_iter0() {
    ap_block_state90_pp4_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state91_pp4_stage0_iter1() {
    ap_block_state91_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state92_pp4_stage1_iter1() {
    ap_block_state92_pp4_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state93_pp4_stage2_iter1() {
    ap_block_state93_pp4_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state94_pp4_stage3_iter1() {
    ap_block_state94_pp4_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state95_pp4_stage0_iter2() {
    ap_block_state95_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state96_pp4_stage1_iter2() {
    ap_block_state96_pp4_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state97_pp4_stage2_iter2() {
    ap_block_state97_pp4_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state98_pp4_stage3_iter2() {
    ap_block_state98_pp4_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void batch_align2D::thread_ap_condition_11308() {
    ap_condition_11308 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_fu_6782_p2.read()));
}

void batch_align2D::thread_ap_condition_11384() {
    ap_condition_11384 = (!esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_C) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_E) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_10) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_12) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_14) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_16) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_18) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1A) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1C) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1E) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_20) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_22) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_24) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_26) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_28) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2A) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2C) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2E) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_30) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_32) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_34) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_36) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_38) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3A) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3C) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3E) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_40) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_42) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_44) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_46) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_48) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4A) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4C) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4E) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_50) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_52) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_54) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_56) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_58_0_t_fu_6856_p2.read(), ap_const_lv7_58));
}

void batch_align2D::thread_ap_condition_11389() {
    ap_condition_11389 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_fu_7495_p2.read()));
}

void batch_align2D::thread_ap_condition_11465() {
    ap_condition_11465 = (!esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_C) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_E) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_10) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_12) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_14) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_16) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_18) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1A) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1C) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1E) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_20) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_22) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_24) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_26) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_28) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2A) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2C) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2E) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_30) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_32) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_34) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_36) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_38) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3A) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3C) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3E) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_40) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_42) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_44) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_46) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_48) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4A) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4C) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4E) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_50) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_52) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_54) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_56) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_58_1_t_fu_7569_p2.read(), ap_const_lv7_58));
}

void batch_align2D::thread_ap_condition_11470() {
    ap_condition_11470 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_fu_8223_p2.read()));
}

void batch_align2D::thread_ap_condition_11546() {
    ap_condition_11546 = (!esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_C) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_E) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_10) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_12) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_14) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_16) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_18) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1A) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1C) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1E) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_20) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_22) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_24) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_26) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_28) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2A) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2C) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2E) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_30) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_32) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_34) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_36) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_38) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3A) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3C) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3E) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_40) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_42) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_44) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_46) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_48) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4A) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4C) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4E) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_50) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_52) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_54) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_56) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_58_2_t_fu_8297_p2.read(), ap_const_lv7_58));
}

void batch_align2D::thread_ap_condition_11551() {
    ap_condition_11551 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_fu_8951_p2.read()));
}

void batch_align2D::thread_ap_condition_11627() {
    ap_condition_11627 = (!esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_C) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_D) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_E) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_F) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_10) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_11) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_12) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_13) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_14) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_15) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_16) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_17) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_18) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_19) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1A) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1B) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1C) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1D) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1E) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_1F) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_20) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_21) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_22) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_23) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_24) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_25) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_26) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_27) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_28) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_29) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2A) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2B) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2C) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2D) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2E) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_2F) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_30) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_31) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_32) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_33) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_34) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_35) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_36) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_37) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_38) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_39) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3A) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3B) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3C) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3D) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3E) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_3F) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_40) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_41) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_42) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_43) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_44) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_45) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_46) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_47) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_48) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_49) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4A) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4B) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4C) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4D) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4E) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_4F) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_50) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_51) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_52) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_53) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_54) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_55) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_56) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_57) && !esl_seteq<1,7,7>(tmp_58_3_t_fu_9025_p2.read(), ap_const_lv7_58));
}

void batch_align2D::thread_ap_condition_11632() {
    ap_condition_11632 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_13080.read()));
}

void batch_align2D::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(exitcond3_fu_4239_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp1_exit_iter0_state19() {
    if (esl_seteq<1,1,1>(exitcond1_fu_4256_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state19 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp2_exit_iter0_state28() {
    if (esl_seteq<1,1,1>(exitcond2_fu_6708_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state28 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state28 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp3_exit_iter0_state31() {
    if (esl_seteq<1,1,1>(exitcond_i_fu_6782_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state31 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state31 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp4_exit_iter0_state87() {
    if (esl_seteq<1,1,1>(exitcond_i_1_fu_7495_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state87 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state87 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp5_exit_iter0_state143() {
    if (esl_seteq<1,1,1>(exitcond_i_2_fu_8223_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp5_exit_iter0_state143 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state143 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp6_exit_iter0_state199() {
    if (esl_seteq<1,1,1>(exitcond_i_3_fu_8951_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp6_exit_iter0_state199 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state199 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp7_exit_iter0_state255() {
    if (esl_seteq<1,1,1>(exitcond4_fu_9679_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp7_exit_iter0_state255 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state255 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_condition_pp8_exit_iter0_state262() {
    if (esl_seteq<1,1,1>(exitcond5_fu_9733_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp8_exit_iter0_state262 = ap_const_logic_1;
    } else {
        ap_condition_pp8_exit_iter0_state262 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
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

void batch_align2D::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void batch_align2D::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ap_phi_mux_i_0_i_1_phi_fu_1804_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_i_1_phi_fu_1804_p4 = i_1_reg_11440.read();
    } else {
        ap_phi_mux_i_0_i_1_phi_fu_1804_p4 = i_0_i_1_reg_1800.read();
    }
}

void batch_align2D::thread_ap_phi_mux_i_0_i_2_phi_fu_2036_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_i_2_phi_fu_2036_p4 = i_2_reg_12218.read();
    } else {
        ap_phi_mux_i_0_i_2_phi_fu_2036_p4 = i_0_i_2_reg_2032.read();
    }
}

void batch_align2D::thread_ap_phi_mux_i_0_i_3_phi_fu_2268_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_i_3_phi_fu_2268_p4 = i_3_reg_12996.read();
    } else {
        ap_phi_mux_i_0_i_3_phi_fu_2268_p4 = i_0_i_3_reg_2264.read();
    }
}

void batch_align2D::thread_ap_phi_mux_i_0_i_phi_fu_1572_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_i_phi_fu_1572_p4 = i_reg_10668.read();
    } else {
        ap_phi_mux_i_0_i_phi_fu_1572_p4 = i_0_i_reg_1568.read();
    }
}

void batch_align2D::thread_ap_phi_mux_indvar_phi_fu_1456_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0))) {
        ap_phi_mux_indvar_phi_fu_1456_p4 = indvar_next_reg_9920.read();
    } else {
        ap_phi_mux_indvar_phi_fu_1456_p4 = indvar_reg_1452.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_10_1_phi_fu_1780_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_10_1_phi_fu_1780_p4 = reg_4072.read();
    } else {
        ap_phi_mux_tmp_10_1_phi_fu_1780_p4 = tmp_10_1_reg_1776.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_10_2_phi_fu_2012_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_10_2_phi_fu_2012_p4 = reg_4072.read();
    } else {
        ap_phi_mux_tmp_10_2_phi_fu_2012_p4 = tmp_10_2_reg_2008.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_10_3_phi_fu_2244_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_10_3_phi_fu_2244_p4 = reg_4072.read();
    } else {
        ap_phi_mux_tmp_10_3_phi_fu_2244_p4 = tmp_10_3_reg_2240.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_11_1_phi_fu_1792_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_11_1_phi_fu_1792_p4 = reg_4064.read();
    } else {
        ap_phi_mux_tmp_11_1_phi_fu_1792_p4 = tmp_11_1_reg_1788.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_11_2_phi_fu_2024_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_11_2_phi_fu_2024_p4 = reg_4064.read();
    } else {
        ap_phi_mux_tmp_11_2_phi_fu_2024_p4 = tmp_11_2_reg_2020.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_11_3_phi_fu_2256_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_11_3_phi_fu_2256_p4 = reg_4064.read();
    } else {
        ap_phi_mux_tmp_11_3_phi_fu_2256_p4 = tmp_11_3_reg_2252.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_1_16_phi_fu_1744_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_1_16_phi_fu_1744_p4 = reg_4055.read();
    } else {
        ap_phi_mux_tmp_1_16_phi_fu_1744_p4 = tmp_1_16_reg_1740.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_2_1_phi_fu_1768_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_2_1_phi_fu_1768_p4 = reg_4028.read();
    } else {
        ap_phi_mux_tmp_2_1_phi_fu_1768_p4 = tmp_2_1_reg_1764.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_2_20_phi_fu_1976_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_2_20_phi_fu_1976_p4 = reg_4055.read();
    } else {
        ap_phi_mux_tmp_2_20_phi_fu_1976_p4 = tmp_2_20_reg_1972.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_2_2_phi_fu_2000_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_2_2_phi_fu_2000_p4 = reg_4028.read();
    } else {
        ap_phi_mux_tmp_2_2_phi_fu_2000_p4 = tmp_2_2_reg_1996.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_2_3_phi_fu_2232_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_2_3_phi_fu_2232_p4 = reg_4028.read();
    } else {
        ap_phi_mux_tmp_2_3_phi_fu_2232_p4 = tmp_2_3_reg_2228.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_3_24_phi_fu_2208_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_3_24_phi_fu_2208_p4 = reg_4055.read();
    } else {
        ap_phi_mux_tmp_3_24_phi_fu_2208_p4 = tmp_3_24_reg_2204.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_5_phi_fu_1560_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_5_phi_fu_1560_p4 = reg_4064.read();
    } else {
        ap_phi_mux_tmp_5_phi_fu_1560_p4 = tmp_5_reg_1556.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_8_phi_fu_1536_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_8_phi_fu_1536_p4 = reg_4028.read();
    } else {
        ap_phi_mux_tmp_8_phi_fu_1536_p4 = tmp_8_reg_1532.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_9_phi_fu_1548_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_9_phi_fu_1548_p4 = reg_4072.read();
    } else {
        ap_phi_mux_tmp_9_phi_fu_1548_p4 = tmp_9_reg_1544.read();
    }
}

void batch_align2D::thread_ap_phi_mux_tmp_s_phi_fu_1512_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_tmp_s_phi_fu_1512_p4 = reg_4055.read();
    } else {
        ap_phi_mux_tmp_s_phi_fu_1512_p4 = tmp_s_reg_1508.read();
    }
}

void batch_align2D::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        converged_ap_vld = ap_const_logic_1;
    } else {
        converged_ap_vld = ap_const_logic_0;
    }
}

void batch_align2D::thread_cur_px_estimate_ptr5_fu_4203_p4() {
    cur_px_estimate_ptr5_fu_4203_p4 = cur_px_estimate_ptr.read().range(63, 2);
}

void batch_align2D::thread_cur_px_estimate_ptr6_1_fu_8208_p2() {
    cur_px_estimate_ptr6_1_fu_8208_p2 = (!tmp_84_cast_reg_9889.read().is_01() || !ap_const_lv63_2.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_84_cast_reg_9889.read()) + sc_biguint<63>(ap_const_lv63_2));
}

void batch_align2D::thread_cur_px_estimate_ptr6_2_fu_8936_p2() {
    cur_px_estimate_ptr6_2_fu_8936_p2 = (!tmp_84_cast_reg_9889.read().is_01() || !ap_const_lv63_4.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_84_cast_reg_9889.read()) + sc_biguint<63>(ap_const_lv63_4));
}

void batch_align2D::thread_cur_px_estimate_ptr6_3_fu_9629_p2() {
    cur_px_estimate_ptr6_3_fu_9629_p2 = (!tmp_84_cast_reg_9889.read().is_01() || !ap_const_lv63_6.is_01())? sc_lv<63>(): (sc_biguint<63>(tmp_84_cast_reg_9889.read()) + sc_biguint<63>(ap_const_lv63_6));
}

void batch_align2D::thread_cur_px_estimate_ptr6_4_fu_8941_p1() {
    cur_px_estimate_ptr6_4_fu_8941_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_2_fu_8936_p2.read());
}

void batch_align2D::thread_cur_px_estimate_ptr6_5_fu_9634_p1() {
    cur_px_estimate_ptr6_5_fu_9634_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_3_fu_9629_p2.read());
}

void batch_align2D::thread_cur_px_estimate_ptr6_fu_8213_p1() {
    cur_px_estimate_ptr6_fu_8213_p1 = esl_zext<64,63>(cur_px_estimate_ptr6_1_fu_8208_p2.read());
}

void batch_align2D::thread_debug_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_AWREADY.read()))) {
        debug_AWVALID = ap_const_logic_1;
    } else {
        debug_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read()) && 
         esl_seteq<1,1,1>(debug_BVALID.read(), ap_const_logic_1))) {
        debug_BREADY = ap_const_logic_1;
    } else {
        debug_BREADY = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_13080.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_debug_WREADY.read()))) {
        debug_WVALID = ap_const_logic_1;
    } else {
        debug_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_debug_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        debug_blk_n_AW = m_axi_debug_AWREADY.read();
    } else {
        debug_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state261.read())) {
        debug_blk_n_B = m_axi_debug_BVALID.read();
    } else {
        debug_blk_n_B = ap_const_logic_1;
    }
}

void batch_align2D::thread_debug_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_13080.read()))) {
        debug_blk_n_W = m_axi_debug_WREADY.read();
    } else {
        debug_blk_n_W = ap_const_logic_1;
    }
}

void batch_align2D::thread_exitcond1_fu_4256_p2() {
    exitcond1_fu_4256_p2 = (!indvar1_reg_1464.read().is_01() || !ap_const_lv9_190.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_1464.read() == ap_const_lv9_190);
}

void batch_align2D::thread_exitcond2_fu_6708_p2() {
    exitcond2_fu_6708_p2 = (!indvar3_reg_1497.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_1497.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond3_fu_4239_p2() {
    exitcond3_fu_4239_p2 = (!ap_phi_mux_indvar_phi_fu_1456_p4.read().is_01() || !ap_const_lv19_73AA0.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_1456_p4.read() == ap_const_lv19_73AA0);
}

void batch_align2D::thread_exitcond4_fu_9679_p2() {
    exitcond4_fu_9679_p2 = (!indvar6_reg_2436.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_reg_2436.read() == ap_const_lv6_24);
}

void batch_align2D::thread_exitcond5_fu_9733_p2() {
    exitcond5_fu_9733_p2 = (!indvar8_reg_2447.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_reg_2447.read() == ap_const_lv4_8);
}

void batch_align2D::thread_exitcond_i_1_fu_7495_p2() {
    exitcond_i_1_fu_7495_p2 = (!ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read() == ap_const_lv7_40);
}

void batch_align2D::thread_exitcond_i_2_fu_8223_p2() {
    exitcond_i_2_fu_8223_p2 = (!ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read() == ap_const_lv7_40);
}

void batch_align2D::thread_exitcond_i_3_fu_8951_p2() {
    exitcond_i_3_fu_8951_p2 = (!ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read() == ap_const_lv7_40);
}

void batch_align2D::thread_exitcond_i_fu_6782_p2() {
    exitcond_i_fu_6782_p2 = (!ap_phi_mux_i_0_i_phi_fu_1572_p4.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_i_phi_fu_1572_p4.read() == ap_const_lv7_40);
}

void batch_align2D::thread_grp_fu_2458_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state120.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state176.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state180.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state118.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state230.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state135.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state122.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state123.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state175.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state179.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage3_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state231.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state246.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state247.read()))) {
        grp_fu_2458_ce = ap_const_logic_1;
    } else {
        grp_fu_2458_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_2458_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()))) {
        grp_fu_2458_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage3_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage3_00001.read(), ap_const_boolean_0)))) {
        grp_fu_2458_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2458_opcode = "XX";
    }
}

void batch_align2D::thread_grp_fu_2458_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        grp_fu_2458_p0 = H_inv_3_0_reg_13046.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        grp_fu_2458_p0 = H_inv_2_0_reg_12262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read())) {
        grp_fu_2458_p0 = H_inv_1_0_reg_11484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_fu_2458_p0 = H_inv_0_0_reg_10712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()))) {
        grp_fu_2458_p0 = reg_4028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2458_p0 = reg_4123.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0)) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0)) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0)) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage3.read(), ap_const_boolean_0)) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()))) {
        grp_fu_2458_p0 = reg_4021.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_2458_p0 = reg_4011.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_2458_p0 = reg_4004.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_2458_p0 = reg_3996.read();
    } else {
        grp_fu_2458_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2458_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_10_3_phi_fu_2244_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_11_3_phi_fu_2256_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_3_24_phi_fu_2208_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_2_3_phi_fu_2232_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_10_2_phi_fu_2012_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_11_2_phi_fu_2024_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_2_20_phi_fu_1976_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_2_2_phi_fu_2000_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_10_1_phi_fu_1780_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_11_1_phi_fu_1792_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_1_16_phi_fu_1744_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_2_1_phi_fu_1768_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state133.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()))) {
        grp_fu_2458_p1 = reg_3996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state121.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state233.read()))) {
        grp_fu_2458_p1 = reg_4116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        grp_fu_2458_p1 = reg_4021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()))) {
        grp_fu_2458_p1 = reg_4144.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        grp_fu_2458_p1 = reg_4139.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2458_p1 = reg_4128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_9_phi_fu_1548_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_5_phi_fu_1560_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_s_phi_fu_1512_p4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2458_p1 = ap_phi_mux_tmp_8_phi_fu_1536_p4.read();
    } else {
        grp_fu_2458_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2466_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        grp_fu_2466_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_reg_10664_pp3_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_1_reg_11436_pp4_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_2_reg_12214_pp5_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_3_reg_12992_pp6_iter1_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_2466_opcode = ap_const_lv2_0;
    } else {
        grp_fu_2466_opcode = "XX";
    }
}

void batch_align2D::thread_grp_fu_2466_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        grp_fu_2466_p0 = reg_4101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2466_p0 = reg_4150.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_2466_p0 = reg_4047.read();
    } else {
        grp_fu_2466_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2466_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2466_p1 = tmp_1_3_reg_2216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2466_p1 = tmp_1_2_reg_1984.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2466_p1 = tmp_1_1_reg_1752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state173.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        grp_fu_2466_p1 = reg_4160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2466_p1 = reg_4155.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_fu_2466_p1 = tmp_7_reg_1520.read();
    } else {
        grp_fu_2466_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2494_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
          esl_seteq<1,1,1>(ap_block_state212_io.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state108.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state164.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage3_11001.read(), ap_const_boolean_0)))) {
        grp_fu_2494_ce = ap_const_logic_1;
    } else {
        grp_fu_2494_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_2494_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        grp_fu_2494_p0 = tmp_11_3_reg_2252.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        grp_fu_2494_p0 = tmp_10_3_reg_2240.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_2494_p0 = tmp_11_2_reg_2020.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        grp_fu_2494_p0 = tmp_10_2_reg_2008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fu_2494_p0 = tmp_11_1_reg_1788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2494_p0 = tmp_10_1_reg_1776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()))) {
        grp_fu_2494_p0 = reg_4144.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        grp_fu_2494_p0 = reg_4089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()))) {
        grp_fu_2494_p0 = reg_4133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()))) {
        grp_fu_2494_p0 = reg_4047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        grp_fu_2494_p0 = tmp_5_reg_1556.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_2494_p0 = reg_4011.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_fu_2494_p0 = tmp_9_reg_1544.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_2494_p0 = reg_4004.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_2494_p0 = reg_3996.read();
    } else {
        grp_fu_2494_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2494_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        grp_fu_2494_p1 = reg_4011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state111.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state223.read()))) {
        grp_fu_2494_p1 = reg_4089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read()))) {
        grp_fu_2494_p1 = ap_const_lv32_42800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state105.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state221.read()))) {
        grp_fu_2494_p1 = reg_4116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_2494_p1 = reg_4101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2494_p1 = ap_const_lv32_3E800000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)))) {
        grp_fu_2494_p1 = reg_4004.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_2494_p1 = reg_3996.read();
    } else {
        grp_fu_2494_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2500_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
          esl_seteq<1,1,1>(ap_block_state212_io.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state102.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2500_ce = ap_const_logic_1;
    } else {
        grp_fu_2500_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_2500_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read())) {
        grp_fu_2500_p0 = tmp_1_3_reg_2216.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        grp_fu_2500_p0 = tmp_2_3_reg_2228.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        grp_fu_2500_p0 = tmp_1_2_reg_1984.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        grp_fu_2500_p0 = tmp_2_2_reg_1996.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        grp_fu_2500_p0 = tmp_1_1_reg_1752.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2500_p0 = tmp_2_1_reg_1764.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        grp_fu_2500_p0 = reg_4047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        grp_fu_2500_p0 = tmp_7_reg_1520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_2500_p0 = reg_4089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_fu_2500_p0 = tmp_8_reg_1532.read();
    } else {
        grp_fu_2500_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2500_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2500_p1 = reg_4101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2500_p1 = ap_const_lv32_3E800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state157.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()))) {
        grp_fu_2500_p1 = reg_4011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()))) {
        grp_fu_2500_p1 = ap_const_lv32_3F000000;
    } else {
        grp_fu_2500_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2506_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state156.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
          esl_seteq<1,1,1>(ap_block_state212_io.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state104.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state160.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_pos_r_AWREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2506_ce = ap_const_logic_1;
    } else {
        grp_fu_2506_ce = ap_const_logic_0;
    }
}

void batch_align2D::thread_grp_fu_2506_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        grp_fu_2506_p0 = tmp_3_24_reg_2204.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        grp_fu_2506_p0 = tmp_2_20_reg_1972.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read())) {
        grp_fu_2506_p0 = tmp_1_16_reg_1740.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2506_p0 = reg_4116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        grp_fu_2506_p0 = reg_4011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2506_p0 = reg_4021.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_fu_2506_p0 = tmp_s_reg_1508.read();
    } else {
        grp_fu_2506_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2506_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2506_p1 = ap_const_lv32_42800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2506_p1 = reg_4089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state99.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()))) {
        grp_fu_2506_p1 = ap_const_lv32_3F000000;
    } else {
        grp_fu_2506_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2515_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()))) {
        grp_fu_2515_p0 = reg_4101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2515_p0 = reg_4110.read();
    } else {
        grp_fu_2515_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2515_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        grp_fu_2515_p1 = reg_4089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state227.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state215.read()))) {
        grp_fu_2515_p1 = reg_4101.read();
    } else {
        grp_fu_2515_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2549_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        grp_fu_2549_p0 = tmp_40_3_fu_9654_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        grp_fu_2549_p0 = tmp_40_2_fu_8911_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        grp_fu_2549_p0 = tmp_40_1_fu_8183_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fu_2549_p0 = tmp_35_fu_7470_p1.read();
    } else {
        grp_fu_2549_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2561_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state237.read())) {
        grp_fu_2561_p0 = tmp_49_3_fu_9669_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state181.read())) {
        grp_fu_2561_p0 = tmp_49_2_fu_8926_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        grp_fu_2561_p0 = tmp_49_1_fu_8198_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        grp_fu_2561_p0 = tmp_41_fu_7485_p1.read();
    } else {
        grp_fu_2561_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_grp_fu_2569_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read())) {
        grp_fu_2569_p0 = tmp_53_3_fu_9674_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_76_5_fu_9625_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_66_5_fu_9620_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        grp_fu_2569_p0 = tmp_53_2_fu_8931_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_76_4_fu_8897_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_66_4_fu_8892_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state130.read())) {
        grp_fu_2569_p0 = tmp_53_1_fu_8203_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_76_s_fu_8169_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_66_s_fu_8164_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        grp_fu_2569_p0 = tmp_43_fu_7490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_94_fu_7456_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_2569_p0 = tmp_93_fu_7451_p1.read();
    } else {
        grp_fu_2569_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_i_1_fu_7501_p2() {
    i_1_fu_7501_p2 = (!ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void batch_align2D::thread_i_2_fu_8229_p2() {
    i_2_fu_8229_p2 = (!ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void batch_align2D::thread_i_3_fu_8957_p2() {
    i_3_fu_8957_p2 = (!ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void batch_align2D::thread_i_fu_6788_p2() {
    i_fu_6788_p2 = (!ap_phi_mux_i_0_i_phi_fu_1572_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_i_phi_fu_1572_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void batch_align2D::thread_idx_urem_fu_4300_p3() {
    idx_urem_fu_4300_p3 = (!tmp_89_fu_4294_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_89_fu_4294_p2.read()[0].to_bool())? next_urem_fu_4288_p2.read(): ap_const_lv9_0);
}

void batch_align2D::thread_indvar4_fu_4251_p1() {
    indvar4_fu_4251_p1 = esl_zext<64,19>(indvar_reg_1452_pp0_iter1_reg.read());
}

void batch_align2D::thread_indvar_next1_fu_4262_p2() {
    indvar_next1_fu_4262_p2 = (!indvar1_reg_1464.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar1_reg_1464.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void batch_align2D::thread_indvar_next2_fu_6714_p2() {
    indvar_next2_fu_6714_p2 = (!indvar3_reg_1497.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar3_reg_1497.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next3_fu_9685_p2() {
    indvar_next3_fu_9685_p2 = (!indvar6_reg_2436.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar6_reg_2436.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void batch_align2D::thread_indvar_next4_fu_9739_p2() {
    indvar_next4_fu_9739_p2 = (!indvar8_reg_2447.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar8_reg_2447.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void batch_align2D::thread_indvar_next_fu_4245_p2() {
    indvar_next_fu_4245_p2 = (!ap_phi_mux_indvar_phi_fu_1456_p4.read().is_01() || !ap_const_lv19_1.is_01())? sc_lv<19>(): (sc_biguint<19>(ap_phi_mux_indvar_phi_fu_1456_p4.read()) + sc_biguint<19>(ap_const_lv19_1));
}

void batch_align2D::thread_inv_out7_fu_4183_p4() {
    inv_out7_fu_4183_p4 = inv_out.read().range(63, 2);
}

void batch_align2D::thread_next_mul_fu_4268_p2() {
    next_mul_fu_4268_p2 = (!ap_const_lv19_290.is_01() || !phi_mul_reg_1475.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_290) + sc_biguint<19>(phi_mul_reg_1475.read()));
}

void batch_align2D::thread_next_urem_fu_4288_p2() {
    next_urem_fu_4288_p2 = (!phi_urem_reg_1486.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(phi_urem_reg_1486.read()) + sc_biguint<9>(ap_const_lv9_1));
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9930.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9930.read()))) {
        patches_blk_n_R = m_axi_patches_RVALID.read();
    } else {
        patches_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_ARREADY.read()))) {
        pos_r_ARVALID = ap_const_logic_1;
    } else {
        pos_r_ARVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_AWADDR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_3_reg_13025.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_2_reg_12296.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWADDR = pos_addr_1_reg_11518.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWADDR = pos_addr_reg_9896.read();
    } else {
        pos_r_AWADDR =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_AWLEN() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read()))) {
        pos_r_AWLEN = ap_const_lv32_8;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWLEN = ap_const_lv32_1;
    } else {
        pos_r_AWLEN =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_AWVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_AWREADY.read())))) {
        pos_r_AWVALID = ap_const_logic_1;
    } else {
        pos_r_AWVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_BREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state254.read()) && 
          esl_seteq<1,1,1>(pos_r_BVALID.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) && 
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_13094.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_01001.read(), ap_const_boolean_0))) {
        pos_r_WDATA = UnifiedRetVal_i_reg_13103.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())))) {
        pos_r_WDATA = reg_4028.read();
    } else {
        pos_r_WDATA =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pos_r_WVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_13094.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pos_r_WREADY.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_01001.read(), ap_const_boolean_0)))) {
        pos_r_WVALID = ap_const_logic_1;
    } else {
        pos_r_WVALID = ap_const_logic_0;
    }
}

void batch_align2D::thread_pos_r_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        pos_r_blk_n_AR = m_axi_pos_r_ARREADY.read();
    } else {
        pos_r_blk_n_AR = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_AW() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state257.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state136.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()))) {
        pos_r_blk_n_AW = m_axi_pos_r_AWREADY.read();
    } else {
        pos_r_blk_n_AW = ap_const_logic_1;
    }
}

void batch_align2D::thread_pos_r_blk_n_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state86.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state268.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state142.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state198.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state254.read()))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_13094.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state137.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state249.read()))) {
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
         esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0) && 
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
         esl_seteq<1,1,1>(exitcond3_reg_9916.read(), ap_const_lv1_0))) {
        pyr_blk_n_R = m_axi_pyr_RVALID.read();
    } else {
        pyr_blk_n_R = ap_const_logic_1;
    }
}

void batch_align2D::thread_pyr_data_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        pyr_data_address0 = ap_const_lv19_3;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read())) {
        pyr_data_address0 = ap_const_lv19_2;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read())) {
        pyr_data_address0 = ap_const_lv19_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        pyr_data_address0 = ap_const_lv19_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        pyr_data_address0 =  (sc_lv<19>) (indvar4_fu_4251_p1.read());
    } else {
        pyr_data_address0 =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
    }
}

void batch_align2D::thread_pyr_data_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state184.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()))) {
        pyr_data_ce0 = ap_const_logic_1;
    } else {
        pyr_data_ce0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_pyr_data_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_9916_pp0_iter1_reg.read()))) {
        pyr_data_we0 = ap_const_logic_1;
    } else {
        pyr_data_we0 = ap_const_logic_0;
    }
}

void batch_align2D::thread_ref_patch_with_borde_1071_fu_7591_p129() {
    ref_patch_with_borde_1071_fu_7591_p129 = (!tmp7_cast_fu_7581_p1.read().is_01() || !tmp_53_fu_7545_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp7_cast_fu_7581_p1.read()) + sc_biguint<7>(tmp_53_fu_7545_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_1072_fu_7741_p129() {
    ref_patch_with_borde_1072_fu_7741_p129 = (!tmp8_cast_fu_7731_p1.read().is_01() || !tmp_53_fu_7545_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp8_cast_fu_7731_p1.read()) + sc_biguint<7>(tmp_53_fu_7545_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_1263_fu_8319_p129() {
    ref_patch_with_borde_1263_fu_8319_p129 = (!tmp11_cast_fu_8309_p1.read().is_01() || !tmp_72_fu_8273_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp11_cast_fu_8309_p1.read()) + sc_biguint<7>(tmp_72_fu_8273_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_1264_fu_8469_p129() {
    ref_patch_with_borde_1264_fu_8469_p129 = (!tmp12_cast_fu_8459_p1.read().is_01() || !tmp_72_fu_8273_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp12_cast_fu_8459_p1.read()) + sc_biguint<7>(tmp_72_fu_8273_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_1366_fu_9047_p129() {
    ref_patch_with_borde_1366_fu_9047_p129 = (!tmp15_cast_fu_9037_p1.read().is_01() || !tmp_78_fu_9001_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp15_cast_fu_9037_p1.read()) + sc_biguint<7>(tmp_78_fu_9001_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_1367_fu_9197_p129() {
    ref_patch_with_borde_1367_fu_9197_p129 = (!tmp16_cast_fu_9187_p1.read().is_01() || !tmp_78_fu_9001_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp16_cast_fu_9187_p1.read()) + sc_biguint<7>(tmp_78_fu_9001_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_879_fu_6878_p129() {
    ref_patch_with_borde_879_fu_6878_p129 = (!tmp3_cast_fu_6868_p1.read().is_01() || !tmp_48_fu_6832_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp3_cast_fu_6868_p1.read()) + sc_biguint<7>(tmp_48_fu_6832_p2.read()));
}

void batch_align2D::thread_ref_patch_with_borde_880_fu_7028_p129() {
    ref_patch_with_borde_880_fu_7028_p129 = (!tmp4_cast_fu_7018_p1.read().is_01() || !tmp_48_fu_6832_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp4_cast_fu_7018_p1.read()) + sc_biguint<7>(tmp_48_fu_6832_p2.read()));
}

void batch_align2D::thread_sel_tmp10_i_fu_9851_p2() {
    sel_tmp10_i_fu_9851_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_5);
}

void batch_align2D::thread_sel_tmp11_i_fu_9857_p3() {
    sel_tmp11_i_fu_9857_p3 = (!sel_tmp10_i_fu_9851_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i_fu_9851_p2.read()[0].to_bool())? cur_px_estimate_2_1.read(): sel_tmp9_i_fu_9843_p3.read());
}

void batch_align2D::thread_sel_tmp12_i_fu_9865_p2() {
    sel_tmp12_i_fu_9865_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_6);
}

void batch_align2D::thread_sel_tmp1_i_fu_9787_p3() {
    sel_tmp1_i_fu_9787_p3 = (!sel_tmp_i_fu_9781_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i_fu_9781_p2.read()[0].to_bool())? cur_px_estimate_0_0.read(): cur_px_estimate_3_1.read());
}

void batch_align2D::thread_sel_tmp2_i_fu_9795_p2() {
    sel_tmp2_i_fu_9795_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_1);
}

void batch_align2D::thread_sel_tmp3_i_fu_9801_p3() {
    sel_tmp3_i_fu_9801_p3 = (!sel_tmp2_i_fu_9795_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i_fu_9795_p2.read()[0].to_bool())? cur_px_estimate_0_1.read(): sel_tmp1_i_fu_9787_p3.read());
}

void batch_align2D::thread_sel_tmp4_i_fu_9809_p2() {
    sel_tmp4_i_fu_9809_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_2);
}

void batch_align2D::thread_sel_tmp5_i_fu_9815_p3() {
    sel_tmp5_i_fu_9815_p3 = (!sel_tmp4_i_fu_9809_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i_fu_9809_p2.read()[0].to_bool())? cur_px_estimate_1_0.read(): sel_tmp3_i_fu_9801_p3.read());
}

void batch_align2D::thread_sel_tmp6_i_fu_9823_p2() {
    sel_tmp6_i_fu_9823_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_3);
}

void batch_align2D::thread_sel_tmp7_i_fu_9829_p3() {
    sel_tmp7_i_fu_9829_p3 = (!sel_tmp6_i_fu_9823_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i_fu_9823_p2.read()[0].to_bool())? cur_px_estimate_1_1.read(): sel_tmp5_i_fu_9815_p3.read());
}

void batch_align2D::thread_sel_tmp8_i_fu_9837_p2() {
    sel_tmp8_i_fu_9837_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_4);
}

void batch_align2D::thread_sel_tmp9_i_fu_9843_p3() {
    sel_tmp9_i_fu_9843_p3 = (!sel_tmp8_i_fu_9837_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i_fu_9837_p2.read()[0].to_bool())? cur_px_estimate_2_0.read(): sel_tmp7_i_fu_9829_p3.read());
}

void batch_align2D::thread_sel_tmp_i_fu_9781_p2() {
    sel_tmp_i_fu_9781_p2 = (!tmp_97_fu_9745_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_9745_p1.read() == ap_const_lv3_0);
}

void batch_align2D::thread_tmp10_cast_fu_8293_p1() {
    tmp10_cast_fu_8293_p1 = esl_zext<7,5>(tmp10_fu_8287_p2.read());
}

void batch_align2D::thread_tmp10_fu_8287_p2() {
    tmp10_fu_8287_p2 = (!ap_const_lv5_C.is_01() || !tmp_76_cast_fu_8283_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(tmp_76_cast_fu_8283_p1.read()));
}

void batch_align2D::thread_tmp11_cast_fu_8309_p1() {
    tmp11_cast_fu_8309_p1 = esl_zext<7,5>(tmp11_fu_8303_p2.read());
}

void batch_align2D::thread_tmp11_fu_8303_p2() {
    tmp11_fu_8303_p2 = (!tmp_76_cast_fu_8283_p1.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_76_cast_fu_8283_p1.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void batch_align2D::thread_tmp12_cast_fu_8459_p1() {
    tmp12_cast_fu_8459_p1 = esl_zext<7,5>(tmp12_fu_8453_p2.read());
}

void batch_align2D::thread_tmp12_fu_8453_p2() {
    tmp12_fu_8453_p2 = (!tmp_76_cast_fu_8283_p1.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_76_cast_fu_8283_p1.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D::thread_tmp14_cast_fu_9021_p1() {
    tmp14_cast_fu_9021_p1 = esl_zext<7,5>(tmp14_fu_9015_p2.read());
}

void batch_align2D::thread_tmp14_fu_9015_p2() {
    tmp14_fu_9015_p2 = (!ap_const_lv5_C.is_01() || !tmp_90_cast_fu_9011_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(tmp_90_cast_fu_9011_p1.read()));
}

void batch_align2D::thread_tmp15_cast_fu_9037_p1() {
    tmp15_cast_fu_9037_p1 = esl_zext<7,5>(tmp15_fu_9031_p2.read());
}

void batch_align2D::thread_tmp15_fu_9031_p2() {
    tmp15_fu_9031_p2 = (!tmp_90_cast_fu_9011_p1.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_90_cast_fu_9011_p1.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void batch_align2D::thread_tmp16_cast_fu_9187_p1() {
    tmp16_cast_fu_9187_p1 = esl_zext<7,5>(tmp16_fu_9181_p2.read());
}

void batch_align2D::thread_tmp16_fu_9181_p2() {
    tmp16_fu_9181_p2 = (!tmp_90_cast_fu_9011_p1.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_90_cast_fu_9011_p1.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D::thread_tmp2_cast_fu_6852_p1() {
    tmp2_cast_fu_6852_p1 = esl_zext<7,5>(tmp2_fu_6846_p2.read());
}

void batch_align2D::thread_tmp2_fu_6846_p2() {
    tmp2_fu_6846_p2 = (!ap_const_lv5_C.is_01() || !tmp_54_cast_fu_6842_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(tmp_54_cast_fu_6842_p1.read()));
}

void batch_align2D::thread_tmp3_cast_fu_6868_p1() {
    tmp3_cast_fu_6868_p1 = esl_zext<7,5>(tmp3_fu_6862_p2.read());
}

void batch_align2D::thread_tmp3_fu_6862_p2() {
    tmp3_fu_6862_p2 = (!tmp_54_cast_fu_6842_p1.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_54_cast_fu_6842_p1.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void batch_align2D::thread_tmp4_cast_fu_7018_p1() {
    tmp4_cast_fu_7018_p1 = esl_zext<7,5>(tmp4_fu_7012_p2.read());
}

void batch_align2D::thread_tmp4_fu_7012_p2() {
    tmp4_fu_7012_p2 = (!tmp_54_cast_fu_6842_p1.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_54_cast_fu_6842_p1.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D::thread_tmp6_cast_fu_7565_p1() {
    tmp6_cast_fu_7565_p1 = esl_zext<7,5>(tmp6_fu_7559_p2.read());
}

void batch_align2D::thread_tmp6_fu_7559_p2() {
    tmp6_fu_7559_p2 = (!ap_const_lv5_C.is_01() || !tmp_64_cast_fu_7555_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(tmp_64_cast_fu_7555_p1.read()));
}

void batch_align2D::thread_tmp7_cast_fu_7581_p1() {
    tmp7_cast_fu_7581_p1 = esl_zext<7,5>(tmp7_fu_7575_p2.read());
}

void batch_align2D::thread_tmp7_fu_7575_p2() {
    tmp7_fu_7575_p2 = (!tmp_64_cast_fu_7555_p1.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_64_cast_fu_7555_p1.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void batch_align2D::thread_tmp8_cast_fu_7731_p1() {
    tmp8_cast_fu_7731_p1 = esl_zext<7,5>(tmp8_fu_7725_p2.read());
}

void batch_align2D::thread_tmp8_fu_7725_p2() {
    tmp8_fu_7725_p2 = (!tmp_64_cast_fu_7555_p1.read().is_01() || !ap_const_lv5_15.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_64_cast_fu_7555_p1.read()) + sc_bigint<5>(ap_const_lv5_15));
}

void batch_align2D::thread_tmp_2_fu_4193_p1() {
    tmp_2_fu_4193_p1 = esl_zext<64,62>(inv_out7_fu_4183_p4.read());
}

void batch_align2D::thread_tmp_35_fu_7470_p1() {
    tmp_35_fu_7470_p1 = tmp_40_neg_fu_7464_p2.read();
}

void batch_align2D::thread_tmp_40_1_fu_8183_p1() {
    tmp_40_1_fu_8183_p1 = tmp_40_neg_1_fu_8177_p2.read();
}

void batch_align2D::thread_tmp_40_2_fu_8911_p1() {
    tmp_40_2_fu_8911_p1 = tmp_40_neg_2_fu_8905_p2.read();
}

void batch_align2D::thread_tmp_40_3_fu_9654_p1() {
    tmp_40_3_fu_9654_p1 = tmp_40_neg_3_fu_9648_p2.read();
}

void batch_align2D::thread_tmp_40_neg_1_fu_8177_p2() {
    tmp_40_neg_1_fu_8177_p2 = (tmp_40_to_int_1_fu_8173_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_40_neg_2_fu_8905_p2() {
    tmp_40_neg_2_fu_8905_p2 = (tmp_40_to_int_2_fu_8901_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_40_neg_3_fu_9648_p2() {
    tmp_40_neg_3_fu_9648_p2 = (tmp_40_to_int_3_fu_9644_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_40_neg_fu_7464_p2() {
    tmp_40_neg_fu_7464_p2 = (tmp_40_to_int_fu_7460_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_40_to_int_1_fu_8173_p1() {
    tmp_40_to_int_1_fu_8173_p1 = reg_4064.read();
}

void batch_align2D::thread_tmp_40_to_int_2_fu_8901_p1() {
    tmp_40_to_int_2_fu_8901_p1 = reg_4064.read();
}

void batch_align2D::thread_tmp_40_to_int_3_fu_9644_p1() {
    tmp_40_to_int_3_fu_9644_p1 = reg_4064.read();
}

void batch_align2D::thread_tmp_40_to_int_fu_7460_p1() {
    tmp_40_to_int_fu_7460_p1 = reg_4064.read();
}

void batch_align2D::thread_tmp_41_fu_7485_p1() {
    tmp_41_fu_7485_p1 = tmp_49_neg_fu_7479_p2.read();
}

void batch_align2D::thread_tmp_43_fu_7490_p1() {
    tmp_43_fu_7490_p1 = esl_zext<32,8>(reg_4179.read());
}

void batch_align2D::thread_tmp_46_fu_6808_p3() {
    tmp_46_fu_6808_p3 = esl_concat<3,1>(tmp_86_fu_6798_p4.read(), ap_const_lv1_0);
}

void batch_align2D::thread_tmp_47_cast_fu_6816_p1() {
    tmp_47_cast_fu_6816_p1 = esl_zext<7,4>(tmp_46_fu_6808_p3.read());
}

void batch_align2D::thread_tmp_47_fu_6820_p3() {
    tmp_47_fu_6820_p3 = esl_concat<3,3>(tmp_86_fu_6798_p4.read(), ap_const_lv3_0);
}

void batch_align2D::thread_tmp_48_fu_6832_p2() {
    tmp_48_fu_6832_p2 = (!tmp_50_cast_fu_6828_p1.read().is_01() || !tmp_47_cast_fu_6816_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_50_cast_fu_6828_p1.read()) + sc_biguint<7>(tmp_47_cast_fu_6816_p1.read()));
}

void batch_align2D::thread_tmp_49_1_fu_8198_p1() {
    tmp_49_1_fu_8198_p1 = tmp_49_neg_1_fu_8192_p2.read();
}

void batch_align2D::thread_tmp_49_2_fu_8926_p1() {
    tmp_49_2_fu_8926_p1 = tmp_49_neg_2_fu_8920_p2.read();
}

void batch_align2D::thread_tmp_49_3_fu_9669_p1() {
    tmp_49_3_fu_9669_p1 = tmp_49_neg_3_fu_9663_p2.read();
}

void batch_align2D::thread_tmp_49_neg_1_fu_8192_p2() {
    tmp_49_neg_1_fu_8192_p2 = (tmp_49_to_int_1_fu_8188_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_49_neg_2_fu_8920_p2() {
    tmp_49_neg_2_fu_8920_p2 = (tmp_49_to_int_2_fu_8916_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_49_neg_3_fu_9663_p2() {
    tmp_49_neg_3_fu_9663_p2 = (tmp_49_to_int_3_fu_9659_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_49_neg_fu_7479_p2() {
    tmp_49_neg_fu_7479_p2 = (tmp_49_to_int_fu_7475_p1.read() ^ ap_const_lv32_80000000);
}

void batch_align2D::thread_tmp_49_to_int_1_fu_8188_p1() {
    tmp_49_to_int_1_fu_8188_p1 = reg_4165.read();
}

void batch_align2D::thread_tmp_49_to_int_2_fu_8916_p1() {
    tmp_49_to_int_2_fu_8916_p1 = reg_4165.read();
}

void batch_align2D::thread_tmp_49_to_int_3_fu_9659_p1() {
    tmp_49_to_int_3_fu_9659_p1 = reg_4165.read();
}

void batch_align2D::thread_tmp_49_to_int_fu_7475_p1() {
    tmp_49_to_int_fu_7475_p1 = reg_4165.read();
}

void batch_align2D::thread_tmp_50_cast_fu_6828_p1() {
    tmp_50_cast_fu_6828_p1 = esl_zext<7,6>(tmp_47_fu_6820_p3.read());
}

void batch_align2D::thread_tmp_51_fu_7521_p3() {
    tmp_51_fu_7521_p3 = esl_concat<3,1>(tmp_88_fu_7511_p4.read(), ap_const_lv1_0);
}

void batch_align2D::thread_tmp_52_fu_7533_p3() {
    tmp_52_fu_7533_p3 = esl_concat<3,3>(tmp_88_fu_7511_p4.read(), ap_const_lv3_0);
}

void batch_align2D::thread_tmp_53_1_fu_8203_p1() {
    tmp_53_1_fu_8203_p1 = esl_zext<32,8>(reg_4179.read());
}

void batch_align2D::thread_tmp_53_2_fu_8931_p1() {
    tmp_53_2_fu_8931_p1 = esl_zext<32,8>(reg_4179.read());
}

void batch_align2D::thread_tmp_53_3_fu_9674_p1() {
    tmp_53_3_fu_9674_p1 = esl_zext<32,8>(reg_4179.read());
}

void batch_align2D::thread_tmp_53_fu_7545_p2() {
    tmp_53_fu_7545_p2 = (!tmp_61_cast_fu_7541_p1.read().is_01() || !tmp_60_cast_fu_7529_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_61_cast_fu_7541_p1.read()) + sc_biguint<7>(tmp_60_cast_fu_7529_p1.read()));
}

void batch_align2D::thread_tmp_54_cast1_fu_6838_p1() {
    tmp_54_cast1_fu_6838_p1 = esl_zext<7,3>(tmp_87_fu_6794_p1.read());
}

void batch_align2D::thread_tmp_54_cast_fu_6842_p1() {
    tmp_54_cast_fu_6842_p1 = esl_zext<5,3>(tmp_87_fu_6794_p1.read());
}

void batch_align2D::thread_tmp_54_fu_7445_p2() {
    tmp_54_fu_7445_p2 = (!tmp_65_cast_fu_7438_p1.read().is_01() || !tmp_78_cast_fu_7442_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_65_cast_fu_7438_p1.read()) - sc_biguint<9>(tmp_78_cast_fu_7442_p1.read()));
}

void batch_align2D::thread_tmp_56_fu_7166_p2() {
    tmp_56_fu_7166_p2 = (tmp_48_fu_6832_p2.read() | ap_const_lv7_1);
}

void batch_align2D::thread_tmp_57_fu_7222_p101() {
    tmp_57_fu_7222_p101 = (!tmp_56_fu_7166_p2.read().is_01() || !tmp_54_cast1_fu_6838_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_56_fu_7166_p2.read()) + sc_biguint<7>(tmp_54_cast1_fu_6838_p1.read()));
}

void batch_align2D::thread_tmp_58_0_t_fu_6856_p2() {
    tmp_58_0_t_fu_6856_p2 = (!tmp_48_fu_6832_p2.read().is_01() || !tmp2_cast_fu_6852_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_48_fu_6832_p2.read()) + sc_biguint<7>(tmp2_cast_fu_6852_p1.read()));
}

void batch_align2D::thread_tmp_58_1_t_fu_7569_p2() {
    tmp_58_1_t_fu_7569_p2 = (!tmp_53_fu_7545_p2.read().is_01() || !tmp6_cast_fu_7565_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_53_fu_7545_p2.read()) + sc_biguint<7>(tmp6_cast_fu_7565_p1.read()));
}

void batch_align2D::thread_tmp_58_2_t_fu_8297_p2() {
    tmp_58_2_t_fu_8297_p2 = (!tmp_72_fu_8273_p2.read().is_01() || !tmp10_cast_fu_8293_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_72_fu_8273_p2.read()) + sc_biguint<7>(tmp10_cast_fu_8293_p1.read()));
}

void batch_align2D::thread_tmp_58_3_t_fu_9025_p2() {
    tmp_58_3_t_fu_9025_p2 = (!tmp_78_fu_9001_p2.read().is_01() || !tmp14_cast_fu_9021_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_78_fu_9001_p2.read()) + sc_biguint<7>(tmp14_cast_fu_9021_p1.read()));
}

void batch_align2D::thread_tmp_58_fu_7432_p2() {
    tmp_58_fu_7432_p2 = (!tmp_93_cast_fu_7162_p1.read().is_01() || !tmp_96_cast_fu_7428_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_93_cast_fu_7162_p1.read()) - sc_biguint<9>(tmp_96_cast_fu_7428_p1.read()));
}

void batch_align2D::thread_tmp_60_1_cast_fu_8151_p1() {
    tmp_60_1_cast_fu_8151_p1 = esl_zext<9,8>(ap_phi_reg_pp4_iter0_ref_patch_with_borde_1070_reg_1811.read());
}

void batch_align2D::thread_tmp_60_2_cast_fu_8879_p1() {
    tmp_60_2_cast_fu_8879_p1 = esl_zext<9,8>(ap_phi_reg_pp5_iter0_ref_patch_with_borde_1262_reg_2043.read());
}

void batch_align2D::thread_tmp_60_3_cast_fu_9607_p1() {
    tmp_60_3_cast_fu_9607_p1 = esl_zext<9,8>(ap_phi_reg_pp6_iter0_ref_patch_with_borde_1365_reg_2275.read());
}

void batch_align2D::thread_tmp_60_cast_fu_7529_p1() {
    tmp_60_cast_fu_7529_p1 = esl_zext<7,4>(tmp_51_fu_7521_p3.read());
}

void batch_align2D::thread_tmp_61_cast_fu_7541_p1() {
    tmp_61_cast_fu_7541_p1 = esl_zext<7,6>(tmp_52_fu_7533_p3.read());
}

void batch_align2D::thread_tmp_64_1_cast_fu_8155_p1() {
    tmp_64_1_cast_fu_8155_p1 = esl_zext<9,8>(ref_patch_with_borde_1071_reg_11449.read());
}

void batch_align2D::thread_tmp_64_2_cast_fu_8883_p1() {
    tmp_64_2_cast_fu_8883_p1 = esl_zext<9,8>(ref_patch_with_borde_1263_reg_12227.read());
}

void batch_align2D::thread_tmp_64_3_cast_fu_9611_p1() {
    tmp_64_3_cast_fu_9611_p1 = esl_zext<9,8>(ref_patch_with_borde_1366_reg_13005.read());
}

void batch_align2D::thread_tmp_64_cast1_fu_7551_p1() {
    tmp_64_cast1_fu_7551_p1 = esl_zext<7,3>(tmp_91_fu_7507_p1.read());
}

void batch_align2D::thread_tmp_64_cast_fu_7555_p1() {
    tmp_64_cast_fu_7555_p1 = esl_zext<5,3>(tmp_91_fu_7507_p1.read());
}

void batch_align2D::thread_tmp_65_1_fu_8158_p2() {
    tmp_65_1_fu_8158_p2 = (!tmp_60_1_cast_fu_8151_p1.read().is_01() || !tmp_64_1_cast_fu_8155_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_60_1_cast_fu_8151_p1.read()) - sc_biguint<9>(tmp_64_1_cast_fu_8155_p1.read()));
}

void batch_align2D::thread_tmp_65_2_fu_8886_p2() {
    tmp_65_2_fu_8886_p2 = (!tmp_60_2_cast_fu_8879_p1.read().is_01() || !tmp_64_2_cast_fu_8883_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_60_2_cast_fu_8879_p1.read()) - sc_biguint<9>(tmp_64_2_cast_fu_8883_p1.read()));
}

void batch_align2D::thread_tmp_65_3_fu_9614_p2() {
    tmp_65_3_fu_9614_p2 = (!tmp_60_3_cast_fu_9607_p1.read().is_01() || !tmp_64_3_cast_fu_9611_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_60_3_cast_fu_9607_p1.read()) - sc_biguint<9>(tmp_64_3_cast_fu_9611_p1.read()));
}

void batch_align2D::thread_tmp_65_cast_fu_7438_p1() {
    tmp_65_cast_fu_7438_p1 = esl_zext<9,8>(ap_phi_reg_pp3_iter0_ref_patch_with_borde_878_reg_1579.read());
}

void batch_align2D::thread_tmp_66_4_fu_8892_p1() {
    tmp_66_4_fu_8892_p1 = esl_sext<32,9>(tmp_65_2_fu_8886_p2.read());
}

void batch_align2D::thread_tmp_66_5_fu_9620_p1() {
    tmp_66_5_fu_9620_p1 = esl_sext<32,9>(tmp_65_3_fu_9614_p2.read());
}

void batch_align2D::thread_tmp_66_s_fu_8164_p1() {
    tmp_66_s_fu_8164_p1 = esl_sext<32,9>(tmp_65_1_fu_8158_p2.read());
}

void batch_align2D::thread_tmp_70_1_cast_fu_7875_p1() {
    tmp_70_1_cast_fu_7875_p1 = esl_zext<9,8>(ref_patch_with_borde_1072_fu_7741_p130.read());
}

void batch_align2D::thread_tmp_70_2_cast_fu_8603_p1() {
    tmp_70_2_cast_fu_8603_p1 = esl_zext<9,8>(ref_patch_with_borde_1264_fu_8469_p130.read());
}

void batch_align2D::thread_tmp_70_3_cast_fu_9331_p1() {
    tmp_70_3_cast_fu_9331_p1 = esl_zext<9,8>(ref_patch_with_borde_1367_fu_9197_p130.read());
}

void batch_align2D::thread_tmp_70_fu_8249_p3() {
    tmp_70_fu_8249_p3 = esl_concat<3,1>(tmp_90_fu_8239_p4.read(), ap_const_lv1_0);
}

void batch_align2D::thread_tmp_71_fu_8261_p3() {
    tmp_71_fu_8261_p3 = esl_concat<3,3>(tmp_90_fu_8239_p4.read(), ap_const_lv3_0);
}

void batch_align2D::thread_tmp_72_cast_fu_8257_p1() {
    tmp_72_cast_fu_8257_p1 = esl_zext<7,4>(tmp_70_fu_8249_p3.read());
}

void batch_align2D::thread_tmp_72_fu_8273_p2() {
    tmp_72_fu_8273_p2 = (!tmp_73_cast_fu_8269_p1.read().is_01() || !tmp_72_cast_fu_8257_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_73_cast_fu_8269_p1.read()) + sc_biguint<7>(tmp_72_cast_fu_8257_p1.read()));
}

void batch_align2D::thread_tmp_73_cast_fu_8269_p1() {
    tmp_73_cast_fu_8269_p1 = esl_zext<7,6>(tmp_71_fu_8261_p3.read());
}

void batch_align2D::thread_tmp_73_fu_7879_p2() {
    tmp_73_fu_7879_p2 = (tmp_53_fu_7545_p2.read() | ap_const_lv7_1);
}

void batch_align2D::thread_tmp_74_1_cast_fu_8141_p1() {
    tmp_74_1_cast_fu_8141_p1 = esl_zext<9,8>(tmp_74_fu_7935_p102.read());
}

void batch_align2D::thread_tmp_74_2_cast_fu_8869_p1() {
    tmp_74_2_cast_fu_8869_p1 = esl_zext<9,8>(tmp_80_fu_8663_p102.read());
}

void batch_align2D::thread_tmp_74_3_cast_fu_9597_p1() {
    tmp_74_3_cast_fu_9597_p1 = esl_zext<9,8>(tmp_83_fu_9391_p102.read());
}

void batch_align2D::thread_tmp_74_fu_7935_p101() {
    tmp_74_fu_7935_p101 = (!tmp_73_fu_7879_p2.read().is_01() || !tmp_64_cast1_fu_7551_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_73_fu_7879_p2.read()) + sc_biguint<7>(tmp_64_cast1_fu_7551_p1.read()));
}

void batch_align2D::thread_tmp_75_1_fu_8145_p2() {
    tmp_75_1_fu_8145_p2 = (!tmp_70_1_cast_fu_7875_p1.read().is_01() || !tmp_74_1_cast_fu_8141_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_70_1_cast_fu_7875_p1.read()) - sc_biguint<9>(tmp_74_1_cast_fu_8141_p1.read()));
}

void batch_align2D::thread_tmp_75_2_fu_8873_p2() {
    tmp_75_2_fu_8873_p2 = (!tmp_70_2_cast_fu_8603_p1.read().is_01() || !tmp_74_2_cast_fu_8869_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_70_2_cast_fu_8603_p1.read()) - sc_biguint<9>(tmp_74_2_cast_fu_8869_p1.read()));
}

void batch_align2D::thread_tmp_75_3_fu_9601_p2() {
    tmp_75_3_fu_9601_p2 = (!tmp_70_3_cast_fu_9331_p1.read().is_01() || !tmp_74_3_cast_fu_9597_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_70_3_cast_fu_9331_p1.read()) - sc_biguint<9>(tmp_74_3_cast_fu_9597_p1.read()));
}

void batch_align2D::thread_tmp_76_4_fu_8897_p1() {
    tmp_76_4_fu_8897_p1 = esl_sext<32,9>(tmp_75_2_reg_12232.read());
}

void batch_align2D::thread_tmp_76_5_fu_9625_p1() {
    tmp_76_5_fu_9625_p1 = esl_sext<32,9>(tmp_75_3_reg_13010.read());
}

void batch_align2D::thread_tmp_76_cast1_fu_8279_p1() {
    tmp_76_cast1_fu_8279_p1 = esl_zext<7,3>(tmp_95_fu_8235_p1.read());
}

void batch_align2D::thread_tmp_76_cast_fu_8283_p1() {
    tmp_76_cast_fu_8283_p1 = esl_zext<5,3>(tmp_95_fu_8235_p1.read());
}

void batch_align2D::thread_tmp_76_fu_8977_p3() {
    tmp_76_fu_8977_p3 = esl_concat<3,1>(tmp_92_fu_8967_p4.read(), ap_const_lv1_0);
}

void batch_align2D::thread_tmp_76_s_fu_8169_p1() {
    tmp_76_s_fu_8169_p1 = esl_sext<32,9>(tmp_75_1_reg_11454.read());
}

void batch_align2D::thread_tmp_77_fu_8989_p3() {
    tmp_77_fu_8989_p3 = esl_concat<3,3>(tmp_92_fu_8967_p4.read(), ap_const_lv3_0);
}

void batch_align2D::thread_tmp_78_cast_fu_7442_p1() {
    tmp_78_cast_fu_7442_p1 = esl_zext<9,8>(ref_patch_with_borde_879_reg_10677.read());
}

void batch_align2D::thread_tmp_78_fu_9001_p2() {
    tmp_78_fu_9001_p2 = (!tmp_87_cast_fu_8997_p1.read().is_01() || !tmp_86_cast_fu_8985_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_87_cast_fu_8997_p1.read()) + sc_biguint<7>(tmp_86_cast_fu_8985_p1.read()));
}

void batch_align2D::thread_tmp_79_fu_8607_p2() {
    tmp_79_fu_8607_p2 = (tmp_72_fu_8273_p2.read() | ap_const_lv7_1);
}

void batch_align2D::thread_tmp_80_fu_8663_p101() {
    tmp_80_fu_8663_p101 = (!tmp_79_fu_8607_p2.read().is_01() || !tmp_76_cast1_fu_8279_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_79_fu_8607_p2.read()) + sc_biguint<7>(tmp_76_cast1_fu_8279_p1.read()));
}

void batch_align2D::thread_tmp_82_fu_9335_p2() {
    tmp_82_fu_9335_p2 = (tmp_78_fu_9001_p2.read() | ap_const_lv7_1);
}

void batch_align2D::thread_tmp_83_fu_9391_p101() {
    tmp_83_fu_9391_p101 = (!tmp_82_fu_9335_p2.read().is_01() || !tmp_90_cast1_fu_9007_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_82_fu_9335_p2.read()) + sc_biguint<7>(tmp_90_cast1_fu_9007_p1.read()));
}

void batch_align2D::thread_tmp_84_cast_fu_4217_p1() {
    tmp_84_cast_fu_4217_p1 = esl_zext<63,62>(cur_px_estimate_ptr5_fu_4203_p4.read());
}

void batch_align2D::thread_tmp_84_fu_4213_p1() {
    tmp_84_fu_4213_p1 = esl_zext<64,62>(cur_px_estimate_ptr5_fu_4203_p4.read());
}

void batch_align2D::thread_tmp_85_fu_6730_p1() {
    tmp_85_fu_6730_p1 = indvar3_reg_1497.read().range(1-1, 0);
}

void batch_align2D::thread_tmp_86_cast_fu_8985_p1() {
    tmp_86_cast_fu_8985_p1 = esl_zext<7,4>(tmp_76_fu_8977_p3.read());
}

void batch_align2D::thread_tmp_86_fu_6798_p4() {
    tmp_86_fu_6798_p4 = ap_phi_mux_i_0_i_phi_fu_1572_p4.read().range(5, 3);
}

void batch_align2D::thread_tmp_87_cast_fu_8997_p1() {
    tmp_87_cast_fu_8997_p1 = esl_zext<7,6>(tmp_77_fu_8989_p3.read());
}

void batch_align2D::thread_tmp_87_fu_6794_p1() {
    tmp_87_fu_6794_p1 = ap_phi_mux_i_0_i_phi_fu_1572_p4.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_88_fu_7511_p4() {
    tmp_88_fu_7511_p4 = ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read().range(5, 3);
}

void batch_align2D::thread_tmp_89_fu_4294_p2() {
    tmp_89_fu_4294_p2 = (!next_urem_fu_4288_p2.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<1>(): (sc_biguint<9>(next_urem_fu_4288_p2.read()) < sc_biguint<9>(ap_const_lv9_64));
}

void batch_align2D::thread_tmp_90_cast1_fu_9007_p1() {
    tmp_90_cast1_fu_9007_p1 = esl_zext<7,3>(tmp_96_fu_8963_p1.read());
}

void batch_align2D::thread_tmp_90_cast_fu_9011_p1() {
    tmp_90_cast_fu_9011_p1 = esl_zext<5,3>(tmp_96_fu_8963_p1.read());
}

void batch_align2D::thread_tmp_90_fu_8239_p4() {
    tmp_90_fu_8239_p4 = ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read().range(5, 3);
}

void batch_align2D::thread_tmp_91_fu_7507_p1() {
    tmp_91_fu_7507_p1 = ap_phi_mux_i_0_i_1_phi_fu_1804_p4.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_92_fu_8967_p4() {
    tmp_92_fu_8967_p4 = ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read().range(5, 3);
}

void batch_align2D::thread_tmp_93_cast_fu_7162_p1() {
    tmp_93_cast_fu_7162_p1 = esl_zext<9,8>(ref_patch_with_borde_880_fu_7028_p130.read());
}

void batch_align2D::thread_tmp_93_fu_7451_p1() {
    tmp_93_fu_7451_p1 = esl_sext<32,9>(tmp_54_fu_7445_p2.read());
}

void batch_align2D::thread_tmp_94_fu_7456_p1() {
    tmp_94_fu_7456_p1 = esl_sext<32,9>(tmp_58_reg_10682.read());
}

void batch_align2D::thread_tmp_95_fu_8235_p1() {
    tmp_95_fu_8235_p1 = ap_phi_mux_i_0_i_2_phi_fu_2036_p4.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_96_cast_fu_7428_p1() {
    tmp_96_cast_fu_7428_p1 = esl_zext<9,8>(tmp_57_fu_7222_p102.read());
}

void batch_align2D::thread_tmp_96_fu_8963_p1() {
    tmp_96_fu_8963_p1 = ap_phi_mux_i_0_i_3_phi_fu_2268_p4.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_97_fu_9745_p1() {
    tmp_97_fu_9745_p1 = indvar8_reg_2447.read().range(3-1, 0);
}

void batch_align2D::thread_tmp_fu_4284_p1() {
    tmp_fu_4284_p1 = phi_urem_reg_1486.read().range(7-1, 0);
}

void batch_align2D::thread_transfer_pyr_read_read_fu_1284_p2() {
    transfer_pyr_read_read_fu_1284_p2 = transfer_pyr.read();
}

}

