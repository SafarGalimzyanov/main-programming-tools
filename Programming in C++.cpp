#include <cstdlib>

int** transpose(const int* const* m, unsigned rows, unsigned cols)
{
	//создание массива
	int** mt = new int* [cols];
	mt[0] = new int[cols * rows];

	for (size_t i = 1; i != cols; ++i)
	{
		mt[i] = mt[i - 1] + rows;
	}

	//копирование значений из заданной матрицы в траспонированную
	for (size_t i = 0; i < rows; ++i)
	{
		for (size_t j = 0; j < cols; ++j)
		{
			mt[j][i] = m[i][j];
		}
	}

	return mt;
}