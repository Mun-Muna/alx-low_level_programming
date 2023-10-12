#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: type int
 * @argv: type char *
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(argv[2]))(num1, num2));
	return (0);
}
