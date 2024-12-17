class CfgPatches {
	class Harks_SUP_IFA3_Pistol {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Sig_soundsa3_COMPAT_IFA3_Pistols","SIG_Sounds","WW2_Assets_c_Characters_XXX_LoadOrder_c", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Germans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Soviets", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Americans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_British", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Polish", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Civilians", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Cars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArmoredCars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_MediumTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_HeavyTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_WheeledAPCs", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_TransportPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Boats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_LandingBoats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Ships", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiTankGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryGuns"};
		authors[] = {"Sigliskovich","Harkness31"};			
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class LIB_PISTOL;
	class LIB_M1896: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M9_Sets","Squad9_BulletCasings_Sets","4Five_Tail_SoundSet","Small_Reflection_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};
	class LIB_FLARE_PISTOL: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Flaregun_Shot_SoundSet", "Small_Reflection2_SoundSet"};
			};
		};
	};
	class LIB_Webley_Flare: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Flaregun_Shot_SoundSet", "Small_Reflection2_SoundSet"};
			};
		};
	};
	class LIB_P38: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class StandardSound{
				soundSetShot[] = {"Squad_M9_Sets","Squad9_BulletCasings_Sets","4Five_Tail_SoundSet","Small_Reflection_SoundSet"};
			};
			class SilencedSound{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};
	class LIB_P08: LIB_P38{
		class Single: Single{
			class StandardSound{
				soundSetShot[] = {"Squad_M9_Sets","Squad9_BulletCasings_Sets","4Five_Tail_SoundSet","Small_Reflection_SoundSet"};
			};
			class SilencedSound{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};
	class LIB_Colt_M1911: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class StandardSound{
				soundSetShot[] = {"Squad_M1911_Sets","Squad9_BulletCasings_Sets","Small_Reflection_SoundSet","4Five_Tail_SoundSet"};
			};
			class SilencedSound{
				soundSetShot[] = {"Sig_M1911_silencerShot_SoundSet","Small_SD_Reflection_SoundSet","Sig_bulletcasing_small_soundset"};
			};
		};
	};
	class LIB_M1895: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class StandardSound{
				soundsetshot[] = {"Squad_M1911_Sets","Squad9_BulletCasings_Sets","Small_Reflection_SoundSet","4Five_Tail_SoundSet"};
			};
			class SilencedSound{
				soundsetshot[] = {"Squad_M1911_Sets","Squad9_BulletCasings_Sets","Small_Reflection_SoundSet","4Five_Tail_SoundSet"};
			};
		};
	};
	class LIB_TT33: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Makarov_Sets","Makarov_Tail_SoundSet","Squad9_BulletCasings_Sets"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};	
	class LIB_WaltherPPK: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M9_Sets","Squad9_BulletCasings_Sets","4Five_Tail_SoundSet","Small_Reflection_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType{
				soundSetShot[] = {"P07_silencerShot_SoundSet","Squad9_BulletCasings_Sets","Small_SD_Reflection_SoundSet"};
			};
		};
	};
	class LIB_Webley_mk6: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M1911_Sets","Squad9_BulletCasings_Sets","Small_Reflection_SoundSet","4Five_Tail_SoundSet"};
			};
		};
	};	
	class LIB_Welrod_mk1: LIB_PISTOL{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Rugermk1_silencerShot_SoundSet","Small_SD_Reflection_SoundSet"};
			};
		};
	};	
};