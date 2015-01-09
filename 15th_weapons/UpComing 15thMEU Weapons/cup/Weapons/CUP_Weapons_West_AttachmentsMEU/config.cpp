class CfgPatches
{
	class CUP_Weapons_West_AttachmentsMEU
	{
		units[] = {};
		weapons[] = {"CUP_optic_SB_3_12x50_PMII","CUP_optic_AN_PAS_13c2","CUP_optic_LeupoldMk4","CUP_optic_HoloBlack","CUP_optic_HoloWdl","CUP_optic_HoloDesert","CUP_optic_Eotech533","CUP_optic_Eotech533Grey","CUP_optic_CompM4","CUP_acc_ANPEQ_15","CUP_acc_ANPEQ_2","CUP_optic_SUSAT","CUP_optic_ACOG","CUP_optic_CWS","CUP_optic_Leupold_VX3","CUP_optic_AN_PVS_10","CUP_optic_CompM2_Black","CUP_optic_CompM2_Woodland","CUP_optic_CompM2_Woodland2","CUP_optic_CompM2_Desert","CUP_acc_Flashlight","CUP_acc_Flashlight_wdl","CUP_acc_Flashlight_desert","CUP_acc_XM8_light_module","CUP_optic_RCO","CUP_optic_RCO_desert","CUP_acc_ANPEQ_2_camo","CUP_acc_ANPEQ_2_desert","CUP_acc_ANPEQ_2_grey","CUP_optic_LeupoldM3LR","CUP_optic_LeupoldMk4_10x40_LRT_Desert","CUP_optic_LeupoldMk4_10x40_LRT_Woodland","CUP_optic_ElcanM145","CUP_optic_AN_PAS_13c1","CUP_optic_LeupoldMk4_CQ_T","CUP_optic_ELCAN_SpecterDR","CUP_optic_LeupoldMk4_MRT_tan","CUP_optic_SB_11_4x20_PM","CUP_optic_ZDDot","CUP_optic_MRad","CUP_acc_CZ_M3X","CUP_optic_TrijiconRx01_desert","CUP_optic_TrijiconRx01_black","CUP_optic_AN_PVS_4"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_WeaponsCore","asdg_jointrails","CUP_Weapons_West_Attachments"};
	};
};
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		CUP_optic_SB_3_12x50_PMII = 1;
		CUP_optic_AN_PAS_13c2 = 1;
		CUP_optic_AN_PAS_13c1 = 1;
		CUP_optic_LeupoldMk4 = 1;
		CUP_optic_HoloBlack = 1;
		CUP_optic_HoloWdl = 1;
		CUP_optic_HoloDesert = 1;
		CUP_optic_CompM4 = 1;
		CUP_optic_SUSAT = 1;
		CUP_optic_Eotech533 = 1;
		CUP_optic_ACOG = 1;
		CUP_optic_CWS = 1;
		CUP_optic_Leupold_VX3 = 1;
		CUP_optic_AN_PVS_10 = 1;
		CUP_optic_CompM2_Black = 1;
		CUP_optic_CompM2_Woodland = 1;
		CUP_optic_CompM2_Woodland2 = 1;
		CUP_optic_CompM2_Desert = 1;
		CUP_optic_RCO = 1;
		CUP_optic_RCO_desert = 1;
		CUP_optic_LeupoldM3LR = 1;
		CUP_optic_LeupoldMk4_10x40_LRT_Desert = 1;
		CUP_optic_LeupoldMk4_10x40_LRT_Woodland = 1;
		CUP_optic_ElcanM145 = 1;
		CUP_optic_Eotech533Grey = 1;
		CUP_optic_LeupoldMk4_CQ_T = 1;
		CUP_optic_ELCAN_SpecterDR = 1;
		CUP_optic_LeupoldMk4_MRT_tan = 1;
		CUP_optic_SB_11_4x20_PM = 1;
		CUP_optic_ZDDot = 1;
		CUP_optic_MRad = 1;
		CUP_optic_TrijiconRx01_desert = 1;
		CUP_optic_TrijiconRx01_black = 1;
		CUP_optic_AN_PVS_4 = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		CUP_optic_SB_3_12x50_PMII = 0;
		CUP_optic_Leupold_VX3 = 0;
		CUP_optic_LeupoldMk4 = 0;
		CUP_optic_LeupoldM3LR = 0;
		CUP_optic_LeupoldMk4_10x40_LRT_Desert = 0;
		CUP_optic_LeupoldMk4_10x40_LRT_Woodland = 0;
		CUP_optic_LeupoldMk4_MRT_tan = 0;
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913{};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		CUP_acc_ANPEQ_15 = 1;
		CUP_acc_ANPEQ_2 = 1;
		CUP_acc_Flashlight = 1;
		CUP_acc_Flashlight_wdl = 1;
		CUP_acc_Flashlight_desert = 1;
		CUP_acc_ANPEQ_2_camo = 1;
		CUP_acc_ANPEQ_2_desert = 1;
		CUP_acc_ANPEQ_2_grey = 1;
		CUP_acc_XM8_light_module = 1;
	};
};
class CUP_PicatinnyTopMount: asdg_OpticRail1913_long{};
class CUP_PicatinnyTopShortMount: asdg_OpticRail1913_short{};
class CUP_PicatinnySideMount: asdg_FrontSideRail{};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class CUP_optic_SB_3_12x50_PMII: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Schmidt and Bender 3-12x60 PM II";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\SB_3_12x50_PMII\data\UI\gear_acco_SB_3_12x50_PMII_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\SB_3_12x50_PMII\SB_3_12x20_PMII.p3d";
		descriptionShort = "Long Range Scope typically mounted on high power sniper rifles like the AS-50";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 15;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\SB_3_12x50_PMII\LRR_optic";
			class OpticsModes
			{
				class LRR
				{
					opticsID = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
					discreteDistanceInitIndex = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.0498;
					distanceZoomMin = 400;
					opticsZoomMax = 0.15;
					distanceZoomMax = 120;
					discretefov[] = {0.0755,0.0249};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					cameraDir = "";
					opticsZoomInit = 0.0498;
				};
			};
		};
	};
	class CUP_optic_AN_PAS_13c2: ItemCore
	{
		scope = 2;
		inertia = 0.3;
		displayName = "AN/PAS 13C2 Heavy Thermal Weapon Sight";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c2\data\UI\gear_acco_AN_PAS_13c2_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c2\anpas13c2.p3d";
		descriptionShort = "Long Range Thermal Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 54;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c2\HWTS_optic.p3d";
			class OpticsModes
			{
				class LRR
				{
					opticsID = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
					discreteDistanceInitIndex = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.0498;
					distanceZoomMin = 400;
					opticsZoomMax = 0.15;
					distanceZoomMax = 120;
					discretefov[] = {0.0755,0.0249};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {"Ti"};
					thermalMode[] = {0,1};
					cameraDir = "";
					opticsZoomInit = 0.0498;
				};
			};
		};
	};
	class CUP_optic_LeupoldMk4: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Leupold Mk4";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4\data\UI\gear_optic_leupoldmk4_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4\leupoldmk4.p3d";
		descriptionShort = "Long Range Scope typically mounted on dedicated marksman rifles like the USMC DMR";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 15;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMK4\2Dscope_MilDot_10";
			class OpticsModes
			{
				class LRR
				{
					opticsID = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
					discreteDistanceInitIndex = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomInit = 0.0711;
					opticsZoomMin = 0.0249;
					distanceZoomMin = 400;
					opticsZoomMax = 0.0711;
					distanceZoomMax = 120;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					cameraDir = "";
				};
			};
		};
	};
	class CUP_optic_HoloBlack: ItemCore
	{
		scope = 2;
		inertia = 0;
		displayName = "EoTech Holo (black)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\data\ui\gear_acco_Holo_Black_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\eotech_black.p3d";
		descriptionShort = "Holographics Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 6;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EoTx
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_optic_HoloWdl: CUP_optic_HoloBlack
	{
		displayName = "EoTech Holo (Woodland)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\data\ui\gear_acco_Holo_wdl_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\eotech_wdl.p3d";
	};
	class CUP_optic_HoloDesert: CUP_optic_HoloBlack
	{
		displayName = "EoTech Holo (Desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\data\ui\gear_acco_Holo_desert_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_Holo\eotech_desert.p3d";
	};
	class CUP_optic_Eotech533: CUP_optic_HoloBlack
	{
		displayName = "EoTech 533 HWS (tan)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_HWS\data\ui\gear_acco_hws_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_HWS\CUP_Eotech_HWS.p3d";
	};
	class CUP_optic_Eotech533Grey: CUP_optic_Eotech533
	{
		displayName = "EoTech 533 HWS (grey)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_HWS\data\ui\gear_acco_hws_grey_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Eotech_HWS\CUP_Eotech_HWS_Grey.p3d";
	};
	class CUP_optic_CompM4: ItemCore
	{
		inertia = 0.1;
		scope = 2;
		displayName = "Aimpoint CompM4 (black)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM4\data\ui\gear_acco_CompM4_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM4\compm4.p3d";
		descriptionShort = "Short-Range Collimator Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EoTx
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_acc_ANPEQ_15: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "AN/PEQ-15 Laser";
		descriptionUse = "AN/PEQ-15 Infrared Laser Pointer";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_15\data\ui\gear_accv_an_peq15_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_15\anpeq_15.p3d";
		descriptionShort = "AN/PEQ-15 IR Laser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class Pointer
			{
				RMBhint = "Laser Pointer";
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
	};
	class CUP_acc_ANPEQ_2: CUP_acc_ANPEQ_15
	{
		inertia = 0.1;
		displayName = "AN/PEQ-2 Laser";
		descriptionUse = "AN/PEQ-2 Infrared Laser Pointer";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\data\ui\gear_accv_an_peg2_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\CUP_an_peq_2.p3d";
		descriptionShort = "AN/PEQ-2 IR Laser";
	};
	class CUP_optic_SUSAT: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "SUSAT L9A1";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\SUSAT\data\ui\gear_acco_SUSAT_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\SUSAT\CUP_SUSAT.p3d";
		descriptionShort = "SUSAT";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 9;
			RMBhint = "Advanced Rifle Combat Optics";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class SUSAT
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.0732;
					opticsZoomMax = 0.0732;
					opticsZoomInit = 0.0732;
					memoryPointCamera = "opticView";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
				};
				class Kolimator: SUSAT
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};
	class CUP_optic_ACOG: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Trijicon ACOG TA31F";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_Generic\data\UI\gear_acco_ACOG_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_generic\CUP_acog.p3d";
		descriptionShort = "Advanced Combat Optical Gunsight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_Generic\ACOG_optic";
			class OpticsModes
			{
				class ACOG
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.06;
					opticsZoomMax = 0.06;
					opticsZoomInit = 0.06;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Kolimator: ACOG
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.5;
					opticsZoomInit = 0.8;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class CUP_optic_CWS: ItemCore
	{
		scope = 2;
		inertia = 0.3;
		displayName = "Advanced Weapon Sight CWS";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CWS\data\UI\gear_acco_cws_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\cws\CUP_cws.p3d";
		descriptionShort = "CWS Advanced Electronic Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 33;
			optics = 1;
			modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\cws\CUP_cws_optic";
			class OpticsModes
			{
				class CWS
				{
					opticsID = 1;
					useModelOptics = 1;
					discretefov[] = {0.0755,0.0249};
					discreteInitIndex = 0;
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.0498;
					distanceZoomMin = 400;
					opticsZoomMax = 0.15;
					distanceZoomMax = 120;
					memoryPointCamera = "eye";
					visionMode[] = {"NVG","Ti"};
					thermalMode[] = {6};
					cameraDir = "";
					opticsZoomInit = 0.0498;
				};
			};
		};
	};
	class CUP_optic_Leupold_VX3: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Leupold VX-3 4.5-14x50mm";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldVX3\data\ui\gear_acco_leupoldcvx3_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldVX3\CUP_leupoldxv3.p3d";
		descriptionShort = "Long Range Optical Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldVX3\2Dscope_MilDot_14.p3d";
			class OpticsModes
			{
				class StepScope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = 0.0553;
					opticsZoomMin = 0.0178;
					distanceZoomMin = 500;
					opticsZoomMax = 0.0553;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 4;
				};
			};
		};
	};
	class CUP_optic_AN_PVS_10: ItemCore
	{
		scope = 2;
		inertia = 0.3;
		displayName = "AN/PVS-10 Night Vision Scope";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_10\data\ui\gear_acco_an_pvs_10_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_10\CUP_AN_PVS_10.p3d";
		descriptionShort = "Night Vision Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 17;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_10\2Dscope_MilDot_9.p3d";
			class OpticsModes
			{
				class NVScope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomInit = 0.0293;
					distanceZoomMin = 300;
					opticsZoomMin = 0.0293;
					distanceZoomMax = 300;
					opticsZoomMax = 0.0293;
					visionMode[] = {"Normal","NVG"};
					memoryPointCamera = "eye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					opticsPPEffects[] = {};
					thermalMode[] = {0,1};
					discretefov[] = {0.0755,0.0249};
					discreteInitIndex = 0;
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
				};
			};
		};
	};
	class CUP_optic_CompM2_Black: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "M68 CCO (Black)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\data\ui\gear_acco_aimpoint_black_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\CUP_CompM2_Black.p3d";
		descriptionShort = "Short-Range Collimator Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EoTx
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_optic_CompM2_Woodland: CUP_optic_CompM2_Black
	{
		displayName = "M68 CCO (Woodland)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\data\ui\gear_acco_aimpoint_wdl1_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\CUP_CompM2_WDL.p3d";
	};
	class CUP_optic_CompM2_Woodland2: CUP_optic_CompM2_Black
	{
		displayName = "M68 CCO (Woodland 2)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\data\ui\gear_acco_aimpoint_wdl2_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\CUP_CompM2_WDL2.p3d";
	};
	class CUP_optic_CompM2_Desert: CUP_optic_CompM2_Black
	{
		displayName = "M68 CCO (Desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\data\ui\gear_acco_aimpoint_desert_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CompM2\CUP_CompM2_DSRT.p3d";
	};
	class CUP_acc_Flashlight: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Flashlight (black)";
		descriptionUse = "Flashlight attachment<br/>Provides a bright light in dark areas";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\data\ui\gear_acc_flashlight_black_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\CUP_flashlight.p3d";
		descriptionShort = "Flashlight";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			RMBhint = "Flashlight";
			class FlashLight
			{
				color[] = {1,0.9,0.8};
				ambient[] = {0.001,0.001,0.001};
				position = "flash dir";
				direction = "flash";
				size = 1;
				innerAngle = 50;
				outerAngle = 120;
				coneFadeCoef = 10;
				intensity = 100;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 0.35;
				onlyInNvg = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 1;
					quadratic = 75;
				};
				scale[] = {0};
			};
		};
	};
	class CUP_acc_Flashlight_wdl: CUP_acc_Flashlight
	{
		displayName = "Flashlight (woodland)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\data\ui\gear_acc_flashlight_wdl_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\CUP_flashlight_wdl.p3d";
	};
	class CUP_acc_Flashlight_desert: CUP_acc_Flashlight
	{
		displayName = "Flashlight (desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\data\ui\gear_acc_flashlight_wdl_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\CUP_flashlight_desert.p3d";
	};
	class CUP_acc_XM8_light_module: CUP_acc_Flashlight
	{
		displayName = "XM8 Underbarrel Light Module";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\data\ui\gear_accv_xm8light_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\flashlight\CUP_xm8_light_module.p3d";
	};
	class CUP_optic_RCO: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Trijicon ACOG";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\data\ui\gear_acco_ACOG_RCO_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\CUP_acog_2.p3d";
		descriptionShort = "Advanced Combat Optical Gunsight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\2Dscope_Acog_4x32.p3d";
			class OpticsModes
			{
				class ACOG
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Kolimator: ACOG
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.5;
					opticsZoomInit = 0.8;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class CUP_optic_RCO_desert: CUP_optic_RCO
	{
		displayName = "Trijicon ACOG (desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\data\ui\gear_acco_ACOG_RCO_desert_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\CUP_acog_2_desert.p3d";
	};
	class CUP_acc_ANPEQ_2_camo: CUP_acc_ANPEQ_2
	{
		displayName = "AN/PEQ-2 Laser (camo)";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\CUP_an_peq_2_camo.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\data\ui\gear_accv_anpeg2camo_ca.paa";
	};
	class CUP_acc_ANPEQ_2_desert: CUP_acc_ANPEQ_2
	{
		displayName = "AN/PEQ-2 Laser (camo)";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\CUP_an_peq_2_desert.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\data\ui\gear_accv_anpeg2camo_ca.paa";
	};
	class CUP_acc_ANPEQ_2_grey: CUP_acc_ANPEQ_2
	{
		displayName = "AN/PEQ-2 Laser (grey)";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\CUP_an_peq_2_grey.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_2\data\ui\gear_aacv_anpeq2_grey_ca.paa";
	};
	class CUP_optic_LeupoldM3LR: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Leupold Mark 4 3-9x36mm MR/T";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Leupold_M3_LR\data\ui\gear_acco_leupoldM3LR_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Leupold_M3_LR\CUP_LeupoldM3LR.p3d";
		descriptionShort = "Long Range Scope typically mounted on sniper and marksman rifles";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_10\2Dscope_MilDot_9.p3d";
			class OpticsModes
			{
				class LRR
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = 0.083;
					opticsZoomMin = 0.0277;
					opticsZoomMax = 0.083;
					distanceZoomMin = 400;
					distanceZoomMax = 120;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 4;
				};
			};
		};
	};
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Leupold Mark 4 10x40mm LR/T (Desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_10x40_LRT\data\ui\gear_acco_LPmk4_d_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_10x40_LRT\CUP_lpmk4_10x40_lr_dt.p3d";
		descriptionShort = "Long Range Scope typically mounted on sniper and marksman rifles";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_10x40_LRT\2Dscope_MilDot_10.p3d";
			class OpticsModes
			{
				class LRR
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0249;
					opticsZoomMax = 0.0249;
					opticsZoomInit = 0.0249;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "opticView";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					visionMode[] = {"Normal"};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 4;
				};
			};
		};
	};
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland: CUP_optic_LeupoldMk4_10x40_LRT_Desert
	{
		displayName = "Leupold Mark 4 10x40mm LR/T (Woodland)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_10x40_LRT\data\ui\gear_acco_LPmk4_g_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_10x40_LRT\CUP_lpmk4_10x40_lr_gt.p3d";
	};
	class CUP_optic_ElcanM145: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Elcan M145";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\data\UI\gear_acco_m145_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\CUP_M145.p3d";
		descriptionShort = "Medium-Range scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\M145_optic.p3d";
			class OpticsModes
			{
				class M145
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMax = 0.059;
					distanceZoomMax = 300;
					opticsZoomMin = 0.059;
					distanceZoomMin = 300;
					opticsZoomInit = 0.059;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	class CUP_optic_AN_PAS_13c1: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "AN/PAS 13C1 Light Thermal Weapon Sight";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c1\data\ui\gear_acco_pvs13c1_ca.paa";
		model = "CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c1\CUP_AN_PAS13c1.p3d";
		descriptionShort = "Midrange Thermal Weapon Sight";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 50;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PAS_13c1\LWTS_optic.p3d";
			class OpticsModes
			{
				class LTWS
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.1606;
					opticsZoomMax = 0.1606;
					opticsZoomInit = 0.1606;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					opticsPPEffects[] = {};
					visionMode[] = {"Ti"};
					thermalMode[] = {0,1};
					discreteDistance[] = {100,200,300};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class CUP_optic_LeupoldMk4_CQ_T: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Leupold Mk4 CQ/T 1-3x14mm";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_CQT\data\ui\gear_acco_leipold_mk4_cqt_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_CQT\CUP_Mk4_CQ_T.p3d";
		descriptionShort = "Leupold Mk4 CQ/T 1-3x14mm Close Quarter Rifle Scope";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			RMBhint = "Advanced Rifle Combat Optics";
			optics = 1;
			modelOptics = "\A3\Weapons_F\empty";
			class OpticsModes
			{
				class MK4CQT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.083;
					opticsZoomMax = 0.083;
					opticsZoomInit = 0.083;
					memoryPointCamera = "opticEye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class Kolimator: MK4CQT
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};
	class CUP_optic_ELCAN_SpecterDR: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Elcan SpecterDR";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\data\ui\gear_acco_specterDR_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\CUP_Elcan_SpecterDR.p3d";
		descriptionShort = "Medium-Range scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\CUP_SpecterDR_556_optic_4x.p3d";
			class OpticsModes
			{
				class Specter
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.071945;
					opticsZoomInit = 0.071945;
					opticsZoomMax = 0.071945;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
				class Ironsights: Specter
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class CUP_optic_LeupoldMk4_MRT_tan: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Leupold Mk4 MR/T (tan)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_MRT\data\ui\gear_acco_leupoldmk4_mrt_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_MRT\CUP_LeupoldMk4_MRT.p3d";
		descriptionShort = "Medium- to Long-range scope for sniper and marksman rifles.";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4_MRT\CUP_TacMil_optic_8x.p3d";
			class OpticsModes
			{
				class MRT
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.087666;
					opticsZoomMax = 0.035972;
					opticsZoomInit = 0.087666;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 329;
					distanceZoomMax = 329;
					cameraDir = "";
					visionMode[] = {"Normal"};
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
				};
			};
		};
	};
	class CUP_optic_SB_11_4x20_PM: ItemCore
	{
		scope = 2;
		inertia = 0.2;
		displayName = "Schmidt & Bender 1.1-4x20 PM ShortDot";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\SB_11_4x20_PM\data\ui\gear_acco_SB_11_4x20_PM_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\SB_11_4x20_PM\CUP_SB_11_4x20_PM.p3d";
		descriptionShort = "Medium- to Short range scope typically used on Assault rifles.";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\LeupoldMk4\2Dscope_MilDot_10.p3d";
			class OpticsModes
			{
				class ShortDot
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.087666;
					opticsZoomMax = 0.035972;
					opticsZoomInit = 0.087666;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {"Normal"};
					discreteDistance[] = {50,100,200,300};
					discreteDistanceInitIndex = 1;
				};
			};
		};
	};
	class CUP_optic_ZDDot: ItemCore
	{
		scope = 2;
		inertia = 0.1;
		displayName = "Meopta ZD-Dot";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ZD-Dot\data\ui\gear_acco_zddot_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\ZD-Dot\CUP_ZD_Dot.p3d";
		descriptionShort = "Short-Range Red Dot Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class ZDDot
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_optic_MRad: ItemCore
	{
		scope = 2;
		inertia = 0;
		displayName = "Meopta Rapid Acquisition Dot";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ZD-MRad\data\ui\gear_acco_mrad_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\ZD-MRad\CUP_MRad.p3d";
		descriptionShort = "Short-Range Red Dot Weapon Sight for SMG's";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class MRAD
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_acc_CZ_M3X: CUP_acc_Flashlight
	{
		displayName = "CZ M3X Pistol Flashlight";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\CZ_M3X\data\ui\gear_acc_CZ_M3X_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\CZ_M3X\CUP_CZ_Flashlight.p3d";
	};
	class CUP_optic_TrijiconRx01_desert: ItemCore
	{
		scope = 2;
		inertia = 0;
		displayName = "Trijicon Rx01 Red Dot sight (desert)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\TrijiconRx01\data\ui\gear_acco_trijiconrx01_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\TrijiconRx01\CUP_trijiconrx01.p3d";
		descriptionShort = "Short-Range Red Dot Weapon Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 4;
			RMBhint = "EOT xps3";
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Rx01
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {};
				};
			};
		};
	};
	class CUP_optic_TrijiconRx01_black: CUP_optic_TrijiconRx01_desert
	{
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\TrijiconRx01\data\ui\gear_acco_trijiconrx01b_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\TrijiconRx01\CUP_trijiconrx01b.p3d";
		displayName = "Trijicon Rx01 Red Dot sight (black)";
	};
	class CUP_optic_AN_PVS_4: ItemCore
	{
		scope = 2;
		inertia = 0.3;
		displayName = "AN/PVS-4 Night Vision Scope";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_4\data\ui\gear_acco_anpvs4_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_4\CUP_ANPVS4.p3d";
		descriptionShort = "Long Range Night Vision Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 40;
			optics = 1;
			modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PVS_4\CUP_NV_anpvs4_optic.p3d";
			class OpticsModes
			{
				class ANPVS4
				{
					opticsID = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1400};
					discreteDistanceInitIndex = 2;
					useModelOptics = 1;
					opticsFlare = 1;
					distanceZoomMin = 400;
					distanceZoomMax = 120;
					discretefov[] = {0.0755,0.0249};
					discreteInitIndex = 0;
					memoryPointCamera = "eye";
					cameraDir = "";
					visionMode[] = {"NVG"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 1;
				};
			};
		};
	};
};