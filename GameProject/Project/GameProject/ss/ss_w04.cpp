#include "ss_w04.h"

ss_w04::ss_w04() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(390, 490);
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(1170, 490);
}

void ss_w04::Update()
{

}

void ss_w04::Draw()
{
	m_select_word01.Draw();
	m_select_word02.Draw();
}

void ss_w04::Collision(Base* b)
{

}