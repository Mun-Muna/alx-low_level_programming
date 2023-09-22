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
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			for (j = 0; c[j] != '\0'; j++)
			{
				if (i > 0 && s[i - 1] == c[j])
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
