#pragma once
#include "IScene.h"
#include "Vector2.h"
#include "Player.h"
#include "Enemy.h"

class /*ISceneをパブリック継承してStageSceneクラスを定義*/
{
public:
	~StageScene();
	/* 継承したInit、Update、Draw関数をoverride定義*/

public:
	Player* player_;
	Enemy* enemy_;
};