#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: always 0 (success).
 */
int	main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (!(n % 10))
		printf("0");
	else if ((n % 10) > 5)
		printf("greater than 5");
	else
		printf("less than 6 and not 0");
	return (0);
}

