#include "main.h"
/**
 * times_table - Prints timestable from 0-9
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x > 0 && x < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
				_putchar(x + '0');
		}
		_putchar('\n');
	}
}
