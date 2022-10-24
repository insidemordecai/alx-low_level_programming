#include "lists.h"

/**
 * free_list - frees a list
 * @head: beginning of the list
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		free(node->str);
		free(node);
		head = head->next;
	}
}
