#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
