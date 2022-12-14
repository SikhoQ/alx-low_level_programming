/**
 * _memcpy - copies one memory area to another.
 *
 * @dest: pointer to the memory to copy to.
 * @src: pointer to the memory area to copy from.
 * @n: number of bytes to be copied.
 *
 * Return: dest.
 */
char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

