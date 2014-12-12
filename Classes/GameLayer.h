//
//  GameLayer.h
//  newgametest
//
//  Created by mohaze on 14-12-11.
//
//

#ifndef __newgametest__GameLayer__
#define __newgametest__GameLayer__

#include <iostream>
#include "cocos2d.h"
#include "Hero.h"


USING_NS_CC;


class GameLayer : public Layer
{
public:
    
	GameLayer(void);
    
	~GameLayer(void);
    
	virtual bool init();
    
	CREATE_FUNC(GameLayer);
    
    virtual void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
	virtual void onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event);
	virtual void onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event);
	virtual void onTouchesCancelled(const std::vector<Touch*>&touches, Event *unused_event);
    
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    Hero *h;
    Sprite* backGround;
};
#endif /* defined(__newgametest__GameLayer__) */
