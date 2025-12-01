#pragma once
#include"../Base/Base.h"

class ss_w06 :public Base
{
	CImage m_haikei;
	CImage m_next;
	CFont m_text1;
	CFont m_text2;
	CFont m_text3;
	CFont m_text4;
	CFont m_text5;
	CFont m_text6;
	CFont m_text7;
public:
	ss_w06();
	void Update();
	void Draw();
};
