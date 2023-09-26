/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
}
