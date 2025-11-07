#include "R_wall.h"

R_wall::R_wall(const CVector2D& pos) :Base(eType_R_wall)
{
	m_r_wall = COPY_RESOURCE("B_wall", CImage);
	m_pos = pos;
	m_r_wall.SetSize(98, 98);
	m_rect = CRect(0, 0, 98, 98);
}

void R_wall::Update()
{
}

void R_wall::Draw()
{
	m_r_wall.SetPos(GetScreenPos(m_pos));
	m_r_wall.Draw();
	DrawRect();
}

void R_wall::BotoonOn()
{

}

void R_wall::Collision(Base* b)
{
}