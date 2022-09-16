#include "main.h"

/**
 * print_triangle - prints a right triangle to stdout
 * @size: height and base of the triangle
 */
void	print_triangle(int size)
{
	int	height;
	int	space;
	int	fill;

	for (height = 0; height < size; height++)
	{
		for (space = size - 1; space > 0; space--)
			_putchar(' ');
		for (fill = 0; fill < height + 1; fill++)
			_putchar('#');
		if (height != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

