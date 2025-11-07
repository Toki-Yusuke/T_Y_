#include "R_botton.h"

R_botton::R_botton(const CVector2D& pos):Base(eType_R_botton)
{
	m_r_botton = COPY_RESOURCE("R_botton", CImage);
	m_pos = pos;
	m_r_botton.SetSize(96, 96);
	m_r_botton.SetCenter(48, 48);
	m_rect = CRect(-48, 48, 48, -48);
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
	switch (m_type) 
	{
	case eType_Player:
		if (Base::CollisionRect(this, b)) 
		{
			this->SetKill();
		}
	}
}