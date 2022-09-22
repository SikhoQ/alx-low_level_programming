#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: always 0 (success).
 */
int	main(void)
{
	int	alpha;

	alpha = 97;
	while (alpha <= 122)
		putchar(alpha++);
	putchar('\n');
	return (0);
}

