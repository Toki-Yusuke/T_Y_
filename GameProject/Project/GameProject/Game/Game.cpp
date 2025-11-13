#include "Game.h"
#include"Player.h"
#include"Enemy.h"
#include"Map.h"
#include"Field.h"
#include"Goal.h"
#include"Word01.h"
#include"Word02.h"
#include"Word03.h"
#include"../GameOver/GameOver.h"
#include"../ss/ss.h"
#include"../ss/ss_w01.h"
#include"../ss/ss_w02.h"
#include"../ss/ss_w03.h"
#include"../ss/ss_w04.h"
#include"../ss/ss_w05.h"
#include"../ss/ss_w06.h"
#include"../ss/ss_w07.h"



Game::Game():Base(eType_Scene)
{
	//プレイヤー
	Base::Add(new Player(CVector2D(120, 785), true));
	//敵(左)
	Base::Add(new Enemy(CVector2D(600, 785), true));
	//敵(右)
	Base::Add(new Enemy(CVector2D(2000, 785), true));
	//ゴール
	Base::Add(new Goal(CVector2D(2550, 1200)));
	//単語①
	Base::Add(new Word01(CVector2D(650, 835)));
	//単語②
	Base::Add(new Word02(CVector2D(3700, 815)));
	//単語③
	Base::Add(new Word03(CVector2D(980, 1400)));
	//背景
	Base::Add(new Field);
	//ステージ
	Base::Add(new Map(1));
}

void Game::Update() 
{
	//ゲームオーバーへ
	if (!Base::FindObject(eType_Player) && Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new GameOver);
	}
	//以下はゲームクリア
	//1,2,3有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal)&&Base::FindObject(eType_Word01) && Base::FindObject(eType_Word02) && Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss());
	}
	//2,3有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && !Base::FindObject(eType_Word01) && Base::FindObject(eType_Word02) && Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w01());
	}
	//1,3有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && Base::FindObject(eType_Word01) && !Base::FindObject(eType_Word02) && Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w02());
	}
	//1,2有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && Base::FindObject(eType_Word01) && Base::FindObject(eType_Word02) && !Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w03());
	}
	//3有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && !Base::FindObject(eType_Word01) && !Base::FindObject(eType_Word02) && Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w04());
	}
	//2有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && !Base::FindObject(eType_Word01) && Base::FindObject(eType_Word02) && !Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w05());
	}
	//1有
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && Base::FindObject(eType_Word01) && !Base::FindObject(eType_Word02) && !Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w06());
	}
	//全部無し
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal) && !Base::FindObject(eType_Word01) && !Base::FindObject(eType_Word02) && !Base::FindObject(eType_Word03))
	{
		Base::KillAll();
		Base::Add(new ss_w07());
	}
	else
	{
		return;
	}
}