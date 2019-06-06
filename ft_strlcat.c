#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (size == i)
		return (size + ft_strlen(src));
	j = 0;
	while (size > (i + j + 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (size == (i + j + 1))
	{
		while (src[j])
			j++;
	}
	return (i + j);
}
