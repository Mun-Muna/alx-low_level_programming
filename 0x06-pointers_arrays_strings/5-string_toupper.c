/**
 * string_toupper - capitalise letters of a string
 * @s: points to a string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ' ';
		}
	}
	return (s);
}
