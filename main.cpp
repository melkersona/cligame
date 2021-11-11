#include <iostream>
#include <cstring>

#define WIDTH 4
#define HEIGHT 2 
#define PRINT(bar) std::cout << bar << std::endl
#define DEBUGP(foo) PRINT("At coordinates (" + std::to_string(x) + ", " + std::to_string(y) + ") Value is: " + std::to_string(foo))

namespace game {
	char screen[WIDTH][HEIGHT]{};
	bool running;
	void drawFrameBuffer() {
//		char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		for (int y = 0; y < HEIGHT; y++) {
			for (int x = 0; x < WIDTH+1; x++) {
				if (x == WIDTH) {
					screen[y][x] = '\0';
//					DEBUGP(0);
				} else {
//					screen[y][x] = digits[x%16];
					screen[y][x] = '=';
//					DEBUGP(1);
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
		running = false;
		return;
	}

	void refresh() {
		for(int y = 0; y < HEIGHT; y++) {
//			PRINT(y);
			PRINT(screen[y]);
		}
	}

	void mainLoop() {
		running = true;
		while (running) {
			drawFrameBuffer();
//			getInput();
			updateGameState();
			refresh();
		}
	}

	void run() {
		mainLoop();
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
