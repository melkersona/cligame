#ifndef GAME_H
#define GAME_H
#include "state.h"
namespace game{
	void drawFrameBuffer(state_t &active);
	void refresh(state_t &active);
}
#endif
