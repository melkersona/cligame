#include <ncurses.h>
#include <iostream>
#include "defs.h"
#include "state.h"

namespace game {
/*
	void drawFrameBuffer(state_t &active) {
		char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		for (int row = 0; row < HEIGHT; ++row) {
			for (int col = 0; col < WIDTH; ++col) {
				if (col == (WIDTH - 1)) {
					printw("foo");
					active.screen[row][WIDTH]     = '\r';
					active.screen[row][WIDTH + 1] = '\n';
					active.screen[row][WIDTH + 2] = '\0';
				} else {
					printw("bar");
					active.screen[row][col] = active.thisInput; 
					active.screen[row][col] = digits[active.cycles % 16];
				}
			}
		}
		refresh();
		return void();
	}
*/
	void drawFrameBuffer(state_t &active) {
		active.screen[0][0] = 'a';
		active.screen[0][1] = '\r';
		active.screen[0][2] = '\n';
		active.screen[0][3] = '\0';

		return void();
	}



	void draw(state_t &active) {
		clear();
		for(int y = 0; y < HEIGHT; y++) {
			printw("Hello World!\n");
		}
		return void();
	}
}
