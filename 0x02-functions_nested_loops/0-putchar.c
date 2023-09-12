#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char word1[] = "_putchar\n";

	for (i = 0; word1[i] != '\0' ; i++)
		_putchar(word1[i]);
	return (0);
}
