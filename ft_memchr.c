/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:47:11 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/07 12:49:18 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	if (s)
	{
		p = (unsigned char *)s;
		while (i < (size_t)n)
		{
			if (p[i] != (unsigned char)c)
				i++;
			else
				return (p + i);
		}
		return (NULL);
	}
	return (NULL);
}
