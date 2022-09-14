#include "main.h"

/**
 * _islower - check whether a char is lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercase, 0 otherwise
 */
int	_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

