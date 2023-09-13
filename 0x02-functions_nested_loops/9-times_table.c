#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	x = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			x = i * j;
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(x + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
