#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the doubly linked list
 */
void print_list(const listint_t *list)
{
	while (list)
	{
		printf("%d", list->n);
		list = list->next;
		if (list)
			printf(", ");
	}
	printf("\n");
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @node: Pointer to the node to be swapped with its next node
 * @list: Double pointer to the head of the doubly linked list
 */
void swap_nodes(listint_t *node, listint_t **list)
{
	listint_t *temp;

	if (node == NULL || node->next == NULL)
		return;

	temp = node->prev;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;

	if (node->next != NULL)
		node->next->prev = node;

	if (temp != NULL)
		temp->next = node;
	else
		*list = node;

	if (node->next != NULL)
		node->next->prev = temp;
}

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the Cocktail Shaker sort algorithm.
 * @list: Double pointer to the head of the doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	do
	{
		swapped = 0;
		current = *list;

		while (current->next != NULL)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(current, list);
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->next;
		}

		if (!swapped)
			break;

		swapped = 0;
		current = current->prev;

		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(current->prev, list);
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->prev;
		}
	} while (swapped);
}
