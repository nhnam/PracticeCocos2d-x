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
    _batchNode = CCSpriteBatchNode::create("hipster.png");
    this->addChild(_batchNode);
    CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("hipster.plist");
    _feeble = CCSprite::createWithSpriteFrameName("r.png");
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    CCLOG("Win size: %0.2f, %0.2f", winSize.width, winSize.height);
    _feeble->setPosition(ccp(winSize.width/2, winSize.height/2));
    this->addChild(_feeble);
    
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
//    CCLOG("Timer updated");
}
#pragma mark Accelerate
void GameLayer::didAccelerate(CCAcceleration *pAccelerationValue)
{
//    CCLOG("Did Accelerate");
}
#pragma mark Touches
void GameLayer::ccTouchesBegan(cocos2d::CCSet *touches, cocos2d::CCEvent *event)
{
//    CCLOG("Touches began");
    cocos2d::CCSprite* feeble = CCSprite::createWithSpriteFrameName("r.png");
    // Choose one of the touches to work with
    CCTouch* touch = (CCTouch*)( touches->anyObject() );
    CCPoint location = touch->getLocationInView();
    location = CCDirector::sharedDirector()->convertToGL(location);
    
    feeble->setPosition(location);
    this->addChild(feeble);
}