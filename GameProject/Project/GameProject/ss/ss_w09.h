#pragma once
#include"../Base/Base.h"

class ss_w09 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
	int m_cnt;
public:
	ss_w09();
	void Update();
	void Draw();
};