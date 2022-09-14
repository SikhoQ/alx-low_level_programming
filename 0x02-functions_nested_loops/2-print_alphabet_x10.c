#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times,
 * followed by a new line
 */
void	print_alphabet_x10(void)
{
	char	alpha;
	int	count;

	count = 0;

	while (count++ < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
			_putchar(alpha++);
		_putchar('\n');
	}
}

