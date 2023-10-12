#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
}
