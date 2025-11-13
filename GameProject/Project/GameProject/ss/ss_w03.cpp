#include "ss_w03.h"

ss_w03::ss_w03() :Base(eType_Scene)
{
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(780, 490);
}

void ss_w03::Update()
{

}

void ss_w03::Draw()
{
	m_select_word03.Draw();
}

void ss_w03::Collision(Base* b)
{

}