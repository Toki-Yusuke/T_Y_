#pragma once
#include"../Base/Base.h"

class ss_w03 :public Base
{
	CImage m_select_word03;
public:
	ss_w03();
	void Update();
	void Draw();
	void Collision(Base* b);
};