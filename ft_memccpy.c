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
#include <stdio.h>

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
		dp[i] = sp[i];
		if ((unsigned char)dp[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
