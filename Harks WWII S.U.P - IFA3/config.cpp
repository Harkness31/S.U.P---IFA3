class CfgPatches {
	class Harks_WWII_SUP_COMPAT_IFA3 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS_AMZ_grenadeimpacts","PS_AMZ_ifa3config","SIG_Sounds","WW2_Assets_c_Characters_XXX_LoadOrder_c", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Germans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Soviets", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Americans", "WW2_Assets_c_Characters_XXX_LoadOrder_c_British", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Polish", "WW2_Assets_c_Characters_XXX_LoadOrder_c_Civilians", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Cars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArmoredCars", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Trucks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_MediumTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_HeavyTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirTanks", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_WheeledAPCs", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_FighterPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_TransportPlanes", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Boats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_LandingBoats", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_Ships", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiTankGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_AntiAirGuns", "WW2_Assets_c_Vehicles_XXX_LoadOrder_c_ArtilleryGuns"};
		authors[] = {"Sigliskovich","Harkness31"};		
	};
};

class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons{
	class Rifle_Short_Base_F;
	class LIB_SMG: Rifle_Short_Base_F{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};		
	};
	class Rifle_Base_F;
	class LIB_RIFLE: Rifle_Base_F{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
	};	
	class Rifle_Long_Base_F;
	class LIB_LMG: Rifle_Long_Base_F{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
	};
	class MGun;
	class LIB_MLMG_base: MGun{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
	};	
	class LIB_TankMGun_base: MGun{
		caseless[] = {"", 1, 1, 1};
		soundBullet[] = {"caseless", 1};
	};	
};
class CfgAmmo{
	class GrenadeBase;	
	class LIB_Grenade_base: GrenadeBase{
		SoundSetExplosion[] = {"Sig_expl_grenade_SoundSet", "Sig_Refl_Expl_small_SoundSet", "Explosion_Debris_SoundSet"};
	};
};