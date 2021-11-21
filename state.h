#ifndef STATE_H
#define STATE_H
#include "defs.h"

namespace game {
	struct state_t {
		int cycles;
		char screen[][];
		bool running;
		bool needInput;
		int thisInput;
	}; 
}
#endif
