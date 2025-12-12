#include "Sousa.h"

Sousa::Sousa() :Base(eType_Field), m_text("C:\\Windows\\Fonts\\msgothic.ttc", 30)

{
	m_sayuu = COPY_RESOURCE("LR", CImage);
	m_sayuu.SetSize(116, 44);
	m_sayuu.SetPos(10, 10);
	m_space = COPY_RESOURCE("Space", CImage);
	m_space.SetSize(120, 48);
	m_space.SetPos(10, 60);
}

void Sousa::Draw()
{
	m_sayuu.Draw();
	m_space.Draw();
	m_text.Draw(130, 45, 1, 1, 1, "ˆÚ“®");
	m_text.Draw(130, 95, 1, 1, 1, "ƒWƒƒƒ“ƒv");
}