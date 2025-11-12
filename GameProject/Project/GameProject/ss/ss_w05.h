#pragma once
#include"../Base/Base.h"

class ss_w05 :public Base
{
	CImage m_ss_w05;
public:
	ss_w05();
	void Update();
	void Draw();
	void Collision(Base* b);
};
