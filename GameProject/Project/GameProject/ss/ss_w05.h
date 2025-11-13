#pragma once
#include"../Base/Base.h"

class ss_w05 :public Base
{
	CImage m_select_word01;
	CImage m_select_word03;
public:
	ss_w05();
	void Update();
	void Draw();
	void Collision(Base* b);
};
