#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings
 * @separator: to be printed between strings
 * @n: number of strings printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *str2;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str2 = va_arg(str, char *);
		if (!str2)
			printf("(nil)");
		else
			printf("%s", str2);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}

