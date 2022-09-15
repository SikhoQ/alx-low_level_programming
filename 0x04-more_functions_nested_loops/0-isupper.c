#include "main.h"

/**
 * _isupper - checks whether passed argument is uppercase
 * @c: ASCII value of char to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int	_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

