char	*ft_strstr (char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] == '\0' && str[i] != '\0')
		{
			return ("");
		}
		k = 0;
		while (str[k] != '\0')
		{
			if (str[k] == to_find[i])
			{
				return (&str[k]);
			}
			k ++;
		}
		i ++;
	}
	return ("");
}
