#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t  stop = size;
	size_t swaps;
	size_t i, j;
	int temp;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swaps = 0;
		stop = size - i - 1;

		for (j = 0; j < stop; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swaps++;
			}
		}
		if (swaps == 0)
			break;
	}
}
