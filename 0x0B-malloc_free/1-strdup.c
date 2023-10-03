#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to be copied
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int i;
	char *str1;

	str1 = malloc(sizeof(*str));
	if (str1)
	{
		for (i = 0; *(str + i); i++)
		{
			*(str1 + i) = *(str + i);
		}
		return (str1);
	}
	else
		return (NULL);
}
