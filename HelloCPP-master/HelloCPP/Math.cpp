#include "stdafx.h"
#include "Math.h"
#include <iostream>

Math::Math()
{
	this->x = this->y = 0;
}

Math::Math(float x, float y)
{
	this->x = x;
	this->y = y;
}

Math Math::sum(float x, float y)
{
	return  Math(x+y, 0);
}

Math* Math::getMe()
{
	return this;
}

void Math::print()
{
	std::cout << x;
}


Math::~Math()
{
}
