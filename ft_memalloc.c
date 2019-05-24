/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:03:05 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/24 14:22:33 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	mem = (char *)malloc(size);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}
