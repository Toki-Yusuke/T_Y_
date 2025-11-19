#pragma once
#include"../Base/Base.h"

class ss_w01 :public Base 
{
	CImage m_select_word01;
	CImage m_frame;
	CFont m_text1;
public:
	ss_w01();
	void Update();
	void Draw();
};
