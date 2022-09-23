#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: always 0 (success).
 */
int	main(void)
{
	char	num;

	for(num = '0'; num <= '9'; num++)
	{
		if (num != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num);
	}
	putchar('\n');
	return (0);
}

