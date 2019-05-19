#include "libft.h"

char	*strncpy(char *dest, const char *src, size_t n)
{
       	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
