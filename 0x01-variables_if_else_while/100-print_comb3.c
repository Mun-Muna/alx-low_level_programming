#include <stdio.h>

/**
 * main - entry point to program
 * Return: exit program
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	j = (i + 1);

	for (i = 48; i <= 56; i++)
	{
		for (j = (i + 1); j <= 57; j++)
		{	putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
