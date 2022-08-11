static item incdec[] = {
    { "h", "Decrementa", NULL, 1 },
    { "l", "Incrementa", NULL, 1 },
};
static item incdec0[] = {
    { "0", "Def / Toggle",   NULL, 1 },
    { "h", "Decrementa",     NULL, 1 },
    { "l", "Incrementa",     NULL, 1 },
};
static item ratoli[] = {
    { "d", "Dreta"    },
    { "e", "Esquerra" },
};
static item monitors[] = {
    { "p", "Portàtil" },
    { "h", "HDMI"     },
    { "d", "Doble"    },
    { "a", "Altres"   },
};
static item audio[] = {
    { "m", "Mixer",                 },
    { "1", "I/O: Analog",           },
    { "2", "O: HDMI 2, I: Analog",  },
};
static item spotify[] = {
    { "␣", ""   },
    { "n", ""   },
    { "p", ""   },
    { "b", ""   },
    { "o", "O"   },
    { "x", "X"   },
};
static item power[] = {
    { "a", "Atura"    },
    { "r", "Reinicia" },
    { "b", "Bloqueja" },
    { "h", "Hiberna"  },
    { "s", "Suspèn"   },
    { "x", "Surt"     },
};
static item dwm_gaps[] = {
    { "0", "Toggle",          },
    { "s", "Smart toogle",    },
    { "d", "Predeterminat",   },
    { "u", "Incrementa",      },
    { "U", "Decrementa",      },
    { "i", "Inc interiors",   },
    { "I", "Dec interiors",   },
    { "o", "Inc exteriors",   },
    { "O", "Dec exteriors",   },
    { "1", "Inc int hor",     },
    { "2", "Dec int hor",     },
    { "3", "Inc int vert",    },
    { "4", "Dec int vert",    },
    { "5", "Inc ext hor",     },
    { "6", "Dec ext hor",     },
    { "7", "Inc ext vert",    },
    { "8", "Dec ext vert",    },
};
static item dwm_borders[] = {
    { "s", "Smart toogle", },
    { "h", "Decrementa",   },
    { "l", "Incrementa",   },
};
static item dwm[] = {
    { "b", "Borders", NULL, 1, dwm_borders, LENGTH(dwm_borders) },
    { "g", "Gaps",    NULL, 1, dwm_gaps,    LENGTH(dwm_gaps)    },
};
static item uib[] = {
    { "a", "Aula digital"  },
    { "c", "Academic"      },
    { "e", "Entrar biblio" },
    { "s", "Sortir biblio" },
};

static item launch[] = {
    { "w", "WWW (Brave)"       },
    { "f", "Fitxers (nnn)"     },
    { "d", "Fitxers (dbrowse)" },
    { "m", "Email (neomutt)"   },
    { "e", "Emacs"             },
    { "t", "Telegram"          },
    { "x", "Xarxes"            },
    { "c", "Calcurse"          },
    { "u", "UIB"             , NULL, 0, uib, LENGTH(uib) },
};
static item cron[] = {
    { "m", "Email",          "$HOME/sc/cron/mail.sh &"  },
    { "d", "Drive",          "$HOME/sc/cron/drive.sh &" },
};
static item config[] = {
    { "r", "Ratolí",      SC("config/mouse"),       0, ratoli,      LENGTH(ratoli)     },
    { "m", "Monitors",    SC("config/monitors"),    0, monitors,    LENGTH(monitors)   },
    { "a", "Audio",       SC("config/audio"),       0, audio,       LENGTH(audio)      },
    { "w", "Wallpaper",   "sxiv /usr/share/wallpapers"                                 },
    { "t", "Tema",        SC("../theme.sh")                                            },
};
static item edit[] = {
    { "m", "dmenu"     },
    { "M", "dmenukey"  },
    { "D", "dunst"     },
    { "d", "dwm"       },
    { "b", "dwmblocks" },
    { "e", "emacs"     },
    { "f", "flybinds"  },
    { "v", "neovim"    },
    { "l", "slock"     },
    { "t", "st"        },
    { "s", "sxiv"      },
    { "z", "zathura"   },
};
static item toggle[] = {
    { "a", "xautolock" },
    { "k", "screenkey" },
    { "b", "bluetooth" },
    { "c", "cups"      },
    { "s", "ssh"       },
    { "t", "xcompmgr"  },
};
static item utils[] = {
    { "w", "wget"      },
    { "k", "kill"      },
};
