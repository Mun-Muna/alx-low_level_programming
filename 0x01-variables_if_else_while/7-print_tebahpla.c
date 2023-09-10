#include <stdio.h>

/**
 * main - entry point to the program
 * Return: int
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
