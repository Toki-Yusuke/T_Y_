#include "B_wall.h"

B_wall::B_wall(const CVector2D& pos):Base(eType_B_wall)
{
	m_b_wall = COPY_RESOURCE("B_wall", CImage);
	m_pos = pos;
	m_b_wall.SetSize(98, 98);
	m_rect = CRect(0, 0, 98, 98);
}

void B_wall::Update()
{
}

void B_wall::Draw()
{
	m_b_wall.SetPos(GetScreenPos(m_pos));
	m_b_wall.Draw();
	DrawRect();
}

void B_wall::BotoonOn() 
{

}

void B_wall::Collision(Base* b) 
{
}