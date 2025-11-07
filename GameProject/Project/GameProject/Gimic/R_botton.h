#pragma once
#include"../Base/Base.h"

class R_botton :public Base
{
	CImage m_r_botton;
public:
	R_botton(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};