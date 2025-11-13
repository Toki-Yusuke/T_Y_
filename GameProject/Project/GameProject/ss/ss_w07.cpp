#include "ss_w07.h"

ss_w07::ss_w07() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(260, 490);
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(920, 490);
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(1580, 490);
}

void ss_w07::Update()
{

}

void ss_w07::Draw()
{
	m_select_word01.Draw();
	m_select_word02.Draw();
	m_select_word03.Draw();
}

void ss_w07::Collision(Base* b)
{

}