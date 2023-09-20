#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: points to where the string will be copies
 * @src: points to the string to be copied
 * @n: number of bytes
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	
	for (i = 0; src[i] != '\0'; i++)
	{}
	for (j = 0; n > 0 && j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
		
	}
	if (n > i)
	{
		dest[j] = '\0';
	}
	return (dest);
}
