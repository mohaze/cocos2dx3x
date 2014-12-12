//
//  GameScene.h
//  newgametest
//
//  Created by mohaze on 14-12-11.
//
//

#ifndef __newgametest__GameScene__
#define __newgametest__GameScene__

#include <iostream>
#include "GameLayer.h"

using namespace cocos2d;
//using namespace CocosDenshion;


class GameScene : public Scene
{
public:
    GameScene(void);
    
	~GameScene(void);
    
    virtual bool init();
    
    // a selector callback
    //void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    
    GameLayer* _gameLayer;
};


#endif /* defined(__newgametest__GameScene__) */
