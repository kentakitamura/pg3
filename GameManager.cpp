#include "GameManager.h"
using namespace std;

GameManager::GameManager()
{
	sceneArr_[TITLE] = /*TitleSceneを実体化*/ ;
	sceneArr_[STAGE] = /*StageSceneを実体化*/;
	sceneArr_[CLEAR] = /*ClearSceneを実体化*/;

	currentSceneNo_ = TITLE;
}

GameManager::~GameManager()
{
}

int GameManager::Run(char* keys, char* preKeys)
{
	/*1つ前のSceneNo*/ = /*今のSceneNo*/;
	/*今のSceneNo*/ = sceneArr_[/*今のSceneNo*/]->GetSceneNo();

	if (/*1つ前のSceneNo*/ != /*今のSceneNo*/)
	{
		sceneArr_[/*今のSceneNo*/]->Init();
	}

	sceneArr_[/*今のSceneNo*/]->Update(keys, preKeys);
	sceneArr_[/*今のSceneNo*/]->Draw();

	return 0;
}