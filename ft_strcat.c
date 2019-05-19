#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t dest_len = ft_strlen(dest);
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return dest;
}
