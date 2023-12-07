#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of list
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
