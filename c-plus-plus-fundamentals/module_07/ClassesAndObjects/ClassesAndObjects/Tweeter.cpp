#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) 
	:
	Person(first, last, arbitrary), twitter_handle_(handle)
{
	cout << "constructing tweeter" << twitter_handle_ << endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing tweeter" << twitter_handle_ << endl;

}
