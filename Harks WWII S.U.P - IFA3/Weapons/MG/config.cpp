class CfgPatches {
	class Harks_IFA3_SUP_MG {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS_AMZ_Lee_enfield","WW2_Assets_c_Weapons_Sounds_c","WW2_Assets_c_Weapons_InfantryWeapons_c","A3_Sounds_F","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch","PS_AMZ_M1919_COAX","WW2_SPE_Assets_c_Weapons_Sounds_c","squad_weapon_soundmod","Sig_soundsa3_COMPAT_IFA3_MG","SIG_Sounds","WW2_SPE_Assets_c_Weapons_AmmoParameters_c","WW2_Assets_c_Characters_XXX_LoadOrder_c","WW2_Assets_c_Characters_XXX_LoadOrder_c_Germans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Soviets", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Americans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_British", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Polish", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Civilians", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Cars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArmoredCars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_MediumTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_HeavyTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_WheeledAPCs", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_TransportPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Boats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_LandingBoats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Ships", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiTankGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryGuns"};
		authors[] = {"Sigliskovich","Harkness31"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class LIB_LMG;
	class LIB_M1918A2_BAR: LIB_LMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;		
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"FoW_Bar_Firing","FoW_MG_EFX","FoW_Interior_Reverb","SPE_rifle2_Tail_SoundSet","Large_Reflection_DMR_SoundSet","Squad762_BulletCasings_Sets","SPAR_17_Tail_SoundSet"};
			};
		};
		class Full_Rapid: Full{};
		class Far: Full{};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};
	class MGun;
	class LIB_TankMGun_base: MGun{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	
	class LIB_Besa_coax: LIB_TankMGun_base{
		class manual: manual{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Sig_Besa_Shot_Vehicle_Ext_SoundSet","Sig_Besa_Shot_Vehicle_Int_SoundSet","Large_Vehicle_Reflection_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: close{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Sig_Besa_Shot_Vehicle_Ext_SoundSet","Sig_Besa_Shot_Vehicle_Int_SoundSet","Large_Vehicle_Reflection_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: short{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Sig_Besa_Shot_Vehicle_Ext_SoundSet","Sig_Besa_Shot_Vehicle_Int_SoundSet","Large_Vehicle_Reflection_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: medium{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Sig_Besa_Shot_Vehicle_Ext_SoundSet","Sig_Besa_Shot_Vehicle_Int_SoundSet","Large_Vehicle_Reflection_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: far{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Sig_Besa_Shot_Vehicle_Ext_SoundSet","Sig_Besa_Shot_Vehicle_Int_SoundSet","Large_Vehicle_Reflection_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};	
	
 class LIB_Bren_Mk2: LIB_LMG{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","SPE_rifle_med_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSBREN_Sets","SPE_rifle_med_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};
	class LIB_DP28: LIB_LMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_PKP_Sets","Squad762_BulletCasings_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};
	class LIB_DT: LIB_LMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_PKP_Sets","Squad762_BulletCasings_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};
	class LIB_M1919A4: LIB_LMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};
	class LIB_M1919A4_coax: LIB_TankMGun_base{
		class manual: manual{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: close{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: short{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: medium{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: far{
		class BaseSoundModeType;
			
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"}; //soundSetShot[] = {"SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};	
	class LIB_MLMG_base: MGun{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class LIB_M1919A4_tripod: LIB_MLMG_base{
		class manual: manual{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class close: close{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class short: short{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class far: far{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};	
	class LIB_M1919A4_Veh: LIB_M1919A4_tripod{
		class manual: manual{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
		};
		class close: close{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
		};
		class short: short{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
		};
		class far: far{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSM1919_Sets","SPE_int_m1919coax_Shot_SoundSet","SPE_int_rifle_med_Tail_SoundSet","SPE_int_m1919coax_stereoLayer_SoundSet","SPE_coaxMG_bulletCasings_SoundSet"};
			};
		};
	};	
	class LIB_M2: LIB_MLMG_base{
		class manual: manual{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Large_Reflection_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class close: close{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Large_Reflection_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class short: short{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Large_Reflection_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Large_Reflection_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
		class far: far{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundsetshot[] = {"Squad_50cal_Sets","HMG050_Tail_SoundSet","Large_Reflection_SoundSet","Squad50cal_BulletCasings_Sets"};
			};
		};
	};	
	class LIB_Maxim_M30: LIB_MLMG_base{
		class manual: manual{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Maxim_Shot_SoundSet","Large_Reflection_SoundSet","Sig_bulletcasing_Medium_MG_soundset"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: close{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Maxim_Shot_SoundSet","Large_Reflection_SoundSet","Sig_bulletcasing_Medium_MG_soundset"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: short{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Maxim_Shot_SoundSet","Large_Reflection_SoundSet","Sig_bulletcasing_Medium_MG_soundset"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: medium{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Maxim_Shot_SoundSet","Large_Reflection_SoundSet","Sig_bulletcasing_Medium_MG_soundset"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: far{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"Sig_Maxim_Shot_SoundSet","Large_Reflection_SoundSet","Sig_bulletcasing_Medium_MG_soundset"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};		
	};
	class LIB_MG34: LIB_LMG{
		class Single: Mode_SemiAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};

	class LIB_MG34_coax: LIB_TankMGun_base{
		class manual: manual{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad762_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet","SPE_coaxMG_ob_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: close{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad762_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet","SPE_coaxMG_ob_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: short{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad762_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet","SPE_coaxMG_ob_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: medium{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad762_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet","SPE_coaxMG_ob_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: far{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34INTCoax_Sets","PSMG34EXTCoax_Sets","Squad762_BulletCasings_Sets","SyndikatLMG_Tail_SoundSet","SPE_coaxMG_ob_bulletCasings_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class LIB_MG34_Tripod: LIB_MG34_coax{
		class manual: manual{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class close: close{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;						
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class short: short{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;						
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;						
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class far: far{
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;						
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};		
	class LIB_MG42: LIB_LMG{
		class Full: Mode_FullAuto{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class Far: Full{
			showToPlayer = 0;
		};
		class Medium: Full{
			showToPlayer = 0;
		};
		class Short: Full{
			showToPlayer = 0;
		};
	};	

	class LIB_MLMG42: LIB_MLMG_base{
		class manual: manual{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: close{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: short{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: medium{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: far{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};	
	class LIB_MG42_Tripod: LIB_MLMG42{
		class manual: manual{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};			
		};
		class short: short{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
		    };
		};
		class far: far{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};	
	class LIB_MG42_Veh: LIB_MG42_Tripod{
		class manual: manual{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};			
		};
		class short: short{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class far: far{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};
	class LIB_MG42_back: LIB_MG42_Veh{
		class manual: manual{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};			
		};
		class short: short{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class medium: medium{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
		class far: far{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType{
				soundSetShot[] = {"PSMG34_Sets","Medium_Reflection_Capped_SoundSet","SPE_rifle_med_Tail_SoundSet","SyndikatLMG_Tail_SoundSet","Squad762_BulletCasings_Sets"};
			};
		};
	};	
};
