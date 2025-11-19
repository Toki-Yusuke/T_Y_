#include "ss_w01.h"
#include"ss.h"
ss_w01::ss_w01() :Base(eType_Scene), m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(780, 490);
	m_frame = COPY_RESOURCE("frame", CImage);
	m_frame.SetSize(220, 140);
	m_frame.SetPos(770, 470);
}

void ss_w01::Update()
{
	if (PUSH(CInput::eButton10)) 
	{
		Base::SetKill();
		Base::Add(new ss());
	}
	
}

void ss_w01::Draw()
{
	m_frame.Draw();
	m_select_word01.Draw();
	m_text1.Draw(400, 800, 0, 0, 0, "a");
}