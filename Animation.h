#pragma once
#include "GraphicsUtils.h"
#include "Atlas.h"

//������
class Animation
{
public:
	Animation(Atlas* atlas, int interval);

	~Animation() = default;

	void Play(int x, int y, int delta);

private:
	int timer = 0;                   // ������ʱ��
	int idx_frame = 0;               // ����֡����
	int interval_ms = 0;             // ֡���

private:
	Atlas* anim_atlas;
};