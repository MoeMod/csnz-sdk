

// This structure is sent over the net to describe a screen shake event
typedef struct
{
	unsigned short amplitude;		// FIXED 4.12 amount of shake
	unsigned short duration;		// FIXED 4.12 seconds duration
	unsigned short frequency;		// FIXED 8.8 noise frequency (low frequency is a jerk,high frequency is a rumble)

} ScreenShake;

enum ScreenFadeFlags : short
{
	FFADE_IN = 0x0000,		// Just here so we don't pass 0 into the function
	FFADE_OUT = 0x0001,		// Fade out (not in)
	FFADE_MODULATE = 0x0002,		// Modulate (don't blend)
	FFADE_STAYOUT = 0x0004,		// ignores the duration, stays faded out until new ScreenFade message received
	FFADE_LONGFADE = 0x0008,		// used to indicate the fade can be longer than 16 seconds (added for czero)
};

// This structure is sent over the net to describe a screen fade event
typedef struct
{
	unsigned short duration;		// FIXED 4.12 seconds duration
	unsigned short holdTime;		// FIXED 4.12 seconds duration until reset (fade & hold)
	ScreenFadeFlags fadeFlags;			// flags
	byte r,g,b,a;				// fade to color ( max alpha )

} ScreenFade;