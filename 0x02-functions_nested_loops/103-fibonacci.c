#include <stdio.h>

/**
 * fibonacci_sum - sums and prints all even terms not exceeding 4,000,000
 */
void	fibonacci_sum(void)
{
	int	previous;
	int	current;
	int	temp;
	long	total;

	previous = 1;
	current = 2;
	while (current <= 4000000)
	{
		if (!(current % 2))
			total += current;
		temp = current;
		current += previous;
		previous = temp;
	}
	printf("%d\n", current);
}

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int	main(void)
{
	fibonacci_sum();

	return (0);
}
