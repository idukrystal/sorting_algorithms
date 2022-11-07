#ifndef SORT
#define SORT

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);

void swap(listint_t *tmp, listint_t *tmp2, listint_t **head);
void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick(int *arr, size_t, size_t a, size_t b);
void quick_sort(int *array, size_t size);
void swapa(int *, size_t, int *a, int *b);

#endif /* SORT */
