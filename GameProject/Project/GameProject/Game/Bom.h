#pragma once
#include"../Base/Base.h"

class Bom :public Base 
{
	CImage m_bom;
public:
	Bom(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};