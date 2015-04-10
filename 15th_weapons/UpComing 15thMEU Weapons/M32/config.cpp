
class CfgPatches
{
	class M32
	{
		units[] = {"M32_equipbox"};
		weapons[] = {"M32"};
		requiredVersion = 1.02;
		requiredAddons[] = {"A3_Weapons_F"};
		magazines[] = {"6Rnd_HE_M32", "6Rnd_FlareWhite_M32", "6Rnd_FlareGreen_M32", "6Rnd_FlareRed_M32", "6Rnd_FlareYellow_M32", "6Rnd_FlareCIR_M32", "6Rnd_Smoke_M32", "6Rnd_SmokeRed_M32", "6Rnd_SmokeGreen_M32", "6Rnd_SmokeYellow_M32", "6Rnd_SmokePurple_M32", "6Rnd_SmokeOrange_M32", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
	
	};
};
class CfgVehicles
{
	class WeaponHolder_Single_F;
	class M32: WeaponHolder_Single_F
	{
		scope = 2;
		curatorScope = 2;
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
		mapSize = 0.4;
		displayName = "M32";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class M32
			{
				weapon = "M32";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 6Rnd_HE_M32
			{
				magazine = "6Rnd_HE_M32";
				count = 1;
			};
		};
	};
};
#define magentry(mag, num)      \
		class _xx_##mag       	\
		{          				\
			magazine = #mag;    \
			count = num;      	\
		}
		
#define wepentry(wep, num)  	\
		class _xx_##wep 		\
		{ 						\
			weapon = #wep; 		\
			count = num; 		\
		}

#define itementry(item, num) class _xx_##item { name=#item; count = num; }

class CfgAmmo
{
	class Flarecore;
	class MEUFlare: Flarecore
	{
		timeToLive = 50;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		intensity = 60000;
	};
	class MEU_F_40mm_White: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.5,0.5};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 30;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Green: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.25,0.5,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 30;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Red: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.25,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 30;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class MEU_F_40mm_Yellow: MEUFlare
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.5,0.5,0.25,0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 30;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};
	class G_40mm_HE;
	class M433_40mm_HEDP: G_40mm_HE
  {
        hit = 170;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 3;
		dangerRadiusHit= -1;
		suppressionRadiusHit= 15;
        class CamShakeHit
        {
            power = 30;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
	};
    };
};
class CfgMagazines
{
	class CA_Magazine;
	class 3Rnd_HE_Grenade_shell;
	class 6Rnd_HE_M32: 3Rnd_HE_Grenade_shell
	{
		scope = 2;
		picture = "\m32\Data\Icon\m_6x40mmhp_ca.paa";
		displayName= "6 Rnd. M433";
		ammo = "M433_40mm_HEDP";
		count = 6;
		mass = 24;
	};
	class 6Rnd_FlareWhite_M32: 6Rnd_HE_M32
	{
		scope = 2;
		picture="\M32\Data\Icon\m_6x40mmflare_ca.paa";
		displayName= "6 Rnd. 40MM Flare (White)";
		ammo = "MEU_F_40mm_White";
		count = 6;
		mass = 20;
	};
	class 6Rnd_FlareGreen_M32: 6Rnd_FlareWhite_M32
	{
		scope = 2;
		ammo = "MEU_F_40mm_Green";
		displayName= "6 Rnd. 40MM Flare (Green)";
		mass = 20;
	};
	class 6Rnd_FlareRed_M32: 6Rnd_FlareWhite_M32
	{
		scope = 2;
		ammo = "MEU_F_40mm_Red";
		displayName= "6 Rnd. 40MM Flare (Red)";
		mass = 20;
	};
	class 6Rnd_FlareYellow_M32: 6Rnd_FlareWhite_M32
	{
		scope = 2;
		ammo = "MEU_F_40mm_Yellow";
		displayName= "6 Rnd. 40MM Flare (Yellow)";
		mass = 20;
	};
	class 6Rnd_FlareCIR_M32: 6Rnd_FlareWhite_M32
	{
		scope = 2;
		ammo = "F_40mm_Cir";
		displayName= "6 Rnd. 40MM Flare (IR)";
		mass = 20;
	};

