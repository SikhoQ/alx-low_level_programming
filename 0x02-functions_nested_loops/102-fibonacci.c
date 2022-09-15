#include <stdio.h>

/**
 * print_fibonacci_50 - prints first 50 terms of fibonacci sequence
 */
void	print_fibonacci_50(void)
{
	long	previous;
	long	current;
	long	temp;
	int	i;

	previous = 1;
	current = 2;
	i = 1;

	printf("%ld, %ld, ", previous, current);
	while (i <= 48)
	{
		temp = current;
		current += previous;
		previous = temp;
		if (i++ == 48)
			printf("%ld\n", current);
		else
			printf("%ld, ", current);
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

