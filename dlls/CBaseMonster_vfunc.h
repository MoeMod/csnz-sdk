#include "CBaseToggle_vfunc.h"

float __thiscall(* CBaseMonster::ChangeYaw)(CBaseMonster* this, int speed);
BOOL __thiscall(* CBaseMonster::HasHumanGibs)(CBaseMonster* this);
BOOL __thiscall(* CBaseMonster::HasAlienGibs)(CBaseMonster* this);
void __thiscall(* CBaseMonster::FadeMonster)(CBaseMonster* this);
void __thiscall(* CBaseMonster::GibMonster)(CBaseMonster* this);
Activity __thiscall(* CBaseMonster::GetDeathActivity)(CBaseMonster* this);
void __thiscall(* CBaseMonster::BecomeDead)(CBaseMonster* this);
BOOL __thiscall(* CBaseMonster::ShouldFadeOnDeath)(CBaseMonster* this);
int __thiscall(* CBaseMonster::IRelationship)(CBaseMonster* this, CBaseEntity *pTarget);
void __thiscall(* CBaseMonster::PainSound)(CBaseMonster* this);
void __thiscall(* CBaseMonster::ResetMaxSpeed)(CBaseMonster* this);
void __thiscall(* CBaseMonster::ReportAIState)(CBaseMonster* this);
void __thiscall(* CBaseMonster::MonsterInitDead)(CBaseMonster* this);
int __thiscall(* CBaseMonster::Look)(CBaseMonster* this, int iDistance);
CBaseEntity * __thiscall(* CBaseMonster::BestVisibleEnemy)(CBaseMonster* this);
BOOL __thiscall(* CBaseMonster::FInViewConeE)(CBaseMonster* this, CBaseEntity *pEntity);
BOOL __thiscall(* CBaseMonster::FInViewConeV)(CBaseMonster* this, const Vector *pOrigin);
bool __thiscall(* CBaseMonster::GetPh82)(CBaseMonster* this);