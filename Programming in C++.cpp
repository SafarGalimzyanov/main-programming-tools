int strstr(const char* text, const char* pattern)
{
	unsigned i = 0, j = 0, k = 0, pervoeVhozhdenie = 0, textSize = 0, patternSize = 0;
	for (; pattern[j] != 0; ++j)
	{
	}
	patternSize = j;

	j = 0;
	if (patternSize == 0)
		return 0;

	for (; text[i] != 0; ++i)
	{
	}
	textSize = i;

	i = 0;
	if (textSize == 0)
		return -1;

	if (textSize < patternSize)
		return -1;


	//��������� ������ ������, �����, ����� ������ ������ ������. ������ ��������� ����������
	//�������� ����: ���� ������ ��������� �������� �������� ������� � �����
	for (i = 0; i != textSize; ++i) {

		if (i == (textSize - patternSize + 1))
		{
			//���� ������ �� ����� ������ - ������ ������� + 1 (�� ������, ����� ���� ������)
			//� ����� �� ��������� ������� ������� �������, ������ ��� ��� �� �����
			return -1;
		}
		if (text[i] == pattern[0])
		{
			//������ ����, ���� ��������� ������� ������� ������� � ������
			pervoeVhozhdenie = i;
			//������ �������, ��� ����� ������ ����������� � ������
			for (j = 0; text[pervoeVhozhdenie + j] == pattern[j]; ++j)
			{
				//�� ���� ������ �� ������, ��
				if (j == patternSize - 1)
				{
					//���� ������ ���� ������ �������, ������ ���������� ������ ���������
					return pervoeVhozhdenie;
				}
				else
				{
					//����������� �� ������, �������� ���� ���� ������, �.�. ����� �������� i �� 1
				}
			}

		}

	}
	return -1;

}