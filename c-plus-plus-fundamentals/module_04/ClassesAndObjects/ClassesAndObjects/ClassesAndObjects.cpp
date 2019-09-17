// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include <iostream>

int main()
{
	Person p1("Thomas ", "Anderson", 123);
	Person p2;

	std::string name = p1.get_name();

	//int i = p1.arbitrary_number_;

	std::cout << name << std::endl;

	return 0;
}
