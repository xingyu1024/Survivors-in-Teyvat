#pragma once
#include <graphics.h>
#include "Animation.h"
#include "Global.h"

#define VK_W 0x57
#define VK_A 0x41
#define VK_S 0x53
#define VK_D 0x44

// �����
class Player
{
public:
	const int FRAME_WIDTH = 80;		// ��ҿ��
	const int FRAME_HEIGHT = 80;    // ��Ҹ߶�

public:
	Player();

	~Player();

	void ProcessEvent(const ExMessage& msg);

	void Move();

	void Draw(int delta);

	const POINT& GetPosition() const;
private:
	const int SPEED = 3;
	const int SHADOW_WIDTH = 32;	// ��Ӱ���

private:
	IMAGE img_shadow;
	Animation* anim_left;
	Animation* anim_right;
	POINT position = { 500, 500 };
	bool is_move_up = false;
	bool is_move_down = false;
	bool is_move_left = false;
	bool is_move_right = false;
};