#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main()
{
	char space = ' ';
	char sym = '\0';
	while (cin.get(sym)) //������
	{
		if (sym != space) //���� �� �������
		{
			cout << sym; //������� �� �������
		}
		else             //���� ������
		{
			cout << sym; //������� ���
			while (cin.get(sym)) //������
			{
				if (sym == space)  //���� ����� �������
				{
					cout << ""; //������� ������
				}
				else              //���� �� ������
				{
					cout << sym;  //������� ���
					break;        //������� �� �����
				}
			}
		}
	}

	return 0;
}