#include "main.h"

/**
 * print_rev - prints the string pointed to by s in reverse.
 *
 * @s: the pointer pointing to the string to be printed in reverse.
 */
void	print_rev(char *s)
{
	int	i;

	i = 0;

	while (s[i])
		i++;

	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}

