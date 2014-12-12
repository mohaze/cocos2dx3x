//
//  GameScene.cpp
//  newgametest
//
//  Created by mohaze on 14-12-11.
//
//

#include "GameScene.h"

GameScene::GameScene(){
	this->_gameLayer = NULL;
}

GameScene::~GameScene(){
    
}

bool GameScene::init(){
	if(!Scene::init()){
		return false;
	}
	_gameLayer = GameLayer::create();
	if(_gameLayer == NULL){
		return false;
	}
	this->addChild(_gameLayer);
    
	//PreloadMusic();
    
	return true;
}