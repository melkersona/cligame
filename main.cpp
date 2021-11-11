#include <iostream>
#include "defs.h"
#include "graphics.h"
#include "state.h"

namespace game {

	state_t active;

	void getInput(void) {
		if(active.needInput) {
			std::cout << "INPUT: ";
			active.thisInput = std::cin.get();
		}
		return void();
	}

	void updateGameState(void) {
		if(active.cycles==1) {
			active.running = false;
		} else {
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
		active.thisInput = '=';
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
