#pragma once
#include"../Base/Base.h"

//マップの横のチップ数
#define MAP_WIDTH	200
//マップの縦のチップ数
#define MAP_HEIGHT	400
//マップチップの大きさ
#define MAP_TIP_SIZE	98
class Map : public Base {
private:
	CImage m_img;
	float m_ground_y;
	int m_stage_data[MAP_HEIGHT][MAP_WIDTH];
public:
	Map(int area);
	void Draw();
	//指定座標のチップ番号を取得
	int GetTip(const CVector2D& pos);
	//指定列、指定行のマップチップを取得
	int GetTip(int col, int row);
	//マップとの当たり判定
	int CollisionPoint(const CVector2D& pos);
	//マップとの当たり判定
	int CollisionRect(const CVector2D& pos, const CRect& rect);
	/// 地面の高さを取得
	float GetGroundY() {
		return m_ground_y;
	};
};