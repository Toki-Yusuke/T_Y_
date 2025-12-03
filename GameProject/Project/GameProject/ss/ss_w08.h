#pragma once
#include"../Base/Base.h"

class ss_w08 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
	CFont m_text2;
	int m_cnt;
public:
	ss_w08();
	void Update();
	void Draw();
};