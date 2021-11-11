#ifndef STATE_H
#define STATE_H
#include "defs.h"

namespace game {
	struct state_t {
		int cycles;
		char screen[HEIGHT][WIDTH+1];
		bool running;
		bool needInput;
		char thisInput;
	}; 
}
#endif
