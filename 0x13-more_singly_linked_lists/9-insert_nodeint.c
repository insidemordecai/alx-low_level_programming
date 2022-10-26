#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: beginning of the list
 * @idx: given index to insert new node
 * @n: int to insert
 * Return: address of new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new, *temp = *head;

    new = malloc(sizeof(listint_t));

    if (new == NULL || head == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }

    for (i = 0; temp && i < idx; i++)
    {
        if (i == idx - 1)
        {
            new->next = temp->next;
            temp->next = new;
            return (new);
        }

		temp = temp->next;
    }

    return (NULL);
}
