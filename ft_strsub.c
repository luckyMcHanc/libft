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
	size_t			i;
	char			*str;
	unsigned char	*st1;

	i = 0;
	str = (char *)ft_memalloc(sizeof(char) * len + 1);
	st1 = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
	if (st1 == NULL)
		return (0);
	while (i < len)
	{
		str[i] = st1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
