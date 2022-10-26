#include "lists.h"

/**
 * sum_listint - sum contents of the list
 * @head: beginning of the list
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
