#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: list to be sorted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current; /* traverses list */
	listint_t *temp; /* holds temp values */

	current = *list;
	current = current->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current;

			/* link next and previous nodes together */
			if (current->next != NULL)
				current->next->prev = temp->prev;
			current->prev->next = temp->next;

			/* move to previous node, insert temp node before it */
			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;
			if (current->prev != NULL)
				current->prev->next = temp;
			current->prev = temp;

			/* if node is new head of list, set it to *list */
			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
