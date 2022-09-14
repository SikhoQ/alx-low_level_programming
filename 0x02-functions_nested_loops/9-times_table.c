#include "main.h"

/**
 * times_table - prints a 9 times table
 */
void	times_table(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			if (num1 * num2 < 10)
				_putchar((num1 * num2) + '0');
			else
			{
				_putchar(((num1 * num2) / 10) + '0');
				_putchar(((num1 * num2) % 10) + '0');
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (num1 * (num2 + 1) < 10)
					_putchar(' ');
			}
			else
				_putchar('\n');
			num2++;
		}
		num1++;
	}
}

