
static const char col_gray1[]       = "#1a1b26";   // Background color
static const char col_gray2[]       = "#1a1b26";   // Unfocused window border
static const char col_gray3[]       = "#f8f8f2";   // Text color
static const char col_gray4[]       = "#f8f8f2";   // Urgent tag text
static const char col_gray5[]       = "#aaaaaa";   // Selected tag color
static const char col_cyan[]        = "#7aa2f7";   // Focused window border and selected text
static const char col_urgborder[]   = "#ff5370";   // Urgent border color

static const char *colors[][3] = {
    /*               fg         bg         border   */
    [SchemeNorm] = { col_cyan, col_gray1, col_gray2 },  // Normal windows
    [SchemeSel]  = { col_gray3, col_gray1, col_gray5 },  // Selected window
    [SchemeUrg]  = { col_gray4, col_cyan, col_urgborder },  // Urgent window
};
