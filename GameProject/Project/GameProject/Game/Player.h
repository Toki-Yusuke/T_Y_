#pragma once
#include"../Base/Base.h"

class Player :public Base 
{
	enum {
		eAnimIdle=0,
		eAnimRun,
		eAnimJumpUp,
		eAnimJumpDown,
	};
	CImage m_img;
	bool m_flip;
	bool m_is_ground;
	float m_ground_y;
	//ó‘Ô
	enum {
		eState_Idle,
	};
	//ó‘Ô•Ï”
	int m_state;
	//Šeó‘Ô‚Å‚Ì‹““®
	void StateIdle();
public:
	Player(const CVector2D&pos,bool flip);
	void Update();
	void Draw();
	void Takedamge(int dmg);
	void Collision(Base* b);
	float GetGroundY() {
		return m_ground_y;
	};
};