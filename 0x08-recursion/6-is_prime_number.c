/**
 * prime_help - to allow implementation of is_prime_number
 * @k: number to be checked
 * @l: type int
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_help(int k, int l)
{
	if (k < 2)
		return (0);
	if (k == 2 || k == 3)
		return (1);
	if (!(k % l))
		return (0);
	if (l == (k / 2))
		return (1);
	return (prime_help(k, l + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: integer to be checked
 *
 * Return: 1 if a prime number otherwise 0
 */
int is_prime_number(int n)
{
	return (prime_help(n, 2));
}
