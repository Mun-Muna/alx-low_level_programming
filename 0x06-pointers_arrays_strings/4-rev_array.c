/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements to be reversed
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; n > 0 && i < n; i++, n--)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;
	}
}
