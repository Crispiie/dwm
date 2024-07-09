static const char col_gray1[]       = "#282a36";
static const char col_gray2[]       = "#282a36";
static const char col_gray3[]       = "#ff79c6";
static const char col_gray4[]       = "#ffb86c";
static const char col_cyan[]        = "#6272a4";
static const char col_gray5[]       = "#bd93f9";
static const char col_urgborder[]   = "#ff5555";

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_gray1,  col_gray5  },
	[SchemeUrg]  = { col_gray4, col_cyan,  col_urgborder  },

};
