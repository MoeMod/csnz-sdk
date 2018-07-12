struct WeaponData // sizeof == 0x6C
{
	int idx;
	const char *name_lower;
	const char *NAME_UPPER;
	const char *classname;
	const char *v_model;
	const char *p_model;
	const char *w_model;
	int ph7;
	int ph8;
	int clip;
	int weight;
	int slot; // primary=1, secondary=2
	int position; // ?
	float armor_ratio;
	float max_speed;
	int ph15;
	int ph16;
	int ph17; // -1
	float knockback[4];
	float velocitymodifier;
	int ph23;
	int ph24;
	int ph25;
	int ph26;
};