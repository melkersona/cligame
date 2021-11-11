#include <iostream>
#include "defs.h"
#include "graphics.h"
#include "state.h"

namespace game {

	state_t active;

	void getInput() {
		char n{};
		std::cout << "INPUT: ";
		n = std::getchar();
		PRINT(n);
		return;
	}

	void updateGameState() {
		active.running = false;
		return;
	}

	void mainLoop() {
		while (active.running) {
			drawFrameBuffer(active);
//			getInput();
			updateGameState();
			refresh(active);
		}
	}

	void init() {
		active.running = true;
		active.needInput = false;
		return;
	}

	void cleanup() {
		//doesn't need to do anything yet
		return;
	}

	void run() {
		init();
		mainLoop();
		cleanup();
	}
}
	int main() {
		try {
			game::run();
		} catch (const std::exception& e) {
			PRINT("Oepsie Woeupsie! Bad things happened uwu.");
		}

		return 0;
	}
