#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: always 0 (success).
 */
int	main(void)
{
	int	num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}

