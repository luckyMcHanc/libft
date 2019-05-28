/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/28 11:11:23 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;
	int			i;
	char		*temp;

	pd = dest;
	ps = src;
	i = 0;
	temp = (char *)malloc(sizeof(ps) + 1);
	while (i < n)
	{
		temp[i] = ps[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pd[i] = temp[i];
		i++;
	}
	pd[i] = '\0';
	return (dest);
}
