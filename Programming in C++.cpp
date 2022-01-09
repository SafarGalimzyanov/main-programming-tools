char* resize(const char* str, unsigned size, unsigned new_size)
{
	//�������� ����� ������� ������
	char* new_str = new char[new_size];

	//����������� �������� ������� ������
	size = size > new_size ? new_size : size;

	//������������ ���������, ������������ � ����� ��������� ����������
	const char* temp1 = str;
	char* temp2 = new_str;

	//����������� ������ �� ����� ������� � ������
	for (; size--; temp1++, temp2++)
	{
		*temp2 = *temp1;
	}

	//�������� �������������� ������� ������
	delete[] str;

	//������� ��������� �� ����� ������� ������
	return new_str;
}