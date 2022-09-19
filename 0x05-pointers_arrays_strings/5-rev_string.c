/**
 * rev_string - reverse the order of the characters of
 * the string pointed to by s.
 *
 * @s:	the pointer pointing to the string to be reversed.
 */
void	rev_string(char *s)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = -1;

	while (s[i])
		++i;

	while (++j < --i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

