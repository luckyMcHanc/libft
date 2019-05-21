/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/21 14:14:48 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char *ps;

	pd = dest;
	ps = src;
	if (__np_anyptrlt(ps, pd))
		while ( pd += n && ps += n)
		{
			*--pd = *--ps;
			n--;
		}
	else
		while(n--)
			*pd++ = *ps++;
	return (dest);
}
