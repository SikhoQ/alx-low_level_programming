#include "main.h"

/**
 * print_diagonal - prints a daigonal line in the terminal
 * @n: number of times the char \ should be printed
 */
void	print_diagonal(int n)
{
	int	i;
	int	j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		if (i != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

