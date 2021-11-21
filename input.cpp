#include <ncurses.h>
#include <iostream>
#include "defs.h"
#include "state.h"

namespace game {
	void getInput(state_t &active) {
		int c = getch();
		active.thisInput = c;
		return void();
	}
}
