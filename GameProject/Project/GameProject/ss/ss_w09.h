#pragma once
#include"../Base/Base.h"

class ss_w09 :public Base
{
	CImage m_ss_w09;
public:
	ss_w09();
	void Update();
	void Draw();
	void Collision(Base* b);
};
