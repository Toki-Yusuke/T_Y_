#pragma once
#include"../Base/Base.h"

class ss_w09 :public Base
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
	int m_cnt;
public:
	ss_w09();
	void Update();
	void Draw();
};