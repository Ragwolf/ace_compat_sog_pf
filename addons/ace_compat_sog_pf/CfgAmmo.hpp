class CfgAmmo
{
	class vn_grenadehand;

	// Disable molotov frag effects
	class vn_molotov_grenade_ammo: vn_grenadehand
	{
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
};
