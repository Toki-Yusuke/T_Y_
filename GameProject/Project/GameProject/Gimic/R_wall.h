#pragma once
#include"../Base/Base.h"

class R_wall :public Base
{
	CImage m_r_wall;
public:
	R_wall(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
	void BotoonOn();
};