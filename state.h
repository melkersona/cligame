#ifndef STATE_H
#define STATE_H
#include "defs.h"
#include "script.h"

namespace game {
	struct state_t {
		int cycles;
		char screen[100][100];
		int termWidth;
		int termHeight;
		bool running;
		bool needInput;
		int thisInput;
		int calories;
		int leaves;
		script_t bar;
	}; 
}
#endif
