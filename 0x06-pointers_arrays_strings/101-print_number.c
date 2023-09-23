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
	for (i = 10; (n / i) > 0; i *= 10)
	{
	}
	i = i / 10;
	for (; i >= 1; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
}
