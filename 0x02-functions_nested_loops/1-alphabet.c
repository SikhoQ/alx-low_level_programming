#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase,  followed by a newline
 */
void	print_alphabet(void)
{
	char	alpha;

	alpha = 'a';

	while (alpha <= 'z')
		_putchar(alpha++);
	_putchar('\n');
}

