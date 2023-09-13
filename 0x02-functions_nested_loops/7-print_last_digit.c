#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: int
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = (-1 * n) % 10;
		_putchar(m  + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
	return (0);
}
