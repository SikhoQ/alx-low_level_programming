/**
 * rot13 - encodes a string using rot13.
 *
 * @str: pointer to the string to be encoded.
 *
 * Return: encoded string, str.
 */
char	*rot13(char *str)
{
	int	i;
	int	j;
	char	*alpha = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; str[i]; i++)
		for (j = 0; alpha[j]; j++)
			if (str[i] == alpha[j])
			{
				str[i] = alpha[(j + 26) % 52];
				break;
			}
	return (str);
}

