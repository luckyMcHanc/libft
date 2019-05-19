

char	*ft_strncpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
