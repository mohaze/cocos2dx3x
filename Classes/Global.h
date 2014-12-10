//
//  Global.h
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#ifndef __newgametest__Global__
#define __newgametest__Global__

#include <iostream>

#include "cocos2d.h"
using namespace cocos2d;

#define ORIGIN  Director::getInstance()->getVisibleOrigin()
#define VISIBLESIZE  Director::getInstance()->getVisibleSize()

class Global
{
public:
    static Global *getInstance()
    {
        if(m_pGlobal==NULL)
            m_pGlobal = new Global();
        return m_pGlobal;
    }
    static void Release()
    {
        if(m_pGlobal!=NULL)
        {
            delete m_pGlobal;
            m_pGlobal = NULL;
        }
    }
    Point getVisibleOrigin();
    Size getVisibleSize();
    //~Global();

private:
    Global()
    {
    }
    static Global *m_pGlobal;
    Point origin ;
	Size visibleSize ;
};

//Global* Global::m_pGlobal = NULL;
#endif /* defined(__newgametest__Global__) */
