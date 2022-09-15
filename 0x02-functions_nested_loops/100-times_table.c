#include "main.h"

/**
 * print_times_table - print n times table according to argument
 * @n: number to use to print the times table
 */
void	print_times_table(int n)
{
	int	num1;
	int	num2;

	num1 = -1;

	if (n >= 0 && n <= 15)
	{
		while (++num1 <= n)
		{
			num2 = -1;
			while (++num2 <= n)
			{
				if ((num1 * num2) < 10)
					_putchar((num1 * num2) + '0');
				else if ((num1 * num2) < 100)
				{
					_putchar(((num1 * num2) / 10) + '0');
					_putchar(((num1 * num2) % 10) + '0');
				}
				else
				{
					_putchar(((num1 * num2) / 100) + '0');
					_putchar((((num1 * num2) % 100) / 10) + '0');
					_putchar((((num1 * num2) % 100) % 10) + '0');
				}
				if (num2 < n)
				{
					_putchar(',');
					_putchar(' ');
					if ((num1 * (num2 + 1)) < 100)
						_putchar(' ');
					if ((num1 * (num2 + 1)) < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

