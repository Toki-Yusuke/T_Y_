#pragma once
#include"../Base/Base.h"

class Bom :public Base 
{
	CImage m_bom;
	bool m_is_ground;
public:
	Bom(const CVector2D& pos);
	void Update();
	void Draw();
	void Move();
	void B_Effect();
	void Collision(Base* b);
};