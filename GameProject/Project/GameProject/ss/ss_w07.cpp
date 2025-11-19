#include "ss_w07.h"
#include"ss.h"

ss_w07::ss_w07() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(200, 490);
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(860, 490);
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(1520, 490);
	m_frame1 = COPY_RESOURCE("frame", CImage);
	m_frame1.SetSize(220, 140);
	m_frame1.SetPos(190, 470);
	m_frame2 = COPY_RESOURCE("frame", CImage);
	m_frame2.SetSize(220, 140);
	m_frame2.SetPos(850, 470);
	m_frame3 = COPY_RESOURCE("frame", CImage);
	m_frame3.SetSize(220, 140);
	m_frame3.SetPos(1510, 470);
}

void ss_w07::Update()
{
	if (PUSH(CInput::eButton10))
	{
		Base::SetKill();
		Base::Add(new ss());
	}
}

void ss_w07::Draw()
{
	m_frame1.Draw();
	m_frame2.Draw();
	m_frame3.Draw();
	m_select_word01.Draw();
	m_select_word02.Draw();
	m_select_word03.Draw();
}

void ss_w07::Collision(Base* b)
{

}