/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:37:26 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/25 15:45:48 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if (s == NULL)
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
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
	return (substr);
}
