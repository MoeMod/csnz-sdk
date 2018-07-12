#include "CBaseAnimating_pdata.h"

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