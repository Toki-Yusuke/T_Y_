#include "ss_w09.h"
#include"ss.h"

ss_w09::ss_w09() :Base(eType_Scene)
, m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text2("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text3("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text4("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text5("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text6("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text7("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Fin_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
	m_cnt = 0;
}

void ss_w09::Update()
{
	m_cnt++;
	if (PUSH(CInput::eButton10) && m_cnt > 2)
	{
		Base::SetKill();
		Base::Add(new ss());
	}
}

void ss_w09::Draw()
{
	m_haikei.Draw();
	m_next.Draw();
	m_text1.Draw(400, 800, 1, 1, 1, "fin");
	/*
	m_text1.Draw(400, 150, 1, 1, 1, "3-1");
	m_text2.Draw(400, 150 + 120, 1, 1, 1, "3-2");
	m_text3.Draw(400, 150 + 120 + 120, 1, 1, 1, "3-3");
	m_text4.Draw(400, 150 + 120 + 120 + 120, 1, 1, 1, "3-4");
	m_text5.Draw(400, 150 + 120 + 120 + 120 + 120, 1, 1, 1, "3-5");
	m_text6.Draw(400, 150 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "3-6");
	m_text7.Draw(400, 150 + 120 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "3-7");
	*/
}