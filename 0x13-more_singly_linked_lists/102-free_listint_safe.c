#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: beginning of the list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int difference;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodes++;
			break;
		}
	}

	*h = NULL;

	return (nodes);
}
