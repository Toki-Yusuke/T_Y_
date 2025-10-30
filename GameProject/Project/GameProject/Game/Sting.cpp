#include "Sting.h"

Sting::Sting(const CVector2D&pos):Base(eType_Object)
{
	m_sting = COPY_RESOURCE("Sting", CImage);
	m_pos = pos;
	m_sting.SetSize(96, 96);
	m_sting.SetCenter(48, 0);
	m_rect = CRect(-48, 96, 48, 0);
}

void Sting::Update() 
{
}

void Sting::Draw() 
{
	m_sting.SetPos(GetScreenPos(m_pos));
	m_sting.Draw();
	DrawRect();
}

void Sting::Collision(Base* b) 
{
}