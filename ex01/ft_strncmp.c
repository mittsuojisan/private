int	ft_strncmp (char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
