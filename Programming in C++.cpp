#include <cstddef>

// ��������� ������� copy_n ���� � ���������
// �������:
//   1. ������� ������
//   2. ������ ��������
//   3. ���������� ���������, ������� �����
//      �����������
//
// ��� ����� ����������� ������ ������� copy_n,
// ����� �� ����� ���� ������� ���, ��� ��������
// � �������.

// put your code here
template <typename Type1, typename Type2>
void copy_n(Type1* array1, Type2* array2, size_t s)
{
    for (int i = 0; i != s; ++i)
    {
        array1[i] = Type1(array2[i]);
    }
    return;
}