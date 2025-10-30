#include "Field.h"

Field::Field():Base(eType_Field)
{
	m_Haikei = COPY_RESOURCE("f_Haikei", CImage);
}

void Field::Update() 
{

}

void Field::Draw() 
{
	m_Haikei.Draw();
}