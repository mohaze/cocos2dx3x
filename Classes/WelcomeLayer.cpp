//
//  WelcomeLayer.cpp
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#include "WelcomeLayer.h"
#include "Global.h"

WelcomeLayer::WelcomeLayer(){
    
}

WelcomeLayer::~WelcomeLayer(){
    
}

bool WelcomeLayer::init(){
	if(!Layer::init()){
		return false;
	}
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("shoot_background.plist","shoot_background.png");
    
    
    //background
	Sprite* backGround = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->spriteFrameByName("background.png"));
	backGround->setPosition(Point(ORIGIN.x + VISIBLESIZE.width/2, ORIGIN.y + VISIBLESIZE.height/2));
	this->addChild(backGround);
    
    return true;
}