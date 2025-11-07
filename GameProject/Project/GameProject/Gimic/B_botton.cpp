#include "B_botton.h"

B_botton::B_botton(const CVector2D& pos):Base(eType_B_botton)
{
	m_b_botton = COPY_RESOURCE("B_botton", CImage);
	m_pos = pos;
	m_b_botton.SetSize(96, 96);
	m_rect = CRect(0, 0, 96, 96);
}

void B_botton::Update()
{
}

void B_botton::Draw()
{
	m_b_botton.SetPos(GetScreenPos(m_pos));
	m_b_botton.Draw();
	DrawRect();
}

void B_botton::Collision(Base* b)
{
}