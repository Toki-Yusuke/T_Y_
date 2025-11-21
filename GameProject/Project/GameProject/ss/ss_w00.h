#pragma once
#include"../Base/Base.h"

class ss_w00 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
	int m_cnt;
public:
	ss_w00();
	void Update();
	void Draw();
};
