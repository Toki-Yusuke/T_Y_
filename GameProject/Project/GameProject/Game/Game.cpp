#include "Game.h"
#include"Player.h"
#include"Enemy.h"
#include"Map.h"
#include"Field.h"
#include"Goal.h"
#include"Word01.h"
#include"../GameOver/GameOver.h"
#include"../ss/ss.h"

Game::Game():Base(eType_Scene)
{
	Base::Add(new Player(CVector2D(100, 785), true));
	Base::Add(new Enemy(CVector2D(600, 785), true));
	Base::Add(new Enemy(CVector2D(2000, 785), true));
	Base::Add(new Goal(CVector2D(2550, 1200)));
	Base::Add(new Word01(CVector2D(650, 835)));
	Base::Add(new Field);
	Base::Add(new Map(1));
}

void Game::Update() 
{
	if (!Base::FindObject(eType_Player) && Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new GameOver);
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new SS());
	}
}