#include "Sting.h"

Sting::Sting(const CVector2D & pos):Base(eType_Enemy)
{
	m_sting = COPY_RESOURCE("Sting", CImage);
	m_sting.SetCenter(0, 0); 
	m_sting.SetSize(82, 82);
	m_pos = pos;
	m_rect = CRect(0, 0, 82, 82);
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
	switch (m_type) 
	{
	case eType_Player:
		if (Base::CollisionRect(this, b)) 
		{
			b->SetKill();
		}
	}
}