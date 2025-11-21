#include "ss_w06.h"
#include"ss_w03.h"

ss_w06::ss_w06() :Base(eType_Scene), m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Word02_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
}

void ss_w06::Update()
{
	if (PUSH(CInput::eButton10))
	{
		Base::SetKill();
		Base::Add(new ss_w03());
	}
}

void ss_w06::Draw()
{
	m_haikei.Draw();
	m_text1.Draw(400, 800, 1, 1, 1, "2");
	m_next.Draw();
}