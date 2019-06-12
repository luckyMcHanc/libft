/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/09 11:19:52 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	if (dest && src)
	{
		pd = dest;
		ps = src;
		if (n <= 0)
			return (dest);
		if (ps < pd)
		{
			while (n)
			{
				pd[n - 1] = ps[n - 1];
				n--;
			}
			return (dest);
		}
		else
		{
			ft_memcpy(pd, ps, n);
			return (dest);
		}
	}
	return (NULL);
}
