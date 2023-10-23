#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to struct
 */
void free_listint(listint_t *head)
{
	int *ptr = &(head->n);

	while (head)
	{
		free(ptr);
		free(head);
		head = head->next;
	}
}
