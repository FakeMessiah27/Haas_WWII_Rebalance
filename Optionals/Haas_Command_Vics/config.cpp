class CfgPatches {
    class Haas_Command_Vics {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        requiredVersion = 0.1;
        requiredAddons[] = {"FOW_ACRE2_Compat","IFA3_ACRE2_Compat"};
        units[] = { "LIB_JS2_43_Com",
                    "LIB_M3A3_Stuart_Com",
                    "LIB_M4A2_SOV_Com",
                    "LIB_M4A3_75_Com",
                    "LIB_M4A3_75_Tubes_Com",
                    "LIB_M4A3_76_Com",
                    "LIB_M4A3_76_HVSS_Com",
                    "LIB_M4A4_FIREFLY_Com",
                    "LIB_M5A1_Stuart_Com",
                    "LIB_M8_Greyhound_Com",
                    "LIB_PzBefWgIV",
                    "LIB_PzBefWgV",
                    "LIB_PzBefWgVI_B",
                    "LIB_PzBefWgVI_E",
                    "LIB_SdKfz234_1_Com",
                    "LIB_SdKfz234_2_Com",
                    "LIB_SdKfz234_3_Com",
                    "LIB_SdKfz234_4_Com",
                    "LIB_SdKfz251_Com",
                    "LIB_T34_76_Com",
                    "LIB_T34_76_NRad",
                    "LIB_T34_85_Com",
                    "fow_v_cromwell_uk_com",
                    "fow_v_m4a2_usa_com",
                    "fow_v_m4a2_usmc_com",
                    "fow_v_m5a1_usa_com",
                    "fow_v_m5a1_usmc_com",
                    "fow_v_panther_ger_heer_com",
                    "fow_v_sdkfz_234_1_com",
                    "fow_v_sdkfz_251_camo_ger_heer_com"
        };
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    // #include "FOW_Boats.hpp"

    #include "FOW_Tanks.hpp"

    #include "FOW_Wheeled.hpp"

    #include "FOW_WheeledTracked.hpp"

    // #include "LIB_Boats.hpp"

    // #include "LIB_Planes.hpp"

    #include "LIB_Tanks.hpp"

    #include "LIB_Wheeled.hpp"

    #include "LIB_WheeledTracked_APC_base.hpp"

};
