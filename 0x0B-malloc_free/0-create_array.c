#include <stdlib.h>
/**
 * create_array - 
 * @size:
 * @c:
 *
 * Return: 
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
	
