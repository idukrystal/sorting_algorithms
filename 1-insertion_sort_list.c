#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list using insertion sort
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *next, *tmpn;

	if ((list == NULL || *list == NULL) || (*list)->next == NULL)
		return;
	tmp = (*list)->next;
	for (next = tmp->next; tmp; tmp = next, next = next ? next->next : NULL)
	{
		for (tmpn = tmp->prev; tmpn != NULL; tmpn = tmp->prev)
		{
			if (tmp->n < tmpn->n)
			{
				swap(tmp, tmpn, list);
				print_list(*list);
			}
			else
			{
				break;
			}
		}
	}
}

/**
 * swap - swaps the positions of two list elements
 * @tmp: element 1
 * @tmpn: element 2
 * @head: list's head
 */
void swap(listint_t *tmp, listint_t *tmpn, listint_t **head)
{
	if (tmpn->prev != NULL)
		tmpn->prev->next = tmp;
	else
	{
		*head = tmp;
	}
	if (tmp->next != NULL)
		tmp->next->prev = tmpn;
	tmpn->next = tmp->next;
	tmp->prev = tmpn->prev;
	tmpn->prev = tmp;
	tmp->next = tmpn;
}
