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
	m_alpha = 0.0f;
	m_fontstate = 0;
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
	switch (m_fontstate) {
	case 0:
		//if (PUSH(CInput::eButton1))
		m_fontstate++;
		break;
	case 1:
		//ƒÆ‰ÁZ
		m_alpha += 0.05f;
		if (m_alpha > DtoR(180)) {
			m_alpha = 0;
		}
		break;
	}
	//’Êí‚ÌƒƒS‚Ì•`‰æ
	m_moji.SetSize(500, 150);
	m_moji.SetPos(700, 800);

	m_moji.SetColor(1, 1, 1, 1);
	m_moji.Draw();

	//d‚Ë‚Ä•`‰æ

	//sinƒJ[ƒu
	m_moji.SetColor(1, 1, 1, sin(m_alpha));


	m_haikei.Draw();
	m_title.Draw();
	//m_Logo.Draw();
	m_moji.Draw();
}