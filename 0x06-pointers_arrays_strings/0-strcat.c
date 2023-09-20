/**
 * _strcat - appends a string to another string
 * @src: string to be appended
 * @dest: tring to be appended to
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0, j = 0; dest[i] != '\0' && src[j] != '\0'; i++, j++)
	{
	}
	for (k = 0; k <= j; k++, i++)
	{
		dest[i] = src[k];
	}
	return (dest);
}
