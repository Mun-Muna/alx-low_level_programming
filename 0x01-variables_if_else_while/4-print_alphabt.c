#include <stdio.h>

/**
 * main - entry point
 * Return: Print lowercase alphabet excluding e and q
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
