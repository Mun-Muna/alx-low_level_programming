#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: type unsigned long int
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return:value of the bit at index index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	double rem = n * 0.5;
	long int num = n * 0.5;
	unsigned int i;
	char s[32];

		for (i = 0; rem; i++)
		{
			if (rem - num)
				s[i] = '1';
			if (!(rem - num))
				s[i] = '0';
			rem = num * 0.5;
			num *= 0.5;
		}
		if (i)
			i = i - 1;
		if (i >= index)
		{
			if (s[index] == '1')
				return (1);
			else
				return (0);
		}
		else
			return (-1);
}
