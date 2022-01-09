#include <cstdlib>

void swap_min(int* m[], unsigned rows, unsigned cols)
{
    if (rows > 1) //���� ������ �� ����, �� ������ �����
    {
        //������������� ������������ ����� � ������, �� �-�� ��� �����������
        size_t min = m[0][0];
        size_t RowToSwap = 0;

        //����� ������� � ����������� ��������� � ��� ������
        for (size_t i = 0; i < rows; ++i)
        {
            for (size_t j = 0; j < cols; ++j)
            {
                if (m[i][j] < min)
                {
                    min = m[i][j];
                    RowToSwap = i;
                }
            }
        }

        //����� ����������
        int* temp = m[RowToSwap];
        m[RowToSwap] = m[0]; //��������� �� ������ RowToSwap ������ ��������� �� ������� ������
        m[0] = temp; //��������� �� ������� ������ ������ ��������� �� ������ RowToSwap
    }
    return;
}