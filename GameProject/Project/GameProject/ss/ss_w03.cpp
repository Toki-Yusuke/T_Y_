#include "ss_w03.h"
#include"ss.h"

ss_w03::ss_w03() :Base(eType_Scene)
, m_text1("C:\\Windows\\Fonts\\msgothic.ttc", 50)
, m_text2("C:\\Windows\\Fonts\\msgothic.ttc", 60)
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
	m_next.Draw();
	//m_text1.Draw(400, 800, 1, 1, 1, "3");
	
	m_text1.Draw(10, 150, 1, 1, 1, "黒くつばの広い帽子をかぶりそれと同じ色のローブを纏った女が暗い森を歩いていた");//38文字
	m_text2.Draw(120, 150 + 110, 1, 1, 1, "そのいでたちはまさに魔女のようであり実際に女は魔女だった");//28文字
	m_text2.Draw(240, 150 + 110 + 110, 1, 1, 1, "それも飛び切り危険な魔女ありていに言えば悪い魔女");//24文字
	m_text2.Draw(510, 150 + 110 + 110 + 110, 1, 1, 1, "その名を『呪怨』の魔女と言った");//15文字
	m_text2.Draw(150, 150 + 110 + 110 + 110 + 110, 1, 1, 1, "大多数の魔女が振りまくのは祝福であり決して呪いではない");//27文字
	m_text2.Draw(150, 150 + 110 + 110 + 110 + 110 + 110, 1, 1, 1, "だが何事にも例外はいるもので『呪怨』の魔女がそうだった");//27文字
	m_text2.Draw(60, 150 + 110 + 110 + 110 + 110 + 110 + 110, 1, 1, 1, "「さぁて次は何がいいかしら」魔女は誰に聞かせるでもなく呟いた");//30文字
	m_text2.Draw(90, 150 + 110 + 110 + 110 + 110 + 110 + 110 + 110, 1, 1, 1, "...魔女の歩いた道には呪いを受けた動物が無数に倒れていた");//29文字
	
}