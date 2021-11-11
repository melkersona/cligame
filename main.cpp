#include <iostream>
#include "defs.h"
#include "graphics.h"
#include "state.h"

namespace game {

	state_t active;

	void getInput(void) {
		if(active.needInput) {
			std::cout << "INPUT: ";
			std::cin.get(active.thisInput, 2);
			std::cin.ignore();
		}
		return void();
	}

	void updateGameState(void) {
		if(active.thisInput[0] == '\\') {
			active.running = false;
		} 
		if (active.cycles == 0) {
			active.needInput = true;
		}
		active.cycles++;
		return void();
	}

	void mainLoop(void) {
		while (active.running) {
			getInput();
			drawFrameBuffer(active);
			updateGameState();
			refresh(active);
		}
		return void();
	}

	void init(void) {
		active.running = true;
		active.needInput = false;
		active.cycles = 0;
		active.thisInput[0] = '=';
		return void();
	}

	void cleanup(void) {
		//doesn't need to do anything yet
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
