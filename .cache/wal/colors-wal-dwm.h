static const char norm_fg[] = "#f4ebdc";
static const char norm_bg[] = "#0f1d2a";
static const char norm_border[] = "#aaa49a";

static const char sel_fg[] = "#f4ebdc";
static const char sel_bg[] = "#C0947A";
static const char sel_border[] = "#f4ebdc";

static const char urg_fg[] = "#f4ebdc";
static const char urg_bg[] = "#D56278";
static const char urg_border[] = "#D56278";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
