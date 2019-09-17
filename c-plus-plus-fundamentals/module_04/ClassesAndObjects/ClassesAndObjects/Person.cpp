#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(string first, string last, int arbitrary) : first_name_(first), last_name_(last), arbitrary_number_(arbitrary)
{
	cout << "constructing " << first_name_ << " " << last_name_ << endl;
}

// We can use "=default" keyword instead
//
Person::Person() : arbitrary_number_(0)
{
	cout << "constructing " << first_name_ << " " << last_name_ << endl;
}

Person::~Person()
{
	cout << "destructing " << first_name_ << " " << last_name_ << endl;
}

string Person::get_name()
{
	return first_name_ + " " + last_name_;
}
