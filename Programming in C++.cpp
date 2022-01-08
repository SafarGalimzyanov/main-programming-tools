#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main()
{
	char space = ' ';
	char sym = '\0';
	while (cin.get(sym)) //читает
	{
		if (sym != space) //если не пробелы
		{
			cout << sym; //выводит не пробелы
		}
		else             //если пробел
		{
			cout << sym; //выводит его
			while (cin.get(sym)) //читает
			{
				if (sym == space)  //если равен пробелу
				{
					cout << ""; //выводит ничего
				}
				else              //если не пробел
				{
					cout << sym;  //выводит его
					break;        //выходит из цикла
				}
			}
		}
	}

	return 0;
}