#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: number of '\'
 */
void print_diagonal(int n)
{
	int r, c;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (r = 1; r < n; r++)
		{
			for (c = 1; c <= r; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
