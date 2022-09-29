/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: number to be raised.
 * @y: power to raise to.
 *
 * Return: result of raising x to y.
 */
int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

