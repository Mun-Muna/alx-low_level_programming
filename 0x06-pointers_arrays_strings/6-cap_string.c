/**
 * cap_string - capitalizes all words of a string
 * @s: points to a string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == c[j])
				{
					s[i] = s[i] - ' ';
				}
			}
		}
		i++;
	}
	return (s);
}
