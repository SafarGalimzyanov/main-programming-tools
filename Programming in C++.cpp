void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void rotate(int a[], unsigned size, int shift)
{
	for (int i = 0; i < shift; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (j - 1 < 0)
			{
				swap(&a[j], &a[j - 1 + size]);
			}
			else
			{
				swap(&a[j], &a[j - 1]);
			}
		}
	}
	return;
}