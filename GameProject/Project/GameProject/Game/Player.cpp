#include"Player.h"
#include"Map.h"
#include"Enemy.h"
#include"Game.h"

Player::Player(const CVector2D& pos, bool flip) :Base(eType_Player)
{
	m_img = COPY_RESOURCE("Player", CImage);
	m_img.SetSize(80, 80);
	m_img.SetCenter(0, 0);
	m_pos_old = m_pos = pos;
	m_is_ground = true;
	m_state = eState_Idle;
	//�����蔻��p��`�ݒ�
	m_rect = CRect(24, 0, 72, 92);
}

void Player::StateIdle()
{
	
	const float jump_pow = 15;
	bool move_flag = false;
	const float move_speed = 6;
	//���̈ړ�
	if (HOLD(CInput::eLeft))
	{
		m_pos.x += -move_speed;
	}
	//�E�̈ړ�
	if (HOLD(CInput::eRight))
	{
		m_pos.x += move_speed;
	}
	if (m_is_ground && PUSH(CInput::eButton5)) {
		m_vec.y = -jump_pow;
		m_is_ground = false;
	}
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

void Player::Update() 
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

	if (m_ground_y < 0) 
	{
		Base::SetKill();
	}
	//�X�N���[���ݒ�
	m_scroll.x = m_pos.x - 1960 / 2;
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
	case eType_Enemy:
		if (Base::CollisionRect(this, b))
		{
			this->SetKill();
			b->SetKill();
		}
		break;
	}	
}