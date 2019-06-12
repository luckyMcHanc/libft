/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:40:57 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/05 08:59:00 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				i;

	i = 0;
	if (src && dst)
	{
		dp = (unsigned char *)dst;
		sp = (unsigned char *)src;
		while (sp[i] && i < n)
		{
			dp[i] = sp[i];
			if (dp[i] == (unsigned char)c)
				return (dst + i + 1);
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
