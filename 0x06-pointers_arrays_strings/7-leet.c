/**
 * leet - encodes a string into 1337.
 *
 * @str: pointer to the string to be encoded.
 *
 * Return: encoded string, str.
 */
char	*leet(char *str)
{
	char	*letters = "AaEeOoTtLl";
	char	*numbers = "4433007711";

	int	i;
	int	j;

	for (i = 0; str[i]; i++)
		for (j = 0; letters[j]; j++)
			if (str[i] == letters[j])
				str[i] = numbers[j];
	return (str);
}

