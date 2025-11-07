#pragma once
#include"../Base/Base.h"

class B_botton :public Base 
{
	CImage m_b_botton;
public:
	B_botton(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};