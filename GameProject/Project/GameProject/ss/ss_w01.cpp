#include "ss_w01.h"

ss_w01::ss_w01() :Base(eType_Scene)
{
	m_select_word01 = COPY_RESOURCE("Word01", CImage);
	m_select_word01.SetSize(200, 100);
	m_select_word01.SetPos(780, 490);
}

void ss_w01::Update()
{

}

void ss_w01::Draw()
{
	m_select_word01.Draw();
}

void ss_w01::Collision(Base* b)
{

}