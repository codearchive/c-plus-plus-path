// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	Person p1("Thomas ", "Anderson", 123);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		string name2 = t1.get_name();
	}
	
	cout << "after innermost block" << endl;
	string name = p1.get_name();

	//int i = p1.arbitrary_number_;

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconmected;
	ne = NetworkError::ok;


	return 0;
}
