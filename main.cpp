#include <ncurses.h>
#include <iostream>
#include "defs.h"
#include "graphics.h"
#include "input.h"
#include "state.h"

namespace game {

	state_t active;

	void updateGameState(void) {
		if(active.thisInput == '\\') {
			active.running = false;
		} 
		if (active.cycles == 0) {
//			active.needInput = true;
//			raw();
		}
		active.cycles++;
		return void();
	}

	void mainLoop(void) {
		while (active.running) {
			if (active.needInput) {
				getInput(active);
			}
			drawFrameBuffer(active);
			updateGameState();
			draw(active);
			refresh();
		}
		return void();
	}

	void init(void) {
		active.running = true;
		active.needInput = false;
		active.cycles = 0;
		active.thisInput = '=';
		initscr();
		cbreak();
		keypad(stdscr, TRUE);
		noecho();

		return void();
	}

	void cleanup(void) {
		endwin();
		return void();
	}

	void run(void) {
		init();
		mainLoop();
		cleanup();
	}
}
	int main(void) {
		try {
			game::run();
		} catch (const std::exception& e) {
			PRINT("Oepsie Woeupsie! Bad things happened uwu.");
		}

		return 0;
	}
