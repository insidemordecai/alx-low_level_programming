#include "lists.h"

/**
 * list_len - return no. of elements in a linked list
 * @h: the list
 * Return: no. of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
