#include <macro.h>
/*
        File: fn_weaponShopCfg.sqf
        Author: Bryan "Tonic" Boardwine
       
        Description:
        Master configuration file for the weapon shops.
       
        Return:
        String: Close the menu
        Array:
        [Shop Name,
        [ //Array of items to add to the store
                [classname,Custom Name (set nil for default),price]
        ]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.
 
switch(_shop) do
{
       
	   
	   
	   
        case "med_supplies":
        {
                switch (true) do
                {
                        case (playerSide != independent): {"You are not an EMS"};
                        default {
                                ["EMS Supplies Shop",
                                        [
											["FirstAidKit",nil,250],
											["Medikit",nil,500],
											["ToolKit",nil,500]
                                        ]
                                ];
                        };
                };
        };
		case "med_basic":
        {
                switch (true) do
                {
                        case (playerSide != independent): {"You are not an EMS"};
                        default {
                                ["EMS Basic Shop",
                                        [
											["A3L_Extinguisher",nil,350],
											["tf_anprc152",nil,100],
                                            ["tf_rt1523g",nil,300],
											["ItemGPS",nil,250],
											["Binocular",nil,1250],
											["ToolKit",nil,500],
											["Chemlight_red",nil,200],
											["NVGoggles",nil,5000]
                                        ]
                                ];
                        };
                };
        };
	
		
        case "cop_basic":
        {
                switch(true) do
                {
                        case (playerSide != west): {"You are not a cop!"};
                        default
                        {
                                ["Junior Deputy Shop",
                                        [
												["FirstAidKit",nil,250],
												["Medikit",nil,500],
												["ToolKit",nil,500],
												
                                                ["A3L_Glock17",nil,7600],
												["A3L_Glock17mag",nil,500],
												
                                                ["Taser_26","Taser",2000],
												
                                                ["26_cartridge",nil,50],
                                                ["Chemlight_red",nil,100],
												
                                                ["Binocular",nil,150],
                                                ["ItemGPS",nil,100],
                                                
                                                ["NVGoggles",nil,2000],
                                                ["tf_anprc152",nil,100]
                                        ]
                                ];
                        };
                };
        };
        case "cop_patrol":
        {
                switch(true) do
                {
                        case (playerSide != west): {"You are not a deputy!"};
                        case (__GETC__(life_coplevel) < 2): {"You are not at a deputy rank!"};
                        default
                        {
                                ["Deputy Shop",
                                        [
                                                ["A3L_MP5",nil,8500],
												["A3L_MP5mag",nil,500],	
												["A3L_MP5Silencer",nil,3000],
												
                                                ["A3L_Glock17",nil,7600],
												["A3L_Glock17mag",nil,500],
                                                ["Taser_26","Taser",2000],
											
												
                                                ["Binocular",nil,150],
                                                ["ItemGPS",nil,100],
                                                ["ToolKit",nil,250],
                                                ["NVGoggles",nil,2000],
                                                ["tf_anprc152",nil,100],
                                                ["tf_rt1523g",nil,300]
                                        ]
                                ];
                        };
                };
        };
        case "cop_sergeant":
        {
                switch(true) do
                {
                        case (playerSide != west): {"You are not a cop!"};
                        case (__GETC__(life_coplevel) < 3): {"You are not at a sergeant rank!"};
                        default
                        {
                                ["Sergeant Shop",
                                        [
                                                ["A3L_M4A3",nil,8000],
                                                ["A3L_M4mag",nil,650],
                                                ["A3L_M4Flashlight",nil,500],
												["A3L_CCO",nil,500],
												["A3L_RedDot",nil,500],
												
                                                ["Taser_26","Taser",2000],
                                                ["26_cartridge",nil,50],
                                                ["Chemlight_red",nil,100],

												
                                                ["Binocular",nil,150],
                                                ["ItemGPS",nil,100],
                                                ["ToolKit",nil,250],
                                                ["NVGoggles",nil,2000],
                                                ["tf_anprc152",nil,100],
                                                ["tf_rt1523g",nil,300]
                                        ]
                                ];
                        };
                };
        };
		
        case "cop_swat":
        {
                switch(true) do
                {
                        case (playerSide != west): {"You are not a cop!"};
                        case (__GETC__(life_coplevel) < 4): {"You are not at a sergeant rank!"};
                        default
                        {
                                ["SERT Shop",
                                        [
                                                ["A3L_M4A3",nil,8000],
                                                ["A3L_M4mag",nil,650],
                                                ["A3L_M4Flashlight",nil,500],
												["A3L_CCO",nil,500],
												["A3L_RedDot",nil,500]
                                        ]
                                ];
                        };
                };
        };
      
        case "rebel":
        {
                switch(true) do
                {
                        case (playerSide != civilian): {"You are not a civilian!"};
                        case (!license_civ_rebel): {"You don't have a Rebel training license!"};
                        default
                        {
                                ["Mohammed's Jihadi Shop",
                                        [
												["RH_m9c",nil,7000],
												["RH_15Rnd_9x19_M9",nil,250],
												["RH_vp70",nil,15000],
												["RH_18Rnd_9x19_VP",nil,250],
												["RH_g18",nil,16000],
												["RH_33Rnd_9x19_g18",nil,250],
												["RH_tt33",nil,15000],
												["RH_8Rnd_762_tt33",nil,250],
												["CUP_hgun_Colt1911",nil,15000],
												["CUP_7Rnd_45ACP_1911",nil,250],
												["RH_m1911",nil,15000],
												["RH_kimber",nil,19000],
												["RH_kimber_nw",nil,19000],
												["RH_7Rnd_45cal_m1911",nil,250],
												["RH_tec9",nil,35000],
												["RH_32Rnd_9x19_tec",nil,250],
												["RH_muzi",nil,35000],
												["RH_30Rnd_9x19_UZI",nil,250],
												["CUP_hgun_SA61",nil,35000],
												["CUP_20Rnd_B_765x17_Ball_M",nil,250],
												["hgun_PDW2000_F",nil,39000],
												["30Rnd_9x21_Mag",nil,250],
												["RH_sbr9_wdl",nil,40000],
												["RH_sbr9_tg",nil,40000],
												["RH_sbr9_des",nil,40000],
												["RH_32Rnd_9mm_M822",nil,250],
												["SMG_01_F",nil,40000],
												["30Rnd_45ACP_Mag_SMG_01",nil,250],
												["A3L_AK47",nil,75500],
												["A3L_AK47mag",nil,500],
												["CUP_arifle_AKS74U",nil,72000],
												["CUP_arifle_AK74",nil,79500],
												["CUP_arifle_AK74M",nil,82500],
												["CUP_arifle_AK107",nil,82500],
												["CUP_arifle_AKS74",nil,82500],
												["CUP_30Rnd_545x39_AK_M",nil,500],
												["CUP_optic_Kobra",nil,10000],
												["optic_Aco",nil,10000],
												["CUP_optic_MRad",nil,10000]
										]
                                ];
                        };
                };
        };
       
        case "gun":
        {
                switch(true) do
                {
                        case (playerSide != civilian): {"You are not a civilian!"};
                        case (!license_civ_gun): {"You don't have a Firearms license!"};
                        default
                        {
                                ["Billy Joe's Firearms",
                                        [
                                                ["CUP_hgun_Makarov",nil,5000],
												["CUP_8Rnd_9x18_Makarov_M",nil,250],
												["CUP_hgun_PB6P9",nil,6000],
												["CUP_8Rnd_9x18_Makarov_M",nil,250],
												["hgun_P07_F",nil,6000],
												["16Rnd_9x21_Mag",nil,250],
												["hgun_Rook40_F",nil,6000],
												["16Rnd_9x21_Mag",nil,250],
												["RH_sw659",nil,6000],
												["RH_14Rnd_9x19_sw",nil,250],
												["CUP_hgun_Glock17",nil,6000],
												["CUP_17Rnd_9x19_glock17",nil,250],
												["RH_g19",nil,6000],
												["RH_g19t",nil,6000],
												["RH_17Rnd_9x19_g17",nil,250],
												["RH_m9",nil,7000],
												["RH_15Rnd_9x19_M9",nil,250],
												["CUP_hgun_M9","M9 Beretta",1200],
												["CUP_15Rnd_9x19_M9","M9 Magazine",100],
												["CUP_hgun_Compact",nil,6000],
												["CUP_10Rnd_9x19_Compact",nil,250],
												["CUP_hgun_Duty",nil,8000],
												["16Rnd_9x21_Mag",nil,250],
												["CUP_hgun_Phantom",nil,15000],
												["CUP_18Rnd_9x19_Phantom",nil,250],
												["RH_p226",nil,15000],
												["RH_p226s",nil,15000],
												["RH_15Rnd_9x19_SIG",nil,250],
												["RH_mk2",nil,15000],
												["RH_10Rnd_22LR_mk2",nil,250],
												["RH_gsh18",nil,25000],
												["RH_18Rnd_9x19_gsh",nil,250]
                                        ]
                                ];
                        };
                };
        };
		
        case "rifle":
        {
                switch(true) do
                {
                        case (playerSide != civilian): {"You are not a civilian!"};
                        case (!license_civ_rifle): {"You don't have a Rifle license!"};
                        default
                        {
                                ["Hunting Rifle Shop",
                                        [
                                                ["A3L_CZ550",nil,75000],
                                                ["A3L_CZ550mag",nil,50],
                                                ["A3L_CZ550Scope",nil,36000],
												
												["arifle_SDAR_F","Turtle Harpoon",10000],
												["20Rnd_556x45_UW_mag","Underwater magazine",1200]
                                        ]
                                ];
                        };
                };
        };		
       
        case "gang":
        {
                switch(true) do
                {
                        case (playerSide != civilian): {"You are not a civilian!"};
                        default
                        {
                                ["Hideout Armament",
                                        [
                                                ["A3L_Glock17",nil,17600],
												["A3L_Glock17mag",nil,500],
												
												["A3L_UZI",nil,37250],
												["A3L_UZImag",nil,950]												
                                        ]
                                ];
                        };
                };
        };
       
        case "genstore":
        {
                ["Altis General Store",
                        [
								["ItemMap",nil,169],
								["Tv_Camera","TV Camera(Secondary Slot)",2520],
								["FirstAidKit",nil,250],
                                ["itemRadio",nil,900],
                                ["Binocular",nil,1250],
                                ["ItemGPS",nil,750],
                                ["ToolKit",nil,500],
                                ["NVGoggles_OPFOR",nil,7500],
                                ["NVGoggles",nil,7500],
                                ["Chemlight_red",nil,200],
                                ["Chemlight_yellow",nil,200],
                                ["Chemlight_green",nil,200],
                                ["Chemlight_blue",nil,200],
								["A3L_ChainSaw",nil,2000],
								["A3L_Shovel",nil,2000],
								["A3L_Pickaxe",nil,2000],
								["A3L_JackHammer",nil,2000],
								["A3L_Hammer",nil,2000],
								["A3L_Sign",nil,2000],
								["A3L_Sign2",nil,200],
								["A3L_Sign3",nil,200]
                        ]
                ];
        };
};
