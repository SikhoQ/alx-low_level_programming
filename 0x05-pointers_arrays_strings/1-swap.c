/**
 * swap_int - swaps the values of two integers
 *
 * @a: the pointer variable pointing to the first integer.
 * @b: the pointer variable pointing to the second integer.
 */
void	swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

