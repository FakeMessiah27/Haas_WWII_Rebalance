﻿
#define MOA_TO_RAD(d) ((d) * 0.00029088)
//dispersion = MOA_TO_RAD(4);

#define RPM_TO_TIME(rpm) (60 / (rpm))
//reloadTime = RPM_TO_TIME(650);

#define WEAPONSARRAY \
"fow_w_bren", \
"fow_w_k98", \
"fow_w_leeenfield_no4mk1", \
"fow_w_leeenfield_no4mk1_redwood", \
"fow_w_m1a1_bazooka", \
"fow_w_m1a1_thompson", \
"fow_w_m1_carbine", \
"fow_w_m1_garand", \
"fow_w_m2_carbine_2PzD", \
"fow_w_m3", \
"fow_w_m55_reising", \
"fow_w_m1911", \
"fow_w_m1918a2", \
"fow_w_m1918a2_bak", \
"fow_w_m1919a4", \
"fow_w_m1919a6", \
"fow_w_mg42", \
"fow_w_mp40", \
"fow_w_piat", \
"fow_w_sten_mk2", \
"fow_w_sten_mk5", \
"fow_w_stg44", \
"fow_w_type10", \
"fow_w_type14", \
"fow_w_type92", \
"fow_w_type99", \
"fow_w_type99_lmg", \
"fow_w_type99_sniper", \
"fow_w_type100", \
"fow_w_vickers_mounted", \
"fow_w_webley", \
"LEN_FG42", \
"LEN_M3a1", \
"LEN_M12", \
"LEN_MP44", \
"LEN_P35", \
"LEN_P640b", \
"LEN_PPK", \
"LEN_PPS43", \
"LEN_SMLE_No4Mk1", \
"LEN_SMLE_No4Mk1T", \
"LEN_StenMk2", \
"LEN_StenMk2S", \
"LEN_StenMk5", \
"LEN_Welrod", \
"LIB_AVT_40_2PzD", \
"LIB_BM37_Barrel", \
"LIB_BM37_Tripod", \
"LIB_Colt_M1911", \
"LIB_DELISLE", \
"LIB_DP28", \
"LIB_DT", \
"LIB_DT_OPTIC", \
"LIB_G43", \
"LIB_G3340", \
"LIB_GrWr34_Barrel", \
"LIB_GrWr34_Tripod", \
"LIB_K98", \
"LIB_K98ZF39", \
"LIB_Laffete_Tripod", \
"LIB_M1A1_Bazooka", \
"LIB_M1A1_Carbine", \
"LIB_M1A1_Thompson", \
"LIB_M1_Carbine", \
"LIB_M1_Garand", \
"LIB_M2_60_Barrel", \
"LIB_M2_60_Tripod", \
"LIB_M2_Carbine_2PzD", \
"LIB_M2_Flamethrower", \
"LIB_M2_Tripod", \
"LIB_M38", \
"LIB_M44", \
"LIB_M1895", \
"LIB_M1903A3_Springfield", \
"LIB_M1903A4_Springfield", \
"LIB_M1918A2_BAR", \
"LIB_M1919A4", \
"LIB_M1919A4_tripod", \
"LIB_M1919A6", \
"LIB_M1928A1_Thompson", \
"LIB_M1928_Thompson", \
"LIB_M1928_Thompson_d", \
"LIB_M9130", \
"LIB_M9130PU", \
"LIB_MG34", \
"LIB_MG34_PT", \
"LIB_MG34_Tripod", \
"LIB_MG42", \
"LIB_MG42_Tripod", \
"LIB_MP40", \
"LIB_MP44", \
"LIB_P08", \
"LIB_P38", \
"LIB_PPSh41_d", \
"LIB_PPSh41_m", \
"LIB_PTRD", \
"LIB_PzFaust_30m", \
"LIB_RPzB", \
"LIB_RPzB_w", \
"LIB_SVT_40", \
"LIB_TT33", \
"fow_v_fall_bandoleer", \
"fow_v_heer_g43", \
"fow_v_heer_k98", \
"fow_v_heer_k98_ass", \
"fow_v_heer_k98_bayo", \
"fow_v_heer_k98_light", \
"fow_v_heer_mg", \
"fow_v_heer_mp40", \
"fow_v_heer_mp40_nco", \
"fow_v_heer_mp44", \
"fow_v_heer_p38", \
"fow_v_ija_bayonet", \
"fow_v_ija_grenadier", \
"fow_v_ija_medic", \
"fow_v_ija_mg", \
"fow_v_ija_mortar", \
"fow_v_ija_nco", \
"fow_v_ija_officer", \
"fow_v_ija_rifle", \
"fow_v_uk_base", \
"fow_v_uk_bren", \
"fow_v_uk_officer", \
"fow_v_uk_para_base", \
"fow_v_uk_para_bren", \
"fow_v_uk_para_sten", \
"fow_v_uk_sten", \
"fow_v_usmc_45", \
"fow_v_usmc_bar", \
"fow_v_usmc_carbine", \
"fow_v_usmc_garand", \
"fow_v_usmc_thompson", \
"fow_v_usmc_thompson_nco", \
"fow_v_us_45", \
"fow_v_us_asst_mg", \
"fow_v_us_bar", \
"fow_v_us_carbine", \
"fow_v_us_carbine_eng", \
"fow_v_us_carbine_nco", \
"fow_v_us_garand", \
"fow_v_us_grenade", \
"fow_v_us_medic", \
"fow_v_us_thompson", \
"fow_v_us_thompson_nco", \
"V_LIB_DAK_FieldOfficer", \
"V_LIB_DAK_OfficerBelt", \
"V_LIB_DAK_OfficerVest", \
"V_LIB_DAK_PioneerVest", \
"V_LIB_DAK_PrivateBelt", \
"V_LIB_DAK_SniperBelt", \
"V_LIB_DAK_VestG43", \
"V_LIB_DAK_VestKar98", \
"V_LIB_DAK_VestMG", \
"V_LIB_DAK_VestMP40", \
"V_LIB_DAK_VestSTG", \
"V_LIB_DAK_VestUnterofficer", \
"V_LIB_GER_FieldOfficer", \
"V_LIB_GER_OfficerBelt", \
"V_LIB_GER_OfficerVest", \
"V_LIB_GER_PioneerVest", \
"V_LIB_GER_PrivateBelt", \
"V_LIB_GER_SniperBelt", \
"V_LIB_GER_TankPrivateBelt", \
"V_LIB_GER_VestG43", \
"V_LIB_GER_VestKar98", \
"V_LIB_GER_VestMG", \
"V_LIB_GER_VestMP40", \
"V_LIB_GER_VestSTG", \
"V_LIB_GER_VestUnterofficer", \
"V_LIB_SOV_IShBrVestMG", \
"V_LIB_SOV_IShBrVestPPShDisc", \
"V_LIB_SOV_IShBrVestPPShMag", \
"V_LIB_SOV_RAZV_MGBelt", \
"V_LIB_SOV_RAZV_OfficerVest", \
"V_LIB_SOV_RAZV_PPShBelt", \
"V_LIB_SOV_RAZV_SVTBelt", \
"V_LIB_SOV_RA_Belt", \
"V_LIB_SOV_RA_MGBelt", \
"V_LIB_SOV_RA_MosinBelt", \
"V_LIB_SOV_RA_OfficerVest", \
"V_LIB_SOV_RA_PPShBelt", \
"V_LIB_SOV_RA_SniperVest", \
"V_LIB_SOV_RA_SVTBelt", \
"V_LIB_SOV_RA_TankOfficerSet", \
"V_LIB_US_AB_Vest_Bar", \
"V_LIB_US_AB_Vest_Carbine", \
"V_LIB_US_AB_Vest_Carbine_nco", \
"V_LIB_US_AB_Vest_Garand", \
"V_LIB_US_AB_Vest_Grenadier", \
"V_LIB_US_AB_Vest_Thompson", \
"V_LIB_US_AB_Vest_Thompson_nco", \
"V_LIB_US_Vest_45", \
"V_LIB_US_Vest_Asst_MG", \
"V_LIB_US_Vest_Bar", \
"V_LIB_US_Vest_Carbine", \
"V_LIB_US_Vest_Carbine_eng", \
"V_LIB_US_Vest_Carbine_nco", \
"V_LIB_US_Vest_Garand", \
"V_LIB_US_Vest_Grenadier", \
"V_LIB_US_Vest_Medic", \
"V_LIB_US_Vest_Medic2", \
"V_LIB_US_Vest_Thompson", \
"V_LIB_US_Vest_Thompson_nco", \
"V_LIB_WP_G43Vest", \
"V_LIB_WP_Kar98Vest", \
"V_LIB_WP_MGVest", \
"V_LIB_WP_MP40Vest", \
"V_LIB_WP_OfficerVest", \
"V_LIB_WP_SniperBela", \
"V_LIB_WP_STGVest"
