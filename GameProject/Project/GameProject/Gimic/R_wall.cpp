#include "R_wall.h"

R_wall::R_wall(const CVector2D& pos) :Base(eType_R_wall)
{
	m_r_wall = COPY_RESOURCE("R_wall", CImage);
	m_pos = pos;
	m_r_wall.SetSize(98, 98);
	m_rect = CRect(0, 0, 98, 98);
}

void R_wall::Update()
{
	if (!Base::FindObject(eType_R_botton)&&Base::FindObject(eType_B_wall)) 
	{
		Base::SetKill();
	}
}

void R_wall::Draw()
{
	m_r_wall.SetPos(GetScreenPos(m_pos));
	m_r_wall.Draw();
	DrawRect();
}

void R_wall::Collision(Base* b)
{
}