#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int LOG(unsigned int x)
{
	unsigned int pow = 0;
	int base = 2;
	unsigned int res = 2;
	for (; res <= x; ++pow)
	{
		res *= base;
	}
	return pow;
}

int main()
{
	unsigned int testNum = 0;
	cin >> testNum;

	unsigned int num = 0;
	for (unsigned int i = 0; i < testNum; ++i)
	{

		cin >> num;
		cout << LOG(num) << endl;
	}

	return 0;
}