#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: initialise array with char c
 *
 * Return: NULL if it fails or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = malloc(size);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
