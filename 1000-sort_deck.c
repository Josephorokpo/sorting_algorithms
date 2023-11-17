#include "deck.h"

/**
 * compare_cards - Compare two cards.
 * @a: First card
 * @b: Second card
 * Return: Integer less than, equal to, or greater than zero if a is found,
 *         respectively, to be less than, to match, or be greater than b.
 */
static int compare_cards(const void *a, const void *b)
{
	return (*((const card_t **)a))->kind * 13 + (*((const card_t **)a))->value[0] -
	       (*((const card_t **)b))->kind * 13 - (*((const card_t **)b))->value[0];
}

/**
 * sort_deck - Sorts a deck of cards.
 * @deck: Pointer to the head of the doubly linked list representing the deck.
 */
void sort_deck(deck_node_t **deck)
{
	size_t i;
	deck_node_t *node;
	const card_t *sorted[52];

	if (!deck || !*deck)
		return;

	node = *deck;
	for (i = 0; i < 52; ++i)
	{
		sorted[i] = node->card;
		node = node->next;
	}

	qsort((void *)sorted, 52, sizeof(const card_t *), compare_cards);

	node = *deck;
	for (i = 0; i < 52; ++i)
	{
		node->card = sorted[i];
		node = node->next;
	}
}
