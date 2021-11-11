#include <iostream>
#include <cstring>

#define PRINT(x) std::cout << x << std::endl

void renderGameScreen() {
	std::string screen = "[This is game data]";
	PRINT(screen);
}

void run() {
	PRINT("Hello World!");	
	renderGameScreen();
}

int main() {
	try {
		run();
	} catch (const std::exception& e) {
		PRINT("Oepsie Woeupsie! Bad things happened uwu.");
	}

	return 0;
}
