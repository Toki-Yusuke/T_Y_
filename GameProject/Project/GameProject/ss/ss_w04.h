#pragma once
#include"../Base/Base.h"

class ss_w04 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
public:
	ss_w04();
	void Update();
	void Draw();
};
