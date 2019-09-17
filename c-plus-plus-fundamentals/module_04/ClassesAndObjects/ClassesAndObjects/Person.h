#pragma once
#include <string>

class Person
{
private:
	std::string first_name_;
	std::string last_name_;
	int arbitrary_number_;

public:
	std::string get_name();
};
