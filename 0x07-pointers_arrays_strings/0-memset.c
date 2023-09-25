/**
 * _memset - fills the memory with a constant byte 
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 && i < n && s != 0; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
