#pragma once

enum SCENE { 
	TITLE, //タイトル
	STAGE, //ゲームシーン
	CLEAR //クリア
};

class IScene {
protected: 

	static int sceneNo;
public: 
  
	virtual void /*Init()を純粋仮想関数で定義*/;
	virtual void /*Update()を純粋仮想関数で定義  引数は(char* keys, char* preKeys)*/;
	virtual void /*Draw()を純粋仮想関数で定義*/;

	virtual ~IScene();

	int GetSceneNo();
};
