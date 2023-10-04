#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	long unsigned int i, len1, len2;

	len1 = sizeof(s1);
	len2 = sizeof(s2);
	s3 = malloc(len1 + len2);
	if (s3)
	{
		for (i = 0; i < len1 + len2; i++)
		{
			if (i >= len1)
			{
				*(s3 + i) = *s2;
				s2++;
			}
			else
			{
				*(s3 + i) = *(s1 + i);
			}
		}
		*(s3 + i) = '\0';
		return (s3);
	}
	else
		return (NULL);
}
