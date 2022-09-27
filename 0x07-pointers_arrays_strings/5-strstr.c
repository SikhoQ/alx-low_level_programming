#include <stddef.h>


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

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}

