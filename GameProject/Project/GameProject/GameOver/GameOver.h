#pragma once
#include"../Base/Base.h"

class GameOver :public Base 
{
	CImage m_haikei;
	CImage m_logo;
	CImage m_moji;
public:
	GameOver();
	void Update();
	void Draw();
};