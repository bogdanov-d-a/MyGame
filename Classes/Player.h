#pragma once

#include "cocos2d.h"
#include "ObjectKeeper.h"

class PhysicsEngine;
class NodePhysicsPuppeteer;
class AnimationKit;
namespace json11
{
	class Json;
};

class Player : public cocos2d::SpriteBatchNode
{
public:
	static Player* create(PhysicsEngine *physEngine, json11::Json const& json);
	Player(PhysicsEngine *physEngine);
	bool init(json11::Json const& json);

	void Move(float dx);
	void Stop();
	void Jump();
	bool IsFacingLeft() const;
	cocos2d::Vec2 GetSpritePosition() const;

private:
	void SetFacing(bool facingLeft);
	void SetAnimation(AnimationKit *kit);

	ObjectKeeper<PhysicsEngine> m_physEngine;
	ObjectKeeper<NodePhysicsPuppeteer> m_puppeteer;
	cocos2d::Sprite *m_sprite;
	bool m_facingLeft;
	bool m_running;
	bool m_onGround;

	ObjectKeeper<AnimationKit> m_idleKit;
	ObjectKeeper<AnimationKit> m_runKit;
};
