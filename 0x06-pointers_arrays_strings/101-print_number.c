#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int i, j, x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	for (i = 10, j = 1;; i *= 10, j *= 10)
	{
		if ((n % i) / j == 0 && n % i == n)
		{
			break;
		}
	}
	for (i = i / 10, j = j / 10 ; i >= 10 && j >= 1; i /= 10, j /= 10)
	{
		x = (n % i) / j;
		_putchar(x + '0');
	}
}
