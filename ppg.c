#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ioctl.h>
#include "ppg.h"


int GIRLS_DIRECTION = 1;
int GIRLS_SPEED = 100;
int GIRLS_LEN = 100;
int TITLE_LOGO = 0;

struct winsize w;


void option(int argc, char *argv[]);
void print_decorated_char(int pos, const char *decorated_char);

void draw_girls(int time);
void draw_girl(Girl girl, int time);
void draw_l_girl(Girl girl, int time);
void draw_r_girl(Girl girl, int time);

void draw_title_logo();


int main(int argc, char *argv[]) {
	option(argc, argv);

	signal(SIGINT, SIG_IGN);
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

	printf("\x1b[?25l\x1b[1m");

	if(TITLE_LOGO) {
		printf("\n\n\n\n\n\n\n\n\n\n");
		printf("\x1b[4A");
	}
	else {
		printf("\n\n\n\n\n");
		printf("\x1b[2A");
	}

	for(int i = 0; i <= w.ws_col + GIRLS_LEN + GIRLS_EXTRA_LEN + MAX_GIRLS_DELAY; i++) {
		draw_girls(i);
		fflush(stdout);
		usleep((unsigned int)(1000000.0 / GIRLS_SPEED));
	}

	if(TITLE_LOGO) {
		printf("\x1b[4B");
		for(int i = 0; i <= (TITLE_LOGO_HEIGHT + 1) / 2; i++) {
			draw_title_logo(i);
			fflush(stdout);
			usleep(TITLE_LOGO_DELAY);
		}
	}
	else {
		printf("\x1b[2B");
	}

	printf("\x1b[0m\x1b[?25h");

	return 0;
}

void option(int argc, char *argv[]) {
	char *arg;
	for(int i = 1; i < argc; i++) {
		if(argv[i][0] != '-') {
			continue;
		}
		switch(argv[i][1]) {
			case 's': GIRLS_SPEED = atoi(argv[++i]); break;
			case 'l': GIRLS_LEN   = atoi(argv[++i]); break;
			default:
				arg = argv[i] + 1;
				while(*arg != '\0') {
					switch(*arg++) {
						case 'r': GIRLS_DIRECTION = 0; break;
						case 't': TITLE_LOGO = 1;      break;
					}
				}
				break;
		}
	}
}

void print_decorated_char(int pos, const char *decorated_char) {
	if(pos >= 0 && pos < w.ws_col) {
		printf("%s", decorated_char);
	}
}

void draw_girls(int time) {
	// Blossom, commander and the leader
	printf("\x1b[1A");
	draw_girl(BLOSSOM, time - BLOSSOM_DELAY);

	// Bubbles, she is the joy and the laughter
	printf("\x1b[1A");
	draw_girl(BUBBLES, time - BUBBLES_DELAY);

	// Buttercup, and she's the toughest fighter
	printf("\x1b[2B");
	draw_girl(BUTTERCUP, time - BUTTERCUP_DELAY);
}

void draw_girl(Girl girl, int time) {
	switch(GIRLS_DIRECTION) {
		case 0:
			draw_l_girl(girl, time);
			break;
		case 1:
			draw_r_girl(girl, time);
			break;
	}
}

void draw_l_girl(Girl girl, int time) {
	static char *parts[][6] = {
		{ L_BLOSSOM_HAIR,   L_BLOSSOM_HEAD,   L_BLOSSOM_BODY,   L_BLOSSOM_FOOT,   L_BLOSSOM_LIGHT,   L_BLOSSOM_LIGHT_EDGE   },
		{ L_BUBBLES_HAIR,   L_BUBBLES_HEAD,   L_BUBBLES_BODY,   L_BUBBLES_FOOT,   L_BUBBLES_LIGHT,   L_BUBBLES_LIGHT_EDGE   },
		{ L_BUTTERCUP_HAIR, L_BUTTERCUP_HEAD, L_BUTTERCUP_BODY, L_BUTTERCUP_FOOT, L_BUTTERCUP_LIGHT, L_BUTTERCUP_LIGHT_EDGE },
	};

	int left = w.ws_col - time;

	for(int i = 0; i < left; i++) {
		print_decorated_char(i, " ");
	}

	// hair
	print_decorated_char(left, parts[girl][0]);

	// head
	print_decorated_char(left + 1, parts[girl][1]);

	// body
	print_decorated_char(left + 1 + 1, parts[girl][2]);

	// body
	print_decorated_char(left + 1 + 1 + 1, parts[girl][3]);

	// light
	for(int i = 0; i < GIRLS_LEN; i++) {
		print_decorated_char(left + 1 + 1 + 1 + 1 + i, parts[girl][4]);
	}

	// light edge
	print_decorated_char(left + 1 + 1 + 1 + 1 + GIRLS_LEN, parts[girl][5]);

	print_decorated_char(left + 1 + 1 + 1 + 1 + GIRLS_LEN + 1, "\x1b[K");
	printf("%s%s\r", FG_DEFAULT, BG_DEFAULT);
}

void draw_r_girl(Girl girl, int time) {
	static char *parts[][6] = {
		{ R_BLOSSOM_LIGHT_EDGE,   R_BLOSSOM_LIGHT,   R_BLOSSOM_FOOT,   R_BLOSSOM_BODY,   R_BLOSSOM_HEAD,   R_BLOSSOM_HAIR   },
		{ R_BUBBLES_LIGHT_EDGE,   R_BUBBLES_LIGHT,   R_BUBBLES_FOOT,   R_BUBBLES_BODY,   R_BUBBLES_HEAD,   R_BUBBLES_HAIR   },
		{ R_BUTTERCUP_LIGHT_EDGE, R_BUTTERCUP_LIGHT, R_BUTTERCUP_FOOT, R_BUTTERCUP_BODY, R_BUTTERCUP_HEAD, R_BUTTERCUP_HAIR },
	};

	int left = time - GIRLS_LEN - GIRLS_EXTRA_LEN;

	for(int i = 0; i < left; i++) {
		print_decorated_char(i, " ");
	}

	// light edge
	print_decorated_char(left, parts[girl][0]);

	// light
	for(int i = 0; i < GIRLS_LEN; i++) {
		print_decorated_char(left + 1 + i, parts[girl][1]);
	}

	// foot
	print_decorated_char(left + 1 + GIRLS_LEN, parts[girl][2]);

	// body
	print_decorated_char(left + 1 + GIRLS_LEN + 1, parts[girl][3]);

	// head
	print_decorated_char(left + 1 + GIRLS_LEN + 1 + 1, parts[girl][4]);

	// hair
	print_decorated_char(left + 1 + GIRLS_LEN + 1 + 1 + 1, parts[girl][5]);

	print_decorated_char(left + 1 + GIRLS_LEN + 1 + 1 + 1 + 1, "\x1b[K");
	printf("%s%s\r", FG_DEFAULT, BG_DEFAULT);
}

void draw_title_logo(int time) {
	static char *title_logo[] = {
		TITLE_LOGO_0, TITLE_LOGO_1, TITLE_LOGO_2, TITLE_LOGO_3, TITLE_LOGO_4, TITLE_LOGO_5, TITLE_LOGO_6, TITLE_LOGO_7, TITLE_LOGO_8, TITLE_LOGO_9
	};

	int half_height = (TITLE_LOGO_HEIGHT + 1) / 2;

	printf("\x1b[10A");
	for(int i = 0; i < TITLE_LOGO_HEIGHT; i++) {
		printf("%s\n", (((i < half_height && i >= half_height - time) || (i >= half_height && i < half_height + time)) ? title_logo[i] : ""));
	}
}
