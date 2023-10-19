#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - returns number of elements of a list
 * @h: pointer to struct
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
