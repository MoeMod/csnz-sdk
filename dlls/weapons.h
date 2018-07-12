#include "weapons_const.h"

struct CBasePlayerItem_vfunc
{
	#include "CBasePlayerItem_vfunc.h"
};
struct CBasePlayerItem
{
	void *vfptr;
	#include "CBasePlayerItem_pdata.h"
};


struct CBasePlayerWeapon_vfunc
{
	#include "CBasePlayerWeapon_vfunc.h"
};
struct CBasePlayerWeapon
{
	CBasePlayerWeapon_vfunc *vfptr;
	#include "CBasePlayerWeapon_pdata.h"
};
