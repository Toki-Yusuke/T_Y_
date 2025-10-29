#pragma once
#include"../Base/Base.h"

class Field:public Base
{
	CImage m_Haikei;
public:
	Field();
	void Update();
	void Draw();
};