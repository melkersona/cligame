#include <iostream>
#include "defs.h"
#include "state.h"

namespace game {

	void drawFrameBuffer(state_t &active) {
//		char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		for (int row = 0; row < HEIGHT; row++) {
			for (int col = 0; col < WIDTH; col++) {
				if (col == WIDTH-1) {
					active.screen[row][col] = '\0';
				} else {
					active.screen[row][col] = active.thisInput[0]; 
				}
			}
		}
		return void();
	}



	void refresh(state_t &active) {
		for(int y = 0; y < HEIGHT; y++) {
			PRINT(active.screen[y]);
		}
		return void();
	}
}
