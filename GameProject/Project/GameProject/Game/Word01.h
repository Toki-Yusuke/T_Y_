#pragma once
#include"../Base/Base.h"

class Word01:public Base
{
	CImage m_word01;
public:
	Word01(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};
