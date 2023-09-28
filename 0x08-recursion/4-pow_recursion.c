/**
 * _pow_recursion - returns value of a number raised to a power
 * @x: integer raised to a power
 * @y: exponent
 *
 * Return: value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int sign = 1;

	if (!y)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	if (x < 0)
	{
		sign *= -1;
	}
}
