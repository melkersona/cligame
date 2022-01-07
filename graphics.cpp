#include <ncurses.h>
#include <iostream>
#include <string>
#include "defs.h"
#include "state.h"

namespace game {
//		char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; //This is for debug use, helps to determine where things are being printed.
	void drawFrameBuffer(state_t &active) { // setup active.screen with the contents of what should be drawn at next pass
//		active.screen[0] = active.bar.contents; 
		return void();
	}

	void draw(state_t &active) {
		clear();
		for(int y = 0; y < active.termHeight; y++) {
			printw("%s\n", active.screen[y]);
		}
		return void();
	}
}
