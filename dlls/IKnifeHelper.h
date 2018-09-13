struct KnifeSoundInfo // sizeof == 84
{
	const char *szSoundDeploy;
	int iSoundSlashNum;
	const char *szSoundSlash[4];
	int iSoundHitWallNum;
	const char *szSoundHitWall[4];
	int iSoundStabNum;
	const char *szSoundStab[4];
	int iSoundHitNum;
	const char *szSoundHit[4];
};

struct KnifeModelInfo // sizeof == 28
{
	const char *v_model;
	const char *p_model;
	const char *v_model2;
	const char *p_model2;
	const char *szAnimExtension;
	float flDeployTime;
	int flDeployNextIdleTime;
};

struct IKnifeHelper;

struct IKnifeHelper_vfunc
{
	BOOL __thiscall (*IKnifeHelper::Deploy)(IKnifeHelper* this, CKnife *knife);
	BOOL __thiscall (*IKnifeHelper::CanHolster)(IKnifeHelper* this, CKnife *knife);
	void __thiscall (*IKnifeHelper::Holster)(IKnifeHelper* this, CKnife *knife, int skiplocal);
	void __thiscall (*IKnifeHelper::WeaponIdle)(IKnifeHelper* this, CKnife *knife);
	void __thiscall (*IKnifeHelper::PrimaryAttack)(IKnifeHelper* this, CKnife *knife);
	void __thiscall (*IKnifeHelper::SecondaryAttack)(IKnifeHelper* this, CKnife *knife);
	void __thiscall (*IKnifeHelper::DelayPrimaryAttack)(IKnifeHelper* this, CKnife *knife);
	void __thiscall (*IKnifeHelper::DelaySecondaryAttack)(IKnifeHelper* this, CKnife *knife);
	BOOL __thiscall (*IKnifeHelper::UseDecrement)(IKnifeHelper* this, CKnife *knife); // always return 0
	void __thiscall (*IKnifeHelper::ScaleDamagePrimaryAttack)(IKnifeHelper* this, CKnife *, float in, float &out);
	void __thiscall (*IKnifeHelper::ScaleDamageSecondaryAttack)(IKnifeHelper* this, CKnife *, float in, float &out);
	void __thiscall (*IKnifeHelper::GetPrimaryAttackDistance)(IKnifeHelper* this, CKnife *knife); // null, called from CKnife::PrimaryAttack
	void __thiscall (*IKnifeHelper::GetSecondaryAttackDistance)(IKnifeHelper* this, CKnife *knife); // null
	void __thiscall (*IKnifeHelper::GetKnockBackData)(IKnifeHelper* this, CKnife *knife); // GetKnockBackData from hw??
	void __thiscall (*IKnifeHelper::ph14)(IKnifeHelper* this, CKnife *knife); // null
	void __thiscall (*IKnifeHelper::ph15)(IKnifeHelper* this, CKnife *knife); // null
	void __thiscall (*IKnifeHelper::ph16)(IKnifeHelper* this, CKnife *knife); // null
	void __thiscall (*IKnifeHelper::AddToPlayer)(IKnifeHelper* this, CKnife *knife);// 
	void __thiscall (*IKnifeHelper::ItemPostFrame)(IKnifeHelper* this, CKnife *knife); // null 
	void __thiscall (*IKnifeHelper::ph19)(IKnifeHelper* this, CKnife *knife); // null*/
};

struct IKnifeHelper
{
	IKnifeHelper_vfunc *vfptr;
	// TBD
};