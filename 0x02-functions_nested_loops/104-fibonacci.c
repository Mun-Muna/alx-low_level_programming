#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long n_1 = 2, n_2 = 1, n, m, k, i, j;

	printf("1, 2, ");
	for (i = 4; i <= 98; i++)
	{
		n = n_1 + n_2;
		n_1 = n;
		n_2 = n_1;
		if (n <= ULONG_MAX)
			printf("%lu, ", n);
		else
		{
			m = n;
			for (j = 10; m > ULONG_MAX; j *= 10)
				m = n / j;
			printf("%lu", m);
			for (j /= 10; j > 1; j /= 10)
			{
				k = n % j;
				printf("%lu", k);
			}
			printf(", ");
		}
	}
	return (0);
}




