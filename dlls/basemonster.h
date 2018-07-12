struct CBaseMonster_vfunc
{
	#include "CBaseMonster_vfunc.h"
};

struct CBaseMonster
{
	CBaseMonster_vfunc *vfptr;
	#include "CBaseMonster_pdata.h"
};