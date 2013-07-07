//
//  GameLayer.cpp
//  DemoCocos2D-X
//
//  Created by Nam Nguyen on 7/7/13.
//
//

#include "GameLayerScene.h"
#include "SimpleAudioEngine.h"
using namespace cocos2d;
using namespace CocosDenshion;

bool GameLayer::init(){
    // initialization
    if(!CCLayer::init()){
        return false;
    }
    this->scheduleUpdate();
    this->setAccelerometerEnabled(true);
    this->setTouchEnabled(true);
    
    // end
    return true;
}
CCScene* GameLayer::scene(){
    CCScene *scene = CCScene::create();
    GameLayer *layer = GameLayer::create();
    scene->addChild(layer);
    return scene;
}
void GameLayer::update(float delta)
{
    CCLOG("Timer updated");
}
#pragma mark Accelerate
void GameLayer::didAccelerate(CCAcceleration *pAccelerationValue)
{
    CCLOG("Did Accelerate");
}
#pragma mark Touches
void GameLayer::ccTouchesBegan(cocos2d::CCSet *touches, cocos2d::CCEvent *event)
{
    CCLOG("Touches began");
}