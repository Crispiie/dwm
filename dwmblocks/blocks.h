//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/suckless/dwm/dwmblocks/scripts/music",		5,		12},

	{"", "~/suckless/dwm/dwmblocks/scripts/volume",		0,		10},

	{"", "~/suckless/dwm/dwmblocks/scripts/cpu",		10,		18},

	{"", "~/suckless/dwm/dwmblocks/scripts/memory",		10,		2},

	{"", "~/suckless/dwm/dwmblocks/scripts/battery",	10,		3},

	{"", "~/suckless/dwm/dwmblocks/scripts/date",		30,		4},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
