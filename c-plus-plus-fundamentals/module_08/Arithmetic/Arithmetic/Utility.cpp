#include "Utility.h"

bool IsPrime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x / i; i = i + 1)
	{
		int factor = x / i;
		if (factor*i == x)
		{
			prime = false;
			break;
		}
	}
	return prime;
}
