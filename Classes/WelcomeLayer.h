//
//  WelcomeLayer.h
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#ifndef __newgametest__WelcomeLayer__
#define __newgametest__WelcomeLayer__

#include <iostream>
#include "cocos2d.h"


USING_NS_CC;

class WelcomeLayer : public Layer
{
public:
    
	WelcomeLayer(void);
    
	~WelcomeLayer(void);
    
	virtual bool init();
    
	CREATE_FUNC(WelcomeLayer);
    
    
    void menuCloseCallback(cocos2d::Ref* pSender);
	
    //void loadingDone(Node* pNode);
    
	//virtual void keyBackClicked();//
	//virtual void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
    
	//bool isHaveSaveFile();
    
	//void getHighestHistorySorce();
    
	//void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
    
//    Point origin = Global::getInstance()->getVisibleOrigin() ;
//	Size visibleSize =  Global::getInstance()->getVisibleSize();
};
#endif /* defined(__newgametest__WelcomeLayer__) */
