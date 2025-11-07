#include "B_rock.h"

B_rock::B_rock(const CVector2D & pos):Base(eType_Object)
{
	m_b_rock = COPY_RESOURCE("B_rock", CImage);
	m_pos = pos;
	m_b_rock.SetSize(98, 98);
	m_rect = CRect(0, 0, 98, 98);
}

void B_rock::Update() 
{
}

void B_rock::Draw()
{
	m_b_rock.SetPos(GetScreenPos(m_pos));
	m_b_rock.Draw();
	DrawRect();
}

void B_rock::Collision(Base* b)
{

}