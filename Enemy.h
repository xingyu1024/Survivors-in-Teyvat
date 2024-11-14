#pragma once
#include <graphics.h>
#include "Animation.h"
#include "Global.h"
#include "Player.h"
#include "Bullet.h"

// 敌人类
class Enemy
{
public:
	Enemy();

	~Enemy();

	bool CheckBulletCollision(const Bullet& bullet);

	bool CheckPlayerCollision(const Player& player);

	void Move(const Player& player);

	void Draw(int delta);

	void Hurt();

	bool CheckAlive();

private:
	const int SPEED = 2;
	const int FRAME_WIDTH = 80;    // 敌人宽度
	const int FRAME_HEIGHT = 80;   // 敌人高度
	const int SHADOW_WIDTH = 48;   // 阴影宽度

private:
	IMAGE img_shadow;
	Animation* anim_left;
	Animation* anim_right;
	POINT position = { 0, 0 };
	bool facing_left = false;
	bool alive = true;
};