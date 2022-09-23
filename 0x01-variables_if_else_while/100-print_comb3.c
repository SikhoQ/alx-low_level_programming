#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: always 0.
 */
int	main(void)
{
	int	num1;
	int	num2;

	for (num1 = 48; num1 < 58, num1++)
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}

