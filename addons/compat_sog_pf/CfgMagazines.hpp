#define EXPLOSIVE(SETUP_OBJECT, DISPLAY_NAME)\
ace_explosives_DelayTime = 1;\
ace_explosives_Placeable = 1;\
ace_explosives_SetupObject = SETUP_OBJECT;\
displayNameShort = DISPLAY_NAME;\
useAction = 0;

#define EXPLOSIVE_TRIGGERS()\
class ACE_Triggers\
{\
	SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};\
\
	class Timer\
	{\
		FuseTime = 0.5;\
	};\
\
	class Command\
	{\
		FuseTime = 0.5;\
	};\
\
	class MK16_Transmitter: Command {};\
\
	class DeadmanSwitch: Command {};\
};

#define MINE_TRIGGERS()\
class ACE_Triggers\
{\
	SupportedTriggers[] = {"PressurePlate"};\
\
	class PressurePlate\
	{\
		digDistance = 0;\
	};\
};

#define TRIPWIRE_TRIGGERS()\
class ACE_Triggers\
{\
	SupportedTriggers[] = {"Tripwire"};\
\
	class Tripwire {};\
};

class CfgMagazines
{
	class vn_magazine;

	class vn_mine_m18_mag: vn_magazine
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M18", "M18 Claymore (Remote)")

		class ACE_Triggers
		{
			SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "PressurePlate"};

			class Timer
			{
				FuseTime = 0.5;
			};

			class Command
			{
				FuseTime = 0.5;
			};

			class MK16_Transmitter: Command {};

			class DeadmanSwitch: Command {};

			class PressurePlate
			{
				digDistance = 0;
			};
		};
	};

	class vn_mine_ammobox_range_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Ammobox", "Ammobox (booby-trapped)")
		EXPLOSIVE_TRIGGERS()
	};

	class vn_mine_m112_remote_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M112","M112 Breaching Charge")
		EXPLOSIVE_TRIGGERS()
	};

	class vn_mine_m14_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M14", "M14 Toe-popper Mine")
		MINE_TRIGGERS()
	};

	class vn_mine_m15_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M15", "M15 Anti-Tank Mine")
		MINE_TRIGGERS()
	};

	class vn_mine_m16_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M16", "M16 Bounding Mine")
		MINE_TRIGGERS()
	};

	class vn_mine_m18_range_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M18_Proximity", "M18 Claymore (Proximity)")
		MINE_TRIGGERS()
	};

	class vn_mine_m18_x3_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M18_x3", "M18 Claymore x3 (Remote)")

		class ACE_Triggers
		{
			SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch", "PressurePlate"};

			class Timer
			{
				FuseTime = 0.5;
			};

			class Command
			{
				FuseTime = 0.5;
			};

			class MK16_Transmitter: Command {};

			class DeadmanSwitch: Command {};

			class PressurePlate
			{
				digDistance = 0;
			};
		};
	};

	class vn_mine_m18_x3_range_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_M18_Proximity_x3", "M18 Claymore x3 (Proximity)")
		MINE_TRIGGERS()
	};

	class vn_mine_punji_01_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Punji_Large", "Punji Trap (Large)")
		MINE_TRIGGERS()
	};

	class vn_mine_punji_02_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Punji_Small", "Punji Trap (Small)")
		MINE_TRIGGERS()
	};

	class vn_mine_punji_03_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Punji_Whip", "Punji Trap (Whip)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_satchel_remote_02_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Satchel_Charge", "Satchel Charge")
		EXPLOSIVE_TRIGGERS()
	};

	class vn_mine_tm57_mag: vn_mine_m18_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_TM57", "TM-57 Anti-Tank Mine")
		MINE_TRIGGERS()
	};

	class vn_mine_tripwire_m16_02_mag: vn_mine_m16_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_M16_2m", "M16 Tripwire (2m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_m16_04_mag: vn_mine_tripwire_m16_02_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_M16_4m", "M16 Tripwire (4m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_arty_mag: vn_mine_tripwire_m16_02_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_Arty", "Artillery Shell Tripwire (4m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_f1_02_mag: vn_mine_tripwire_m16_02_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_F1_2m", "F-1 Tripwire (2m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_f1_04_mag: vn_mine_tripwire_f1_02_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_F1_4m", "F-1 Tripwire (4m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_m49_02_mag: vn_mine_tripwire_f1_04_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_M49_2m", "M49A1 Tripwire (2m)")
		TRIPWIRE_TRIGGERS()
	};

	class vn_mine_tripwire_m49_04_mag: vn_mine_tripwire_f1_04_mag
	{
		EXPLOSIVE("ACE_Explosives_Place_VN_Trap_M49_4m", "M49A1 Tripwire (4m)")
		TRIPWIRE_TRIGGERS()
	};
};
