#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point.
 *
 * Return: Always 0 (success)
 */
int	main(void)
{
	srand(time(0));
	num = rand();

	printf("%d\n", num);

	return (0);
}

