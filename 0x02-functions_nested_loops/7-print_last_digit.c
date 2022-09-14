#include "main.h"

/**
 * print_last_digit - print the last digit of the number given as argument
 * @n: number whose last digit is to be printed
 * @Return: the last digit of the number given as argument
 */
int	print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}

