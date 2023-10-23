#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (ptr)
	{
		free(ptr);
		ptr = ptr->next;
	}
	*head = NULL;
}
