#pragma once
#include"../Base/Base.h"

class ss:public Base
{
	CImage m_haikei;
	CImage m_gc;
	CImage m_tyfp;
	CImage m_end;
	int m_cnt;
public:
	ss();
	void Update();
	void Draw();
};