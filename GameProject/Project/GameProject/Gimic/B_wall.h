#pragma once
#include"../Base/Base.h"

class B_wall :public Base 
{
	CImage m_b_wall;
public:
	B_wall(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
	void BotoonOn();
};