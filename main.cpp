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
			active.running 	 = false; // This makes the main loop terminate and terminate the program correctly.
		} 
		switch ( active.cycles ) {
		case 0:
			active.needInput = true;
			break;
		case 16:
			active.running = false;
			break;
		}
		if (active.thisInput == 'a') {
			active.leaves++;
		}
		getmaxyx(stdscr, active.termHeight, active.termWidth);
		
		active.cycles++;
		active.calories += active.leaves;
		return void();
	}

	void mainLoop(void) {
		while (active.running) {
			if (active.needInput) {
				game::getInput(active);
			}
//			game::drawFrameBuffer(active);
			game::updateGameState();
			game::draw(active);
			refresh();
		}
		return void();
	}

	void init(void) {
		active.running 	 = true;
		active.needInput = false;
		active.cycles 	 = 0;
		active.thisInput = '0';
		active.calories  = 0;
		active.leaves    = 1;
		initscr();
		cbreak();
		keypad(stdscr, TRUE);
		noecho();
		nodelay(stdscr, FALSE);

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
			return 1;
		}

		return 0;
	}
