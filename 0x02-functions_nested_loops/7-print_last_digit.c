#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: int
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(-n % 10 + '0');
		return (-n);
	}
	else
	{	
		_putchar(n % 10 + '0');
		return (n);
	}
	return (0);
}
