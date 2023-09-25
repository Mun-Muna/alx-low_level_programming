/**
 * _memcpy - copies n bytes from src to dest memory area
 * @dest: memory area to be copied to
 * @src: source memory are
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && src != 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
