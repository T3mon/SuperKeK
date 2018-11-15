#include "stdafx.h"
#include "Max.h"
#include <iostream>


Max::Max()
{
	age = 0;
}

Max::Max(int age_)
{
	age = age_;
}


int Max::getAge() const
{
	return age;
}

void Max::setAge(int age_)
{
	age = age_;
}

void Max::print() const
{
	
	std::cout << age << std::endl;
}

Max::~Max()
{
}
