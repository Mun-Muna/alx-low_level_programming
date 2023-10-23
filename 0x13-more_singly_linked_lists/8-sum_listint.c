#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to struct
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
