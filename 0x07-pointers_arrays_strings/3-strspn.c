/**
 * _strspn - calculates the length of the initial segment of s
 * which consists entirely of bytes from accept.
 *
 * @s: pointer to the string from which to calculate.
 * @accept: pointer to bytes to look for in s.
 *
 * Return: number of bytes in the initial segment of s
 * which consists only of the bytes from accept.
 */
int	_strspn(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			++j;
		if (!accept[j])
			return (i);
		++i;
	}
	return (i);
}

