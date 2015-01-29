// REVISION 27OCT14

// class CfgVehicles
// {

	//class B_supplyCrate_F;
	class Box_meu_ace : B_supplyCrate_F {
		displayname = "[15th] ACE Box";
		transportmaxmagazines = 9999;
		transportmaxweapons = 9999;
		transportMaxBackpacks = 9999;
		SLX_XEH_DISABLED = 0;


		class TransportItems {

// OPTICS
			class _xx_acc_flashlight {
				count = 20;
				name = "acc_flashlight";
			};
			class _xx_acc_pointer_IR {
				count = 20;
				name = "acc_pointer_IR";
			};	
			class _xx_FHQ_optic_ACOG {
				count = 20;
				name = "FHQ_optic_ACOG";
			};
			class _xx_optic_Arco {
				count = 15;
				name = "optic_Arco";
			};
			class _xx_optic_Hamr {
				count = 15;
				name = "optic_Hamr";
			};				
			class _xx_FHQ_optic_AIM {
				count = 20;
				name = "FHQ_optic_AIM";
			};		
			class _xx_FHQ_acc_ANPEQ15 {
				count = 20;
				name = "FHQ_acc_ANPEQ15";
			};			
			class _xx_FHQ_optic_HWS {
				count = 20;
				name = "FHQ_optic_HWS";
			};
			class _xx_FHQ_optic_HWS_G33 {
				count = 15;
				name = "FHQ_optic_HWS_G33";
			};
			class _xx_FHQ_optic_microCCO {
				count = 20;
				name = "FHQ_optic_microCCO";
			};

// MEDICAL
		    class _xx_AGM_Bandage  {
			     count = 300; 
				 name = "AGM_Bandage";
			};
		    class _xx_AGM_Epipen  {
			     count = 100; 
				 name = "AGM_Epipen";
			};

// ACCESSORIES
			class _xx_ItemWatch {
				count = 20;
				name = "ItemWatch";
			};
			class _xx_ItemCompass {
				count = 20;
				name = "ItemCompass";
			};
			class _xx_ItemGPS {
				count = 2;
				name = "ItemGPS";
			};
			class _xx_ItemRadio {
				count = 50;
				name = "ItemRadio";
			};
			class _xx_ItemMap {
				count = 20;
				name = "ItemMap";
			};
			class _xx_Binocular {
				count = 20;
				name = "Binocular";
			};
            class _xx_NVGoggles {
			    count = 25;
				name = "NVGoggles";
			};	
			class _xx_itemctab {
				count = 4;
				name = "itemctab";
			};
			class _xx_itemandroid {
				count = 4;
				name = "itemandroid";
			};
			class _xx_ItemCtabHCam {
				count = 4;
				name = "ItemCtabHCam";
			};
			class _xx_AGM_EarBuds {
				count = 50;
				name = "AGM_EarBuds";
			};

// UNIFORMS			
			class _xx_Nomex_olive {
				count = 10;
				name = "Nomex_olive";
			};
			class _xx_overall_db {
				count = 10;
				name = "overall_db";
			};
// GOGGLES
			class _xx_AV_ESS_tan {
				count = 25;
				name = "AV_ESS_tan";
			};
			class _xx_G_Aviator {
				count = 25;
				name = "G_Aviator";
			};
// VESTS
			class _xx_V_TacVest_blk {
				count = 5;
				name = "V_TacVest_blk";
			};
			class _xx_V_mas_mar_PlateCarrier1_rgr_g {
				count = 5;
				name = "V_mas_mar_PlateCarrier1_rgr_g";
			};
// HELMETS
			class _xx_H_PilotHelmetFighter_B {
				count = 5;
				name = "H_PilotHelmetFighter_B";
			};
			class _xx_H_CrewHelmetHeli_B {
				count = 5;
				name = "H_CrewHelmetHeli_B";
			};
			class _xx_H_PilotHelmetHeli_B {
				count = 5;
				name = "H_PilotHelmetHeli_B";
			};		
		};	

		class TransportMagazines {
// AMMO
			class _xx_M882_9mm {
				count = 100;
				magazine = "M882_9mm";
			};
			class _xx_30Rnd_M855A1_556x45_Stanag {
				count = 200;
				magazine = "30Rnd_M855A1_556x45_Stanag";
			};
//Smoke 203
            class _xx_SmokeShell {
				count = 20;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen {
				count = 20;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellYellow {
				count = 20;
				magazine = "SmokeShellYellow";
			};
			class _xx_SmokeShellRed {
				count = 20;
				magazine = "SmokeShellRed";
			};
			class _xx_SmokeshellBlue {
				count = 15;
				magazine = "SmokeshellBlue";
			};
			class _xx_Chemlight_green {
				count = 50;
				magazine = "Chemlight_green";
			};
		};
		
		class TransportWeapons {
// WEAPONS
			class _xx_hgun_mas_m9_F {
				count = 20;
				weapon = "hgun_mas_m9_F";
			};
			class _xx_M4Car {
				count = 25;
				weapon = "M4Car";
			};
		};
	};

	
// Dont need this};