#pragma once
#include"../Base/Base.h"

class Enemy :public Base
{
	enum {
		eAnimIdle = 0,
		eAnimRun,
		eAnimJumpUp,
		eAnimJumpDown,
	};
	CImage m_img;
	bool m_flip;
	bool m_is_ground;
	//���
	enum {
		eState_Idle,
	};
	//��ԕϐ�
	int m_state;
	//�e��Ԃł̋���
	void StateIdle();
public:
	Enemy(const CVector2D& pos, bool flip);
	void Update();
	void Draw();
	void Takedamage(int dmg);
	void Collision(Base* b);
};