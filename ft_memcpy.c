/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:46:20 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/20 10:49:54 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dp;
	const char *sp;

	dp = dest;
	sp = src;
	while (n--)
	{
		*dp++ = *sp++;
	}
	return dest;
}
