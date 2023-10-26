#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, convert = 1;
	int i, j;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '0')
			res += 0;
		if (b[i] == '1')
			res += convert;
		convert *= 2;
	}
	return (res);
}
