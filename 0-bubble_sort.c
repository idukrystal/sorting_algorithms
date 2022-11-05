#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to sory
 * @size: size of said array
 */
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
				if (!(j == stop - 1 && swaps == 0))
					swaps++;
			}
		}
		if (swaps == 0)
			break;
	}
}
