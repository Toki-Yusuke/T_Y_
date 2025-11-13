#include "ss_w05.h"

ss_w05::ss_w05() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(390, 490);
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(1170, 490);
}

void ss_w05::Update()
{

}

void ss_w05::Draw()
{
	m_select_word01.Draw();
	m_select_word03.Draw();
}

void ss_w05::Collision(Base* b)
{

}