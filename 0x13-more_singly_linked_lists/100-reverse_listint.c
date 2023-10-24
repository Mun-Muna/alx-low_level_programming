#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to list
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *ptr = NULL;

	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = ptr;
	}
	*head = current;
	return (*head);
}
