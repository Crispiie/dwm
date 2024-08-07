static const char col_gray1[]       = "#1D2330"; // foreground (text color) in the normal state
static const char col_gray2[]       = "#4B5665"; // background color in the normal state
static const char col_gray3[]       = "#53cf97"; // border color in the normal state
static const char col_gray4[]       = "#ffffff"; // foreground (text color) in the selected state
static const char col_gray5[]       = "#53cf97"; // background color in the selected state
static const char col_cyan[]        = "#388c66"; // border color in the selected state

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_gray5  },
};
