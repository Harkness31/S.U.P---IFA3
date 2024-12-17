class CfgPatches {
	class Harks_SUP_IFA3_Rifle {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS_AMZ_Lee_enfield","A3_Sounds_F","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch","WW2_Assets_c_Weapons_Sounds_c","WW2_Assets_c_Weapons_InfantryWeapons_c","Sig_soundsa3_COMPAT_IFA3_Rifle","SIG_Sounds","WW2_Assets_c_Characters_XXX_LoadOrder_c", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Germans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Soviets", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Americans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_British", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Polish", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Civilians", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Cars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArmoredCars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_MediumTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_HeavyTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_WheeledAPCs", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_TransportPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Boats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_LandingBoats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Ships", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiTankGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryGuns"};
		authors[] = {"Sigliskovich","Harkness31"};
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference


class CfgWeapons{
	class LIB_RIFLE;
	class LIB_DELISLE: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_SKS_2_silencerShot_SoundSet","Medium_SD_Reflection_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_FG42G: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_FG42_Sets","PS_FG422_Sets","SPAR_17_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_FG42_Sets","PS_FG422_Sets","SPAR_17_Tail_SoundSet","Squad556_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{};
	};	
	class LIB_G43: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_G43_Sets", "SPAR_17_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_G41: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_G43_Sets", "SPAR_17_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_K98: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Kar98k_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_LeeEnfield_No4: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Large_Reflection_DMR_SoundSet","SPAR_17_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_M1_Carbine: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"SPE_m1car_Shot_SoundSet","SPE_rifle_small_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet","Medium_Reflection_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;

		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_M1_Garand: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"SPE_garand_Shot_SoundSet","SPE_rifle2_Tail_SoundSet","SPE_garand_stereoLayer_SoundSet","Large_Reflection_DMR_SoundSet","SPAR_17_Tail_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};	
	class LIB_M9130: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Mosin_Sets","SPAR_17_Tail_SoundSet","SPE_rifle2_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
        class LIB_M9130PU: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_Mosin_Sets","SPAR_17_Tail_SoundSet","SPE_rifle2_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_MP44: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_MP44_Semi_Sets","Squad762_BulletCasings_Sets","Medium_Reflection_SoundSet","SPAR01_tail_SoundSet"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_MP44_Semi_Sets","Squad762_BulletCasings_Sets","Medium_Reflection_SoundSet","SPAR01_tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Medium{};
	};
	class LIB_PTRD: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_PTRD_Sets","M320_Tail_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_SRIFLE;		
	class LIB_M1903A4_Springfield: LIB_SRIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_M1903A3_Springfield: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_LeeEnfield_No4_Scoped: LIB_SRIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PS_Springfield_Sets","PS_Springfield2_Sets","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet","Large_Reflection_DMR_SoundSet"};
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
	class LIB_SVT_40: LIB_RIFLE{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Squad_M110_Sets","SPAR_17_Tail_SoundSet","Squad762_BulletCasings_Sets","Large_Reflection_DMR_SoundSet"};			
			};
		};
		class Far: Single{
			showToPlayer = 0;
		};
		class Medium: Single{
			showToPlayer = 0;
		};
		class Short: Single{
			showToPlayer = 0;
		};
	};
};
