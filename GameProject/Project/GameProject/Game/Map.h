#pragma once
#include"../Base/Base.h"

//�}�b�v�̉��̃`�b�v��
#define MAP_WIDTH	200
//�}�b�v�̏c�̃`�b�v��
#define MAP_HEIGHT	400
//�}�b�v�`�b�v�̑傫��
#define MAP_TIP_SIZE	98
class Map : public Base {
private:
	CImage m_img;
	float m_ground_y;
	int m_stage_data[MAP_HEIGHT][MAP_WIDTH];
public:
	Map(int area);
	void Draw();
	//�w����W�̃`�b�v�ԍ����擾
	int GetTip(const CVector2D& pos);
	//�w���A�w��s�̃}�b�v�`�b�v���擾
	int GetTip(int col, int row);
	//�}�b�v�Ƃ̓����蔻��
	int CollisionPoint(const CVector2D& pos);
	//�}�b�v�Ƃ̓����蔻��
	int CollisionRect(const CVector2D& pos, const CRect& rect);
	/// �n�ʂ̍������擾
	float GetGroundY() {
		return m_ground_y;
	};
};