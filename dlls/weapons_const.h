#define MAX_WEAPONS			32
#define MAX_NORMAL_BATTERY		100.0f

#define ITEM_FLAG_SELECTONEMPTY		1
#define ITEM_FLAG_NOAUTORELOAD		2
#define ITEM_FLAG_NOAUTOSWITCHEMPTY	4
#define ITEM_FLAG_LIMITINWORLD		8
#define ITEM_FLAG_EXHAUSTIBLE		16	// A player can totally exhaust their ammo supply and lose this weapon

#define WEAPON_IS_ONTARGET		0x40

#define ARMOR_TYPE_EMPTY		0
#define ARMOR_TYPE_KEVLAR		1	// Armor
#define ARMOR_TYPE_HELMET		2	// Armor and helmet

// the maximum amount of ammo each weapon's clip can hold
#define WEAPON_NOCLIP			-1

#define LOUD_GUN_VOLUME			1000
#define NORMAL_GUN_VOLUME		600
#define QUIET_GUN_VOLUME		200

#define BRIGHT_GUN_FLASH		512
#define NORMAL_GUN_FLASH		256
#define DIM_GUN_FLASH			128

#define BIG_EXPLOSION_VOLUME		2048
#define NORMAL_EXPLOSION_VOLUME		1024
#define SMALL_EXPLOSION_VOLUME		512

#define WEAPON_ACTIVITY_VOLUME		64

// spawn flags
#define SF_DETONATE			0x0001	// Grenades flagged with this will be triggered when the owner calls detonateSatchelCharges

// custom enum
enum ArmouryItemPack
{
	ARMOURY_MP5NAVY,
	ARMOURY_TMP,
	ARMOURY_P90,
	ARMOURY_MAC10,
	ARMOURY_AK47,
	ARMOURY_SG552,
	ARMOURY_M4A1,
	ARMOURY_AUG,
	ARMOURY_SCOUT,
	ARMOURY_G3SG1,
	ARMOURY_AWP,
	ARMOURY_M3,
	ARMOURY_XM1014,
	ARMOURY_M249,
	ARMOURY_FLASHBANG,
	ARMOURY_HEGRENADE,
	ARMOURY_KEVLAR,
	ARMOURY_ASSAULT,
	ARMOURY_SMOKEGRENADE,
};

struct ItemInfo
{
	int iSlot;
	int iPosition;
	const char *pszAmmo1;
	int iMaxAmmo1;
	const char *pszAmmo2;
	int iMaxAmmo2;
	const char *pszName;
	int iMaxClip;
	int iId;
	int iFlags;
	int iWeight;
};

struct AmmoInfo
{
	const char *pszName;
	int iId;
};

struct MULTIDAMAGE
{
	CBaseEntity *pEntity;
	float amount;
	int type;
};
