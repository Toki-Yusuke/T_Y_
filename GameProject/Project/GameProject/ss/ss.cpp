#include "ss.h"
#include"../Title/Title.h"

ss::ss():Base(eType_Scene)
{
	m_haikei = COPY_RESOURCE("ss_haikei", CImage);
	m_haikei.SetSize(1980, 1080);
	m_gc = COPY_RESOURCE("ss_logo1", CImage);
	m_gc.SetSize(886, 211);
	m_gc.SetPos(547, 260);
	m_tyfp = COPY_RESOURCE("ss_logo2", CImage);
	m_tyfp.SetSize(1080, 135);
	m_tyfp.SetPos(450, 720);
}

void ss::Update() 
{
	if (PUSH(CInput::eButton5))
	{
		Base::SetKill();
		Base::Add(new Title());
	}
}

void ss::Draw() 
{
	m_haikei.Draw();
	m_gc.Draw();
	m_tyfp.Draw();
}