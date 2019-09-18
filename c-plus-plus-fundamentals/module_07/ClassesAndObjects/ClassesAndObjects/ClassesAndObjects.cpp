// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Tweeter.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	Person p1("Thomas ", "Anderson", 123);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
	}
	
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.get_name() << " " << p1.get_number() << endl;
	p1.set_number(124);
	cout << "p1: " << p1.get_name() << " " << p1.get_number() << endl;

	return 0;
}
