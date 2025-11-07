#include"Gimic.h"
#include"Sting.h"
#include"Bom.h"
#include"B_rock.h"
#include"B_botton.h"
#include"R_botton.h"
#include"B_wall.h"
#include"R_wall.h"

Gimic::Gimic() :Base(eType_Scene)
{
	Base::Add(new Sting(CVector2D(814, 799)));
	Base::Add(new Bom(CVector2D(3000, 763)));
	Base::Add(new B_rock(CVector2D(3430, 687)));
	Base::Add(new B_rock(CVector2D(3430, 785)));
	Base::Add(new B_botton(CVector2D(880, 1960)));
}

void Gimic::Update()
{
	if (!Base::FindObject(eType_B_botton)&&!Base::FindObject(eType_B_wall))
	{
		Base::Add(new B_wall(CVector2D(98, 1764)));
		Base::Add(new B_wall(CVector2D(49, 1568)));
	}
	if (!Base::FindObject(eType_R_botton) && Base::FindObject(eType_B_wall))
	{
		Base::Add(new R_botton(CVector2D(146, 1322)));
	}
}