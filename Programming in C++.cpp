#include <cstddef> // size_t

// реализуйте шаблонную функцию array_size,
// которая возвращает значение типа size_t.

template <typename T, size_t S>
size_t array_size(const T(&arr)[S])
{
    return S;
}