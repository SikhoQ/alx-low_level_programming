#include "main.h"

/**
 * puts2 - prints every other character of the string pointed to by str
 * starting with the first, followed by a new line.
 *
 * @str: the pointer pointing to the string to be printed
 */
void	puts2(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

