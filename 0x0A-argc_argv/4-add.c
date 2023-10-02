#include <stdio.h>
#include <stdlib.h>
/**
 * main - print name of the program
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int total = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += atoi(argv[i]);
		}
	}
	printf("%ld\n", total);
	return (0);
}
