#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}
