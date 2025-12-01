#include "ss_w05.h"
#include"ss_w03.h"

ss_w05::ss_w05() :Base(eType_Scene)
, m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text2("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text3("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text4("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text5("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text6("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text7("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Word01_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
}

void ss_w05::Update()
{
	if (PUSH(CInput::eButton10))
	{
		Base::SetKill();
		Base::Add(new ss_w03());
	}
}

void ss_w05::Draw()
{
	m_haikei.Draw();
	m_next.Draw();
	m_text1.Draw(400, 800, 0, 0, 0, "1");
	/*
	m_text1.Draw(400, 150, 0, 0, 0, "とある小さく平和な村に兄弟が住んでいた");
	m_text2.Draw(400, 150 + 120, 0, 0, 0, "二人は平和を好み、争いを嫌っていた");
	m_text3.Draw(400, 150 + 120 + 120, 0, 0, 0, "だが突如として村の平和だった日々は一変してしまった");
	m_text4.Draw(400, 150 + 120 + 120 + 120, 0, 0, 0, "家屋や農作物はすべて焼かれ、村の復興に忙しくする日々の中");
	m_text5.Draw(400, 150 + 120 + 120 + 120 + 120, 0, 0, 0, "この生活が変わってしまうのではないかという恐怖が");
	m_text6.Draw(400, 150 + 120 + 120 + 120 + 120 + 120, 0, 0, 0, "村人たちの気遣いという心を蝕んでいた");
	m_text7.Draw(400, 150 + 120 + 120 + 120 + 120 + 120 + 120, 0, 0, 0, "だからこそ弟に手を貸すものは現れなかった");
	*/
}