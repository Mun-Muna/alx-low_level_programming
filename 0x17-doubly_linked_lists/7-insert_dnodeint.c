#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index where the new node should be added. Index starts at 0
 * @n: data of new node
 *
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 1; (current)->next; i++)
	{
		if (i == idx)
		{
			if ((current)->next == NULL)
				return (add_dnodeint_end(h, n));
			new->n = n;
			new->next = current->next;
			new->prev = current;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}
