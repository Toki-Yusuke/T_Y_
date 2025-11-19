#include "ss_w04.h"
#include"ss.h"

ss_w04::ss_w04() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(390, 490);
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(1170, 490);
	m_frame1 = COPY_RESOURCE("frame", CImage);
	m_frame1.SetSize(220, 140);
	m_frame1.SetPos(380, 470);
	m_frame2 = COPY_RESOURCE("frame", CImage);
	m_frame2.SetSize(220, 140);
	m_frame2.SetPos(1160, 470);
}

void ss_w04::Update()
{
	if (PUSH(CInput::eButton10))
	{
		Base::SetKill();
		Base::Add(new ss());
	}
}

void ss_w04::Draw()
{
	m_frame1.Draw();
	m_frame2.Draw();
	m_select_word01.Draw();
	m_select_word02.Draw();
}

void ss_w04::Collision(Base* b)
{

}