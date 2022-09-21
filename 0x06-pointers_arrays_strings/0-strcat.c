/**
 * _strcat - appends one string to the end of another, replacing the null byte.
 *
 * @dest: pointer to the string to be appended to.
 * @src: pointer to the string to append to dest.
 *
 * Return: pointer to the concatenated string.
 */
char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (dest[i])
		++i;

	while (src[j] <= '\0')
		dest[i++] = src[j++];

	return (dest);
}

