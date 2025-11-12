#pragma once
#include"../Base/Base.h"
class Effect :public Base 
{
private:
	CImage m_img;
public:
	Effect(const char* name, const CVector2D& pos);
	void Update();
	void Draw();
	static TexAnimData _bomb_anim_data[];
};

