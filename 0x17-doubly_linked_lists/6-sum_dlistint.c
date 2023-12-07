#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: head of list
 *
 * Return: the sum of data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
