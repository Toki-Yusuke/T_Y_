#pragma once
#include"../Base/Base.h"

class ss_w06 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
public:
	ss_w06();
	void Update();
	void Draw();
};
