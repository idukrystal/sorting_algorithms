#include "sort.h"

void quick_sort(int *array, size_t size)
{	quick(array, size, 0, size - 1);
}

void quick(int *arr, size_t size, size_t a, size_t b)
{
	size_t i = a - 1;
	size_t j = a;
	int piv = arr[b];

	if ((int) b < 0)
		return;
	if (!(a < b))
		return;
	for (; j < b; j++)
	{
		if (arr[j] < piv)
		{
			i++;
			swapa(arr, size, (arr + i), (arr + j));
		}
	}
	i++;
	swapa(arr, size, (arr + i), (arr + b));
	quick(arr, size, a, (i - 1));
	quick(arr, size, (i + 1), b);
}

void swapa(int *arr, size_t size, int *a, int *b)
{
	int tmp;
	if (*a != *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		print_array(arr, size);
	}
}
