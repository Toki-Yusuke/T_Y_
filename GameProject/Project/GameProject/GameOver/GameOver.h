#pragma once
#include"../Base/Base.h"

class GameOver :public Base 
{
	CImage m_Haikei;
	CImage m_Logo;
public:
	GameOver();
	void Update();
	void Draw();
};