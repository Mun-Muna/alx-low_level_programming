#include <stdio.h>

/**
 * main - Entry point to program
 * Return: Exit program
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
		if (i < 58 || i > 96)
			putchar(i);
	putchar('\n');
	return (0);
}
