/**
 * leet - encodes a string into 1337
 * @s: points to the string to encoded
 *
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int i, j;
	int a[5] = {'4', '3', '0', '7', '1'};
	char c[5][2] = {"aA", "eE", "oO", "tT", "lL"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j][2] != '\0'; j++)
		{
			if (s[i] == c[j][0] || s[i] == c[j][1])
			{
				s[i] = a[j];
			}
		}
	}
	return (s);
}
