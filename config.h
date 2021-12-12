/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int showhint = 1;                    /* 1 to show key hints, 0 doesn't display them */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu:size=13"
};
static const char *sep         = "->";    /* -s option; set the separator between key and text */
static const char *maxkey      = "p";

#include <gcolors.h>
#define BACKGROUND COL_0
static const char *colors[SchemeLast][2] = {
	/*                 fg                     bg       */
	[SchemeKey]    = { COL_VERD/*"#bbbbbb"*/, BACKGROUND },
	[SchemeSep]    = { COL_BLAU/*"#000000"*/, BACKGROUND },
	[SchemeDesc]   = { COL_BLANC/*"#eeeeee"*/, BACKGROUND },
	[SchemeBorder] = { COL_BLANC/*"#eeeeee"*/, COL_FOSC },
};
/* -c option, if nonzero flybinds will set this number of colums. If not, it's calculated */
static unsigned int columns        = 6;
static unsigned int colpadding     = 100;
static unsigned int outpaddinghor  = 25;
static unsigned int outpaddingvert = 15;
static unsigned int borderpx       = 2;


#define SC(path) "$HOME/scripts/flybinds/" #path

#include "items.h"

/* see keys.h to see the keynames */
/* keyname, text, script, childs */
/* parent items */
static item items[] = {
    /* keyname  description    path to script keep open?  childs      childs length     */
    { "l",    "Llançador",     SC("launcher"),    0,   launch,     LENGTH(launch)    ,0 },
    { "c",    "Configuració",  NULL,              0,   config,     LENGTH(config)    ,0 },
    { "e",    "Edita config",  SC("edit-config"), 0,   edit,       LENGTH(edit)      ,1 },
    { "d",    "DWM",           SC("dwm"),         0,   dwm,        LENGTH(dwm)       ,0 },
    { "s",    "Spotify",       SC("spotify"),     0,   spotify,    LENGTH(spotify)   ,0 },
    { "y",    "Sync",          NULL,              0,   cron,       LENGTH(cron)      ,0 },
    { "u",    "Utils",         SC("utils"),       0,   utils,      LENGTH(utils)     ,0 },
    { "t",    "Toggle",        SC("toggle"),      0,   toggle,     LENGTH(toggle)    ,0 },
    { "x",    "Tanca",         SC("power"),       0,   power,      LENGTH(power)     ,0 },
    { "k",    "Kill",          "$HOME/scripts/kill.sh" },
};
