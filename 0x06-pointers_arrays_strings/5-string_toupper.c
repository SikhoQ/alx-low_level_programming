/**
 * string_toupper - converts all lowercase letters in a string to uppercase.
 *
 * @str: pointer to the string to be converted.
 *
 * Return: the converted string.
 */
char	*string_toupper(char *str)
{
	int	i;

	for (i = 0; str[i]; i++)
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

	return (*str);
}

