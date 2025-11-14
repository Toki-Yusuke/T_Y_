#pragma once
#include"../Base/Base.h"

class ss_w04 :public Base
{
	CImage m_select_word01;
	CImage m_select_word02;
	CImage m_frame1;
	CImage m_frame2;
public:
	ss_w04();
	void Update();
	void Draw();
	void Collision(Base* b);
};
