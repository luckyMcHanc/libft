#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int i;
	int len;
	char *temp;

	len = ft_strlen(s);
	i = 0;
	temp = malloc(sizeof((*s) * (len)));
	while(i < len)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
