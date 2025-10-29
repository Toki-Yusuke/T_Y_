#pragma once
#include"../Base/Base.h"

class Title:public Base
{
	CImage m_img;
	CImage m_Title;
	CImage m_Moji;
	int m_cnt;
public:
	Title();
	void Update();
	void Draw();
};