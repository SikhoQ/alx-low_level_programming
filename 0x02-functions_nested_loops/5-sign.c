#include "main.h"

/**
 * print_sign - prints the sign of argument integer
 * @n: integer for which sign is to be printed
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is negative
 */
int	print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}

