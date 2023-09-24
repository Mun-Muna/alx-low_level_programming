#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	long x, y, z, sum;

	x = 1;
	y = 2;
	sum = 0;
	for (i = 0;; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z <= 4000000 && z % 2 == 0)
			sum += z;
	}
	printf("%ld\n", z);
	return (0);
}
