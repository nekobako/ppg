#define FG_BLACK   "\x1b[30m"
#define FG_RED     "\x1b[31m"
#define FG_GREEN   "\x1b[32m"
#define FG_YELLOW  "\x1b[33m"
#define FG_BLUE    "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN    "\x1b[36m"
#define FG_WHITE   "\x1b[37m"
#define FG_DEFAULT "\x1b[39m"
#define BG_BLACK   "\x1b[40m"
#define BG_RED     "\x1b[41m"
#define BG_GREEN   "\x1b[42m"
#define BG_YELLOW  "\x1b[43m"
#define BG_BLUE    "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN    "\x1b[46m"
#define BG_WHITE   "\x1b[47m"
#define BG_DEFAULT "\x1b[49m"

#define BLOSSOM_DELAY 0
#define BUBBLES_DELAY 10
#define BUTTERCUP_DELAY 5
#define MAX_GIRLS_DELAY 10

#define GIRLS_EXTRA_LEN 5

#define L_BLOSSOM_HAIR         FG_RED     BG_DEFAULT "E"
#define L_BLOSSOM_HEAD         FG_RED     BG_DEFAULT "O"
#define L_BLOSSOM_BODY         FG_BLACK   BG_MAGENTA "I"
#define L_BLOSSOM_FOOT         FG_WHITE   BG_MAGENTA "3"
#define L_BLOSSOM_LIGHT        FG_DEFAULT BG_MAGENTA " "
#define L_BLOSSOM_LIGHT_EDGE   FG_WHITE   BG_DEFAULT "#"

#define L_BUBBLES_HAIR         FG_YELLOW  BG_DEFAULT "8"
#define L_BUBBLES_HEAD         FG_YELLOW  BG_DEFAULT "O"
#define L_BUBBLES_BODY         FG_BLACK   BG_CYAN    "I"
#define L_BUBBLES_FOOT         FG_WHITE   BG_CYAN    "3"
#define L_BUBBLES_LIGHT        FG_DEFAULT BG_CYAN    " "
#define L_BUBBLES_LIGHT_EDGE   FG_WHITE   BG_DEFAULT "#"

#define L_BUTTERCUP_HAIR       FG_BLACK   BG_DEFAULT "f"
#define L_BUTTERCUP_HEAD       FG_BLACK   BG_DEFAULT "O"
#define L_BUTTERCUP_BODY       FG_BLACK   BG_GREEN   "I"
#define L_BUTTERCUP_FOOT       FG_WHITE   BG_GREEN   "3"
#define L_BUTTERCUP_LIGHT      FG_DEFAULT BG_GREEN   " "
#define L_BUTTERCUP_LIGHT_EDGE FG_WHITE   BG_DEFAULT "#"

#define R_BLOSSOM_HAIR         FG_RED     BG_DEFAULT "3"
#define R_BLOSSOM_HEAD         FG_RED     BG_DEFAULT "O"
#define R_BLOSSOM_BODY         FG_BLACK   BG_MAGENTA "I"
#define R_BLOSSOM_FOOT         FG_WHITE   BG_MAGENTA "E"
#define R_BLOSSOM_LIGHT        FG_DEFAULT BG_MAGENTA " "
#define R_BLOSSOM_LIGHT_EDGE   FG_WHITE   BG_DEFAULT "#"

#define R_BUBBLES_HAIR         FG_YELLOW  BG_DEFAULT "8"
#define R_BUBBLES_HEAD         FG_YELLOW  BG_DEFAULT "O"
#define R_BUBBLES_BODY         FG_BLACK   BG_CYAN    "I"
#define R_BUBBLES_FOOT         FG_WHITE   BG_CYAN    "E"
#define R_BUBBLES_LIGHT        FG_DEFAULT BG_CYAN    " "
#define R_BUBBLES_LIGHT_EDGE   FG_WHITE   BG_DEFAULT "#"

#define R_BUTTERCUP_HAIR       FG_BLACK   BG_DEFAULT "7"
#define R_BUTTERCUP_HEAD       FG_BLACK   BG_DEFAULT "O"
#define R_BUTTERCUP_BODY       FG_BLACK   BG_GREEN   "I"
#define R_BUTTERCUP_FOOT       FG_WHITE   BG_GREEN   "E"
#define R_BUTTERCUP_LIGHT      FG_DEFAULT BG_GREEN   " "
#define R_BUTTERCUP_LIGHT_EDGE FG_WHITE   BG_DEFAULT "#"

