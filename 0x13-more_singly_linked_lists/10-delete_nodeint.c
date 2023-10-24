#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *current = *head;
	listint_t *ptr = malloc(sizeof(listint_t));
	unsigned int i;

	if (!ptr)
		return (-1);
	for (i = 0; current; i++)
	{
		if (i == index)
		{
			ptr = current->next;
			current = NULL;
			while (h)
				h = h->next;
			h->next = ptr;
			return (1);
		}
	}
	return (-1);
}
