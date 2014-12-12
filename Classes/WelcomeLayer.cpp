//
//  WelcomeLayer.cpp
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#include "WelcomeLayer.h"
#include "Global.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "GameScene.h"

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
    
    auto rootNode = CSLoader::createNode("MainScene.csb");
    this->addChild(rootNode);
    
    auto closeItem = static_cast<ui::Button*>(rootNode->getChildByName("Button_1"));
    closeItem->addTouchEventListener(CC_CALLBACK_1(WelcomeLayer::menuCloseCallback, this));
    
    return true;
}

void WelcomeLayer::menuCloseCallback(Ref* pSender)
{
    auto scene = GameScene::create();
	auto animationScene = TransitionFade::create(0.5f,scene);
	Director::getInstance()->replaceScene(animationScene);
}