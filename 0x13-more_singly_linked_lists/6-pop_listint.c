#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: the head node
 * Return: head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data; /* the deleted data */

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
