#include "CBaseMonster_vfunc.h"

int __thiscall (*CBasePlayer::pf83)(CBasePlayer* this);
void __thiscall (*CBasePlayer::HurtSound)(CBasePlayer* this, BOOL bIsHeadShot, BOOL bHasKevlar);
void __thiscall (*CBasePlayer::Jump)(CBasePlayer* this);
void __thiscall (*CBasePlayer::Duck)(CBasePlayer* this);
void __thiscall (*CBasePlayer::PreThink)(CBasePlayer* this);
void __thiscall (*CBasePlayer::PostThink)(CBasePlayer* this);
void __thiscall (*CBasePlayer::GetGunPosition)(CBasePlayer* this);
void __thiscall (*CBasePlayer::IsBot)(CBasePlayer* this);
int __thiscall (*CBasePlayer::pf91)(CBasePlayer* this, ...);
void __thiscall (*CBasePlayer::UpdateClientData)(CBasePlayer* this);
void __thiscall (*CBasePlayer::DeathSound)(CBasePlayer* this);
void __thiscall (*CBasePlayer::SetAnimation)(CBasePlayer* this, PLAYER_ANIM playerAnim);
void __thiscall (*CBasePlayer::ImpulseCommands)(CBasePlayer* this);
void __thiscall (*CBasePlayer::RoundRespawn)(CBasePlayer* this);
void __thiscall (*CBasePlayer::GetAutoaimVector)(CBasePlayer* this, CBasePlayer* pOther, float fAngle);
void __thiscall (*CBasePlayer::Blind)(CBasePlayer* this, float, float, float, int);
void __thiscall (*CBasePlayer::OnTouchingWeapon)(CBasePlayer* this, CWeaponBox*);
void __thiscall (*CBasePlayer::UpdateNvg)(CBasePlayer* this);
bool __thiscall (*CBasePlayer::GetSth618)(CBasePlayer* this);
void __thiscall (*CBasePlayer::SetSth618)(CBasePlayer* this, bool value);
