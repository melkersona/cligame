#include <ncurses.h>
#include <iostream>
#include "defs.h"
#include "state.h"

namespace game {
	void getInput(state_t &active) {
		char c = getch();
		if ( c == 3 ) {
			active.running = false;
		}
		return void();
	}
}
