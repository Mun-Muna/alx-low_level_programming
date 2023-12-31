/**
 * _isalpha - Checks for alphabetic order
 * @c: character to be checked
 *
 * Return: 1 if an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
