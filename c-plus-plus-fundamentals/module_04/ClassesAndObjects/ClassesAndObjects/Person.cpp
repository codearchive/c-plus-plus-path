#include "Person.h"

std::string Person::get_name()
{
	return first_name_ + " " + last_name_;
}
