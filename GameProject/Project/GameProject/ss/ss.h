#pragma once
#include"../Base/Base.h"

class ss:public Base
{
	CImage m_haikei;
	CImage m_gc;
	CImage m_tyfp;
public:
	ss();
	void Update();
	void Draw();
};