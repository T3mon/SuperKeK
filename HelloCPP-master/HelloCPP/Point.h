#pragma once
class Point
{
private:
	int x, y, z;

	const int getNumberLen(int number);
public:
	Point();
	Point(int x, int y, int z) : x(x),y(y), z(z) {}

	Point operator = (Point p);
	Point operator + (Point p1);

	char* print();
	

	~Point();
};

