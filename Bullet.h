#pragma once
#include <graphics.h>

// ×Óµ¯Àà
class Bullet
{
public:
	POINT position = { 0, 0 };

public:
	Bullet() = default;
	~Bullet() = default;

	void Draw() const;

private:
	const int RADIUS = 10;
};