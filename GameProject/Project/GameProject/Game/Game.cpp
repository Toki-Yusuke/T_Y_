#include "Game.h"
#include"Player.h"
#include"Enemy.h"
#include"Map.h"
#include"Field.h"

Game::Game():Base(eType_Scene)
{
	Base::Add(new Player(CVector2D(100, 785), true));
	Base::Add(new Enemy(CVector2D(600, 785), true));
	Base::Add(new Field);
	Base::Add(new Map(1));
}

void Game::Update() 
{

}