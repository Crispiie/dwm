
static const char col_gray1[]       = "#1D1D2D";  // Background color
static const char col_gray2[]       = "#282737";  // Unfocused window border
static const char col_gray3[]       = "#95CCFA";  // Foreground color (unfocused)
static const char col_gray4[]       = "#F18EAC";  // Selected foreground color (focused)
static const char col_cyan[]        = "#6272a4";  // Background color for urgent windows
static const char col_gray5[]       = "#DCB5F1";  // Focused window border (pink)

static const char *colors[][3]      = {
    /*               fg             bg             border   */
    [SchemeNorm] = { col_gray3,     col_gray1,     col_gray2 },
    [SchemeSel]  = { col_gray4,     col_gray1,     col_gray5 },
};
