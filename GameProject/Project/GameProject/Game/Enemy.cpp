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
	//�����蔻��p��`�ݒ�
	m_rect = CRect(0, 0, 96, 96);
}

void Enemy::StateIdle()
{

	bool move_flag = false;
	const float move_speed = 2;
	m_pos.x += move_speed;
	//�W�����v���Ȃ�
	if (!m_is_ground) {
		if (m_vec.y < 0)
			//�㏸�A�j���[�V����
			m_img.ChangeAnimation(eAnimJumpUp, false);
		else
			//���~�A�j���[�V����
			m_img.ChangeAnimation(eAnimJumpDown, false);
	}
	//�n�ʂɂ���Ȃ�
	else
	{
		if (move_flag)
			//����A�j���[�V����
			m_img.ChangeAnimation(eAnimRun);
		else
			//�ҋ@�A�j���[�V����
			m_img.ChangeAnimation(eAnimIdle);
	}
	
}


void Enemy::Update()
{
	m_pos_old = m_pos;
	switch (m_state) {
		//�ʏ���
	case eState_Idle:
		StateIdle();
		break;
	}
	//�����Ă����痎������Ԃֈڍs
	if (m_is_ground && m_vec.y > GRAVITY * 4)
		m_is_ground = false;
	//�d�͂ɂ�闎��
	m_vec.y += GRAVITY;
	m_pos += m_vec;


	//�X�N���[���ݒ�
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
				//�������x���Z�b�g
				m_vec.y = 0;
				//�ڒn�t���OON
				m_is_ground = true;
			}
		}
		break;
	}
}