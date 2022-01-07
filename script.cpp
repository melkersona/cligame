#include <iostream>
#include <fstream>
#include <string>
#include "defs.h"
#include "script.h"

namespace game {
	script_t readScript(std::string filename) {
		std::ifstream scriptfile;
		std::string line;
		int x = 0;
		script_t foo;
		scriptfile.open(filename);

		if (scriptfile.is_open()) {
			while (getline(scriptfile,line)) {
				x++;
			}
			scriptfile.close();
		}
		return foo;
	}
}
