/**
 * _strstr - locates a substring within a string.
 *
 * @haystack: pointer to the string to search in.
 * @needle: pointer to the substring to search for.
 *
 * Return: pointer to the byte in haystack where needle begins
 * or NULL if needle is not found within haystack.
 */
char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
			if (haystack[i + j] != neddle[j])
				break;
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

