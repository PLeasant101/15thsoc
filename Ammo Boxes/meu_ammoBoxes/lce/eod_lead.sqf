// REVISION 15/JAN/15

//EOD Lead

 _unit = _this select 1;
 
 if (!local _unit) exitWith {};


 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "MEF_Vest_Tan_Infantry";
 _unit addheadgear "MEF_Wood_Goggles_Helmet_LWH";


 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";

 _unit additem "NVGoggles_OPFOR";
 _unit assignItem "NVGoggles_OPFOR";

 _unit additem "itemGPS";
 _unit assignitem "itemGPS";

 _unit additem "itemMap";
 _unit assignitem "itemMap";
 
 _unit additem "itemCompass";
 _unit assignitem "itemCompass";
 
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
 _unit additem "itemRadio";
  //_unit assignitem "itemRadio"; //Commented out due to TFAR funkyness upon spawn in, and a dissapearing radio


 _unit addbackpack "tf_rt1523g";


 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 _unit addmagazine "MEU_30Rnd_M855A1_556x45_Stanag";
 
 _unit addweapon "CUP_arifle_M4CAR_black";
 _unit addPrimaryWeaponItem "CUP_optic_ACOG";
 _unit addPrimaryWeaponItem "CUP_acc_ANPEQ_15";


 _unit addmagazine "MEU_M882_9mm";
 _unit addmagazine "MEU_M882_9mm";


 _unit addweapon "CUP_hgun_M9";


 _unit addweapon "Rangefinder";
 _unit assignitem "Rangefinder";
 
 _unit addweapon "itemandroid";


 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell"; 
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellRed";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";
 _unit additem "AGM_EarBuds";


 _unit adduniform "MEF_Wood_IN_MARPAT_LS";
