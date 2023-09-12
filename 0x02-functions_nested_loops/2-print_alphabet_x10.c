#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
