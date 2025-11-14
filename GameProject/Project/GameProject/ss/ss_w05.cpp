#include "ss_w05.h"

ss_w05::ss_w05() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(390, 490);
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(1170, 490);
	m_frame1 = COPY_RESOURCE("frame", CImage);
	m_frame1.SetSize(220, 140);
	m_frame1.SetPos(380, 470);
	m_frame2 = COPY_RESOURCE("frame", CImage);
	m_frame2.SetSize(220, 140);
	m_frame2.SetPos(1160, 470);
}

void ss_w05::Update()
{

}

void ss_w05::Draw()
{
	m_frame1.Draw();
	m_frame2.Draw();
	m_select_word01.Draw();
	m_select_word03.Draw();
}

void ss_w05::Collision(Base* b)
{

}