#define TITLE_LOGO_DELAY 100000

#define TITLE_LOGO_0 "            " FG_WHITE BG_BLACK "++===============++" BG_DEFAULT "                                                 "
#define TITLE_LOGO_1 "           " FG_WHITE BG_BLACK "//" FG_MAGENTA " ^//^//_////__ " FG_WHITE "//" BG_DEFAULT "                                                  "
#define TITLE_LOGO_2 "   " FG_WHITE BG_BLACK "++=====++" FG_MAGENTA "  // // ////__ " FG_WHITE "++=================================================++" BG_DEFAULT
#define TITLE_LOGO_3 "  " FG_WHITE BG_BLACK "// " FG_BLACK BG_MAGENTA "/^^^^^/" BG_BLACK " " BG_MAGENTA "/^^^^^/" BG_BLACK " " BG_MAGENTA "/^/ /^/" BG_BLACK " " BG_MAGENTA "/^____/" BG_BLACK " " BG_MAGENTA "/^^^^^/" BG_BLACK " " BG_MAGENTA "/^^^^^/" BG_BLACK " " BG_MAGENTA "/^/ /^/" BG_BLACK " " BG_MAGENTA "/^^___/" BG_BLACK " " BG_MAGENTA "/^^___/" BG_BLACK " " FG_WHITE "//" BG_DEFAULT " "
#define TITLE_LOGO_4 " " FG_WHITE BG_BLACK "// " FG_BLACK BG_MAGENTA "/  o__/" BG_BLACK " " BG_MAGENTA "/  o  /" BG_BLACK " " BG_MAGENTA "/ /^/ /" BG_BLACK " " BG_MAGENTA "/ /=== " BG_BLACK " " BG_MAGENTA "/  o _/" BG_BLACK " " BG_MAGENTA "/  o__/" BG_BLACK " " BG_MAGENTA "/ /_/ /" BG_BLACK " " BG_MAGENTA "/  /__" BG_BLACK "  " BG_MAGENTA "/  /__" BG_BLACK "  " FG_WHITE "//" BG_DEFAULT "  "
#define TITLE_LOGO_5 FG_WHITE BG_BLACK "// " FG_BLACK BG_MAGENTA "/___/" BG_BLACK "   " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/_/^/_/" BG_BLACK " " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/__/\\_\\" BG_BLACK " " BG_MAGENTA "/___/" BG_BLACK "   " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/__/" BG_BLACK "    " BG_MAGENTA "/__/" BG_BLACK "    " FG_WHITE "//" BG_DEFAULT "   "
#define TITLE_LOGO_6 FG_WHITE BG_BLACK "\\\\  "   FG_BLACK BG_YELLOW "_/\\_" BG_BLACK "    " BG_YELLOW "_/\\_" BG_BLACK "  " BG_MAGENTA "/^^___/" BG_BLACK " " BG_MAGENTA " A_A   " BG_BLACK " " BG_MAGENTA "/^^^^^/" BG_BLACK " " BG_MAGENTA "/^^/" BG_BLACK "    " BG_MAGENTA "/^____/" BG_BLACK " " FG_WHITE "++==============++" BG_DEFAULT "    "
#define TITLE_LOGO_7 " " FG_WHITE BG_BLACK "\\\\ " FG_BLACK BG_YELLOW "/__\\_/\\_/__\\" BG_BLACK " " BG_MAGENTA "/ /,,_ " BG_BLACK " " BG_MAGENTA "__\\_/_ " BG_BLACK " " BG_MAGENTA "/  o _/" BG_BLACK " " BG_MAGENTA "/  /" BG_BLACK "__  " BG_MAGENTA "__^--_" BG_BLACK "  " FG_WHITE "//" BG_DEFAULT "                     "
#define TITLE_LOGO_8 "  " FG_WHITE BG_BLACK "\\\\    " FG_BLACK BG_YELLOW "/__\\" BG_BLACK "    " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/__/\\_\\" BG_BLACK " " BG_MAGENTA "/_____/" BG_BLACK " " BG_MAGENTA "/_____/" BG_BLACK " " FG_WHITE "//" BG_DEFAULT "                      "
#define TITLE_LOGO_9 "   " FG_WHITE BG_BLACK "++==================================================++" BG_DEFAULT "                       "
#define TITLE_LOGO_WIDTH 80
#define TITLE_LOGO_HEIGHT 10


typedef enum {
	BLOSSOM, BUBBLES, BUTTERCUP
} Girl;
