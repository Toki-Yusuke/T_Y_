#pragma once
#include"../Base/Base.h"

class B_rock :public Base 
{
	CImage m_b_rock;
public:
	B_rock(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};