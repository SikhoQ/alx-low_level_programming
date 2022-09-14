#include "main.h"

/**
 * _isalpha - checks whether a given char is an alphabet
 * @c: ASCII value of char to be checked
 * Return: 1 if char is alpha, 0 otherwise
 */
int	_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

