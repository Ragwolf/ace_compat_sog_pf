#define EXPLOSIVE(CLASS, DISPLAY_NAME, MODEL)\
class ACE_Explosives_Place_VN_##CLASS: ACE_Explosives_Place\
{\
	displayNameShort = DISPLAY_NAME;\
	model = MODEL;\
};

class CfgVehicles
{
	class ACE_Explosives_Place;

	EXPLOSIVE(Ammobox, "Ammobox (booby-trapped)", "\vn\objects_f_vietnam\supply\a2_ammo\pavn\vn_pavn_ammo")
	EXPLOSIVE(M112, "M112 Breaching Charge", "\vn\weapons_f_vietnam\mines\m112\vn_mine_m112")
	EXPLOSIVE(M14, "M14 Toe-popper Mine", "\vn\weapons_f_vietnam\mines\m14\vn_mine_m14")
	EXPLOSIVE(M15, "M15 Anti-Tank Mine", "\vn\weapons_f_vietnam\mines\m15\vn_mine_m15")
	EXPLOSIVE(M16, "M16 Bounding Mine", "\vn\weapons_f_vietnam\mines\m16\vn_mine_m16")
	EXPLOSIVE(M18, "M18 Claymore (Remote)", "\vn\weapons_f_vietnam\mines\m18\vn_mine_m18")
	EXPLOSIVE(M18_Proximity, "M18 Claymore (Proximity)", "\vn\weapons_f_vietnam\mines\m18\vn_mine_m18")
	EXPLOSIVE(M18_x3, "M18 Claymore x3 (Remote)", "\vn\weapons_f_vietnam\mines\m18\vn_mine_m18_x3")
	EXPLOSIVE(M18_Proximity_x3, "M18 Claymore x3 (Proximity)", "\vn\weapons_f_vietnam\mines\m18\vn_mine_m18_x3")
	EXPLOSIVE(Punji_Large, "Punji Trap (Large)", "\vn\weapons_f_vietnam\mines\punji\vn_mine_punji_01")
	EXPLOSIVE(Punji_Small, "Punji Trap (Small)", "\vn\weapons_f_vietnam\mines\punji\vn_mine_punji_02")
	EXPLOSIVE(Punji_Whip, "Punji Trap (Whip)", "\vn\weapons_f_vietnam\mines\punji\vn_mine_punji_03")
	EXPLOSIVE(Satchel_Charge, "Satchel Charge", "\vn\characters_f_vietnam\OPFOR\vests\items\vn_mine_satchel_02.p3d")
	EXPLOSIVE(TM57, "TM-57 Anti-Tank Mine", "\vn\weapons_f_vietnam\mines\tm57\vn_mine_tm57")
	EXPLOSIVE(Trap_Arty, "Artillery Shell Tripwire (4m)", "\vn\weapons_f_vietnam\mines\tripwire_arty\vn_mine_tripwire_arty")
	EXPLOSIVE(Trap_F1_2m, "F-1 Tripwire (2m)", "\vn\weapons_f_vietnam\mines\tripwire_f1\vn_mine_tripwire_f1_02")
	EXPLOSIVE(Trap_F1_4m, "F-1 Tripwire (4m)", "\vn\weapons_f_vietnam\mines\tripwire_f1\vn_mine_tripwire_f1_04")
	EXPLOSIVE(Trap_M16_2m, "M16 Tripwire (2m)", "\vn\weapons_f_vietnam\mines\m16\vn_mine_tripwire_m16_02")
	EXPLOSIVE(Trap_M16_4m, "M16 Tripwire (4m)", "\vn\weapons_f_vietnam\mines\m16\vn_mine_tripwire_m16_04")
	EXPLOSIVE(Trap_M49_2m, "M49A1 Tripwire (2m)", "\vn\weapons_f_vietnam\mines\m49a1\vn_mine_m49a1_02_ammo")
	EXPLOSIVE(Trap_M49_4m, "M49A1 Tripwire (4m)", "\vn\weapons_f_vietnam\mines\m49a1\vn_mine_m49a1_04_ammo")
};
