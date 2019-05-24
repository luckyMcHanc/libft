/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:22:48 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/05/24 15:53:32 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstr;

	newstr = (char *)malloc(size);
	if (newstr == NULL)
	{
		return (NULL);
	}
	ft_bzero(newstr, size);
	return (newstr);
}
