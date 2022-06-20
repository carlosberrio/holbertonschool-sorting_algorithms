#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 * @list: double pointer to list
 * Return: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *list1 = NULL;
	listint_t *temporal = NULL;

	if ((*list)->next == NULL || list == NULL || (*list) == NULL)
		return;

	list1 = *list;
	temporal = *list;

	while (temporal != NULL)
	{
		temporal = temporal->next;
		while (list1->prev && (list1->n < list1->prev->n))
		{
			list1->prev->next = list1->next;
			if (list1->next != NULL)
				list1->next->prev = list1->prev;
			list1->next = list1->prev;
			list1->prev = list1->next->prev;
			if (list1->prev != NULL)
				list1->prev->next = list1;
			else
				*list = list1;
			list1->next->prev = list1;
			print_list(*list);
		}
		list1 = temporal;
	}
}
