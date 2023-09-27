/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	if (s == 0 || accept == 0)
		return (0);
	for (i = 0; *(s + i) != '\0'; i++)
	{}
	for (j = 0; j < i - 1; j++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
			{
				break;
			}
		}
		if (*(s + j) != *(accept + k))
		{
			break;
		}
	}
	return (j);
}
