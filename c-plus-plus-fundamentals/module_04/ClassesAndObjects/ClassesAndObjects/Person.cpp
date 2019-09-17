#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : first_name_(first), last_name_(last), arbitrary_number_(arbitrary)
{
	std::cout << "constructing " << first_name_ << " " << last_name_ << std::endl;
}

// We can use "=default" keyword instead
//
Person::Person() : arbitrary_number_(0)
{
	std::cout << "constructing " << first_name_ << " " << last_name_ << std::endl;
}

Person::~Person()
{
	std::cout << "destructing " << first_name_ << " " << last_name_ << std::endl;
}

std::string Person::get_name()
{
	return first_name_ + " " + last_name_;
}
