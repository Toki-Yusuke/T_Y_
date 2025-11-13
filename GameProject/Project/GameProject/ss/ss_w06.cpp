#include "ss_w06.h"

ss_w06::ss_w06() :Base(eType_Scene)
{
	m_select_word02 = COPY_RESOURCE("Word02", CImage);
	m_select_word02.SetSize(200, 100);
	m_select_word02.SetPos(390, 490);
	m_select_word03 = COPY_RESOURCE("Word03", CImage);
	m_select_word03.SetSize(200, 100);
	m_select_word03.SetPos(1170, 490);

}

void ss_w06::Update()
{

}

void ss_w06::Draw()
{
	m_select_word02.Draw();
	m_select_word03.Draw();
}

void ss_w06::Collision(Base* b)
{

}