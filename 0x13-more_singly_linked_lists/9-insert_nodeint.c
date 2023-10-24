#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to struct
 * @idx: index of the list where the new node should be added
 * @n: data of node of type int
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *next = NULL;
	unsigned int i;

	if (!new || !*head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	for (i = 0; *head; i++)
	{
		if (i == idx)
		{
			next = *head;
			*head = new;
			new->next = next;
			new = *head;
			return (new);
		}
		*head = (*head)->next;
	}
	return (new);
}
