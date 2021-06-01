class CfgWeapons
{
	// Remove backblast from M127 Flare Launcher
	class vn_Launcher_Base_F;
	class vn_m127: vn_Launcher_Base_F
	{
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 0;
		ace_overpressure_range = 0;
	};

	#define HEARING_PROTECTION_OPEN ace_hearing_protection = 0; ace_hearing_lowerVolume = 0;
    #define HEARING_PROTECTION_VICCREW ace_hearing_protection = 0.85; ace_hearing_lowerVolume = 0.6;
    #define HEARING_PROTECTION_EARMUFF ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0.5;
    #define HEARING_PROTECTION_PELTOR ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0;

	class vn_b_headgear_base;

	// APH6 Helmets
	class vn_b_helmet_aph6_01_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_EARMUFF
	};

	class vn_b_helmet_aph6_02_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_EARMUFF
	};

	// SVH4 Helmets
	class vn_b_helmet_svh4_01_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_EARMUFF
	};

	class vn_b_helmet_svh4_02_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_EARMUFF
	};

	// T56 Helmets
	class vn_b_helmet_t56_01_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_VICCREW
	};

	class vn_b_helmet_t56_02_01: vn_b_headgear_base
	{
		HEARING_PROTECTION_VICCREW
	};

	class vn_o_headgear_base;

	// SHL61 Helmets
	class vn_o_helmet_shl61_01: vn_o_headgear_base
	{
		HEARING_PROTECTION_VICCREW
	};

	// TSH3 Helmets
	class vn_o_helmet_tsh3_01: vn_o_headgear_base
	{
		HEARING_PROTECTION_VICCREW
	};

	// ZSH03 Helmets
	class vn_o_helmet_zsh3_01: vn_o_headgear_base
	{
		HEARING_PROTECTION_EARMUFF
	};

	class vn_b_uniform_base;
	class vn_b_uniform_heli_01_01: vn_b_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};

	class vn_b_uniform_k2b_01_01: vn_b_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};

	class vn_b_uniform_k2b_01_02: vn_b_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};

	class vn_b_uniform_k2b_02_01: vn_b_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};

	class vn_b_uniform_k2b_02_02: vn_b_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};

	class vn_o_uniform_base;
	class vn_o_uniform_nva_air_01: vn_o_uniform_base
	{
		ACE_GForceCoef = 0.8;
	};
};
