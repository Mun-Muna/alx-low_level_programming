/**
 * sqrt_help - to implement _sqrt_recursion
 * @k: check for natural square root of k
 * @l: possible natural sqaure root
 *
 * Return: natural square root of k
 */
int sqrt_help(int k, int l)
{
	if (k == 0)
		return (0);
	if (k == 1)
		return (1);
	if (l * l == k)
		return (l);
	if (k < 0 || l * l > k)
		return (-1);
	return (sqrt_help(k, l + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: type integer
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_help(n, 2));
}
