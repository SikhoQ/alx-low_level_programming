#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: the array of integers whose elements are to be printed.
 * @n: the number of elements to print.
 */
void	print_array(int *a, int n)
{
	int	i;

	i = -1;

	while (++i < n)
	{
		printf("%d", a[i]);
		(i != (n - 1)) ? printf(", ") : printf("\n");
	}
}

