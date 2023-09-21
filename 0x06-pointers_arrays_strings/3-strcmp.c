/**
 * strcmp - compares two strings
 * @s1: points to string
 * @s2: points to string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' ; i++)
	{}
	if (s1[i] ==  s2[i])
	{
		return (0);
	}
	else 
	{
		return (s1[i] - s2[i]);
	}
}
