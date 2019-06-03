/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:40:57 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 13:39:36 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dp;
	const char	*sp;
	size_t		i;

	i = 0;
	dp = dst;
	sp = src;
	while (i < n)
	{
		if (sp[i] != (unsigned char)c)
		{
			dp[i] = sp[i];
		}
		else
		{
			dp[i] = sp[i];
			i = n;
		}
		i++;
	}
	dp[i] = '\0';
	return (dst);
}
