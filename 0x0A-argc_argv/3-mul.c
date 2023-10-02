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
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1])  * atoi(argv[2]);
		printf("%d\n", total);
	}
	else
		printf("Error\n");
	return (0);
}
