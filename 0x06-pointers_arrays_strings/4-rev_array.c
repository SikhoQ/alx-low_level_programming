/**
 * reverse_array - reverse the order of an array of integers.
 *
 * @a: pointer to the first integer in the array.
 * @n: number of integers in the array.
 */
void	reverse_array(int *a, int n)
{
	int	i;
	int	j;
	int	temp;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[j];
		a[j--] = a[i];
		a[i] = temp;
	}
}

