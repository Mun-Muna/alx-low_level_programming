#include "main.h"
/**
 * flip_bits - flips bits to get from one number to another
 * @n: type unsigned long int
 * @m: type unsigned long int
 *
 * Return: number of bits you would need to flip to get
 * from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
