/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:37:26 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 14:53:04 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	unsigned int	l;

	if (s == NULL)
	{
		return (NULL);
	}
	l = 0;
	len = ft_strlen(s);
	if (l < start)
	{
		return (NULL);
	}
	i = 0;
	substr = (char *)malloc(len);
	while ((i < len) && (s[start] != '\0'))
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
