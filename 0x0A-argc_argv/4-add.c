#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints sum of positive numbers
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int total = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
