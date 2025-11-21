#include"Player.h"
#include"Map.h"
#include"Enemy.h"
#include"Game.h"

Player::Player(const CVector2D& pos, bool flip) :Base(eType_Player)
{
	m_img = COPY_RESOURCE("Player", CImage);
	m_img.SetSize(80, 80);
	m_img.SetCenter(40, 0);
	m_pos_old = m_pos = pos;
	m_is_ground = true;
	m_state = eState_Idle;
	//当たり判定用矩形設定
	m_rect = CRect(-14, 0, 24, 92);
}

void Player::StateIdle()
{
	
	const float jump_pow = 15;
	bool move_flag = false;
	const float move_speed = 6;
	//左の移動
	if (HOLD(CInput::eLeft))
	{
		m_pos.x += -move_speed;
	}
	//右の移動
	if (HOLD(CInput::eRight))
	{
		m_pos.x += move_speed;
	}
	if (m_is_ground && PUSH(CInput::eButton5)) 
	{
		m_vec.y = -jump_pow;
		m_is_ground = false;
	}
	//ジャンプ中なら
	if (!m_is_ground) 
	{
		if (m_vec.y < 0)
			//上昇アニメーション
			m_img.ChangeAnimation(eAnimJumpUp, false);
		else
			//下降アニメーション
			m_img.ChangeAnimation(eAnimJumpDown, false);
	}
	//地面にいるなら
	else
	{
		if (move_flag)
			//走るアニメーション
			m_img.ChangeAnimation(eAnimRun);
		else
			//待機アニメーション
			m_img.ChangeAnimation(eAnimIdle);
	}
}

void Player::Update() 
{
	m_pos_old = m_pos;
	switch (m_state) 
	{
		//通常状態
	case eState_Idle:
		StateIdle();
		break;
	}
	//落ちていたら落下中状態へ移行
	if (m_is_ground && m_vec.y > GRAVITY * 4)
		m_is_ground = false;
	//重力による落下
	m_vec.y += GRAVITY;
	m_pos += m_vec;
	//スクロール設定
	m_scroll.x = m_pos.x - 1960 / 2;
	m_scroll.y = m_pos.y - 1080 / 2;
}

void Player::Draw() 
{
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	DrawRect();
}

void Player::Takedamge(int dmg)
{
}

void Player::Collision(Base* b)
{

	switch (b->m_type) {
	case eType_Field:
		if (Map* m = dynamic_cast<Map*>(b))
		{
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
	case eType_Object:
		if (Base::CollisionRect(CVector2D(m_pos.x, m_pos_old.y), m_rect, b->m_pos, b->m_rect))
		{
			this->m_pos.x = m_pos_old.x;
		}
		if (Base::CollisionRect(CVector2D(m_pos_old.x, m_pos.y), m_rect, b->m_pos, b->m_rect))
		{
			this->m_pos.y = m_pos_old.y;
			m_vec.y = 0;
			m_is_ground = true;
		}
		break;
	case eType_Enemy:
		if (Base::CollisionRect(this, b))
		{
			this->SetKill();
			b->SetKill();
		}
		break;
	case eType_Word01:
		if (Base::CollisionRect(this, b))
		{
			b->SetKill();
		}
		break;
	case eType_Word02:
		if (Base::CollisionRect(this, b))
		{
			b->SetKill();
		}
		break;
	case eType_Word03:
		if (Base::CollisionRect(this, b))
		{
			b->SetKill();
		}
		break;
	case eType_B_botton:
		if (Base::CollisionRect(this, b))
		{
			b->SetKill();
		}
		break;
	case eType_R_botton:
		if (Base::CollisionRect(this, b))
		{
			b->SetKill();
		}
	case eType_B_wall:
		if (Base::CollisionRect(CVector2D(m_pos.x,m_pos_old.y),m_rect,b->m_pos,b->m_rect))
		{
			this->m_pos.x = m_pos_old.x;
		}
		if (Base::CollisionRect(CVector2D(m_pos_old.x, m_pos.y), m_rect, b->m_pos, b->m_rect))
		{
			this->m_pos.y = m_pos_old.y;
			m_vec.y = 0;
			m_is_ground = true;
		}
		break;
	case eType_R_wall:
		if (Base::CollisionRect(CVector2D(m_pos.x, m_pos_old.y), m_rect, b->m_pos, b->m_rect))
		{
			this->m_pos.x = m_pos_old.x;
		}
		if (Base::CollisionRect(CVector2D(m_pos_old.x, m_pos.y), m_rect, b->m_pos, b->m_rect))
		{
			this->m_pos.y = m_pos_old.y;
			m_vec.y = 0;
			m_is_ground = true;
		}
		break;
	}
}