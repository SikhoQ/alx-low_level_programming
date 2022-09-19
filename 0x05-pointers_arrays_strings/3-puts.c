#include "main.h"

/**
 * _puts - prints to stdout the string pointed to by str.
 *
 * @str: the pointer pointing to the string to be printed.
 */
void	_puts(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}

