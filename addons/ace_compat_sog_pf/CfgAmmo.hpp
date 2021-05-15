class CfgAmmo
{
	class vn_grenadehand;

	// Disable frag effects for Grenade (Molotov Cocktail)
	class vn_molotov_grenade_ammo: vn_grenadehand
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};

	// Disable frag effects for Grenade M7A3 (CS Gas)
	class vn_m7_grenade_mag: vn_grenadehand
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};

	// Disable frag effects for Grenade M34 (WP)
	class vn_m34_grenade_mag: vn_grenadehand
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
};
