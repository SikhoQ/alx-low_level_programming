#include <stddef.h>


/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to the string to be searched.
 * @accept: set of bytes to search for in s.
 *
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && accept[j] != s[i])
			++j;
		if (accept[j] == s[i])
			return (s + i);
		++i;
	}
	return (NULL);
}

