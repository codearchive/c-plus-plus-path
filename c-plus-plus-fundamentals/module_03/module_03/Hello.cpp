#include <iostream>
#include <string>

int main()
{
	using namespace std;

	int i1 = 1;
	cout << "i1 = " << i1 << endl;

	int i2;
	i2 = 2;
	cout << "i2 = " << i2 << endl;

	int i3(3);
	cout << "i3 = " << i3 << endl;

	int i4{ 4 };
	cout << "i4 = " << i4 << endl;

	double d1 = 2.2;
	double d2 = i1;
	int i5 = d1;
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	cout << "i5 = " << i5 << endl;

	char c1 = 'a';
	//char c2 = 'b';
	cout << "c1 = " << c1 << endl;
	//cout << "c2= " << c2 << endl;

	bool flag = false;
	cout << "flag = " << flag << endl;
	flag = i1;
	cout << "flag = " << flag << endl;
	flag = d1;
	cout << "flag = " << flag << endl;

	auto a1 = 1;
	auto a2 = 2.2;
	auto a3 = 'c';
	auto a4 = "s";
	auto a5 = true;
	auto a6 = 3L;
	auto a7 = 1'000'000'000'000;
	auto a8 = 0xFF;
	auto a9 = 0b111;

	a1 = a2;

	unsigned char n1 = 128;
	char n2 = 128;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	n1 = 254;
	n2 = 254;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	n1 = 300;
	n2 = 300;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;

	return 0;
}
