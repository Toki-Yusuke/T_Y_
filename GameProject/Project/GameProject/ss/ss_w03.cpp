#include "ss_w03.h"

ss_w03::ss_w03() :Base(eType_Scene)
{
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(780, 490);
	m_frame = COPY_RESOURCE("frame", CImage);
	m_frame.SetSize(220, 140);
	m_frame.SetPos(770, 470);
}

void ss_w03::Update()
{

}

void ss_w03::Draw()
{
	m_frame.Draw();
	m_select_word03.Draw();
}

void ss_w03::Collision(Base* b)
{

}