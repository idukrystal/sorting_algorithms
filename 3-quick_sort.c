#include "sort.h"

/**
 * quick_sort - sorts an array quick
 * @array: the array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick(array, size, 0, size - 1);
}

/**
 * quick - helper function handles recursion
 * @arr: an array
 * @size: arr's size
 * @a: were sort starts
 * @b: were sort ends
 */
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

/**
 * swapa - swaps elements of an array
 * @arr: the array
 * @size: arrays size
 * @a: element 1
 * @b: element 2
 */
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
