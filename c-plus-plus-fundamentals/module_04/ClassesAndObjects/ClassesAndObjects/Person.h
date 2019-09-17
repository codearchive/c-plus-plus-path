#pragma once
#include <string>

class Person
{
private:
	std::string first_name_;
	std::string last_name_;
	int arbitrary_number_;

public:
	Person(std::string first, std::string last, int arbitrary);
	Person() = default;
	std::string get_name();
};
