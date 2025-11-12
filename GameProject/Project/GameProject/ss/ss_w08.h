#pragma once
#include"../Base/Base.h"

class ss_w08 :public Base
{
	CImage m_ss_w08;
public:
	ss_w08();
	void Update();
	void Draw();
	void Collision(Base* b);
};
