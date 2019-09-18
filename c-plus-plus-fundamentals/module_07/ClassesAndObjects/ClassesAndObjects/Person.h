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
	Person();
	~Person();
	std::string get_name() const;
	int get_number() const { return arbitrary_number_; }
	void set_number(int number) { arbitrary_number_ = number; }
};
