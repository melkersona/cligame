#ifndef STATE_H
#define STATE_H
#include <vector>
#include <string>
#include "defs.h"
#include "script.h"

namespace game {
	struct state_t {
		int cycles;
		std::vector <std::string> screen;
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
