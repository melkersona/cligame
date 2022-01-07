#include <ncurses.h>
#include <iostream>
#include <fstream>
#include <string>
#include "defs.h"
#include "graphics.h"
#include "input.h"
#include "state.h"
#include "script.h"

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

		getmaxyx(stdscr, active.termHeight, active.termWidth);
		
		return void();
	}

	void mainLoop(void) {
		while (active.running) {
			if (active.needInput) {
				game::getInput(active);
			}
			game::updateGameState();
			game::drawFrameBuffer(active);
			game::draw(active);
			refresh();
		}
		return void();
	}
	
	void init(void) {
		active.running 	 = true;
		active.needInput = true;
		active.cycles 	 = 0;
		active.thisInput = '0';
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

	int run(void) {
//		init();
//		mainLoop();
//		cleanup();
		return 0;
	}
}
	int main(int argc, char* argv[]) {
		if (argc==1) {
			try {
				return game::run();
			} catch (const std::exception& e) {
				PRINT("Oepsie Woeupsie! Bad things happened uwu.");
			}
		} else {
			PRINT("You gave me arguments? You dumb motherfucker! What am I supposed to do with that? I'm going to exit now, just to spite you.");
		}
		return 1;
	}
