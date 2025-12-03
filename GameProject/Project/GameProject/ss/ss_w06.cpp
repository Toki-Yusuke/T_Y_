#include "ss_w06.h"
#include"ss_w03.h"

ss_w06::ss_w06() :Base(eType_Scene)
, m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 60)
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
	m_next.Draw();
	//m_text1.Draw(400, 800, 1, 1, 1, "2");
	
	m_text1.Draw(300, 150, 1, 1, 1, "黒い龍が一頭、何かを探すように空を舞っていた");//22文字
	m_text1.Draw(60, 150 + 120, 1, 1, 1, "やがて龍は目当てのものを見つけたのか高度を下げ地に降り立った");//30文字
	m_text1.Draw(420, 150 + 120 + 120, 1, 1, 1, "降り立った龍は辺りを劫火で焼き払った");//18文字
	m_text1.Draw(300, 150 + 120 + 120 + 120, 1, 1, 1, "目に見えるもの全てに怒りをぶつけるかのように");//22文字
	m_text1.Draw(210, 150 + 120 + 120 + 120 + 120, 1, 1, 1, "全てを焼き払った龍は生き残った一人の男に目を付けた");//25文字
	m_text1.Draw(210, 150 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "そして龍は男に向かって黒い瘴気のようなものを放った");//25文字
	m_text1.Draw(120, 150 + 120 + 120 + 120 + 120 + 120 + 120, 1, 1, 1, "男の身に黒い龍のような痣が浮かび上がると竜は空へと消えた");//28文字
	
}