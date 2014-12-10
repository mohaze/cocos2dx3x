//
//  WelcomeScene.cpp
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#include "WelcomeScene.h"

WelcomeScene::WelcomeScene(){
	this->_welcomeLayer = NULL;
}

WelcomeScene::~WelcomeScene(){
    
}

bool WelcomeScene::init(){
	if(!Scene::init()){
		return false;
	}
	_welcomeLayer = WelcomeLayer::create();
	if(_welcomeLayer == NULL){
		return false;
	}
	this->addChild(_welcomeLayer);
    
	//PreloadMusic();
    
	return true;
}