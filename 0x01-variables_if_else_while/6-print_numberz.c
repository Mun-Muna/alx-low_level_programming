#include <stdio.h>

/**
 * main - Entry point to the program
 * Return: Exit program
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);

	putchar('\n');
	return (0);
}
