#include "ss_w07.h"
#include"ss_w00.h"

ss_w07::ss_w07() :Base(eType_Scene), m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Word01_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
}

void ss_w07::Update()
{
	if (PUSH(CInput::eButton10))
	{
		Base::SetKill();
		Base::Add(new ss_w00());
	}
}

void ss_w07::Draw()
{
	m_haikei.Draw();
	m_text1.Draw(400, 800, 1, 1, 1, "1");
	m_next.Draw();
}