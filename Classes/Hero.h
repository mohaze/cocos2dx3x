//
//  Hero.h
//  newgametest
//
//  Created by mohaze on 14-12-11.
//  具体动画放在派生类里面
//

#ifndef __newgametest__Hero__
#define __newgametest__Hero__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;


class Hero : public Node{
    
public:
    typedef enum heroDirection
    {
        eLeft,
        eRight,
        eUp,
        eDown
    }eHeroDirection;
    Hero();
	~Hero();
    void setDirection(eHeroDirection state);
    eHeroDirection getDirection();
    void setPosition(Point point);
    Point getPosition();
    bool heroInit();

private:
    Sprite *mainBody;
    eHeroDirection eDirection;
    Point m_position;
    
    
    
    
    
    
};

#endif /* defined(__newgametest__Hero__) */
