#include <cstdlib>

void swap_min(int* m[], unsigned rows, unsigned cols)
{
    if (rows > 1) //если строка не одна, то ведётся поиск
    {
        //инициализация минимального числа и строки, на к-ой оно расположено
        size_t min = m[0][0];
        size_t RowToSwap = 0;

        //поиск объекта с минимальным значением и его строки
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

        //смена указателей
        int* temp = m[RowToSwap];
        m[RowToSwap] = m[0]; //Указатель на строку RowToSwap теперь указывает на нулевую строку
        m[0] = temp; //Указатель на нулевую строку теперь указывает на строку RowToSwap
    }
    return;
}