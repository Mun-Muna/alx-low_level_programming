#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to struct
 *
 * Return: number of nodes if succesful or exit status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	int i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
		printf("%d\n", head->n);
		while (current)
		{
			if (head == current)
				return (i);
			current = current->next;
		}
	}
	exit(98);
}
