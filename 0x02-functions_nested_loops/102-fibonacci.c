#include <stdio.h>

/**
 * print_fibonacci_50 - prints first 50 terms of fibonacci sequence
 */
void	print_fibonacci_50(void)
{
	int	previous;
	int	current;
	int	i;
	int	temp;

	previous = 1;
	current = 2;
	i = 1;

	printf("%d, %d, ", previous, current);
	while (i++ <= 48)
	{
		temp = current;
		current += previous;
		previous = temp;
		if (i == 48)
			printf("%d\n", current);
		else
			printf("%d, ", current);
	}

}

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int	main(void)
{
	print_fibonacci_50();

	return (0);
}

