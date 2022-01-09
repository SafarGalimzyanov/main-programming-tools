#include <cstddef> // size_t

// ���������� ��������� ������� array_size,
// ������� ���������� �������� ���� size_t.

template <typename T, size_t S>
size_t array_size(const T(&arr)[S])
{
    return S;
}