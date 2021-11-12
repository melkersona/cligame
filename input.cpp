#include <ncurses.h>
#include <iostream>
#include "defs.h"
#include "state.h"

namespace game {
	void getInput(state_t &active) {
		if(active.needInput) {
			active.thisInput = getch();
		}
		return void();
	}
}
