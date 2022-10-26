#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: beginning of the list
 * @n: int to add
 * Return: address of new element, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
