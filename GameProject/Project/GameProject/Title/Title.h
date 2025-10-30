#pragma once
#include"../Base/Base.h"

class Title:public Base
{
	CImage m_haikei;
	CImage m_title;
	CImage m_moji;
	int m_cnt;
public:
	Title();
	void Update();
	void Draw();
};