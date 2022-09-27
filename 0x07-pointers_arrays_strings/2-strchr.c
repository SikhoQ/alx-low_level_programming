#include <stddef.h>


/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to the string in which to search.
 * @c: character to look for in s.
 *
 * Return: pointer to the first occurrnce of c in s, or NULL if c is not found.
 */
char	*_strchr(char *s, char c)
{
	while (*s != c && *s)
		s++;
	if (*s == c)
		return (s);
	return (NULL);
}

