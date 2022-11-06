#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int small, tmp;

	for (i = 0; i  < size - 1; i++)
	{
		small = i;

		for (j = i; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}
		tmp = array[i];
		array[i] = array[small];
		array[small] = tmp;
		print_array(array, size);
	}
}
