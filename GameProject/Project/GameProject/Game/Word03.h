#pragma once
#include"../Base/Base.h"

class Word03 :public Base
{
	CImage m_word03;
public:
	Word03(const CVector2D& pos);
	void Draw();
	void Collision(Base* b);
};
