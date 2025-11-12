#pragma once
#include"../Base/Base.h"

class ss_w06 :public Base
{
	CImage m_ss_w06;
public:
	ss_w06();
	void Update();
	void Draw();
	void Collision(Base* b);
};
