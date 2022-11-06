#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int i, j, small, tmp;

	for (i = 0; i  < size - 1; i++)
	{
		small = i;
		for (j = i; j < size; j++)
		{
			small = array[j] < array[small] ? j : small;
		}
		tmp = array[i];
		array[i] = array[small];
		array[small] = tmp;
	}
}
