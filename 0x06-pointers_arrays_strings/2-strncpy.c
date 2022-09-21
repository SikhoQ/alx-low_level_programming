/**
 * _strncpy - copies at most n bytes from src to dest.
 *
 * @dest: pointer to the string from which to copy.
 * @src: pointer to the string to which n bytes of dest will be copied.
 * @n: number of bytes to be copied from src.
 *
 * Return: pointer to dest.
 */
char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

