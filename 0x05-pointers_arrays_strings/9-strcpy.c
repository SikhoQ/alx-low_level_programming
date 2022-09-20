/**
 * _strcpy - copies the characters in src to dest, including the
 * terminating null byte.
 *
 * @dest: the buffer to which the characters in src will be copied.
 * @src: the pointer to the string to be copied.
 *
 * Return: a pointer to dest.
 */
char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;

	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

