#include "ss_w02.h"

ss_w02::ss_w02() :Base(eType_Scene)
{
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(780, 490);
	m_frame = COPY_RESOURCE("frame", CImage);
	m_frame.SetSize(220, 140);
	m_frame.SetPos(770, 470);
}

void ss_w02::Update()
{

}

void ss_w02::Draw()
{
	m_frame.Draw();
	m_select_word02.Draw();
}

void ss_w02::Collision(Base* b)
{

}