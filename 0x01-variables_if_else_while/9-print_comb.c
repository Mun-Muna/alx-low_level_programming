#include <stdio.h>

/**
 * main - Entry point to the program
 * Return: Exit program
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}

		i++;
	}
	putchar('\n');
	return (0);
}
