#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: always 0.
 */
int	main(void)
{
	int	num1, num2, num3;

	for (num1 = 48; num < 58; num1++)
		for (num2 = num1 + 1; num < 58; num2++)
			for (num3 = num2 + 1; num3 < 58; num3++)
			{
				if (num1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(num1);
				putchar(num2);
				putchar(num3);
			}
	putchar('\n');
	return (0);
}

