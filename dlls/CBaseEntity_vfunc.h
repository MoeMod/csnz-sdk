int __thiscall (*CBaseEntity::pf0)(CBaseEntity *this);
int __thiscall (*CBaseEntity::pf1)(CBaseEntity *this, int a2);
void __thiscall (*CBaseEntity::Spawn)(CBaseEntity *this);
void __thiscall (*CBaseEntity::Precache)(CBaseEntity *this);
void __thiscall (*CBaseEntity::Restart)(CBaseEntity* this);
void __thiscall (*CBaseEntity::KeyValue)(CBaseEntity *this, void *pkvd);
int __thiscall (*CBaseEntity::Save)(CBaseEntity *this, void *save);
int __thiscall (*CBaseEntity::Restore)(CBaseEntity *this, void *restore);
int __thiscall (*CBaseEntity::ObjectCaps)(CBaseEntity *this);
void __thiscall (*CBaseEntity::Activate)(CBaseEntity *this);
void __thiscall (*CBaseEntity::SetObjectCollisionBox)(CBaseEntity *this);
int __thiscall (*CBaseEntity::Classify)(CBaseEntity *this);
void __thiscall (*CBaseEntity::DeathNotice)(CBaseEntity *this, entvars_t *pevChild);
void __thiscall (*CBaseEntity::TraceAttack)(CBaseEntity *this, entvars_t *pevAttacker, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType);
int CBaseEntity::TraceAttack_Proxy;
void __thiscall (*CBaseEntity::TakeDamage)(CBaseEntity *this, entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType);
void __thiscall (*CBaseEntity::TakeHealth)(CBaseEntity *this, float flHealth, int bitsDamageType);
void __thiscall (*CBaseEntity::Killed)(CBaseEntity *this, entvars_t *pevAttacker, int iGib);
int __thiscall (*CBaseEntity::BloodColor)(CBaseEntity *this);
void __thiscall (*CBaseEntity::TraceBleed)(CBaseEntity *this, float flDamage, Vector vecDir, TraceResult *ptr, int bitsDamageType);
void __thiscall (*CBaseEntity::IsTriggered)(CBaseEntity *this, CBaseEntity *pActivator);
CBaseMonster * __thiscall (*CBaseEntity::MyMonsterPointer)(CBaseEntity *this);
CSquadMonster * __thiscall (*CBaseEntity::MySquadMonsterPointer)(CBaseEntity *this);
int __thiscall (*CBaseEntity::GetToggleState)(CBaseEntity *this);
void __thiscall (*CBaseEntity::AddPoints)(CBaseEntity *this, int score, BOOL bAllowNegativeScore);
void __thiscall (*CBaseEntity::AddPointsToTeam)(CBaseEntity *this, int score, BOOL bAllowNegativeScore);
BOOL __thiscall (*CBaseEntity::AddPlayerItem)(CBaseEntity *this, CBasePlayerItem *pItem);
BOOL __thiscall (*CBaseEntity::RemovePlayerItem)(CBaseEntity *this, CBasePlayerItem *pItem);
int __thiscall (*CBaseEntity::GiveAmmo)(CBaseEntity *this, int iAmount, char *szName, int iMax);
float __thiscall (*CBaseEntity::GetDelay)(CBaseEntity *this);
int __thiscall (*CBaseEntity::IsMoving)(CBaseEntity *this);
void __thiscall (*CBaseEntity::OverrideReset)(CBaseEntity *this);
int __thiscall (*CBaseEntity::DamageDecal)(CBaseEntity *this, int bitsDamageType);
void __thiscall (*CBaseEntity::SetToggleState)(CBaseEntity *this, int iState);
void __thiscall (*CBaseEntity::StartSneaking)(CBaseEntity *this);
void __thiscall (*CBaseEntity::StopSneaking)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::OnControls)(CBaseEntity *this, entvars_t *onpev);
BOOL __thiscall (*CBaseEntity::IsSneaking)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::IsAlive)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::IsBSPModel)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::ReflectGauss)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::HasTarget)(CBaseEntity *this, string_t targetname);
BOOL __thiscall (*CBaseEntity::IsInWorld)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::IsPlayer)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::IsNetClient)(CBaseEntity *this);
const char * __thiscall (*CBaseEntity::TeamID)(CBaseEntity *this);
int __thiscall (*CBaseEntity::pf46[2])(CBaseEntity* this, ...);
void __thiscall (*CBaseEntity::GetKnockbackData)(CBaseEntity* this, float *a, float *b, float *c, float *d, float*flVelocityModifier, BYTE *type);
int __thiscall (*CBaseEntity::pf49[4])(CBaseEntity* this, ...);
CBaseEntity * __thiscall (*CBaseEntity::GetNextTarget)(CBaseEntity *this);
void __thiscall (*CBaseEntity::Think)(CBaseEntity *this);
void __thiscall (*CBaseEntity::Touch)(CBaseEntity *this, CBaseEntity *pOther);
void __thiscall (*CBaseEntity::Use)(CBaseEntity *this, CBaseEntity *pActivator, CBaseEntity *pCaller, USE_TYPE useType, float value);
void __thiscall (*CBaseEntity::Blocked)(CBaseEntity *this, CBaseEntity *pOther);
int __thiscall (*CBaseEntity::pf57[5])(CBaseEntity* this, ...);
CBaseEntity * __thiscall (*CBaseEntity::Respawn)(CBaseEntity *this);
Vector *__thiscall (*CBaseEntity::Center)(CBaseEntity *this, Vector *ret);
Vector *__thiscall (*CBaseEntity::EyePosition)(CBaseEntity *this, Vector *ret);
Vector *__thiscall (*CBaseEntity::EarPosition)(CBaseEntity *this, Vector *ret);
Vector *__thiscall (*CBaseEntity::BodyTarget)(CBaseEntity *this, const Vector *posSrc);
int __thiscall (*CBaseEntity::pf67)(CBaseEntity* this, ...);
int __thiscall (*CBaseEntity::Illumination)(CBaseEntity *this);
BOOL __thiscall (*CBaseEntity::FVisibleV)(CBaseEntity *this, const Vector *vecOrigin);
BOOL __thiscall (*CBaseEntity::FVisibleE)(CBaseEntity *this, CBaseEntity *pEntity);
int __thiscall (*CBaseEntity::pf71[11])(CBaseEntity* this, ...);