// REVISION 14OCT14
 
 _unit = _this select 1;
 
 if (!local _unit) exitWith {};

 removeallweapons _unit;
 removebackpack _unit;
 removeuniform _unit;
 removevest _unit;
 removeheadgear _unit;
 _unit addvest "V_mas_mar_PlateCarrier1_rgr_g";
 _unit addheadgear "H_CrewHelmetHeli_B"; 
 
 _unit unassignItem "itemRadio";
 _unit removeItem "itemRadio";
 _unit addItem "itemRadio";
 _unit assignItem "itemRadio";
 _unit unassignItem "nvgoggles";
 _unit removeItem "nvgoggles";
 _unit addItem "AV_ESS_tan";
 _unit assignItem "AV_ESS_tan"; 

 //M9 and Ammo
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addmagazine "M882_9mm";
 _unit addweapon "hgun_mas_m9_F";

 //EQUIPMENT ADD
 _unit addweapon "Binocular";
 _unit additem "ItemWatch";
 _unit additem "ItemMap";
 _unit additem "ItemGPS";
 _unit additem "ItemCompass";
 _unit additem "itemandroid";
 _unit additem "ItemCtabHCam";
 _unit additem "NVGoggles_OPFOR";
 _unit additem "AGM_EarBuds";
 
 //EQUIPMENT ASSIGN
 _unit assignitem "Binocular";
 _unit assignitem "ItemWatch";
 _unit assignitem "ItemMap";
 _unit assignitem "ItemGPS";
 _unit assignitem "ItemCompass";
 _unit assignitem "NVGoggles_OPFOR";
 
 //Grenades
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "Chemlight_green";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShell";
 _unit addmagazine "SmokeShellGreen";
 _unit addmagazine "SmokeShellGreen";

 _unit adduniform "overall_db";
 
 //Bandages
 _unit additem "AGM_Bandage";
 _unit additem "AGM_Bandage";