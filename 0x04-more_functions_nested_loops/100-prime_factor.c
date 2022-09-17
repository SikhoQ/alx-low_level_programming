#include <stdio.h>
#include <math.h>

/**
 * is_factor - checks whether divisor is a factor of 612852475143.
 * @divisor: the integer to be checked.
 * Return: 1 if divisor is a factor, 0 otherwise.
 */
int	is_factor(long divisor)
{
	return (612852475143L % divisor == 0);
}

/**
 * is_prime - checks whether number passed as argument is prime.
 * @n: the number to be checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int	is_prime(long n)
{
	long	i;

	for (i = 2; i <= (long)sqrt((double)n); i++)
		if (!(n % i))
			return (0);
	return (1);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime factor of 612852475143.
 */
void	largest_prime_factor(void)
{
	long	num;
	long	divisor;
	long	result;

	num = 612852475143;
	result = 1;

	for (divisor = 2; divisor <= num / 2; divisor++)
		if (is_factor(divisor) && is_prime(divisor))
		{
			result *= divisor;
			if (result == num)
				break;
		}

	printf("%ld\n", divisor);
}

/**
 * main - entry point.
 * Return: always 0 (success).
 */
int	main(void)
{
	largest_prime_factor();

	return (0);
}

