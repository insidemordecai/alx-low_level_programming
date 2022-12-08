#include "lists.h"

/**
 * dlistint_len - get number of elements in a linked dlistint_t list
 * @h: head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for(nodes = 0; h; nodes++)
		h = h->next;

	return (nodes);
}
