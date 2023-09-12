#include "main.h"

/**
 * print_sign - prints sign of the number
 * @n: number to be checked
 *
 * Return: 1 for +ve, 0 for 0, -1 for -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
