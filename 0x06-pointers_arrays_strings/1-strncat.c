/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: number of bytes
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; n > 0 && j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
