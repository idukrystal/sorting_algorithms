#include "sort.h"

int main(void)
{
	int arr[] = {1, 2, 3, 5,4};
	int i;

	for (i = 0; i < 5; i++)
		printf("%i, ", arr[i]);
	putchar('\n');
	bubble_sort(arr, 5);
	for (i = 0; i < 5; i++)
                printf("%i, ", arr[i]);
        putchar('\n');
}
