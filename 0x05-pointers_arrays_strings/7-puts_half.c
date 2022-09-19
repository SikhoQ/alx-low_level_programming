#include "main.h"

/**
 * puts_half - prints the second half of the string pointed to by str.
 * If the length of the string is odd, print the last (length - 1) / 2 chars.
 *
 * @str: the pointer pointing to the string to be printed.
 */
void	puts_half(char *str)
{
	int	i;

	i = 0;

	while (str[i])
		++i;

	if (i % 2)
		i = i / 2;
	else
		i = i / 2 + 1;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}

