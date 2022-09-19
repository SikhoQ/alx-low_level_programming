#include "main.h"

/**
 * print_rev - prints the string pointed to by s in reverse.
 *
 * @s: the pointer pointing to the string to be printed in reverse.
 */
void	print_rev(char *s)
{
	int	i;

	i = _strlen(s) - 1;

	while (s[i] >= 0)
		_putchar(str[i--]);
	_putchar('\n');
}

