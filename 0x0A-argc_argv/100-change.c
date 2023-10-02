#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of coins
 * @argc: type integer
 * @argv: pointer type char
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a[] = {25, 10, 5, 2, 1};
	int cents = 0, i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (num >= a[i])
		{
			cents += (num / a[i]);
			num = num % a[i];
			if (num != 0 && num < a[i])
			{
				continue;
			}
		}
		else
			continue;
	}
	printf("%d\n", cents);
	return (0);
}
