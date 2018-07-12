
#include "monsterevent.h"

struct EHANDLE
{
  edict_t *m_pent;
  int m_serialnumber;
};

struct CSquadMonster;

struct CBaseEntity_vfunc
{
#include "CBaseEntity_vfunc.h"
};
struct CBaseEntity
{
CBaseEntity_vfunc *vfptr;
#include "CBaseEntity_pdata.h"
};

struct CPointEntity : CBaseEntity{};

struct CBaseDelay
{
	CBaseEntity_vfunc *vfptr;
#include "CBaseDelay_pdata.h"
};

struct CBaseAnimating_vfunc
{
#include "CBaseAnimating_vfunc.h"
};
struct CBaseAnimating
{
	CBaseAnimating_vfunc *vfptr;
#include "CBaseAnimating_pdata.h"
};

struct CBaseToggle
{
	CBaseAnimating_vfunc *vfptr;
#include "CBaseToggle_pdata.h"
};
