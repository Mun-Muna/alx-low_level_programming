#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n |= (1UL << index);
		return (1);
}
