#include <limits.h>
#include "main.h"

/**
 * print_number - prints to stdout the ineteger passed as argument
 * @n: the integer to be printed
 */
void	print_number(int n)
{
	int	copy_of_n;
	int	divisor;

	divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n += 2000000000;
			_putchar('2');
		}
		n = -n;
	}

	copy_of_n = n;

	while (copy_of_n >= 10)
	{
		divisor *= 10;
		copy_of_n /= 10;
	}

	while (divisor)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}

