#pragma once
#include"../Base/Base.h"

class Sting:public Base
{
	CImage m_sting;
public:
	Sting(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};
