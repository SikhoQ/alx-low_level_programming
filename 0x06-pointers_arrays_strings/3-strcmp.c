/**
 * _strcmp - compares two strings.
 *
 * @s1: the firts string to be compared.
 * @s2: the second string to be compared.
 *
 * Return: an integer less than, greater than, or equal to zero if
 * s1 is found to be, respectively, less than, greater than, or equal to s2.
 */
int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		++i;

	return (s1[i] - s2[i]);
}

