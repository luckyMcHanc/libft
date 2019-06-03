/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:46:20 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/03 14:50:19 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	dp[i] = '\0';
	return (dst);
}
