char	*ft_strncat (char *dest, char *src, unsigned int nb)
{
	int	i;
	int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	k = 0;
	while (k < nb)
	{
		dest[i] = src[k];
		i ++;
		k ++;
	}
	dest[i] = '\0';
	return (dest);
}
