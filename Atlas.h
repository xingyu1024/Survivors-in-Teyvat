#pragma once

#include <graphics.h>
#include <string>
#include <vector>

// ͼ����
class Atlas
{
public:
	Atlas(LPCTSTR path, int num);
	~Atlas();
public:
	std::vector<IMAGE*> frame_list;
};