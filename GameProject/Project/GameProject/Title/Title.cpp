#include "Title.h"
#include"../Game/Game.h"

#include"../Gimic/Gimic.h"

Title::Title():Base(eType_Scene)
{
	m_haikei = COPY_RESOURCE("t_Haikei", CImage);
	m_title = COPY_RESOURCE("Title", CImage);
	m_title.SetSize(1000, 300);
	m_title.SetPos(480, 200);
	m_moji = COPY_RESOURCE("Moji", CImage);
	m_moji.SetSize(500, 150);
	m_moji.SetPos(700, 800);
	m_cnt = 0;
}

void Title::Update() 
{
	if (m_cnt++>2 && PUSH(CInput::eButton1)) {
		Base::KillAll();
		Base::Add(new Game());
		Base::Add(new Gimic());
	}
}

void Title::Draw() 
{
	m_haikei.Draw();
	m_title.Draw();
	m_moji.Draw();
}