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


	//Проверили пустые шаблон, текст, когда шаблон больше текста. Теперь рабкотаем лапоньками
	//Основной цикл: ищем первое вхождение нулевого элемента шаблона в текст
	for (i = 0; i != textSize; ++i) {

		if (i == (textSize - patternSize + 1))
		{
			//Если прошли по всему тексту - размер шаблона + 1 (на всякий, потом надо убрать)
			//и нигде не встретили нулевой элемент шаблона, значит его тут не будет
			return -1;
		}
		if (text[i] == pattern[0])
		{
			//Пришли сюда, Если встретили нулевой элемент шаблона в тексте
			pervoeVhozhdenie = i;
			//Теперь смотрим, как долго шаблон встречается в тексте
			for (j = 0; text[pervoeVhozhdenie + j] == pattern[j]; ++j)
			{
				//Ну ищем дальше по тексту, чо
				if (j == patternSize - 1)
				{
					//Если прошли весь шаблон успешно, значит возвращаем первое вхождение
					return pervoeVhozhdenie;
				}
				else
				{
					//Споткнулись об ошибку, начинаем ВЕСЬ цикл заново, т.к. нужно сдвинуть i на 1
				}
			}

		}

	}
	return -1;

}