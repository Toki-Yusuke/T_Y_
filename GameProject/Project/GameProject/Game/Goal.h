#pragma once
#include"../Base/Base.h"

class Goal :public Base 
{
	CImage m_Goal;
public:
	Goal(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};