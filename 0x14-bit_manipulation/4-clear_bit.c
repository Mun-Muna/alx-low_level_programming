#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long int
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = *n;
	unsigned long int num;

	if (index > 63)
		return (-1);
	if (!n)
		return (-1);
	num = 1 << index;
	num = ~num;
	a = a & num;
	*n = a;

	return (1);
}
