#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a list
 * @head: beginning of the list
 * Return: number of nodes, else exit (98)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int difference;

	while (head)
	{
		difference = head - head->next;
		nodes++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (difference > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes);
}
