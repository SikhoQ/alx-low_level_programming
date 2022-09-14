#include "main.h"

/**
 * _abs - computes and returns the absolute value of an integer
 * @n: integer whose absolute value is to be computed
 * Return: the absolute value of the integer passed as argument
 */
int	_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

