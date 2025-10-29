#pragma once
#include"../Base/Base.h"

class Game:public Base
{
	int m_GameState;
public:
	Game();
	void Update();
};