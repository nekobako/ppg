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


typedef enum {
	BLOSSOM, BUBBLES, BUTTERCUP
} Girl;
