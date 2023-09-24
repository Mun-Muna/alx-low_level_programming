#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	long x, y, z;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (i != 49)
			printf("%ld, ", z);
		else
			printf("%ld\n", z);
	}
	return (0);
}
