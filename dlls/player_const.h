typedef enum
{
	PLAYER_IDLE,
	PLAYER_WALK,
	PLAYER_JUMP,
	PLAYER_SUPERJUMP,
	PLAYER_DIE,
	PLAYER_ATTACK1,
	PLAYER_ATTACK2,
	PLAYER_FLINCH,
	PLAYER_LARGE_FLINCH,
	PLAYER_RELOAD,
	PLAYER_HOLDBOMB

} PLAYER_ANIM;

typedef enum
{
	Menu_OFF,
	Menu_ChooseTeam,
	Menu_IGChooseTeam,
	Menu_ChooseAppearance,
	Menu_Buy,
	Menu_BuyPistol,
	Menu_BuyRifle,
	Menu_BuyMachineGun,
	Menu_BuyShotgun,
	Menu_BuySubMachineGun,
	Menu_BuyItem,
	Menu_Radio1,
	Menu_Radio2,
	Menu_Radio3,
	Menu_ClientBuy

} _Menu;

typedef enum
{
	MODEL_UNASSIGNED,
	MODEL_URBAN,
	MODEL_TERROR,
	MODEL_LEET,
	MODEL_ARCTIC,
	MODEL_GSG9,
	MODEL_GIGN,
	MODEL_SAS,
	MODEL_GUERILLA,
	MODEL_VIP,
	MODEL_MILITIA,
	MODEL_SPETSNAZ

} ModelName;

typedef enum
{
	JOINED,
	SHOWLTEXT,
	READINGLTEXT,
	SHOWTEAMSELECT,
	PICKINGTEAM,
	GETINTOGAME

} JoinState;

typedef enum
{
	CMD_SAY = 0,
	CMD_SAYTEAM,
	CMD_FULLUPDATE,
	CMD_VOTE,
	CMD_VOTEMAP,
	CMD_LISTMAPS,
	CMD_LISTPLAYERS,
	CMD_NIGHTVISION,
	COMMANDS_TO_TRACK,

} TrackCommands;

typedef struct
{
	short m_primaryWeapon;
	short m_primaryAmmo;
	short m_secondaryWeapon;
	short m_secondaryAmmo;
	short m_heGrenade;
	short m_flashbang;
	short m_smokeGrenade;
	short m_defuser;
	short m_nightVision;
	short m_armor;

} RebuyStruct;

typedef enum
{
	THROW_NONE,
	THROW_FORWARD,
	THROW_BACKWARD,
	THROW_HITVEL,
	THROW_BOMB,
	THROW_GRENADE,
	THROW_HITVEL_MINUS_AIRVEL

} ThrowDirection;

enum sbar_data
{
	SBAR_ID_TARGETTYPE = 1,
	SBAR_ID_TARGETNAME,
	SBAR_ID_TARGETHEALTH,
	SBAR_END
};

typedef enum
{
	SILENT,
	CALM,
	INTENSE

} MusicState;

/* 
	* How to find MAX_AMMO_SLOTS?
	1. find gmsgAmmoX by searching "AmmoX" and get into LinkUserMessages
	2. press X and get into the other function
	3. and that function is CBasePlayer::SendAmmoUpdate
	4. MAX_AMMO_SLOTS is the number that appears in while(v3 < 120), etc.
	
	void CBasePlayer::SendAmmoUpdate()
	{
		for (int i = 0; i < MAX_AMMO_SLOTS; ++i)
		{
			if (m_rgAmmo[i] != m_rgAmmoLast[i])
			{
				m_rgAmmoLast[i] = m_rgAmmo[i];

				// send "Ammo" update message
				MESSAGE_BEGIN(MSG_ONE, gmsgAmmoX, NULL, pev);
					WRITE_BYTE(i);
					WRITE_BYTE(Q_max(Q_min(m_rgAmmo[i], 254), 0)); // clamp the value to one byte
				MESSAGE_END();
			}
		}
	}
	
*/
#define MAX_AMMO_SLOTS 120