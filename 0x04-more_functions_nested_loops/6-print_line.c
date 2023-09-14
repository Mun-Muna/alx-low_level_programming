#include "main.h"
/**
 * print_line - Print a line made up of '_' n times
 * @n: number of character '_'
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(92);
			_putchar('n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
