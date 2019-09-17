// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
	Person p1("Thomas ", "Anderson", 123);
	{
		Person p2;
	}
	
	cout << "after innermost block" << endl;
	string name = p1.get_name();

	//int i = p1.arbitrary_number_;

	cout << name << endl;

	return 0;
}
