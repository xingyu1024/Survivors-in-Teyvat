#pragma once
#include "GraphicsUtils.h"
#include "Atlas.h"

//动画类
class Animation
{
public:
	Animation(Atlas* atlas, int interval);

	~Animation() = default;

	void Play(int x, int y, int delta);

private:
	int timer = 0;                   // 动画计时器
	int idx_frame = 0;               // 动画帧索引
	int interval_ms = 0;             // 帧间隔

private:
	Atlas* anim_atlas;
};