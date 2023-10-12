#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by \n
 * @separator: points to string to be printed between numbers
 * @n: number of integers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}

