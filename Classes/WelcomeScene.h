//
//  WelcomeScene.h
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#ifndef __newgametest__WelcomeScene__
#define __newgametest__WelcomeScene__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include "WelcomeLayer.h"
using namespace cocos2d;
using namespace CocosDenshion;


class WelcomeScene : public Scene
{
public:
    WelcomeScene(void);
    
	~WelcomeScene(void);
    
    virtual bool init();
    
    // a selector callback
    //void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(WelcomeScene);
    
    WelcomeLayer* _welcomeLayer;
};


#endif /* defined(__newgametest__WelcomeScene__) */
