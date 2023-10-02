#include <stdio.h>
/**
 * main - print name of the program
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
