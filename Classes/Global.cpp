//
//  Global.cpp
//  newgametest
//
//  Created by mohaze on 14-12-10.
//
//

#include "Global.h"


Point Global::getVisibleOrigin()
{
    return Director::getInstance()->getVisibleOrigin();
}
Size Global::getVisibleSize()
{
    return Director::getInstance()->getVisibleSize();
}