struct EHANDLE
{
  edict_t *m_pent;
  int m_serialnumber;
};


struct CBaseEntity
{
  void *vfptr;
  entvars_t *pev;
  CBaseEntity *m_pGoalEnt;
  CBaseEntity *m_pLink;
  int ph4;
  int ph5;
  int ph6;
  int ph7;
  void *m_pfnThink;
  void *m_pfnTouch;
  void *m_pfnUse;
  void *m_pfnBlocked;
  float m_flStartThrow;
  float m_flReleaseThrow; // ok
  int m_iSwing; // ok
  bool has_disconnected; // ok
  TeamName m_iTeam;
  int m_LastHitGroup;
  int ph18;
  int ph19;
  int ph20;
};

struct CBaseDelay : CBaseEntity
{
  float m_flDelay;  // ok
  int m_iszKillTarget;  // ok
};

struct CBaseAnimating : CBaseDelay
{
  float m_flFrameRate; // ok
  float m_flGroundSpeed; // ok
  float m_flLastEventCheck;
  BOOL m_fSequenceFinished;
  BOOL m_fSequenceLoops;
};

struct CBaseToggle : CBaseAnimating
{
  TOGGLE_STATE m_toggle_state;
  float m_flActivateFinished;
  float m_flMoveDistance;
  float m_flWait;
  float m_flLip;
  float m_flTWidth;
  float m_flTLength;
  Vector m_vecPosition1;
  Vector m_vecPosition2;
  Vector m_vecAngle1;
  Vector m_vecAngle2;
  int m_cTriggersLeft;
  float m_flHeight;
  EHANDLE m_hActivator;
  void *m_pfnCallWhenMoveDone;
  Vector m_vecFinalDest;
  Vector m_vecFinalAngle;
  int m_bitsDamageInflict;
  string_t m_sMaster; // ok
};
