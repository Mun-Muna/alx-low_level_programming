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

	for (i = 0; *(s + i) != '\0'; i++)
	{}
	i = i - 1;
	for (j = 0; *(s + j) != *(s + i); j++)
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
