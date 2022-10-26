#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at an index
 * @head: beginning of list
 * @index: index of node to delete, starts at 0
 * Return: 1 is successfull, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
