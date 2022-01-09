#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int readNum = 0;
	cin >> readNum;
	if (readNum != 0)
	{
		main();
		cout << readNum << " ";
	}
	return 0;
}