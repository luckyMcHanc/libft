/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/20 12:56:54 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pd = dest;
	const unsigned char *ps = src;
	if (__np_anyptrlt(ps, pd))
		for (pd += n, ps += n; n--;)
			*--pd = *--ps;
	else
		while(n--)
			*pd++ = *ps++;
	return dest;
}
