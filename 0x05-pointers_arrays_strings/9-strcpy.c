/**
 * _strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @dest: buffer 
 * @src: string to be copied
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src [j];
	}
	return (dest);
}
