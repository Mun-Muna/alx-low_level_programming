#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *next;
	unsigned int i;

	if (!current)
		return (-1);
	for (i = 0; i < index; i++)
		current = current->next;
	if (!current)
		return (-1);
	next = current->next;
	free(current);
	current = next;
	return (1);
}
