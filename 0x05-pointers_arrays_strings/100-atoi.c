#include <limits.h>

/**
 * _atoi - converts a string of digits to an integer.
 *
 * @s: pointer pointing to the string to be converted.
 *
 * Return: the integer conversion of s.
 */
int	_atoi(char *s)
{
	unsigned int	integer;
	int	sign;
	int	i;

	integer = 0u;
	sign = 1;
	i = 0;

	if (!s[i])
		return (0);

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		++i;
	}

	while (s[i] >= '0' && s[i] <= '9')
		integer = (integer * 10) + (s[i++] - '0');

	return (integer * sign);
}

