/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:43:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/05 09:00:41 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;
	size_t		i;
	char		*temp;

	pd = dest;
	ps = src;
	temp = (char *)malloc(ft_strlen(src));
	i = 0;
	if (pd == NULL && ps == NULL)
		return (NULL);
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
	return (dest);
}
