#include <stdio.h>

/**
 * compute_sum - computes and returns the sum of all multpiles of 3 or 5
 * that are less than 1024
 * Return: the computed sum
 */
int	compute_sum(void)
{
	int	total;
	int	num;

	total = 0;
	num = 3;

	while (num < 1024)
		if (!(num % 3) || !(num % 5))
			total += num++;

	return (total);
}

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int	main(void)
{
	printf("%d\n", compute_sum());

	return (0);
}

