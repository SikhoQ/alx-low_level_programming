/**
 * _strncat - appends at most n bytes of a string to another.
 *
 * @dest: pointer to the string to be appended to.
 * @src: pointer to the string to append to dest.
 * @n: number of bytes to append.
 *
 * Return: pointer to the concatenated string.
 */
char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

