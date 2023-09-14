#include "main.h"
/**
 * print_line - Print a line made up of '_' n times
 * @n: number of character '_'
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{		
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
