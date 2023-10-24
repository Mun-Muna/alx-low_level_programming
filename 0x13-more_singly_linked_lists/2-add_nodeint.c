#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds add a new node at the beginning of a listint_t list
 * @head: pointer to struct
 * @n: type int
 *
 * Return: address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
