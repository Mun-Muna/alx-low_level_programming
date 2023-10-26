#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	double rem = n * 0.5;
	unsigned long int num = n * 0.5;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print_binary(num);
		if (rem - num)
			_putchar('1');
		else
			_putchar('0');
	}
}
