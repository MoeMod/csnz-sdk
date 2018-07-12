
#include "player_const.h"

struct CBasePlayer;

struct CBasePlayer_vfunc
{
#include "CBasePlayer_vfunc.h"
};

struct CBasePlayer
{
	CBasePlayer_vfunc *vfptr;
#include "CBasePlayer_pdata.h"
}; // size = 0x2294
