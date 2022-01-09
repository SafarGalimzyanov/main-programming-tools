char* resize(const char* str, unsigned size, unsigned new_size)
{
	//создание новой области памяти
	char* new_str = new char[new_size];

	//определение меньшего размера памяти
	size = size > new_size ? new_size : size;

	//запоминаются указатели, используются в цикле временные переменные
	const char* temp1 = str;
	char* temp2 = new_str;

	//копирование данных из одной области в другую
	for (; size--; temp1++, temp2++)
	{
		*temp2 = *temp1;
	}

	//удаление использованной области памяти
	delete[] str;

	//возврат указателя на новую область памяти
	return new_str;
}