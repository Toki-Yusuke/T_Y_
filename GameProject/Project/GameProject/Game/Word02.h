#pragma once
#include"../Base/Base.h"

class Word02 :public Base
{
	CImage m_word02;
public:
	Word02(const CVector2D& pos);
	void Update();
	void Draw();
	void Collision(Base* b);
};
