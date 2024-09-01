/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=12";
static const char *fonts[] = {
    font,
	"monospace:size=12"
};
static char sep[]           = "->";    /* -s option; set the separator between key and text */
static char *maxkey         = "p";
static char background[]    = "#000000"; /* global background */
static char keyfg[]         = "#00ff00"; /* key name foreground */
static char titlefg[]       = "#ff0000"; /* key name foreground */
static char sepfg[]         = "#00ffff"; /* separator foreground */
static char descfg[]        = "#ffffff"; /* description foreground */
static char bordercol[]     = "#ff0000"; /* border color */
static unsigned int backkey = XK_h;   /* backwards key */

static char *colors[SchemeLast][2] = {
	/*                 fg          bg       */
	[SchemeKey]    = { keyfg,      background }, /* fg for key */
	[SchemeTitle]  = { keyfg,      background }, /* fg for key */
	[SchemeSep]    = { sepfg,      background }, /* fg for separator (->) */
	[SchemeDesc]   = { descfg,     background }, /* fg for description */
	[SchemeBorder] = { background, bordercol  }, /* bg for border */
};
 

/* -c option, if nonzero flybinds will set this number of colums. If not, it's calculated */
static unsigned int columns        = 6;
static unsigned int colpadding     = 100;
static unsigned int outpaddinghor  = 25;
static unsigned int outpaddingvert = 15;
static unsigned int titlepadding   = 5;
static unsigned int borderpx       = 2;

/*
 * Xresources preferences to load at startup (the class to use is "flybinds")
 */
ResourcePref resources[] = {
	{ "font",           STRING,  &font           },
	{ "separator",      STRING,  &sep            },
	{ "background",     STRING,  &background     },
	{ "keyfg",          STRING,  &keyfg          },
	{ "titlefg",        STRING,  &titlefg        },
	{ "sepfg",          STRING,  &sepfg          },
	{ "descfg",         STRING,  &descfg         },
	{ "bordercol",      STRING,  &bordercol      },
	{ "maxcolumns",     INTEGER, &columns        },
	{ "colpadding",     INTEGER, &colpadding     },
	{ "outpaddinghor",  INTEGER, &outpaddinghor  },
	{ "outpaddingvert", INTEGER, &outpaddingvert },
	{ "titlepadding",   INTEGER, &titlepadding   },
	{ "borderpx",       INTEGER, &borderpx       },
};
 

#define SC(path) "$HOME/sc/flybinds/" #path

#include "items.h"

/* see keys.h to see the keynames */
/* keyname, text, script, childs */
/* parent items */
static item items[] = {
    /* keyname  description    path to script keep open?  childs      childs length  vertical   */
    { "l",    "Llançador",     SC("launcher"),   0,   launch,     LENGTH(launch)    ,0 },
    { "c",    "Configuració",  NULL,             0,   config,     LENGTH(config)    ,0 },
    { "e",    "Emacs",         SC("emacs"),      0,   emacs,      LENGTH(emacs)     ,0 },
    { "g",    "Gravadora",     NULL,             0,   record,     LENGTH(record)    ,0 },
    { "d",    "DWM",           SC("dwm"),        0,   dwm,        LENGTH(dwm)       ,0 },
    { "s",    "Música",        SC("music"),      0,   music,      LENGTH(music)     ,0 },
    { "y",    "Sync",          NULL,             0,   cron,       LENGTH(cron)      ,0 },
    { "t",    "Toggle",        SC("toggle"),     0,   toggle,     LENGTH(toggle)    ,0 },
    { "T",    "Tabbed",        SC("tabbed"),     0,   tabbed,     LENGTH(tabbed)    ,1 },
    { "x",    "Tanca",         SC("power"),      0,   power,      LENGTH(power)     ,0 },
};

//static item mitems[] = {
    //{"m", "main", NULL, 0, itmain, LENGTH(itmain), 0}
//};
