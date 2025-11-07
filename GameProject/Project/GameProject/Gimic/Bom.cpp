#include "Bom.h"
#include"../Game/Map.h"
#include"../Game/Player.h"

Bom::Bom(const CVector2D& pos):Base(eType_Item)
{
	m_bom = COPY_RESOURCE("Bom", CImage);
	m_bom.SetSize(108, 108);
	m_pos_old = m_pos = pos;
	m_is_ground = true;
	m_rect = CRect(0, 0, 108, 108);
}

void Bom::Update() 
{
	m_pos_old = m_pos;
	//落ちていたら落下中状態へ移行
	if (m_is_ground && m_vec.y > GRAVITY * 4)
		m_is_ground = false;
	//重力による落下
	m_vec.y += GRAVITY;
	m_pos += m_vec;
}

void Bom::Draw() 
{
	m_bom.SetPos(GetScreenPos(m_pos));
	m_bom.Draw();
	DrawRect();
}

void Bom::Move()
{
	const float move_speed = 6;
	Base* player = Base::FindObject(eType_Player);
	switch (player->m_pos.x > m_pos.x + 1 ) 
	{
	case true:
		m_pos.x += -move_speed;
		break;
	case false:
		m_pos.x += move_speed;
		break;
	}
}

void Bom::Collision(Base* b) 
{
	switch (b->m_type) {
	case eType_Field:
		if (Map* m = dynamic_cast<Map*>(b)) {
			int t;
			t = m->CollisionRect(CVector2D(m_pos.x, m_pos_old.y), m_rect);
			if (t != 0) {
				m_pos.x = m_pos_old.x;
			}
			t = m->CollisionRect(CVector2D(m_pos_old.x, m_pos.y), m_rect);
			if (t != 0) {
				m_pos.y = m_pos_old.y;
				//落下速度リセット
				m_vec.y = 0;
				//接地フラグON
				m_is_ground = true;
			}
		}
		break;
	case eType_Player:
		if (Base::CollisionRect(this, b)) 
		{
			this->Move();
		}
		break;
	case eType_Object:
		if (Base::CollisionRect(this, b)) 
		{
			this->SetKill();
			b->SetKill();
		}
	}
}