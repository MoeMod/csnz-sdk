#include "CBaseToggle_pdata.h"

Activity m_Activity;
Activity m_IdealActivity;
//int m_LastHitGroup; // moved to CBaseEntity
int m_bitsDamageType;
BYTE m_rgbTimeBasedDamage[8];
MONSTERSTATE m_MonsterState;
MONSTERSTATE m_IdealMonsterState;
int m_afConditions;
int m_afMemory;
float m_flNextAttack;
EHANDLE m_hEnemy;
EHANDLE m_hTargetEnt;
float m_flFieldOfView;
int m_bloodColor; // ok
Vector m_HackedGunPos;
Vector m_vecEnemyLKP;
int ph82;
int m_iGaitsequence;
float m_flGaitframe;
int ph85;
float m_flGaityaw;
Vector m_prevgaitorigin;
float m_flPitch;
float m_flYaw;
float m_flGaitMovement;
float m_flYawModifier;