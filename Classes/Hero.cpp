//
//  Hero.cpp
//  newgametest
//
//  Created by mohaze on 14-12-11.
//
//

#include "Hero.h"
Hero::Hero()
{
    mainBody = NULL;
    eDirection = eLeft;
    //m_position = NULL;
    heroInit();
}

Hero::~Hero()
{
	this->unscheduleAllSelectors();
}
bool Hero::heroInit()
{
	this->setContentSize(Size(0, 0));
	// ◊Ó≥ıº”‘ÿµƒ «–°–Õ¬Ì¿Ô∞¬
	mainBody = Sprite::create("image/hero/smallWalkRight.png", CCRectMake(0, 0, 14, 16));
    //mainBody = Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->spriteFrameByName("background.png"));
	mainBody->setAnchorPoint(Point(0, 0));
    mainBody->setPosition(Point(200,200));
	this->addChild(mainBody);
	return true;
}

void Hero::setDirection(eHeroDirection state)
{
    
}
Hero::eHeroDirection getDirection()
{
    
}
void Hero::setPosition(Point point)
{
    
}
Point Hero::getPosition()
{
    
}