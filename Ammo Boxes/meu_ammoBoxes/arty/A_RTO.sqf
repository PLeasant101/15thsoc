// REVISION 15/JAN/15

//15th RTO Loadout

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Infantry_L";
 _unit addheadgear "MEF_Wood_Helmet_LWH";

 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "AV_ESS_tan_clr";

 _unit addbackpack "tf_rt1523g";

 (unitBackpack _unit) additemCargo ["NVGoggles_OPFOR",1];

 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_T_Stanag";

 _unit addweapon "CUP_arifle_M16A4_Base";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";


 _unit addweapon "rangefinder";
 _unit assignitem "rangefinder";

 _unit addmagazine "HandGrenade";
 _unit addmagazine "HandGrenade";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeshellBlue";

 _unit additem "itemandroid";
 _unit additem "acc_flashlight";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";
 _unit additem "AGM_EarBuds";

 _unit adduniform "MEF_Wood_IN_MARPAT_LS";