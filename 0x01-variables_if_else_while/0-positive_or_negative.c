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
	printf("%d is ", n);
	if (!n)
		printf("zero\n");
	else if (n > 0)
		printf("positive\n");
	else
		printf("negative\n");
	return (0);
}

