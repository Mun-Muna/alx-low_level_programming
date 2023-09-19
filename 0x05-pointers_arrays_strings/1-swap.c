/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer
 * @b: Pointer
 */
void swap_int(int *a, int *b)
{
	int x;
	x = *a;

	*a = *b;
	*b = x;
}
