/**
 * is_separator - checks if a character is a valid separator.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a separator, 0 otherwise.
 */
int	is_separator(char c)
{
	char	separators[] = " \t\n,;.!?\"(){}";

	int	i;

	for (i = 0; separators[i]; i++)
		if (c == separators[i])
			return (1);
	return (0);
}

/**
 * is_low_char - checks if a character is a lowercase letter.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int	is_low_char(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * cap_string - capitalizes the first letters of the words of a string.
 *
 * @s: pointer to the string to be capitalized.
 *
 * Return: capitalized str.
 */
char	*cap_string(char *s)
{
	int	i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 && is_low_char(s[i]))
			s[i] -= 32;
		else if (s[i + 1] && is_separator(s[i]) && is_low_char(s[i + 1]))
			s[i + 1] -= 32;
	}

	return (s);
}

