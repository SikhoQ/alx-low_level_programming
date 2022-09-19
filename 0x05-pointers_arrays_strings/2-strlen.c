/**
 * _strlen - returns the length of a string.
 *
 * @s: the string whose length is to be returned.
 *
 * Return: the length of string s.
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;

	while (s[i])
		i++;

	return (i);
}

