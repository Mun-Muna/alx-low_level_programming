#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	for (i = 10;; i *= 10)
	{
		if (n / i == 0)
		{
			break;
		}
	}
	for (i /= 10; i >= 1; i /= 10 )
	{
		_putchar((n / i) % 10 + '0');
	}
}
