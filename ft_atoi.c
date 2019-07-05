/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:56:36 by lmhlanga          #+#    #+#             */
/*   Updated: 2019/06/26 15:23:21 by lmhlanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	res;
	int		negative;

	negative = 1;
	res = 0;
	if (str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
			++str;
		if (*str == '-')
			negative = -1;
		if (*str == '-' || *str == '+')
			++str;
		while (*str && *str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - 48);
			++str;
		}
		return (res * negative);
	}
	return (0);
}
