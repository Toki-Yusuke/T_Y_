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
#include"../ss/ss_w08.h"
#include"../ss/ss_w09.h"


Game::Game():Base(eType_Scene)
{
	//ÉvÉåÉCÉÑÅ[
	Base::Add(new Player(CVector2D(120, 785), true));
	//ìG(ç∂)
	Base::Add(new Enemy(CVector2D(600, 785), true));
	//ìG(âE)
	Base::Add(new Enemy(CVector2D(2000, 785), true));
	//ÉSÅ[Éã
	Base::Add(new Goal(CVector2D(2550, 1200)));
	//íPåÍá@
	Base::Add(new Word01(CVector2D(650, 835)));
	//íPåÍáA
	Base::Add(new Word02(CVector2D(3700, 815)));
	//íPåÍáB
	Base::Add(new Word03(CVector2D(980, 1400)));
	//îwåi
	Base::Add(new Field);
	//ÉXÉeÅ[ÉW
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
		Base::Add(new ss());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w01());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w02());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w03());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w04());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w05());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w06());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w07());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w08());
	}
	else if (!Base::FindObject(eType_Player) && !Base::FindObject(eType_Goal))
	{
		Base::KillAll();
		Base::Add(new ss_w09());
	}
}