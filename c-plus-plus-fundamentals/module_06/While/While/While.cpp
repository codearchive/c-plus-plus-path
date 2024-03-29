// While.cpp : Defines the entry point for the console application
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x;
	cout << "Enter a number" << endl;
	cin >> x;

	bool prime = true;
	int i = 2;

	while (i <= x / i)
	{
		int factor = x / i;
		if (factor*i == x)
		{
			cout << "factor found: " << i << " * " << factor << endl;
			prime = false;
			break;
		}
		i += 1;
	}

	cout << x << " is ";
	if (prime)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;

	return 0;
}