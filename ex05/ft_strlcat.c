unsigned int	ft_strlcat (char *dest, char *src, unsigned int size)
{
	int				i;
	int				k;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i ++;
		a ++;
	}
	k = 0;
	while (k < size - a - 1 )
	{
		dest[i] = src[k];
		i ++;
		k ++;
	}
	dest[i] = '\0';
	return (size + a / 2);
}
