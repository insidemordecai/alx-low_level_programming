#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list
 * @head: pointer to beginning of list
 * @str: string to add
 * Return: address of new element, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
