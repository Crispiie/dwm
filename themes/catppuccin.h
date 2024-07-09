static const char col_gray1[]       = "#cdd6f4";
static const char col_gray2[]       = "#1e1e2e";
static const char col_gray3[]       = "#282737";
static const char col_gray4[]       = "#74c7ec";
static const char col_gray5[]       = "#f5e0dc";
static const char col_urgborder[]   = "#89b4fa";
static const char col_cyan[]        = "#89dceb";

static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_gray1,  col_gray5  },
	[SchemeUrg]  = { col_gray4, col_cyan,  col_urgborder  },

};
