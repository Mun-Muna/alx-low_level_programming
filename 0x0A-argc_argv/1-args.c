#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; argv[i] != 0; i++)
	{}
	i = i - 1;
	if (i == argc - 1)
		printf("%d\n", i);
	return (0);
}
