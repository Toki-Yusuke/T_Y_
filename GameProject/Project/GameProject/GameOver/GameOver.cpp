#include "GameOver.h"
#include"../Title/Title.h"

GameOver::GameOver():Base(eType_Scene)
{
	m_haikei = COPY_RESOURCE("t_Haikei", CImage);
	m_logo = COPY_RESOURCE("Over_Logo", CImage);
	m_logo.SetSize(1044, 275);
	m_logo.SetPos(458, 403);
	m_moji = COPY_RESOURCE("Moji", CImage);
	m_moji.SetSize(300, 100);
	m_moji.SetPos(800, 679);
}

void GameOver::Update() 
{
	if (PUSH(CInput::eButton1)) {
		Base::KillAll();
		Base::Add(new Title());
	}
}

void GameOver::Draw() 
{
	m_haikei.Draw();
	m_logo.Draw();
	m_moji.Draw();
}