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

	if (!new)
		return NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!(current->next))
		return (add_dnodeint_end(h, n));
	for (i = 1; current; i++)
	{
		current = current->next;
		if (i == idx)
		{
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
