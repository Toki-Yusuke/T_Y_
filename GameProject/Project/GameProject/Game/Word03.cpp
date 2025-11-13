#include "Word03.h"

Word03::Word03(const CVector2D& pos) :Base(eType_Word03)
{
	m_word03 = COPY_RESOURCE("Word03", CImage);
	m_word03.SetCenter(24, 12);
	m_word03.SetSize(48, 24);
	m_pos = pos;
	m_rect = CRect(-24, 12, 24, -12);
}

void Word03::Update()
{

}

void Word03::Draw()
{
	m_word03.SetPos(GetScreenPos(m_pos));
	m_word03.Draw();
	DrawRect();
}

void Word03::Collision(Base* b)
{
}