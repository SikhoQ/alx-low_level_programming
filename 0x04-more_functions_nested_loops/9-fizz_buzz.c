#include <stdio.h>

/**
 * fizz_buzz - prints 1 to 100, but prints "Fizz" for multiples of 3,
 * prints "Buzz" for multiples of 5, and prints "FizzBuzz"
 * for multiples of both 3 and 5.
 */
void	fizz_buzz(void)
{
	int	n;

	for (n = 1; n <= 100; n++)
	{
		if (!(n % 15))
			printf("FizzBuzz");
		else if (!(n % 3))
			printf("Fizz");
		else if (!(n % 5))
			printf("Buzz");
		else
			printf("%d", n);
		if (n == 100)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * main - Entry point
 *Return: Always 0 (success)
 */
int	main(void)
{
	fizz_buzz();

	return (0);
}

