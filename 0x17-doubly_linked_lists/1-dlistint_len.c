#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int no_of_elements = 0;

	while (h)
	{
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}
