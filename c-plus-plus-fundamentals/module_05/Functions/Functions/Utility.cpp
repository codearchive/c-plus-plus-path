#include <iostream>
#include "Utility.h"

using std::cout;
using std::endl;

bool IsPrime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x / i; i += 1)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

bool Is2MorePrime(int const& x)
{
	return IsPrime(x + 2);
}

// Return dangling reference. 

//int& BadFunction()
//{
//	int a = 3;
//	return a;
//}
