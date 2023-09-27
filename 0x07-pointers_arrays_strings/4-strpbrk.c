/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string
 *
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{	
	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (char*)(s);
			
			}
			accept++;
		}
		s++;
	}
	return ('\0');
}
