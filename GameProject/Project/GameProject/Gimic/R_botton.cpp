#include "R_botton.h"

R_botton::R_botton(const CVector2D& pos) :Base(eType_R_botton)
{
	m_r_botton = COPY_RESOURCE("R_botton", CImage);
	m_pos = pos;
}

void R_botton::Update()
{
}

void R_botton::Draw()
{
	m_r_botton.SetPos(GetScreenPos(m_pos));
	m_r_botton.Draw();
	DrawRect();
}

void R_botton::Collision(Base* b)
{
}