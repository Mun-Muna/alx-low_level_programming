#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to struct
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			i++;
		h = h->next;
	}
	return (i);
}
