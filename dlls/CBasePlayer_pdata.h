#include "CBaseMonster_pdata.h"
int random_seed; // ok
unsigned __int16 m_usPlayerBleed;
EHANDLE m_hObserverTarget; // ok
float m_flNextObserverInput;
int m_iObserverWeapon; // ok
int ph100;
int ph101;
int m_iObserverC4State; // ok
bool m_bObserverHasDefuser;
int m_iObserverLastMode; // ok
float m_flFlinchTime;
float m_flAnimTime;
bool m_bHighDamage;
float m_flVelocityModifier; // ok
int m_iLastZoom;
bool m_bResumeZoom;
float m_flEjectBrass;
int m_iKevlar; // ok
int ph113_m_iTeam;
bool m_bNotKilled;
int m_iAccount;  // ok
bool m_bHasPrimary;
float m_flDeathThrowTime;
int m_iThrowDirection;
float m_flLastTalk;
bool m_bJustConnected;
bool m_bContextHelp;
JoinState m_iJoiningState;	// ok
CBaseEntity *m_pIntroCamera;	// ok
float m_fIntroCamTime;
float m_fLastMovement;
bool m_bMissionBriefing;
bool m_bTeamChanged;
ModelName m_iModelName;	// ok
int m_iTeamKills;
int m_iIgnoreGlobalChat;
bool m_bHasNightVision;	// maybe
bool m_bNightVisionOn;
Vector m_vRecentPath[20];
float m_flIdleCheckTime;
float m_flRadioTime;
int m_iRadioMessages;
bool m_bIgnoreRadio;
bool m_bHasC4;
bool m_bHasDefuser;
bool m_bKilledByBomb;
Vector m_vBlastVector;
bool m_bKilledByGrenade;
char m_hintMessageQueue[24];
int m_flDisplayHistory;
int m_iMenu;	// maybe
int m_iChaseTarget;
CBaseEntity *m_pChaseTarget;
float m_fCamSwitch;
bool m_bEscaped;
bool m_bIsVIP;
float m_tmNextRadarUpdate;
Vector m_vLastOrigin;
int m_iCurrentKickVote;
float m_flNextVoteTime;
bool m_bJustKilledTeammate;
int m_iHostagesKilled;	// maybe
int m_iMapVote;	// maybe
bool m_bCanShoot;
float m_flLastFired;
float m_flLastAttackedTeammate;
bool m_bHeadshotKilled;
bool m_bPunishedForTK;
bool m_bReceivesNoMoneyNextRound;
int m_iTimeCheckAllowed;
bool m_bHasChangedName;
char m_szNewName[32];	// ok
bool m_bIsDefusing;
float m_tmHandleSignals;
int m_flSignal;
int m_flState;
edict_t *m_pentCurBombTarget;	// ok
int ph237;
int m_iPlayerSound;
int m_iTargetVolume;	// ok
int m_iWeaponVolume;	// ok
int m_iExtraSoundTypes;
int m_iWeaponFlash;	// ok
float m_flStopExtraSoundTime;
float m_flFlashLightTime;
int m_iFlashBattery;	// ok
int m_afButtonLast;	// ok
int m_afButtonPressed;	// ok
int m_afButtonReleased;	// ok
int ph249;
edict_t *m_pentSndLast; // ok
float m_flSndRoomtype;
float m_flSndRange; // ok
float m_flFallVelocity;
int m_rgItems[4];
int m_fNewAmmo;
unsigned int m_afPhysicsFlags; // ok
float m_fNextSuicideTime;
float m_flTimeStepSound;
float m_flTimeWeaponIdle;
float m_flSwimTime;
float m_flDuckTime;
float m_flWallJumpTime;
float m_flSuitUpdate;
int m_rgSuitPlayList[4];
int m_iSuitPlayNext; // ok
//int m_rgiSuitNoRepeat[32]; // no xref
//float m_rgflSuitNoRepeatTime[32];
int m_lastDamageAmount; // -> m_rgiSuitNoRepeat[0]
float m_tbdPrev;
float m_flgeigerRange;
float m_flgeigerDelay;
int m_igeigerRangePrev;
int m_iStepLeft;
char m_szTextureName[17];
char m_chTextureType;
int m_idrowndmg;
int m_idrownrestored;
int m_bitsHUDDamage;
BOOL m_fInitHUD;
BOOL m_fGameHUDInitialized;
int m_iTrain;	// ok
BOOL m_fWeapon;
EHANDLE m_pTank;
float m_fDeadTime;	// ok
BOOL m_fNoPlayerSound;
BOOL m_fLongJump;
float m_tSneaking;
int m_iUpdateTime;
int m_iClientHealth;
int m_iClientMaxHealth; // added
int m_iClientBattery;
int m_iClientMaxBattery; // added
int m_iHideHUD;
int m_iClientHideHUD;
int m_iFOV;
int m_iClientFOV; // ok
int m_iNumSpawns;
CBaseEntity *m_pObserver;
CBasePlayerItem *m_rgpPlayerItems[6];	// ok
CBasePlayerItem *m_pActiveItem;	// ok
CBasePlayerItem *m_pClientActiveItem;
CBasePlayerItem *m_pLastItem; // ok
int ph316;
int ph317;
int m_rgAmmo[MAX_AMMO_SLOTS];
int m_rgAmmoLast[MAX_AMMO_SLOTS];
Vector m_vecAutoAim;
BOOL m_fOnTarget; 
int m_iDeaths; // ojbk
int m_izSBarState[4]; // ok
// fuck here
int ph567;
int ph568;
int ph569;
float m_flNextSBarUpdateTime; // ok
float m_flStatusBarDisappearDelay;
// char m_SbarString0[128]; // removed?
int m_lastx;
int m_lasty;
int m_nCustomSprayFrames;	// ok
float m_flNextDecalTime;	// ojbk
char m_szTeamName[16];	// likely no use

int phs576[543];

short m_modelIndexPlayer;	// ojbk
byte phb4492[15];

char m_szAnimExtention[32];	// ojbk
//int m_iGaitsequence;  // moved to CBaseMonster
//float m_flGaitframe;  // moved to CBaseMonster
//float m_flGaityaw;  // moved to CBaseMonster
//Vector m_prevgaitorigin;  // moved to CBaseMonster
//float m_flPitch;
//float m_flYaw;
//float m_flGaitMovement;  // moved to CBaseMonster
int m_iAutoWepSwitch;	//ojbk 
bool m_bVGUIMenus;
bool m_bShowHints;
//bool m_bShieldDrawn;	// removed
//bool m_bOwnsShield;	// removed
bool m_bWasFollowing;
float m_flNextFollowTime;
//float m_flYawModifier;  // moved to CBaseMonster
float m_blindUntilTime;
float m_blindStartTime;
float m_blindHoldTime;
float m_blindFadeTime;
int m_blindAlpha;	// ok
float m_allowAutoFollowTime;
char m_autoBuyString[256];	
char *m_rebuyString;	// ok
int ph1209[65];
RebuyStruct m_rebuyStruct;	// ok
bool m_bIsInRebuy;
int ph1281[6];
float m_flLastUpdateTime;	// ok
char m_lastLocation[32];	// ok
float m_progressStart;	// ok
float m_progressEnd;	// ok
bool m_bObserverAutoDirector;
bool m_canSwitchObserverModes;
float m_heartBeatTime;
float m_intenseTimestamp;
float m_silentTimestamp;
MusicState m_musicState;
float m_flLastCommandTime[8]; // ?
string_t m_sMaster_;
int ph1312[225];
int m_iKnifeId;
int ends[676];