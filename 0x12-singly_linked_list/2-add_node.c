#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node to beginning of a list
 * @head: pointer to beginning of the list
 * @str: string to add
 * Return: address of new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
