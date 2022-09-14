#include "main.h"

/**
 * _islower - check whether a char is lowercase
 * @param: int c - the char to be checked
 * @return: 1 if char is lowercase, 0 otherwise
 */
int	_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