	class 6Rnd_Smoke_M32: 6Rnd_HE_M32
	{
		scope = 2;
		picture="\M32\Data\Icon\m_6x40mmsmoke_ca.paa";
		displayName= "6Rnd 40MM Smoke (White)";
		ammo = "G_40mm_Smoke";
		count = 6;
		mass = 20;
	};
	class 6Rnd_SmokeRed_M32: 6Rnd_Smoke_M32
	{
		scope = 2;
		displayName= "6Rnd 40MM Smoke (Red)";
		ammo = "G_40mm_SmokeRed";
		mass = 20;
	};
	class 6Rnd_SmokeGreen_M32: 6Rnd_Smoke_M32
	{
		scope = 2;
		displayName= "6Rnd 40MM Smoke (Green)";
		ammo = "G_40mm_SmokeGreen";
		mass = 20;
	};
	class 6Rnd_SmokeYellow_M32: 6Rnd_Smoke_M32
	{
		scope = 2;
		displayName= "6Rnd 40MM Smoke (Yellow)";
		ammo = "G_40mm_SmokeYellow";
		mass = 20;
	};
	class 6Rnd_SmokePurple_M32: 6Rnd_Smoke_M32
	{
		scope = 2;
		displayName= "6Rnd 40MM Smoke (Purple)";
		ammo = "G_40mm_SmokePurple";
		mass = 20;
	};
	class 6Rnd_SmokeOrange_M32: 6Rnd_Smoke_M32
	{
		scope = 2;
		displayName= "6Rnd 40MM Smoke (Orange)";
		ammo = "G_40mm_SmokeOrange";
		mass = 20;
	};

};
class Mode_SemiAuto;	
class CfgWeapons
{
	class weaponslotsinfo;
	class Rifle_Base_F;
	class EGLM;
	class M32: Rifle_Base_F
	{
		scope = 2;
		model = "\M32\M32.p3d";
		handAnim[]={"OFP2_ManSkeleton","\M32\Data\Anim\M32.rtm"};
		picture="\M32\Data\Icon\m32_CA.paa";
		displayName= "M32 MGL";
		magazines[] = {"M433_40mm_HEDP_Shell","6Rnd_HE_M32", "6Rnd_FlareWhite_M32", "6Rnd_FlareGreen_M32", "6Rnd_FlareRed_M32", "6Rnd_FlareYellow_M32", "6Rnd_FlareCIR_M32", "6Rnd_Smoke_M32", "6Rnd_SmokeRed_M32", "6Rnd_SmokeGreen_M32", "6Rnd_SmokeYellow_M32", "6Rnd_SmokePurple_M32", "6Rnd_SmokeOrange_M32", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
		reloadTime=0.5;
		recoil = "recoil_single_mx";
		recoilProne = "recoil_single_prone_mx";
		weaponinfotype = "RscWeaponZeroing";
		discretedistance[] = {100, 200, 300, 400};
		discretedistancecamerapoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
		discreteDistanceInitIndex = 1; /// 200 is the default zero
		cameradir = "OP_look";
		cursoraim = "gl";
		canlock = 0;
		cartridgepos = "";
		cartridgevel = "";
		cursor = "EmptyCursor";
		muzzleend = "konec granatometu";
		muzzlepos = "usti granatometu";
		reloadaction = "ReloadMagazine";
		reloadMagazineSound[]={"m32\sounds\m32_r.wss",1,1,10};
	        drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.2238721,1,20};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{mass = 117;};
		muzzles[]={"this"};
		sounds[] = {"StandardSound"};
		class StandardSound
			{
   		begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
   		begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
   		soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
};	
	