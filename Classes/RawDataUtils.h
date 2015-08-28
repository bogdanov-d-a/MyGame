#pragma once

#include <iostream>
#include "cocos2d.h"

namespace RawData
{
	const char STOP_CHAR = '#';
	void SkipWhitespaces(std::istream &in);
	std::string ReadString(std::istream &in);
	size_t ReadSizeT(std::istream &in);
	std::string ReadStringAdv(std::istream &in);
	float ReadFloat(std::istream &in);
	int ReadInt(std::istream &in);
	cocos2d::Vec2 ReadVec2(std::istream &in);
	cocos2d::Size ReadSize(std::istream &in);
	cocos2d::Rect ReadRect(std::istream &in);
}
