/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		x = s[j];
		s[j] = s[i - 1];
		s[i - 1] = x;
		i--;
	}
}
