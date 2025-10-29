#include "Title.h"
#include"../Game/Game.h"

Title::Title():Base(eType_Scene)
{
	m_img = COPY_RESOURCE("Haikei", CImage);
	m_cnt = 0;
}

void Title::Update() 
{
	if (PUSH(CInput::eButton1)) {
		Base::KillAll();
		Base::Add(new Game());
	}
}

void Title::Draw() 
{
	m_img.Draw();
}