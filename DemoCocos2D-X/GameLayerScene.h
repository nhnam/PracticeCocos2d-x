//
//  GameLayer.h
//  DemoCocos2D-X
//
//  Created by Nam Nguyen on 7/7/13.
//
//

#ifndef DemoCocos2D_X_GameLayer_h
#define DemoCocos2D_X_GameLayer_h

#include "cocos2d.h"
#include "Box2D.h"
#include "CCParallaxNodeExtras.h"

USING_NS_CC;

class GameLayer : public cocos2d::CCLayer
{
private:
    cocos2d::CCSpriteBatchNode * _batchNode;
	cocos2d::CCSprite * _feeble;
    cocos2d::CCArray *arrSpritesInGame;
    // scheduled Update
    void update(float dt);
public:
    virtual bool init();
    static CCScene* scene();
    // implement the "static node()" method manually
    CREATE_FUNC(GameLayer);
    virtual void didAccelerate(CCAcceleration* pAccelerationValue);
    virtual void ccTouchesBegan(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
protected:
    
};
#endif
