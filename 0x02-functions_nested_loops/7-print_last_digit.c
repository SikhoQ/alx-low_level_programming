#include "main.h"

/**
 * print_last_digit - print the last digit of the number given as argument
 * @n: number whose last digit is to be printed
 * Return: the last digit of the number given as argument
 */
int	print_last_digit(int n)
{
	int	digit;

	digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}

