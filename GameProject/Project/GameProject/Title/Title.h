#pragma once
#include"../Base/Base.h"

class Title:public Base
{
	CImage m_haikei;
	CImage m_title;
	CImage m_moji;
	int m_cnt;
	int m_fontstate;
	float m_alpha;
public:
	Title();
	void Update();
	void Draw();
};