#include <iostream>

#define WIDTH 80
#define HEIGHT 24
#define PRINT(bar) std::cout << bar << std::endl
#define DEBUGP(foo) PRINT("At coordinates (" + std::to_string(row) + ", " + std::to_string(col) + ") Value is: " + std::to_string(foo))

namespace game {
	struct state_t {
		char screen[HEIGHT][WIDTH+1]{};
		bool running;
		bool needInput;
	} active;

	void drawFrameBuffer() {
//		char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		for (int row = 0; row < HEIGHT; row++) {
			for (int col = 0; col < WIDTH; col++) {
				if (col == WIDTH-1) {
					active.screen[row][col] = '\0';
				} else {
					active.screen[row][col] = '='; 
				}
			}
		}
	}

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

	void refresh() {
		for(int y = 0; y < HEIGHT; y++) {
			PRINT(active.screen[y]);
		}
	}

	void mainLoop() {
		while (active.running) {
			drawFrameBuffer();
//			getInput();
			updateGameState();
			refresh();
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
