#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 * @head: pointer to struct
 *
 * Return: data of deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	listint_t *current = *head;
	int n;

	if (!new)
		return (-1);
	if (!*head)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	current = NULL;
	return (n);
}
