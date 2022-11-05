#include "sort.h"

int main(void)
{
	int arr[] = {4, 5, 3, 1, 2};

	for (int i = 0; i < 5; i++)
		printf("%i, ", arr[i]);
	putchar('\n');
	bubble_sort(arr, 5);
	for (int i = 0; i < 5; i++)
                printf("%i, ", arr[i]);
        putchar('\n');
}
