#ifndef STATE_H
#define STATE_H
#include "defs.h"

namespace game {
	struct state_t {
		int cycles;
		char screen[100][50];
		int termWidth;
		int termHeight;
		bool running;
		bool needInput;
		int thisInput;
		int calories;
		int leaves;
	}; 
}
#endif
