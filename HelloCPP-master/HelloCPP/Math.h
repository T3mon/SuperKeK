#pragma once
class Math
{
	float x;
	float y;
public:
	Math();
	Math(float x, float y);

	Math sum(float x, float y);
	Math* getMe();
	
	void print();

	~Math();
};

