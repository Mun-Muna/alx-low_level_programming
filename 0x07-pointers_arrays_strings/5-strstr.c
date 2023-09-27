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

	for (; *haystack; haystack++)
	{
		for (;; needle++)
			if (*haystack == *needle)
			{
				if (!*needle)
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
