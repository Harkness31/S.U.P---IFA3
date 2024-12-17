class CfgPatches {
	class Harks_SUP_IFA3_SMG {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"WW2_Assets_c_Weapons_Sounds_c","WW2_Assets_c_Weapons_InfantryWeapons_c","A3_Sounds_F","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch","Sig_soundsa3_COMPAT_IFA3_SMG","SIG_Sounds","WW2_Assets_c_Characters_XXX_LoadOrder_c", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Germans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Soviets", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Americans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_British", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Polish", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Civilians", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Cars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArmoredCars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_MediumTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_HeavyTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_WheeledAPCs", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_TransportPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Boats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_LandingBoats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Ships", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiTankGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryGuns"};
		authors[] = {"Sigliskovich","Harkness31"};			
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class LIB_SMG;
	class LIB_M1A1_Thompson: LIB_SMG{
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Dry.wss", 1, 1, 10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_ReloadMagazine.wss", 0.5623, 1, 30};			
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Thompson_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Thompson_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class LIB_PPSh41_m: LIB_SMG{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Scorpion_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","4Five_Tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Scorpion_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","4Five_Tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};	
	class LIB_MP40: LIB_SMG{
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss", 1, 1, 10};
		reloadMagazineSound[] = {"WW2\Assets_s\Weapons\Sounds_s\sounds\specific\mp40\reload", 1, 1, 32};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_MP40_Sets","PS_MP402_Sets","PS_MP403_Sets","SPAR01_tail_SoundSet","Squad556_BulletCasings_Sets","Small_Reflection_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};
	class LIB_MP38: LIB_SMG{
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss", 1, 1, 10};
		reloadMagazineSound[] = {"WW2\Assets_s\Weapons\Sounds_s\sounds\specific\mp40\reload", 1, 1, 32};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_MP40_Sets","PS_MP402_Sets","PS_MP403_Sets","SPAR01_tail_SoundSet","Squad556_BulletCasings_Sets","Small_Reflection_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};	
	class LIB_M3_GreaseGun: LIB_SMG{
		drySound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_Dry.wss", 1, 1, 10};
		reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\MachineGun_Sub_s\Thompson\Thompson_ReloadMagazine.wss", 0.5623, 1, 30};		
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M3GreaseGun_Sets","Small_Reflection_SoundSet","Squad556_BulletCasings_Sets","SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{
			showToPlayer = 0;
		};
	};	
};