#include "stdafx.h"
#include "Point.h"
#include <iostream>
#include <cstdlib>

const int Point::getNumberLen(int number)
{
	if (number > 9)
		return 2;
	if (number > 99)
		return 3;
	if (number > 999)
		return 4;

	return 1;
}

Point::Point()
{
}


Point Point::operator=(Point p)
{
	this->x = p.x;
	this->y = p.y;
	this->z = p.z;

	return *this;
}

Point Point::operator +(Point p1)
{
	return Point(this->x + p1.x, this->y + p1.y, this->z + z);
}

char*  Point::print()
{	
	const int s = 64;
	char number_x[s];
	char number_y[s];
	char number_z[s];
	_itoa_s(this->x, number_x, 10);
	_itoa_s(this->y, number_y, 10);
	_itoa_s(this->z, number_z, 10);

	
	char * outStr = new char[s]{""};
	
	

	strcat_s(outStr, strlen("X is ") + 1, "X is ");
	strcat_s(outStr,63, number_x);
	strcat_s(outStr, (strlen(" Y is ") * sizeof(char*)) + 1, " Y is ");
	strcat_s(outStr,63, number_y);
	strcat_s(outStr, (strlen(" Z is ") * sizeof(char*)) + 1, " Z is ");
	strcat_s(outStr,63, number_z);
	strcat_s(outStr, 36, "\\");

	int sizeOfStr = (strrchr(outStr, '\\') - outStr + 1);

	char *str = new char[sizeOfStr];
	
	for (size_t i = 0; i < sizeOfStr; i++)
	{
		str[i] = outStr[i];
	}
	str[sizeOfStr - 1] = '\0';
	
	return str;
}

Point::~Point()
{
}
