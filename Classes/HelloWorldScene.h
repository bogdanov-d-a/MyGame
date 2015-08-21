#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "WorldPhysics.h"
#include "InputManager.h"

class HelloWorld : public cocos2d::Layer
{
public:
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::Scene* createScene();

	HelloWorld();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();
	
	// implement the "static create()" method manually
	CREATE_FUNC(HelloWorld);

	void UpdatePositions();
	void update(float dt) override;
	void onEnter() override;
	void onExit() override;

private:
	static const float MOVE_STEP;

	WorldPhysics *_world;
	cocos2d::Sprite *_playerSprite;
	InputManager *_inputManager;
};

#endif // __HELLOWORLD_SCENE_H__
