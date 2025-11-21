#include "ss_w03.h"
#include"ss.h"

ss_w03::ss_w03() :Base(eType_Scene), m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Word03_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
	m_cnt = 0;
}

void ss_w03::Update()
{
	m_cnt++;
	if (PUSH(CInput::eButton10) && m_cnt > 2)
	{
		Base::SetKill();
		Base::Add(new ss());
	}
}

void ss_w03::Draw()
{
	m_haikei.Draw();
	m_text1.Draw(400, 800, 1, 1, 1, "3");
	m_next.Draw();
}