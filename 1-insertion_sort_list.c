#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of
 * integers in ascending order
 * using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
		return;

	/* Initialize sorted linked list */
	listint_t *sorted = NULL;

	/* Traverse the given linked list and insert every node to sorted list */
	while (*list)
	{
		listint_t *current = *list;
		listint_t *next = current->next;

		/* Move nodes from the current list to the sorted list */
		if (!sorted || sorted->n >= current->n)
		{
			current->next = sorted;
			current->prev = NULL;
			if (sorted)
				sorted->prev = current;
			sorted = current;
		}
		else
		{
			/* Locate the node before the point of insertion */
			listint_t *temp = sorted;

			while (temp->next && temp->next->n < current->n)
				temp = temp->next;

			/* Insert the current node */
			current->next = temp->next;
			if (temp->next)
				temp->next->prev = current;
			temp->next = current;
			current->prev = temp;
		}

		/* Move to the next node in the given list */
		*list = next;

		/* Print the list after each swap */
		print_list(*list);
	}
}
