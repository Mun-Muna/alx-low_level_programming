#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i;

	if (!*head)
		return (-1);
	for (i = 0; current; i++)
	{
		if (i == index)
		{
			if (index == 0)
			{
				if (current->next == NULL)
				{
					free(current);
					return (1);
				}
				temp = current;
				current = current->next;
				current->prev = NULL;
				*head = current;
				free(temp);
				return (1);
			}
			if (current->next == NULL)
			{
				temp = current;
				current = current->prev;
				current->next = NULL;
				free(temp);
				return (1);
			}
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
