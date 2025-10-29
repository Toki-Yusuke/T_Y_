#include "GameOver.h"

GameOver::GameOver():Base(eType_Scene)
{
	m_Haikei = COPY_RESOURCE("Haikei", CImage);
	m_Logo = COPY_RESOURCE("Over_Logo", CImage);
	m_Logo.SetSize(1044, 275);
	m_Logo.SetPos(458, 403);
}

void GameOver::Update() 
{

}

void GameOver::Draw() 
{
	m_Haikei.Draw();
	m_Logo.Draw();
}