#include"Goal.h"
#include"../ss/ss.h"

Goal::Goal(const CVector2D& pos) :Base(eType_Goal) 
{
	m_Goal = COPY_RESOURCE("Goal", CImage);
	m_pos = pos;
	m_Goal.SetSize(80, 80);
	m_Goal.SetCenter(0, 0);
	m_rect = CRect(0, 24, 92, 72);
}

void Goal::Update() 
{
}

void Goal::Draw()
{
	m_Goal.Draw();
	m_Goal.SetPos(GetScreenPos(m_pos));
	DrawRect();
}

void Goal::Collision(Base * b)
{
	switch (b->m_type) 
	{
	case eType_Player:
		if (Base::CollisionRect(this, b)) 
		{
			this->SetKill();
			b->SetKill();
		}
	}
}