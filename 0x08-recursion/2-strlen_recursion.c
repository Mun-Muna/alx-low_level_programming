/**
 * _strlen_recursion - returns length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return 1 + _strlen_recursion(s);
	}
	else 
		return 0;
}
