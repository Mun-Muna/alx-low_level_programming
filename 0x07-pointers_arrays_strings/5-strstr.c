/**
 * _strstr - locates a substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to substring to be located
 *
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *str_needle = needle;
	int i, j;

	for (i = 0; *(needle + i); i++)
	{}
	for (; *haystack; haystack++)
	{
		for (j = 0; j < i; j++)
			if (*haystack == *(needle + j))
			{
				if (j == i - 1)
				{
					return (str_needle);
				}
				haystack++;
			}
			else
			{
				break;
			}
	}
	return ('\0');
}
