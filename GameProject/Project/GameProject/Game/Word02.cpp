#include "Word02.h"

Word02::Word02(const CVector2D& pos) :Base(eType_Word02)
{
	m_word02 = COPY_RESOURCE("Word02", CImage);
	m_word02.SetCenter(24, 12);
	m_word02.SetSize(48, 24);
	m_pos = pos;
	m_rect = CRect(-24, 12, 24, -12);
}

void Word02::Update()
{

}

void Word02::Draw()
{
	m_word02.SetPos(GetScreenPos(m_pos));
	m_word02.Draw();
	//DrawRect();
}

void Word02::Collision(Base* b)
{
}