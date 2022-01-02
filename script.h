#ifndef SCRIPT_H
#define SCRIPT_H
#include <string>

namespace game {
	struct script_t {
		std::string contents[100];
	};

	script_t readScript(std::string filename);
}
#endif
