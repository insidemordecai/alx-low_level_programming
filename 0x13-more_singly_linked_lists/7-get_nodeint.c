#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of the list
 * @head: beginning of the list
 * @index: index of the node, starting at 0
 * Return: nth node of the list, else NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i <= index; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
