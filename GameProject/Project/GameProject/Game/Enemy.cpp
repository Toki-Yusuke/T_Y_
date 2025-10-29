#include"Enemy.h"
#include"Player.h"
#include"Map.h"

Enemy::Enemy(const CVector2D& pos, bool flip) :Base(eType_Enemy)
{
	m_img = COPY_RESOURCE("Enemy", CImage);
	m_img.SetSize(80, 80);
	m_img.SetCenter(0, 0);
	m_pos_old = m_pos = pos;
	m_is_ground = true;
	m_state = eState_Idle;
	//当たり判定用矩形設定
	m_rect = CRect(0, 0, 96, 96);
}

void Enemy::StateIdle()
{

	bool move_flag = false;
	const float move_speed = 2;
	m_pos.x += move_speed;
	//ジャンプ中なら
	if (!m_is_ground) {
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


void Enemy::Update()
{
	m_pos_old = m_pos;
	switch (m_state) {
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
}

void Enemy::Draw()
{
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	DrawRect();
}

void Enemy::Takedamage(int dmg)
{

}

void Enemy::Collision(Base* b)
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
	}
}