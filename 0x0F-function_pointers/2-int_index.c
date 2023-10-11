#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: type int *
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first element or -1 if it fails.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array || cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
