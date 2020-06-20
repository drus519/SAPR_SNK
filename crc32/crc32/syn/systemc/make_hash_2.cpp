#include "make_hash.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void make_hash::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_0_0_reg_147 = add_ln32_reg_17281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_0_reg_147 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        p_Val2_4_0_reg_135 = agg_result_V_0_3_fu_15728_p33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_Val2_4_0_reg_135 = ap_const_lv32_FFFFFFFF;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(icmp_ln32_3_reg_16793.read(), ap_const_lv1_0))) {
        p_Val2_4_lcssa_reg_159 = agg_result_V_0_2_fu_12090_p33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(icmp_ln32_2_fu_8510_p2.read(), ap_const_lv1_0))) {
        p_Val2_4_lcssa_reg_159 = agg_result_V_0_1_fu_8436_p33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(icmp_ln32_1_fu_4867_p2.read(), ap_const_lv1_0))) {
        p_Val2_4_lcssa_reg_159 = agg_result_V_fu_4793_p33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln32_fu_685_p2.read(), ap_const_lv1_0))) {
        p_Val2_4_lcssa_reg_159 = p_Val2_4_0_reg_135.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_3_reg_16793.read()))) {
        add_ln32_reg_17281 = add_ln32_fu_12174_p2.read();
        xor_ln44_81_reg_17273 = xor_ln44_81_fu_12168_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_2_fu_8510_p2.read()))) {
        icmp_ln32_3_reg_16793 = icmp_ln32_3_fu_8543_p2.read();
        xor_ln44_54_reg_16779 = xor_ln44_54_fu_8525_p2.read();
        xor_ln45_56_reg_16787 = xor_ln45_56_fu_8531_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln32_fu_685_p2.read(), ap_const_lv1_1))) {
        lshr_ln_reg_15807 = i_0_0_reg_147.read().range(6, 2);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xor_ln40_71_reg_16797 = xor_ln40_71_fu_8657_p2.read();
        xor_ln41_75_reg_16808 = xor_ln41_75_fu_8782_p2.read();
        xor_ln44_80_reg_16833 = xor_ln44_80_fu_9184_p2.read();
        xor_ln45_83_reg_16848 = xor_ln45_83_fu_9309_p2.read();
        xor_ln46_68_reg_16862 = xor_ln46_68_fu_9430_p2.read();
        xor_ln47_68_reg_16876 = xor_ln47_68_fu_9546_p2.read();
        xor_ln48_59_reg_16891 = xor_ln48_59_fu_9659_p2.read();
        xor_ln49_56_reg_16910 = xor_ln49_56_fu_9765_p2.read();
        xor_ln50_56_reg_16926 = xor_ln50_56_fu_9869_p2.read();
        xor_ln51_68_reg_16945 = xor_ln51_68_fu_9993_p2.read();
        xor_ln52_56_reg_16962 = xor_ln52_56_fu_10105_p2.read();
        xor_ln53_68_reg_16977 = xor_ln53_68_fu_10226_p2.read();
        xor_ln54_62_reg_16994 = xor_ln54_62_fu_10345_p2.read();
        xor_ln55_62_reg_17007 = xor_ln55_62_fu_10458_p2.read();
        xor_ln56_62_reg_17020 = xor_ln56_62_fu_10566_p2.read();
        xor_ln57_59_reg_17031 = xor_ln57_59_fu_10671_p2.read();
        xor_ln58_62_reg_17048 = xor_ln58_62_fu_10784_p2.read();
        xor_ln59_59_reg_17064 = xor_ln59_59_fu_10894_p2.read();
        xor_ln60_53_reg_17077 = xor_ln60_53_fu_10984_p2.read();
        xor_ln61_50_reg_17091 = xor_ln61_50_fu_11072_p2.read();
        xor_ln62_53_reg_17107 = xor_ln62_53_fu_11176_p2.read();
        xor_ln63_44_reg_17124 = xor_ln63_44_fu_11267_p2.read();
        xor_ln64_50_reg_17141 = xor_ln64_50_fu_11370_p2.read();
        xor_ln65_53_reg_17157 = xor_ln65_53_fu_11463_p2.read();
        xor_ln66_59_reg_17175 = xor_ln66_59_fu_11582_p2.read();
        xor_ln67_56_reg_17195 = xor_ln67_56_fu_11695_p2.read();
        xor_ln68_56_reg_17209 = xor_ln68_56_fu_11797_p2.read();
        xor_ln69_50_reg_17221 = xor_ln69_50_fu_11891_p2.read();
        xor_ln70_56_reg_17238 = xor_ln70_56_fu_11996_p2.read();
        xor_ln816_36_reg_16802 = xor_ln816_36_fu_8663_p2.read();
        xor_ln816_37_reg_16817 = xor_ln816_37_fu_8926_p2.read();
        xor_ln816_38_reg_16824 = xor_ln816_38_fu_9051_p2.read();
        xor_ln816_39_reg_16838 = xor_ln816_39_fu_9190_p2.read();
        xor_ln816_40_reg_16897 = xor_ln816_40_fu_9665_p2.read();
        xor_ln816_41_reg_16933 = xor_ln816_41_fu_9875_p2.read();
        xor_ln816_42_reg_16951 = xor_ln816_42_fu_9999_p2.read();
        xor_ln816_43_reg_16969 = xor_ln816_43_fu_10111_p2.read();
        xor_ln816_44_reg_16985 = xor_ln816_44_fu_10232_p2.read();
        xor_ln816_45_reg_17038 = xor_ln816_45_fu_10677_p2.read();
        xor_ln816_46_reg_17054 = xor_ln816_46_fu_10790_p2.read();
        xor_ln816_47_reg_17098 = xor_ln816_47_fu_11078_p2.read();
        xor_ln816_48_reg_17113 = xor_ln816_48_fu_11182_p2.read();
        xor_ln816_49_reg_17132 = xor_ln816_49_fu_11273_p2.read();
        xor_ln816_50_reg_17163 = xor_ln816_50_fu_11469_p2.read();
        xor_ln816_51_reg_17181 = xor_ln816_51_fu_11588_p2.read();
        xor_ln816_52_reg_17227 = xor_ln816_52_fu_11897_p2.read();
        xor_ln816_53_reg_17247 = xor_ln816_53_fu_12084_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        xor_ln41_25_reg_15825 = xor_ln41_25_fu_1113_p2.read();
        xor_ln44_26_reg_15850 = xor_ln44_26_fu_1629_p2.read();
        xor_ln45_27_reg_15865 = xor_ln45_27_fu_1789_p2.read();
        xor_ln46_22_reg_15879 = xor_ln46_22_fu_1929_p2.read();
        xor_ln47_22_reg_15893 = xor_ln47_22_fu_2063_p2.read();
        xor_ln48_19_reg_15908 = xor_ln48_19_fu_2183_p2.read();
        xor_ln49_18_reg_15927 = xor_ln49_18_fu_2297_p2.read();
        xor_ln50_18_reg_15943 = xor_ln50_18_fu_2411_p2.read();
        xor_ln51_22_reg_15962 = xor_ln51_22_fu_2543_p2.read();
        xor_ln52_18_reg_15979 = xor_ln52_18_fu_2657_p2.read();
        xor_ln53_22_reg_15994 = xor_ln53_22_fu_2789_p2.read();
        xor_ln54_20_reg_16011 = xor_ln54_20_fu_2915_p2.read();
        xor_ln55_20_reg_16024 = xor_ln55_20_fu_3035_p2.read();
        xor_ln56_20_reg_16037 = xor_ln56_20_fu_3149_p2.read();
        xor_ln57_19_reg_16048 = xor_ln57_19_fu_3263_p2.read();
        xor_ln58_20_reg_16065 = xor_ln58_20_fu_3389_p2.read();
        xor_ln59_19_reg_16081 = xor_ln59_19_fu_3509_p2.read();
        xor_ln60_17_reg_16094 = xor_ln60_17_fu_3605_p2.read();
        xor_ln61_16_reg_16108 = xor_ln61_16_fu_3701_p2.read();
        xor_ln62_17_reg_16124 = xor_ln62_17_fu_3815_p2.read();
        xor_ln63_14_reg_16141 = xor_ln63_14_fu_3911_p2.read();
        xor_ln64_16_reg_16158 = xor_ln64_16_fu_4019_p2.read();
        xor_ln65_18_reg_16174 = xor_ln65_18_fu_4121_p2.read();
        xor_ln66_19_reg_16192 = xor_ln66_19_fu_4247_p2.read();
        xor_ln67_18_reg_16212 = xor_ln67_18_fu_4367_p2.read();
        xor_ln68_18_reg_16226 = xor_ln68_18_fu_4475_p2.read();
        xor_ln69_16_reg_16238 = xor_ln69_16_fu_4577_p2.read();
        xor_ln70_18_reg_16254 = xor_ln70_18_fu_4691_p2.read();
        xor_ln816_10_reg_16071 = xor_ln816_10_fu_3395_p2.read();
        xor_ln816_11_reg_16115 = xor_ln816_11_fu_3707_p2.read();
        xor_ln816_12_reg_16130 = xor_ln816_12_fu_3821_p2.read();
        xor_ln816_13_reg_16149 = xor_ln816_13_fu_3917_p2.read();
        xor_ln816_14_reg_16180 = xor_ln816_14_fu_4127_p2.read();
        xor_ln816_15_reg_16198 = xor_ln816_15_fu_4253_p2.read();
        xor_ln816_16_reg_16243 = xor_ln816_16_fu_4583_p2.read();
        xor_ln816_17_reg_16263 = xor_ln816_17_fu_4787_p2.read();
        xor_ln816_1_reg_15834 = xor_ln816_1_fu_1301_p2.read();
        xor_ln816_2_reg_15841 = xor_ln816_2_fu_1463_p2.read();
        xor_ln816_3_reg_15855 = xor_ln816_3_fu_1635_p2.read();
        xor_ln816_4_reg_15914 = xor_ln816_4_fu_2189_p2.read();
        xor_ln816_5_reg_15950 = xor_ln816_5_fu_2417_p2.read();
        xor_ln816_6_reg_15968 = xor_ln816_6_fu_2549_p2.read();
        xor_ln816_7_reg_15986 = xor_ln816_7_fu_2663_p2.read();
        xor_ln816_8_reg_16002 = xor_ln816_8_fu_2795_p2.read();
        xor_ln816_9_reg_16055 = xor_ln816_9_fu_3269_p2.read();
        xor_ln816_reg_15819 = xor_ln816_fu_933_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        xor_ln41_50_reg_16312 = xor_ln41_50_fu_5128_p2.read();
        xor_ln44_53_reg_16337 = xor_ln44_53_fu_5530_p2.read();
        xor_ln45_55_reg_16352 = xor_ln45_55_fu_5655_p2.read();
        xor_ln46_45_reg_16366 = xor_ln46_45_fu_5776_p2.read();
        xor_ln47_45_reg_16380 = xor_ln47_45_fu_5892_p2.read();
        xor_ln48_39_reg_16395 = xor_ln48_39_fu_6005_p2.read();
        xor_ln49_37_reg_16414 = xor_ln49_37_fu_6111_p2.read();
        xor_ln50_37_reg_16430 = xor_ln50_37_fu_6215_p2.read();
        xor_ln51_45_reg_16449 = xor_ln51_45_fu_6339_p2.read();
        xor_ln52_37_reg_16466 = xor_ln52_37_fu_6451_p2.read();
        xor_ln53_45_reg_16481 = xor_ln53_45_fu_6572_p2.read();
        xor_ln54_41_reg_16498 = xor_ln54_41_fu_6691_p2.read();
        xor_ln55_41_reg_16511 = xor_ln55_41_fu_6804_p2.read();
        xor_ln56_41_reg_16524 = xor_ln56_41_fu_6912_p2.read();
        xor_ln57_39_reg_16535 = xor_ln57_39_fu_7017_p2.read();
        xor_ln58_41_reg_16552 = xor_ln58_41_fu_7130_p2.read();
        xor_ln59_39_reg_16568 = xor_ln59_39_fu_7240_p2.read();
        xor_ln60_35_reg_16581 = xor_ln60_35_fu_7330_p2.read();
        xor_ln61_33_reg_16595 = xor_ln61_33_fu_7418_p2.read();
        xor_ln62_35_reg_16611 = xor_ln62_35_fu_7522_p2.read();
        xor_ln63_29_reg_16628 = xor_ln63_29_fu_7613_p2.read();
        xor_ln64_33_reg_16645 = xor_ln64_33_fu_7716_p2.read();
        xor_ln65_35_reg_16661 = xor_ln65_35_fu_7809_p2.read();
        xor_ln66_39_reg_16679 = xor_ln66_39_fu_7928_p2.read();
        xor_ln67_37_reg_16699 = xor_ln67_37_fu_8041_p2.read();
        xor_ln68_37_reg_16713 = xor_ln68_37_fu_8143_p2.read();
        xor_ln69_33_reg_16725 = xor_ln69_33_fu_8237_p2.read();
        xor_ln70_37_reg_16741 = xor_ln70_37_fu_8342_p2.read();
        xor_ln816_18_reg_16306 = xor_ln816_18_fu_5009_p2.read();
        xor_ln816_19_reg_16321 = xor_ln816_19_fu_5272_p2.read();
        xor_ln816_20_reg_16328 = xor_ln816_20_fu_5397_p2.read();
        xor_ln816_21_reg_16342 = xor_ln816_21_fu_5536_p2.read();
        xor_ln816_22_reg_16401 = xor_ln816_22_fu_6011_p2.read();
        xor_ln816_23_reg_16437 = xor_ln816_23_fu_6221_p2.read();
        xor_ln816_24_reg_16455 = xor_ln816_24_fu_6345_p2.read();
        xor_ln816_25_reg_16473 = xor_ln816_25_fu_6457_p2.read();
        xor_ln816_26_reg_16489 = xor_ln816_26_fu_6578_p2.read();
        xor_ln816_27_reg_16542 = xor_ln816_27_fu_7023_p2.read();
        xor_ln816_28_reg_16558 = xor_ln816_28_fu_7136_p2.read();
        xor_ln816_29_reg_16602 = xor_ln816_29_fu_7424_p2.read();
        xor_ln816_30_reg_16617 = xor_ln816_30_fu_7528_p2.read();
        xor_ln816_31_reg_16636 = xor_ln816_31_fu_7619_p2.read();
        xor_ln816_32_reg_16667 = xor_ln816_32_fu_7815_p2.read();
        xor_ln816_33_reg_16685 = xor_ln816_33_fu_7934_p2.read();
        xor_ln816_34_reg_16730 = xor_ln816_34_fu_8243_p2.read();
        xor_ln816_35_reg_16750 = xor_ln816_35_fu_8430_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln32_1_fu_4867_p2.read()))) {
        xor_ln44_27_reg_16292 = xor_ln44_27_fu_4882_p2.read();
        xor_ln45_28_reg_16300 = xor_ln45_28_fu_4888_p2.read();
    }
}

void make_hash::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln32_fu_685_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln32_1_fu_4867_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln32_2_fu_8510_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(icmp_ln32_3_reg_16793.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<7>) ("XXXXXXX");
            break;
    }
}

}

