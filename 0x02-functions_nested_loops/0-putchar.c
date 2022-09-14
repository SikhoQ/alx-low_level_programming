#include "main.h"


/**
 * main - Entry point
 *
 * Return: 0
 */
int	main(void)
{
	char	*str;
	int	i;

	str = "_putchar";
	i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');

	return (0);
}

