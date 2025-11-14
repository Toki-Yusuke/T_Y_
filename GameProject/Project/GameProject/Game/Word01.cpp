#include "Word01.h"

Word01::Word01(const CVector2D & pos):Base(eType_Word01)
{
	m_word01 = COPY_RESOURCE("Word01", CImage);
	m_word01.SetCenter(24, 12);
	m_word01.SetSize(48, 24);
	m_pos = pos;
	m_rect = CRect(-24, 12, 24, -12);
}

void Word01::Update() 
{

}

void Word01::Draw() 
{
	m_word01.SetPos(GetScreenPos(m_pos));
	m_word01.Draw();
	//DrawRect();
}

void Word01::Collision(Base* b) 
{
}