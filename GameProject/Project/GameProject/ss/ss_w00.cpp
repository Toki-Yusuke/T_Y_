#include "ss_w00.h"
#include"ss_w08.h"
ss_w00::ss_w00() :Base(eType_Scene)
, m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text2("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text3("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text4("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text5("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text6("C:\\Windows\\Fonts\\msgothic.ttc", 90)
, m_text7("C:\\Windows\\Fonts\\msgothic.ttc", 90)
{
	m_haikei = COPY_RESOURCE("Word02_haikei", CImage);
	m_next = COPY_RESOURCE("Next", CImage);
	m_next.SetSize(648, 92);
	m_next.SetPos(666, 950);
	m_cnt = 0;
}

void ss_w00::Update()
{
	m_cnt++;
	if (PUSH(CInput::eButton10) && m_cnt > 2)
	{
		Base::SetKill();
		Base::Add(new ss_w08());
	}
}

void ss_w00::Draw()
{
	m_haikei.Draw();
	m_next.Draw();	
	m_text1.Draw(400, 800, 1, 1, 1, "2");
	/*
	m_text1.Draw(400, 150, 1, 1, 1, "黒い龍が一頭、何かを探すように空を舞っていた");
	m_text2.Draw(400, 150 + 120, 1, 1, 1, "やがて龍は目当てのものを見つけたのか高度を下げ地に降り立った");
	m_text3.Draw(400, 150 + 120 + 120, 1, 1, 1, "降り立った龍は辺りを劫火で焼き払った");
	m_text4.Draw(400, 150 + 120 + 120 + 120, 1, 1, 1, "目に見えるもの全てに怒りをぶつけるかのように");
	m_text5.Draw(400, 150 + 120 + 120 + 120 + 120, 1, 1, 1, "全てを焼き払った龍は生き残った一人の男に目を付けた");
	m_text6.Draw(400, 150 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "そして龍は男に向かって黒い瘴気のようなものを放った");
	m_text7.Draw(400, 150 + 120 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "男の身に黒い龍のような痣が浮かび上がると竜は空へと消えた");
	*/
}