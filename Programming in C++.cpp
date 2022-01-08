#include <iostream>
#include <vector> //для массива vector
#include <limits> //для работы с буфером https://ru.stackoverflow.com/questions/562229/%D0%9E%D1%87%D0%B8%D1%81%D1%82%D0%BA%D0%B0-%D0%B1%D1%83%D1%84%D0%B5%D1%80%D0%B0-%D0%B2%D0%B2%D0%BE%D0%B4%D0%B0-cin

using std::endl;
using std::cin;
using std::cout;

int main()
{
	int size = 0;
	cin >> size;
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> num1 >> num2;
		cout << num1 + num2 << endl;
	}
	return 0;
}