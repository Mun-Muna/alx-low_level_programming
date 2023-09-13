#include <stdio.h>
/**
 * print_to_98 - Print numbers from n until 98
 * @n: Starting number
 *
 * Return: int
 */
void print_to_98(int n)
{
	while (n != 98)
	{	printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
