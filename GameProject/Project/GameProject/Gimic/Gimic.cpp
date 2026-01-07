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
	//棘(スタート直後の階段真下)
	Base::Add(new Sting(CVector2D(596, 694)));
	//棘(上段左上のスタート付近)
	Base::Add(new Sting(CVector2D(814, 799)));
	//棘(上段右上の地面の上の左)
	Base::Add(new Sting(CVector2D(2940, 799)));
	//棘(上段右上の地面の上の右)
	Base::Add(new Sting(CVector2D(3046, 799)));
	//棘(穴の底左)
	Base::Add(new Sting(CVector2D(3634, 988)));
	//棘(穴の底右)
	Base::Add(new Sting(CVector2D(3732, 988)));
	//棘(下段の左から1列目)
	Base::Add(new Sting(CVector2D(2200, 1884)));
	//棘(下段の左から2列目の上)
	Base::Add(new Sting(CVector2D(2450, 1884)));
	//棘(下段の左から2列目の下)
	Base::Add(new Sting(CVector2D(2450, 1974)));
	//棘(下段の左から3列目)
	Base::Add(new Sting(CVector2D(2650, 1884)));
	//棘(下段の左から4列目の上)
	Base::Add(new Sting(CVector2D(2950, 1884)));
	//棘(下段の左から4列目の下)
	Base::Add(new Sting(CVector2D(2950, 1974)));
	//棘(段の頭上)
	Base::Add(new Sting(CVector2D(3340, 1255)));
	//爆弾
	Base::Add(new Bom(CVector2D(3500, 400)));
	//壊れる岩(上)
	Base::Add(new B_rock(CVector2D(3430, 687)));
	//壊れる岩(下)
	Base::Add(new B_rock(CVector2D(3430, 785)));
	//青ボタン
	Base::Add(new B_botton(CVector2D(890, 1962)));
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
		//青壁
		Base::Add(new B_wall(CVector2D(98, 1764)));
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
		//棘(赤ボタンの右下)
		Base::Add(new Sting(CVector2D(588, 1484)));
		//棘(青ボタン後の左端)
		Base::Add(new Sting(CVector2D(196, 1974)));
		//棘(壁に埋まっている)
		Base::Add(new Sting(CVector2D(350, 1582)));
	}
}