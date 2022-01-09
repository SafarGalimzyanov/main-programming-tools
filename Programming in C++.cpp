#include <cstddef>

// Параметры функции copy_n идут в следующем
// порядке:
//   1. целевой массив
//   2. массив источник
//   3. количество элементов, которые нужно
//      скопировать
//
// Вам нужно реализовать только функцию copy_n,
// чтобы ее можно было вызвать так, как показано
// в примере.

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