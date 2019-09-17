#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : first_name_(first), last_name_(last), arbitrary_number_(arbitrary)
{
}

// We do not need it because we use "=default" keyword
//
//Person::Person() : first_name_("None"), last_name_("None"), arbitrary_number_(-1)
//{
//}

std::string Person::get_name()
{
	return first_name_ + " " + last_name_;
}
