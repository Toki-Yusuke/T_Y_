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
	//棘(上段)
	Base::Add(new Sting(CVector2D(814, 799)));
	//棘(下段右)
	Base::Add(new Sting(CVector2D(3000, 1974)));
	//棘(下段左)
	Base::Add(new Sting(CVector2D(2500, 1974)));
	//爆弾
	Base::Add(new Bom(CVector2D(3000, 763)));
	//壊れる岩(上)
	Base::Add(new B_rock(CVector2D(3430, 687)));
	//壊れる岩(下)
	Base::Add(new B_rock(CVector2D(3430, 785)));
	//青ボタン
	Base::Add(new B_botton(CVector2D(880, 1960)));
	//赤壁01
	Base::Add(new R_wall(CVector2D(1078, 1078)));
	//赤壁02
	Base::Add(new R_wall(CVector2D(1078, 1176)));
	//赤壁03
	Base::Add(new R_wall(CVector2D(1078, 1274)));
	//赤壁04
	Base::Add(new R_wall(CVector2D(1078, 1372)));
	//赤壁05
	Base::Add(new R_wall(CVector2D(1078, 1470)));
}

void Gimic::Update()
{
	if (!Base::FindObject(eType_B_botton) && !Base::FindObject(eType_B_wall))
	{
		//青壁01
		Base::Add(new B_wall(CVector2D(98, 1764 - 196)));
		//赤ボタン
		Base::Add(new R_botton(CVector2D(490, 1372)));
		//赤壁06
		Base::Add(new R_wall(CVector2D(784, 1078)));
		//赤壁07
		Base::Add(new R_wall(CVector2D(784, 1176)));
		//赤壁08
		Base::Add(new R_wall(CVector2D(784, 1274))); 
		//赤壁09
		Base::Add(new R_wall(CVector2D(784, 1372)));
		//赤壁10
		Base::Add(new R_wall(CVector2D(784, 1470)));
		//赤壁11
		Base::Add(new R_wall(CVector2D(784, 1666)));
		//赤壁12
		Base::Add(new R_wall(CVector2D(784, 1764)));
		//棘(下段、突然)
		Base::Add(new Sting(CVector2D(588, 1470)));
	}
}