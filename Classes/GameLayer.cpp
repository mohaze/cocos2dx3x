//
//  GameLayer.cpp
//  newgametest
//
//  Created by mohaze on 14-12-11.
//
//

#include "GameLayer.h"

#include "Global.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Hero.h"

GameLayer::GameLayer(){
    
}

GameLayer::~GameLayer(){
    
}

bool GameLayer::init(){
	if(!Layer::init()){
		return false;
	}
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("shoot_background.plist","shoot_background.png");
    
    
    //background
	backGround = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->spriteFrameByName("background.png"));
	backGround->setPosition(Point(ORIGIN.x + VISIBLESIZE.width/2, ORIGIN.y + VISIBLESIZE.height/2));
	this->addChild(backGround);
    
    auto rootNode = CSLoader::createNode("MainScene.csb");
    //this->addChild(rootNode);
    
    auto closeItem = static_cast<ui::Button*>(rootNode->getChildByName("Button_1"));
    //closeItem->addTouchEventListener(CC_CALLBACK_1(GameLayer::menuCloseCallback, this));
    h = new Hero();
    h->setContentSize(Size(0, 0));
    //h->setContentSize();
    //h->setPosition(Point(200,200));
    //h->setPosition(Point(ORIGIN.x + VISIBLESIZE.width/2, ORIGIN.y + VISIBLESIZE.height/2));
    this->addChild(h);
    
    
    
    //注册按钮
    auto touchMore = EventListenerTouchAllAtOnce::create();
	touchMore->onTouchesBegan = CC_CALLBACK_2(GameLayer::onTouchesBegan, this);
	touchMore->onTouchesMoved = CC_CALLBACK_2(GameLayer::onTouchesMoved, this);
	touchMore->onTouchesEnded = CC_CALLBACK_2(GameLayer::onTouchesEnded, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(touchMore, this);
    this->setTouchEnabled(true);
    
    return true;
}

void GameLayer::menuCloseCallback(Ref* pSender)
{
    //auto scene = GameScene::create();
	//auto animationScene = TransitionFade::create(0.5f,scene);
	//Director::getInstance()->replaceScene(animationScene);
}

void GameLayer::onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event)
{
    
}
void GameLayer::onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event)
{
    
}
void GameLayer::onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event)
{
    log("======");
    for (auto pTouch : touches)     //为啥是vector
    {
        log("x=%f ",pTouch->getLocation().x);
        log("y=%f \n",pTouch->getLocation().y);

        h->setPosition(pTouch->getLocation());
        backGround->setPosition(pTouch->getLocation());
    }
}
void GameLayer::onTouchesCancelled(const std::vector<Touch*>&touches, Event *unused_event)
{
    
}