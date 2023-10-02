#include <stdio.h>
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
	int total = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i] && argv[i] != 0))
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) >= 0)
		{
			total += atoi(argv[i]);
		}
	}
	printf("%d\n", total);
	return (0);
}
