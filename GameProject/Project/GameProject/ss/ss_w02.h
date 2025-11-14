#pragma once
#include"../Base/Base.h"

class ss_w02 :public Base
{
	CImage m_select_word02;
	CImage m_frame;
public:
	ss_w02();
	void Update();
	void Draw();
	void Collision(Base* b);
};